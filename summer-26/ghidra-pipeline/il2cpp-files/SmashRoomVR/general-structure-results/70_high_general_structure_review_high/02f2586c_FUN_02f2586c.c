/*
FUNCTION_NAME: FUN_02f2586c
ENTRY_POINT: 02f2586c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_18;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_02f2586c(long param_1,long *param_2,uint param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  long *plVar16;
  ulong uVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined1 *puVar20;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  
  if ((DAT_03ff0aba & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    thunk_FUN_01ad9084(StringLiteral_7753);
    thunk_FUN_01ad9084(StringLiteral_7988);
    DAT_03ff0aba = 1;
  }
  FUN_02edd0ec(param_1,param_2,param_3 & 1,param_5,0);
  puVar5 = Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__;
  if (param_2 == (long *)0x0) {
LAB_02f25c94:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  iVar6 = (**(code **)(*param_2 + 0x2d8))(param_2,*(undefined8 *)(*param_2 + 0x2e0));
  if (param_4 == 0) {
    iVar7 = (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(*param_2 + 0x220));
    lVar9 = FUN_02ed6a54(iVar7 >> 3,0);
    if (lVar9 == 0) goto LAB_02f25c94;
  }
  else {
    lVar8 = FUN_03062c44(param_4,0);
    if (lVar8 == 0) goto LAB_02f25c94;
    uVar19 = *(undefined8 *)puVar5;
    lVar9 = thunk_FUN_01afa9e0(lVar8,uVar19);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b4841c(lVar8,uVar19);
    }
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    iVar6 = FUN_030415cc(iVar6,*(int *)(lVar9 + 0x18) << 3,0);
  }
  uVar17 = *(ulong *)(lVar9 + 0x18);
  uVar19 = (**(code **)(*param_2 + 0x208))(param_2,*(undefined8 *)(*param_2 + 0x210));
  iVar7 = (int)uVar17;
  uVar10 = FUN_02f0f668(uVar19,iVar7 << 3,0);
  if ((uVar10 & 1) == 0) {
    uVar19 = thunk_FUN_01ad9084(
                               Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                               );
    uVar19 = FUN_01b47fd0(uVar19,3);
    puVar5 = 
    Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
    ;
    local_64 = iVar7;
    uVar12 = thunk_FUN_01ad9084(
                               Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                               );
    uVar12 = thunk_FUN_01afa70c(uVar12,&local_64);
    FUN_01852fbc(uVar19);
    FUN_01855950(uVar19,uVar12);
    FUN_01855748(uVar19,0,uVar12);
    local_68 = 5;
    uVar12 = thunk_FUN_01ad9084(puVar5);
    uVar12 = thunk_FUN_01afa70c(uVar12,&local_68);
    FUN_01852fbc(uVar19);
    FUN_01855950(uVar19,uVar12);
    FUN_01855748(uVar19,1,uVar12);
    local_6c = 0x10;
    uVar12 = thunk_FUN_01ad9084(puVar5);
    uVar12 = thunk_FUN_01afa70c(uVar12,&local_6c);
    FUN_01852fbc(uVar19);
    FUN_01855950(uVar19,uVar12);
    FUN_01855748(uVar19,2,uVar12);
    uVar12 = thunk_FUN_01ad9084(StringLiteral_7989);
    uVar19 = FUN_02ec9af8(uVar12,uVar19,0);
    thunk_FUN_01ad9084(StringLiteral_6625);
    uVar12 = thunk_FUN_01afaadc();
    FUN_02f0f55c(uVar12,uVar19,0);
    uVar19 = thunk_FUN_01ad9084(StringLiteral_7990);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar12,uVar19);
  }
  uVar10 = uVar17 & 0xffffffff;
  lVar8 = FUN_01b47fd0(*(undefined8 *)puVar5,0x80);
  if (0 < iVar7) {
    uVar13 = 0;
    do {
      if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_02f25c90;
      if (lVar8 == 0) goto LAB_02f25c94;
      if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_02f25c90;
      *(undefined1 *)(lVar8 + 0x20 + uVar13) = *(undefined1 *)(lVar9 + 0x20 + uVar13);
      uVar13 = uVar13 + 1;
    } while (uVar10 != uVar13);
  }
  puVar5 = StringLiteral_7753;
  uVar1 = iVar6 + 7;
  lVar9 = (long)iVar7;
  iVar6 = 2 << (ulong)(iVar6 + (~uVar1 | 7) + 8 & 0x1f);
  iVar4 = 0;
  if (iVar6 != 0) {
    iVar4 = 0xff / iVar6;
  }
  lVar14 = lVar9 << 0x20;
  if (lVar9 < 0x81) {
    lVar9 = 0x80;
  }
  iVar2 = (int)uVar1 >> 3;
  lVar14 = lVar14 - (uVar17 << 0x20);
  lVar9 = lVar9 - iVar7;
  puVar20 = (undefined1 *)(lVar8 + iVar7 + 0x20);
  while( true ) {
    lVar11 = *(long *)puVar5;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar11 = *(long *)puVar5;
    }
    if (lVar8 == 0) goto LAB_02f25c94;
    lVar11 = **(long **)(lVar11 + 0xb8);
    if (lVar9 == 0) break;
    uVar18 = (uint)uVar10;
    if (*(uint *)(lVar8 + 0x18) <= uVar18 - 1) goto LAB_02f25c90;
    if (lVar11 == 0) goto LAB_02f25c94;
    uVar17 = (ulong)((uint)*(byte *)(lVar8 + 0x20 + (lVar14 >> 0x20)) +
                    (uint)*(byte *)(lVar8 + 0x20 + (long)(int)(uVar18 - 1))) & 0xff;
    if ((*(uint *)(lVar11 + 0x18) <= (uint)uVar17) || (*(uint *)(lVar8 + 0x18) <= uVar18))
    goto LAB_02f25c90;
    lVar14 = lVar14 + 0x100000000;
    lVar9 = lVar9 + -1;
    uVar10 = (ulong)(uVar18 + 1);
    *puVar20 = *(undefined1 *)(lVar11 + uVar17 + 0x20);
    puVar20 = puVar20 + 1;
  }
  if ((uint)(0x80 - (long)iVar2) < *(uint *)(lVar8 + 0x18)) {
    if (lVar11 == 0) goto LAB_02f25c94;
    pbVar15 = (byte *)(lVar8 + (0x80 - (long)iVar2) + 0x20);
    uVar10 = (ulong)(0xff - iVar4 * iVar6) & (ulong)*pbVar15;
    if ((uint)uVar10 < *(uint *)(lVar11 + 0x18)) {
      *pbVar15 = *(byte *)(lVar11 + uVar10 + 0x20);
      if (0x3ff < (int)uVar1) goto LAB_02f25bec;
      lVar9 = 0;
      goto LAB_02f25b6c;
    }
  }
  goto LAB_02f25c90;
  while( true ) {
    lVar14 = **(long **)(lVar14 + 0xb8);
    if (lVar14 == 0) goto LAB_02f25c94;
    bVar3 = *(byte *)(lVar8 + lVar9 + 0x9f) ^ *(byte *)(lVar8 + -iVar2 + 0xa0 + lVar9);
    if ((*(uint *)(lVar14 + 0x18) <= (uint)bVar3) || (uVar1 <= uVar10)) goto LAB_02f25c90;
    *(undefined1 *)(lVar8 + (ulong)(0x7f - iVar2) + 0x20 + lVar9) =
         *(undefined1 *)(lVar14 + (ulong)bVar3 + 0x20);
    lVar9 = lVar9 + -1;
    if (-iVar2 + 0x80 + (int)lVar9 < 1) break;
LAB_02f25b6c:
    lVar14 = *(long *)puVar5;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar14 = *(long *)puVar5;
    }
    uVar1 = *(uint *)(lVar8 + 0x18);
    uVar10 = (ulong)(0x7f - iVar2) + lVar9;
    if (((ulong)uVar1 <= uVar10 + 1) || (uVar1 <= (int)lVar9 + 0x7fU)) goto LAB_02f25c90;
  }
LAB_02f25bec:
  lVar9 = FUN_01b47fd0(*(undefined8 *)StringLiteral_7988,0x40);
  plVar16 = (long *)(param_1 + 0x60);
  *plVar16 = lVar9;
  thunk_FUN_01b4f09c(plVar16,lVar9);
  lVar9 = *plVar16;
  uVar1 = *(uint *)(lVar8 + 0x18);
  uVar10 = 0;
  uVar17 = 0;
  while ((uVar17 < uVar1 && (uVar17 + 1 < (ulong)uVar1))) {
    if (lVar9 == 0) goto LAB_02f25c94;
    if (*(uint *)(lVar9 + 0x18) <= uVar10) break;
    *(ushort *)(lVar9 + 0x20 + uVar10 * 2) =
         CONCAT11(*(undefined1 *)(lVar8 + uVar17 + 0x21),*(undefined1 *)(lVar8 + uVar17 + 0x20));
    uVar10 = uVar10 + 1;
    uVar17 = uVar17 + 2;
    if (uVar10 == 0x40) {
      return;
    }
  }
LAB_02f25c90:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
}


