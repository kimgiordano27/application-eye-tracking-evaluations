/*
FUNCTION_NAME: OVRPlugin.Media$$SetAvailableQueueIndexVulkan
ENTRY_POINT: 04f84c34
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SetAvailableQueueIndexVulkan
               (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5)

{
  undefined8 *puVar1;
  bool in_ZR;
  long lVar2;
  long in_x9;
  long in_x10;
  undefined8 uVar3;
  uint in_w11;
  long in_x12;
  uint in_w13;
  uint in_w14;
  uint in_w15;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  if ((((((in_ZR) || (*(byte *)(in_x10 + 0x21) = (byte)(in_w15 >> 5) & 1, in_w14 == 1)) ||
        (*(int *)(in_x12 + 0x24) = (int)param_3, in_w11 < 3)) ||
       ((*(undefined1 *)(in_x9 + 0x22) = 1, in_w13 < 3 ||
        (*(byte *)(in_x10 + 0x22) = (byte)(in_w15 >> 4) & 1, in_w14 < 3)))) ||
      ((*(undefined4 *)(in_x12 + 0x28) = param_2, in_w11 == 3 ||
       ((*(undefined1 *)(in_x9 + 0x23) = 1, in_w13 == 3 ||
        (*(undefined1 *)(in_x10 + 0x23) = 0, in_w14 == 3)))))) ||
     ((*(undefined4 *)(in_x12 + 0x2c) = 0, in_w11 < 5 ||
      ((*(undefined1 *)(in_x9 + 0x24) = 1, in_w13 < 5 ||
       (*(undefined1 *)(in_x10 + 0x24) = 0, in_w14 < 5)))))) {
LAB_04f84f0c:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  *(undefined4 *)(in_x12 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x90) = 2;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(unaff_x20 + 0x68);
  *(undefined8 *)(param_1 + 0x84) = uVar3;
  *(undefined8 *)(param_1 + 0x7c) = uVar11;
  *(undefined8 *)(param_1 + 0x74) = uVar10;
  lVar2 = *(long *)(unaff_x19 + 0x70);
  if (lVar2 == 0) goto LAB_04f84dc4;
  lVar4 = 0;
  lVar5 = 4;
  lVar6 = 0x20;
  while( true ) {
    uVar7 = (int)lVar5 - 4;
    if ((int)*(uint *)(lVar2 + 0x18) <= (int)uVar7) break;
    if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_04f84dc4;
    if (*(uint *)(lVar2 + 0x18) <= uVar7) goto LAB_04f84f0c;
    lVar2 = *(long *)(lVar2 + lVar5 * 8);
    if (lVar2 == 0) goto LAB_04f84dc4;
    lVar8 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x48);
    uVar9 = FUN_05c9c2ec(lVar2,0);
    if (lVar8 == 0) goto LAB_04f84dc4;
    if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_04f84f0c;
    lVar8 = lVar8 + lVar4;
    *(undefined4 *)(lVar8 + 0x20) = uVar9;
    *(int *)(lVar8 + 0x24) = (int)param_3;
    *(int *)(lVar8 + 0x28) = (int)param_4;
    *(undefined4 *)(lVar8 + 0x2c) = param_5;
    if ((*(long *)(unaff_x19 + 0x80) == 0) || (lVar2 = *(long *)(unaff_x19 + 0x70), lVar2 == 0))
    goto LAB_04f84dc4;
    if (*(uint *)(lVar2 + 0x18) <= uVar7) goto LAB_04f84f0c;
    lVar8 = *(long *)(*(long *)(unaff_x19 + 0x80) + 0x38);
    FUN_04f0d180(&stack0x00000000 + 4,*(undefined8 *)(unaff_x19 + 0x58),
                 *(undefined8 *)(lVar2 + lVar5 * 8),0);
    if (lVar8 == 0) goto LAB_04f84dc4;
    lVar5 = lVar5 + 1;
    if (*(uint *)(lVar8 + 0x18) <= (int)lVar5 - 5U) goto LAB_04f84f0c;
    puVar1 = (undefined8 *)(lVar8 + lVar6);
    lVar6 = lVar6 + 0x1c;
    lVar4 = lVar4 + 0x10;
    *(undefined4 *)(puVar1 + 3) = uStack000000000000001c;
    puVar1[2] = CONCAT44(uStack0000000000000018,uStack0000000000000014);
    puVar1[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
    *puVar1 = in_stack_00000000._4_8_;
    lVar2 = *(long *)(unaff_x19 + 0x70);
    if (lVar2 == 0) goto LAB_04f84dc4;
  }
  if (*(char *)(unaff_x19 + 0x60) == '\0') {
    lVar2 = *(long *)(unaff_x19 + 0x80);
    FUN_04ef8cd4(&stack0x00000000 + 4,*(undefined8 *)(unaff_x19 + 0x58),0,0);
    if (lVar2 == 0) goto LAB_04f84dc4;
    *(ulong *)(lVar2 + 0x1c) = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
    *(undefined8 *)(lVar2 + 0x14) = in_stack_00000000._4_8_;
    *(ulong *)(lVar2 + 0x28) = CONCAT44(uStack000000000000001c,uStack0000000000000018);
    *(ulong *)(lVar2 + 0x20) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
    if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_04f84dc4;
    lVar2 = *(long *)(unaff_x19 + 0x80);
    uVar9 = FUN_05c9e358(*(long *)(unaff_x19 + 0x58),0);
  }
  else {
    FUN_04ef8cd4(&stack0x00000000 + 4,*(undefined8 *)(unaff_x19 + 0x58),1,0);
    in_stack_00000040 = in_stack_00000000._4_8_;
    uStack0000000000000054 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
    in_stack_00000020 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack0000000000000048 = in_stack_00000000._12_4_;
    uStack0000000000000034 = *(undefined8 *)(unaff_x20 + 0x44);
    uStack000000000000004c = uStack0000000000000010;
    uStack0000000000000050 = uStack0000000000000014;
    uStack0000000000000028 = (undefined4)*(undefined8 *)(unaff_x20 + 0x38);
    uStack000000000000002c = (undefined4)*(undefined8 *)(unaff_x20 + 0x3c);
    uStack0000000000000030 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x3c) >> 0x20);
    if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_04f84dc4;
    FUN_04ef5cac(&stack0x00000020,&stack0x00000040,*(long *)(unaff_x19 + 0x80) + 0x14,0);
    if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_04f84dc4;
    lVar2 = *(long *)(unaff_x19 + 0x80);
    uVar9 = UnityEngine_UIElements_BackgroundPosition_PropertyBag_KeywordProperty__get_IsReadOnly
                      (*(long *)(unaff_x19 + 0x58),0);
  }
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x70) = uVar9;
    if (*(long *)(unaff_x19 + 0x80) != 0) {
      *(undefined4 *)(*(long *)(unaff_x19 + 0x80) + 0x30) = 2;
      return;
    }
  }
LAB_04f84dc4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


