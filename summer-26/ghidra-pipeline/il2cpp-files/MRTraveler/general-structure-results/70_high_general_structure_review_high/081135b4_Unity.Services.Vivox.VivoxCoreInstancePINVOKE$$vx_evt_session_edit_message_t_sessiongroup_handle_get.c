/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_edit_message_t_sessiongroup_handle_get
ENTRY_POINT: 081135b4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_edit_message_t_sessiongroup_handle_get
               (void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  
  uVar1 = FUN_085d9f54();
  if ((uVar1 & 1) != 0) {
    FUN_08112844();
    return;
  }
  if (*(long *)(unaff_x19 + 0x40) != 0) {
    if (0 < *(int *)(*(long *)(unaff_x19 + 0x40) + 0x1c)) {
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_08113664;
      FUN_081033d4();
    }
    FUN_0811120c();
    lVar3 = *(long *)(unaff_x19 + 0x18);
    uVar2 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e80738);
    System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
              ();
    if (lVar3 != 0) {
      FUN_085da19c(lVar3,uVar2,0);
      return;
    }
  }
LAB_08113664:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


