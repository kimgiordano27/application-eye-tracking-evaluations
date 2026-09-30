/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_base__set
ENTRY_POINT: 08123b38
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_base__set(void)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 auVar4 [16];
  
  thunk_FUN_03d233cc();
  lVar2 = thunk_FUN_03cf5234(*unaff_x28);
  auVar4 = FUN_07145224(lVar2,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = unaff_x25;
    thunk_FUN_03d233cc();
    *(undefined8 *)(lVar2 + 0x18) = unaff_x24;
    thunk_FUN_03d233cc();
    *(undefined8 *)(lVar2 + 0x20) = unaff_x22;
    thunk_FUN_03d233cc();
    *(undefined8 *)(lVar2 + 0x28) = unaff_x21;
    *(long *)(unaff_x23 + 0x28) = lVar2;
    uVar3 = thunk_FUN_03d233cc((long *)(unaff_x23 + 0x28),lVar2);
    if (unaff_x20 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = *(char *)(unaff_x20 + 0x10) != '\0';
    }
    auVar4._8_8_ = *unaff_x27;
    auVar4._0_8_ = uVar3;
    *(bool *)(unaff_x23 + 0x20) = bVar1;
    if (unaff_x19 != 0) {
      FUN_081236ac();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30(auVar4._0_8_,auVar4._8_8_);
}


