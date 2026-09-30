/*
FUNCTION_NAME: Unity.VisualScripting.NamespaceConverter$$TryDeserialize
ENTRY_POINT: 06760d0c
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


void Unity_VisualScripting_NamespaceConverter__TryDeserialize(void)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  byte bVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  undefined8 uVar24;
  long *plVar25;
  uint uVar26;
  long unaff_x19;
  long unaff_x20;
  byte unaff_w21;
  uint uVar27;
  long lVar28;
  undefined8 *puVar29;
  long lVar30;
  long lVar31;
  uint unaff_w23;
  uint uVar32;
  uint uVar33;
  undefined8 uVar34;
  undefined8 unaff_x26;
  long lVar35;
  long unaff_x28;
  ulong unaff_x29;
  int iStack000000000000001c;
  uint uStack0000000000000034;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  uint uStack0000000000000064;
  ulong in_stack_00000078;
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
  long in_stack_00000540;
  undefined8 in_stack_00000550;
  undefined4 in_stack_0000062c;
  long in_stack_00000668;
  undefined4 in_stack_0000067c;
  int in_stack_00000774;
  long in_stack_00000778;
  undefined4 in_stack_00000888;
  int in_stack_0000088c;
  undefined4 in_stack_00000890;
  undefined4 in_stack_00000894;
  int in_stack_00000898;
  undefined4 in_stack_0000089c;
  undefined8 in_stack_000008a0;
  undefined8 in_stack_000008a8;
  undefined8 in_stack_000008b0;
  undefined8 in_stack_000008b8;
  undefined4 in_stack_000008c0;
  
  if (((unaff_w21 & 1) == 0) || (iVar12 = FUN_0675ebb0(), iVar12 == 1)) {
    uStack0000000000000064 = 0;
LAB_06760d24:
    uVar33 = (uint)(unaff_x29 >> 0x10) & 1;
    iStack000000000000001c = 0;
  }
  else {
    uStack0000000000000064 = 1;
    if (in_stack_0000088c != 0) {
      if (in_stack_0000088c != 1) {
        thunk_FUN_03037804(PTR_DAT_06f7a510);
        uVar24 = thunk_FUN_0301080c();
        FUN_05a66294(uVar24,0);
        uVar34 = thunk_FUN_03037804(Unity_Entities_TypeManager_SharedTypeIndex<VrGuiInput>_TypeInfo)
        ;
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar24,uVar34);
      }
      goto LAB_06760d24;
    }
    iStack000000000000001c = 1;
    uStack0000000000000064 = 0;
    uVar33 = 1;
  }
  lVar21 = *(long *)(unaff_x19 + 0x2e0);
  if (lVar21 != 0) {
    *(byte *)(lVar21 + 0x14) = unaff_w21 & 1;
    *(undefined4 *)(lVar21 + 0x10) = in_stack_00000888;
    *(char *)(lVar21 + 0x17) = (char)uVar33;
    FUN_06779d44();
    lVar21 = *(long *)(unaff_x19 + 0x2e0);
    if (lVar21 == 0) goto LAB_06762e2c;
    *(bool *)(lVar21 + 0x19) = *(int *)(unaff_x20 + 0xe0) == 1;
    if (*(char *)(lVar21 + 0x15) != '\0') {
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_06762e2c;
      FUN_04430ce4(&stack0x00000530,*(long *)(unaff_x19 + 0x100),
                   *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<MeshCombiner>_TypeInfo)
      ;
      puVar7 = Unity_Entities_TypeManager_SharedTypeIndex<MenuSound>_TypeInfo;
      do {
        uVar22 = FUN_05506d10(&stack0x000007b0,*(undefined8 *)puVar7);
        if ((uVar22 & 1) == 0) goto LAB_06760dec;
                    /* try { // try from 06760dc4 to 06860dc7 has its CatchHandler @ 06760dd0 */
                    /* try { // try from 06760dc8 to 06860df3 has its CatchHandler @ 0676091c */
        if (in_stack_00000540 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06760dc4 with catch @ 06760dd0
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06760c84 with catch @ 06760dd4
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06760bfc with catch @ 06760dd8
                        */
      } while (10 < *(int *)(in_stack_00000540 + 0x10) - 0xdcU);
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 06760ba0 with catch @ 06760ddc
                        */
      if (*(long *)(unaff_x19 + 0x2e0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      FUN_0677a1bc(*(long *)(unaff_x19 + 0x2e0),0);
LAB_06760dec:
                    /* try { // try from 06760df4 to 06860df7 has its CatchHandler @ 06760e0c */
      FUN_05506d0c(&stack0x000007b0,
                   *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<MenuPanel>_TypeInfo);
    }
  }
  if (*(char *)(unaff_x20 + 0x1a0) == '\0') {
    uVar13 = 0;
  }
  else {
                    /* catch() { ... } // from try @ 06760df4 with catch @ 06760e0c */
    uVar13 = FUN_06743114(unaff_x19 + 0x350,0);
    uVar13 = uVar13 & 1;
  }
  if (*(char *)(unaff_x20 + 0x2b4) == '\0') {
    bVar10 = 0;
    if (uVar13 == 0) goto LAB_06760e50;
Unity_VisualScripting_NamespaceConverter___ctor:
    cVar3 = *(char *)(unaff_x20 + 0x189);
  }
  else {
    bVar10 = FUN_06743114(unaff_x19 + 0x350,0);
    bVar10 = bVar10 & 1;
    if (uVar13 != 0) goto Unity_VisualScripting_NamespaceConverter___ctor;
LAB_06760e50:
    cVar3 = '\0';
  }
  if (*(char *)(unaff_x20 + 0x1a0) == '\0') {
    uStack0000000000000034 = 0;
  }
  else {
    uStack0000000000000034 = FUN_06743114(unaff_x19 + 0x350,0);
  }
  uVar22 = FUN_0676aaf4();
  if ((uVar22 & 1) == 0) {
    uVar19 = FUN_0676dfd8();
    uVar19 = uVar19 & 1;
  }
  else {
    uVar19 = 1;
  }
  bVar8 = true;
  if (((unaff_x29 & 1) == 0) && (*(char *)(unaff_x20 + 0x187) == '\0')) {
    bVar8 = *(int *)(unaff_x19 + 0x2ec) == 2;
  }
  if (*(long *)(unaff_x19 + 0x1d0) == 0) goto LAB_06762e2c;
  uVar14 = FUN_06792914();
  if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_06762e2c;
  uVar15 = FUN_06780188(*(long *)(unaff_x19 + 0x1d8));
  if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_06762e2c;
  uVar16 = FUN_067428e4(*(long *)(unaff_x19 + 0x228),0);
  bVar11 = 0;
  if (bVar8 || cVar3 != '\0') {
    iVar12 = *(int *)(unaff_x19 + 0x2f0);
    bVar11 = FUN_06760564();
    bVar11 = iVar12 == 2 | (bVar11 ^ 0xff) & 1;
  }
  if (((((in_stack_00000078._4_4_ | (uint)unaff_x29 >> 8) & 1) == 0 && uVar33 == 0) && uVar19 == 0)
      && bVar11 == 0) {
    uVar32 = 0;
  }
  else {
    iVar12 = FUN_0675ebb0();
    uVar32 = iVar12 != 1 | uVar33;
  }
  cVar4 = *(char *)(unaff_x19 + 0x1a5);
  if (bVar8) {
    lVar21 = *(long *)(unaff_x19 + 0x218);
    iVar12 = (int)((ulong)in_stack_00000048 >> 0x20) + -1;
    iVar18 = 500;
    if (*(int *)(unaff_x19 + 0x2f0) != 1) {
      iVar18 = 300;
    }
    if (499 < iVar12) {
      iVar12 = 500;
    }
    if ((unaff_x29 & 1) != 0) {
      iVar18 = iVar12;
    }
    if (lVar21 == 0) goto LAB_06762e2c;
    *(int *)(lVar21 + 0x10) = iVar18;
    if (iVar18 < 500) {
      *(undefined1 *)(lVar21 + 0x100) = 0;
      *(undefined4 *)(unaff_x19 + 0x2f0) = 0;
    }
    bVar8 = true;
  }
  else if (uVar19 == 0 && cVar3 == '\0') {
    bVar8 = false;
  }
  else {
    if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06762e2c;
    bVar8 = false;
    *(undefined4 *)(*(long *)(unaff_x19 + 0x218) + 0x10) = 500;
  }
  uVar17 = FUN_067630e0();
  bVar11 = *(byte *)(unaff_x20 + 0x1d8);
  iVar12 = FUN_0675ebb0();
  if (iVar12 == 1) {
    uVar26 = *(byte *)(unaff_x19 + 0x1a4) ^ 1;
  }
  else {
    uVar26 = 0;
  }
  if (*(long *)(unaff_x20 + 400) == 0) goto LAB_06762e2c;
  uVar27 = (uint)(unaff_x29 >> 0x18);
  uVar32 = uVar32 | cVar4 != '\0';
  uVar5 = bVar11 ^ 1 | (uint)(cVar3 != '\0' || bVar8) & (uVar32 ^ 1) | uStack0000000000000064 |
          uVar26 | (uint)*(byte *)(unaff_x19 + 0x1a5);
  uVar22 = FUN_0663aecc(*(long *)(unaff_x20 + 400),0);
  uVar26 = uVar5;
  if ((uVar22 & 1) == 0) {
    uVar26 = 0;
  }
  uVar26 = uVar26 | (unaff_w23 | uVar27 | (uint)(unaff_x29 >> 0x20) | uVar17) &
                    ~in_stack_00000078._4_4_ & 1;
  iVar12 = FUN_069005b0(0);
  puVar7 = UnityEngine_UIElements_EventBase<PointerOutEvent>_TypeInfo;
  if ((iVar12 != 0x15) || (*(char *)(unaff_x19 + 0x314) != '\0')) {
    uVar26 = uVar5 | uVar26 != 0;
  }
  bVar8 = uVar26 != 0;
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
  plVar25 = (long *)(unaff_x19 + 0x270);
  FUN_06794af0(*(long *)(unaff_x19 + 0x270),&stack0x000004f0,1,0);
  if (*(int *)(unaff_x20 + 0xe0) == 0) {
    if (in_stack_00000040 == 0) goto LAB_06762e2c;
    iVar12 = FUN_068bba14(in_stack_00000040,0);
    bVar9 = uVar5 != 0 || bVar8;
    FUN_06911464(&stack0x00000530,2,0);
    if ((*(long *)(unaff_x20 + 400) == 0) ||
       ((uVar22 = FUN_0663aecc(*(long *)(unaff_x20 + 400),0), (uVar22 & 1) != 0 &&
        (*(long *)(unaff_x20 + 400) == 0)))) goto LAB_06762e2c;
    puVar29 = (undefined8 *)(unaff_x19 + 0x298);
    if (*(long *)(unaff_x19 + 0x298) == 0) {
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar24 = FUN_0668cb3c(&stack0x000004c0,0);
      *puVar29 = uVar24;
      thunk_FUN_03048534(puVar29,uVar24);
    }
    else {
      uVar22 = FUN_069119bc(&stack0x00000490,&stack0x00000460,0);
      if ((uVar22 & 1) != 0) {
        FUN_0668cc1c(puVar29,&stack0x00000430,0);
      }
    }
    if (bVar9 && iVar12 != 1) {
      FUN_0676329c();
      iVar18 = FUN_069005b0(0);
      if (iVar18 == 2) {
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
    bVar2 = uVar5 == 0 && !bVar8 || iVar12 == 1;
    *(bool *)(*(long *)(unaff_x19 + 0x200) + 0x181) = bVar2;
    if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_06762e2c;
    *(bool *)(*(long *)(unaff_x19 + 0x230) + 0x181) = bVar2;
    if (*(long *)(unaff_x19 + 0x210) == 0) goto LAB_06762e2c;
    *(bool *)(*(long *)(unaff_x19 + 0x210) + 0xe0) = bVar2;
    if (*(long *)(unaff_x19 + 0x250) == 0) goto LAB_06762e2c;
    *(bool *)(*(long *)(unaff_x19 + 0x250) + 0xe8) = bVar2;
    if (bVar8) {
      if (*plVar25 == 0) goto LAB_06762e2c;
      uVar24 = FUN_067946d0(*plVar25,0);
    }
    else {
      uVar24 = *puVar29;
    }
    *(undefined8 *)(unaff_x19 + 0x278) = uVar24;
    thunk_FUN_03048534(unaff_x19 + 0x278);
    lVar21 = 0x290;
    if (uVar5 == 0 && !bVar8) {
      lVar21 = 0x298;
    }
    *(undefined8 *)(unaff_x19 + 0x288) = *(undefined8 *)(unaff_x19 + lVar21);
    thunk_FUN_03048534(unaff_x19 + 0x288);
  }
  else {
    if (((*(long *)(unaff_x20 + 0x220) == 0) ||
        (FUN_03bbf6cc(*(long *)(unaff_x20 + 0x220),&stack0x00000778,
                      *(undefined8 *)
                       OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                     ), in_stack_00000778 == 0)) ||
       (plVar23 = (long *)FUN_0675da60(), plVar23 == (long *)0x0)) goto LAB_06762e2c;
    if (*plVar23 != *(long *)System_Collections_Generic_List<TweenBase>_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(plVar23);
    }
    lVar21 = *plVar25;
    if (lVar21 != plVar23[0x4e]) {
      if (lVar21 == 0) goto LAB_06762e2c;
      UnityEngine_AndroidJNI__CallObjectMethod(lVar21,0);
      *plVar25 = plVar23[0x4e];
      thunk_FUN_03048534(plVar25);
      lVar21 = *plVar25;
    }
    if (lVar21 == 0) goto LAB_06762e2c;
    uVar24 = FUN_067946d0(lVar21,0);
    *(undefined8 *)(unaff_x19 + 0x278) = uVar24;
    thunk_FUN_03048534(unaff_x19 + 0x278);
    *(long *)(unaff_x19 + 0x288) = plVar23[0x51];
    thunk_FUN_03048534(unaff_x19 + 0x288);
    *(long *)(unaff_x19 + 0x298) = plVar23[0x53];
    thunk_FUN_03048534(unaff_x19 + 0x298);
    bVar9 = uVar5 != 0;
  }
  if (*(long *)(unaff_x19 + 0x108) == 0) goto LAB_06762e2c;
  if ((in_stack_00000078 & 0x100000000) == 0 && *(int *)(*(long *)(unaff_x19 + 0x108) + 0x18) != 0)
  {
    if (*plVar25 == 0) goto LAB_06762e2c;
    FUN_067946d0(*plVar25,0);
    FUN_06726080();
  }
  if (*(char *)(unaff_x20 + 0x188) != '\0') {
    uVar27 = 1;
  }
  FUN_06725e18();
  puVar7 = Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
  lVar31 = *(long *)(unaff_x19 + 0x100);
  lVar21 = *(long *)Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
  if (*(int *)(lVar21 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar21 = *(long *)puVar7;
  }
  lVar28 = *(long *)(*(long *)(lVar21 + 0xb8) + 8);
  if (lVar28 == 0) {
    if (*(int *)(lVar21 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar21 = *(long *)puVar7;
    }
    uVar24 = **(undefined8 **)(lVar21 + 0xb8);
    lVar28 = thunk_FUN_0301080c(*(undefined8 *)OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_TypeInfo);
    FUN_0494bc5c(lVar28,uVar24,
                 *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<VRVideoPlayer>_TypeInfo,0
                );
    plVar25 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
    *plVar25 = lVar28;
    thunk_FUN_03048534(plVar25,lVar28);
  }
  if (lVar31 == 0) goto LAB_06762e2c;
  lVar21 = FUN_04430950(lVar31,lVar28,
                        *(undefined8 *)
                         OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo);
  if ((uVar14 & 1) != 0) {
    FUN_067295d4();
  }
  if ((uVar15 & 1) != 0) {
    FUN_067295d4();
  }
  uVar27 = uVar27 & ~in_stack_00000078._4_4_ & 1;
  if (uVar32 == 0) {
    uVar14 = (uint)unaff_x29 & 1;
    if (cVar3 != '\0' || *(char *)(unaff_x20 + 0x187) != '\0') {
      uVar14 = 1;
    }
  }
  else {
    uVar14 = 0;
  }
  bVar8 = uVar27 != 0;
  uVar14 = uVar14 & bVar9;
  if ((*(long *)(unaff_x19 + 0xe0) != 0) &&
     (uVar22 = FUN_0670f9b0(*(long *)(unaff_x19 + 0xe0),unaff_x26,0), (uVar22 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06762e2c;
    FUN_0670f9f0(*(long *)(unaff_x19 + 0xe0),&stack0x00000774,0);
    if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06762e2c;
    uVar32 = uVar32 | in_stack_00000774 == 1;
    uVar22 = FUN_0670f5d4(*(long *)(unaff_x19 + 0xe0),0);
    if (((uVar22 & 1) == 0) && (uVar19 == 0)) {
      uVar14 = 0;
      uVar27 = 0;
      uVar32 = 0;
      uStack0000000000000034 = 0;
      *(undefined1 *)(unaff_x19 + 0x1a5) = 0;
    }
    bVar8 = uVar27 != 0;
    if (*(char *)(unaff_x19 + 0x1a4) != '\0') {
      if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06762e2c;
      bVar11 = FUN_0670f728(*(long *)(unaff_x19 + 0xe0),0);
      *(byte *)(unaff_x19 + 0x1a4) = bVar11 & 1;
    }
  }
  if (*(long *)(unaff_x20 + 0x1d0) == 0) goto LAB_06762e2c;
  *(undefined1 *)(*(long *)(unaff_x20 + 0x1d0) + 0x1a5) = *(undefined1 *)(unaff_x19 + 0x1a5);
  iVar12 = FUN_0675ebb0();
  iVar18 = (int)in_stack_00000048;
  if (iVar12 == 1) {
    lVar31 = *(long *)(unaff_x19 + 0x2e0);
    if (lVar31 == 0) goto LAB_06762e2c;
    if ((*(char *)(lVar31 + 0x15) != '\0') &&
       ((iVar18 == 0xdc || (*(char *)(unaff_x19 + 0x1a4) == '\0')))) {
      FUN_0677a1bc(lVar31,0);
    }
  }
  iVar12 = FUN_0675ebb0();
  if (iVar12 == 1) {
    bVar11 = *(byte *)(unaff_x19 + 0x1a4) ^ 1;
  }
  else {
    bVar11 = 0;
  }
  if (bVar11 != 0 || (uVar32 != 0 || uVar14 != 0)) {
    if ((uVar32 == 0) || (iVar12 = FUN_0675ebb0(), iVar12 == 1)) {
      if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar22 = FUN_0674ac30(0x31,4,0);
      if ((uVar22 & 1) == 0) goto LAB_0676191c;
      uVar20 = 0;
      uVar24 = 0x31;
    }
    else {
LAB_0676191c:
      uVar24 = 0;
      uVar20 = 0x18;
    }
    FUN_068e40b4(&stack0x00000740,uVar24,0);
    FUN_068e41c8(&stack0x00000740,uVar20,0);
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
  if ((unaff_w21 & 1) == 0) {
    iVar12 = FUN_0675ebb0();
    if (iVar12 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar22 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar22 & 1) != 0) goto LAB_06761a24;
    }
  }
  else {
LAB_06761a24:
    plVar25 = (long *)(unaff_x19 + 0x2b8);
    uVar24 = *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<VibrationManager>_TypeInfo;
    iVar12 = FUN_0675ebb0();
    if (iVar12 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar22 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar22 & 1) != 0) {
        lVar31 = *(long *)(unaff_x19 + 0x2e0);
        if (lVar31 == 0) goto LAB_06762e2c;
        lVar28 = *(long *)(lVar31 + 0x30);
        uVar19 = FUN_06778ac8(lVar31,0);
        if (lVar28 == 0) goto LAB_06762e2c;
        if (*(uint *)(lVar28 + 0x18) <= uVar19) goto LAB_06762e3c;
        plVar25 = (long *)(lVar28 + (long)(int)uVar19 * 8 + 0x20);
        if (*plVar25 == 0) goto LAB_06762e2c;
        uVar24 = *(undefined8 *)(*plVar25 + 0x58);
      }
    }
    FUN_068e41c8(&stack0x00000700,0,0);
    iVar12 = FUN_0675ebb0();
    if (iVar12 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar22 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar22 & 1) == 0) goto LAB_06761b44;
      lVar31 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar31 == 0) goto LAB_06762e2c;
      uVar20 = FUN_06778ac8(lVar31,0);
      uVar20 = FUN_06778be0(lVar31,uVar20,0);
    }
    else {
LAB_06761b44:
      uVar20 = FUN_0674bc74(in_stack_00000888,0);
    }
    FUN_068e40b4(&stack0x00000700,uVar20,0);
    iVar12 = FUN_0675ebb0();
    if (iVar12 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar22 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar22 & 1) == 0) goto LAB_06761bec;
      lVar31 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar31 == 0) goto LAB_06762e2c;
      uVar20 = FUN_06778ac8(lVar31,0);
      FUN_0677a264(lVar31,&stack0x00000340,uVar20,0);
    }
    else {
LAB_06761bec:
      if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_06748f48(0,plVar25,&stack0x00000700,0,1,0,1,uVar24,0);
    }
    if ((*plVar25 == 0) || (unaff_x28 == 0)) goto LAB_06762e2c;
    FUN_06916814();
    FUN_0674bb60();
    iVar12 = FUN_0675ebb0();
    if (iVar12 == 1) {
      if (*plVar25 == 0) goto LAB_06762e2c;
      FUN_06916814();
    }
    if (*(int *)(*(long *)PTR_DAT_06f988b8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_0691ff78(&stack0x000008c8);
    FUN_0691250c();
  }
  if ((uVar33 & uVar32) == 1) {
    uVar24 = *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<Voxelize>_TypeInfo;
    iVar12 = FUN_0675ebb0();
    if (iVar12 == 1) {
      lVar31 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar31 == 0) goto LAB_06762e2c;
      lVar28 = *(long *)(lVar31 + 0x30);
      uVar19 = FUN_06778aa4(lVar31,0);
      if (lVar28 == 0) goto LAB_06762e2c;
      if (*(uint *)(lVar28 + 0x18) <= uVar19) goto LAB_06762e3c;
      plVar25 = (long *)(lVar28 + (long)(int)uVar19 * 8 + 0x20);
      if (*plVar25 == 0) goto LAB_06762e2c;
      uVar24 = *(undefined8 *)(*plVar25 + 0x58);
    }
    else {
      plVar25 = (long *)(unaff_x19 + 0x2b0);
    }
    FUN_068e41c8(&stack0x000006c0,0,0);
    iVar12 = FUN_0675ebb0();
    if (iVar12 == 1) {
      lVar31 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar31 == 0) goto LAB_06762e2c;
      uVar20 = FUN_06778aa4(lVar31,0);
      uVar20 = FUN_06778be0(lVar31,uVar20,0);
    }
    else {
      if (*(int *)(*(long *)Unity_Entities_TypeManager_SharedTypeIndex<VRIK>_TypeInfo + 0xe0) == 0)
      {
        thunk_FUN_02fdcff0();
      }
      uVar20 = FUN_0678bcb0(0);
    }
    FUN_068e40b4(&stack0x000006c0,uVar20,0);
    iVar12 = FUN_0675ebb0();
    if (iVar12 == 1) {
      lVar31 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar31 == 0) goto LAB_06762e2c;
      uVar20 = FUN_06778aa4(lVar31,0);
      FUN_0677a264(lVar31,&stack0x000002a0,uVar20,0);
    }
    else {
      if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_06748f48(0,plVar25,&stack0x000006c0,0,1,0,1,uVar24,0);
    }
    if ((*plVar25 == 0) || (unaff_x28 == 0)) goto LAB_06762e2c;
    FUN_06916814();
    iVar12 = FUN_0675ebb0();
    if (iVar12 == 1) {
      if (*plVar25 == 0) goto LAB_06762e2c;
      FUN_06916814();
    }
    if (*(int *)(*(long *)PTR_DAT_06f988b8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_0691ff78(&stack0x000008c8);
    FUN_0691250c();
  }
  if (uVar32 != 0) {
    iVar12 = FUN_0675ebb0();
    if (uVar33 == 0) {
      if (iVar12 == 1) goto LAB_06762190;
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_06762e2c;
      FUN_0678ce44(*(long *)(unaff_x19 + 0x1b0),&stack0x00000200,*(undefined8 *)(unaff_x19 + 0x2a8),
                   0);
    }
    else if (iVar12 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar33 = FUN_06778aa4(*(long *)(unaff_x19 + 0x2e0),0);
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar22 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
      lVar31 = *(long *)(unaff_x19 + 0x2e0);
      if ((lVar31 == 0) || (lVar28 = *(long *)(lVar31 + 0x30), lVar28 == 0)) goto LAB_06762e2c;
      if (*(uint *)(lVar28 + 0x18) <= uVar33) {
LAB_06762e3c:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar35 = *(long *)(unaff_x19 + 0x1b8);
      uVar24 = *(undefined8 *)(unaff_x19 + 0x288);
      uVar34 = *(undefined8 *)(lVar28 + (long)(int)uVar33 * 8 + 0x20);
      if ((uVar22 & 1) == 0) {
        if (iStack000000000000001c == 0) {
          if (lVar35 == 0) goto LAB_06762e2c;
          FUN_0678bd48(lVar35,uVar24,uVar34,0);
        }
        else {
          if (lVar35 == 0) goto LAB_06762e2c;
          FUN_0678bd80(lVar35,uVar24,uVar34,*(undefined8 *)(unaff_x19 + 0x2b8),0);
        }
      }
      else {
        uVar33 = FUN_06778ac8(lVar31,0);
        if (*(uint *)(lVar28 + 0x18) <= uVar33) goto LAB_06762e3c;
        if (lVar35 == 0) goto LAB_06762e2c;
        FUN_0678bd80(lVar35,uVar24,uVar34,*(undefined8 *)(lVar28 + (long)(int)uVar33 * 8 + 0x20),0);
      }
      puVar7 = System_Collections_Generic_List<TweenBase>_TypeInfo;
      if (iVar18 - 0xdcU < 0x1f) {
        lVar28 = *(long *)(unaff_x19 + 0x1b8);
        lVar31 = *(long *)System_Collections_Generic_List<TweenBase>_TypeInfo;
        if (*(int *)(lVar31 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
          lVar31 = *(long *)puVar7;
        }
        if (lVar28 == 0) goto LAB_06762e2c;
        puVar29 = (undefined8 *)(lVar28 + 0xe0);
        *puVar29 = **(undefined8 **)(lVar31 + 0xb8);
        thunk_FUN_03048534(puVar29);
      }
    }
    else {
      lVar31 = *(long *)(unaff_x19 + 0x1b8);
      if (iStack000000000000001c == 0) {
        if (lVar31 == 0) goto LAB_06762e2c;
        FUN_0678bd48(lVar31,*(undefined8 *)(unaff_x19 + 0x2a8),*(undefined8 *)(unaff_x19 + 0x2b0),0)
        ;
      }
      else {
        if (lVar31 == 0) goto LAB_06762e2c;
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
  uVar22 = FUN_0663edb0(*(long *)(unaff_x20 + 400),0);
  if ((uVar22 & 1) != 0) {
    FUN_067295d4();
  }
  bVar11 = *(byte *)(unaff_x20 + 0x1d8);
  iVar12 = FUN_0675ebb0();
  if (iVar12 == 1) {
    lVar31 = *(long *)(unaff_x19 + 0x2e0);
    if (lVar31 == 0) goto LAB_06762e2c;
    if ((*(char *)(lVar31 + 0x15) != '\0') &&
       ((iVar18 == 0xdc || (*(char *)(unaff_x19 + 0x1a4) == '\0')))) {
      FUN_0677a1bc(lVar31,0);
    }
    FUN_067638f4();
  }
  else {
    uVar20 = 2;
    if (!bVar8) {
      uVar20 = 0;
    }
    uVar1 = 0;
    if (1 < in_stack_00000898) {
      uVar1 = uVar20;
    }
    iVar12 = 0;
    if ((!bVar8 && uVar14 == 0) && bVar11 != 0) {
      iVar12 = 3;
    }
    if (*(long *)(unaff_x20 + 400) == 0) goto LAB_06762e2c;
    uVar22 = FUN_0663aecc(*(long *)(unaff_x20 + 400),0);
    if ((uVar22 & 1) != 0) {
      if (*(long *)(unaff_x20 + 400) == 0) goto LAB_06762e2c;
      if (*(char *)(*(long *)(unaff_x20 + 400) + 0x20) != '\0') {
        iVar12 = 0;
      }
    }
    if ((1 < in_stack_00000898) && (uVar14 != 0)) {
      if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar22 = FUN_0674de10(0);
      if ((uVar22 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06762e2c;
        if (!bVar8 && *(int *)(*(long *)(unaff_x19 + 0x218) + 0x10) == 500) {
          if (iVar12 == 0) {
            iVar12 = 2;
          }
          else if (iVar12 == 3) {
            iVar12 = 1;
          }
        }
      }
    }
    if (uStack0000000000000064 == 0) {
      lVar31 = *(long *)(unaff_x19 + 0x200);
    }
    else {
      lVar31 = *(long *)(unaff_x19 + 0x208);
      if (lVar31 == 0) goto LAB_06762e2c;
      FUN_0678d900(lVar31,*(undefined8 *)(unaff_x19 + 0x278),*(undefined8 *)(unaff_x19 + 0x2b8),
                   *(undefined8 *)(unaff_x19 + 0x288),0);
    }
    if (lVar31 == 0) goto LAB_06762e2c;
    FUN_0671e2d0(lVar31,uVar1,0,0);
    FUN_0671e408(lVar31,iVar12,0);
    puVar7 = Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
    lVar35 = *(long *)(unaff_x19 + 0x100);
    lVar28 = *(long *)Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
    if (*(int *)(lVar28 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar28 = *(long *)puVar7;
    }
    lVar30 = *(long *)(*(long *)(lVar28 + 0xb8) + 0x10);
    if (lVar30 == 0) {
      if (*(int *)(lVar28 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar28 = *(long *)Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
      }
      puVar7 = Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
      uVar24 = **(undefined8 **)(lVar28 + 0xb8);
      lVar30 = thunk_FUN_0301080c(*(undefined8 *)OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_TypeInfo)
      ;
      FUN_0494bc5c(lVar30,uVar24,
                   *(undefined8 *)
                    Unity_Entities_TypeManager_SharedTypeIndex<VehicleController>_TypeInfo,0);
      plVar25 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
      *plVar25 = lVar30;
      thunk_FUN_03048534(plVar25,lVar30);
    }
    if (lVar35 == 0) goto LAB_06762e2c;
    lVar28 = FUN_04430950(lVar35,lVar30,
                          *(undefined8 *)
                           OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo);
    if ((lVar28 == 0) && (*(int *)(unaff_x20 + 0xe0) == 0)) {
      uVar20 = 1;
    }
    else {
      uVar20 = 0;
    }
    uVar22 = FUN_06900e10(0);
    if ((uVar22 & 1) != 0) {
      FUN_0671ed40(0,0,0,0x3f800000,lVar31,uVar20,0);
    }
    FUN_067295d4();
  }
  if (in_stack_00000040 == 0) goto LAB_06762e2c;
  iVar12 = FUN_068ba01c(in_stack_00000040,0);
  if ((iVar12 == 1) && (*(int *)(unaff_x20 + 0xe0) != 1)) {
    uVar24 = FUN_068ced20(0);
    puVar7 = PTR_DAT_06f6d618;
    if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
    }
    uVar22 = FUN_068f8810(uVar24,0,0);
    if ((uVar22 & 1) == 0) {
      uVar22 = FUN_03bbf6cc(in_stack_00000040,&stack0x00000668,
                            *(undefined8 *)
                             Unity_Entities_TypeManager_SharedTypeIndex<VRUtils>_TypeInfo);
      if ((uVar22 & 1) != 0) {
        if (in_stack_00000668 == 0) goto LAB_06762e2c;
        uVar24 = FUN_068d3d38(in_stack_00000668,0);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*(long *)puVar7);
        }
        uVar22 = FUN_068f8810(uVar24,0,0);
        if ((uVar22 & 1) != 0) goto LAB_06762584;
      }
    }
    else {
LAB_06762584:
      FUN_067295d4();
    }
  }
  if (uVar14 == 0) {
    if (uVar32 == 0 && *(int *)(unaff_x20 + 0xe0) == 0) {
      uVar22 = FUN_06900a10(0);
      uVar24 = *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<TwoDragMe>_TypeInfo;
      if ((uVar22 & 1) == 0) {
        uVar34 = FUN_068dcf50(0);
      }
      else {
        uVar34 = FUN_068dcf78(0);
      }
      FUN_068cf75c(uVar24,uVar34,0);
    }
  }
  else {
    iVar12 = FUN_0675ebb0();
    if (((iVar12 != 1) || ((unaff_x29 & 1) != 0)) || (*(char *)(unaff_x19 + 0x1a4) == '\0')) {
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
    lVar31 = FUN_067676ac(0);
    if (lVar31 == 0) goto LAB_06762e2c;
    uVar20 = *(undefined4 *)(lVar31 + 0x50);
    FUN_06788be8(uVar20,&stack0x00000630,&stack0x0000062c,0);
    if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06748f48(0,unaff_x19 + 0x2c0,&stack0x00000630,in_stack_0000062c,1,0,1,
                 *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<VolatileFire>_TypeInfo,0)
    ;
    if (*(long *)(unaff_x19 + 0x220) == 0) goto LAB_06762e2c;
    FUN_06788d74(*(long *)(unaff_x19 + 0x220),*(undefined8 *)(unaff_x19 + 0x278),
                 *(undefined8 *)(unaff_x19 + 0x2c0),uVar20,0);
    FUN_067295d4();
  }
  if ((unaff_x29 >> 0x28 & 1) != 0) {
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
  if ((uVar16 & 1) != 0) {
    FUN_067295d4();
  }
  uVar33 = 0;
  if (bVar11 != 0) {
    uVar33 = 3;
  }
  if (uVar14 != 0) {
    if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06762e2c;
    if (499 < *(int *)(*(long *)(unaff_x19 + 0x218) + 0x10)) {
      if (in_stack_00000898 < 2) {
        uVar33 = 0;
      }
      else {
        if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar33 = FUN_0674de10(0);
        uVar33 = uVar33 & 1;
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_06762e2c;
  FUN_0671e2d0(*(long *)(unaff_x19 + 0x230),1 < in_stack_00000898 & bVar11,0,0);
  if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_06762e2c;
  FUN_0671e408(*(long *)(unaff_x19 + 0x230),uVar33,0);
  FUN_067295d4();
  FUN_067295d4();
  uVar33 = FUN_06770690(unaff_x26,0);
  uVar19 = FUN_0676cdd8(unaff_x26,0);
  if (((uVar33 & 1) != 0) && ((uVar19 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x260) == 0) goto LAB_06762e2c;
    FUN_06736864(*(long *)(unaff_x19 + 0x260),unaff_x26,0x18,0);
    FUN_067295d4();
  }
  bVar6 = *(long *)(unaff_x20 + 0x1a8) != 0 & bVar11;
  if ((bVar10 & bVar11) == 0) {
LAB_06762a14:
    bVar8 = false;
  }
  else if ((*(int *)(unaff_x20 + 0x1c4) == 1) ||
          ((*(int *)(unaff_x20 + 0x168) == 1 && (*(int *)(unaff_x20 + 0x16c) != 0)))) {
    bVar8 = true;
  }
  else {
    uVar22 = FUN_0676c0e0(unaff_x26,0);
    if ((uVar22 & 1) == 0) goto LAB_06762a14;
    bVar8 = 0.0 < *(float *)(unaff_x20 + 0x214);
  }
  bVar10 = bVar8 ^ 1;
  if (bVar6 != 0 || lVar21 != 0) {
    bVar10 = 0;
  }
  if (*(long *)(unaff_x19 + 0xe0) == 0) {
    uVar14 = 1;
  }
  else {
    uVar14 = FUN_0670f6ac(*(long *)(unaff_x19 + 0xe0),unaff_x26,0);
    uVar14 = ~uVar14 & 1;
  }
  plVar25 = (long *)(unaff_x19 + 0x278);
  plVar23 = (long *)(unaff_x19 + 0x288);
  if (uVar13 == 0) {
    if (bVar11 == 0) {
      return;
    }
    FUN_067600e4();
  }
  else {
    uVar20 = FUN_068e3d08(&stack0x00000890,0);
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
    FUN_0673d3c8(&stack0x000001c0,&stack0x00000180,in_stack_00000890,in_stack_00000894,uVar20,0,0);
    if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06748f48(0,unaff_x19 + 0x368,&stack0x00000570,0,1,0,1,
                 *(undefined8 *)OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo,0);
    if (bVar11 == 0) {
      if (*(long *)(unaff_x19 + 0x358) == 0) goto LAB_06762e2c;
      FUN_0673ac68(*(long *)(unaff_x19 + 0x358),&stack0x00000890,plVar25,0,plVar23,&stack0x00000670,
                   unaff_x19 + 0x2c8,0);
      goto LAB_06760c28;
    }
    FUN_067600e4();
    if (*(long *)(unaff_x19 + 0x358) == 0) goto LAB_06762e2c;
    FUN_0673ac68(*(long *)(unaff_x19 + 0x358),&stack0x00000890,plVar25,bVar10,plVar23,
                 &stack0x00000670,unaff_x19 + 0x2c8,bVar8);
    FUN_067295d4();
  }
  lVar31 = *plVar25;
  if (bVar8 != false) {
    if (*(long *)(unaff_x19 + 0x360) == 0) goto LAB_06762e2c;
    FUN_0673adb0(*(long *)(unaff_x19 + 0x360),&stack0x00000568,1,uVar14,0);
    FUN_067295d4();
  }
  if (*(long *)(unaff_x20 + 0x1a8) != 0) {
    FUN_067295d4();
  }
  if ((bVar8 == false) && (((uVar13 == 0 || (lVar21 != 0)) || (bVar6 != 0)))) {
    lVar21 = *plVar25;
    if (lVar21 == 0) goto LAB_06762e2c;
    lVar28 = *(long *)(unaff_x19 + 0x298);
    if (lVar28 == 0) goto LAB_06762e2c;
    in_stack_00000128 = *(undefined8 *)(lVar28 + 0x30);
    in_stack_00000120 = *(undefined8 *)(lVar28 + 0x28);
    in_stack_00000138 = *(undefined8 *)(lVar28 + 0x40);
    in_stack_00000130 = *(undefined8 *)(lVar28 + 0x38);
    in_stack_00000140 = *(undefined8 *)(lVar28 + 0x48);
    in_stack_00000150 = *(undefined8 *)(lVar21 + 0x28);
    in_stack_00000158 = *(undefined8 *)(lVar21 + 0x30);
    in_stack_00000160 = *(undefined8 *)(lVar21 + 0x38);
    in_stack_00000168 = *(undefined8 *)(lVar21 + 0x40);
    in_stack_00000170 = *(undefined8 *)(lVar21 + 0x48);
    uVar22 = FUN_0691198c(&stack0x00000150,&stack0x00000120,0);
    if ((uVar22 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x240) == 0) goto LAB_06762e2c;
      in_stack_000000e0 = CONCAT44(in_stack_00000894,in_stack_00000890);
      in_stack_000000e8 = CONCAT44(in_stack_0000089c,in_stack_00000898);
      in_stack_000000f0 = in_stack_000008a0;
      in_stack_000000f8 = in_stack_000008a8;
      in_stack_00000100 = in_stack_000008b0;
      in_stack_00000108 = in_stack_000008b8;
      in_stack_00000110 = in_stack_000008c0;
      FUN_0678f410(*(long *)(unaff_x19 + 0x240),&stack0x000000e0,lVar31,0);
      FUN_067295d4();
    }
  }
  if (((uVar19 | uVar33 ^ 0xffffffff) & 1) == 0) {
    FUN_067295d4();
  }
  if (*(long *)(unaff_x20 + 400) != 0) {
    uVar22 = FUN_0663aecc(*(long *)(unaff_x20 + 400),0);
    if ((uVar22 & 1) == 0) {
      return;
    }
    lVar21 = *plVar23;
    if (lVar21 != 0) {
      lVar31 = *(long *)(unaff_x20 + 400);
      if (lVar31 != 0) {
        in_stack_00000088 = *(undefined8 *)(lVar31 + 0x38);
        in_stack_00000080 = *(undefined8 *)(lVar31 + 0x30);
        in_stack_00000098 = *(undefined8 *)(lVar31 + 0x48);
        in_stack_00000090 = *(undefined8 *)(lVar31 + 0x40);
        in_stack_000000a0 = *(undefined8 *)(lVar31 + 0x50);
        in_stack_000000b0 = *(undefined8 *)(lVar21 + 0x28);
        in_stack_000000b8 = *(undefined8 *)(lVar21 + 0x30);
        in_stack_000000c0 = *(undefined8 *)(lVar21 + 0x38);
        in_stack_000000c8 = *(undefined8 *)(lVar21 + 0x40);
        in_stack_000000d0 = *(undefined8 *)(lVar21 + 0x48);
        uVar22 = FUN_0691198c(&stack0x000000b0,&stack0x00000080,0);
        if ((uVar22 & 1) != 0) {
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


