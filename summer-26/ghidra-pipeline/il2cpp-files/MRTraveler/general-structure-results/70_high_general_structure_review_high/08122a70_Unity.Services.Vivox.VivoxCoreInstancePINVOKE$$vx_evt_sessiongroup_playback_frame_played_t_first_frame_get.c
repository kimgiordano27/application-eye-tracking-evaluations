/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_playback_frame_played_t_first_frame_get
ENTRY_POINT: 08122a70
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_playback_frame_played_t_first_frame_get
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *unaff_x20;
  long lVar3;
  
  *(undefined8 *)(unaff_x19 + 0x80) = param_2;
  thunk_FUN_03d233cc();
  *(undefined4 *)(unaff_x19 + 0x88) = 0;
  FUN_08122b50();
  lVar3 = *unaff_x20;
  uVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6eab8);
  System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
            ();
  puVar1 = PTR_DAT_08e69e98;
  if (lVar3 != 0) {
    FUN_08122be8(lVar3,uVar2);
    thunk_FUN_03cf5234(*(undefined8 *)puVar1);
    FUN_07064478();
    Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_participant_updated_t_encoded_uri_with_tag_set
              ();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


