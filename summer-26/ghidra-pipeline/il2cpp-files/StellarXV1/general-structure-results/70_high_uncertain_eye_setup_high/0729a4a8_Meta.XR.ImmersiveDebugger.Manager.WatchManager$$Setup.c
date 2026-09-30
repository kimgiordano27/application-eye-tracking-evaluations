/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManager$$Setup
ENTRY_POINT: 0729a4a8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchManager__Setup(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long in_x9;
  long lVar7;
  int unaff_w19;
  uint *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined4 unaff_w29;
  
code_r0x0729a4a8:
  lVar6 = *(long *)(in_x9 + 0x20);
LAB_0729a4b4:
  FUN_05c26d88(unaff_x23,param_2,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x70));
  do {
    puVar2 = PTR_DAT_09289898;
    unaff_x23 = *(long *)(unaff_x21 + 0x10);
    if (unaff_x23 == 0) goto LAB_0729a544;
    if (unaff_w19 < *(int *)(unaff_x23 + 0x18)) {
      lVar6 = *(long *)(unaff_x21 + 0x18);
      break;
    }
    if (*(int *)(unaff_x23 + 0x18) == 0) {
      lVar6 = *(long *)(unaff_x23 + 0x10);
      param_2 = *(undefined8 *)(unaff_x21 + 0x38);
      lVar5 = *unaff_x27;
      *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_0729a544;
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_0729a4b0;
      *(undefined4 *)(unaff_x23 + 0x18) = unaff_w29;
    }
    else {
      param_2 = FUN_04077674(*unaff_x28,0x400);
      lVar6 = *(long *)(unaff_x23 + 0x10);
      in_x9 = *unaff_x27;
      *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
      if (lVar6 == 0) goto LAB_0729a544;
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      if (*(uint *)(lVar6 + 0x18) <= uVar1) goto code_r0x0729a4a8;
      lVar6 = lVar6 + (long)(int)uVar1 * 8;
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
    }
    *(undefined8 *)(lVar6 + 0x20) = param_2;
    thunk_FUN_040ec700();
  } while( true );
joined_r0x0729a4d4:
  if (lVar6 == 0) {
LAB_0729a544:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar1 = *(uint *)(lVar6 + 0x18);
  if (unaff_w19 < (int)uVar1) {
    if (*(long *)(unaff_x21 + 0x10) != 0) {
      uVar4 = FUN_05c26ab8(*(long *)(unaff_x21 + 0x10),unaff_w19,*unaff_x26);
      *unaff_x22 = uVar4;
      thunk_FUN_040ec700();
      if (*(long *)(unaff_x21 + 0x18) != 0) {
        iVar3 = FUN_05bca2b8(*(long *)(unaff_x21 + 0x18),unaff_w19,*unaff_x25);
        lVar6 = *(long *)(unaff_x21 + 0x18);
        uVar1 = iVar3 + 0x1e0U & 0x1ff;
        *unaff_x20 = uVar1;
        if (lVar6 != 0) {
          FUN_05bca30c(lVar6,unaff_w19,uVar1,*unaff_x24);
          return;
        }
      }
    }
    goto LAB_0729a544;
  }
  lVar5 = *(long *)(lVar6 + 0x10);
  lVar7 = *(long *)puVar2;
  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
  if (lVar5 == 0) goto LAB_0729a544;
  if (uVar1 < *(uint *)(lVar5 + 0x18)) {
    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
    *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0;
  }
  else {
    FUN_05bca5b0(lVar6,0,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    lVar6 = *(long *)(unaff_x21 + 0x18);
  }
  goto joined_r0x0729a4d4;
LAB_0729a4b0:
  lVar6 = *(long *)(lVar5 + 0x20);
  goto LAB_0729a4b4;
}


