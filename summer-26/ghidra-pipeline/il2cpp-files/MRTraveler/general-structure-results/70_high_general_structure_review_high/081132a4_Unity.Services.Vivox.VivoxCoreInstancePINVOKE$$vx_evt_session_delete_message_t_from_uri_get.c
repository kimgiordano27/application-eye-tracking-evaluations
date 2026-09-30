/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_delete_message_t_from_uri_get
ENTRY_POINT: 081132a4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_delete_message_t_from_uri_get
               (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long unaff_x19;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *unaff_x21;
  
  *(undefined4 *)(unaff_x19 + 0x50) = 1;
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x18);
  }
  uVar1 = FUN_08591160(param_2,uVar3,0);
  puVar4 = (undefined8 *)(unaff_x19 + 0x18);
  *puVar4 = uVar1;
  thunk_FUN_03d233cc(puVar4,uVar1);
  FUN_0811120c();
  uVar5 = *puVar4;
  uVar1 = thunk_FUN_03cf5234(*unaff_x21);
  uVar2 = System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                    ();
  Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_delete_message_t_session_handle_get
            (uVar2,uVar5,uVar1);
  return;
}


