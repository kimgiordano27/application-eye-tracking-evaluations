/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<object,-InputSystemUIInputModule.InputActionReferenceState>$$Add
ENTRY_POINT: 02aa2b24
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined4
System_Collections_Generic_Dictionary<object,_InputSystemUIInputModule_InputActionReferenceState>__Add
          (void)

{
  undefined *puVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined8 unaff_x20;
  long *plVar9;
  long unaff_x22;
  long unaff_x29;
  
  piVar2 = (int *)thunk_FUN_01ee7388();
  if (*piVar2 == 0) {
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),
                 0xffffffff);
    puVar4 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20)
                                                     + 0xc0) + 0x80) + 0x60);
    plVar9 = (long *)*puVar4;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44(lVar5);
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar2 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar2 + -2) == lVar5) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar2 * 0x10 + 0x138);
          goto FUN_02aa2c04;
        }
        uVar7 = uVar7 - 1;
        piVar2 = piVar2 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar9,lVar5,0);
FUN_02aa2c04:
    uVar3 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x18),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80
                          ) + 0xe0,uVar3);
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    while (piVar2 = (int *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                              *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 +
                                                                                       -0x20) + 0x20
                                                                             ) + 0xc0) + 0x80) +
                                              0xa0), 0 < *piVar2) {
      puVar4 = (undefined8 *)
               thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) +
                                                                 0x20) + 0xc0) + 0x80) + 0xe0);
      plVar9 = (long *)*puVar4;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar2 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar2 * 0x10 + 0x138);
            goto LAB_02aa2cec;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar1,0);
LAB_02aa2cec:
      uVar7 = (*(code *)*puVar4)(plVar9,puVar4[1]);
      if ((uVar7 & 1) == 0) break;
      piVar2 = (int *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                         *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20
                                                                                  ) + 0x20) + 0xc0)
                                                  + 0x80) + 0xa0);
      FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) +
                            0x80) + 0xa0,*piVar2 + -1);
    }
    piVar2 = (int *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                       *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20)
                                                                      + 0x20) + 0xc0) + 0x80) + 0xa0
                                      );
    if (*piVar2 < 1) goto LAB_02aa2d6c;
LAB_02aa2e78:
    (*(code *)**(undefined8 **)
                (*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 8))
              (*(undefined8 *)(unaff_x29 + -0x18));
    FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x18),
                 *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80
                          ) + 0xe0,0);
  }
  else if (*piVar2 == 1) {
    FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                 *(undefined8 *)
                  (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),
                 0xfffffffd);
LAB_02aa2d6c:
    puVar4 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20)
                                                     + 0xc0) + 0x80) + 0xe0);
    plVar9 = (long *)*puVar4;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar2 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar2 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar2 * 0x10 + 0x138);
          goto LAB_02aa2de4;
        }
        uVar7 = uVar7 - 1;
        piVar2 = piVar2 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(plVar9,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02aa2de4:
    uVar7 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    if ((uVar7 & 1) != 0) {
      puVar4 = (undefined8 *)
               thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) +
                                                                 0x20) + 0xc0) + 0x80) + 0xe0);
      plVar9 = (long *)*puVar4;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar2 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar2 + -2) == lVar5) {
            lVar5 = lVar6 + (long)*piVar2 * 0x10 + 0x138;
            goto LAB_02aa2ec4;
          }
          uVar7 = uVar7 - 1;
          piVar2 = piVar2 + 4;
        } while (uVar7 != 0);
      }
      lVar5 = FUN_01ecb238(plVar9,lVar5,0);
LAB_02aa2ec4:
      *(undefined8 *)(unaff_x29 + -0x10) = unaff_x20;
      lVar5 = *(long *)(lVar5 + 8);
      (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar9,unaff_x29 + -0x10);
      FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x18),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) +
                            0x80) + 0x20);
      uVar8 = 1;
      FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                   *(undefined8 *)
                    (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),1);
      goto LAB_02aa2f24;
    }
    goto LAB_02aa2e78;
  }
  uVar8 = 0;
LAB_02aa2f24:
  if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


