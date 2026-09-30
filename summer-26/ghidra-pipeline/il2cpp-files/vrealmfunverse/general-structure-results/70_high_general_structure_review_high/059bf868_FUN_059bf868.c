/*
FUNCTION_NAME: FUN_059bf868
ENTRY_POINT: 059bf868
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_059bf868(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined8 uVar13;
  byte bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_a0 [32];
  undefined4 local_80;
  undefined4 local_7c;
  
  if ((DAT_066d3a8a & 1) == 0) {
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<ContactPairHeader>_AsReadOnly__);
    FUN_02b3c81c(Method_System_Array_Resize<RichTextTagAttribute>__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<string>_HandleEventBubbleUp__);
    FUN_02b3c81c(Method_Pico_Platform_Task<SessionMedia>__ctor__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<XmlNode>_Add__);
    DAT_066d3a8a = 1;
  }
  if (((param_2 == 0) || (*(long *)(param_2 + 0x48) == 0)) ||
     (thunk_FUN_05c5ab14(*(long *)(param_2 + 0x48),0,0),
     puVar2 = Method_System_Collections_Generic_List<XmlNode>_Add__, param_4 == 0))
  goto LAB_059bfc38;
  FUN_057f8178(param_4,*(long *)(*(long *)Method_Pico_Platform_Task<SessionMedia>__ctor__ + 0xb8) +
                       0x134,*(undefined1 *)(param_2 + 0x44),0);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  lVar12 = *(long *)(param_2 + 0x48);
  uVar5 = *(undefined4 *)(param_2 + 0x30);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar8 = FUN_0589bed0(uVar8,uVar10,0);
  puVar3 = Method_UnityEngine_UIElements_TextInputBaseField<string>_HandleEventBubbleUp__;
  if (lVar12 == 0) goto LAB_059bfc38;
  thunk_FUN_05c5bc88(lVar12,uVar5,uVar8,0);
  uVar8 = *(undefined8 *)(param_2 + 0x58);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar12 = FUN_05914c04(uVar8,0);
  if (lVar12 == 0) {
    if (*(float *)(param_2 + 0x40) < 0.0) goto LAB_059bfae0;
    uVar4 = 0;
    bVar14 = 2;
LAB_059bf9fc:
    lVar12 = *(long *)(param_2 + 0x58);
    if (lVar12 == 0) goto LAB_059bfc38;
    bVar1 = *(byte *)(lVar12 + 0x1ac);
    uVar5 = FUN_0592854c(lVar12,0);
    if (*(long *)(param_2 + 0x58) == 0) goto LAB_059bfc38;
    uVar15 = *(undefined4 *)(param_2 + 0x34);
    uVar16 = *(undefined4 *)(param_2 + 0x38);
    uVar17 = *(undefined4 *)(param_2 + 0x3c);
    uVar18 = *(undefined4 *)(param_2 + 0x40);
    uVar8 = *(undefined8 *)(param_2 + 0x48);
    uVar6 = FUN_059285dc(*(long *)(param_2 + 0x58),0);
    if (*(int *)(*(long *)Method_System_Array_Resize<RichTextTagAttribute>__ + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)Method_System_Array_Resize<RichTextTagAttribute>__);
    }
    FUN_059bdd50(uVar15,uVar16,uVar17,uVar18,uVar5,uVar8,bVar14 | bVar1 ^ 1,uVar6 & 1);
  }
  else {
    if (*(long *)(param_2 + 0x58) == 0) goto LAB_059bfc38;
    uVar4 = thunk_FUN_058fdbcc(lVar12,*(undefined1 *)(*(long *)(param_2 + 0x58) + 0x1e0),0);
    uVar4 = uVar4 & 1;
    if (0.0 <= *(float *)(param_2 + 0x40)) {
      if (*(long *)(param_2 + 0x58) == 0) goto LAB_059bfc38;
      uVar9 = FUN_058fdbcc(lVar12,*(undefined1 *)(*(long *)(param_2 + 0x58) + 0x1e0),0);
      bVar14 = 0;
      if ((uVar9 & 1) == 0) {
        bVar14 = 2;
      }
      goto LAB_059bf9fc;
    }
  }
  if (uVar4 == 0) {
LAB_059bfae0:
    uVar8 = *(undefined8 *)(param_2 + 0x10);
    uVar10 = *(undefined8 *)(param_2 + 0x18);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar8 = FUN_0589c1c8(uVar8,uVar10,0);
    uVar10 = FUN_0589c1c8(*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),0);
    uVar13 = *(undefined8 *)(param_2 + 0x58);
    if (*(int *)(*(long *)Method_System_Array_Resize<RichTextTagAttribute>__ + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)Method_System_Array_Resize<RichTextTagAttribute>__);
    }
    FUN_059beacc(param_4,param_2,uVar8,uVar10,uVar13);
    return;
  }
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar12 = FUN_0589c1c8(uVar8,uVar10,0);
  if (lVar12 != 0) {
    if (*(char *)(lVar12 + 0xa8) == '\0') {
      if (DAT_066c1e91 == '\0') {
        FUN_02b3c81c(PTR_DAT_063132f8);
        DAT_066c1e91 = '\x01';
      }
      uVar5 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_063132f8 + 0xb8) + 8);
      uVar15 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_063132f8 + 0xb8) + 0xc);
    }
    else {
      FUN_05857484(auStack_a0,lVar12,0);
      FUN_05857484(auStack_a0,lVar12,0);
      uVar5 = local_80;
      uVar15 = local_7c;
    }
    puVar2 = Method_Unity_Collections_NativeArray<ContactPairHeader>_AsReadOnly__;
    if ((*(long *)(lVar12 + 0x18) == 0) ||
       (iVar7 = FUN_05c680c0(*(long *)(lVar12 + 0x18),0), iVar7 != 1)) {
      puVar11 = (undefined4 *)(param_2 + 0x50);
    }
    else {
      puVar11 = (undefined4 *)(param_2 + 0x54);
    }
    uVar16 = *puVar11;
    uVar8 = *(undefined8 *)(param_2 + 0x48);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_058654c8(uVar5,uVar15,0,0,param_4,lVar12,uVar8,uVar16,0);
    return;
  }
LAB_059bfc38:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


