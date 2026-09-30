/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<object,-InputSystemUIInputModule.InputActionReferenceState>$$ContainsValue
ENTRY_POINT: 02aa2d3c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
System_Collections_Generic_Dictionary<object,_InputSystemUIInputModule_InputActionReferenceState>__ContainsValue
          (undefined8 param_1,long param_2,ulong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 unaff_x20;
  long *plVar7;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x29;
  
  while( true ) {
    FUN_01bc52e4(param_1,param_2,param_3);
    piVar1 = (int *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                       *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20)
                                                                      + 0x20) + 0xc0) + 0x80) + 0xa0
                                      );
    if (*piVar1 < 1) break;
    puVar2 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20)
                                                     + 0xc0) + 0x80) + 0xe0);
    plVar7 = (long *)*puVar2;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar1 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar1 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar1 * 0x10 + 0x138);
          goto LAB_02aa2cec;
        }
        uVar5 = uVar5 - 1;
        piVar1 = piVar1 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238(plVar7,*unaff_x23,0);
LAB_02aa2cec:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) == 0) break;
    piVar1 = (int *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                       *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20)
                                                                      + 0x20) + 0xc0) + 0x80) + 0xa0
                                      );
    param_1 = *(undefined8 *)(unaff_x29 + -0x18);
    param_3 = (ulong)(*piVar1 - 1);
    param_2 = *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80) +
              0xa0;
  }
  piVar1 = (int *)thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                     *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) +
                                                                    0x20) + 0xc0) + 0x80) + 0xa0);
  if (*piVar1 < 1) {
    puVar2 = (undefined8 *)
             thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20)
                                                     + 0xc0) + 0x80) + 0xe0);
    plVar7 = (long *)*puVar2;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar1 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar1 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar1 * 0x10 + 0x138);
          goto LAB_02aa2de4;
        }
        uVar5 = uVar5 - 1;
        piVar1 = piVar1 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_01ecb238(plVar7,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                          ,0);
LAB_02aa2de4:
    uVar5 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar5 & 1) != 0) {
      puVar2 = (undefined8 *)
               thunk_FUN_01ee7388(*(undefined8 *)(unaff_x29 + -0x18),
                                  *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) +
                                                                 0x20) + 0xc0) + 0x80) + 0xe0);
      plVar7 = (long *)*puVar2;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01ecaf44(lVar3);
      }
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar1 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar1 + -2) == lVar3) {
            lVar3 = lVar4 + (long)*piVar1 * 0x10 + 0x138;
            goto LAB_02aa2ec4;
          }
          uVar5 = uVar5 - 1;
          piVar1 = piVar1 + 4;
        } while (uVar5 != 0);
      }
      lVar3 = FUN_01ecb238(plVar7,lVar3,0);
LAB_02aa2ec4:
      *(undefined8 *)(unaff_x29 + -0x10) = unaff_x20;
      lVar3 = *(long *)(lVar3 + 8);
      (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 8),lVar3,plVar7,unaff_x29 + -0x10);
      FUN_01f08810(*(undefined8 *)(unaff_x29 + -0x18),
                   *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) +
                            0x80) + 0x20);
      uVar6 = 1;
      FUN_01bc52e4(*(undefined8 *)(unaff_x29 + -0x18),
                   *(undefined8 *)
                    (**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80),1);
      goto LAB_02aa2f24;
    }
  }
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 8))
            (*(undefined8 *)(unaff_x29 + -0x18));
  FUN_01bc5360(*(undefined8 *)(unaff_x29 + -0x18),
               *(long *)(**(long **)(*(long *)(*(long *)(unaff_x29 + -0x20) + 0x20) + 0xc0) + 0x80)
               + 0xe0,0);
  uVar6 = 0;
LAB_02aa2f24:
  if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


