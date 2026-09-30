/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.GazeInputManager$$get_fallbackIfEyeTrackingUnavailable
ENTRY_POINT: 05dbc010
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_GazeInputManager__get_fallbackIfEyeTrackingUnavailable
               (long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *plVar8;
  long *unaff_x22;
  long lVar9;
  long *unaff_x23;
  undefined8 uVar10;
  
  uVar3 = (**(code **)(param_1 + 0x138))();
  if ((uVar3 & 1) == 0) {
    if ((*unaff_x22 == 0) || (uVar3 = FUN_04143750(), (uVar3 & 1) != 0)) {
      plVar8 = *(long **)(unaff_x19 + 0x10);
      if (plVar8 != (long *)0x0) {
        lVar6 = *plVar8;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x23) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 0x19) * 0x10 + 0x138);
              goto LAB_05dbc0ac;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_02d9a5d4(plVar8,*unaff_x23,0x19);
LAB_05dbc0ac:
        plVar8 = (long *)(*(code *)*puVar4)(plVar8,puVar4[1]);
        if (plVar8 != (long *)0x0) {
          lVar6 = *plVar8;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0676b318) {
                puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 3) * 0x10 + 0x138);
                goto LAB_05dbc118;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)PTR_DAT_0676b318,3);
LAB_05dbc118:
          uVar5 = (*(code *)*puVar4)(plVar8);
          puVar1 = 
          Method_System_Collections_Generic_SortedList<int,_ValueTuple<RTHandle,_int>>_GetEnumerator__
          ;
          lVar6 = *(long *)
                   Method_System_Collections_Generic_SortedList<int,_ValueTuple<RTHandle,_int>>_GetEnumerator__
          ;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(lVar6);
            lVar6 = *(long *)puVar1;
          }
          lVar9 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x18);
          if (lVar9 == 0) {
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4(lVar6);
              lVar6 = *(long *)puVar1;
            }
            uVar10 = **(undefined8 **)(lVar6 + 0xb8);
            lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                        Method_Unity_Collections_SortJob<int,_NativeSortExtension_DefaultComparer<int>>_Schedule__
                                      );
            FUN_04d61e54(lVar9,uVar10,
                         *(undefined8 *)
                          Method_System_Collections_Generic_SortedList<int,_ValueTuple<RTHandle,_int>>_get_Keys__
                         ,0);
            plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
            *plVar8 = lVar9;
            thunk_FUN_02dd37b4(plVar8,lVar9);
          }
          uVar5 = FUN_033b8e98(uVar5,lVar9,
                               *(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_SmallRegistrationList<IXRSelectFilter>_set_bufferChanges__
                              );
          uVar10 = thunk_FUN_02d9d534(*(undefined8 *)
                                       Method_Unity_Collections_SortJob<int,_NativeSortExtension_DefaultComparer<int>>_Schedule__
                                     );
          FUN_04d61e54();
          uVar2 = FUN_03393ae4(uVar5,uVar10,
                               *(undefined8 *)
                                Method_System_Collections_Generic_SortedList<int,_ValueTuple<RTHandle,_int>>_get_Count__
                              );
          if (*(long *)(unaff_x20 + 0x10) == 0) {
            uVar2 = uVar2 & 1;
          }
          else {
            FUN_041438ac();
          }
          goto LAB_05dbc248;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
LAB_05dbc248:
  return uVar2 & 1;
}


