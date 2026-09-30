/*
FUNCTION_NAME: Meta.XR.Movement.NativeUtilityHelper$$SearchForJointWithNameInChildren
ENTRY_POINT: 06daa870
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


void Meta_XR_Movement_NativeUtilityHelper__SearchForJointWithNameInChildren(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long lVar9;
  
  FUN_03c8f898();
  FUN_03c8f898(PTR_DAT_08e8fd50);
  FUN_03c8f898(PTR_DAT_08e8cf18);
  FUN_03c8f898(PTR_DAT_08e8ff68);
  FUN_03c8f898(PTR_DAT_08e6abb8);
  *(undefined1 *)(unaff_x23 + 0xaea) = 1;
  puVar5 = PTR_DAT_08e8ff68;
  puVar4 = PTR_DAT_08e8cf18;
  puVar3 = PTR_DAT_08e8ce50;
  puVar2 = PTR_DAT_08e6abb8;
  lVar9 = *(long *)(unaff_x21 + 0x10);
  while (lVar9 != 0) {
    if (unaff_w19 < *(int *)(lVar9 + 0x18)) {
      lVar9 = *(long *)(unaff_x21 + 0x18);
      goto joined_r0x06daa990;
    }
    if (*(int *)(lVar9 + 0x18) == 0) {
      uVar6 = *(undefined8 *)(unaff_x21 + 0x20);
      lVar7 = *(long *)(lVar9 + 0x10);
      lVar8 = *(long *)puVar3;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar7 == 0) break;
      if (*(int *)(lVar7 + 0x18) != 0) {
        *(undefined4 *)(lVar9 + 0x18) = 1;
        goto LAB_06daa958;
      }
      lVar7 = *(long *)(lVar8 + 0x20);
LAB_06daa970:
      FUN_05212cf4(lVar9,uVar6,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x70));
    }
    else {
      uVar6 = FUN_03c8f97c(*(undefined8 *)puVar2,0x240);
      lVar7 = *(long *)(lVar9 + 0x10);
      lVar8 = *(long *)puVar3;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar7 == 0) break;
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (*(uint *)(lVar7 + 0x18) <= uVar1) {
        lVar7 = *(long *)(lVar8 + 0x20);
        goto LAB_06daa970;
      }
      lVar7 = lVar7 + (long)(int)uVar1 * 8;
      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
LAB_06daa958:
      *(undefined8 *)(lVar7 + 0x20) = uVar6;
      thunk_FUN_03d233cc();
    }
    lVar9 = *(long *)(unaff_x21 + 0x10);
  }
LAB_06daaadc:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
joined_r0x06daa990:
  if (lVar9 == 0) goto LAB_06daaadc;
  if (unaff_w19 < *(int *)(lVar9 + 0x18)) {
    if (*(long *)(unaff_x21 + 0x10) != 0) {
      uVar6 = FUN_05212a24(*(long *)(unaff_x21 + 0x10),unaff_w19,*(undefined8 *)puVar4);
      *unaff_x22 = uVar6;
      thunk_FUN_03d233cc();
      if (*(long *)(unaff_x21 + 0x18) != 0) {
        uVar6 = FUN_05212a24(*(long *)(unaff_x21 + 0x18),unaff_w19,*(undefined8 *)puVar4);
        *unaff_x20 = uVar6;
        thunk_FUN_03d233cc();
        if (*(long *)(unaff_x21 + 0x18) != 0) {
          FUN_05212a78(*(long *)(unaff_x21 + 0x18),unaff_w19,*unaff_x22,*(undefined8 *)puVar5);
          if (*(long *)(unaff_x21 + 0x10) != 0) {
            FUN_05212a78(*(long *)(unaff_x21 + 0x10),unaff_w19,*unaff_x20,*(undefined8 *)puVar5);
            return;
          }
        }
      }
    }
    goto LAB_06daaadc;
  }
  if (*(int *)(lVar9 + 0x18) == 0) {
    uVar6 = *(undefined8 *)(unaff_x21 + 0x28);
    lVar7 = *(long *)(lVar9 + 0x10);
    lVar8 = *(long *)puVar3;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_06daaadc;
    if (*(int *)(lVar7 + 0x18) != 0) {
      *(undefined4 *)(lVar9 + 0x18) = 1;
      goto LAB_06daaa18;
    }
    lVar7 = *(long *)(lVar8 + 0x20);
LAB_06daaa30:
    FUN_05212cf4(lVar9,uVar6,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x70));
  }
  else {
    uVar6 = FUN_03c8f97c(*(undefined8 *)puVar2,0x240);
    lVar7 = *(long *)(lVar9 + 0x10);
    lVar8 = *(long *)puVar3;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_06daaadc;
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (*(uint *)(lVar7 + 0x18) <= uVar1) {
      lVar7 = *(long *)(lVar8 + 0x20);
      goto LAB_06daaa30;
    }
    lVar7 = lVar7 + (long)(int)uVar1 * 8;
    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
LAB_06daaa18:
    *(undefined8 *)(lVar7 + 0x20) = uVar6;
    thunk_FUN_03d233cc();
  }
  lVar9 = *(long *)(unaff_x21 + 0x18);
  goto joined_r0x06daa990;
}


