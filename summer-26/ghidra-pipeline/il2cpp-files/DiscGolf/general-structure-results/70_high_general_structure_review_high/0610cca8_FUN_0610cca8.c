/*
FUNCTION_NAME: FUN_0610cca8
ENTRY_POINT: 0610cca8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_14
*/


/* WARNING: Removing unreachable block (ram,0x0610d268) */

void FUN_0610cca8(uint *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  undefined1 auStack_98 [24];
  undefined8 local_80;
  uint *puStack_78;
  uint **local_70;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  uint local_3c;
  uint *local_38;
  
                    /* try { // try from 0610ccb0 to 0620ccb7 has its CatchHandler @ 0610cd10 */
                    /* try { // try from 0610ccc4 to 0620cce3 has its CatchHandler @ 0610cd14 */
  local_38 = param_1;
  if ((DAT_06dc65c5 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc868);
    FUN_02d965b8(Method_System_Net_FtpWebRequest_EndGetResponse__);
    FUN_02d965b8(Method_System_Net_FtpWebRequest_GetResponse__);
    FUN_02d965b8(PTR_DAT_069fe788);
                    /* try { // try from 0610ccfc to 0620ccff has its CatchHandler @ 0610cd40 */
                    /* try { // try from 0610cd00 to 0620cd03 has its CatchHandler @ 0610cd28 */
                    /* try { // try from 0610cd04 to 0620cd07 has its CatchHandler @ 0610cd24 */
    FUN_02d965b8(PTR_DAT_06a0dba8);
                    /* try { // try from 0610cd08 to 0620cd0b has its CatchHandler @ 0610cd20 */
                    /* try { // try from 0610cd0c to 0620cd0f has its CatchHandler @ 0610cd44 */
                    /* catch() { ... } // from try @ 0610ccb0 with catch @ 0610cd10
                       try { // try from 0610cd10 to 0620cd5b has its CatchHandler @ 0610c9c4 */
    FUN_02d965b8(PTR_DAT_06a0d410);
                    /* catch() { ... } // from try @ 0610ccc4 with catch @ 0610cd14 */
                    /* catch() { ... } // from try @ 0610cc48 with catch @ 0610cd18 */
                    /* catch() { ... } // from try @ 0610cc34 with catch @ 0610cd1c */
    FUN_02d965b8(Method_System_Net_FtpWebRequest_SetException__);
                    /* catch() { ... } // from try @ 0610cd08 with catch @ 0610cd20 */
                    /* catch() { ... } // from try @ 0610cd04 with catch @ 0610cd24 */
                    /* catch() { ... } // from try @ 0610cd00 with catch @ 0610cd28 */
    FUN_02d965b8(Method_System_Net_FtpWebRequest_SubmitRequest__);
                    /* catch() { ... } // from try @ 0610ca94 with catch @ 0610cd2c */
                    /* catch() { ... } // from try @ 0610cc60 with catch @ 0610cd30 */
                    /* catch() { ... } // from try @ 0610cb60 with catch @ 0610cd34 */
    FUN_02d965b8(
                Method_Unity_Netcode_FastBufferReader_ReadValueSafe<NetworkAnimator_AnimationMessage>__
                );
                    /* catch() { ... } // from try @ 0610cadc with catch @ 0610cd38 */
                    /* catch() { ... } // from try @ 0610cb9c with catch @ 0610cd3c */
                    /* catch() { ... } // from try @ 0610ca88 with catch @ 0610cd40
                       catch() { ... } // from try @ 0610ccfc with catch @ 0610cd40 */
    FUN_02d965b8(
                Method_Unity_Collections_FixedStringMethods_AppendFormat<FixedString128Bytes,_FixedString128Bytes,_FixedString32Bytes>__
                );
                    /* catch() { ... } // from try @ 0610cbf4 with catch @ 0610cd44
                       catch() { ... } // from try @ 0610cd0c with catch @ 0610cd44 */
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(
                Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString128Bytes>__
                );
                    /* try { // try from 0610cd5c to 0620cd73 has its CatchHandler @ 0610cdf8 */
    FUN_02d965b8(PTR_DAT_069fdd10);
    FUN_02d965b8(
                Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString32Bytes>__
                );
                    /* try { // try from 0610cd74 to 0620cde7 has its CatchHandler @ 0610c9c4 */
    FUN_02d965b8(PTR_DAT_069fdd18);
    FUN_02d965b8(PTR_DAT_06a15750);
    FUN_02d965b8(PTR_DAT_06a15758);
    FUN_02d965b8(PTR_DAT_06a15748);
    FUN_02d965b8(
                Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString4096Bytes>__
                );
    FUN_02d965b8(PTR_DAT_069fdd20);
    FUN_02d965b8(
                Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString512Bytes>__
                );
    FUN_02d965b8(PTR_DAT_069fd9c8);
    DAT_06dc65c5 = 1;
  }
  puVar3 = PTR_DAT_069fe788;
  local_3c = *param_1;
                    /* try { // try from 0610cde8 to 0620cdf7 has its CatchHandler @ 0610cdf8 */
  local_50 = 0;
  local_48 = 0;
  lVar11 = *(long *)(param_1 + 8);
                    /* catch() { ... } // from try @ 0610cd5c with catch @ 0610cdf8
                       catch() { ... } // from try @ 0610cde8 with catch @ 0610cdf8 */
  local_58 = 0;
                    /* try { // try from 0610cdfc to 0620cdff has its CatchHandler @ 0610ce08 */
  local_60 = 0;
                    /* try { // try from 0610ce00 to 0620ce0b has its CatchHandler @ 0610c9c4 */
  if (1 < local_3c) {
                    /* catch() { ... } // from try @ 0610cdfc with catch @ 0610ce08 */
    lVar4 = FUN_06111744(0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(char *)(lVar4 + 0x30) != '\0') goto LAB_0610d22c;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(int *)(*(long *)(lVar11 + 0x10) + 0x28) != 1) {
      plVar12 = (long *)thunk_FUN_02da6564(lVar11,0);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
                    /* try { // try from 0610d2b0 to 0620d2e3 has its CatchHandler @ 0610d408 */
      uVar5 = (**(code **)(*plVar12 + 0x208))(plVar12,*(undefined8 *)(*plVar12 + 0x210));
      uVar6 = thunk_FUN_02dfd288(Method_System_Net_FtpWebRequest_SyncRequestCallback__);
      uVar5 = FUN_05362cb4(uVar5,uVar6,0);
      thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
      uVar6 = thunk_FUN_02dd3144();
                    /* try { // try from 0610d2f4 to 0620d2f7 has its CatchHandler @ 0610d3e0 */
      FUN_054e8008(uVar6,uVar5,0);
                    /* try { // try from 0610d308 to 0620d30f has its CatchHandler @ 0610d3dc */
      uVar5 = thunk_FUN_02dfd288(Method_System_Net_FtpWebRequest_TimedSubmitRequestHelper__);
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar6,uVar5);
    }
    uVar5 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a15748);
    FUN_047e7284(uVar5,*(undefined8 *)PTR_DAT_06a15750);
    *(undefined8 *)(lVar11 + 0x60) = uVar5;
    LeanTween__value((undefined8 *)(lVar11 + 0x60),uVar5);
    puVar2 = Method_Unity_Netcode_FastBufferReader_ReadValueSafe<NetworkAnimator_AnimationMessage>__
    ;
    lVar4 = *(long *)
             Method_Unity_Netcode_FastBufferReader_ReadValueSafe<NetworkAnimator_AnimationMessage>__
    ;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar4 = *(long *)puVar2;
    }
    uVar1 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 4);
    uVar5 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0dba8);
    FUN_0554d47c(uVar5,uVar1,0);
    *(undefined8 *)(local_38 + 10) = uVar5;
    LeanTween__value(local_38 + 10,uVar5);
  }
  puStack_78 = &local_3c;
  local_70 = &local_38;
  local_80 = 0;
  if (local_3c == 0) {
    local_50 = *(undefined8 *)(local_38 + 0xc);
    local_38[0xc] = 0;
    local_38[0xd] = 0;
    local_3c = 0xffffffff;
    *local_38 = 0xffffffff;
LAB_0610d06c:
    FUN_047e6288(&local_50,
                 *(undefined8 *)
                  Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString128Bytes>__
                );
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(lVar11 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0x60) + 0x10);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    local_58 = FUN_04816c54(lVar11,*(undefined8 *)PTR_DAT_069fdd20);
    uVar9 = FUN_047e5d94(&local_58,*(undefined8 *)PTR_DAT_069fdd18);
    if ((uVar9 & 1) != 0) goto LAB_0610d0c0;
    local_3c = 1;
    *local_38 = 1;
    *(undefined8 *)(local_38 + 0xe) = local_58;
    LeanTween__value(local_38 + 0xe,0);
    puVar8 = local_38;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)puVar3,extraout_x1,local_38);
    }
    FUN_0353704c(puVar8 + 2,&local_58,local_38,
                 *(undefined8 *)Method_System_Net_FtpWebRequest_EndGetResponse__);
LAB_0610d188:
    iVar13 = 0xb;
  }
  else {
    if (local_3c != 1) {
      if (*(long *)(local_38 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      local_48 = FUN_0554d3a4(*(long *)(local_38 + 10),0);
      uVar5 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069fc868);
      FUN_054521e8(uVar5,lVar11,*(undefined8 *)Method_System_Net_FtpWebRequest_SetException__,0);
      if (*(int *)(*(long *)PTR_DAT_06a0d410 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0554ac44(auStack_98,&local_48,uVar5,0);
      puVar2 = PTR_DAT_069fd9c8;
      if (*(int *)(*(long *)PTR_DAT_069fd9c8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (DAT_06db59d4 == '\0') {
        FUN_02d965b8(PTR_DAT_069fd9c8);
        DAT_06db59d4 = '\x01';
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar4 = *(long *)puVar2;
      }
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
      uVar5 = FUN_0610afc4(lVar11,0);
      uVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_Unity_Collections_FixedStringMethods_AppendFormat<FixedString128Bytes,_FixedString128Bytes,_FixedString32Bytes>__
                                );
      FUN_03b78e40(uVar6,lVar11,*(undefined8 *)Method_System_Net_FtpWebRequest_SubmitRequest__,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar4 = FUN_0384334c(lVar4,uVar5,uVar6,
                           *(undefined8 *)
                            Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString4096Bytes>__
                          );
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      local_50 = FUN_0481d028(lVar4,*(undefined8 *)
                                     Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString512Bytes>__
                             );
      uVar9 = FUN_047e6248(&local_50,
                           *(undefined8 *)
                            Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString32Bytes>__
                          );
      if ((uVar9 & 1) != 0) goto LAB_0610d06c;
      local_3c = 0;
      *local_38 = 0;
      *(undefined8 *)(local_38 + 0xc) = local_50;
      LeanTween__value(local_38 + 0xc,0);
      puVar8 = local_38;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)puVar3,extraout_x1_00,local_38);
      }
      FUN_035375a0(puVar8 + 2,&local_50,local_38,
                   *(undefined8 *)Method_System_Net_FtpWebRequest_GetResponse__);
      goto LAB_0610d188;
    }
    local_58 = *(undefined8 *)(local_38 + 0xe);
    local_38[0xe] = 0;
    local_38[0xf] = 0;
    local_3c = 0xffffffff;
    *local_38 = 0xffffffff;
LAB_0610d0c0:
    FUN_047e5dd4(&local_58,*(undefined8 *)PTR_DAT_069fdd10);
    iVar13 = 0xd;
  }
  if (((int)local_3c < 0) && (plVar12 = *(long **)(*local_70 + 10), plVar12 != (long *)0x0)) {
    lVar11 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar7 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0610d200;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)PTR_DAT_069fbff0,0);
LAB_0610d200:
    (*(code *)*puVar7)(plVar12,puVar7[1]);
  }
  if ((iVar13 != 0xd) && (iVar13 != 0)) {
    return;
  }
  puVar8 = local_38 + 10;
  puVar8[0] = 0;
  puVar8[1] = 0;
  LeanTween__value(puVar8,0);
LAB_0610d22c:
  iVar13 = *(int *)(*(long *)puVar3 + 0xe4);
  puVar8 = local_38 + 2;
  *local_38 = 0xfffffffe;
  if (iVar13 == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05410914(puVar8,0);
  return;
}


