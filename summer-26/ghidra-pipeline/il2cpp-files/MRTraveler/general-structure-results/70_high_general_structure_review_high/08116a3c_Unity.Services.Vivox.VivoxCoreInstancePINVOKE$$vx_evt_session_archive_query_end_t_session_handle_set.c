/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_session_archive_query_end_t_session_handle_set
ENTRY_POINT: 08116a3c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_session_archive_query_end_t_session_handle_set
               (ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e695a0);
    FUN_03c8f898(PTR_DAT_08eec2a8);
    FUN_03c8f898(PTR_DAT_08f02380);
    FUN_03c8f898(PTR_DAT_08f02388);
    *(undefined1 *)(unaff_x20 + 0xc5e) = 1;
  }
  uVar2 = FUN_085ef868(0);
  if (((uVar2 & 1) != 0) && (*(long *)(unaff_x19 + 0x28) != 0)) {
    uVar2 = FUN_08111604(unaff_x19 + 0x30);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_08eec2a8 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_081160f4();
    }
  }
  puVar1 = PTR_DAT_08f02380;
  lVar4 = *(long *)(unaff_x19 + 0x28);
  if (lVar4 == 0) {
    uVar3 = FUN_08114f60(unaff_x19 + 0x30);
    uVar5 = Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_subscription_t_message_set
                      (unaff_x19 + 0x30);
    uVar3 = FUN_06f75240(*(undefined8 *)PTR_DAT_08f02388,uVar3,uVar5,0);
    uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e695a0);
    FUN_071396dc(uVar5,uVar3,0);
    lVar4 = *(long *)(unaff_x19 + 0x28);
  }
  else {
    uVar5 = 0;
  }
  FUN_0479df5c(unaff_x19 + 0x30,lVar4,lVar4 != 0,uVar5,*(undefined8 *)puVar1);
  return;
}


