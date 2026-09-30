/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController$$UpdateVolume
ENTRY_POINT: 0634195c
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController__UpdateVolume(ulong *param_1)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 extraout_x1;
  long lVar14;
  ulong in_x9;
  uint in_w11;
  long *unaff_x19;
  long lVar15;
  long lVar16;
  long unaff_x23;
  int iVar17;
  long *unaff_x24;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
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
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
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
  
  while (in_w11 != 0) {
    bVar3 = 1;
    bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar4) {
      *param_1 = *param_1 | in_x9;
      bVar3 = ExclusiveMonitorsStatus();
    }
    in_w11 = (uint)bVar3;
  }
  lVar15 = unaff_x19[10];
  if (lVar15 != 0) {
    if (DAT_086ee708 == (code *)0x0) {
      DAT_086ee708 = (code *)FUN_033d1b68("UnityEngine.Mesh::get_bindposes()");
    }
    uVar12 = (*DAT_086ee708)(lVar15);
    lVar15 = FUN_03398a84(DAT_083c4b88);
    FUN_04a3f404(lVar15,uVar12,DAT_083f28c8);
    if (DAT_086de461 == '\0') {
      FUN_0335b6c8(&DAT_083ce8e8,1);
      DataMemoryBarrier(2,3);
      DAT_086de461 = '\x01';
    }
    lVar16 = DAT_083f28d8;
    lVar14 = *(long *)(DAT_083ce8e8 + 0xb8);
    in_stack_00000078 = *(undefined8 *)(lVar14 + 0x68);
    in_stack_00000070 = *(undefined8 *)(lVar14 + 0x60);
    in_stack_00000088 = *(undefined8 *)(lVar14 + 0x78);
    in_stack_00000080 = *(undefined8 *)(lVar14 + 0x70);
    in_stack_00000058 = *(undefined8 *)(lVar14 + 0x48);
    in_stack_00000050 = *(undefined8 *)(lVar14 + 0x40);
    in_stack_00000068 = *(undefined8 *)(lVar14 + 0x58);
    in_stack_00000060 = *(undefined8 *)(lVar14 + 0x50);
    if (lVar15 != 0) {
      lVar14 = *(long *)(lVar15 + 0x10);
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      in_stack_000000b0 = in_stack_00000050;
      in_stack_000000b8 = in_stack_00000058;
      in_stack_000000c0 = in_stack_00000060;
      in_stack_000000c8 = in_stack_00000068;
      in_stack_000000d0 = in_stack_00000070;
      in_stack_000000d8 = in_stack_00000078;
      in_stack_000000e0 = in_stack_00000080;
      in_stack_000000e8 = in_stack_00000088;
      if (lVar14 != 0) {
        uVar6 = *(uint *)(lVar15 + 0x18);
        if (uVar6 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar15 + 0x18) = uVar6 + 1;
          lVar14 = lVar14 + (long)(int)uVar6 * 0x40;
          *(undefined8 *)(lVar14 + 0x48) = in_stack_00000078;
          *(undefined8 *)(lVar14 + 0x40) = in_stack_00000070;
          *(undefined8 *)(lVar14 + 0x58) = in_stack_00000088;
          *(undefined8 *)(lVar14 + 0x50) = in_stack_00000080;
          *(undefined8 *)(lVar14 + 0x28) = in_stack_00000058;
          *(undefined8 *)(lVar14 + 0x20) = in_stack_00000050;
          *(undefined8 *)(lVar14 + 0x38) = in_stack_00000068;
          *(undefined8 *)(lVar14 + 0x30) = in_stack_00000060;
        }
        else {
          in_stack_000000f0 = in_stack_00000050;
          _uStack00000000000000f8 = in_stack_00000058;
          _fStack0000000000000100 = in_stack_00000060;
          in_stack_00000108 = in_stack_00000068;
          in_stack_00000110 = in_stack_00000070;
          in_stack_00000118 = in_stack_00000078;
          in_stack_00000120 = in_stack_00000080;
          in_stack_00000128 = in_stack_00000088;
          FUN_04a3fcec(lVar15,&stack0x000000f0,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        lVar16 = *unaff_x24;
        uVar12 = FUN_04a418f8(lVar15,DAT_083f28f0);
        if (lVar16 != 0) {
          if (DAT_086ee710 == (code *)0x0) {
            DAT_086ee710 = (code *)FUN_033d1b68(
                                               "UnityEngine.Mesh::set_bindposes(UnityEngine.Matrix4x4[])"
                                               );
          }
          (*DAT_086ee710)(lVar16,uVar12);
          *(undefined1 *)((long)unaff_x19 + 0x9b) = 0;
          if (*(int *)((long)unaff_x19 + 0x4c) == 1) {
            lVar15 = unaff_x19[0xe];
            if (*(int *)(*(long *)(unaff_x23 + 0x7d8) + 0xe0) == 0) {
              FUN_033b9870();
            }
            uVar7 = FUN_07a11b14(lVar15,0);
            if ((uVar7 & 1) == 0) {
              lVar15 = unaff_x19[10];
              if (lVar15 == 0) goto LAB_06341ad0;
              in_stack_000000f0 = 0;
              _uStack00000000000000f8 = 0;
              _fStack0000000000000100 = 0;
              pcVar8 = DAT_086ee7c0;
              if (DAT_086ee7c0 == (code *)0x0) {
                pcVar8 = (code *)FUN_033d1b68(
                                             "UnityEngine.Mesh::get_bounds_Injected(UnityEngine.Bounds&)"
                                             );
                DAT_086ee7c0 = pcVar8;
              }
            }
            else {
              lVar15 = unaff_x19[0xe];
              if (lVar15 == 0) goto LAB_06341ad0;
              in_stack_000000f0 = 0;
              _uStack00000000000000f8 = 0;
              _fStack0000000000000100 = 0;
              pcVar8 = DAT_086eddc8;
              if (DAT_086eddc8 == (code *)0x0) {
                pcVar8 = (code *)FUN_033d1b68(
                                             "UnityEngine.Renderer::get_localBounds_Injected(UnityEngine.Bounds&)"
                                             );
                DAT_086eddc8 = pcVar8;
              }
            }
            (*pcVar8)(lVar15,&stack0x000000f0);
            fVar23 = fStack00000000000000fc;
            if (fStack00000000000000fc <= fStack0000000000000100) {
              fVar23 = fStack0000000000000100;
            }
            in_stack_00000098 = uStack00000000000000f8;
            if (fVar23 <= fStack0000000000000104) {
              fVar23 = fStack0000000000000104;
            }
            in_stack_00000090 = in_stack_000000f0;
            in_stack_000000a0 = in_stack_000000f0;
            in_stack_000000a8 = uStack00000000000000f8;
            if (DAT_086d7c54 == '\0') {
              FUN_0335b6c8(&DAT_083d2c90,1);
              DataMemoryBarrier(2,3);
              DAT_086d7c54 = '\x01';
            }
            lVar16 = unaff_x19[0xe];
            fVar23 = fVar23 + fVar23;
            lVar15 = *(long *)(DAT_083d2c90 + 0xb8);
            fVar24 = *(float *)(lVar15 + 0xc);
            fVar19 = *(float *)(lVar15 + 0x10);
            fVar21 = *(float *)(lVar15 + 0x14);
            if (*(int *)(*(long *)(unaff_x23 + 0x7d8) + 0xe0) == 0) {
              FUN_033b9870();
            }
            fVar24 = fVar23 * fVar24;
            fVar19 = fVar23 * fVar19;
            fVar23 = fVar23 * fVar21;
            uVar7 = FUN_07a11b14(lVar16,0);
            if ((uVar7 & 1) == 0) {
              lVar15 = *unaff_x24;
              in_stack_000000f0 = in_stack_000000a0;
              _uStack00000000000000f8 = CONCAT44(fStack00000000000000fc,in_stack_000000a8);
              if (lVar15 == 0) goto LAB_06341ad0;
              in_stack_00000020 = in_stack_000000a0;
              uStack0000000000000028 = in_stack_000000a8;
              fStack000000000000002c = fVar24;
              fStack0000000000000030 = fVar19;
              fStack0000000000000034 = fVar23;
              if (DAT_086ee7c8 == (code *)0x0) {
                DAT_086ee7c8 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Mesh::set_bounds_Injected(UnityEngine.Bounds&)"
                                                  );
              }
              puVar13 = &stack0x00000020;
              pcVar8 = DAT_086ee7c8;
            }
            else {
              lVar15 = unaff_x19[0xe];
              in_stack_000000f0 = in_stack_000000a0;
              _uStack00000000000000f8 = CONCAT44(fStack00000000000000fc,in_stack_000000a8);
              if (lVar15 == 0) goto LAB_06341ad0;
              in_stack_00000038 = in_stack_000000a0;
              uStack0000000000000040 = in_stack_000000a8;
              fStack0000000000000044 = fVar24;
              fStack0000000000000048 = fVar19;
              fStack000000000000004c = fVar23;
              if (DAT_086eddd0 == (code *)0x0) {
                DAT_086eddd0 = (code *)FUN_033d1b68(
                                                  "UnityEngine.Renderer::set_localBounds_Injected(UnityEngine.Bounds&)"
                                                  );
              }
              puVar13 = &stack0x00000038;
              pcVar8 = DAT_086eddd0;
            }
            (*pcVar8)(lVar15,puVar13);
          }
          if (unaff_x19[10] != 0) {
            uVar5 = FUN_07a117e0(unaff_x19[10],0);
            lVar15 = FUN_05b961dc(DAT_083dfcb0);
            if ((lVar15 != 0) && (lVar15 = FUN_06317920(lVar15,0), lVar15 != 0)) {
              uVar7 = FUN_06367184(lVar15,uVar5,0);
              lVar15 = FUN_05b961dc(DAT_083dfcb0);
              if (lVar15 != 0) {
                lVar15 = FUN_06317920(lVar15,0);
                lVar16 = (**(code **)(*unaff_x19 + 0x1f8))();
                if (lVar16 != 0) {
                  cVar2 = *(char *)(lVar16 + 0x20);
                  lVar16 = (**(code **)(*unaff_x19 + 0x1f8))();
                  if (lVar16 != 0) {
                    uVar22 = *(undefined4 *)(lVar16 + 0x88);
                    uVar20 = *(undefined4 *)(lVar16 + 0x8c);
                    uVar18 = *(undefined4 *)(lVar16 + 0x90);
                    lVar16 = (**(code **)(*unaff_x19 + 0x1f8))();
                    if (lVar16 != 0) {
                      uVar1 = *(undefined4 *)(lVar16 + 0x24);
                      uVar9 = FUN_0633d928();
                      if ((uVar9 & 1) == 0) {
                        iVar17 = 0;
                      }
                      else {
                        if (unaff_x19[0x10] == 0) goto LAB_06341ad0;
                        iVar17 = *(int *)(unaff_x19[0x10] + 0x18) + -1;
                      }
                      uVar9 = FUN_0633d928();
                      if ((uVar9 & 1) == 0) {
                        uVar12 = 0;
                      }
                      else {
                        if (unaff_x19[10] == 0) goto LAB_06341ad0;
                        FUN_079e72fc(unaff_x19[10],0);
                        uVar12 = extraout_x1;
                      }
                      if (lVar15 != 0) {
                        uVar5 = FUN_063669e4(uVar22,uVar20,uVar18,lVar15,uVar5,cVar2 != '\0',uVar1,
                                             iVar17,uVar12,0);
                        *(undefined4 *)(unaff_x19 + 7) = uVar5;
                        if ((uVar7 & 1) != 0) {
                          lVar15 = FUN_05b961dc(DAT_083dfcb0);
                          if (lVar15 == 0) goto LAB_06341ad0;
                          lVar16 = FUN_06317920(lVar15,0);
                          lVar15 = unaff_x19[7];
                          uVar6 = FUN_0633d928();
                          if (unaff_x19[10] == 0) goto LAB_06341ad0;
                          uVar12 = FUN_079e8100(unaff_x19[10],0);
                          if (unaff_x19[10] == 0) goto LAB_06341ad0;
                          uVar10 = FUN_079e81b4(unaff_x19[10],0);
                          if (unaff_x19[10] == 0) goto LAB_06341ad0;
                          uVar11 = FUN_079e8268(unaff_x19[10],0);
                          if (unaff_x19[10] == 0) goto LAB_06341ad0;
                          auVar25 = FUN_079e7414(unaff_x19[10],0);
                          if ((unaff_x19[10] == 0) || (FUN_079e72fc(unaff_x19[10],0), lVar16 == 0))
                          goto LAB_06341ad0;
                          FUN_063671fc(lVar16,(int)lVar15,uVar6 & 1,uVar12,uVar10,uVar11,
                                       auVar25._0_8_,auVar25._8_8_);
                        }
                        lVar15 = FUN_05b961dc(DAT_083dfcb0);
                        if ((lVar15 != 0) && (lVar15 = FUN_06317920(lVar15,0), lVar15 != 0)) {
                          FUN_06366fcc(lVar15,(int)unaff_x19[7],0);
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
  }
LAB_06341ad0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


