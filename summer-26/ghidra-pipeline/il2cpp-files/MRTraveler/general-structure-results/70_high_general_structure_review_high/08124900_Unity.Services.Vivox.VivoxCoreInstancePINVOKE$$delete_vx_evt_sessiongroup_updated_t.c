/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_evt_sessiongroup_updated_t
ENTRY_POINT: 08124900
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_evt_sessiongroup_updated_t(void)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  
  puVar1 = PTR_DAT_08f02b28;
  puVar5 = *(undefined8 **)(unaff_x24 + 0xb30);
  *(undefined8 *)(unaff_x21 + 0x10) = *puVar5;
  thunk_FUN_03d233cc();
  *(undefined8 *)(unaff_x21 + 0x18) = unaff_x23;
  thunk_FUN_03d233cc();
  lVar3 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
  auVar6 = FUN_07145224(lVar3,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = unaff_x22;
    thunk_FUN_03d233cc();
    *(long *)(unaff_x21 + 0x28) = lVar3;
    uVar4 = thunk_FUN_03d233cc((long *)(unaff_x21 + 0x28),lVar3);
    if (unaff_x20 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)(unaff_x20 + 0x10) != '\0';
    }
    auVar6._8_8_ = *puVar5;
    auVar6._0_8_ = uVar4;
    *(bool *)(unaff_x21 + 0x20) = bVar2;
    if (unaff_x19 != 0) {
      FUN_081236ac();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30(auVar6._0_8_,auVar6._8_8_);
}


