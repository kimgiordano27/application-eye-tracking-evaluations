/*
FUNCTION_NAME: Unity.VisualScripting.Ray2DConverter$$DoSerialize
ENTRY_POINT: 06760e44
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_Ray2DConverter__DoSerialize(void)

{
  undefined4 uVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  byte bVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 uVar20;
  long *plVar21;
  uint uVar22;
  long lVar23;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  uint uVar24;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  long lVar28;
  uint unaff_w23;
  uint uVar29;
  uint uVar30;
  uint unaff_w25;
  uint uVar31;
  undefined8 uVar32;
  undefined8 unaff_x26;
  long lVar33;
  byte unaff_w27;
  long unaff_x28;
  ulong unaff_x29;
  undefined8 in_stack_00000018;
  uint in_stack_00000030;
  uint uStack0000000000000034;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  uint uStack0000000000000054;
  undefined8 in_stack_00000060;
  ulong in_stack_00000068;
  uint in_stack_00000070;
  int iStack0000000000000078;
  uint uStack000000000000007c;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined4 in_stack_00000110;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined4 in_stack_000001b0;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined4 in_stack_000001f0;
  undefined8 in_stack_00000408;
  undefined8 in_stack_00000410;
  undefined8 in_stack_00000418;
  undefined8 in_stack_00000420;
  undefined8 in_stack_00000428;
  undefined8 in_stack_00000550;
  undefined4 in_stack_0000062c;
  long in_stack_00000668;
  undefined4 in_stack_0000067c;
  int in_stack_00000774;
  long in_stack_00000778;
  undefined4 in_stack_00000888;
  undefined4 in_stack_00000890;
  undefined4 in_stack_00000894;
  int in_stack_00000898;
  undefined4 in_stack_0000089c;
  undefined8 in_stack_000008a0;
  undefined8 in_stack_000008a8;
  undefined8 in_stack_000008b0;
  undefined8 in_stack_000008b8;
  undefined4 in_stack_000008c0;
  
  if (*(char *)(unaff_x20 + 0x1a0) == '\0') {
    uStack0000000000000034 = 0;
  }
  else {
    uStack0000000000000034 = FUN_06743114(unaff_x19 + 0x350,0);
  }
  uVar18 = FUN_0676aaf4();
  if ((uVar18 & 1) == 0) {
    uStack0000000000000054 = FUN_0676dfd8();
    uStack0000000000000054 = uStack0000000000000054 & 1;
  }
  else {
    uStack0000000000000054 = 1;
  }
  bVar8 = true;
  if (((unaff_x29 & 1) == 0) && (*(char *)(unaff_x20 + 0x187) == '\0')) {
    bVar8 = *(int *)(unaff_x19 + 0x2ec) == 2;
  }
  if (*(long *)(unaff_x19 + 0x1d0) == 0) goto LAB_06762e2c;
  uVar11 = FUN_06792914();
  if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_06762e2c;
  uVar12 = FUN_06780188(*(long *)(unaff_x19 + 0x1d8));
  if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_06762e2c;
  uVar13 = FUN_067428e4(*(long *)(unaff_x19 + 0x228),0);
  bVar10 = 0;
  if (bVar8 || iStack0000000000000078 != 0) {
    iVar14 = *(int *)(unaff_x19 + 0x2f0);
    bVar10 = FUN_06760564();
    bVar10 = iVar14 == 2 | (bVar10 ^ 0xff) & 1;
  }
  if (((((uStack000000000000007c | (uint)unaff_x29 >> 8) & 1) == 0 && unaff_w25 == 0) &&
      uStack0000000000000054 == 0) && bVar10 == 0) {
    uVar30 = 0;
  }
  else {
    iVar14 = FUN_0675ebb0();
    uVar30 = iVar14 != 1 | unaff_w25;
  }
  cVar4 = *(char *)(unaff_x19 + 0x1a5);
  if (bVar8) {
    lVar23 = *(long *)(unaff_x19 + 0x218);
    iVar14 = (int)((ulong)in_stack_00000048 >> 0x20) + -1;
    iVar16 = 500;
    if (*(int *)(unaff_x19 + 0x2f0) != 1) {
      iVar16 = 300;
    }
    if (499 < iVar14) {
      iVar14 = 500;
    }
    if ((unaff_x29 & 1) != 0) {
      iVar16 = iVar14;
    }
    if (lVar23 == 0) goto LAB_06762e2c;
    *(int *)(lVar23 + 0x10) = iVar16;
    if (iVar16 < 500) {
      *(undefined1 *)(lVar23 + 0x100) = 0;
      *(undefined4 *)(unaff_x19 + 0x2f0) = 0;
    }
    bVar8 = true;
  }
  else if (uStack0000000000000054 == 0 && iStack0000000000000078 == 0) {
    bVar8 = false;
  }
  else {
    if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06762e2c;
    bVar8 = false;
    *(undefined4 *)(*(long *)(unaff_x19 + 0x218) + 0x10) = 500;
  }
  uVar15 = FUN_067630e0();
  bVar10 = *(byte *)(unaff_x20 + 0x1d8);
  iVar14 = FUN_0675ebb0();
  if (iVar14 == 1) {
    uVar22 = *(byte *)(unaff_x19 + 0x1a4) ^ 1;
  }
  else {
    uVar22 = 0;
  }
  if (*(long *)(unaff_x20 + 400) == 0) goto LAB_06762e2c;
  uVar24 = (uint)(unaff_x29 >> 0x18);
  uVar31 = (uint)(cVar4 != '\0');
  uVar29 = uVar30 | uVar31;
  uVar5 = bVar10 ^ 1 | (uint)(iStack0000000000000078 != 0 || bVar8) & (uVar29 ^ 1) |
          in_stack_00000060._4_4_ | uVar22 | (uint)*(byte *)(unaff_x19 + 0x1a5);
  uVar18 = FUN_0663aecc(*(long *)(unaff_x20 + 400),0);
  uVar22 = uVar5;
  if ((uVar18 & 1) == 0) {
    uVar22 = 0;
  }
  uVar22 = uVar22 | (unaff_w23 | uVar24 | (uint)(unaff_x29 >> 0x20) | uVar15) &
                    ~uStack000000000000007c & 1;
  iVar14 = FUN_069005b0(0);
  puVar7 = UnityEngine_UIElements_EventBase<PointerOutEvent>_TypeInfo;
  if ((iVar14 != 0x15) || (*(char *)(unaff_x19 + 0x314) != '\0')) {
    uVar22 = uVar5 | uVar22 != 0;
  }
  bVar8 = uVar22 != 0;
  if (*(int *)(*(long *)UnityEngine_UIElements_EventBase<PointerOutEvent>_TypeInfo + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0668d7c0(&stack0x00000530,0);
  if ((float)in_stack_00000550 == 1.0) {
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_0668d7c0(&stack0x00000530,0);
    if ((float)((ulong)in_stack_00000550 >> 0x20) != 1.0) goto LAB_067611a0;
  }
  else {
LAB_067611a0:
    bVar8 = uVar5 != 0 || bVar8;
  }
  if ((*(char *)(unaff_x19 + 0x1a4) != '\0') || (*(char *)(unaff_x19 + 0x1a5) != '\0')) {
    bVar8 = uVar5 != 0 || bVar8;
  }
  FUN_068e47d0(&stack0x00000850,0,0);
  FUN_068e47ec(&stack0x00000850,0,0);
  FUN_068e41c8(&stack0x00000850,0,0);
  if (*(long *)(unaff_x19 + 0x270) == 0) goto LAB_06762e2c;
  plVar21 = (long *)(unaff_x19 + 0x270);
  FUN_06794af0(*(long *)(unaff_x19 + 0x270),&stack0x000004f0,1,0);
  if (*(int *)(unaff_x20 + 0xe0) == 0) {
    if (in_stack_00000040 == 0) goto LAB_06762e2c;
    iVar14 = FUN_068bba14(in_stack_00000040,0);
    bVar9 = uVar5 != 0 || bVar8;
    FUN_06911464(&stack0x00000530,2,0);
    if ((*(long *)(unaff_x20 + 400) == 0) ||
       ((uVar18 = FUN_0663aecc(*(long *)(unaff_x20 + 400),0), (uVar18 & 1) != 0 &&
        (*(long *)(unaff_x20 + 400) == 0)))) goto LAB_06762e2c;
    puVar26 = (undefined8 *)(unaff_x19 + 0x298);
    if (*(long *)(unaff_x19 + 0x298) == 0) {
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar20 = FUN_0668cb3c(&stack0x000004c0,0);
      *puVar26 = uVar20;
      thunk_FUN_03048534(puVar26,uVar20);
    }
    else {
      uVar18 = FUN_069119bc(&stack0x00000490,&stack0x00000460,0);
      if ((uVar18 & 1) != 0) {
        FUN_0668cc1c(puVar26,&stack0x00000430,0);
      }
    }
    if (bVar9 && iVar14 != 1) {
      FUN_0676329c();
      iVar16 = FUN_069005b0(0);
      if (iVar16 == 2) {
        FUN_066861a8(&stack0x000001c0,*(undefined8 *)(unaff_x19 + 0x290),0);
        FUN_066861a8(&stack0x00000408,*(undefined8 *)(unaff_x19 + 0x2a0),0);
        in_stack_000001c0 = in_stack_00000408;
        in_stack_000001c8 = in_stack_00000410;
        in_stack_000001d0 = in_stack_00000418;
        in_stack_000001d8 = in_stack_00000420;
        in_stack_000001e0 = in_stack_00000428;
        if (unaff_x28 == 0) goto LAB_06762e2c;
        FUN_06916328();
      }
    }
    if (*(long *)(unaff_x19 + 0x200) == 0) goto LAB_06762e2c;
    bVar2 = uVar5 == 0 && !bVar8 || iVar14 == 1;
    *(bool *)(*(long *)(unaff_x19 + 0x200) + 0x181) = bVar2;
    if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_06762e2c;
    *(bool *)(*(long *)(unaff_x19 + 0x230) + 0x181) = bVar2;
    if (*(long *)(unaff_x19 + 0x210) == 0) goto LAB_06762e2c;
    *(bool *)(*(long *)(unaff_x19 + 0x210) + 0xe0) = bVar2;
    if (*(long *)(unaff_x19 + 0x250) == 0) goto LAB_06762e2c;
    *(bool *)(*(long *)(unaff_x19 + 0x250) + 0xe8) = bVar2;
    if (bVar8) {
      if (*plVar21 == 0) goto LAB_06762e2c;
      uVar20 = FUN_067946d0(*plVar21,0);
    }
    else {
      uVar20 = *puVar26;
    }
    *(undefined8 *)(unaff_x19 + 0x278) = uVar20;
    thunk_FUN_03048534(unaff_x19 + 0x278);
    lVar23 = 0x290;
    if (uVar5 == 0 && !bVar8) {
      lVar23 = 0x298;
    }
    *(undefined8 *)(unaff_x19 + 0x288) = *(undefined8 *)(unaff_x19 + lVar23);
    thunk_FUN_03048534(unaff_x19 + 0x288);
  }
  else {
    if (((*(long *)(unaff_x20 + 0x220) == 0) ||
        (FUN_03bbf6cc(*(long *)(unaff_x20 + 0x220),&stack0x00000778,
                      *(undefined8 *)
                       OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                     ), in_stack_00000778 == 0)) ||
       (plVar19 = (long *)FUN_0675da60(), plVar19 == (long *)0x0)) goto LAB_06762e2c;
    if (*plVar19 != *(long *)System_Collections_Generic_List<TweenBase>_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(plVar19);
    }
    lVar23 = *plVar21;
    if (lVar23 != plVar19[0x4e]) {
      if (lVar23 == 0) goto LAB_06762e2c;
      UnityEngine_AndroidJNI__CallObjectMethod(lVar23,0);
      *plVar21 = plVar19[0x4e];
      thunk_FUN_03048534(plVar21);
      lVar23 = *plVar21;
    }
    if (lVar23 == 0) goto LAB_06762e2c;
    uVar20 = FUN_067946d0(lVar23,0);
    *(undefined8 *)(unaff_x19 + 0x278) = uVar20;
    thunk_FUN_03048534(unaff_x19 + 0x278);
    *(long *)(unaff_x19 + 0x288) = plVar19[0x51];
    thunk_FUN_03048534(unaff_x19 + 0x288);
    *(long *)(unaff_x19 + 0x298) = plVar19[0x53];
    thunk_FUN_03048534(unaff_x19 + 0x298);
    bVar9 = uVar5 != 0;
  }
  if (*(long *)(unaff_x19 + 0x108) == 0) goto LAB_06762e2c;
  if ((_iStack0000000000000078 & 0x100000000) == 0 &&
      *(int *)(*(long *)(unaff_x19 + 0x108) + 0x18) != 0) {
    if (*plVar21 == 0) goto LAB_06762e2c;
    FUN_067946d0(*plVar21,0);
    FUN_06726080();
  }
  if (*(char *)(unaff_x20 + 0x188) != '\0') {
    uVar24 = 1;
  }
  FUN_06725e18();
  puVar7 = Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
  lVar28 = *(long *)(unaff_x19 + 0x100);
  lVar23 = *(long *)Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
  if (*(int *)(lVar23 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar23 = *(long *)puVar7;
  }
  lVar25 = *(long *)(*(long *)(lVar23 + 0xb8) + 8);
  if (lVar25 == 0) {
    if (*(int *)(lVar23 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar23 = *(long *)puVar7;
    }
    uVar20 = **(undefined8 **)(lVar23 + 0xb8);
    lVar25 = thunk_FUN_0301080c(*(undefined8 *)OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_TypeInfo);
    FUN_0494bc5c(lVar25,uVar20,
                 *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<VRVideoPlayer>_TypeInfo,0
                );
    plVar21 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
    *plVar21 = lVar25;
    thunk_FUN_03048534(plVar21,lVar25);
  }
  if (lVar28 == 0) goto LAB_06762e2c;
  lVar23 = FUN_04430950(lVar28,lVar25,
                        *(undefined8 *)
                         OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo);
  if ((uVar11 & 1) != 0) {
    FUN_067295d4();
  }
  if ((uVar12 & 1) != 0) {
    FUN_067295d4();
  }
  uVar24 = uVar24 & ~uStack000000000000007c & 1;
  if ((uVar30 & 1) == 0 && uVar31 == 0) {
    uVar11 = (uint)in_stack_00000068 & 1;
    if (iStack0000000000000078 != 0 || *(char *)(unaff_x20 + 0x187) != '\0') {
      uVar11 = 1;
    }
  }
  else {
    uVar11 = 0;
  }
  bVar8 = uVar24 != 0;
  uVar11 = uVar11 & bVar9;
  if ((*(long *)(unaff_x19 + 0xe0) != 0) &&
     (uVar18 = FUN_0670f9b0(*(long *)(unaff_x19 + 0xe0),unaff_x26,0), (uVar18 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06762e2c;
    FUN_0670f9f0(*(long *)(unaff_x19 + 0xe0),&stack0x00000774,0);
    if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06762e2c;
    uVar29 = uVar29 | in_stack_00000774 == 1;
    uVar18 = FUN_0670f5d4(*(long *)(unaff_x19 + 0xe0),0);
    if (((uVar18 & 1) == 0) && (uStack0000000000000054 == 0)) {
      uVar11 = 0;
      uVar24 = 0;
      uVar29 = 0;
      uStack0000000000000034 = 0;
      *(undefined1 *)(unaff_x19 + 0x1a5) = 0;
    }
    bVar8 = uVar24 != 0;
    if (*(char *)(unaff_x19 + 0x1a4) != '\0') {
      if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06762e2c;
      bVar10 = FUN_0670f728(*(long *)(unaff_x19 + 0xe0),0);
      *(byte *)(unaff_x19 + 0x1a4) = bVar10 & 1;
    }
  }
  if (*(long *)(unaff_x20 + 0x1d0) == 0) goto LAB_06762e2c;
  *(undefined1 *)(*(long *)(unaff_x20 + 0x1d0) + 0x1a5) = *(undefined1 *)(unaff_x19 + 0x1a5);
  iVar14 = FUN_0675ebb0();
  iVar16 = (int)in_stack_00000048;
  if (iVar14 == 1) {
    lVar28 = *(long *)(unaff_x19 + 0x2e0);
    if (lVar28 == 0) goto LAB_06762e2c;
    if ((*(char *)(lVar28 + 0x15) != '\0') &&
       ((iVar16 == 0xdc || (*(char *)(unaff_x19 + 0x1a4) == '\0')))) {
      FUN_0677a1bc(lVar28,0);
    }
  }
  iVar14 = FUN_0675ebb0();
  if (iVar14 == 1) {
    bVar10 = *(byte *)(unaff_x19 + 0x1a4) ^ 1;
  }
  else {
    bVar10 = 0;
  }
  if (bVar10 != 0 || (uVar29 != 0 || uVar11 != 0)) {
    if ((uVar29 == 0) || (iVar14 = FUN_0675ebb0(), iVar14 == 1)) {
      if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar18 = FUN_0674ac30(0x31,4,0);
      if ((uVar18 & 1) == 0) goto LAB_0676191c;
      uVar17 = 0;
      uVar20 = 0x31;
    }
    else {
LAB_0676191c:
      uVar20 = 0;
      uVar17 = 0x18;
    }
    FUN_068e40b4(&stack0x00000740,uVar20,0);
    FUN_068e41c8(&stack0x00000740,uVar17,0);
    if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06748f48(0,(long *)(unaff_x19 + 0x2a8),&stack0x00000740,0,1,0,1,
                 *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<TwoDragMe>_TypeInfo,0);
    if ((*(long *)(unaff_x19 + 0x2a8) == 0) || (unaff_x28 == 0)) goto LAB_06762e2c;
    FUN_06916814();
    if (*(int *)(*(long *)PTR_DAT_06f988b8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_0691ff78(&stack0x000008c8);
    FUN_0691250c();
  }
  if ((in_stack_00000030 & 1) == 0) {
    iVar14 = FUN_0675ebb0();
    if (iVar14 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar18 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar18 & 1) != 0) goto LAB_06761a24;
    }
  }
  else {
LAB_06761a24:
    plVar21 = (long *)(unaff_x19 + 0x2b8);
    uVar20 = *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<VibrationManager>_TypeInfo;
    iVar14 = FUN_0675ebb0();
    if (iVar14 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar18 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar18 & 1) != 0) {
        lVar28 = *(long *)(unaff_x19 + 0x2e0);
        if (lVar28 == 0) goto LAB_06762e2c;
        lVar25 = *(long *)(lVar28 + 0x30);
        uVar12 = FUN_06778ac8(lVar28,0);
        if (lVar25 == 0) goto LAB_06762e2c;
        if (*(uint *)(lVar25 + 0x18) <= uVar12) goto LAB_06762e3c;
        plVar21 = (long *)(lVar25 + (long)(int)uVar12 * 8 + 0x20);
        if (*plVar21 == 0) goto LAB_06762e2c;
        uVar20 = *(undefined8 *)(*plVar21 + 0x58);
      }
    }
    FUN_068e41c8(&stack0x00000700,0,0);
    iVar14 = FUN_0675ebb0();
    if (iVar14 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar18 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar18 & 1) == 0) goto LAB_06761b44;
      lVar28 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar28 == 0) goto LAB_06762e2c;
      uVar17 = FUN_06778ac8(lVar28,0);
      uVar17 = FUN_06778be0(lVar28,uVar17,0);
    }
    else {
LAB_06761b44:
      uVar17 = FUN_0674bc74(in_stack_00000888,0);
    }
    FUN_068e40b4(&stack0x00000700,uVar17,0);
    iVar14 = FUN_0675ebb0();
    if (iVar14 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar18 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar18 & 1) == 0) goto LAB_06761bec;
      lVar28 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar28 == 0) goto LAB_06762e2c;
      uVar17 = FUN_06778ac8(lVar28,0);
      FUN_0677a264(lVar28,&stack0x00000340,uVar17,0);
    }
    else {
LAB_06761bec:
      if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_06748f48(0,plVar21,&stack0x00000700,0,1,0,1,uVar20,0);
    }
    if ((*plVar21 == 0) || (unaff_x28 == 0)) goto LAB_06762e2c;
    FUN_06916814();
    FUN_0674bb60();
    iVar14 = FUN_0675ebb0();
    if (iVar14 == 1) {
      if (*plVar21 == 0) goto LAB_06762e2c;
      FUN_06916814();
    }
    if (*(int *)(*(long *)PTR_DAT_06f988b8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_0691ff78(&stack0x000008c8);
    FUN_0691250c();
  }
  if ((in_stack_00000070 & uVar29) == 1) {
    uVar20 = *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<Voxelize>_TypeInfo;
    iVar14 = FUN_0675ebb0();
    if (iVar14 == 1) {
      lVar28 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar28 == 0) goto LAB_06762e2c;
      lVar25 = *(long *)(lVar28 + 0x30);
      uVar12 = FUN_06778aa4(lVar28,0);
      if (lVar25 == 0) goto LAB_06762e2c;
      if (*(uint *)(lVar25 + 0x18) <= uVar12) goto LAB_06762e3c;
      plVar21 = (long *)(lVar25 + (long)(int)uVar12 * 8 + 0x20);
      if (*plVar21 == 0) goto LAB_06762e2c;
      uVar20 = *(undefined8 *)(*plVar21 + 0x58);
    }
    else {
      plVar21 = (long *)(unaff_x19 + 0x2b0);
    }
    FUN_068e41c8(&stack0x000006c0,0,0);
    iVar14 = FUN_0675ebb0();
    if (iVar14 == 1) {
      lVar28 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar28 == 0) goto LAB_06762e2c;
      uVar17 = FUN_06778aa4(lVar28,0);
      uVar17 = FUN_06778be0(lVar28,uVar17,0);
    }
    else {
      if (*(int *)(*(long *)Unity_Entities_TypeManager_SharedTypeIndex<VRIK>_TypeInfo + 0xe0) == 0)
      {
        thunk_FUN_02fdcff0();
      }
      uVar17 = FUN_0678bcb0(0);
    }
    FUN_068e40b4(&stack0x000006c0,uVar17,0);
    iVar14 = FUN_0675ebb0();
    if (iVar14 == 1) {
      lVar28 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar28 == 0) goto LAB_06762e2c;
      uVar17 = FUN_06778aa4(lVar28,0);
      FUN_0677a264(lVar28,&stack0x000002a0,uVar17,0);
    }
    else {
      if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_06748f48(0,plVar21,&stack0x000006c0,0,1,0,1,uVar20,0);
    }
    if ((*plVar21 == 0) || (unaff_x28 == 0)) goto LAB_06762e2c;
    FUN_06916814();
    iVar14 = FUN_0675ebb0();
    if (iVar14 == 1) {
      if (*plVar21 == 0) goto LAB_06762e2c;
      FUN_06916814();
    }
    if (*(int *)(*(long *)PTR_DAT_06f988b8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_0691ff78(&stack0x000008c8);
    FUN_0691250c();
  }
  if (uVar29 != 0) {
    iVar14 = FUN_0675ebb0();
    if (in_stack_00000070 == 0) {
      if (iVar14 == 1) goto LAB_06762190;
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_06762e2c;
      FUN_0678ce44(*(long *)(unaff_x19 + 0x1b0),&stack0x00000200,*(undefined8 *)(unaff_x19 + 0x2a8),
                   0);
    }
    else if (iVar14 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar12 = FUN_06778aa4(*(long *)(unaff_x19 + 0x2e0),0);
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar18 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
      lVar28 = *(long *)(unaff_x19 + 0x2e0);
      if ((lVar28 == 0) || (lVar25 = *(long *)(lVar28 + 0x30), lVar25 == 0)) goto LAB_06762e2c;
      if (*(uint *)(lVar25 + 0x18) <= uVar12) {
LAB_06762e3c:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar33 = *(long *)(unaff_x19 + 0x1b8);
      uVar20 = *(undefined8 *)(unaff_x19 + 0x288);
      uVar32 = *(undefined8 *)(lVar25 + (long)(int)uVar12 * 8 + 0x20);
      if ((uVar18 & 1) == 0) {
        if (in_stack_00000018._4_4_ == 0) {
          if (lVar33 == 0) goto LAB_06762e2c;
          FUN_0678bd48(lVar33,uVar20,uVar32,0);
        }
        else {
          if (lVar33 == 0) goto LAB_06762e2c;
          FUN_0678bd80(lVar33,uVar20,uVar32,*(undefined8 *)(unaff_x19 + 0x2b8),0);
        }
      }
      else {
        uVar12 = FUN_06778ac8(lVar28,0);
        if (*(uint *)(lVar25 + 0x18) <= uVar12) goto LAB_06762e3c;
        if (lVar33 == 0) goto LAB_06762e2c;
        FUN_0678bd80(lVar33,uVar20,uVar32,*(undefined8 *)(lVar25 + (long)(int)uVar12 * 8 + 0x20),0);
      }
      puVar7 = System_Collections_Generic_List<TweenBase>_TypeInfo;
      if (iVar16 - 0xdcU < 0x1f) {
        lVar25 = *(long *)(unaff_x19 + 0x1b8);
        lVar28 = *(long *)System_Collections_Generic_List<TweenBase>_TypeInfo;
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
          lVar28 = *(long *)puVar7;
        }
        if (lVar25 == 0) goto LAB_06762e2c;
        puVar26 = (undefined8 *)(lVar25 + 0xe0);
        *puVar26 = **(undefined8 **)(lVar28 + 0xb8);
        thunk_FUN_03048534(puVar26);
      }
    }
    else {
      lVar28 = *(long *)(unaff_x19 + 0x1b8);
      if (in_stack_00000018._4_4_ == 0) {
        if (lVar28 == 0) goto LAB_06762e2c;
        FUN_0678bd48(lVar28,*(undefined8 *)(unaff_x19 + 0x2a8),*(undefined8 *)(unaff_x19 + 0x2b0),0)
        ;
      }
      else {
        if (lVar28 == 0) goto LAB_06762e2c;
        FUN_0678bd80();
      }
    }
    FUN_067295d4();
  }
LAB_06762190:
  if (*(char *)(unaff_x19 + 0x1a5) != '\0') {
    if (*(long *)(unaff_x19 + 0x1c0) == 0) goto LAB_06762e2c;
    Unity_XR_Oculus_Input_OculusHMD__set_deviceRotation
              (*(long *)(unaff_x19 + 0x1c0),*(undefined8 *)(unaff_x19 + 0x288),
               *(undefined8 *)(unaff_x19 + 0x2a8),0);
    FUN_067295d4();
  }
  if ((uStack0000000000000034 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x350) == 0) goto LAB_06762e2c;
    FUN_06786d08(*(long *)(unaff_x19 + 0x350),unaff_x20 + 0x2a0,&stack0x00000680,&stack0x0000067c,0)
    ;
    if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06748f48(0,unaff_x19 + 0x370,&stack0x00000680,in_stack_0000067c,1,0,0,
                 *(undefined8 *)OVRTask<OVRSceneManager_LoadSceneModelResult>_TypeInfo,0);
    if (*(long *)(unaff_x19 + 0x350) == 0) goto LAB_06762e2c;
    FUN_06786cf4(*(long *)(unaff_x19 + 0x350),&stack0x00000670,0);
    FUN_067295d4();
  }
  if (*(long *)(unaff_x20 + 400) == 0) goto LAB_06762e2c;
  uVar18 = FUN_0663edb0(*(long *)(unaff_x20 + 400),0);
  if ((uVar18 & 1) != 0) {
    FUN_067295d4();
  }
  bVar10 = *(byte *)(unaff_x20 + 0x1d8);
  iVar14 = FUN_0675ebb0();
  if (iVar14 == 1) {
    lVar28 = *(long *)(unaff_x19 + 0x2e0);
    if (lVar28 == 0) goto LAB_06762e2c;
    if ((*(char *)(lVar28 + 0x15) != '\0') &&
       ((iVar16 == 0xdc || (*(char *)(unaff_x19 + 0x1a4) == '\0')))) {
      FUN_0677a1bc(lVar28,0);
    }
    FUN_067638f4();
  }
  else {
    uVar17 = 2;
    if (!bVar8) {
      uVar17 = 0;
    }
    uVar1 = 0;
    if (1 < in_stack_00000898) {
      uVar1 = uVar17;
    }
    iVar14 = 0;
    if ((!bVar8 && uVar11 == 0) && bVar10 != 0) {
      iVar14 = 3;
    }
    if (*(long *)(unaff_x20 + 400) == 0) goto LAB_06762e2c;
    uVar18 = FUN_0663aecc(*(long *)(unaff_x20 + 400),0);
    if ((uVar18 & 1) != 0) {
      if (*(long *)(unaff_x20 + 400) == 0) goto LAB_06762e2c;
      if (*(char *)(*(long *)(unaff_x20 + 400) + 0x20) != '\0') {
        iVar14 = 0;
      }
    }
    if ((1 < in_stack_00000898) && (uVar11 != 0)) {
      if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar18 = FUN_0674de10(0);
      if ((uVar18 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06762e2c;
        if (!bVar8 && *(int *)(*(long *)(unaff_x19 + 0x218) + 0x10) == 500) {
          if (iVar14 == 0) {
            iVar14 = 2;
          }
          else if (iVar14 == 3) {
            iVar14 = 1;
          }
        }
      }
    }
    if (in_stack_00000060._4_4_ == 0) {
      lVar28 = *(long *)(unaff_x19 + 0x200);
    }
    else {
      lVar28 = *(long *)(unaff_x19 + 0x208);
      if (lVar28 == 0) goto LAB_06762e2c;
      FUN_0678d900(lVar28,*(undefined8 *)(unaff_x19 + 0x278),*(undefined8 *)(unaff_x19 + 0x2b8),
                   *(undefined8 *)(unaff_x19 + 0x288),0);
    }
    if (lVar28 == 0) goto LAB_06762e2c;
    FUN_0671e2d0(lVar28,uVar1,0,0);
    FUN_0671e408(lVar28,iVar14,0);
    puVar7 = Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
    lVar33 = *(long *)(unaff_x19 + 0x100);
    lVar25 = *(long *)Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
    if (*(int *)(lVar25 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar25 = *(long *)puVar7;
    }
    lVar27 = *(long *)(*(long *)(lVar25 + 0xb8) + 0x10);
    if (lVar27 == 0) {
      if (*(int *)(lVar25 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar25 = *(long *)Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
      }
      puVar7 = Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
      uVar20 = **(undefined8 **)(lVar25 + 0xb8);
      lVar27 = thunk_FUN_0301080c(*(undefined8 *)OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_TypeInfo)
      ;
      FUN_0494bc5c(lVar27,uVar20,
                   *(undefined8 *)
                    Unity_Entities_TypeManager_SharedTypeIndex<VehicleController>_TypeInfo,0);
      plVar21 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
      *plVar21 = lVar27;
      thunk_FUN_03048534(plVar21,lVar27);
    }
    if (lVar33 == 0) goto LAB_06762e2c;
    lVar25 = FUN_04430950(lVar33,lVar27,
                          *(undefined8 *)
                           OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo);
    if ((lVar25 == 0) && (*(int *)(unaff_x20 + 0xe0) == 0)) {
      uVar17 = 1;
    }
    else {
      uVar17 = 0;
    }
    uVar18 = FUN_06900e10(0);
    if ((uVar18 & 1) != 0) {
      FUN_0671ed40(0,0,0,0x3f800000,lVar28,uVar17,0);
    }
    FUN_067295d4();
  }
  if (in_stack_00000040 == 0) goto LAB_06762e2c;
  iVar14 = FUN_068ba01c(in_stack_00000040,0);
  if ((iVar14 == 1) && (*(int *)(unaff_x20 + 0xe0) != 1)) {
    uVar20 = FUN_068ced20(0);
    puVar7 = PTR_DAT_06f6d618;
    if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
    }
    uVar18 = FUN_068f8810(uVar20,0,0);
    if ((uVar18 & 1) == 0) {
      uVar18 = FUN_03bbf6cc(in_stack_00000040,&stack0x00000668,
                            *(undefined8 *)
                             Unity_Entities_TypeManager_SharedTypeIndex<VRUtils>_TypeInfo);
      if ((uVar18 & 1) != 0) {
        if (in_stack_00000668 == 0) goto LAB_06762e2c;
        uVar20 = FUN_068d3d38(in_stack_00000668,0);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*(long *)puVar7);
        }
        uVar18 = FUN_068f8810(uVar20,0,0);
        if ((uVar18 & 1) != 0) goto LAB_06762584;
      }
    }
    else {
LAB_06762584:
      FUN_067295d4();
    }
  }
  if (uVar11 == 0) {
    if ((uVar29 & 1) == 0 && *(int *)(unaff_x20 + 0xe0) == 0) {
      uVar18 = FUN_06900a10(0);
      uVar20 = *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<TwoDragMe>_TypeInfo;
      if ((uVar18 & 1) == 0) {
        uVar32 = FUN_068dcf50(0);
      }
      else {
        uVar32 = FUN_068dcf78(0);
      }
      FUN_068cf75c(uVar20,uVar32,0);
    }
  }
  else {
    iVar14 = FUN_0675ebb0();
    if (((iVar14 != 1) || ((in_stack_00000068 & 1) != 0)) || (*(char *)(unaff_x19 + 0x1a4) == '\0'))
    {
      if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06762e2c;
      Unity_XR_Oculus_Input_OculusHMD__set_deviceRotation
                (*(long *)(unaff_x19 + 0x218),*(undefined8 *)(unaff_x19 + 0x288),
                 *(undefined8 *)(unaff_x19 + 0x2a8),0);
      FUN_067295d4();
    }
  }
  if (bVar8) {
    if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar28 = FUN_067676ac(0);
    if (lVar28 == 0) goto LAB_06762e2c;
    uVar17 = *(undefined4 *)(lVar28 + 0x50);
    FUN_06788be8(uVar17,&stack0x00000630,&stack0x0000062c,0);
    if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06748f48(0,unaff_x19 + 0x2c0,&stack0x00000630,in_stack_0000062c,1,0,1,
                 *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<VolatileFire>_TypeInfo,0)
    ;
    if (*(long *)(unaff_x19 + 0x220) == 0) goto LAB_06762e2c;
    FUN_06788d74(*(long *)(unaff_x19 + 0x220),*(undefined8 *)(unaff_x19 + 0x278),
                 *(undefined8 *)(unaff_x19 + 0x2c0),uVar17,0);
    FUN_067295d4();
  }
  if ((in_stack_00000068 >> 0x28 & 1) != 0) {
    FUN_068e40b4(&stack0x000005f0,0x2e,0);
    FUN_068e41c8(&stack0x000005f0,0,0);
    if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06748f48(0,unaff_x19 + 0x2c8,&stack0x000005f0,0,1,0,1,
                 *(undefined8 *)
                  Unity_Entities_TypeManager_SharedTypeIndex<RTSBuildingManager>_TypeInfo,0);
    FUN_068e40b4(&stack0x000005b0,0,0);
    FUN_06748f48(0,unaff_x19 + 0x2d0,&stack0x000005b0,0,1,0,1,
                 *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<VisualizeMesh>_TypeInfo,0
                );
    if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_06762e2c;
    FUN_06739310(*(long *)(unaff_x19 + 0x1c8),*(undefined8 *)(unaff_x19 + 0x2c8),
                 *(undefined8 *)(unaff_x19 + 0x2d0),0);
    FUN_067295d4();
  }
  if ((uVar13 & 1) != 0) {
    FUN_067295d4();
  }
  uVar12 = 0;
  if (bVar10 != 0) {
    uVar12 = 3;
  }
  if (uVar11 != 0) {
    if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06762e2c;
    if (499 < *(int *)(*(long *)(unaff_x19 + 0x218) + 0x10)) {
      if (in_stack_00000898 < 2) {
        uVar12 = 0;
      }
      else {
        if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar12 = FUN_0674de10(0);
        uVar12 = uVar12 & 1;
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_06762e2c;
  FUN_0671e2d0(*(long *)(unaff_x19 + 0x230),1 < in_stack_00000898 & bVar10,0,0);
  if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_06762e2c;
  FUN_0671e408(*(long *)(unaff_x19 + 0x230),uVar12,0);
  FUN_067295d4();
  FUN_067295d4();
  uVar11 = FUN_06770690(unaff_x26,0);
  uVar12 = FUN_0676cdd8(unaff_x26,0);
  if (((uVar11 & 1) != 0) && ((uVar12 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x260) == 0) goto LAB_06762e2c;
    FUN_06736864(*(long *)(unaff_x19 + 0x260),unaff_x26,0x18,0);
    FUN_067295d4();
  }
  bVar6 = *(long *)(unaff_x20 + 0x1a8) != 0 & bVar10;
  if ((unaff_w27 & bVar10) == 0) {
LAB_06762a14:
    bVar8 = false;
  }
  else if ((*(int *)(unaff_x20 + 0x1c4) == 1) ||
          ((*(int *)(unaff_x20 + 0x168) == 1 && (*(int *)(unaff_x20 + 0x16c) != 0)))) {
    bVar8 = true;
  }
  else {
    uVar18 = FUN_0676c0e0(unaff_x26,0);
    if ((uVar18 & 1) == 0) goto LAB_06762a14;
    bVar8 = 0.0 < *(float *)(unaff_x20 + 0x214);
  }
  bVar3 = bVar8 ^ 1;
  if (bVar6 != 0 || lVar23 != 0) {
    bVar3 = 0;
  }
  if (*(long *)(unaff_x19 + 0xe0) == 0) {
    uVar13 = 1;
  }
  else {
    uVar13 = FUN_0670f6ac(*(long *)(unaff_x19 + 0xe0),unaff_x26,0);
    uVar13 = ~uVar13 & 1;
  }
  plVar21 = (long *)(unaff_x19 + 0x278);
  plVar19 = (long *)(unaff_x19 + 0x288);
  if (unaff_w21 == 0) {
    if (bVar10 == 0) {
      return;
    }
    FUN_067600e4();
  }
  else {
    uVar17 = FUN_068e3d08(&stack0x00000890,0);
    if (*(int *)(*(long *)OVRTask<bool[]>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)OVRTask<bool[]>_TypeInfo);
    }
    in_stack_00000180 = CONCAT44(in_stack_00000894,in_stack_00000890);
    in_stack_00000188 = CONCAT44(in_stack_0000089c,in_stack_00000898);
    in_stack_00000190 = in_stack_000008a0;
    in_stack_00000198 = in_stack_000008a8;
    in_stack_000001a0 = in_stack_000008b0;
    in_stack_000001a8 = in_stack_000008b8;
    in_stack_000001b0 = in_stack_000008c0;
    FUN_0673d3c8(&stack0x000001c0,&stack0x00000180,in_stack_00000890,in_stack_00000894,uVar17,0,0);
    if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06748f48(0,unaff_x19 + 0x368,&stack0x00000570,0,1,0,1,
                 *(undefined8 *)OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo,0);
    if (bVar10 == 0) {
      if (*(long *)(unaff_x19 + 0x358) == 0) goto LAB_06762e2c;
      FUN_0673ac68(*(long *)(unaff_x19 + 0x358),&stack0x00000890,plVar21,0,plVar19,&stack0x00000670,
                   unaff_x19 + 0x2c8,0);
      goto LAB_06760c28;
    }
    FUN_067600e4();
    if (*(long *)(unaff_x19 + 0x358) == 0) goto LAB_06762e2c;
    FUN_0673ac68(*(long *)(unaff_x19 + 0x358),&stack0x00000890,plVar21,bVar3,plVar19,
                 &stack0x00000670,unaff_x19 + 0x2c8,bVar8);
    FUN_067295d4();
  }
  lVar28 = *plVar21;
  if (bVar8 != false) {
    if (*(long *)(unaff_x19 + 0x360) == 0) goto LAB_06762e2c;
    FUN_0673adb0(*(long *)(unaff_x19 + 0x360),&stack0x00000568,1,uVar13,0);
    FUN_067295d4();
  }
  if (*(long *)(unaff_x20 + 0x1a8) != 0) {
    FUN_067295d4();
  }
  if ((bVar8 == false) && (((unaff_w21 == 0 || (lVar23 != 0)) || (bVar6 != 0)))) {
    lVar23 = *plVar21;
    if (lVar23 == 0) goto LAB_06762e2c;
    lVar25 = *(long *)(unaff_x19 + 0x298);
    if (lVar25 == 0) goto LAB_06762e2c;
    in_stack_00000128 = *(undefined8 *)(lVar25 + 0x30);
    in_stack_00000120 = *(undefined8 *)(lVar25 + 0x28);
    in_stack_00000138 = *(undefined8 *)(lVar25 + 0x40);
    in_stack_00000130 = *(undefined8 *)(lVar25 + 0x38);
    in_stack_00000140 = *(undefined8 *)(lVar25 + 0x48);
    in_stack_00000150 = *(undefined8 *)(lVar23 + 0x28);
    in_stack_00000158 = *(undefined8 *)(lVar23 + 0x30);
    in_stack_00000160 = *(undefined8 *)(lVar23 + 0x38);
    in_stack_00000168 = *(undefined8 *)(lVar23 + 0x40);
    in_stack_00000170 = *(undefined8 *)(lVar23 + 0x48);
    uVar18 = FUN_0691198c(&stack0x00000150,&stack0x00000120,0);
    if ((uVar18 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x240) == 0) goto LAB_06762e2c;
      in_stack_000000e0 = CONCAT44(in_stack_00000894,in_stack_00000890);
      in_stack_000000e8 = CONCAT44(in_stack_0000089c,in_stack_00000898);
      in_stack_000000f0 = in_stack_000008a0;
      in_stack_000000f8 = in_stack_000008a8;
      in_stack_00000100 = in_stack_000008b0;
      in_stack_00000108 = in_stack_000008b8;
      in_stack_00000110 = in_stack_000008c0;
      FUN_0678f410(*(long *)(unaff_x19 + 0x240),&stack0x000000e0,lVar28,0);
      FUN_067295d4();
    }
  }
  if (((uVar12 | uVar11 ^ 0xffffffff) & 1) == 0) {
    FUN_067295d4();
  }
  if (*(long *)(unaff_x20 + 400) != 0) {
    uVar18 = FUN_0663aecc(*(long *)(unaff_x20 + 400),0);
    if ((uVar18 & 1) == 0) {
      return;
    }
    lVar23 = *plVar19;
    if (lVar23 != 0) {
      lVar28 = *(long *)(unaff_x20 + 400);
      if (lVar28 != 0) {
        in_stack_00000088 = *(undefined8 *)(lVar28 + 0x38);
        in_stack_00000080 = *(undefined8 *)(lVar28 + 0x30);
        in_stack_00000098 = *(undefined8 *)(lVar28 + 0x48);
        in_stack_00000090 = *(undefined8 *)(lVar28 + 0x40);
        in_stack_000000a0 = *(undefined8 *)(lVar28 + 0x50);
        in_stack_000000b0 = *(undefined8 *)(lVar23 + 0x28);
        in_stack_000000b8 = *(undefined8 *)(lVar23 + 0x30);
        in_stack_000000c0 = *(undefined8 *)(lVar23 + 0x38);
        in_stack_000000c8 = *(undefined8 *)(lVar23 + 0x40);
        in_stack_000000d0 = *(undefined8 *)(lVar23 + 0x48);
        uVar18 = FUN_0691198c(&stack0x000000b0,&stack0x00000080,0);
        if ((uVar18 & 1) != 0) {
          return;
        }
        if (*(long *)(unaff_x20 + 400) != 0) {
          if (*(char *)(*(long *)(unaff_x20 + 400) + 0x20) == '\0') {
            return;
          }
          if (*(long *)(unaff_x19 + 600) != 0) {
            Unity_XR_Oculus_Input_OculusHMD__set_deviceRotation
                      (*(long *)(unaff_x19 + 600),*(undefined8 *)(unaff_x19 + 0x288),
                       *(undefined8 *)(unaff_x19 + 0x298),0);
            if (*(long *)(unaff_x19 + 600) != 0) {
              *(undefined1 *)(*(long *)(unaff_x19 + 600) + 0xf4) = 1;
LAB_06760c28:
              FUN_067295d4();
              return;
            }
          }
        }
      }
    }
  }
LAB_06762e2c:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


