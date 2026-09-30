/*
FUNCTION_NAME: FUN_0597549c
ENTRY_POINT: 0597549c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void FUN_0597549c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 *param_14)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long local_98;
  
  if ((DAT_066d3865 & 1) == 0) {
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_text__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<PassData>__ctor__);
    FUN_02b3c81c(Method_UnityEngine_Events_UnityEvent<InputAction_CallbackContext>_Invoke__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<XmlNode>_Add__);
    DAT_066d3865 = 1;
  }
  local_98 = 0;
  memset(&local_220,0,0x180);
                    /* try { // try from 05975548 to 05a7554f has its CatchHandler @ 0597562c */
  if (((param_1 == 0) || (*(long *)(param_1 + 0xd8) == 0)) ||
     (FUN_0317392c(*(long *)(param_1 + 0xd8),&local_98,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_TextInputBaseField<Hash128>_get_text__),
     local_98 == 0)) goto LAB_05975a00;
                    /* try { // try from 05975564 to 05a75567 has its CatchHandler @ 0597561c */
  lVar7 = *(long *)(param_1 + 0x1a0);
                    /* try { // try from 0597556c to 05a75577 has its CatchHandler @ 05975628 */
  lVar15 = *(long *)(local_98 + 0x90);
  *(undefined1 *)(param_14 + 0xe) = 0;
  if (lVar7 == 0) goto LAB_05975a00;
  uVar8 = FUN_057ec748(lVar7,0);
  if ((uVar8 & 1) == 0) {
    bVar4 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x1a0) == 0) goto LAB_05975a00;
    bVar4 = FUN_057ec868(*(long *)(param_1 + 0x1a0),0);
  }
  *(byte *)((long)param_14 + 0x71) = bVar4 & 1;
  puVar3 = Method_System_Collections_Generic_List<XmlNode>_Add__;
  *(undefined1 *)((long)param_14 + 0x72) = 1;
  *param_14 = param_13;
  thunk_FUN_02bb0e9c(param_14);
  lVar7 = *(long *)puVar3;
  param_14[1] = param_2;
  param_14[2] = param_3;
  param_14[3] = param_4;
  param_14[4] = param_5;
  param_14[5] = param_6;
  param_14[6] = param_7;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (DAT_066d300f == '\0') {
    FUN_02b3c81c(Method_System_Collections_Generic_List<XmlNode>_Add__);
    DAT_066d300f = '\x01';
  }
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar7 = *(long *)puVar3;
  }
  uVar17 = (*(undefined8 **)(lVar7 + 0xb8))[1];
  uVar9 = **(undefined8 **)(lVar7 + 0xb8);
  param_14[9] = param_9;
  param_14[10] = param_10;
  param_14[0xb] = param_11;
  param_14[0xc] = param_12;
  param_14[8] = uVar17;
  param_14[7] = uVar9;
  lVar7 = *(long *)(param_1 + 0x1a0);
  *(undefined4 *)((long)param_14 + 0x84) = 0;
  if (lVar7 == 0) goto LAB_05975a00;
  lVar13 = *(long *)(param_1 + 0x208);
  uVar8 = FUN_057ec748(lVar7,0);
  if ((uVar8 & 1) == 0) {
LAB_05975668:
    uVar14 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x1a0) == 0) goto LAB_05975a00;
    uVar8 = FUN_057ec868(*(long *)(param_1 + 0x1a0),0);
    if ((uVar8 & 1) != 0) goto LAB_05975668;
    if (*(long *)(param_1 + 0x1a0) == 0) goto LAB_05975a00;
    uVar14 = *(uint *)(*(long *)(param_1 + 0x1a0) + 0x2c);
  }
  if (lVar13 == 0) {
LAB_05975a00:
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar9 = FUN_0592ac70(lVar13,uVar14,0);
  param_14[0xd] = uVar9;
  thunk_FUN_02bb0e9c();
  if (*(long *)(param_1 + 0xd8) == 0) goto LAB_05975a00;
  uVar16 = FUN_05c3f4f8(*(long *)(param_1 + 0xd8),0);
  lVar7 = *(long *)(param_1 + 0xd8);
  *(undefined4 *)((long)param_14 + 0x74) = uVar16;
  puVar3 = Method_UnityEngine_Events_UnityEvent<InputAction_CallbackContext>_Invoke__;
  if (lVar7 == 0) goto LAB_05975a00;
  uVar16 = FUN_05c3f680(lVar7,0);
  lVar7 = *(long *)puVar3;
  *(undefined4 *)(param_14 + 0xf) = uVar16;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  iVar2 = *(int *)(param_1 + 0x22c);
  iVar5 = FUN_05c887e8(0);
  *(int *)((long)param_14 + 0x7c) = iVar5 + iVar2;
  bVar4 = FUN_05928ab4(param_1,0);
  *(undefined4 *)(param_14 + 0x11) = param_8;
  *(byte *)(param_14 + 0x10) = (bVar4 ^ 0xff) & 1;
  if (lVar15 == 0) goto LAB_05975a00;
  *(undefined8 *)((long)param_14 + 0x8c) = *(undefined8 *)(lVar15 + 0x60);
  uVar9 = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)((long)param_14 + 0x94) = uVar9;
  *(undefined8 *)((long)param_14 + 0x9c) = uVar9;
  *(undefined8 *)((long)param_14 + 0xa4) = *(undefined8 *)(param_1 + 0x160);
  puVar3 = Method_Unity_Collections_NativeArray<PassData>__ctor__;
  if (*(long *)(param_1 + 0x1a0) == 0) goto LAB_05975a00;
  uVar8 = FUN_057ec748(*(long *)(param_1 + 0x1a0),0);
  uVar10 = 1;
  if ((uVar8 & 1) != 0) {
    if (*(long *)(param_1 + 0x1a0) == 0) goto LAB_05975a00;
    uVar6 = FUN_057ede30(*(long *)(param_1 + 0x1a0),0);
    uVar10 = (ulong)uVar6;
    if ((int)uVar6 < 1) goto LAB_0597597c;
  }
  lVar13 = (ulong)uVar14 << 0x20;
  uVar8 = 0;
  lVar7 = 0x20;
  uVar6 = (uint)uVar10;
  do {
    lVar12 = *(long *)(lVar15 + 0x10);
    if (lVar12 == 0) goto LAB_05975a00;
    uVar1 = uVar14 + uVar8;
    if (*(uint *)(lVar12 + 0x18) <= uVar1) {
LAB_05975a04:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar11 = lVar13 >> 0x20;
    lVar12 = lVar12 + lVar11 * 0x40;
    uStack_1f8 = *(undefined8 *)(lVar12 + 0x48);
    local_200 = *(undefined8 *)(lVar12 + 0x40);
    uStack_1e8 = *(undefined8 *)(lVar12 + 0x58);
    uStack_1f0 = *(undefined8 *)(lVar12 + 0x50);
    uStack_218 = *(undefined8 *)(lVar12 + 0x28);
    local_220 = *(undefined8 *)(lVar12 + 0x20);
    uStack_208 = *(undefined8 *)(lVar12 + 0x38);
    uStack_210 = *(undefined8 *)(lVar12 + 0x30);
    lVar12 = *(long *)(lVar15 + 0x28);
    if (lVar12 == 0) goto LAB_05975a00;
    if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_05975a04;
    lVar12 = lVar12 + lVar11 * 0x40;
    uStack_1b8 = *(undefined8 *)(lVar12 + 0x48);
    local_1c0 = *(undefined8 *)(lVar12 + 0x40);
    uStack_1a8 = *(undefined8 *)(lVar12 + 0x58);
    uStack_1b0 = *(undefined8 *)(lVar12 + 0x50);
    uStack_1d8 = *(undefined8 *)(lVar12 + 0x28);
    local_1e0 = *(undefined8 *)(lVar12 + 0x20);
    uStack_1c8 = *(undefined8 *)(lVar12 + 0x38);
    uStack_1d0 = *(undefined8 *)(lVar12 + 0x30);
    lVar12 = *(long *)(lVar15 + 0x40);
    if (lVar12 == 0) goto LAB_05975a00;
    if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_05975a04;
    lVar12 = lVar12 + lVar11 * 0x40;
    uStack_178 = *(undefined8 *)(lVar12 + 0x48);
    local_180 = *(undefined8 *)(lVar12 + 0x40);
    uStack_168 = *(undefined8 *)(lVar12 + 0x58);
    uStack_170 = *(undefined8 *)(lVar12 + 0x50);
    uStack_198 = *(undefined8 *)(lVar12 + 0x28);
    local_1a0 = *(undefined8 *)(lVar12 + 0x20);
    uStack_188 = *(undefined8 *)(lVar12 + 0x38);
    uStack_190 = *(undefined8 *)(lVar12 + 0x30);
    lVar12 = *(long *)(lVar15 + 0x18);
    if (lVar12 == 0) goto LAB_05975a00;
    if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_05975a04;
    lVar12 = lVar12 + lVar11 * 0x40;
    uStack_138 = *(undefined8 *)(lVar12 + 0x48);
    local_140 = *(undefined8 *)(lVar12 + 0x40);
    uStack_128 = *(undefined8 *)(lVar12 + 0x58);
    uStack_130 = *(undefined8 *)(lVar12 + 0x50);
    uStack_158 = *(undefined8 *)(lVar12 + 0x28);
    local_160 = *(undefined8 *)(lVar12 + 0x20);
    uStack_148 = *(undefined8 *)(lVar12 + 0x38);
    uStack_150 = *(undefined8 *)(lVar12 + 0x30);
    lVar12 = *(long *)(lVar15 + 0x30);
    if (lVar12 == 0) goto LAB_05975a00;
    if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_05975a04;
    lVar12 = lVar12 + lVar11 * 0x40;
    uStack_f8 = *(undefined8 *)(lVar12 + 0x48);
    local_100 = *(undefined8 *)(lVar12 + 0x40);
    uStack_e8 = *(undefined8 *)(lVar12 + 0x58);
    uStack_f0 = *(undefined8 *)(lVar12 + 0x50);
    uStack_118 = *(undefined8 *)(lVar12 + 0x28);
    local_120 = *(undefined8 *)(lVar12 + 0x20);
    uStack_108 = *(undefined8 *)(lVar12 + 0x38);
    uStack_110 = *(undefined8 *)(lVar12 + 0x30);
    lVar12 = *(long *)(lVar15 + 0x48);
    if (lVar12 == 0) goto LAB_05975a00;
    if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_05975a04;
    lVar12 = lVar12 + lVar11 * 0x40;
    uStack_b8 = *(undefined8 *)(lVar12 + 0x48);
    local_c0 = *(undefined8 *)(lVar12 + 0x40);
    uStack_a8 = *(undefined8 *)(lVar12 + 0x58);
    uStack_b0 = *(undefined8 *)(lVar12 + 0x50);
    uStack_d8 = *(undefined8 *)(lVar12 + 0x28);
    local_e0 = *(undefined8 *)(lVar12 + 0x20);
    uStack_c8 = *(undefined8 *)(lVar12 + 0x38);
    uStack_d0 = *(undefined8 *)(lVar12 + 0x30);
    fVar23 = *(float *)(lVar15 + 0x88);
    fVar18 = *(float *)(lVar15 + 0x74);
    fVar19 = *(float *)(lVar15 + 0x78);
    fVar20 = *(float *)(lVar15 + 0x7c);
    fVar21 = *(float *)(lVar15 + 0x80);
    fVar22 = *(float *)(lVar15 + 0x84);
    FUN_05c79198(-*(float *)(lVar15 + 0x68),-*(float *)(lVar15 + 0x6c),-*(float *)(lVar15 + 0x70),
                 0x3f800000,&local_160,3,0);
    FUN_05c79198(-fVar18,-fVar19,-fVar20,0x3f800000,&local_120,3,0);
    FUN_05c79198(-fVar21,-fVar22,-fVar23,0x3f800000,&local_e0,3,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (DAT_066d3891 == '\0') {
      FUN_02b3c81c(puVar3);
      DAT_066d3891 = '\x01';
    }
    lVar12 = *(long *)puVar3;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar12 = *(long *)puVar3;
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x10);
    if (lVar12 == 0) goto LAB_05975a00;
    if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_05975a04;
    memmove((void *)(lVar12 + lVar7),&local_220,0x180);
    uVar8 = uVar8 + 1;
    lVar7 = lVar7 + 0x180;
    lVar13 = lVar13 + 0x100000000;
  } while (uVar10 != uVar8);
LAB_0597597c:
  lVar7 = *(long *)puVar3;
  *(uint *)((long)param_14 + 0xac) = uVar6;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (DAT_066d3891 == '\0') {
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<PassData>__ctor__);
    DAT_066d3891 = '\x01';
  }
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar7 = *(long *)puVar3;
  }
  param_14[0x16] = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10);
  thunk_FUN_02bb0e9c(param_14 + 0x16);
  return;
}


