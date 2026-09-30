/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_chat_history_query_t_max_set
ENTRY_POINT: 08148514
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_max_set
          (undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x21;
  
  lVar2 = FUN_08825adc(param_1,0);
  puVar1 = PTR_DAT_08e80738;
  if (lVar2 != 0) {
    lVar2 = FUN_08824994(lVar2,0);
    uVar3 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
    System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
              ();
    if (lVar2 != 0) {
      FUN_085da19c(lVar2,uVar3,0);
      if (*unaff_x21 != 0) {
        return *(undefined8 *)(*unaff_x21 + 0x10);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


