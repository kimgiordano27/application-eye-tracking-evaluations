/*
FUNCTION_NAME: FUN_00f8f5dc
ENTRY_POINT: 00f8f5dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 121
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_00f8f5dc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = System_Collections_Generic_List<IValueAnimationUpdate>_TypeInfo;
  if ((DAT_03775932 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_7010);
    thunk_FUN_00d48444(PathCreation_Utility_MathUtility_PosRotScale_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_TextCore_Text_WordInfo___TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>__ctor__
                      );
    thunk_FUN_00d48444(StringLiteral_11285);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vabal_high_u16__);
    thunk_FUN_00d48444(System_Action<DropdownMenuAction>_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqaddq_s32__);
    thunk_FUN_00d48444(
                      Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchAnchorsAsync>d__56>__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<IValueAnimationUpdate>_TypeInfo);
    DAT_03775932 = 1;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = 
  Method_OVRTaskBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRAnchor_<FetchAnchorsAsync>d__56>__
  ;
  if (lVar2 != 0) {
    FUN_01320e50(lVar2,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vabal_high_u16__);
    *(long *)(param_1 + 0x50) = lVar2;
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqaddq_s32__;
    if (lVar2 != 0) {
      FUN_01320e50(lVar2,*(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_InlinedArray<InternedString>__ctor__
                  );
      *(long *)(param_1 + 0xa8) = lVar2;
      lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar1 = PathCreation_Utility_MathUtility_PosRotScale_TypeInfo;
      if (lVar2 != 0) {
        FUN_01320e50(lVar2,*(undefined8 *)StringLiteral_11285);
        *(long *)(param_1 + 0xb0) = lVar2;
        lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar1 = System_Action<DropdownMenuAction>_TypeInfo;
        if (lVar2 != 0) {
          FUN_01298da0(lVar2,*(undefined8 *)StringLiteral_7010);
          *(long *)(param_1 + 0xb8) = lVar2;
          lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          if (lVar2 != 0) {
            FUN_01320e50(lVar2,*(undefined8 *)UnityEngine_TextCore_Text_WordInfo___TypeInfo);
            *(long *)(param_1 + 0xd8) = lVar2;
            thunk_FUN_0268a01c(param_1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


