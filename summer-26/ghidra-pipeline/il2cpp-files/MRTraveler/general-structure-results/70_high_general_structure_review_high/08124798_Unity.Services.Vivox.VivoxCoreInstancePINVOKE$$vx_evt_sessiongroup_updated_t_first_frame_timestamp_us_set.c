/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_sessiongroup_updated_t_first_frame_timestamp_us_set
ENTRY_POINT: 08124798
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_sessiongroup_updated_t_first_frame_timestamp_us_set
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  undefined1 auVar7 [16];
  
  FUN_03c8f898(PTR_DAT_08f02b30);
  *(undefined1 *)(unaff_x21 + 0xd17) = 1;
  lVar4 = thunk_FUN_03cf5234(*unaff_x24);
  auVar7 = FUN_07145224(lVar4,0);
  puVar2 = PTR_DAT_08f02b30;
  puVar1 = PTR_DAT_08f02b28;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_08f02b30;
    thunk_FUN_03d233cc();
    *(undefined8 *)(lVar4 + 0x18) = unaff_x23;
    thunk_FUN_03d233cc();
    lVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
    auVar7 = FUN_07145224(lVar5,0);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x10) = unaff_x22;
      thunk_FUN_03d233cc();
      *(long *)(lVar4 + 0x28) = lVar5;
      uVar6 = thunk_FUN_03d233cc((long *)(lVar4 + 0x28),lVar5);
      if (unaff_x20 == 0) {
        bVar3 = false;
      }
      else {
        bVar3 = *(char *)(unaff_x20 + 0x10) == '\0';
      }
      auVar7._8_8_ = *(undefined8 *)puVar2;
      auVar7._0_8_ = uVar6;
      *(bool *)(lVar4 + 0x20) = bVar3;
      if (unaff_x19 != 0) {
        FUN_081233f8();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30(auVar7._0_8_,auVar7._8_8_);
}


