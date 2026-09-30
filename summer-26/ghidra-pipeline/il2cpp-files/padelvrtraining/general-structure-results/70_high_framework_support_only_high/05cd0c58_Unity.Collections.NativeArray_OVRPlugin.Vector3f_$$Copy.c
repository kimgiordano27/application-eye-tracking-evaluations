/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 05cd0c58
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar7;
  undefined8 unaff_x23;
  long lVar8;
  undefined8 uVar9;
  undefined4 in_stack_00000068;
  
  *(undefined8 *)(unaff_x20 + 0x100) = unaff_x23;
  thunk_FUN_03d1023c(unaff_x20 + 0x100);
  if (*(long *)(unaff_x20 + 0x90) != 0) {
    plVar7 = *(long **)(*(long *)(unaff_x20 + 0x90) + 0x18);
    lVar2 = FUN_03d2d394(*(undefined8 *)PTR_DAT_091a2770,5);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR_DAT_091fcc00;
        thunk_FUN_03d1023c((undefined8 *)(lVar2 + 0x20));
        uVar3 = FUN_070d0cbc(unaff_x20 + 0x80,0);
        if (1 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x28) = uVar3;
          thunk_FUN_03d1023c((undefined8 *)(lVar2 + 0x28),uVar3);
          if (2 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)PTR_DAT_091fcc18;
            thunk_FUN_03d1023c((undefined8 *)(lVar2 + 0x30));
            in_stack_00000068 = *(undefined4 *)(unaff_x21 + 4);
            uVar3 = FUN_07175a38(&stack0x00000068,0);
            if (3 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x38) = uVar3;
              thunk_FUN_03d1023c((undefined8 *)(lVar2 + 0x38),uVar3);
              if (4 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)PTR_DAT_091fcbf8;
                thunk_FUN_03d1023c();
                uVar3 = FUN_06fd2590(lVar2,0);
                lVar8 = *(long *)PTR_DAT_091a0c08;
                lVar2 = *(long *)(lVar8 + 0x38);
                if (lVar2 == 0) {
                  FUN_03d8f2c8(lVar8);
                  lVar2 = *(long *)(lVar8 + 0x38);
                }
                lVar2 = *(long *)(lVar2 + 0x10);
                if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                  lVar2 = FUN_03d8f26c();
                }
                if (*(int *)(lVar2 + 0xe0) == 0) {
                  thunk_FUN_03db619c();
                }
                lVar2 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
                if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                  lVar2 = FUN_03d8f26c();
                }
                if (plVar7 != (long *)0x0) {
                  lVar8 = *plVar7;
                  uVar9 = **(undefined8 **)(lVar2 + 0xb8);
                  uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
                  if (uVar5 != 0) {
                    piVar6 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_091faf08) {
                        puVar4 = (undefined8 *)(lVar8 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                        goto LAB_05cd0e24;
                      }
                      uVar5 = uVar5 - 1;
                      piVar6 = piVar6 + 4;
                    } while (uVar5 != 0);
                  }
                  puVar4 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)PTR_DAT_091faf08,1);
LAB_05cd0e24:
                  (*(code *)*puVar4)(plVar7,3,uVar3,uVar9,puVar4[1]);
                  if (unaff_x20 != 0) {
                    uVar3 = *(undefined8 *)(unaff_x20 + 200);
                    uVar1 = *(undefined4 *)(unaff_x20 + 0x130);
                    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8) +
                                  0x135) & 1) == 0) {
                      FUN_03d8f26c();
                    }
                    uVar9 = thunk_FUN_03d2ef40();
                    FUN_06dd8080(uVar9,0x32,uVar3,uVar1,5,
                                 *(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0));
                    *(undefined8 *)(unaff_x20 + 0x138) = uVar9;
                    thunk_FUN_03d1023c(unaff_x20 + 0x138,uVar9);
                    return;
                  }
                }
                goto LAB_05cd0ed8;
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


