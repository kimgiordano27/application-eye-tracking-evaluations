/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$RegisterTexture
ENTRY_POINT: 06d9e734
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchUtils__RegisterTexture
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
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
  undefined4 unaff_w28;
  undefined8 *unaff_x29;
  
code_r0x06d9e734:
  FUN_05212cf4(unaff_x23,param_3,*(undefined8 *)(param_1 + 0x70));
  do {
    puVar2 = PTR_DAT_08e6a9a0;
    unaff_x23 = *(long *)(unaff_x21 + 0x10);
    if (unaff_x23 == 0) goto LAB_06d9e834;
    if (unaff_w19 < *(int *)(unaff_x23 + 0x18)) {
      lVar5 = *(long *)(unaff_x21 + 0x18);
      break;
    }
    if (*(int *)(unaff_x23 + 0x18) == 0) {
      param_3 = *(undefined8 *)(unaff_x21 + 0x38);
      lVar5 = *(long *)(unaff_x23 + 0x10);
      lVar6 = *unaff_x27;
      *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_06d9e834;
      if (*(int *)(lVar5 + 0x18) == 0) {
        lVar5 = *(long *)(lVar6 + 0x20);
        goto LAB_06d9e730;
      }
      *(undefined4 *)(unaff_x23 + 0x18) = unaff_w28;
    }
    else {
      param_3 = FUN_03c8f97c(*unaff_x29,0x400);
      lVar5 = *(long *)(unaff_x23 + 0x10);
      lVar6 = *unaff_x27;
      *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_06d9e834;
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_06d9e724;
      lVar5 = lVar5 + (long)(int)uVar1 * 8;
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
    }
    *(undefined8 *)(lVar5 + 0x20) = param_3;
    thunk_FUN_03d233cc();
  } while( true );
joined_r0x06d9e750:
  if (lVar5 == 0) {
LAB_06d9e834:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar1 = *(uint *)(lVar5 + 0x18);
  if (unaff_w19 < (int)uVar1) {
    if (*(long *)(unaff_x21 + 0x10) != 0) {
      uVar4 = FUN_05212a24(*(long *)(unaff_x21 + 0x10),unaff_w19,*unaff_x26);
      *unaff_x22 = uVar4;
      thunk_FUN_03d233cc();
      if (*(long *)(unaff_x21 + 0x18) != 0) {
        iVar3 = FUN_051c0724(*(long *)(unaff_x21 + 0x18),unaff_w19,*unaff_x25);
        uVar1 = iVar3 + 0x1e0U & 0x1ff;
        *unaff_x20 = uVar1;
        if (*(long *)(unaff_x21 + 0x18) != 0) {
          FUN_051c0778(*(long *)(unaff_x21 + 0x18),unaff_w19,uVar1,*unaff_x24);
          return;
        }
      }
    }
    goto LAB_06d9e834;
  }
  lVar6 = *(long *)(lVar5 + 0x10);
  lVar7 = *(long *)puVar2;
  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
  if (lVar6 == 0) goto LAB_06d9e834;
  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
    *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 0;
  }
  else {
    FUN_051c0a14(lVar5,0,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    lVar5 = *(long *)(unaff_x21 + 0x18);
  }
  goto joined_r0x06d9e750;
LAB_06d9e724:
  lVar5 = *(long *)(lVar6 + 0x20);
LAB_06d9e730:
  param_1 = *(long *)(lVar5 + 0xc0);
  goto code_r0x06d9e734;
}


