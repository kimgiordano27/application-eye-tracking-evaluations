/*
FUNCTION_NAME: OVRPlugin$$GetEyeRecommendedResolutionScale
ENTRY_POINT: 051b59fc
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetEyeRecommendedResolutionScale(long param_1)

{
  undefined1 in_CY;
  undefined4 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long lVar3;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x28;
  ulong unaff_x29;
  
  while (!(bool)in_CY) {
    if (unaff_x21 == 0) {
LAB_051b5a78:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    *(undefined4 *)(unaff_x21 + 0x10) = *(undefined4 *)(param_1 + unaff_x28 * 4);
    lVar3 = *(long *)(unaff_x20 + 0x10);
    uVar2 = thunk_FUN_02cea894(*unaff_x25);
    FUN_03db637c(uVar2,unaff_x21,*unaff_x26,0);
    if ((unaff_x19 == 0) || (uVar1 = FUN_03968c18(), lVar3 == 0)) goto LAB_051b5a78;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x29) break;
    *(undefined4 *)(lVar3 + unaff_x28 * 4) = uVar1;
    lVar3 = *unaff_x23;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar3 = *unaff_x23;
    }
    if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_051b5a78;
    unaff_x29 = unaff_x28 - 7;
    if ((long)*(int *)(**(long **)(lVar3 + 0xb8) + 0x18) <= (long)unaff_x29) {
      return;
    }
    unaff_x21 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06608af8);
    FUN_04f7383c(unaff_x21,0);
    lVar3 = *unaff_x23;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar3 = *unaff_x23;
    }
    param_1 = **(long **)(lVar3 + 0xb8);
    if (param_1 == 0) goto LAB_051b5a78;
    unaff_x28 = unaff_x28 + 1;
    in_CY = *(uint *)(param_1 + 0x18) <= unaff_x29;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


