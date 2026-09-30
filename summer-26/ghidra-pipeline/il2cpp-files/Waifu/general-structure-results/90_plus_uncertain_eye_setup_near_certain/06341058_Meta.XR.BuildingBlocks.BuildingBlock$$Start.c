/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.BuildingBlock$$Start
ENTRY_POINT: 06341058
PROGRAM: Waifu-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_BuildingBlock__Start(long param_1)

{
  ulong *puVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 extraout_x1;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *unaff_x19;
  long *plVar18;
  long lVar19;
  long unaff_x23;
  ulong uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
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
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar8 = FUN_07a119fc();
  if ((uVar8 & 1) != 0) {
LAB_0634112c:
    if (unaff_x19[5] != 0) {
      *(undefined1 *)(unaff_x19[5] + 0x12) = 1;
      return;
    }
    goto LAB_06341ad0;
  }
  if (unaff_x19[3] == 0) goto LAB_06341ad0;
  lVar9 = FUN_03fa1bc8(unaff_x19[3],DAT_0840ccc0);
  plVar18 = unaff_x19 + 0xc;
  *plVar18 = lVar9;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)plVar18 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar18 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar9 = *plVar18;
  }
  if (*(int *)(*(long *)(unaff_x23 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar8 = FUN_07a119fc(lVar9,0,0);
  if ((uVar8 & 1) != 0) goto LAB_0634112c;
  plVar10 = (long *)(**(code **)(*unaff_x19 + 0x1f8))();
  if (plVar10 == (long *)0x0) goto LAB_06341ad0;
  iVar5 = (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
  if (iVar5 != 0) goto LAB_0634112c;
  lVar9 = (**(code **)(*unaff_x19 + 0x1f8))();
  if (lVar9 == 0) goto LAB_06341ad0;
  *(undefined4 *)((long)unaff_x19 + 0x3c) = *(undefined4 *)(lVar9 + 0x24);
  lVar9 = (**(code **)(*unaff_x19 + 0x1f8))();
  if (lVar9 == 0) goto LAB_06341ad0;
  uVar6 = *(undefined4 *)(lVar9 + 0x58);
  plVar10 = unaff_x19 + 0x11;
  *plVar10 = 0;
  uVar8 = (ulong)plVar10 >> 0xc;
  *(undefined4 *)((long)unaff_x19 + 0x44) = uVar6;
  iVar5 = DAT_08908cd0;
  uVar20 = (ulong)plVar10 >> 0x12 & 0x7fff;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + uVar20;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = *puVar1 | 1L << (uVar8 & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar18 = (long *)*plVar18;
  if (plVar18 == (long *)0x0) {
LAB_06341220:
    lVar9 = unaff_x19[10];
    if (*(int *)(*(long *)(unaff_x23 + 0x7d8) + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar9 = FUN_04085ecc(lVar9,DAT_08413e50);
    *plVar10 = lVar9;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + uVar20;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << (uVar8 & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (unaff_x19[3] == 0) goto LAB_06341ad0;
    lVar9 = FUN_03fa1bc8(unaff_x19[3],DAT_0840cc40);
    plVar18 = unaff_x19 + 0xd;
    *plVar18 = lVar9;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar18 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar18 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  else {
    if ((*(byte *)(*plVar18 + 0x130) < *(byte *)(DAT_083d1280 + 0x130)) ||
       (*(long *)(*(long *)(*plVar18 + 200) + (ulong)*(byte *)(DAT_083d1280 + 0x130) * 8 + -8) !=
        DAT_083d1280)) goto LAB_06341220;
    plVar17 = unaff_x19 + 0xe;
    *plVar17 = (long)plVar18;
    if (iVar5 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar17 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar17 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (DAT_086ee558 == (code *)0x0) {
      DAT_086ee558 = (code *)FUN_033d1b68("UnityEngine.SkinnedMeshRenderer::get_bones()");
    }
    lVar9 = (*DAT_086ee558)(plVar18);
    plVar17 = unaff_x19 + 0xf;
    *plVar17 = lVar9;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar17 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar17 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar9 = *plVar17;
    }
    lVar19 = FUN_03398a84(DAT_083c5278);
    FUN_04ab05b0(lVar19,lVar9,DAT_083f4d48);
    if (DAT_086ee548 == (code *)0x0) {
      DAT_086ee548 = (code *)FUN_033d1b68("UnityEngine.SkinnedMeshRenderer::get_rootBone()");
    }
    uVar12 = (*DAT_086ee548)(plVar18);
    lVar9 = DAT_083f4d58;
    if (lVar19 == 0) goto LAB_06341ad0;
    lVar15 = *(long *)(lVar19 + 0x10);
    *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
    if (lVar15 == 0) goto LAB_06341ad0;
    uVar7 = *(uint *)(lVar19 + 0x18);
    if (uVar7 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(lVar19 + 0x18) = uVar7 + 1;
      puVar16 = (undefined8 *)(lVar15 + (long)(int)uVar7 * 8 + 0x20);
      *puVar16 = uVar12;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)puVar16 >> 0x12 & 0x7fff);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar16 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    else {
      FUN_04ab0e54(lVar19,uVar12,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    lVar9 = FUN_04ab28d8(lVar19,DAT_083f4dc0);
    plVar18 = unaff_x19 + 0x10;
    *plVar18 = lVar9;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar18 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar18 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar9 = unaff_x19[10];
    if (*(int *)(*(long *)(unaff_x23 + 0x7d8) + 0xe0) == 0) {
      FUN_033b9870();
    }
    lVar9 = FUN_04085ecc(lVar9,DAT_08413e50);
    *plVar10 = lVar9;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + uVar20;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << (uVar8 & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar9 = unaff_x19[10];
    if (lVar9 == 0) goto LAB_06341ad0;
    if (DAT_086ee708 == (code *)0x0) {
      DAT_086ee708 = (code *)FUN_033d1b68("UnityEngine.Mesh::get_bindposes()");
    }
    uVar12 = (*DAT_086ee708)(lVar9);
    lVar9 = FUN_03398a84(DAT_083c4b88);
    FUN_04a3f404(lVar9,uVar12,DAT_083f28c8);
    if (DAT_086de461 == '\0') {
      FUN_0335b6c8(&DAT_083ce8e8,1);
      DataMemoryBarrier(2,3);
      DAT_086de461 = '\x01';
    }
    lVar19 = DAT_083f28d8;
    lVar15 = *(long *)(DAT_083ce8e8 + 0xb8);
    in_stack_00000078 = *(undefined8 *)(lVar15 + 0x68);
    in_stack_00000070 = *(undefined8 *)(lVar15 + 0x60);
    in_stack_00000088 = *(undefined8 *)(lVar15 + 0x78);
    in_stack_00000080 = *(undefined8 *)(lVar15 + 0x70);
    in_stack_00000058 = *(undefined8 *)(lVar15 + 0x48);
    in_stack_00000050 = *(undefined8 *)(lVar15 + 0x40);
    in_stack_00000068 = *(undefined8 *)(lVar15 + 0x58);
    in_stack_00000060 = *(undefined8 *)(lVar15 + 0x50);
    if (lVar9 == 0) goto LAB_06341ad0;
    lVar15 = *(long *)(lVar9 + 0x10);
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    in_stack_000000b0 = in_stack_00000050;
    in_stack_000000b8 = in_stack_00000058;
    in_stack_000000c0 = in_stack_00000060;
    in_stack_000000c8 = in_stack_00000068;
    in_stack_000000d0 = in_stack_00000070;
    in_stack_000000d8 = in_stack_00000078;
    in_stack_000000e0 = in_stack_00000080;
    in_stack_000000e8 = in_stack_00000088;
    if (lVar15 == 0) goto LAB_06341ad0;
    uVar7 = *(uint *)(lVar9 + 0x18);
    if (uVar7 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar7 + 1;
      lVar15 = lVar15 + (long)(int)uVar7 * 0x40;
      *(undefined8 *)(lVar15 + 0x48) = in_stack_00000078;
      *(undefined8 *)(lVar15 + 0x40) = in_stack_00000070;
      *(undefined8 *)(lVar15 + 0x58) = in_stack_00000088;
      *(undefined8 *)(lVar15 + 0x50) = in_stack_00000080;
      *(undefined8 *)(lVar15 + 0x28) = in_stack_00000058;
      *(undefined8 *)(lVar15 + 0x20) = in_stack_00000050;
      *(undefined8 *)(lVar15 + 0x38) = in_stack_00000068;
      *(undefined8 *)(lVar15 + 0x30) = in_stack_00000060;
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
      FUN_04a3fcec(lVar9,&stack0x000000f0,
                   *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
    }
    lVar19 = *plVar10;
    uVar12 = FUN_04a418f8(lVar9,DAT_083f28f0);
    if (lVar19 == 0) goto LAB_06341ad0;
    if (DAT_086ee710 == (code *)0x0) {
      DAT_086ee710 = (code *)FUN_033d1b68("UnityEngine.Mesh::set_bindposes(UnityEngine.Matrix4x4[])"
                                         );
    }
    (*DAT_086ee710)(lVar19,uVar12);
  }
  *(undefined1 *)((long)unaff_x19 + 0x9b) = 0;
  if (*(int *)((long)unaff_x19 + 0x4c) == 1) {
    lVar9 = unaff_x19[0xe];
    if (*(int *)(*(long *)(unaff_x23 + 0x7d8) + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar8 = FUN_07a11b14(lVar9,0);
    if ((uVar8 & 1) == 0) {
      lVar9 = unaff_x19[10];
      if (lVar9 == 0) goto LAB_06341ad0;
      in_stack_000000f0 = 0;
      _uStack00000000000000f8 = 0;
      _fStack0000000000000100 = 0;
      pcVar11 = DAT_086ee7c0;
      if (DAT_086ee7c0 == (code *)0x0) {
        pcVar11 = (code *)FUN_033d1b68("UnityEngine.Mesh::get_bounds_Injected(UnityEngine.Bounds&)")
        ;
        DAT_086ee7c0 = pcVar11;
      }
    }
    else {
      lVar9 = unaff_x19[0xe];
      if (lVar9 == 0) goto LAB_06341ad0;
      in_stack_000000f0 = 0;
      _uStack00000000000000f8 = 0;
      _fStack0000000000000100 = 0;
      pcVar11 = DAT_086eddc8;
      if (DAT_086eddc8 == (code *)0x0) {
        pcVar11 = (code *)FUN_033d1b68(
                                      "UnityEngine.Renderer::get_localBounds_Injected(UnityEngine.Bounds&)"
                                      );
        DAT_086eddc8 = pcVar11;
      }
    }
    (*pcVar11)(lVar9,&stack0x000000f0);
    fVar26 = fStack00000000000000fc;
    if (fStack00000000000000fc <= fStack0000000000000100) {
      fVar26 = fStack0000000000000100;
    }
    in_stack_00000098 = uStack00000000000000f8;
    if (fVar26 <= fStack0000000000000104) {
      fVar26 = fStack0000000000000104;
    }
    in_stack_00000090 = in_stack_000000f0;
    in_stack_000000a0 = in_stack_000000f0;
    in_stack_000000a8 = uStack00000000000000f8;
    if (DAT_086d7c54 == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7c54 = '\x01';
    }
    lVar19 = unaff_x19[0xe];
    fVar26 = fVar26 + fVar26;
    lVar9 = *(long *)(DAT_083d2c90 + 0xb8);
    fVar27 = *(float *)(lVar9 + 0xc);
    fVar22 = *(float *)(lVar9 + 0x10);
    fVar24 = *(float *)(lVar9 + 0x14);
    if (*(int *)(*(long *)(unaff_x23 + 0x7d8) + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar27 = fVar26 * fVar27;
    fVar22 = fVar26 * fVar22;
    fVar26 = fVar26 * fVar24;
    uVar8 = FUN_07a11b14(lVar19,0);
    if ((uVar8 & 1) == 0) {
      lVar9 = *plVar10;
      in_stack_000000f0 = in_stack_000000a0;
      _uStack00000000000000f8 = CONCAT44(fStack00000000000000fc,in_stack_000000a8);
      if (lVar9 == 0) goto LAB_06341ad0;
      in_stack_00000020 = in_stack_000000a0;
      uStack0000000000000028 = in_stack_000000a8;
      fStack000000000000002c = fVar27;
      fStack0000000000000030 = fVar22;
      fStack0000000000000034 = fVar26;
      if (DAT_086ee7c8 == (code *)0x0) {
        DAT_086ee7c8 = (code *)FUN_033d1b68(
                                           "UnityEngine.Mesh::set_bounds_Injected(UnityEngine.Bounds&)"
                                           );
      }
      puVar16 = &stack0x00000020;
      pcVar11 = DAT_086ee7c8;
    }
    else {
      lVar9 = unaff_x19[0xe];
      in_stack_000000f0 = in_stack_000000a0;
      _uStack00000000000000f8 = CONCAT44(fStack00000000000000fc,in_stack_000000a8);
      if (lVar9 == 0) goto LAB_06341ad0;
      in_stack_00000038 = in_stack_000000a0;
      uStack0000000000000040 = in_stack_000000a8;
      fStack0000000000000044 = fVar27;
      fStack0000000000000048 = fVar22;
      fStack000000000000004c = fVar26;
      if (DAT_086eddd0 == (code *)0x0) {
        DAT_086eddd0 = (code *)FUN_033d1b68(
                                           "UnityEngine.Renderer::set_localBounds_Injected(UnityEngine.Bounds&)"
                                           );
      }
      puVar16 = &stack0x00000038;
      pcVar11 = DAT_086eddd0;
    }
    (*pcVar11)(lVar9,puVar16);
  }
  if (unaff_x19[10] != 0) {
    uVar6 = FUN_07a117e0(unaff_x19[10],0);
    lVar9 = FUN_05b961dc(DAT_083dfcb0);
    if ((lVar9 != 0) && (lVar9 = FUN_06317920(lVar9,0), lVar9 != 0)) {
      uVar8 = FUN_06367184(lVar9,uVar6,0);
      lVar9 = FUN_05b961dc(DAT_083dfcb0);
      if (lVar9 != 0) {
        lVar9 = FUN_06317920(lVar9,0);
        lVar19 = (**(code **)(*unaff_x19 + 0x1f8))();
        if (lVar19 != 0) {
          cVar3 = *(char *)(lVar19 + 0x20);
          lVar19 = (**(code **)(*unaff_x19 + 0x1f8))();
          if (lVar19 != 0) {
            uVar25 = *(undefined4 *)(lVar19 + 0x88);
            uVar23 = *(undefined4 *)(lVar19 + 0x8c);
            uVar21 = *(undefined4 *)(lVar19 + 0x90);
            lVar19 = (**(code **)(*unaff_x19 + 0x1f8))();
            if (lVar19 != 0) {
              uVar2 = *(undefined4 *)(lVar19 + 0x24);
              uVar20 = FUN_0633d928();
              if ((uVar20 & 1) == 0) {
                iVar5 = 0;
              }
              else {
                if (unaff_x19[0x10] == 0) goto LAB_06341ad0;
                iVar5 = *(int *)(unaff_x19[0x10] + 0x18) + -1;
              }
              uVar20 = FUN_0633d928();
              if ((uVar20 & 1) == 0) {
                uVar12 = 0;
              }
              else {
                if (unaff_x19[10] == 0) goto LAB_06341ad0;
                FUN_079e72fc(unaff_x19[10],0);
                uVar12 = extraout_x1;
              }
              if (lVar9 != 0) {
                uVar6 = FUN_063669e4(uVar25,uVar23,uVar21,lVar9,uVar6,cVar3 != '\0',uVar2,iVar5,
                                     uVar12,0);
                *(undefined4 *)(unaff_x19 + 7) = uVar6;
                if ((uVar8 & 1) != 0) {
                  lVar9 = FUN_05b961dc(DAT_083dfcb0);
                  if (lVar9 == 0) goto LAB_06341ad0;
                  lVar19 = FUN_06317920(lVar9,0);
                  lVar9 = unaff_x19[7];
                  uVar7 = FUN_0633d928();
                  if (unaff_x19[10] == 0) goto LAB_06341ad0;
                  uVar12 = FUN_079e8100(unaff_x19[10],0);
                  if (unaff_x19[10] == 0) goto LAB_06341ad0;
                  uVar13 = FUN_079e81b4(unaff_x19[10],0);
                  if (unaff_x19[10] == 0) goto LAB_06341ad0;
                  uVar14 = FUN_079e8268(unaff_x19[10],0);
                  if (unaff_x19[10] == 0) goto LAB_06341ad0;
                  auVar28 = FUN_079e7414(unaff_x19[10],0);
                  if ((unaff_x19[10] == 0) || (FUN_079e72fc(unaff_x19[10],0), lVar19 == 0))
                  goto LAB_06341ad0;
                  FUN_063671fc(lVar19,(int)lVar9,uVar7 & 1,uVar12,uVar13,uVar14,auVar28._0_8_,
                               auVar28._8_8_);
                }
                lVar9 = FUN_05b961dc(DAT_083dfcb0);
                if ((lVar9 != 0) && (lVar9 = FUN_06317920(lVar9,0), lVar9 != 0)) {
                  FUN_06366fcc(lVar9,(int)unaff_x19[7],0);
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
LAB_06341ad0:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


