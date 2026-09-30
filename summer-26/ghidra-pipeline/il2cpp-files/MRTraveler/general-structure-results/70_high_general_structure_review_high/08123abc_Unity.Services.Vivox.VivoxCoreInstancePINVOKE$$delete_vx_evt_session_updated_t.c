/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_evt_session_updated_t
ENTRY_POINT: 08123abc
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_evt_session_updated_t
               (ulong param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 *unaff_x27;
  undefined1 auVar8 [16];
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08f02ab0);
    FUN_03c8f898(PTR_DAT_08f02ac0);
    FUN_03c8f898(PTR_DAT_08f02ab8);
    *(undefined1 *)(unaff_x23 + 0xd06) = 1;
  }
  lVar4 = thunk_FUN_03cf5234(*unaff_x27);
  auVar8 = FUN_07145224(lVar4,0);
  puVar2 = PTR_DAT_08f02ab8;
  puVar1 = PTR_DAT_08f02ab0;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_08f02ab8;
    thunk_FUN_03d233cc();
    *(undefined8 *)(lVar4 + 0x18) = param_3;
    thunk_FUN_03d233cc((undefined8 *)(lVar4 + 0x18),param_3);
    lVar5 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
    auVar8 = FUN_07145224(lVar5,0);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x10) = unaff_x25;
      thunk_FUN_03d233cc();
      *(undefined8 *)(lVar5 + 0x18) = unaff_x24;
      thunk_FUN_03d233cc();
      *(undefined8 *)(lVar5 + 0x20) = unaff_x22;
      thunk_FUN_03d233cc();
      *(undefined8 *)(lVar5 + 0x28) = unaff_x21;
      *(long *)(lVar4 + 0x28) = lVar5;
      uVar6 = thunk_FUN_03d233cc((long *)(lVar4 + 0x28),lVar5);
      if (unaff_x20 == 0) {
        bVar3 = false;
      }
      else {
        bVar3 = *(char *)(unaff_x20 + 0x10) != '\0';
      }
      uVar7 = *(undefined8 *)puVar2;
      auVar8._8_8_ = uVar7;
      auVar8._0_8_ = uVar6;
      *(bool *)(lVar4 + 0x20) = bVar3;
      if (param_2 != 0) {
        FUN_081236ac(param_2,uVar7,lVar4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30(auVar8._0_8_,auVar8._8_8_);
}


