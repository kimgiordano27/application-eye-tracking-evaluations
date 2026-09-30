/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonForAction$$get_Action
ENTRY_POINT: 04c192d0
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonForAction__get_Action(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint in_w8;
  ulong in_x9;
  ulong in_x10;
  undefined4 unaff_w19;
  ulong uVar7;
  int unaff_w23;
  
  iVar2 = in_w8 + (uint)((ulong)in_w8 * (in_x10 & 0xffffffff) >> 0x25) * -0x3c;
  uVar7 = (in_x9 & 0xffffffff) * (in_x10 & 0xffffffff) >> 0x25;
  if (iVar2 == 0) {
    if (*(int *)(*(long *)PTR_DAT_065e56f0 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar5 = FUN_04c19550(unaff_w19);
    uVar6 = FUN_04c19550(uVar7);
    uVar5 = FUN_04db9398(uVar5,*(undefined8 *)PTR_DAT_065db1f0,uVar6,0);
Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__get_Owner:
    puVar1 = (undefined8 *)PTR_DAT_065d8130;
    if (unaff_w23 < 1) {
      puVar1 = (undefined8 *)PTR_DAT_065e1bc8;
    }
    FUN_04db00f0(*puVar1,uVar5,0);
    return;
  }
  lVar4 = FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065c8918,5);
  if (*(int *)(*(long *)PTR_DAT_065e56f0 + 0xe0) == 0) {
    thunk_FUN_02cd038c(*(long *)PTR_DAT_065e56f0);
  }
  uVar5 = FUN_04c19550(unaff_w19);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  if ((*(int *)(lVar4 + 0x18) != 0) &&
     (*(undefined8 *)(lVar4 + 0x20) = uVar5, puVar3 = PTR_DAT_065db1f0, *(int *)(lVar4 + 0x18) != 1)
     ) {
    *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)PTR_DAT_065db1f0;
    uVar5 = FUN_04c19550(uVar7);
    if ((2 < *(uint *)(lVar4 + 0x18)) &&
       (*(undefined8 *)(lVar4 + 0x30) = uVar5, *(uint *)(lVar4 + 0x18) != 3)) {
      *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)puVar3;
      uVar5 = FUN_04c19550(iVar2);
      if (4 < *(uint *)(lVar4 + 0x18)) {
        *(undefined8 *)(lVar4 + 0x40) = uVar5;
        uVar5 = FUN_04db97ac(lVar4,0);
        goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller__get_Owner;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


