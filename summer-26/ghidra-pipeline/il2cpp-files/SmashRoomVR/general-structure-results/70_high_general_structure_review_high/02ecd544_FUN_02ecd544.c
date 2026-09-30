/*
FUNCTION_NAME: FUN_02ecd544
ENTRY_POINT: 02ecd544
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_20;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_02ecd544(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  short sVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  int local_6c;
  int local_68;
  undefined4 local_64;
  
  puVar12 = StringLiteral_7049;
  puVar11 = StringLiteral_7048;
  puVar10 = StringLiteral_7047;
  puVar9 = StringLiteral_7046;
  puVar8 = StringLiteral_7045;
  if ((DAT_03ff080e & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_OVRSceneLoader_<onCheckSceneCoroutine>d__25_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_7050);
    thunk_FUN_01ad9084(StringLiteral_7044);
    thunk_FUN_01ad9084(StringLiteral_7051);
    thunk_FUN_01ad9084(StringLiteral_7052);
    thunk_FUN_01ad9084(StringLiteral_7053);
                    /* try { // try from 02ecd5f4 to 02fcd69b has its CatchHandler @ 02ecd5f4
                       catch() { ... } // from try @ 02ecd5f4 with catch @ 02ecd5f4
                       catch() { ... } // from try @ 02ecd6b4 with catch @ 02ecd5f4
                       catch() { ... } // from try @ 02ecd73c with catch @ 02ecd5f4
                       catch() { ... } // from try @ 02ecd77c with catch @ 02ecd5f4 */
    thunk_FUN_01ad9084(StringLiteral_7054);
    thunk_FUN_01ad9084(StringLiteral_7055);
    thunk_FUN_01ad9084(StringLiteral_7056);
    thunk_FUN_01ad9084(StringLiteral_7057);
    thunk_FUN_01ad9084(StringLiteral_7058);
    thunk_FUN_01ad9084(StringLiteral_7047);
    thunk_FUN_01ad9084(StringLiteral_7049);
    thunk_FUN_01ad9084(StringLiteral_7046);
    thunk_FUN_01ad9084(StringLiteral_7048);
    thunk_FUN_01ad9084(StringLiteral_7045);
    thunk_FUN_01ad9084(StringLiteral_2598);
    thunk_FUN_01ad9084(StringLiteral_7059);
    thunk_FUN_01ad9084(StringLiteral_7060);
    DAT_03ff080e = 1;
  }
                    /* try { // try from 02ecd69c to 02fcd6a3 has its CatchHandler @ 02ecd720 */
  lVar13 = thunk_FUN_01afaadc(*(undefined8 *)puVar9);
  FUN_02b591b0(lVar13,*(undefined8 *)puVar10);
                    /* try { // try from 02ecd6ac to 02fcd6b3 has its CatchHandler @ 02ecd71c */
  lVar14 = thunk_FUN_01afaadc(*(undefined8 *)puVar11);
                    /* try { // try from 02ecd6b4 to 02fcd737 has its CatchHandler @ 02ecd5f4 */
  FUN_02b591b0(lVar14,*(undefined8 *)puVar12);
  lVar15 = *(long *)puVar8;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar15 = *(long *)puVar8;
  }
  puVar9 = StringLiteral_7054;
  puVar8 = StringLiteral_7052;
  lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x78);
  if (lVar15 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = 0;
    if (*(int *)(lVar15 + 0x18) != 0) {
      lVar24 = lVar15 + 0x20;
    }
  }
  if (param_2 != 0) {
    iVar29 = *(int *)(param_2 + 0x14);
    iVar2 = *(int *)(param_2 + 0x18) + iVar29;
    if (iVar29 < iVar2) {
      local_6c = 0;
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 02ecd6ac with catch @ 02ecd71c
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 02ecd69c with catch @ 02ecd720
                        */
      do {
        uVar1 = iVar29 + 2;
        while (sVar6 = *(short *)(lVar24 + (long)iVar29 * 2), sVar6 == 2) {
                    /* try { // try from 02ecd738 to 02fcd73b has its CatchHandler @ 02ecd764 */
          uVar4 = *(undefined1 *)
                   ((-(ulong)(iVar29 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(iVar29 + 1U) << 1)
                   + lVar24);
          uVar5 = *(undefined1 *)
                   ((-(ulong)(iVar29 + 2U >> 0x1f) & 0xfffffffe00000000 | (ulong)(iVar29 + 2U) << 1)
                   + lVar24);
          lVar15 = thunk_FUN_01afaadc(*(undefined8 *)puVar8);
          FUN_03081994(lVar15,0);
          *(undefined1 *)(lVar15 + 0x10) = uVar4;
          *(undefined1 *)(lVar15 + 0x11) = uVar5;
          if (lVar14 == 0) goto LAB_02ecdbe4;
          lVar21 = *(long *)(lVar14 + 0x10);
          lVar23 = *(long *)puVar9;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar21 == 0) goto LAB_02ecdbe4;
          uVar28 = *(uint *)(lVar14 + 0x18);
          if (uVar28 < *(uint *)(lVar21 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar28 + 1;
            plVar16 = (long *)(lVar21 + (long)(int)uVar28 * 8 + 0x20);
            *plVar16 = lVar15;
            thunk_FUN_01b4f09c(plVar16,lVar15);
          }
          else {
            FUN_02b599e4(lVar14,lVar15,
                         *(undefined8 *)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
          }
          iVar29 = iVar29 + 3;
          uVar1 = uVar1 + 3;
          if (iVar2 <= iVar29) goto LAB_02ecdaa8;
        }
        if (sVar6 == 1) {
          iVar29 = iVar29 + 1;
          iVar27 = iVar29;
          do {
            iVar3 = iVar27;
            uVar28 = uVar1;
            uVar1 = uVar28 + 1;
            iVar27 = iVar3 + 1;
          } while (*(short *)(lVar24 + (long)iVar3 * 2) != 0);
          uVar25 = FUN_01b47fd0(*(undefined8 *)
                                 Method_OVRSceneLoader_<onCheckSceneCoroutine>d__25_System_Collections_IEnumerator_Reset__
                                ,iVar3 - iVar29);
          uVar17 = FUN_0308acbc(lVar24 + (long)iVar29 * 2,0);
          if (*(int *)(*(long *)StringLiteral_2598 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)StringLiteral_2598);
          }
          FUN_02f7c818(uVar17,uVar25,0,iVar3 - iVar29,0);
          lVar15 = FUN_01b47fd0(*(undefined8 *)
                                 Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                                ,4);
          if (lVar15 == 0) goto LAB_02ecdbe4;
          uVar1 = *(uint *)(lVar15 + 0x18);
          uVar22 = 0;
          do {
            uVar26 = (ulong)uVar28;
            if (uVar1 <= uVar22) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            uVar7 = uVar28 >> 0x1f;
            uVar28 = uVar28 + 1;
            *(undefined1 *)(lVar15 + 0x20 + uVar22) =
                 *(undefined1 *)((-(ulong)uVar7 & 0xfffffffe00000000 | uVar26 << 1) + lVar24);
            uVar22 = uVar22 + 1;
          } while (uVar22 != 4);
          uVar17 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_7051);
          FUN_02ecd2a4(uVar17,local_6c,uVar25,0,lVar15);
          if (lVar13 == 0) goto LAB_02ecdbe4;
          lVar15 = *(long *)(lVar13 + 0x10);
          lVar21 = *(long *)StringLiteral_7053;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar15 == 0) goto LAB_02ecdbe4;
          uVar1 = *(uint *)(lVar13 + 0x18);
          if (uVar1 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar1 + 1;
            puVar19 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
            *puVar19 = uVar17;
            thunk_FUN_01b4f09c(puVar19,uVar17);
          }
          else {
            FUN_02b599e4(lVar13,uVar17,
                         *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
          }
          iVar29 = iVar3 + 6;
        }
        else {
          if (sVar6 != 3) {
            FUN_01852fbc(param_1);
            local_64 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
            puVar8 = 
            Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
            ;
            uVar25 = thunk_FUN_01ad9084(
                                       Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                       );
            uVar25 = thunk_FUN_01afa70c(uVar25,&local_64);
            FUN_01852fbc(param_1);
            uVar17 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
            local_68 = iVar29;
            uVar18 = thunk_FUN_01ad9084(puVar8);
            uVar18 = thunk_FUN_01afa70c(uVar18,&local_68);
            uVar20 = thunk_FUN_01ad9084(StringLiteral_7061);
            uVar25 = FUN_02ee7164(uVar20,uVar25,uVar17,uVar18,0);
            thunk_FUN_01ad9084(StringLiteral_923);
            uVar17 = thunk_FUN_01afaadc();
            FUN_03042918(uVar17,uVar25,0);
            uVar25 = thunk_FUN_01ad9084(StringLiteral_7062);
                    /* WARNING: Subroutine does not return */
            FUN_01b48050(uVar17,uVar25);
          }
          iVar27 = -1;
          do {
            iVar3 = iVar29 + iVar27;
            iVar27 = iVar27 + 1;
          } while (*(short *)(lVar24 + (long)(iVar3 + 2) * 2) != 0);
          uVar25 = FUN_01b47fd0(*(undefined8 *)
                                 Method_OVRSceneLoader_<onCheckSceneCoroutine>d__25_System_Collections_IEnumerator_Reset__
                                ,iVar27);
          uVar17 = FUN_0308acbc(lVar24 + (long)(iVar29 + 1) * 2,0);
          if (*(int *)(*(long *)StringLiteral_2598 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)StringLiteral_2598);
          }
          iVar3 = iVar29 + iVar27 + 2;
          FUN_02f7c818(uVar17,uVar25,0,iVar27,0);
          iVar27 = -1;
          iVar29 = iVar3;
          do {
            lVar15 = (long)iVar29;
            iVar29 = iVar29 + 1;
            iVar27 = iVar27 + 1;
          } while (*(short *)(lVar24 + lVar15 * 2) != 0);
          uVar17 = FUN_02eeda88(0,lVar24,iVar3,iVar27,0);
          uVar18 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_7051);
          FUN_02ecd2a4(uVar18,local_6c,uVar25,uVar17,0);
          if (lVar13 == 0) goto LAB_02ecdbe4;
          lVar15 = *(long *)(lVar13 + 0x10);
          lVar21 = *(long *)StringLiteral_7053;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar15 == 0) goto LAB_02ecdbe4;
          uVar1 = *(uint *)(lVar13 + 0x18);
          if (uVar1 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar13 + 0x18) = uVar1 + 1;
            puVar19 = (undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
            *puVar19 = uVar18;
            thunk_FUN_01b4f09c(puVar19,uVar18);
          }
          else {
            FUN_02b599e4(lVar13,uVar18,
                         *(undefined8 *)(*(long *)(*(long *)(lVar21 + 0x20) + 0xc0) + 0x70));
          }
        }
        local_6c = local_6c + 1;
      } while (iVar29 < iVar2);
    }
LAB_02ecdaa8:
    puVar8 = StringLiteral_7044;
    if (*(int *)(*(long *)StringLiteral_7044 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    puVar9 = StringLiteral_7060;
    if (lVar13 != 0) {
      FUN_02b5b308(lVar13,**(undefined8 **)(*(long *)puVar8 + 0xb8),
                   *(undefined8 *)StringLiteral_7055);
      lVar15 = *(long *)puVar9;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar15 = *(long *)puVar9;
      }
      lVar24 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
      if (lVar24 == 0) {
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar15 = *(long *)puVar9;
        }
        uVar25 = **(undefined8 **)(lVar15 + 0xb8);
        lVar24 = thunk_FUN_01afaadc(*(undefined8 *)StringLiteral_7050);
        FUN_024c4724(lVar24,uVar25,*(undefined8 *)StringLiteral_7059,0);
        plVar16 = (long *)(*(long *)(*(long *)puVar9 + 0xb8) + 8);
        *plVar16 = lVar24;
        thunk_FUN_01b4f09c(plVar16,lVar24);
      }
      puVar9 = StringLiteral_7058;
      puVar8 = StringLiteral_7057;
      if (lVar14 != 0) {
        FUN_02b5b3cc(lVar14,lVar24,*(undefined8 *)StringLiteral_7056);
        uVar25 = FUN_02b5b460(lVar13,*(undefined8 *)puVar9);
        *param_3 = uVar25;
        thunk_FUN_01b4f09c();
        uVar25 = FUN_02b5b460(lVar14,*(undefined8 *)puVar8);
        *param_4 = uVar25;
        thunk_FUN_01b4f09c();
        return;
      }
    }
  }
LAB_02ecdbe4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


