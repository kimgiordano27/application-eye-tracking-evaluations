/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_resp_session_media_disconnect_t
ENTRY_POINT: 078da7f4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_resp_session_media_disconnect_t(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  
  FUN_03a8a718(Normal_Realtime_ReliableProperty<Vector3>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xa8b) = 1;
  puVar5 = Normal_Realtime_ReliableProperty<Vector3>_TypeInfo;
  if (unaff_x19 != 0) {
    uVar6 = FUN_078dd58c(*(undefined8 *)(unaff_x19 + 0x28));
    uVar1 = *(undefined8 *)(unaff_x19 + 0x10);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x18);
    uVar8 = *(undefined8 *)(unaff_x19 + 0x20);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x30);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x38);
    uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_connector_mute_local_mic_t_base__get
              (uVar7,uVar3,uVar6,uVar1,uVar8,uVar2,uVar4);
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


