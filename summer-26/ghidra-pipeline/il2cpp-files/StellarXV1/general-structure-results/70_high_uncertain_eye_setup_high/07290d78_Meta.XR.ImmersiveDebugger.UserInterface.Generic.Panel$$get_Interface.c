/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$get_Interface
ENTRY_POINT: 07290d78
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__get_Interface(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  undefined8 unaff_x20;
  
  uVar2 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092883a0);
  FUN_06efbe2c(uVar2,*(undefined8 *)PTR_DAT_09288398);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0x20),uVar2);
  lVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09285898);
  FUN_05c26520(lVar3,*(undefined8 *)PTR_DAT_092858a0);
  if (lVar3 != 0) {
    lVar6 = *(long *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x20;
        thunk_FUN_040ec700();
      }
      else {
        FUN_05c26d88(lVar3);
      }
      *(long *)(unaff_x19 + 0x60) = lVar3;
      thunk_FUN_040ec700((long *)(unaff_x19 + 0x60),lVar3);
      if ((*(long *)(unaff_x19 + 0x68) != 0) &&
         (lVar3 = FUN_07f96804(*(long *)(unaff_x19 + 0x68),0), lVar3 != 0)) {
        uVar4 = FUN_074e4550(lVar3,*(undefined8 *)PTR_DAT_092c2000,0);
        if (((uVar4 & 1) == 0) &&
           (uVar4 = FUN_074e4550(lVar3,*(undefined8 *)PTR_DAT_092acd98,0), (uVar4 & 1) == 0)) {
          uVar2 = thunk_FUN_040dedf8(PTR_DAT_092c2008);
          uVar2 = FUN_074d875c(uVar2,lVar3,0);
          thunk_FUN_040dedf8(PTR_DAT_09287028);
          uVar5 = thunk_FUN_040b4efc();
          FUN_075d4b88(uVar5,uVar2,0);
          uVar2 = thunk_FUN_040dedf8(PTR_DAT_092c2018);
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(uVar5,uVar2);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


