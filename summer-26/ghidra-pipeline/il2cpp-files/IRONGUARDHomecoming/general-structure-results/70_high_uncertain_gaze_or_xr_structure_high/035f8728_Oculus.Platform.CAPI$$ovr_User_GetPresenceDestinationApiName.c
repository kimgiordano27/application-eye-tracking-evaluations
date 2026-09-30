/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_User_GetPresenceDestinationApiName
ENTRY_POINT: 035f8728
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only
*/


void Oculus_Platform_CAPI__ovr_User_GetPresenceDestinationApiName(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  
  if (param_1 != 0) {
    uVar4 = FUN_040766fc(param_1,0);
    uVar4 = FUN_0340ebc0(uVar4,*(undefined8 *)
                                Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                        );
    puVar3 = Method_Unity_VisualScripting_ExclusiveOrHandler_<>c_<_ctor>b__0_36__;
    puVar2 = Method_Oculus_Interaction_CenterEyeOffset_HandleUpdated__;
    puVar1 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
    uVar5 = FUN_035683d0((long)&stack0x00000008 + 4,0);
    uVar4 = FUN_0340eee0(*(undefined8 *)puVar3,uVar5,*(undefined8 *)puVar2,uVar4,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar1);
    }
    FUN_0403ea2c(uVar4,0);
    lVar6 = *unaff_x22;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar6 = *unaff_x22;
    }
    if ((**(long **)(lVar6 + 0xb8) != 0) &&
       (lVar6 = *(long *)(**(long **)(lVar6 + 0xb8) + 0x78), lVar6 != 0)) {
      if (*(uint *)(lVar6 + 0x18) <= in_stack_00000008._4_4_) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (*(long *)(lVar6 + (long)(int)in_stack_00000008._4_4_ * 8 + 0x20) != 0) {
        FUN_035f881c();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


