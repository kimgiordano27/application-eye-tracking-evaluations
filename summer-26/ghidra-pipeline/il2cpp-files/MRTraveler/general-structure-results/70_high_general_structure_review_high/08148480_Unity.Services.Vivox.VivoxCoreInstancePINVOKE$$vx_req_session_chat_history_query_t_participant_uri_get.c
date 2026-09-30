/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_chat_history_query_t_participant_uri_get
ENTRY_POINT: 08148480
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_chat_history_query_t_participant_uri_get
          (void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *plVar6;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  FUN_03c8f898(PTR_DAT_08e80738);
  FUN_03c8f898(PTR_DAT_08e833c0);
  FUN_03c8f898(PTR_DAT_08f03320);
  FUN_03c8f898(PTR_DAT_08e833c8);
  FUN_03c8f898(PTR_DAT_08f03c68);
  FUN_03c8f898(PTR_DAT_08f03c60);
  *(undefined1 *)(unaff_x20 + 0xec5) = 1;
  lVar3 = thunk_FUN_03cf5234(*unaff_x23);
  FUN_07145224(lVar3,0);
  lVar4 = thunk_FUN_03cf5234(*unaff_x22);
  FUN_05ac9c70(lVar4,*unaff_x21);
  if (lVar3 != 0) {
    plVar6 = (long *)(lVar3 + 0x10);
    *plVar6 = lVar4;
    thunk_FUN_03d233cc(plVar6,lVar4);
    lVar4 = FUN_08825adc();
    puVar2 = PTR_DAT_08f03c68;
    puVar1 = PTR_DAT_08e80738;
    if (lVar4 != 0) {
      lVar4 = FUN_08824994(lVar4,0);
      uVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
      System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                (uVar5,lVar3,*(undefined8 *)puVar2,0);
      if (lVar4 != 0) {
        FUN_085da19c(lVar4,uVar5,0);
        if (*plVar6 != 0) {
          return *(undefined8 *)(*plVar6 + 0x10);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


