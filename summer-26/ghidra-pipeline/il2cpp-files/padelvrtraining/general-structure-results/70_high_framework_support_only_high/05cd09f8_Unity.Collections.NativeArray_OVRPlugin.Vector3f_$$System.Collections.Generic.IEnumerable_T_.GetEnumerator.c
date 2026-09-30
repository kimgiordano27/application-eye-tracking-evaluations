/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 05cd09f8
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


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (int param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int in_w9;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 in_stack_00000068;
  
  iVar2 = 0;
  if (*(int *)(unaff_x21 + 4) != 0) {
    iVar2 = (in_w9 * param_1) / *(int *)(unaff_x21 + 4);
  }
  *(int *)(unaff_x20 + 0x130) = iVar2;
  if (*(long *)(unaff_x20 + 0x90) != 0) {
    plVar8 = *(long **)(*(long *)(unaff_x20 + 0x90) + 0x18);
    lVar3 = FUN_03d2d394(*(undefined8 *)PTR_DAT_091a2770,7);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) != 0) {
        *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_091fcc00;
        thunk_FUN_03d1023c((undefined8 *)(lVar3 + 0x20));
        uVar4 = FUN_070d0cbc(unaff_x20 + 0x80,0);
        if (1 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x28) = uVar4;
          thunk_FUN_03d1023c((undefined8 *)(lVar3 + 0x28),uVar4);
          if (2 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_091fcc10;
            thunk_FUN_03d1023c((undefined8 *)(lVar3 + 0x30));
            uVar4 = FUN_07175a38(&stack0x0000006c,0);
            if (3 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x38) = uVar4;
              thunk_FUN_03d1023c((undefined8 *)(lVar3 + 0x38),uVar4);
              if (4 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)PTR_DAT_091fcc20;
                thunk_FUN_03d1023c((undefined8 *)(lVar3 + 0x40));
                in_stack_00000068 = *(undefined4 *)(unaff_x21 + 4);
                uVar4 = FUN_07175a38(&stack0x00000068,0);
                if (5 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x48) = uVar4;
                  thunk_FUN_03d1023c((undefined8 *)(lVar3 + 0x48),uVar4);
                  if (6 < *(uint *)(lVar3 + 0x18)) {
                    *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)PTR_DAT_091fcc08;
                    thunk_FUN_03d1023c();
                    uVar4 = FUN_06fd2590(lVar3,0);
                    lVar9 = *(long *)PTR_DAT_091a0c08;
                    lVar3 = *(long *)(lVar9 + 0x38);
                    if (lVar3 == 0) {
                      FUN_03d8f2c8(lVar9);
                      lVar3 = *(long *)(lVar9 + 0x38);
                    }
                    lVar3 = *(long *)(lVar3 + 0x10);
                    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                      lVar3 = FUN_03d8f26c();
                    }
                    if (*(int *)(lVar3 + 0xe0) == 0) {
                      thunk_FUN_03db619c();
                    }
                    lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
                    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                      lVar3 = FUN_03d8f26c();
                    }
                    if (plVar8 != (long *)0x0) {
                      lVar9 = *plVar8;
                      uVar10 = **(undefined8 **)(lVar3 + 0xb8);
                      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
                      if (uVar6 != 0) {
                        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_091faf08) {
                            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                            goto FUN_05cd0e40;
                          }
                          uVar6 = uVar6 - 1;
                          piVar7 = piVar7 + 4;
                        } while (uVar6 != 0);
                      }
                      puVar5 = (undefined8 *)FUN_03d8f370(plVar8,*(long *)PTR_DAT_091faf08,1);
FUN_05cd0e40:
                      (*(code *)*puVar5)(plVar8,2,uVar4,uVar10,puVar5[1]);
                      if (unaff_x20 != 0) {
                        uVar4 = *(undefined8 *)(unaff_x20 + 200);
                        uVar1 = *(undefined4 *)(unaff_x20 + 0x130);
                        if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) +
                                                0xa8) + 0x135) & 1) == 0) {
                          FUN_03d8f26c();
                        }
                        uVar10 = thunk_FUN_03d2ef40();
                        FUN_06dd8080(uVar10,0x32,uVar4,uVar1,5,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0));
                        *(undefined8 *)(unaff_x20 + 0x138) = uVar10;
                        thunk_FUN_03d1023c(unaff_x20 + 0x138,uVar10);
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


