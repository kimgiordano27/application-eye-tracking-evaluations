/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$new_vx_evt_sessiongroup_updated_t
ENTRY_POINT: 08124898
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__new_vx_evt_sessiongroup_updated_t
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x21;
  undefined1 auVar8 [16];
  
  puVar1 = PTR_DAT_08f02b38;
  if ((*(byte *)(unaff_x21 + 0xd18) & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08f02b38);
    FUN_03c8f898(PTR_DAT_08f02b28);
    FUN_03c8f898(PTR_DAT_08f02b30);
    *(undefined1 *)(unaff_x21 + 0xd18) = 1;
  }
  lVar4 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
  auVar8 = FUN_07145224(lVar4,0);
  puVar2 = PTR_DAT_08f02b30;
  puVar1 = PTR_DAT_08f02b28;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_08f02b30;
    thunk_FUN_03d233cc();
    *(undefined8 *)(lVar4 + 0x18) = param_2;
    thunk_FUN_03d233cc((undefined8 *)(lVar4 + 0x18),param_2);
    lVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
    auVar8 = FUN_07145224(lVar5,0);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x10) = param_3;
      thunk_FUN_03d233cc((undefined8 *)(lVar5 + 0x10),param_3);
      *(long *)(lVar4 + 0x28) = lVar5;
      uVar6 = thunk_FUN_03d233cc((long *)(lVar4 + 0x28),lVar5);
      if (param_4 == 0) {
        bVar3 = false;
      }
      else {
        bVar3 = *(char *)(param_4 + 0x10) != '\0';
      }
      uVar7 = *(undefined8 *)puVar2;
      auVar8._8_8_ = uVar7;
      auVar8._0_8_ = uVar6;
      *(bool *)(lVar4 + 0x20) = bVar3;
      if (param_1 != 0) {
        FUN_081236ac(param_1,uVar7,lVar4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30(auVar8._0_8_,auVar8._8_8_);
}


