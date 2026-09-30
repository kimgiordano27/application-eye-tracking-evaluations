/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser$$get_Enabled
ENTRY_POINT: 0727f8b8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_AssemblyParser__get_Enabled
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long in_x9;
  int *piVar3;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long lVar4;
  int unaff_w24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  
  piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar3 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*piVar3 * 0x10 + 0x138);
      goto LAB_0727f8f4;
    }
    in_x9 = in_x9 + -1;
    piVar3 = piVar3 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_040b1e00();
LAB_0727f8f4:
  (*(code *)*puVar1)();
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077828();
  }
  if ((unaff_w24 != 0xb) && (unaff_w24 != 0)) {
    return;
  }
  lVar4 = *unaff_x21;
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar2 = FUN_07282c68(lVar4,*unaff_x27);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  thunk_FUN_040ec700();
  uVar2 = FUN_07282c68(*unaff_x21,*unaff_x26);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  thunk_FUN_040ec700();
  uVar2 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_0928cfa8);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  thunk_FUN_040ec700();
  uVar2 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_092c1788);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  thunk_FUN_040ec700();
  uVar2 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_092c1790);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  thunk_FUN_040ec700();
  uVar2 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_092c1798);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
  thunk_FUN_040ec700();
  uVar2 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_092a5d10);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
  thunk_FUN_040ec700();
  uVar2 = FUN_07282c68(*unaff_x21,*(undefined8 *)PTR_DAT_092c1780);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar2;
  thunk_FUN_040ec700();
  if (*unaff_x21 != 0) {
    FUN_07df3f40(*unaff_x21,*(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 0x10),0);
    FUN_07282ed4();
    if (*unaff_x21 != 0) {
      FUN_07df3f40(*unaff_x21,*(undefined8 *)(*(long *)(*unaff_x25 + 0xb8) + 8),0);
      FUN_072832e0();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


