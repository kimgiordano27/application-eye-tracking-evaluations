/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_User_GetPresenceDeeplinkMessage_Native
ENTRY_POINT: 035f86ac
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Platform_CAPI__ovr_User_GetPresenceDeeplinkMessage_Native(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x19;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  
  thunk_FUN_01ee6d7c();
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  lVar4 = *unaff_x22;
  if (**(long **)(lVar4 + 0xb8) != 0) {
    if (*(char *)(**(long **)(lVar4 + 0xb8) + 0x48) != '\0') {
      if (unaff_x19 == 0) goto LAB_035f8814;
      uVar5 = FUN_040766fc();
      uVar6 = FUN_0407d2c4();
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar1);
      }
      uVar7 = FUN_04073094(uVar6,0,0);
      if ((uVar7 & 1) != 0) {
        lVar4 = FUN_0407d2c4();
        if (lVar4 == 0) goto LAB_035f8814;
        uVar6 = FUN_040766fc(lVar4,0);
        uVar5 = FUN_0340ebc0(uVar6,*(undefined8 *)
                                    Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                             ,uVar5,0);
      }
      puVar3 = Method_Unity_VisualScripting_ExclusiveOrHandler_<>c_<_ctor>b__0_36__;
      puVar2 = Method_Oculus_Interaction_CenterEyeOffset_HandleUpdated__;
      puVar1 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
      uVar6 = FUN_035683d0((long)&stack0x00000008 + 4,0);
      uVar5 = FUN_0340eee0(*(undefined8 *)puVar3,uVar6,*(undefined8 *)puVar2,uVar5,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar1);
      }
      FUN_0403ea2c(uVar5,0);
      lVar4 = *unaff_x22;
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar4 = *unaff_x22;
    }
    if ((**(long **)(lVar4 + 0xb8) != 0) &&
       (lVar4 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x78), lVar4 != 0)) {
      if (*(uint *)(lVar4 + 0x18) <= in_stack_00000008._4_4_) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (*(long *)(lVar4 + (long)(int)in_stack_00000008._4_4_ * 8 + 0x20) != 0) {
        FUN_035f881c();
        return;
      }
    }
  }
LAB_035f8814:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


