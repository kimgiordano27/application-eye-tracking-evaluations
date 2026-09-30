/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider$$ComputeDesiredMove
ENTRY_POINT: 05dbbb30
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_DynamicMoveProvider__ComputeDesiredMove
          (long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((DAT_06b83042 & 1) == 0) {
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRSelectFilter>_get_bufferChanges__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRSelectFilter>_set_bufferChanges__
                );
    FUN_02d6084c(
                Method_Unity_Collections_SortJob<int,_NativeSortExtension_DefaultComparer<int>>_Schedule__
                );
    FUN_02d6084c(PTR_DAT_0676b318);
    FUN_02d6084c(PTR_DAT_0676b288);
    FUN_02d6084c(
                Method_System_Collections_Generic_SortedList<int,_ValueTuple<RTHandle,_int>>__ctor__
                );
    FUN_02d6084c(Method_System_Collections_Generic_SortedList<int,_ValueTuple<RTHandle,_int>>_Add__)
    ;
    FUN_02d6084c(
                Method_System_Collections_Generic_SortedList<int,_ValueTuple<RTHandle,_int>>_GetEnumerator__
                );
    FUN_02d6084c(Method_OVRManager_Observable<OVRManager_PassthroughInitializationState>_set_Value__
                );
    DAT_06b83042 = 1;
  }
  uVar2 = FUN_05dbc7c0(param_1);
  puVar1 = PTR_DAT_0676b288;
  if ((uVar2 & 1) == 0) {
    thunk_FUN_02dc61f4(PTR_DAT_0675ec60);
    uVar4 = thunk_FUN_02d9d534();
    FUN_050095e8(uVar4,0);
    uVar9 = thunk_FUN_02dc61f4(
                              Method_System_Collections_Generic_SortedList<int,_ValueTuple<RTHandle,_int>>_Remove__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar4,uVar9);
  }
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 != (long *)0x0) {
    lVar5 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0676b288) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 0x1b) * 0x10 + 0x138);
          goto LAB_05dbbc28;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_0676b288,0x1b);
LAB_05dbbc28:
    uVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    plVar7 = *(long **)(param_1 + 0x10);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 0x19) * 0x10 + 0x138);
            goto LAB_05dbbca4;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar1,0x19);
LAB_05dbbca4:
      plVar7 = (long *)(*(code *)*puVar3)(plVar7,puVar3[1]);
      if (plVar7 != (long *)0x0) {
        lVar5 = *plVar7;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0676b318) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 3) * 0x10 + 0x138);
              goto LAB_05dbbd10;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_0676b318,3);
LAB_05dbbd10:
        uVar4 = (*(code *)*puVar3)(plVar7,param_1,puVar3[1]);
        puVar1 = 
        Method_System_Collections_Generic_SortedList<int,_ValueTuple<RTHandle,_int>>_GetEnumerator__
        ;
        lVar5 = *(long *)
                 Method_System_Collections_Generic_SortedList<int,_ValueTuple<RTHandle,_int>>_GetEnumerator__
        ;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(lVar5);
          lVar5 = *(long *)puVar1;
        }
        lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x20);
        if (lVar8 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(lVar5);
            lVar5 = *(long *)puVar1;
          }
          uVar9 = **(undefined8 **)(lVar5 + 0xb8);
          lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                      Method_Unity_Collections_SortJob<int,_NativeSortExtension_DefaultComparer<int>>_Schedule__
                                    );
          FUN_04d61e54(lVar8,uVar9,
                       *(undefined8 *)
                        Method_System_Collections_Generic_SortedList<int,_ValueTuple<RTHandle,_int>>__ctor__
                       ,0);
          plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
          *plVar7 = lVar8;
          thunk_FUN_02dd37b4(plVar7,lVar8);
        }
        uVar4 = FUN_033b8e98(uVar4,lVar8,
                             *(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRSelectFilter>_set_bufferChanges__
                            );
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(lVar5);
          lVar5 = *(long *)puVar1;
        }
        lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
        if (lVar8 == 0) {
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(lVar5);
            lVar5 = *(long *)puVar1;
          }
          uVar9 = **(undefined8 **)(lVar5 + 0xb8);
          lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                      Method_Unity_Collections_SortJob<int,_NativeSortExtension_DefaultComparer<int>>_Schedule__
                                    );
          FUN_04d61e54(lVar8,uVar9,
                       *(undefined8 *)
                        Method_System_Collections_Generic_SortedList<int,_ValueTuple<RTHandle,_int>>_Add__
                       ,0);
          plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28);
          *plVar7 = lVar8;
          thunk_FUN_02dd37b4(plVar7,lVar8);
        }
        uVar4 = FUN_033952ec(uVar4,lVar8,
                             *(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRSelectFilter>_get_bufferChanges__
                            );
        return uVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


