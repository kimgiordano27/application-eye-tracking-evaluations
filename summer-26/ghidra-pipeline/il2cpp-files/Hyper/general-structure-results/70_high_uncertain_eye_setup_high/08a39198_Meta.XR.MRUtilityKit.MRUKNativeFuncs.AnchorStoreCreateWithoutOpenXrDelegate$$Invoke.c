/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreCreateWithoutOpenXrDelegate$$Invoke
ENTRY_POINT: 08a39198
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate__Invoke
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  int *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000018;
  
  FUN_04947ee4(*(undefined8 *)(param_1 + 0xca0));
                    /* try { // try from 08a391a0 to 08b3946b has its CatchHandler @ 08a391a0
                       catch() { ... } // from try @ 08a391a0 with catch @ 08a391a0
                       catch() { ... } // from try @ 08a3951c with catch @ 08a391a0
                       catch() { ... } // from try @ 08a396e8 with catch @ 08a391a0
                       catch() { ... } // from try @ 08a3978c with catch @ 08a391a0
                       catch() { ... } // from try @ 08a39808 with catch @ 08a391a0
                       catch() { ... } // from try @ 08a39840 with catch @ 08a391a0 */
  FUN_04947ee4(PTR_DAT_0ac10a50);
  FUN_04947ee4(PTR_DAT_0ac10910);
  FUN_04947ee4(PTR_DAT_0ac0e258);
  FUN_04947ee4(PTR_DAT_0ac0e260);
  FUN_04947ee4(PTR_DAT_0ac0e268);
  *(undefined1 *)(unaff_x20 + 0x3b0) = 1;
  puVar2 = PTR_DAT_0ac10910;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0xe);
    unaff_x19[0xe] = 0;
    unaff_x19[0xf] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar4 = *(long *)(*(long *)(unaff_x19 + 8) + 0x78);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar4 = FUN_08a162cc(lVar4,*(undefined8 *)(unaff_x19 + 10),*(undefined8 *)(unaff_x19 + 0xc),0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000018 = FUN_07764808(lVar4,*(undefined8 *)PTR_DAT_0ac0e268);
    uVar5 = FUN_076844c8(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac0e260);
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000018;
      thunk_FUN_049ee3d8(unaff_x19 + 0xe,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_056f3f5c(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  uVar6 = FUN_07684508(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac0e258);
  puVar3 = PTR_DAT_0ac10a50;
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *unaff_x19 = -2;
  if (iVar1 == 0) {
    thunk_FUN_049a583c();
  }
  FUN_07b6c5d8(unaff_x19 + 2,uVar6,*(undefined8 *)puVar3);
  return;
}


