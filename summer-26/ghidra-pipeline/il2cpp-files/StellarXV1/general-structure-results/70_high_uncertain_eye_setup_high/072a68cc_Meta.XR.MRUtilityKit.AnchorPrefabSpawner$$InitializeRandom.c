/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$InitializeRandom
ENTRY_POINT: 072a68cc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__InitializeRandom(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long lVar5;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined4 unaff_w28;
  
LAB_072a68f8:
  *(undefined8 *)(param_1 + 0x20) = param_2;
  thunk_FUN_040ec700();
  do {
    lVar5 = *(long *)(unaff_x21 + 0x10);
    if (lVar5 == 0) goto LAB_072a69e8;
    if (unaff_w19 < *(int *)(lVar5 + 0x18)) {
      lVar5 = *(long *)(unaff_x21 + 0x18);
      break;
    }
    if (*(int *)(lVar5 + 0x18) == 0) {
      param_1 = *(long *)(lVar5 + 0x10);
      param_2 = *(undefined8 *)(unaff_x21 + 0x20);
      lVar3 = *unaff_x26;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (param_1 == 0) goto LAB_072a69e8;
      if (*(int *)(param_1 + 0x18) != 0) {
        *(undefined4 *)(lVar5 + 0x18) = unaff_w28;
        goto LAB_072a68f8;
      }
      lVar3 = *(long *)(lVar3 + 0x20);
    }
    else {
      param_2 = FUN_04077674(*unaff_x27,0x240);
      param_1 = *(long *)(lVar5 + 0x10);
      lVar3 = *unaff_x26;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (param_1 == 0) goto LAB_072a69e8;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(param_1 + 0x18)) goto code_r0x072a68c0;
      lVar3 = *(long *)(lVar3 + 0x20);
    }
    FUN_05c26d88(lVar5,param_2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  } while( true );
joined_r0x072a6930:
  if (lVar5 == 0) {
LAB_072a69e8:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (unaff_w19 < *(int *)(lVar5 + 0x18)) {
    if (*(long *)(unaff_x21 + 0x10) != 0) {
      uVar2 = FUN_05c26ab8(*(long *)(unaff_x21 + 0x10),unaff_w19,*unaff_x25);
      *unaff_x22 = uVar2;
      thunk_FUN_040ec700();
      if (*(long *)(unaff_x21 + 0x18) != 0) {
        uVar2 = FUN_05c26ab8(*(long *)(unaff_x21 + 0x18),unaff_w19,*unaff_x25);
        *unaff_x20 = uVar2;
        thunk_FUN_040ec700();
        if (*(long *)(unaff_x21 + 0x18) != 0) {
          FUN_05c26b0c(*(long *)(unaff_x21 + 0x18),unaff_w19,*unaff_x22,*unaff_x24);
          if (*(long *)(unaff_x21 + 0x10) != 0) {
            FUN_05c26b0c(*(long *)(unaff_x21 + 0x10),unaff_w19,*unaff_x20,*unaff_x24);
            return;
          }
        }
      }
    }
    goto LAB_072a69e8;
  }
  if (*(int *)(lVar5 + 0x18) == 0) {
    lVar3 = *(long *)(lVar5 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x21 + 0x28);
    lVar4 = *unaff_x26;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar3 == 0) goto LAB_072a69e8;
    if (*(int *)(lVar3 + 0x18) == 0) {
      lVar3 = *(long *)(lVar4 + 0x20);
      goto LAB_072a69d0;
    }
    *(undefined4 *)(lVar5 + 0x18) = 1;
LAB_072a69b8:
    *(undefined8 *)(lVar3 + 0x20) = uVar2;
    thunk_FUN_040ec700();
  }
  else {
    uVar2 = FUN_04077674(*unaff_x27,0x240);
    lVar3 = *(long *)(lVar5 + 0x10);
    lVar4 = *unaff_x26;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar3 == 0) goto LAB_072a69e8;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + (long)(int)uVar1 * 8;
      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
      goto LAB_072a69b8;
    }
    lVar3 = *(long *)(lVar4 + 0x20);
LAB_072a69d0:
    FUN_05c26d88(lVar5,uVar2,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
  }
  lVar5 = *(long *)(unaff_x21 + 0x18);
  goto joined_r0x072a6930;
code_r0x072a68c0:
  param_1 = param_1 + (long)(int)uVar1 * 8;
  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
  goto LAB_072a68f8;
}


