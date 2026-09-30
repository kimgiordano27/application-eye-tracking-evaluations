/*
FUNCTION_NAME: FUN_0207e4dc
ENTRY_POINT: 0207e4dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_3;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_5
*/


long * FUN_0207e4dc(long param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_03780c8c & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                      );
    thunk_FUN_00d48444(Method_Polenter_Serialization_Advanced_SizeOptimizedBinaryWriter__ctor__);
    thunk_FUN_00d48444(Meta_WitAi_Data_Intents_WitIntentData___TypeInfo);
    DAT_03780c8c = 1;
  }
  if (param_2 == (long *)0x0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    lVar5 = thunk_FUN_00d62348();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar4 = thunk_FUN_00d48444(
                              UnityEngine_XR_ARSubsystems_XRCpuImage_Api_OnImageRequestCompleteDelegate_TypeInfo
                              );
    FUN_016ec5b8(lVar5,uVar4,0);
  }
  else {
    bVar1 = *(byte *)(*(long *)
                       Method_Polenter_Serialization_Advanced_SizeOptimizedBinaryWriter__ctor__ +
                     300);
    if ((bVar1 <= *(byte *)(*param_2 + 300)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)Method_Polenter_Serialization_Advanced_SizeOptimizedBinaryWriter__ctor__)) {
      plVar2 = (long *)FUN_02072604(param_2,1);
      if (plVar2 != (long *)0x0) {
        lVar5 = *plVar2;
        bVar1 = *(byte *)(*(long *)
                           Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                         + 300);
        if ((bVar1 <= *(byte *)(lVar5 + 300)) &&
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) ==
            *(long *)
             Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
           )) {
          lVar5 = thunk_FUN_00d48444(
                                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                                    );
          if ((*(byte *)(lVar5 + 300) <= *(byte *)(*plVar2 + 300)) &&
             (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar5 + 300) * 8 + -8) == lVar5)
             ) {
            uVar4 = thunk_FUN_00d48444(
                                      Method_System_Linq_Enumerable_Select<SimpleTuple<float,_Vector2>,_Vector2>__
                                      );
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(plVar2,uVar4);
          }
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar2);
        }
        bVar1 = *(byte *)(*(long *)Meta_WitAi_Data_Intents_WitIntentData___TypeInfo + 300);
        if ((*(byte *)(lVar5 + 300) < bVar1) ||
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)Meta_WitAi_Data_Intents_WitIntentData___TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_00da544c(plVar2);
        }
      }
      *(undefined1 *)(param_1 + 0xa0) = 0;
      return plVar2;
    }
    uVar4 = thunk_FUN_00d48444(StringLiteral_12107);
    uVar4 = FUN_015e2414(uVar4,0);
    thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
    lVar5 = thunk_FUN_00d62348();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar3 = thunk_FUN_00d48444(
                              UnityEngine_XR_ARSubsystems_XRCpuImage_Api_OnImageRequestCompleteDelegate_TypeInfo
                              );
    FUN_016ec624(lVar5,uVar4,uVar3,0);
  }
  uVar4 = thunk_FUN_00d48444(
                            Method_System_Linq_Enumerable_Select<SimpleTuple<float,_Vector2>,_Vector2>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(lVar5,uVar4);
}


