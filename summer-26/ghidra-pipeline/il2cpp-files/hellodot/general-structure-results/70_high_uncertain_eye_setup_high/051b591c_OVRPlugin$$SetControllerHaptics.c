/*
FUNCTION_NAME: OVRPlugin$$SetControllerHaptics
ENTRY_POINT: 051b591c
PROGRAM: hellodot-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetControllerHaptics(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  ulong uVar8;
  
  *(undefined1 *)(unaff_x21 + 0x326) = 1;
  lVar4 = *unaff_x23;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar4 = *unaff_x23;
  }
  puVar2 = PTR_DAT_06608af0;
  puVar1 = PTR_DAT_06608ae8;
  if (**(long **)(lVar4 + 0xb8) == 0) {
LAB_051b5a78:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar5 = FUN_02ce7ad4(*(undefined8 *)PTR_DAT_065ca018,
                       *(undefined4 *)(**(long **)(lVar4 + 0xb8) + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = uVar5;
  FUN_04f7383c();
  *(long *)(unaff_x20 + 0x18) = unaff_x19;
  lVar4 = 8;
  while( true ) {
    lVar6 = *unaff_x23;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar6 = *unaff_x23;
    }
    if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_051b5a78;
    uVar8 = lVar4 - 8;
    if ((long)*(int *)(**(long **)(lVar6 + 0xb8) + 0x18) <= (long)uVar8) {
      return;
    }
    lVar6 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06608af8);
    FUN_04f7383c(lVar6,0);
    lVar7 = *unaff_x23;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar7 = *unaff_x23;
    }
    lVar7 = **(long **)(lVar7 + 0xb8);
    if (lVar7 == 0) goto LAB_051b5a78;
    if (*(uint *)(lVar7 + 0x18) <= uVar8) break;
    if (lVar6 == 0) goto LAB_051b5a78;
    *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(lVar7 + lVar4 * 4);
    lVar7 = *(long *)(unaff_x20 + 0x10);
    uVar5 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
    FUN_03db637c(uVar5,lVar6,*(undefined8 *)puVar2,0);
    if ((unaff_x19 == 0) || (uVar3 = FUN_03968c18(), lVar7 == 0)) goto LAB_051b5a78;
    if (*(uint *)(lVar7 + 0x18) <= uVar8) break;
    *(undefined4 *)(lVar7 + lVar4 * 4) = uVar3;
    lVar4 = lVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


