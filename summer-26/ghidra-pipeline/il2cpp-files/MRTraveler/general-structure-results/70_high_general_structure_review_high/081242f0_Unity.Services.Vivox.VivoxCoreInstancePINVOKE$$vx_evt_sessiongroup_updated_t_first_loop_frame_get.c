/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_first_loop_frame_get
ENTRY_POINT: 081242f0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_first_loop_frame_get
               (void)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined1 auVar5 [16];
  
  FUN_03c8f898(PTR_DAT_08f02ae8);
  *(undefined1 *)(unaff_x22 + 0xd12) = 1;
  lVar3 = thunk_FUN_03cf5234(*unaff_x23);
  auVar5 = FUN_07145224(lVar3,0);
  puVar1 = PTR_DAT_08f02ae8;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)PTR_DAT_08f02ae8;
    thunk_FUN_03d233cc();
    *(undefined8 *)(lVar3 + 0x18) = unaff_x21;
    uVar4 = thunk_FUN_03d233cc();
    if (unaff_x20 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)(unaff_x20 + 0x10) != '\0';
    }
    auVar5._8_8_ = *(undefined8 *)puVar1;
    auVar5._0_8_ = uVar4;
    *(bool *)(lVar3 + 0x20) = bVar2;
    if (unaff_x19 != 0) {
      FUN_081236ac();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30(auVar5._0_8_,auVar5._8_8_);
}


