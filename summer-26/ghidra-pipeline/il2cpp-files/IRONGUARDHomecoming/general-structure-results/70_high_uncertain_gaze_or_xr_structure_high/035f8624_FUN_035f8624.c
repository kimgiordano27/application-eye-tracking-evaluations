/*
FUNCTION_NAME: FUN_035f8624
ENTRY_POINT: 035f8624
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_035f8624(uint param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint local_34;
  
  puVar3 = Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_73__;
  local_34 = param_1;
  if ((DAT_04833864 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_73__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_CenterEyeOffset_HandleUpdated__);
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ExclusiveOrHandler_<>c_<_ctor>b__0_36__);
    DAT_04833864 = 1;
  }
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar3;
  }
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if (**(long **)(lVar5 + 0xb8) != 0) {
    if (*(char *)(**(long **)(lVar5 + 0xb8) + 0x48) != '\0') {
      if (param_2 == 0) goto LAB_035f8814;
      uVar6 = FUN_040766fc(param_2,0);
      uVar7 = FUN_0407d2c4(param_2,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar1);
      }
      uVar8 = FUN_04073094(uVar7,0,0);
      if ((uVar8 & 1) != 0) {
        lVar5 = FUN_0407d2c4(param_2,0);
        if (lVar5 == 0) goto LAB_035f8814;
        uVar7 = FUN_040766fc(lVar5,0);
        uVar6 = FUN_0340ebc0(uVar7,*(undefined8 *)
                                    Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                             ,uVar6,0);
      }
      puVar4 = Method_Unity_VisualScripting_ExclusiveOrHandler_<>c_<_ctor>b__0_36__;
      puVar2 = Method_Oculus_Interaction_CenterEyeOffset_HandleUpdated__;
      puVar1 = Method_Unity_Collections_NativeArray<byte>_ToArray__;
      uVar7 = FUN_035683d0(&local_34,0);
      uVar6 = FUN_0340eee0(*(undefined8 *)puVar4,uVar7,*(undefined8 *)puVar2,uVar6,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar1);
      }
      FUN_0403ea2c(uVar6,0);
      lVar5 = *(long *)puVar3;
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar3;
    }
    if ((**(long **)(lVar5 + 0xb8) != 0) &&
       (lVar5 = *(long *)(**(long **)(lVar5 + 0xb8) + 0x78), lVar5 != 0)) {
      if (*(uint *)(lVar5 + 0x18) <= local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar5 = *(long *)(lVar5 + (long)(int)local_34 * 8 + 0x20);
      if (lVar5 != 0) {
        FUN_035f881c(lVar5,param_2);
        return;
      }
    }
  }
LAB_035f8814:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


