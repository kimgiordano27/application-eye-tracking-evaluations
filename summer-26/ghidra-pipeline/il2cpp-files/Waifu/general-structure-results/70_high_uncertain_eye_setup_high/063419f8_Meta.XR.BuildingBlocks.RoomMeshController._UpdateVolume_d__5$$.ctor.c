/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<UpdateVolume>d__5$$.ctor
ENTRY_POINT: 063419f8
PROGRAM: Waifu-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5___ctor
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               undefined1 param_4 [16])

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 extraout_x1;
  long lVar12;
  long *unaff_x19;
  long lVar13;
  long unaff_x20;
  long unaff_x23;
  int iVar14;
  long *unaff_x24;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000048;
  float fStack000000000000004c;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 uStack00000000000000f8;
  float fStack00000000000000fc;
  float fStack0000000000000100;
  float fStack0000000000000104;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  
  uVar8 = param_4._8_8_;
  uStack0000000000000060 = param_4._0_8_;
  uVar10 = param_3._8_8_;
  uStack0000000000000050 = param_3._0_8_;
  if (unaff_x20 != 0) {
    in_stack_000000d8 = in_stack_00000078;
    in_stack_000000d0 = in_stack_00000070;
    in_stack_000000e8 = in_stack_00000088;
    in_stack_000000e0 = in_stack_00000080;
    lVar12 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    in_stack_000000b0 = uStack0000000000000050;
    in_stack_000000b8 = uVar10;
    in_stack_000000c0 = uStack0000000000000060;
    in_stack_000000c8 = uVar8;
    if (lVar12 != 0) {
      uVar4 = *(uint *)(unaff_x20 + 0x18);
      if (uVar4 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar4 + 1;
        lVar12 = lVar12 + (long)(int)uVar4 * 0x40;
        *(undefined8 *)(lVar12 + 0x48) = in_stack_00000078;
        *(undefined8 *)(lVar12 + 0x40) = in_stack_00000070;
        *(undefined8 *)(lVar12 + 0x58) = in_stack_00000088;
        *(undefined8 *)(lVar12 + 0x50) = in_stack_00000080;
        *(undefined8 *)(lVar12 + 0x28) = uVar10;
        *(undefined8 *)(lVar12 + 0x20) = uStack0000000000000050;
        *(undefined8 *)(lVar12 + 0x38) = uVar8;
        *(undefined8 *)(lVar12 + 0x30) = uStack0000000000000060;
      }
      else {
        in_stack_00000118 = in_stack_00000078;
        in_stack_00000110 = in_stack_00000070;
        in_stack_00000128 = in_stack_00000088;
        in_stack_00000120 = in_stack_00000080;
        in_stack_000000f0 = uStack0000000000000050;
        _uStack00000000000000f8 = uVar10;
        _fStack0000000000000100 = uStack0000000000000060;
        in_stack_00000108 = uVar8;
        FUN_04a3fcec();
      }
      lVar12 = *unaff_x24;
      uVar10 = FUN_04a418f8();
      if (lVar12 != 0) {
        if (DAT_086ee710 == (code *)0x0) {
          DAT_086ee710 = (code *)FUN_033d1b68(
                                             "UnityEngine.Mesh::set_bindposes(UnityEngine.Matrix4x4[])"
                                             );
        }
        (*DAT_086ee710)(lVar12,uVar10);
        *(undefined1 *)((long)unaff_x19 + 0x9b) = 0;
        if (*(int *)((long)unaff_x19 + 0x4c) == 1) {
          lVar12 = unaff_x19[0xe];
          if (*(int *)(*(long *)(unaff_x23 + 0x7d8) + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar5 = FUN_07a11b14(lVar12,0);
          if ((uVar5 & 1) == 0) {
            lVar12 = unaff_x19[10];
            if (lVar12 == 0) goto LAB_06341ad0;
            in_stack_000000f0 = 0;
            _uStack00000000000000f8 = 0;
            _fStack0000000000000100 = 0;
            pcVar6 = DAT_086ee7c0;
            if (DAT_086ee7c0 == (code *)0x0) {
              pcVar6 = (code *)FUN_033d1b68(
                                           "UnityEngine.Mesh::get_bounds_Injected(UnityEngine.Bounds&)"
                                           );
              DAT_086ee7c0 = pcVar6;
            }
          }
          else {
            lVar12 = unaff_x19[0xe];
            if (lVar12 == 0) goto LAB_06341ad0;
            in_stack_000000f0 = 0;
            _uStack00000000000000f8 = 0;
            _fStack0000000000000100 = 0;
            pcVar6 = DAT_086eddc8;
            if (DAT_086eddc8 == (code *)0x0) {
              pcVar6 = (code *)FUN_033d1b68(
                                           "UnityEngine.Renderer::get_localBounds_Injected(UnityEngine.Bounds&)"
                                           );
              DAT_086eddc8 = pcVar6;
            }
          }
          (*pcVar6)(lVar12,&stack0x000000f0);
          fVar20 = fStack00000000000000fc;
          if (fStack00000000000000fc <= fStack0000000000000100) {
            fVar20 = fStack0000000000000100;
          }
          in_stack_00000098 = uStack00000000000000f8;
          if (fVar20 <= fStack0000000000000104) {
            fVar20 = fStack0000000000000104;
          }
          in_stack_00000090 = in_stack_000000f0;
          in_stack_000000a0 = in_stack_000000f0;
          in_stack_000000a8 = uStack00000000000000f8;
          if (DAT_086d7c54 == '\0') {
            FUN_0335b6c8(&DAT_083d2c90,1);
            DataMemoryBarrier(2,3);
            DAT_086d7c54 = '\x01';
          }
          lVar13 = unaff_x19[0xe];
          fVar20 = fVar20 + fVar20;
          lVar12 = *(long *)(DAT_083d2c90 + 0xb8);
          fVar21 = *(float *)(lVar12 + 0xc);
          fVar16 = *(float *)(lVar12 + 0x10);
          fVar18 = *(float *)(lVar12 + 0x14);
          if (*(int *)(*(long *)(unaff_x23 + 0x7d8) + 0xe0) == 0) {
            FUN_033b9870();
          }
          fVar21 = fVar20 * fVar21;
          fVar16 = fVar20 * fVar16;
          fVar20 = fVar20 * fVar18;
          uVar5 = FUN_07a11b14(lVar13,0);
          if ((uVar5 & 1) == 0) {
            lVar12 = *unaff_x24;
            in_stack_000000f0 = in_stack_000000a0;
            _uStack00000000000000f8 = CONCAT44(fStack00000000000000fc,in_stack_000000a8);
            if (lVar12 == 0) goto LAB_06341ad0;
            in_stack_00000020 = in_stack_000000a0;
            uStack0000000000000028 = in_stack_000000a8;
            fStack000000000000002c = fVar21;
            fStack0000000000000030 = fVar16;
            fStack0000000000000034 = fVar20;
            if (DAT_086ee7c8 == (code *)0x0) {
              DAT_086ee7c8 = (code *)FUN_033d1b68(
                                                 "UnityEngine.Mesh::set_bounds_Injected(UnityEngine.Bounds&)"
                                                 );
            }
            puVar11 = &stack0x00000020;
            pcVar6 = DAT_086ee7c8;
          }
          else {
            lVar12 = unaff_x19[0xe];
            in_stack_000000f0 = in_stack_000000a0;
            _uStack00000000000000f8 = CONCAT44(fStack00000000000000fc,in_stack_000000a8);
            if (lVar12 == 0) goto LAB_06341ad0;
            in_stack_00000038 = in_stack_000000a0;
            uStack0000000000000040 = in_stack_000000a8;
            fStack0000000000000044 = fVar21;
            fStack0000000000000048 = fVar16;
            fStack000000000000004c = fVar20;
            if (DAT_086eddd0 == (code *)0x0) {
              DAT_086eddd0 = (code *)FUN_033d1b68(
                                                 "UnityEngine.Renderer::set_localBounds_Injected(UnityEngine.Bounds&)"
                                                 );
            }
            puVar11 = &stack0x00000038;
            pcVar6 = DAT_086eddd0;
          }
          (*pcVar6)(lVar12,puVar11);
        }
        if (unaff_x19[10] != 0) {
          uVar3 = FUN_07a117e0(unaff_x19[10],0);
          lVar12 = FUN_05b961dc(DAT_083dfcb0);
          if ((lVar12 != 0) && (lVar12 = FUN_06317920(lVar12,0), lVar12 != 0)) {
            uVar5 = FUN_06367184(lVar12,uVar3,0);
            lVar12 = FUN_05b961dc(DAT_083dfcb0);
            if (lVar12 != 0) {
              lVar12 = FUN_06317920(lVar12,0);
              lVar13 = (**(code **)(*unaff_x19 + 0x1f8))();
              if (lVar13 != 0) {
                cVar2 = *(char *)(lVar13 + 0x20);
                lVar13 = (**(code **)(*unaff_x19 + 0x1f8))();
                if (lVar13 != 0) {
                  uVar19 = *(undefined4 *)(lVar13 + 0x88);
                  uVar17 = *(undefined4 *)(lVar13 + 0x8c);
                  uVar15 = *(undefined4 *)(lVar13 + 0x90);
                  lVar13 = (**(code **)(*unaff_x19 + 0x1f8))();
                  if (lVar13 != 0) {
                    uVar1 = *(undefined4 *)(lVar13 + 0x24);
                    uVar7 = FUN_0633d928();
                    if ((uVar7 & 1) == 0) {
                      iVar14 = 0;
                    }
                    else {
                      if (unaff_x19[0x10] == 0) goto LAB_06341ad0;
                      iVar14 = *(int *)(unaff_x19[0x10] + 0x18) + -1;
                    }
                    uVar7 = FUN_0633d928();
                    if ((uVar7 & 1) == 0) {
                      uVar10 = 0;
                    }
                    else {
                      if (unaff_x19[10] == 0) goto LAB_06341ad0;
                      FUN_079e72fc(unaff_x19[10],0);
                      uVar10 = extraout_x1;
                    }
                    if (lVar12 != 0) {
                      uVar3 = FUN_063669e4(uVar19,uVar17,uVar15,lVar12,uVar3,cVar2 != '\0',uVar1,
                                           iVar14,uVar10,0);
                      *(undefined4 *)(unaff_x19 + 7) = uVar3;
                      if ((uVar5 & 1) != 0) {
                        lVar12 = FUN_05b961dc(DAT_083dfcb0);
                        if (lVar12 == 0) goto LAB_06341ad0;
                        lVar13 = FUN_06317920(lVar12,0);
                        lVar12 = unaff_x19[7];
                        uVar4 = FUN_0633d928();
                        if (unaff_x19[10] == 0) goto LAB_06341ad0;
                        uVar10 = FUN_079e8100(unaff_x19[10],0);
                        if (unaff_x19[10] == 0) goto LAB_06341ad0;
                        uVar8 = FUN_079e81b4(unaff_x19[10],0);
                        if (unaff_x19[10] == 0) goto LAB_06341ad0;
                        uVar9 = FUN_079e8268(unaff_x19[10],0);
                        if (unaff_x19[10] == 0) goto LAB_06341ad0;
                        auVar22 = FUN_079e7414(unaff_x19[10],0);
                        if ((unaff_x19[10] == 0) || (FUN_079e72fc(unaff_x19[10],0), lVar13 == 0))
                        goto LAB_06341ad0;
                        FUN_063671fc(lVar13,(int)lVar12,uVar4 & 1,uVar10,uVar8,uVar9,auVar22._0_8_,
                                     auVar22._8_8_);
                      }
                      lVar12 = FUN_05b961dc(DAT_083dfcb0);
                      if ((lVar12 != 0) && (lVar12 = FUN_06317920(lVar12,0), lVar12 != 0)) {
                        FUN_06366fcc(lVar12,(int)unaff_x19[7],0);
                        FUN_06340e18();
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_06341ad0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


