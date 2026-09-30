/*
FUNCTION_NAME: GleyLocalization.JSONArray.<get_Children>d__22$$System.Collections.Generic.IEnumerable<GleyLocalization.JSONNode>.GetEnumerator
ENTRY_POINT: 031fe4a8
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


void GleyLocalization_JSONArray_<get_Children>d__22__System_Collections_Generic_IEnumerable<GleyLocalization_JSONNode>_GetEnumerator
               (long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long in_x9;
  long lVar5;
  long in_x10;
  long lVar6;
  int in_w11;
  undefined4 unaff_w19;
  long *unaff_x20;
  int unaff_w21;
  undefined4 unaff_w22;
  undefined4 unaff_w24;
  undefined4 unaff_w25;
  undefined4 unaff_w26;
  undefined4 unaff_w27;
  undefined4 unaff_w28;
  undefined4 unaff_w29;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  uint uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  do {
    *(int *)(param_1 + 0x1c) = in_w11 + 1;
    if (in_x9 == 0) {
LAB_031ff124:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(in_x9 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = unaff_w19;
    }
    else {
      FUN_043b542c(param_1,unaff_w19,
                   *(undefined8 *)(*(long *)(*(long *)(in_x10 + 0x20) + 0xc0) + 0x70));
      param_1 = *(long *)(*(long *)(*(long *)PTR_DAT_06f74680 + 0xb8) + 0x30);
      if (param_1 == 0) goto LAB_031ff124;
    }
    puVar2 = PTR_DAT_06f74680;
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = uStack000000000000001c;
    }
    else {
      FUN_043b542c(param_1,uStack000000000000001c,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      param_1 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (param_1 == 0) goto LAB_031ff124;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = unaff_w27;
    }
    else {
      FUN_043b542c(param_1,unaff_w27,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      param_1 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (param_1 == 0) goto LAB_031ff124;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = unaff_w29;
    }
    else {
      FUN_043b542c(param_1,unaff_w29,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      param_1 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (param_1 == 0) goto LAB_031ff124;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = unaff_w25;
    }
    else {
      FUN_043b542c(param_1,unaff_w25,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      param_1 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (param_1 == 0) goto LAB_031ff124;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = unaff_w26;
    }
    else {
      FUN_043b542c(param_1,unaff_w26,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      param_1 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (param_1 == 0) goto LAB_031ff124;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = unaff_w28;
    }
    else {
      FUN_043b542c(param_1,unaff_w28,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      param_1 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (param_1 == 0) goto LAB_031ff124;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = unaff_w22;
    }
    else {
      FUN_043b542c(param_1,unaff_w22,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      param_1 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (param_1 == 0) goto LAB_031ff124;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = unaff_w24;
    }
    else {
      FUN_043b542c(param_1,unaff_w24,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      param_1 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (param_1 == 0) goto LAB_031ff124;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = param_2;
    }
    else {
      FUN_043b542c(param_1,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                  );
      param_1 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (param_1 == 0) goto LAB_031ff124;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = uStack000000000000001c;
    }
    else {
      FUN_043b542c(param_1,uStack000000000000001c,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      param_1 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (param_1 == 0) goto LAB_031ff124;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = unaff_w26;
    }
    else {
      FUN_043b542c(param_1,unaff_w26,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      param_1 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (param_1 == 0) goto LAB_031ff124;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = param_2;
    }
    else {
      FUN_043b542c(param_1,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                  );
      param_1 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (param_1 == 0) goto LAB_031ff124;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = unaff_w25;
    }
    else {
      FUN_043b542c(param_1,unaff_w25,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      param_1 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (param_1 == 0) goto LAB_031ff124;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = unaff_w24;
    }
    else {
      FUN_043b542c(param_1,unaff_w24,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      param_1 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (param_1 == 0) goto LAB_031ff124;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = param_2;
    }
    else {
      FUN_043b542c(param_1,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                  );
      param_1 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (param_1 == 0) goto LAB_031ff124;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = unaff_w22;
    }
    else {
      FUN_043b542c(param_1,unaff_w22,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      param_1 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (param_1 == 0) goto LAB_031ff124;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = unaff_w27;
    }
    else {
      FUN_043b542c(param_1,unaff_w27,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      param_1 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (param_1 == 0) goto LAB_031ff124;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = param_2;
    }
    else {
      FUN_043b542c(param_1,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                  );
      param_1 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (param_1 == 0) goto LAB_031ff124;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = unaff_w27;
    }
    else {
      FUN_043b542c(param_1,unaff_w27,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      param_1 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (param_1 == 0) goto LAB_031ff124;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = uStack000000000000001c;
    }
    else {
      FUN_043b542c(param_1,uStack000000000000001c,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      param_1 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (param_1 == 0) goto LAB_031ff124;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = param_2;
    }
    else {
      FUN_043b542c(param_1,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                  );
      param_1 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (param_1 == 0) goto LAB_031ff124;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = unaff_w26;
    }
    else {
      FUN_043b542c(param_1,unaff_w26,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      param_1 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (param_1 == 0) goto LAB_031ff124;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = unaff_w25;
    }
    else {
      FUN_043b542c(param_1,unaff_w25,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      param_1 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (param_1 == 0) goto LAB_031ff124;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = param_2;
    }
    else {
      FUN_043b542c(param_1,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                  );
      param_1 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (param_1 == 0) goto LAB_031ff124;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = unaff_w24;
    }
    else {
      FUN_043b542c(param_1,unaff_w24,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      param_1 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
      if (param_1 == 0) goto LAB_031ff124;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_031ff124;
    uVar1 = *(uint *)(param_1 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = unaff_w22;
    }
    else {
      FUN_043b542c(param_1,unaff_w22,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    puVar3 = PTR_DAT_06f74708;
    uVar1 = *(uint *)(in_stack_00000010 + 0x18);
    if ((int)uVar1 <= (int)(uStack0000000000000018 + 1)) {
      if (**(long **)(*(long *)puVar2 + 0xb8) != 0) {
        uVar4 = FUN_044c4e9c(**(long **)(*(long *)puVar2 + 0xb8),*(undefined8 *)PTR_DAT_06f74708);
        FUN_068d72e0(in_stack_00000008,uVar4,0);
        lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
        lVar5 = *(long *)(lVar6 + 8);
        if (lVar5 != 0) {
          if (0 < *(int *)(lVar5 + 0x18)) {
            uVar4 = FUN_044c4e9c(lVar5,*(undefined8 *)puVar3);
            FUN_068d738c(in_stack_00000008,uVar4,0);
            lVar6 = *(long *)(*(long *)PTR_DAT_06f74680 + 0xb8);
          }
          puVar2 = PTR_DAT_06f74680;
          lVar5 = *(long *)(lVar6 + 0x10);
          if (lVar5 != 0) {
            if (0 < *(int *)(lVar5 + 0x18)) {
              uVar4 = FUN_043640b4(lVar5,*(undefined8 *)PTR_DAT_06f74700);
              FUN_068d7914(in_stack_00000008,uVar4,0);
              lVar6 = *(long *)(*(long *)puVar2 + 0xb8);
            }
            puVar2 = PTR_DAT_06f746f8;
            lVar5 = *(long *)(lVar6 + 0x18);
            if (lVar5 != 0) {
              if (0 < *(int *)(lVar5 + 0x18)) {
                uVar4 = FUN_044bfdbc(lVar5,*(undefined8 *)PTR_DAT_06f746f8);
                FUN_068d74e4(in_stack_00000008,uVar4,0);
                lVar6 = *(long *)(*(long *)PTR_DAT_06f74680 + 0xb8);
              }
              lVar5 = *(long *)(lVar6 + 0x20);
              if (lVar5 != 0) {
                if (0 < *(int *)(lVar5 + 0x18)) {
                  uVar4 = FUN_044bfdbc(lVar5,*(undefined8 *)puVar2);
                  FUN_068d7590(in_stack_00000008,uVar4,0);
                  lVar6 = *(long *)(*(long *)PTR_DAT_06f74680 + 0xb8);
                }
                lVar5 = *(long *)(lVar6 + 0x28);
                if (lVar5 != 0) {
                  if (0 < *(int *)(lVar5 + 0x18)) {
                    uVar4 = FUN_044bfdbc(lVar5,*(undefined8 *)puVar2);
                    FUN_068d7590(in_stack_00000008,uVar4,0);
                    lVar6 = *(long *)(*(long *)PTR_DAT_06f74680 + 0xb8);
                  }
                  if (*(long *)(lVar6 + 0x30) != 0) {
                    uVar4 = FUN_043b6de8(*(long *)(lVar6 + 0x30),*(undefined8 *)PTR_DAT_06f6e780);
                    FUN_068d95cc(in_stack_00000008,uVar4,0);
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
    unaff_w27 = FUN_031fda34(unaff_w19,unaff_w28,unaff_w19);
    param_2 = FUN_031fda34(unaff_w19,unaff_w29,unaff_w28);
    param_1 = *(long *)(*(long *)(*(long *)PTR_DAT_06f74680 + 0xb8) + 0x30);
    if (param_1 == 0) goto LAB_031ff124;
    in_w11 = *(int *)(param_1 + 0x1c);
    in_x9 = *(long *)(param_1 + 0x10);
    in_x10 = *unaff_x20;
    unaff_w21 = unaff_w21 + 3;
  } while( true );
}


