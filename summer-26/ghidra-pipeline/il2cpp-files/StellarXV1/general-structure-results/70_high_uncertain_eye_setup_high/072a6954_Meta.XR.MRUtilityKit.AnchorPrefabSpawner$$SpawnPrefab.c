/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.AnchorPrefabSpawner$$SpawnPrefab
ENTRY_POINT: 072a6954
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_AnchorPrefabSpawner__SpawnPrefab(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined4 unaff_w28;
  
code_r0x072a6954:
  lVar3 = *(long *)(unaff_x23 + 0x10);
  lVar4 = *unaff_x26;
  *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
  if (lVar3 != 0) {
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    if (*(uint *)(lVar3 + 0x18) <= uVar1) {
      lVar3 = *(long *)(lVar4 + 0x20);
      goto LAB_072a69d0;
    }
    lVar3 = lVar3 + (long)(int)uVar1 * 8;
    *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
    do {
      *(undefined8 *)(lVar3 + 0x20) = param_1;
      thunk_FUN_040ec700();
      while( true ) {
        unaff_x23 = *(long *)(unaff_x21 + 0x18);
        if (unaff_x23 == 0) goto LAB_072a69e8;
        if (unaff_w19 < *(int *)(unaff_x23 + 0x18)) {
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
        if (*(int *)(unaff_x23 + 0x18) != 0) {
          param_1 = FUN_04077674(*unaff_x27,0x240);
          goto code_r0x072a6954;
        }
        lVar3 = *(long *)(unaff_x23 + 0x10);
        param_1 = *(undefined8 *)(unaff_x21 + 0x28);
        lVar4 = *unaff_x26;
        *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
        if (lVar3 == 0) goto LAB_072a69e8;
        if (*(int *)(lVar3 + 0x18) != 0) break;
        lVar3 = *(long *)(lVar4 + 0x20);
LAB_072a69d0:
        FUN_05c26d88(unaff_x23,param_1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x70));
      }
      *(undefined4 *)(unaff_x23 + 0x18) = unaff_w28;
    } while( true );
  }
LAB_072a69e8:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


