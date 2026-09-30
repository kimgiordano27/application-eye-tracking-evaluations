/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Background$$set_Color
ENTRY_POINT: 052d8384
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_ImmersiveDebugger_UserInterface_Generic_Background__set_Color(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  
  FUN_02f07e70();
                    /* try { // try from 052d838c to 053d838f has its CatchHandler @ 052d839c */
  *(undefined1 *)(unaff_x20 + 0xf1) = 1;
  lVar5 = unaff_x19[0x13];
  if (lVar5 != 0) {
                    /* catch() { ... } // from try @ 052d838c with catch @ 052d839c */
    if (*(int *)(lVar5 + 0x24) == 2) {
      return false;
    }
    if (*(long *)(lVar5 + 0x1c0) != 0) {
      if (*(int *)(*(long *)(lVar5 + 0x1c0) + 0x18) == 0) {
        return false;
      }
      if (*(int *)(lVar5 + 0x24) == 1) {
        return true;
      }
      uVar2 = (**(code **)(*unaff_x19 + 0x238))();
      puVar1 = PTR_DAT_06d01e20;
      if (*(int *)(*(long *)PTR_DAT_06d01e20 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)PTR_DAT_06d01e20);
      }
      uVar3 = FUN_066cd30c(uVar2,0);
      if ((uVar3 & 1) != 0) {
        uVar2 = (**(code **)(*unaff_x19 + 0x238))();
        if (unaff_x19[0x13] == 0) goto LAB_052d8488;
        uVar4 = FUN_066c67b0(unaff_x19[0x13],0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_02f12b58(*(long *)puVar1);
        }
        uVar3 = FUN_066ca6a0(uVar2,uVar4,0);
        if ((uVar3 & 1) == 0) {
          return false;
        }
      }
      if (unaff_x19[0x13] != 0) {
        return *(char *)(unaff_x19[0x13] + 0xf4) != '\0';
      }
    }
  }
LAB_052d8488:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


