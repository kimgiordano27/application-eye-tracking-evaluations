/*
FUNCTION_NAME: Oculus.Interaction.Input.FromOVRHmdDataSource$$InjectUseOvrManagerEmulatedPose
ENTRY_POINT: 0351e37c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 159
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_1
*/


long Oculus_Interaction_Input_FromOVRHmdDataSource__InjectUseOvrManagerEmulatedPose(long param_1)

{
  int iVar1;
  short sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint in_w9;
  long lVar5;
  long lVar6;
  int unaff_w19;
  uint unaff_w20;
  int unaff_w22;
  uint unaff_w23;
  
  if ((unaff_w20 < in_w9) && (unaff_w23 < in_w9)) {
    iVar1 = *(int *)(param_1 + 0x20 + (ulong)unaff_w23 * 4);
    if (unaff_w19 <= *(int *)(param_1 + 0x20 + (ulong)unaff_w20 * 4) - iVar1) {
      sVar2 = (short)unaff_w22;
      lVar6 = (long)(int)sVar2 * -0x51eb851f;
      lVar5 = (long)(int)sVar2 * 0x51eb851f;
      return (long)(unaff_w19 + unaff_w22 * 0x16d +
                    ((int)(short)(sVar2 + ((ushort)(sVar2 >> 0xf) >> 0xd & 3)) >> 2) +
                    (int)(short)((short)(uint)((ulong)lVar6 >> 0x25) - (short)(lVar6 >> 0x3f)) +
                    (int)(short)((short)(uint)((ulong)lVar5 >> 0x27) - (short)(lVar5 >> 0x3f)) +
                    iVar1 + -1);
    }
    uVar3 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AndHandler_<>c_<_ctor>b__0_33__);
    uVar3 = FUN_035ac8e0(uVar3,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
    FUN_034f3578(uVar4,0,uVar3,0);
    uVar3 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_AndHandler_<>c_<_ctor>b__0_47__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar4,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


