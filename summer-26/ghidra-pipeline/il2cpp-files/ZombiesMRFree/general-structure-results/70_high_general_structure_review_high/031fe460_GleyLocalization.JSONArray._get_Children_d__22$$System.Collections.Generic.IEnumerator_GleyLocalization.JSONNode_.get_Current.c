/*
FUNCTION_NAME: GleyLocalization.JSONArray.<get_Children>d__22$$System.Collections.Generic.IEnumerator<GleyLocalization.JSONNode>.get_Current
ENTRY_POINT: 031fe460
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void GleyLocalization_JSONArray_<get_Children>d__22__System_Collections_Generic_IEnumerator<GleyLocalization_JSONNode>_get_Current
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 unaff_w19;
  long *unaff_x20;
  int unaff_w21;
  undefined4 unaff_w22;
  undefined4 unaff_w24;
  undefined4 unaff_w25;
  undefined4 unaff_w26;
  undefined4 unaff_w28;
  undefined4 unaff_w29;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  uint uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  do {
    uVar4 = FUN_031fda34(unaff_w19,unaff_w28,unaff_w19);
    uVar5 = FUN_031fda34(unaff_w19,unaff_w29,unaff_w28);
    lVar7 = *(long *)(*(long *)(*(long *)PTR_DAT_06f74680 + 0xb8) + 0x30);
    if (lVar7 == 0) {
LAB_031ff124:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = unaff_w19;
    }
    else {
      FUN_043b542c(lVar7,unaff_w19,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                  );
      lVar7 = *(long *)(*(long *)(*(long *)PTR_DAT_06f74680 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_031ff124;
    }
    puVar2 = PTR_DAT_06f74680;
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = uStack000000000000001c;
    }
    else {
      FUN_043b542c(lVar7,uStack000000000000001c,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_031ff124;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = uVar4;
    }
    else {
      FUN_043b542c(lVar7,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_031ff124;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = unaff_w29;
    }
    else {
      FUN_043b542c(lVar7,unaff_w29,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                  );
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_031ff124;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = unaff_w25;
    }
    else {
      FUN_043b542c(lVar7,unaff_w25,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                  );
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_031ff124;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = unaff_w26;
    }
    else {
      FUN_043b542c(lVar7,unaff_w26,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                  );
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_031ff124;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = unaff_w28;
    }
    else {
      FUN_043b542c(lVar7,unaff_w28,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                  );
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_031ff124;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = unaff_w22;
    }
    else {
      FUN_043b542c(lVar7,unaff_w22,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                  );
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_031ff124;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = unaff_w24;
    }
    else {
      FUN_043b542c(lVar7,unaff_w24,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                  );
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_031ff124;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = uVar5;
    }
    else {
      FUN_043b542c(lVar7,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_031ff124;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = uStack000000000000001c;
    }
    else {
      FUN_043b542c(lVar7,uStack000000000000001c,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_031ff124;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = unaff_w26;
    }
    else {
      FUN_043b542c(lVar7,unaff_w26,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                  );
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_031ff124;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = uVar5;
    }
    else {
      FUN_043b542c(lVar7,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_031ff124;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = unaff_w25;
    }
    else {
      FUN_043b542c(lVar7,unaff_w25,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                  );
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_031ff124;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = unaff_w24;
    }
    else {
      FUN_043b542c(lVar7,unaff_w24,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                  );
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_031ff124;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = uVar5;
    }
    else {
      FUN_043b542c(lVar7,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_031ff124;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = unaff_w22;
    }
    else {
      FUN_043b542c(lVar7,unaff_w22,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                  );
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_031ff124;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = uVar4;
    }
    else {
      FUN_043b542c(lVar7,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_031ff124;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = uVar5;
    }
    else {
      FUN_043b542c(lVar7,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_031ff124;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = uVar4;
    }
    else {
      FUN_043b542c(lVar7,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_031ff124;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = uStack000000000000001c;
    }
    else {
      FUN_043b542c(lVar7,uStack000000000000001c,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_031ff124;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = uVar5;
    }
    else {
      FUN_043b542c(lVar7,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_031ff124;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = unaff_w26;
    }
    else {
      FUN_043b542c(lVar7,unaff_w26,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                  );
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_031ff124;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = unaff_w25;
    }
    else {
      FUN_043b542c(lVar7,unaff_w25,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                  );
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_031ff124;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = uVar5;
    }
    else {
      FUN_043b542c(lVar7,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_031ff124;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = unaff_w24;
    }
    else {
      FUN_043b542c(lVar7,unaff_w24,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                  );
      lVar7 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (lVar7 == 0) goto LAB_031ff124;
    }
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar9 = *unaff_x20;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = unaff_w22;
    }
    else {
      FUN_043b542c(lVar7,unaff_w22,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                  );
    }
    puVar3 = PTR_DAT_06f74708;
    uVar1 = *(uint *)(in_stack_00000010 + 0x18);
    if ((int)uVar1 <= (int)(uStack0000000000000018 + 1)) {
      if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
        uVar6 = FUN_044c4e9c(**(long **)(*(long *)puVar2 + 0xb8),*(undefined8 *)PTR_DAT_06f74708);
        FUN_068d72e0(in_stack_00000008,uVar6,0);
        lVar8 = *(long *)(*(long *)puVar2 + 0xb8);
        lVar7 = *(long *)(lVar8 + 8);
        if (lVar7 != 0) {
          if (0 < *(int *)(lVar7 + 0x18)) {
            uVar6 = FUN_044c4e9c(lVar7,*(undefined8 *)puVar3);
            FUN_068d738c(in_stack_00000008,uVar6,0);
            lVar8 = *(long *)(*(long *)PTR_DAT_06f74680 + 0xb8);
          }
          puVar2 = PTR_DAT_06f74680;
          lVar7 = *(long *)(lVar8 + 0x10);
          if (lVar7 != 0) {
            if (0 < *(int *)(lVar7 + 0x18)) {
              uVar6 = FUN_043640b4(lVar7,*(undefined8 *)PTR_DAT_06f74700);
              FUN_068d7914(in_stack_00000008,uVar6,0);
              lVar8 = *(long *)(*(long *)puVar2 + 0xb8);
            }
            puVar2 = PTR_DAT_06f746f8;
            lVar7 = *(long *)(lVar8 + 0x18);
            if (lVar7 != 0) {
              if (0 < *(int *)(lVar7 + 0x18)) {
                uVar6 = FUN_044bfdbc(lVar7,*(undefined8 *)PTR_DAT_06f746f8);
                FUN_068d74e4(in_stack_00000008,uVar6,0);
                lVar8 = *(long *)(*(long *)PTR_DAT_06f74680 + 0xb8);
              }
              lVar7 = *(long *)(lVar8 + 0x20);
              if (lVar7 != 0) {
                if (0 < *(int *)(lVar7 + 0x18)) {
                  uVar6 = FUN_044bfdbc(lVar7,*(undefined8 *)puVar2);
                  FUN_068d7590(in_stack_00000008,uVar6,0);
                  lVar8 = *(long *)(*(long *)PTR_DAT_06f74680 + 0xb8);
                }
                lVar7 = *(long *)(lVar8 + 0x28);
                if (lVar7 != 0) {
                  if (0 < *(int *)(lVar7 + 0x18)) {
                    uVar6 = FUN_044bfdbc(lVar7,*(undefined8 *)puVar2);
                    FUN_068d7590(in_stack_00000008,uVar6,0);
                    lVar8 = *(long *)(*(long *)PTR_DAT_06f74680 + 0xb8);
                  }
                  if (*(long *)(lVar8 + 0x30) != 0) {
                    uVar6 = FUN_043b6de8(*(long *)(lVar8 + 0x30),*(undefined8 *)PTR_DAT_06f6e780);
                    FUN_068d95cc(in_stack_00000008,uVar6,0);
                    FUN_031fca38();
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_031ff124;
    }
    if (((uVar1 <= unaff_w21 + 1U) || (uVar1 <= unaff_w21 + 2U)) ||
       (uStack0000000000000018 = unaff_w21 + 3, uVar1 <= uStack0000000000000018)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    unaff_w19 = *(undefined4 *)(in_stack_00000010 + (long)(int)(unaff_w21 + 1U) * 4 + 0x20);
    unaff_w29 = *(undefined4 *)(in_stack_00000010 + (long)(unaff_w21 + 2) * 4 + 0x20);
    unaff_w28 = *(undefined4 *)(in_stack_00000010 + (long)(unaff_w21 + 3) * 4 + 0x20);
    uStack000000000000001c = FUN_031fda34(unaff_w19,unaff_w29,unaff_w19);
    unaff_w26 = FUN_031fda34(unaff_w29,unaff_w19,unaff_w29);
    unaff_w25 = FUN_031fda34(unaff_w29,unaff_w28,unaff_w29);
    unaff_w24 = FUN_031fda34(unaff_w28,unaff_w29,unaff_w28);
    unaff_w22 = FUN_031fda34(unaff_w28,unaff_w19,unaff_w28);
    unaff_w21 = unaff_w21 + 3;
  } while( true );
}


