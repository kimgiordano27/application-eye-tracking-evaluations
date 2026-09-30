/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$GetEnumerator
ENTRY_POINT: 05cd099c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__GetEnumerator(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 unaff_w22;
  long *plVar9;
  undefined4 unaff_w23;
  long lVar10;
  undefined8 uVar11;
  undefined4 unaff_w24;
  undefined4 unaff_w25;
  undefined4 uStack0000000000000068;
  int iStack000000000000006c;
  
  uVar4 = FUN_03d8f26c(param_1);
  uVar4 = thunk_FUN_03d2ef40(uVar4);
  FUN_054a9500(uVar4,unaff_w25,unaff_w23,unaff_w22,unaff_w24,1,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88));
  *(undefined8 *)(unaff_x20 + 0x100) = uVar4;
  thunk_FUN_03d1023c(unaff_x20 + 0x100,uVar4);
  iVar3 = FUN_076cf7f0();
  iVar2 = 0;
  if (*(int *)(unaff_x21 + 4) != 0) {
    iVar2 = (iStack000000000000006c * iVar3) / *(int *)(unaff_x21 + 4);
  }
  *(int *)(unaff_x20 + 0x130) = iVar2;
  if (*(long *)(unaff_x20 + 0x90) != 0) {
    plVar9 = *(long **)(*(long *)(unaff_x20 + 0x90) + 0x18);
    lVar5 = FUN_03d2d394(*(undefined8 *)PTR_DAT_091a2770,7);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)PTR_DAT_091fcc00;
        thunk_FUN_03d1023c((undefined8 *)(lVar5 + 0x20));
        uVar4 = FUN_070d0cbc(unaff_x20 + 0x80,0);
        if (1 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x28) = uVar4;
          thunk_FUN_03d1023c((undefined8 *)(lVar5 + 0x28),uVar4);
          if (2 < *(uint *)(lVar5 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)PTR_DAT_091fcc10;
            thunk_FUN_03d1023c((undefined8 *)(lVar5 + 0x30));
            uVar4 = FUN_07175a38((long)&stack0x00000068 + 4,0);
            if (3 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x38) = uVar4;
              thunk_FUN_03d1023c((undefined8 *)(lVar5 + 0x38),uVar4);
              if (4 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)PTR_DAT_091fcc20;
                thunk_FUN_03d1023c((undefined8 *)(lVar5 + 0x40));
                uStack0000000000000068 = *(undefined4 *)(unaff_x21 + 4);
                uVar4 = FUN_07175a38(&stack0x00000068,0);
                if (5 < *(uint *)(lVar5 + 0x18)) {
                  *(undefined8 *)(lVar5 + 0x48) = uVar4;
                  thunk_FUN_03d1023c((undefined8 *)(lVar5 + 0x48),uVar4);
                  if (6 < *(uint *)(lVar5 + 0x18)) {
                    *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)PTR_DAT_091fcc08;
                    thunk_FUN_03d1023c();
                    uVar4 = FUN_06fd2590(lVar5,0);
                    lVar10 = *(long *)PTR_DAT_091a0c08;
                    lVar5 = *(long *)(lVar10 + 0x38);
                    if (lVar5 == 0) {
                      FUN_03d8f2c8(lVar10);
                      lVar5 = *(long *)(lVar10 + 0x38);
                    }
                    lVar5 = *(long *)(lVar5 + 0x10);
                    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                      lVar5 = FUN_03d8f26c();
                    }
                    if (*(int *)(lVar5 + 0xe0) == 0) {
                      thunk_FUN_03db619c();
                    }
                    lVar5 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
                    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                      lVar5 = FUN_03d8f26c();
                    }
                    if (plVar9 != (long *)0x0) {
                      lVar10 = *plVar9;
                      uVar11 = **(undefined8 **)(lVar5 + 0xb8);
                      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
                      if (uVar7 != 0) {
                        piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_091faf08) {
                            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                            goto FUN_05cd0e40;
                          }
                          uVar7 = uVar7 - 1;
                          piVar8 = piVar8 + 4;
                        } while (uVar7 != 0);
                      }
                      puVar6 = (undefined8 *)FUN_03d8f370(plVar9,*(long *)PTR_DAT_091faf08,1);
FUN_05cd0e40:
                      (*(code *)*puVar6)(plVar9,2,uVar4,uVar11,puVar6[1]);
                      if (unaff_x20 != 0) {
                        uVar4 = *(undefined8 *)(unaff_x20 + 200);
                        uVar1 = *(undefined4 *)(unaff_x20 + 0x130);
                        if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) +
                                                0xa8) + 0x135) & 1) == 0) {
                          FUN_03d8f26c();
                        }
                        uVar11 = thunk_FUN_03d2ef40();
                        FUN_06dd8080(uVar11,0x32,uVar4,uVar1,5,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0));
                        *(undefined8 *)(unaff_x20 + 0x138) = uVar11;
                        thunk_FUN_03d1023c(unaff_x20 + 0x138,uVar11);
                        return;
                      }
                    }
                    goto LAB_05cd0ed8;
                  }
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
  }
LAB_05cd0ed8:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


