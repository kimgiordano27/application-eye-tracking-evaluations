/*
FUNCTION_NAME: Unity.VisualScripting.LooseAssemblyNameConverter$$CreateInstance
ENTRY_POINT: 067608ec
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_VisualScripting_LooseAssemblyNameConverter__CreateInstance(void)

{
  long *plVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined4 uVar22;
  ulong uVar23;
  undefined8 uVar24;
  ulong uVar25;
  long *plVar26;
  long *plVar27;
  ulong uVar28;
  uint uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long unaff_x19;
  long *unaff_x20;
  uint uVar33;
  long lVar34;
  undefined8 *puVar35;
  long lVar36;
  uint uVar37;
  uint uVar38;
  long lVar39;
  bool bVar40;
  uint uVar41;
  undefined8 uVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  undefined1 auVar49 [16];
  uint uStack0000000000000034;
  uint uStack0000000000000064;
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
  ulong in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  long in_stack_00000108;
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
  ulong in_stack_00000180;
  long in_stack_00000188;
  long in_stack_00000190;
  long in_stack_00000198;
  long in_stack_000001a0;
  long in_stack_000001a8;
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
  long in_stack_00000668;
  undefined4 in_stack_0000067c;
  int in_stack_00000774;
  long in_stack_00000778;
  undefined4 in_stack_00000888;
  int in_stack_0000088c;
  int iVar50;
  
                    /* try { // try from 0676091c to 06860b9f has its CatchHandler @ 0676091c
                       catch() { ... } // from try @ 0676091c with catch @ 0676091c
                       catch() { ... } // from try @ 06760ca0 with catch @ 0676091c
                       catch() { ... } // from try @ 06760dc8 with catch @ 0676091c
                       catch() { ... } // from try @ 06760e74 with catch @ 0676091c */
  if (*(long *)(unaff_x19 + 0x2d8) == 0) goto LAB_06762e2c;
  FUN_06783b74();
  lVar48 = unaff_x20[0x21];
  lVar47 = unaff_x20[0x20];
  lVar45 = unaff_x20[0x23];
  lVar44 = unaff_x20[0x22];
  lVar31 = unaff_x20[0x24];
  lVar46 = unaff_x20[0x1f];
  uVar28 = unaff_x20[0x1e];
  lVar39 = unaff_x20[0x1b];
  lVar43 = *unaff_x20;
  plVar1 = unaff_x20 + 3;
  if ((*(long *)(unaff_x19 + 0xe0) != 0) &&
     (uVar23 = FUN_0670f9b0(*(long *)(unaff_x19 + 0xe0),plVar1,0), (uVar23 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06762e2c;
    uVar23 = thunk_FUN_0670f6ac(*(long *)(unaff_x19 + 0xe0),plVar1,0);
    if ((uVar23 & 1) != 0) {
      lVar30 = unaff_x20[0x2b];
      uVar22 = *(undefined4 *)((long)unaff_x20 + 0x15c);
      if (*(int *)(*(long *)OVRTask<ValueTuple<Int32Enum,_int>>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_0670fa48(&stack0x00000810,(int)lVar30,uVar22,0);
      if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06762e2c;
      uVar24 = FUN_0670f694(*(long *)(unaff_x19 + 0xe0),0);
      if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo);
      }
      FUN_06748f48(0,uVar24,&stack0x00000810,0,0,0,1,
                   *(undefined8 *)OVRTask<OVRSceneManager_Metrics>_TypeInfo,0);
      FUN_0670fa94(&stack0x000007d0,0x18,(int)unaff_x20[0x2b],
                   *(undefined4 *)((long)unaff_x20 + 0x15c),0);
      if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06762e2c;
      uVar24 = FUN_0670f69c(*(long *)(unaff_x19 + 0xe0),0);
      FUN_06748f48(0,uVar24,&stack0x000007d0,0,0,0,1,
                   *(undefined8 *)OVRTask<OVRPlugin_Result>_TypeInfo,0);
    }
    if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06762e2c;
    uVar23 = FUN_0670f6ac(*(long *)(unaff_x19 + 0xe0),plVar1,0);
    if ((uVar23 & 1) != 0) {
      lVar30 = *(long *)(unaff_x19 + 0xe0);
      if ((((lVar30 == 0) || (*(long *)(lVar30 + 0x78) == 0)) ||
          (lVar32 = *(long *)(*(long *)(lVar30 + 0x78) + 0x30), lVar32 == 0)) ||
         ((*(long *)(lVar30 + 0x20) == 0 ||
          (FUN_06738814(*(long *)(lVar30 + 0x20),plVar1,*(undefined4 *)(lVar32 + 0x18),0),
          *(long *)(unaff_x19 + 0xe0) == 0)))) goto LAB_06762e2c;
      FUN_067295d4();
    }
  }
  puVar7 = System_Collections_Generic_List<TweenBase>_TypeInfo;
  if ((int)unaff_x20[0x30] != 1) {
    *(undefined1 *)(unaff_x19 + 0x1a4) = 0;
  }
  bVar10 = FUN_06760480();
  *(byte *)(unaff_x19 + 0x1a5) = bVar10 & 1;
  if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar23 = FUN_067603f4(plVar1);
  if ((uVar23 & 1) != 0) {
    if (*(int *)(*(long *)OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06725e18();
    FUN_067288e0();
    FUN_067295d4();
    goto LAB_06760c28;
  }
  uVar13 = FUN_0676dfd8(plVar1,0);
  if (*(long *)(unaff_x19 + 0x108) == 0) goto LAB_06762e2c;
  if ((*(int *)(*(long *)(unaff_x19 + 0x108) + 0x18) == 0) ||
     (((uint)(*(int *)(unaff_x19 + 0x310) == 1) & (uVar13 ^ 0xffffffff)) == 0)) {
    if (*(int *)(*(long *)PTR_DAT_06f6dcf0 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar23 = FUN_068b8dd0(0);
    if ((uVar23 & 1) == 0) {
      uVar37 = 0;
    }
    else {
      uVar37 = (uint)*(byte *)(unaff_x19 + 0x1a8);
    }
  }
  else {
    uVar37 = 1;
  }
  auVar49 = FUN_06762ec4();
  uVar23 = auVar49._0_8_;
  bVar10 = FUN_0674b86c();
  bVar11 = FUN_06760694();
  bVar10 = bVar10 & (bVar11 ^ 1);
  if (((bVar10 & 1) == 0) || (iVar14 = FUN_0675ebb0(), iVar14 == 1)) {
    uStack0000000000000064 = 0;
LAB_06760d24:
    uVar41 = auVar49._2_4_ & 1;
    bVar40 = false;
  }
  else {
    uStack0000000000000064 = 1;
    if (in_stack_0000088c != 0) {
      if (in_stack_0000088c != 1) {
        thunk_FUN_03037804(PTR_DAT_06f7a510);
        uVar24 = thunk_FUN_0301080c();
        FUN_05a66294(uVar24,0);
        uVar42 = thunk_FUN_03037804(Unity_Entities_TypeManager_SharedTypeIndex<VrGuiInput>_TypeInfo)
        ;
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar24,uVar42);
      }
      goto LAB_06760d24;
    }
    bVar40 = true;
    uStack0000000000000064 = 0;
    uVar41 = 1;
  }
  lVar30 = *(long *)(unaff_x19 + 0x2e0);
  if (lVar30 != 0) {
    *(byte *)(lVar30 + 0x14) = bVar10 & 1;
    *(undefined4 *)(lVar30 + 0x10) = in_stack_00000888;
    *(char *)(lVar30 + 0x17) = (char)uVar41;
    FUN_06779d44();
    lVar30 = *(long *)(unaff_x19 + 0x2e0);
    if (lVar30 == 0) goto LAB_06762e2c;
    *(bool *)(lVar30 + 0x19) = (int)unaff_x20[0x1c] == 1;
    if (*(char *)(lVar30 + 0x15) != '\0') {
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_06762e2c;
      FUN_04430ce4(&stack0x00000530,*(long *)(unaff_x19 + 0x100),
                   *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<MeshCombiner>_TypeInfo)
      ;
      puVar7 = Unity_Entities_TypeManager_SharedTypeIndex<MenuSound>_TypeInfo;
      do {
        uVar25 = FUN_05506d10(&stack0x000007b0,*(undefined8 *)puVar7);
        if ((uVar25 & 1) == 0) goto LAB_06760dec;
        if (in_stack_00000540 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
      } while (10 < *(int *)(in_stack_00000540 + 0x10) - 0xdcU);
      if (*(long *)(unaff_x19 + 0x2e0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      FUN_0677a1bc(*(long *)(unaff_x19 + 0x2e0),0);
LAB_06760dec:
      FUN_05506d0c(&stack0x000007b0,
                   *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<MenuPanel>_TypeInfo);
    }
  }
  if ((char)unaff_x20[0x34] == '\0') {
    uVar15 = 0;
  }
  else {
    uVar15 = FUN_06743114(unaff_x19 + 0x350,0);
    uVar15 = uVar15 & 1;
  }
  if (*(char *)((long)unaff_x20 + 0x2b4) == '\0') {
    bVar11 = 0;
    if (uVar15 == 0) goto LAB_06760e50;
Unity_VisualScripting_NamespaceConverter___ctor:
    cVar4 = *(char *)((long)unaff_x20 + 0x189);
  }
  else {
    bVar11 = FUN_06743114(unaff_x19 + 0x350,0);
    bVar11 = bVar11 & 1;
    if (uVar15 != 0) goto Unity_VisualScripting_NamespaceConverter___ctor;
LAB_06760e50:
    cVar4 = '\0';
  }
  if ((char)unaff_x20[0x34] == '\0') {
    uStack0000000000000034 = 0;
  }
  else {
    uStack0000000000000034 = FUN_06743114(unaff_x19 + 0x350,0);
  }
  uVar25 = FUN_0676aaf4(plVar1,0);
  if ((uVar25 & 1) == 0) {
    uVar16 = FUN_0676dfd8(plVar1,0);
    uVar16 = uVar16 & 1;
  }
  else {
    uVar16 = 1;
  }
  bVar8 = true;
  if (((uVar23 & 1) == 0) && (*(char *)((long)unaff_x20 + 0x187) == '\0')) {
    bVar8 = *(int *)(unaff_x19 + 0x2ec) == 2;
  }
  if (*(long *)(unaff_x19 + 0x1d0) == 0) goto LAB_06762e2c;
  uVar17 = FUN_06792914();
  if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_06762e2c;
  uVar18 = FUN_06780188(*(long *)(unaff_x19 + 0x1d8));
  if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_06762e2c;
  uVar19 = FUN_067428e4(*(long *)(unaff_x19 + 0x228),0);
  bVar12 = 0;
  if (bVar8 || cVar4 != '\0') {
    iVar14 = *(int *)(unaff_x19 + 0x2f0);
    bVar12 = FUN_06760564();
    bVar12 = iVar14 == 2 | (bVar12 ^ 0xff) & 1;
  }
  if (((((uVar13 | auVar49._0_4_ >> 8) & 1) == 0 && uVar41 == 0) && uVar16 == 0) && bVar12 == 0) {
    uVar38 = 0;
  }
  else {
    iVar14 = FUN_0675ebb0();
    uVar38 = iVar14 != 1 | uVar41;
  }
  cVar5 = *(char *)(unaff_x19 + 0x1a5);
  if (bVar8) {
    lVar30 = *(long *)(unaff_x19 + 0x218);
    iVar14 = auVar49._12_4_ + -1;
    iVar21 = 500;
    if (*(int *)(unaff_x19 + 0x2f0) != 1) {
      iVar21 = 300;
    }
    if (499 < iVar14) {
      iVar14 = 500;
    }
    if ((uVar23 & 1) != 0) {
      iVar21 = iVar14;
    }
    if (lVar30 == 0) goto LAB_06762e2c;
    *(int *)(lVar30 + 0x10) = iVar21;
    if (iVar21 < 500) {
      *(undefined1 *)(lVar30 + 0x100) = 0;
      *(undefined4 *)(unaff_x19 + 0x2f0) = 0;
    }
    bVar8 = true;
  }
  else if (uVar16 == 0 && cVar4 == '\0') {
    bVar8 = false;
  }
  else {
    if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06762e2c;
    bVar8 = false;
    *(undefined4 *)(*(long *)(unaff_x19 + 0x218) + 0x10) = 500;
  }
  uVar20 = FUN_067630e0();
  bVar12 = *(byte *)(unaff_x20 + 0x3b);
  iVar14 = FUN_0675ebb0();
  if (iVar14 == 1) {
    uVar29 = *(byte *)(unaff_x19 + 0x1a4) ^ 1;
  }
  else {
    uVar29 = 0;
  }
  if (unaff_x20[0x32] == 0) goto LAB_06762e2c;
  uVar33 = auVar49._3_4_;
  uVar38 = uVar38 | cVar5 != '\0';
  uVar6 = bVar12 ^ 1 | (uint)(cVar4 != '\0' || bVar8) & (uVar38 ^ 1) | uStack0000000000000064 |
          uVar29 | (uint)*(byte *)(unaff_x19 + 0x1a5);
  uVar25 = FUN_0663aecc(unaff_x20[0x32],0);
  uVar29 = uVar6;
  if ((uVar25 & 1) == 0) {
    uVar29 = 0;
  }
  uVar29 = uVar29 | (uVar37 | uVar33 | auVar49._4_4_ | uVar20) & ~uVar13 & 1;
  iVar14 = FUN_069005b0(0);
  puVar7 = UnityEngine_UIElements_EventBase<PointerOutEvent>_TypeInfo;
  if ((iVar14 != 0x15) || (*(char *)(unaff_x19 + 0x314) != '\0')) {
    uVar29 = uVar6 | uVar29 != 0;
  }
  bVar8 = uVar29 != 0;
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
    bVar8 = uVar6 != 0 || bVar8;
  }
  if ((*(char *)(unaff_x19 + 0x1a4) != '\0') || (*(char *)(unaff_x19 + 0x1a5) != '\0')) {
    bVar8 = uVar6 != 0 || bVar8;
  }
  FUN_068e47d0(&stack0x00000850,0,0);
  FUN_068e47ec(&stack0x00000850,0,0);
  FUN_068e41c8(&stack0x00000850,0,0);
  if (*(long *)(unaff_x19 + 0x270) == 0) goto LAB_06762e2c;
  plVar27 = (long *)(unaff_x19 + 0x270);
  FUN_06794af0(*(long *)(unaff_x19 + 0x270),&stack0x000004f0,1,0);
  if ((int)unaff_x20[0x1c] == 0) {
    if (lVar39 == 0) goto LAB_06762e2c;
    iVar14 = FUN_068bba14(lVar39,0);
    bVar9 = uVar6 != 0 || bVar8;
    FUN_06911464(&stack0x00000530,2,0);
    if ((unaff_x20[0x32] == 0) ||
       ((uVar25 = FUN_0663aecc(unaff_x20[0x32],0), (uVar25 & 1) != 0 && (unaff_x20[0x32] == 0))))
    goto LAB_06762e2c;
    puVar35 = (undefined8 *)(unaff_x19 + 0x298);
    if (*(long *)(unaff_x19 + 0x298) == 0) {
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar24 = FUN_0668cb3c(&stack0x000004c0,0);
      *puVar35 = uVar24;
      thunk_FUN_03048534(puVar35,uVar24);
    }
    else {
      uVar25 = FUN_069119bc(&stack0x00000490,&stack0x00000460,0);
      if ((uVar25 & 1) != 0) {
        FUN_0668cc1c(puVar35,&stack0x00000430,0);
      }
    }
    if (bVar9 && iVar14 != 1) {
      FUN_0676329c();
      iVar21 = FUN_069005b0(0);
      if (iVar21 == 2) {
        FUN_066861a8(&stack0x000001c0,*(undefined8 *)(unaff_x19 + 0x290),0);
        FUN_066861a8(&stack0x00000408,*(undefined8 *)(unaff_x19 + 0x2a0),0);
        in_stack_000001c0 = in_stack_00000408;
        in_stack_000001c8 = in_stack_00000410;
        in_stack_000001d0 = in_stack_00000418;
        in_stack_000001d8 = in_stack_00000420;
        in_stack_000001e0 = in_stack_00000428;
        if (lVar43 == 0) goto LAB_06762e2c;
        FUN_06916328(lVar43,&stack0x000003e0,&stack0x000003b0,0);
      }
    }
    if (*(long *)(unaff_x19 + 0x200) == 0) goto LAB_06762e2c;
    bVar3 = uVar6 == 0 && !bVar8 || iVar14 == 1;
    *(bool *)(*(long *)(unaff_x19 + 0x200) + 0x181) = bVar3;
    if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_06762e2c;
    *(bool *)(*(long *)(unaff_x19 + 0x230) + 0x181) = bVar3;
    if (*(long *)(unaff_x19 + 0x210) == 0) goto LAB_06762e2c;
    *(bool *)(*(long *)(unaff_x19 + 0x210) + 0xe0) = bVar3;
    if (*(long *)(unaff_x19 + 0x250) == 0) goto LAB_06762e2c;
    *(bool *)(*(long *)(unaff_x19 + 0x250) + 0xe8) = bVar3;
    if (bVar8) {
      if (*plVar27 == 0) goto LAB_06762e2c;
      uVar24 = FUN_067946d0(*plVar27,0);
    }
    else {
      uVar24 = *puVar35;
    }
    *(undefined8 *)(unaff_x19 + 0x278) = uVar24;
    thunk_FUN_03048534(unaff_x19 + 0x278);
    lVar30 = 0x290;
    if (uVar6 == 0 && !bVar8) {
      lVar30 = 0x298;
    }
    *(undefined8 *)(unaff_x19 + 0x288) = *(undefined8 *)(unaff_x19 + lVar30);
    thunk_FUN_03048534(unaff_x19 + 0x288);
  }
  else {
    if (((unaff_x20[0x44] == 0) ||
        (FUN_03bbf6cc(unaff_x20[0x44],&stack0x00000778,
                      *(undefined8 *)
                       OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                     ), in_stack_00000778 == 0)) ||
       (plVar26 = (long *)FUN_0675da60(), plVar26 == (long *)0x0)) goto LAB_06762e2c;
    if (*plVar26 != *(long *)System_Collections_Generic_List<TweenBase>_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(plVar26);
    }
    lVar30 = *plVar27;
    if (lVar30 != plVar26[0x4e]) {
      if (lVar30 == 0) goto LAB_06762e2c;
      UnityEngine_AndroidJNI__CallObjectMethod(lVar30,0);
      *plVar27 = plVar26[0x4e];
      thunk_FUN_03048534(plVar27);
      lVar30 = *plVar27;
    }
    if (lVar30 == 0) goto LAB_06762e2c;
    uVar24 = FUN_067946d0(lVar30,0);
    *(undefined8 *)(unaff_x19 + 0x278) = uVar24;
    thunk_FUN_03048534(unaff_x19 + 0x278);
    *(long *)(unaff_x19 + 0x288) = plVar26[0x51];
    thunk_FUN_03048534(unaff_x19 + 0x288);
    *(long *)(unaff_x19 + 0x298) = plVar26[0x53];
    thunk_FUN_03048534(unaff_x19 + 0x298);
    bVar9 = uVar6 != 0;
  }
  if (*(long *)(unaff_x19 + 0x108) == 0) goto LAB_06762e2c;
  if ((uVar13 & 1) == 0 && *(int *)(*(long *)(unaff_x19 + 0x108) + 0x18) != 0) {
    if (*plVar27 == 0) goto LAB_06762e2c;
    FUN_067946d0(*plVar27,0);
    FUN_06726080();
  }
  if ((char)unaff_x20[0x31] != '\0') {
    uVar33 = 1;
  }
  FUN_06725e18();
  puVar7 = Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
  lVar32 = *(long *)(unaff_x19 + 0x100);
  lVar30 = *(long *)Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
  if (*(int *)(lVar30 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar30 = *(long *)puVar7;
  }
  lVar34 = *(long *)(*(long *)(lVar30 + 0xb8) + 8);
  if (lVar34 == 0) {
    if (*(int *)(lVar30 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar30 = *(long *)puVar7;
    }
    uVar24 = **(undefined8 **)(lVar30 + 0xb8);
    lVar34 = thunk_FUN_0301080c(*(undefined8 *)OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_TypeInfo);
    FUN_0494bc5c(lVar34,uVar24,
                 *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<VRVideoPlayer>_TypeInfo,0
                );
    plVar27 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 8);
    *plVar27 = lVar34;
    thunk_FUN_03048534(plVar27,lVar34);
  }
  if (lVar32 == 0) goto LAB_06762e2c;
  lVar30 = FUN_04430950(lVar32,lVar34,
                        *(undefined8 *)
                         OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo);
  if ((uVar17 & 1) != 0) {
    FUN_067295d4();
  }
  if ((uVar18 & 1) != 0) {
    FUN_067295d4();
  }
  uVar33 = uVar33 & ~uVar13 & 1;
  if (uVar38 == 0) {
    uVar13 = auVar49._0_4_ & 1;
    if (cVar4 != '\0' || *(char *)((long)unaff_x20 + 0x187) != '\0') {
      uVar13 = 1;
    }
  }
  else {
    uVar13 = 0;
  }
  bVar8 = uVar33 != 0;
  uVar13 = uVar13 & bVar9;
  if ((*(long *)(unaff_x19 + 0xe0) != 0) &&
     (uVar25 = FUN_0670f9b0(*(long *)(unaff_x19 + 0xe0),plVar1,0), (uVar25 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06762e2c;
    FUN_0670f9f0(*(long *)(unaff_x19 + 0xe0),&stack0x00000774,0);
    if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06762e2c;
    uVar38 = uVar38 | in_stack_00000774 == 1;
    uVar25 = FUN_0670f5d4(*(long *)(unaff_x19 + 0xe0),0);
    if (((uVar25 & 1) == 0) && (uVar16 == 0)) {
      uVar13 = 0;
      uVar33 = 0;
      uVar38 = 0;
      uStack0000000000000034 = 0;
      *(undefined1 *)(unaff_x19 + 0x1a5) = 0;
    }
    bVar8 = uVar33 != 0;
    if (*(char *)(unaff_x19 + 0x1a4) != '\0') {
      if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06762e2c;
      bVar12 = FUN_0670f728(*(long *)(unaff_x19 + 0xe0),0);
      *(byte *)(unaff_x19 + 0x1a4) = bVar12 & 1;
    }
  }
  if (unaff_x20[0x3a] == 0) goto LAB_06762e2c;
  *(undefined1 *)(unaff_x20[0x3a] + 0x1a5) = *(undefined1 *)(unaff_x19 + 0x1a5);
  iVar14 = FUN_0675ebb0();
  iVar21 = auVar49._8_4_;
  if (iVar14 == 1) {
    lVar32 = *(long *)(unaff_x19 + 0x2e0);
    if (lVar32 == 0) goto LAB_06762e2c;
    if ((*(char *)(lVar32 + 0x15) != '\0') &&
       ((iVar21 == 0xdc || (*(char *)(unaff_x19 + 0x1a4) == '\0')))) {
      FUN_0677a1bc(lVar32,0);
    }
  }
  iVar14 = FUN_0675ebb0();
  if (iVar14 == 1) {
    bVar12 = *(byte *)(unaff_x19 + 0x1a4) ^ 1;
  }
  else {
    bVar12 = 0;
  }
  if (bVar12 != 0 || (uVar38 != 0 || uVar13 != 0)) {
    if ((uVar38 == 0) || (iVar14 = FUN_0675ebb0(), iVar14 == 1)) {
      if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar25 = FUN_0674ac30(0x31,4,0);
      if ((uVar25 & 1) == 0) goto LAB_0676191c;
      uVar22 = 0;
      uVar24 = 0x31;
    }
    else {
LAB_0676191c:
      uVar24 = 0;
      uVar22 = 0x18;
    }
    FUN_068e40b4(&stack0x00000740,uVar24,0);
    FUN_068e41c8(&stack0x00000740,uVar22,0);
    if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06748f48(0,(long *)(unaff_x19 + 0x2a8),&stack0x00000740,0,1,0,1,
                 *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<TwoDragMe>_TypeInfo,0);
    lVar32 = *(long *)(unaff_x19 + 0x2a8);
    if ((lVar32 == 0) || (lVar43 == 0)) goto LAB_06762e2c;
    FUN_06916814(lVar43,*(undefined8 *)(lVar32 + 0x58),&stack0x00000380,0);
    if (*(int *)(*(long *)PTR_DAT_06f988b8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_0691ff78(&stack0x000008c8,lVar43,0);
    FUN_0691250c(lVar43,0);
  }
  if ((bVar10 & 1) == 0) {
    iVar14 = FUN_0675ebb0();
    if (iVar14 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar25 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar25 & 1) != 0) goto LAB_06761a24;
    }
  }
  else {
LAB_06761a24:
    puVar7 = Unity_Entities_TypeManager_SharedTypeIndex<VibrationManager>_TypeInfo;
    plVar27 = (long *)(unaff_x19 + 0x2b8);
    uVar24 = *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<VibrationManager>_TypeInfo;
    iVar14 = FUN_0675ebb0();
    if (iVar14 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar25 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar25 & 1) != 0) {
        lVar32 = *(long *)(unaff_x19 + 0x2e0);
        if (lVar32 == 0) goto LAB_06762e2c;
        lVar34 = *(long *)(lVar32 + 0x30);
        uVar37 = FUN_06778ac8(lVar32,0);
        if (lVar34 == 0) goto LAB_06762e2c;
        if (*(uint *)(lVar34 + 0x18) <= uVar37) goto LAB_06762e3c;
        plVar27 = (long *)(lVar34 + (long)(int)uVar37 * 8 + 0x20);
        if (*plVar27 == 0) goto LAB_06762e2c;
        uVar24 = *(undefined8 *)(*plVar27 + 0x58);
      }
    }
    FUN_068e41c8(&stack0x00000700,0,0);
    iVar14 = FUN_0675ebb0();
    if (iVar14 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar25 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar25 & 1) == 0) goto LAB_06761b44;
      lVar32 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar32 == 0) goto LAB_06762e2c;
      uVar22 = FUN_06778ac8(lVar32,0);
      uVar22 = FUN_06778be0(lVar32,uVar22,0);
    }
    else {
LAB_06761b44:
      uVar22 = FUN_0674bc74(in_stack_00000888,0);
    }
    FUN_068e40b4(&stack0x00000700,uVar22,0);
    iVar14 = FUN_0675ebb0();
    if (iVar14 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar25 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar25 & 1) == 0) goto LAB_06761bec;
      lVar32 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar32 == 0) goto LAB_06762e2c;
      uVar22 = FUN_06778ac8(lVar32,0);
      FUN_0677a264(lVar32,&stack0x00000340,uVar22,0);
    }
    else {
LAB_06761bec:
      if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_06748f48(0,plVar27,&stack0x00000700,0,1,0,1,uVar24,0);
    }
    if ((*plVar27 == 0) || (lVar43 == 0)) goto LAB_06762e2c;
    FUN_06916814(lVar43,*(undefined8 *)(*plVar27 + 0x58),&stack0x00000310,0);
    FUN_0674bb60(lVar43,in_stack_00000888,0);
    iVar14 = FUN_0675ebb0();
    if (iVar14 == 1) {
      if (*plVar27 == 0) goto LAB_06762e2c;
      FUN_06916814(lVar43,*(undefined8 *)puVar7,&stack0x000002e0,0);
    }
    if (*(int *)(*(long *)PTR_DAT_06f988b8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_0691ff78(&stack0x000008c8,lVar43,0);
    FUN_0691250c(lVar43,0);
  }
  puVar7 = Unity_Entities_TypeManager_SharedTypeIndex<Voxelize>_TypeInfo;
  if ((uVar41 & uVar38) == 1) {
    uVar24 = *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<Voxelize>_TypeInfo;
    iVar14 = FUN_0675ebb0();
    if (iVar14 == 1) {
      lVar32 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar32 == 0) goto LAB_06762e2c;
      lVar34 = *(long *)(lVar32 + 0x30);
      uVar37 = FUN_06778aa4(lVar32,0);
      if (lVar34 == 0) goto LAB_06762e2c;
      if (*(uint *)(lVar34 + 0x18) <= uVar37) goto LAB_06762e3c;
      plVar27 = (long *)(lVar34 + (long)(int)uVar37 * 8 + 0x20);
      if (*plVar27 == 0) goto LAB_06762e2c;
      uVar24 = *(undefined8 *)(*plVar27 + 0x58);
    }
    else {
      plVar27 = (long *)(unaff_x19 + 0x2b0);
    }
    FUN_068e41c8(&stack0x000006c0,0,0);
    iVar14 = FUN_0675ebb0();
    if (iVar14 == 1) {
      lVar32 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar32 == 0) goto LAB_06762e2c;
      uVar22 = FUN_06778aa4(lVar32,0);
      uVar22 = FUN_06778be0(lVar32,uVar22,0);
    }
    else {
      if (*(int *)(*(long *)Unity_Entities_TypeManager_SharedTypeIndex<VRIK>_TypeInfo + 0xe0) == 0)
      {
        thunk_FUN_02fdcff0();
      }
      uVar22 = FUN_0678bcb0(0);
    }
    FUN_068e40b4(&stack0x000006c0,uVar22,0);
    iVar14 = FUN_0675ebb0();
    if (iVar14 == 1) {
      lVar32 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar32 == 0) goto LAB_06762e2c;
      uVar22 = FUN_06778aa4(lVar32,0);
      FUN_0677a264(lVar32,&stack0x000002a0,uVar22,0);
    }
    else {
      if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_06748f48(0,plVar27,&stack0x000006c0,0,1,0,1,uVar24,0);
    }
    if ((*plVar27 == 0) || (lVar43 == 0)) goto LAB_06762e2c;
    FUN_06916814(lVar43,*(undefined8 *)(*plVar27 + 0x58),&stack0x00000270,0);
    iVar14 = FUN_0675ebb0();
    if (iVar14 == 1) {
      if (*plVar27 == 0) goto LAB_06762e2c;
      FUN_06916814(lVar43,*(undefined8 *)puVar7,&stack0x00000240,0);
    }
    if (*(int *)(*(long *)PTR_DAT_06f988b8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_0691ff78(&stack0x000008c8,lVar43,0);
    FUN_0691250c(lVar43,0);
  }
  if (uVar38 != 0) {
    iVar14 = FUN_0675ebb0();
    if (uVar41 == 0) {
      if (iVar14 == 1) goto LAB_06762190;
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_06762e2c;
      FUN_0678ce44(*(long *)(unaff_x19 + 0x1b0),&stack0x00000200,*(undefined8 *)(unaff_x19 + 0x2a8),
                   0);
    }
    else if (iVar14 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar37 = FUN_06778aa4(*(long *)(unaff_x19 + 0x2e0),0);
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar25 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
      lVar43 = *(long *)(unaff_x19 + 0x2e0);
      if ((lVar43 == 0) || (lVar32 = *(long *)(lVar43 + 0x30), lVar32 == 0)) goto LAB_06762e2c;
      if (*(uint *)(lVar32 + 0x18) <= uVar37) {
LAB_06762e3c:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar34 = *(long *)(unaff_x19 + 0x1b8);
      uVar24 = *(undefined8 *)(unaff_x19 + 0x288);
      uVar42 = *(undefined8 *)(lVar32 + (long)(int)uVar37 * 8 + 0x20);
      if ((uVar25 & 1) == 0) {
        if (bVar40) {
          if (lVar34 == 0) goto LAB_06762e2c;
          FUN_0678bd80(lVar34,uVar24,uVar42,*(undefined8 *)(unaff_x19 + 0x2b8),0);
        }
        else {
          if (lVar34 == 0) goto LAB_06762e2c;
          FUN_0678bd48(lVar34,uVar24,uVar42,0);
        }
      }
      else {
        uVar37 = FUN_06778ac8(lVar43,0);
        if (*(uint *)(lVar32 + 0x18) <= uVar37) goto LAB_06762e3c;
        if (lVar34 == 0) goto LAB_06762e2c;
        FUN_0678bd80(lVar34,uVar24,uVar42,*(undefined8 *)(lVar32 + (long)(int)uVar37 * 8 + 0x20),0);
      }
      puVar7 = System_Collections_Generic_List<TweenBase>_TypeInfo;
      if (iVar21 - 0xdcU < 0x1f) {
        lVar32 = *(long *)(unaff_x19 + 0x1b8);
        lVar43 = *(long *)System_Collections_Generic_List<TweenBase>_TypeInfo;
        if (*(int *)(lVar43 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
          lVar43 = *(long *)puVar7;
        }
        if (lVar32 == 0) goto LAB_06762e2c;
        puVar35 = (undefined8 *)(lVar32 + 0xe0);
        *puVar35 = **(undefined8 **)(lVar43 + 0xb8);
        thunk_FUN_03048534(puVar35);
      }
    }
    else {
      lVar43 = *(long *)(unaff_x19 + 0x1b8);
      if (bVar40) {
        if (lVar43 == 0) goto LAB_06762e2c;
        FUN_0678bd80();
      }
      else {
        if (lVar43 == 0) goto LAB_06762e2c;
        FUN_0678bd48(lVar43,*(undefined8 *)(unaff_x19 + 0x2a8),*(undefined8 *)(unaff_x19 + 0x2b0),0)
        ;
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
    FUN_06786d08(*(long *)(unaff_x19 + 0x350),unaff_x20 + 0x54,&stack0x00000680,&stack0x0000067c,0);
    if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06748f48(0,unaff_x19 + 0x370,&stack0x00000680,in_stack_0000067c,1,0,0,
                 *(undefined8 *)OVRTask<OVRSceneManager_LoadSceneModelResult>_TypeInfo,0);
    if (*(long *)(unaff_x19 + 0x350) == 0) goto LAB_06762e2c;
    FUN_06786cf4(*(long *)(unaff_x19 + 0x350),&stack0x00000670,0);
    FUN_067295d4();
  }
  if (unaff_x20[0x32] == 0) goto LAB_06762e2c;
  uVar25 = FUN_0663edb0(unaff_x20[0x32],0);
  if ((uVar25 & 1) != 0) {
    FUN_067295d4();
  }
  bVar10 = *(byte *)(unaff_x20 + 0x3b);
  iVar14 = FUN_0675ebb0();
  iVar50 = (int)lVar46;
  if (iVar14 == 1) {
    lVar43 = *(long *)(unaff_x19 + 0x2e0);
    if (lVar43 == 0) goto LAB_06762e2c;
    if ((*(char *)(lVar43 + 0x15) != '\0') &&
       ((iVar21 == 0xdc || (*(char *)(unaff_x19 + 0x1a4) == '\0')))) {
      FUN_0677a1bc(lVar43,0);
    }
    FUN_067638f4();
  }
  else {
    uVar22 = 2;
    if (!bVar8) {
      uVar22 = 0;
    }
    uVar2 = 0;
    if (1 < iVar50) {
      uVar2 = uVar22;
    }
    iVar14 = 0;
    if ((!bVar8 && uVar13 == 0) && bVar10 != 0) {
      iVar14 = 3;
    }
    if (unaff_x20[0x32] == 0) goto LAB_06762e2c;
    uVar25 = FUN_0663aecc(unaff_x20[0x32],0);
    if ((uVar25 & 1) != 0) {
      if (unaff_x20[0x32] == 0) goto LAB_06762e2c;
      if (*(char *)(unaff_x20[0x32] + 0x20) != '\0') {
        iVar14 = 0;
      }
    }
    if ((1 < iVar50) && (uVar13 != 0)) {
      if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar25 = FUN_0674de10(0);
      if ((uVar25 & 1) != 0) {
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
    if (uStack0000000000000064 == 0) {
      lVar43 = *(long *)(unaff_x19 + 0x200);
    }
    else {
      lVar43 = *(long *)(unaff_x19 + 0x208);
      if (lVar43 == 0) goto LAB_06762e2c;
      FUN_0678d900(lVar43,*(undefined8 *)(unaff_x19 + 0x278),*(undefined8 *)(unaff_x19 + 0x2b8),
                   *(undefined8 *)(unaff_x19 + 0x288),0);
    }
    if (lVar43 == 0) goto LAB_06762e2c;
    FUN_0671e2d0(lVar43,uVar2,0,0);
    FUN_0671e408(lVar43,iVar14,0);
    puVar7 = Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
    lVar34 = *(long *)(unaff_x19 + 0x100);
    lVar32 = *(long *)Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
    if (*(int *)(lVar32 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar32 = *(long *)puVar7;
    }
    lVar36 = *(long *)(*(long *)(lVar32 + 0xb8) + 0x10);
    if (lVar36 == 0) {
      if (*(int *)(lVar32 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar32 = *(long *)Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
      }
      puVar7 = Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
      uVar24 = **(undefined8 **)(lVar32 + 0xb8);
      lVar36 = thunk_FUN_0301080c(*(undefined8 *)OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_TypeInfo)
      ;
      FUN_0494bc5c(lVar36,uVar24,
                   *(undefined8 *)
                    Unity_Entities_TypeManager_SharedTypeIndex<VehicleController>_TypeInfo,0);
      plVar27 = (long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
      *plVar27 = lVar36;
      thunk_FUN_03048534(plVar27,lVar36);
    }
    if (lVar34 == 0) goto LAB_06762e2c;
    lVar32 = FUN_04430950(lVar34,lVar36,
                          *(undefined8 *)
                           OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo);
    if ((lVar32 == 0) && ((int)unaff_x20[0x1c] == 0)) {
      uVar22 = 1;
    }
    else {
      uVar22 = 0;
    }
    uVar25 = FUN_06900e10(0);
    if ((uVar25 & 1) != 0) {
      FUN_0671ed40(0,0,0,0x3f800000,lVar43,uVar22,0);
    }
    FUN_067295d4();
  }
  if (lVar39 == 0) goto LAB_06762e2c;
  iVar14 = FUN_068ba01c(lVar39,0);
  if ((iVar14 == 1) && ((int)unaff_x20[0x1c] != 1)) {
    uVar24 = FUN_068ced20(0);
    puVar7 = PTR_DAT_06f6d618;
    if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
    }
    uVar25 = FUN_068f8810(uVar24,0,0);
    if ((uVar25 & 1) == 0) {
      uVar25 = FUN_03bbf6cc(lVar39,&stack0x00000668,
                            *(undefined8 *)
                             Unity_Entities_TypeManager_SharedTypeIndex<VRUtils>_TypeInfo);
      if ((uVar25 & 1) != 0) {
        if (in_stack_00000668 == 0) goto LAB_06762e2c;
        uVar24 = FUN_068d3d38(in_stack_00000668,0);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*(long *)puVar7);
        }
        uVar25 = FUN_068f8810(uVar24,0,0);
        if ((uVar25 & 1) != 0) goto LAB_06762584;
      }
    }
    else {
LAB_06762584:
      FUN_067295d4();
    }
  }
  if (uVar13 == 0) {
    if (uVar38 == 0 && (int)unaff_x20[0x1c] == 0) {
      uVar25 = FUN_06900a10(0);
      uVar24 = *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<TwoDragMe>_TypeInfo;
      if ((uVar25 & 1) == 0) {
        uVar42 = FUN_068dcf50(0);
      }
      else {
        uVar42 = FUN_068dcf78(0);
      }
      FUN_068cf75c(uVar24,uVar42,0);
    }
  }
  else {
    iVar14 = FUN_0675ebb0();
    if (((iVar14 != 1) || ((uVar23 & 1) != 0)) || (*(char *)(unaff_x19 + 0x1a4) == '\0')) {
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
    lVar39 = FUN_067676ac(0);
    if (lVar39 == 0) goto LAB_06762e2c;
    uVar22 = *(undefined4 *)(lVar39 + 0x50);
    FUN_06788be8(uVar22,&stack0x00000630,&stack0x0000062c,0);
    if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06748f48(0,unaff_x19 + 0x2c0,&stack0x00000630,0,1,0,1,
                 *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<VolatileFire>_TypeInfo,0)
    ;
    if (*(long *)(unaff_x19 + 0x220) == 0) goto LAB_06762e2c;
    FUN_06788d74(*(long *)(unaff_x19 + 0x220),*(undefined8 *)(unaff_x19 + 0x278),
                 *(undefined8 *)(unaff_x19 + 0x2c0),uVar22,0);
    FUN_067295d4();
  }
  if ((uVar23 >> 0x28 & 1) != 0) {
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
  if ((uVar19 & 1) != 0) {
    FUN_067295d4();
  }
  uVar37 = 0;
  if (bVar10 != 0) {
    uVar37 = 3;
  }
  if (uVar13 != 0) {
    if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06762e2c;
    if (499 < *(int *)(*(long *)(unaff_x19 + 0x218) + 0x10)) {
      if (iVar50 < 2) {
        uVar37 = 0;
      }
      else {
        if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar37 = FUN_0674de10(0);
        uVar37 = uVar37 & 1;
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_06762e2c;
  FUN_0671e2d0(*(long *)(unaff_x19 + 0x230),1 < iVar50 & bVar10,0,0);
  if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_06762e2c;
  FUN_0671e408(*(long *)(unaff_x19 + 0x230),uVar37,0);
  FUN_067295d4();
  FUN_067295d4();
  uVar13 = FUN_06770690(plVar1,0);
  uVar37 = FUN_0676cdd8(plVar1,0);
  if (((uVar13 & 1) != 0) && ((uVar37 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x260) == 0) goto LAB_06762e2c;
    FUN_06736864(*(long *)(unaff_x19 + 0x260),plVar1,0x18,0);
    FUN_067295d4();
  }
  bVar12 = unaff_x20[0x35] != 0 & bVar10;
  if ((bVar11 & bVar10) == 0) {
LAB_06762a14:
    bVar40 = false;
  }
  else if ((*(int *)((long)unaff_x20 + 0x1c4) == 1) ||
          (((int)unaff_x20[0x2d] == 1 && (*(int *)((long)unaff_x20 + 0x16c) != 0)))) {
    bVar40 = true;
  }
  else {
    uVar23 = FUN_0676c0e0(plVar1,0);
    if ((uVar23 & 1) == 0) goto LAB_06762a14;
    bVar40 = 0.0 < *(float *)((long)unaff_x20 + 0x214);
  }
  bVar11 = bVar40 ^ 1;
  if (bVar12 != 0 || lVar30 != 0) {
    bVar11 = 0;
  }
  if (*(long *)(unaff_x19 + 0xe0) == 0) {
    uVar41 = 1;
  }
  else {
    uVar41 = FUN_0670f6ac(*(long *)(unaff_x19 + 0xe0),plVar1,0);
    uVar41 = ~uVar41 & 1;
  }
  plVar1 = (long *)(unaff_x19 + 0x278);
  plVar27 = (long *)(unaff_x19 + 0x288);
  if (uVar15 == 0) {
    if (bVar10 == 0) {
      return;
    }
    FUN_067600e4();
  }
  else {
    uVar22 = FUN_068e3d08(&stack0x00000890,0);
    if (*(int *)(*(long *)OVRTask<bool[]>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)OVRTask<bool[]>_TypeInfo);
    }
    in_stack_00000180 = uVar28;
    in_stack_00000188 = lVar46;
    in_stack_00000190 = lVar47;
    in_stack_00000198 = lVar48;
    in_stack_000001a0 = lVar44;
    in_stack_000001a8 = lVar45;
    in_stack_000001b0 = (int)lVar31;
    FUN_0673d3c8(&stack0x000001c0,&stack0x00000180,uVar28 & 0xffffffff,(int)(uVar28 >> 0x20),uVar22,
                 0,0);
    if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06748f48(0,unaff_x19 + 0x368,&stack0x00000570,0,1,0,1,
                 *(undefined8 *)OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo,0);
    if (bVar10 == 0) {
      if (*(long *)(unaff_x19 + 0x358) == 0) goto LAB_06762e2c;
      FUN_0673ac68(*(long *)(unaff_x19 + 0x358),&stack0x00000890,plVar1,0,plVar27,&stack0x00000670,
                   unaff_x19 + 0x2c8,0);
      goto LAB_06760c28;
    }
    FUN_067600e4();
    if (*(long *)(unaff_x19 + 0x358) == 0) goto LAB_06762e2c;
    FUN_0673ac68(*(long *)(unaff_x19 + 0x358),&stack0x00000890,plVar1,bVar11,plVar27,
                 &stack0x00000670,unaff_x19 + 0x2c8,bVar40);
    FUN_067295d4();
  }
  lVar39 = *plVar1;
  if (bVar40 != false) {
    if (*(long *)(unaff_x19 + 0x360) == 0) goto LAB_06762e2c;
    FUN_0673adb0(*(long *)(unaff_x19 + 0x360),&stack0x00000568,1,uVar41,0);
    FUN_067295d4();
  }
  if (unaff_x20[0x35] != 0) {
    FUN_067295d4();
  }
  if ((bVar40 == false) && (((uVar15 == 0 || (lVar30 != 0)) || (bVar12 != 0)))) {
    lVar43 = *plVar1;
    if (lVar43 == 0) goto LAB_06762e2c;
    lVar30 = *(long *)(unaff_x19 + 0x298);
    if (lVar30 == 0) goto LAB_06762e2c;
    in_stack_00000128 = *(undefined8 *)(lVar30 + 0x30);
    in_stack_00000120 = *(undefined8 *)(lVar30 + 0x28);
    in_stack_00000138 = *(undefined8 *)(lVar30 + 0x40);
    in_stack_00000130 = *(undefined8 *)(lVar30 + 0x38);
    in_stack_00000140 = *(undefined8 *)(lVar30 + 0x48);
    in_stack_00000150 = *(undefined8 *)(lVar43 + 0x28);
    in_stack_00000158 = *(undefined8 *)(lVar43 + 0x30);
    in_stack_00000160 = *(undefined8 *)(lVar43 + 0x38);
    in_stack_00000168 = *(undefined8 *)(lVar43 + 0x40);
    in_stack_00000170 = *(undefined8 *)(lVar43 + 0x48);
    uVar23 = FUN_0691198c(&stack0x00000150,&stack0x00000120,0);
    if ((uVar23 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x240) == 0) goto LAB_06762e2c;
      in_stack_000000e0 = uVar28;
      in_stack_000000e8 = lVar46;
      in_stack_000000f0 = lVar47;
      in_stack_000000f8 = lVar48;
      in_stack_00000100 = lVar44;
      in_stack_00000108 = lVar45;
      in_stack_00000110 = (int)lVar31;
      FUN_0678f410(*(long *)(unaff_x19 + 0x240),&stack0x000000e0,lVar39,0);
      FUN_067295d4();
    }
  }
  if (((uVar37 | uVar13 ^ 0xffffffff) & 1) == 0) {
    FUN_067295d4();
  }
  if (unaff_x20[0x32] != 0) {
    uVar28 = FUN_0663aecc(unaff_x20[0x32],0);
    if ((uVar28 & 1) == 0) {
      return;
    }
    lVar31 = *plVar27;
    if (lVar31 != 0) {
      lVar39 = unaff_x20[0x32];
      if (lVar39 != 0) {
        in_stack_00000088 = *(undefined8 *)(lVar39 + 0x38);
        in_stack_00000080 = *(undefined8 *)(lVar39 + 0x30);
        in_stack_00000098 = *(undefined8 *)(lVar39 + 0x48);
        in_stack_00000090 = *(undefined8 *)(lVar39 + 0x40);
        in_stack_000000a0 = *(undefined8 *)(lVar39 + 0x50);
        in_stack_000000b0 = *(undefined8 *)(lVar31 + 0x28);
        in_stack_000000b8 = *(undefined8 *)(lVar31 + 0x30);
        in_stack_000000c0 = *(undefined8 *)(lVar31 + 0x38);
        in_stack_000000c8 = *(undefined8 *)(lVar31 + 0x40);
        in_stack_000000d0 = *(undefined8 *)(lVar31 + 0x48);
        uVar28 = FUN_0691198c(&stack0x000000b0,&stack0x00000080,0);
        if ((uVar28 & 1) != 0) {
          return;
        }
        if (unaff_x20[0x32] != 0) {
          if (*(char *)(unaff_x20[0x32] + 0x20) == '\0') {
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


