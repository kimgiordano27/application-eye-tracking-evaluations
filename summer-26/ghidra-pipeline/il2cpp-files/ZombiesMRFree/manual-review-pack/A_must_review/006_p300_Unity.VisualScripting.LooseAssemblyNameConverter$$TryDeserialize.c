/*
FUNCTION_NAME: Unity.VisualScripting.LooseAssemblyNameConverter$$TryDeserialize
ENTRY_POINT: 06760a2c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 178
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_VisualScripting_LooseAssemblyNameConverter__TryDeserialize(long param_1)

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  long *plVar26;
  uint uVar27;
  long lVar28;
  long unaff_x19;
  long unaff_x20;
  uint uVar29;
  long lVar30;
  undefined8 *puVar31;
  long lVar32;
  long lVar33;
  uint uVar34;
  uint uVar35;
  long unaff_x24;
  bool bVar36;
  uint uVar37;
  undefined8 uVar38;
  undefined8 unaff_x26;
  long lVar39;
  long unaff_x28;
  undefined1 auVar40 [16];
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
  
  uVar21 = *(undefined4 *)(unaff_x20 + 0x158);
  uVar2 = *(undefined4 *)(unaff_x20 + 0x15c);
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0670fa48(&stack0x00000810,uVar21,uVar2,0);
  if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06762e2c;
  uVar22 = FUN_0670f694(*(long *)(unaff_x19 + 0xe0),0);
  if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo);
  }
  FUN_06748f48(0,uVar22,&stack0x00000810,0,0,0,1,
               *(undefined8 *)OVRTask<OVRSceneManager_Metrics>_TypeInfo,0);
  FUN_0670fa94(&stack0x000007d0,0x18,*(undefined4 *)(unaff_x20 + 0x158),
               *(undefined4 *)(unaff_x20 + 0x15c),0);
  if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06762e2c;
  uVar22 = FUN_0670f69c(*(long *)(unaff_x19 + 0xe0),0);
  FUN_06748f48(0,uVar22,&stack0x000007d0,0,0,0,1,*(undefined8 *)OVRTask<OVRPlugin_Result>_TypeInfo,0
              );
  if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06762e2c;
  uVar23 = FUN_0670f6ac();
  if ((uVar23 & 1) != 0) {
    lVar28 = *(long *)(unaff_x19 + 0xe0);
    if ((((lVar28 == 0) || (*(long *)(lVar28 + 0x78) == 0)) ||
        (*(long *)(*(long *)(lVar28 + 0x78) + 0x30) == 0)) ||
       ((*(long *)(lVar28 + 0x20) == 0 || (FUN_06738814(), *(long *)(unaff_x19 + 0xe0) == 0))))
    goto LAB_06762e2c;
    FUN_067295d4();
  }
  puVar6 = System_Collections_Generic_List<TweenBase>_TypeInfo;
  if (*(int *)(unaff_x20 + 0x180) != 1) {
    *(undefined1 *)(unaff_x19 + 0x1a4) = 0;
  }
  bVar9 = FUN_06760480();
  *(byte *)(unaff_x19 + 0x1a5) = bVar9 & 1;
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar23 = FUN_067603f4();
  if ((uVar23 & 1) != 0) {
    if (*(int *)(*(long *)OVRTask<List<OVRSceneManager_Metrics>>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06725e18();
    FUN_067288e0();
    FUN_067295d4();
    goto LAB_06760c28;
  }
  uVar12 = FUN_0676dfd8();
  if (*(long *)(unaff_x19 + 0x108) == 0) goto LAB_06762e2c;
  if ((*(int *)(*(long *)(unaff_x19 + 0x108) + 0x18) == 0) ||
     (((uint)(*(int *)(unaff_x19 + 0x310) == 1) & (uVar12 ^ 0xffffffff)) == 0)) {
    if (*(int *)(*(long *)PTR_DAT_06f6dcf0 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar23 = FUN_068b8dd0(0);
    if ((uVar23 & 1) == 0) {
      uVar34 = 0;
    }
    else {
      uVar34 = (uint)*(byte *)(unaff_x19 + 0x1a8);
    }
  }
  else {
    uVar34 = 1;
  }
  auVar40 = FUN_06762ec4();
  uVar23 = auVar40._0_8_;
  bVar9 = FUN_0674b86c();
  bVar10 = FUN_06760694();
  bVar9 = bVar9 & (bVar10 ^ 1);
  if (((bVar9 & 1) == 0) || (iVar13 = FUN_0675ebb0(), iVar13 == 1)) {
    uStack0000000000000064 = 0;
LAB_06760d24:
    uVar37 = auVar40._2_4_ & 1;
    bVar36 = false;
  }
  else {
    uStack0000000000000064 = 1;
    if (in_stack_0000088c != 0) {
      if (in_stack_0000088c != 1) {
        thunk_FUN_03037804(PTR_DAT_06f7a510);
        uVar22 = thunk_FUN_0301080c();
        FUN_05a66294(uVar22,0);
        uVar38 = thunk_FUN_03037804(Unity_Entities_TypeManager_SharedTypeIndex<VrGuiInput>_TypeInfo)
        ;
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar22,uVar38);
      }
      goto LAB_06760d24;
    }
    bVar36 = true;
    uStack0000000000000064 = 0;
    uVar37 = 1;
  }
  lVar28 = *(long *)(unaff_x19 + 0x2e0);
  if (lVar28 != 0) {
    *(byte *)(lVar28 + 0x14) = bVar9 & 1;
    *(undefined4 *)(lVar28 + 0x10) = in_stack_00000888;
    *(char *)(lVar28 + 0x17) = (char)uVar37;
    FUN_06779d44();
    lVar28 = *(long *)(unaff_x19 + 0x2e0);
    if (lVar28 == 0) goto LAB_06762e2c;
    *(bool *)(lVar28 + 0x19) = *(int *)(unaff_x20 + 0xe0) == 1;
    if (*(char *)(lVar28 + 0x15) != '\0') {
      if (*(long *)(unaff_x19 + 0x100) == 0) goto LAB_06762e2c;
      FUN_04430ce4(&stack0x00000530,*(long *)(unaff_x19 + 0x100),
                   *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<MeshCombiner>_TypeInfo)
      ;
      puVar6 = Unity_Entities_TypeManager_SharedTypeIndex<MenuSound>_TypeInfo;
      do {
        uVar24 = FUN_05506d10(&stack0x000007b0,*(undefined8 *)puVar6);
        if ((uVar24 & 1) == 0) goto LAB_06760dec;
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
  if (*(char *)(unaff_x20 + 0x1a0) == '\0') {
    uVar14 = 0;
  }
  else {
    uVar14 = FUN_06743114(unaff_x19 + 0x350,0);
    uVar14 = uVar14 & 1;
  }
  if (*(char *)(unaff_x20 + 0x2b4) == '\0') {
    bVar10 = 0;
    if (uVar14 == 0) goto LAB_06760e50;
Unity_VisualScripting_NamespaceConverter___ctor:
    cVar3 = *(char *)(unaff_x20 + 0x189);
  }
  else {
    bVar10 = FUN_06743114(unaff_x19 + 0x350,0);
    bVar10 = bVar10 & 1;
    if (uVar14 != 0) goto Unity_VisualScripting_NamespaceConverter___ctor;
LAB_06760e50:
    cVar3 = '\0';
  }
  if (*(char *)(unaff_x20 + 0x1a0) == '\0') {
    uStack0000000000000034 = 0;
  }
  else {
    uStack0000000000000034 = FUN_06743114(unaff_x19 + 0x350,0);
  }
  uVar24 = FUN_0676aaf4();
  if ((uVar24 & 1) == 0) {
    uVar15 = FUN_0676dfd8();
    uVar15 = uVar15 & 1;
  }
  else {
    uVar15 = 1;
  }
  bVar7 = true;
  if (((uVar23 & 1) == 0) && (*(char *)(unaff_x20 + 0x187) == '\0')) {
    bVar7 = *(int *)(unaff_x19 + 0x2ec) == 2;
  }
  if (*(long *)(unaff_x19 + 0x1d0) == 0) goto LAB_06762e2c;
  uVar16 = FUN_06792914();
  if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_06762e2c;
  uVar17 = FUN_06780188(*(long *)(unaff_x19 + 0x1d8));
  if (*(long *)(unaff_x19 + 0x228) == 0) goto LAB_06762e2c;
  uVar18 = FUN_067428e4(*(long *)(unaff_x19 + 0x228),0);
  bVar11 = 0;
  if (bVar7 || cVar3 != '\0') {
    iVar13 = *(int *)(unaff_x19 + 0x2f0);
    bVar11 = FUN_06760564();
    bVar11 = iVar13 == 2 | (bVar11 ^ 0xff) & 1;
  }
  if (((((uVar12 | auVar40._0_4_ >> 8) & 1) == 0 && uVar37 == 0) && uVar15 == 0) && bVar11 == 0) {
    uVar35 = 0;
  }
  else {
    iVar13 = FUN_0675ebb0();
    uVar35 = iVar13 != 1 | uVar37;
  }
  cVar4 = *(char *)(unaff_x19 + 0x1a5);
  if (bVar7) {
    lVar28 = *(long *)(unaff_x19 + 0x218);
    iVar13 = auVar40._12_4_ + -1;
    iVar20 = 500;
    if (*(int *)(unaff_x19 + 0x2f0) != 1) {
      iVar20 = 300;
    }
    if (499 < iVar13) {
      iVar13 = 500;
    }
    if ((uVar23 & 1) != 0) {
      iVar20 = iVar13;
    }
    if (lVar28 == 0) goto LAB_06762e2c;
    *(int *)(lVar28 + 0x10) = iVar20;
    if (iVar20 < 500) {
      *(undefined1 *)(lVar28 + 0x100) = 0;
      *(undefined4 *)(unaff_x19 + 0x2f0) = 0;
    }
    bVar7 = true;
  }
  else if (uVar15 == 0 && cVar3 == '\0') {
    bVar7 = false;
  }
  else {
    if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06762e2c;
    bVar7 = false;
    *(undefined4 *)(*(long *)(unaff_x19 + 0x218) + 0x10) = 500;
  }
  uVar19 = FUN_067630e0();
  bVar11 = *(byte *)(unaff_x20 + 0x1d8);
  iVar13 = FUN_0675ebb0();
  if (iVar13 == 1) {
    uVar27 = *(byte *)(unaff_x19 + 0x1a4) ^ 1;
  }
  else {
    uVar27 = 0;
  }
  if (*(long *)(unaff_x20 + 400) == 0) goto LAB_06762e2c;
  uVar29 = auVar40._3_4_;
  uVar35 = uVar35 | cVar4 != '\0';
  uVar5 = bVar11 ^ 1 | (uint)(cVar3 != '\0' || bVar7) & (uVar35 ^ 1) | uStack0000000000000064 |
          uVar27 | (uint)*(byte *)(unaff_x19 + 0x1a5);
  uVar24 = FUN_0663aecc(*(long *)(unaff_x20 + 400),0);
  uVar27 = uVar5;
  if ((uVar24 & 1) == 0) {
    uVar27 = 0;
  }
  uVar27 = uVar27 | (uVar34 | uVar29 | auVar40._4_4_ | uVar19) & ~uVar12 & 1;
  iVar13 = FUN_069005b0(0);
  puVar6 = UnityEngine_UIElements_EventBase<PointerOutEvent>_TypeInfo;
  if ((iVar13 != 0x15) || (*(char *)(unaff_x19 + 0x314) != '\0')) {
    uVar27 = uVar5 | uVar27 != 0;
  }
  bVar7 = uVar27 != 0;
  if (*(int *)(*(long *)UnityEngine_UIElements_EventBase<PointerOutEvent>_TypeInfo + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0668d7c0(&stack0x00000530,0);
  if ((float)in_stack_00000550 == 1.0) {
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_0668d7c0(&stack0x00000530,0);
    if ((float)((ulong)in_stack_00000550 >> 0x20) != 1.0) goto LAB_067611a0;
  }
  else {
LAB_067611a0:
    bVar7 = uVar5 != 0 || bVar7;
  }
  if ((*(char *)(unaff_x19 + 0x1a4) != '\0') || (*(char *)(unaff_x19 + 0x1a5) != '\0')) {
    bVar7 = uVar5 != 0 || bVar7;
  }
  FUN_068e47d0(&stack0x00000850,0,0);
  FUN_068e47ec(&stack0x00000850,0,0);
  FUN_068e41c8(&stack0x00000850,0,0);
  if (*(long *)(unaff_x19 + 0x270) == 0) goto LAB_06762e2c;
  plVar26 = (long *)(unaff_x19 + 0x270);
  FUN_06794af0(*(long *)(unaff_x19 + 0x270),&stack0x000004f0,1,0);
  if (*(int *)(unaff_x20 + 0xe0) == 0) {
    if (unaff_x24 == 0) goto LAB_06762e2c;
    iVar13 = FUN_068bba14(unaff_x24,0);
    bVar8 = uVar5 != 0 || bVar7;
    FUN_06911464(&stack0x00000530,2,0);
    if ((*(long *)(unaff_x20 + 400) == 0) ||
       ((uVar24 = FUN_0663aecc(*(long *)(unaff_x20 + 400),0), (uVar24 & 1) != 0 &&
        (*(long *)(unaff_x20 + 400) == 0)))) goto LAB_06762e2c;
    puVar31 = (undefined8 *)(unaff_x19 + 0x298);
    if (*(long *)(unaff_x19 + 0x298) == 0) {
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar22 = FUN_0668cb3c(&stack0x000004c0,0);
      *puVar31 = uVar22;
      thunk_FUN_03048534(puVar31,uVar22);
    }
    else {
      uVar24 = FUN_069119bc(&stack0x00000490,&stack0x00000460,0);
      if ((uVar24 & 1) != 0) {
        FUN_0668cc1c(puVar31,&stack0x00000430,0);
      }
    }
    if (bVar8 && iVar13 != 1) {
      FUN_0676329c();
      iVar20 = FUN_069005b0(0);
      if (iVar20 == 2) {
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
    bVar1 = uVar5 == 0 && !bVar7 || iVar13 == 1;
    *(bool *)(*(long *)(unaff_x19 + 0x200) + 0x181) = bVar1;
    if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_06762e2c;
    *(bool *)(*(long *)(unaff_x19 + 0x230) + 0x181) = bVar1;
    if (*(long *)(unaff_x19 + 0x210) == 0) goto LAB_06762e2c;
    *(bool *)(*(long *)(unaff_x19 + 0x210) + 0xe0) = bVar1;
    if (*(long *)(unaff_x19 + 0x250) == 0) goto LAB_06762e2c;
    *(bool *)(*(long *)(unaff_x19 + 0x250) + 0xe8) = bVar1;
    if (bVar7) {
      if (*plVar26 == 0) goto LAB_06762e2c;
      uVar22 = FUN_067946d0(*plVar26,0);
    }
    else {
      uVar22 = *puVar31;
    }
    *(undefined8 *)(unaff_x19 + 0x278) = uVar22;
    thunk_FUN_03048534(unaff_x19 + 0x278);
    lVar28 = 0x290;
    if (uVar5 == 0 && !bVar7) {
      lVar28 = 0x298;
    }
    *(undefined8 *)(unaff_x19 + 0x288) = *(undefined8 *)(unaff_x19 + lVar28);
    thunk_FUN_03048534(unaff_x19 + 0x288);
  }
  else {
    if (((*(long *)(unaff_x20 + 0x220) == 0) ||
        (FUN_03bbf6cc(*(long *)(unaff_x20 + 0x220),&stack0x00000778,
                      *(undefined8 *)
                       OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                     ), in_stack_00000778 == 0)) ||
       (plVar25 = (long *)FUN_0675da60(), plVar25 == (long *)0x0)) goto LAB_06762e2c;
    if (*plVar25 != *(long *)System_Collections_Generic_List<TweenBase>_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(plVar25);
    }
    lVar28 = *plVar26;
    if (lVar28 != plVar25[0x4e]) {
      if (lVar28 == 0) goto LAB_06762e2c;
      UnityEngine_AndroidJNI__CallObjectMethod(lVar28,0);
      *plVar26 = plVar25[0x4e];
      thunk_FUN_03048534(plVar26);
      lVar28 = *plVar26;
    }
    if (lVar28 == 0) goto LAB_06762e2c;
    uVar22 = FUN_067946d0(lVar28,0);
    *(undefined8 *)(unaff_x19 + 0x278) = uVar22;
    thunk_FUN_03048534(unaff_x19 + 0x278);
    *(long *)(unaff_x19 + 0x288) = plVar25[0x51];
    thunk_FUN_03048534(unaff_x19 + 0x288);
    *(long *)(unaff_x19 + 0x298) = plVar25[0x53];
    thunk_FUN_03048534(unaff_x19 + 0x298);
    bVar8 = uVar5 != 0;
  }
  if (*(long *)(unaff_x19 + 0x108) == 0) goto LAB_06762e2c;
  if ((uVar12 & 1) == 0 && *(int *)(*(long *)(unaff_x19 + 0x108) + 0x18) != 0) {
    if (*plVar26 == 0) goto LAB_06762e2c;
    FUN_067946d0(*plVar26,0);
    FUN_06726080();
  }
  if (*(char *)(unaff_x20 + 0x188) != '\0') {
    uVar29 = 1;
  }
  FUN_06725e18();
  puVar6 = Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
  lVar33 = *(long *)(unaff_x19 + 0x100);
  lVar28 = *(long *)Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
  if (*(int *)(lVar28 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar28 = *(long *)puVar6;
  }
  lVar30 = *(long *)(*(long *)(lVar28 + 0xb8) + 8);
  if (lVar30 == 0) {
    if (*(int *)(lVar28 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar28 = *(long *)puVar6;
    }
    uVar22 = **(undefined8 **)(lVar28 + 0xb8);
    lVar30 = thunk_FUN_0301080c(*(undefined8 *)OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_TypeInfo);
    FUN_0494bc5c(lVar30,uVar22,
                 *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<VRVideoPlayer>_TypeInfo,0
                );
    plVar26 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8);
    *plVar26 = lVar30;
    thunk_FUN_03048534(plVar26,lVar30);
  }
  if (lVar33 == 0) goto LAB_06762e2c;
  lVar28 = FUN_04430950(lVar33,lVar30,
                        *(undefined8 *)
                         OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo);
  if ((uVar16 & 1) != 0) {
    FUN_067295d4();
  }
  if ((uVar17 & 1) != 0) {
    FUN_067295d4();
  }
  uVar29 = uVar29 & ~uVar12 & 1;
  if (uVar35 == 0) {
    uVar12 = auVar40._0_4_ & 1;
    if (cVar3 != '\0' || *(char *)(unaff_x20 + 0x187) != '\0') {
      uVar12 = 1;
    }
  }
  else {
    uVar12 = 0;
  }
  bVar7 = uVar29 != 0;
  uVar12 = uVar12 & bVar8;
  if ((*(long *)(unaff_x19 + 0xe0) != 0) &&
     (uVar24 = FUN_0670f9b0(*(long *)(unaff_x19 + 0xe0),unaff_x26,0), (uVar24 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06762e2c;
    FUN_0670f9f0(*(long *)(unaff_x19 + 0xe0),&stack0x00000774,0);
    if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06762e2c;
    uVar35 = uVar35 | in_stack_00000774 == 1;
    uVar24 = FUN_0670f5d4(*(long *)(unaff_x19 + 0xe0),0);
    if (((uVar24 & 1) == 0) && (uVar15 == 0)) {
      uVar12 = 0;
      uVar29 = 0;
      uVar35 = 0;
      uStack0000000000000034 = 0;
      *(undefined1 *)(unaff_x19 + 0x1a5) = 0;
    }
    bVar7 = uVar29 != 0;
    if (*(char *)(unaff_x19 + 0x1a4) != '\0') {
      if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06762e2c;
      bVar11 = FUN_0670f728(*(long *)(unaff_x19 + 0xe0),0);
      *(byte *)(unaff_x19 + 0x1a4) = bVar11 & 1;
    }
  }
  if (*(long *)(unaff_x20 + 0x1d0) == 0) goto LAB_06762e2c;
  *(undefined1 *)(*(long *)(unaff_x20 + 0x1d0) + 0x1a5) = *(undefined1 *)(unaff_x19 + 0x1a5);
  iVar13 = FUN_0675ebb0();
  iVar20 = auVar40._8_4_;
  if (iVar13 == 1) {
    lVar33 = *(long *)(unaff_x19 + 0x2e0);
    if (lVar33 == 0) goto LAB_06762e2c;
    if ((*(char *)(lVar33 + 0x15) != '\0') &&
       ((iVar20 == 0xdc || (*(char *)(unaff_x19 + 0x1a4) == '\0')))) {
      FUN_0677a1bc(lVar33,0);
    }
  }
  iVar13 = FUN_0675ebb0();
  if (iVar13 == 1) {
    bVar11 = *(byte *)(unaff_x19 + 0x1a4) ^ 1;
  }
  else {
    bVar11 = 0;
  }
  if (bVar11 != 0 || (uVar35 != 0 || uVar12 != 0)) {
    if ((uVar35 == 0) || (iVar13 = FUN_0675ebb0(), iVar13 == 1)) {
      if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar24 = FUN_0674ac30(0x31,4,0);
      if ((uVar24 & 1) == 0) goto LAB_0676191c;
      uVar21 = 0;
      uVar22 = 0x31;
    }
    else {
LAB_0676191c:
      uVar22 = 0;
      uVar21 = 0x18;
    }
    FUN_068e40b4(&stack0x00000740,uVar22,0);
    FUN_068e41c8(&stack0x00000740,uVar21,0);
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
  if ((bVar9 & 1) == 0) {
    iVar13 = FUN_0675ebb0();
    if (iVar13 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar24 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar24 & 1) != 0) goto LAB_06761a24;
    }
  }
  else {
LAB_06761a24:
    plVar26 = (long *)(unaff_x19 + 0x2b8);
    uVar22 = *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<VibrationManager>_TypeInfo;
    iVar13 = FUN_0675ebb0();
    if (iVar13 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar24 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar24 & 1) != 0) {
        lVar33 = *(long *)(unaff_x19 + 0x2e0);
        if (lVar33 == 0) goto LAB_06762e2c;
        lVar30 = *(long *)(lVar33 + 0x30);
        uVar34 = FUN_06778ac8(lVar33,0);
        if (lVar30 == 0) goto LAB_06762e2c;
        if (*(uint *)(lVar30 + 0x18) <= uVar34) goto LAB_06762e3c;
        plVar26 = (long *)(lVar30 + (long)(int)uVar34 * 8 + 0x20);
        if (*plVar26 == 0) goto LAB_06762e2c;
        uVar22 = *(undefined8 *)(*plVar26 + 0x58);
      }
    }
    FUN_068e41c8(&stack0x00000700,0,0);
    iVar13 = FUN_0675ebb0();
    if (iVar13 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar24 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar24 & 1) == 0) goto LAB_06761b44;
      lVar33 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar33 == 0) goto LAB_06762e2c;
      uVar21 = FUN_06778ac8(lVar33,0);
      uVar21 = FUN_06778be0(lVar33,uVar21,0);
    }
    else {
LAB_06761b44:
      uVar21 = FUN_0674bc74(in_stack_00000888,0);
    }
    FUN_068e40b4(&stack0x00000700,uVar21,0);
    iVar13 = FUN_0675ebb0();
    if (iVar13 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar24 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar24 & 1) == 0) goto LAB_06761bec;
      lVar33 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar33 == 0) goto LAB_06762e2c;
      uVar21 = FUN_06778ac8(lVar33,0);
      FUN_0677a264(lVar33,&stack0x00000340,uVar21,0);
    }
    else {
LAB_06761bec:
      if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_06748f48(0,plVar26,&stack0x00000700,0,1,0,1,uVar22,0);
    }
    if ((*plVar26 == 0) || (unaff_x28 == 0)) goto LAB_06762e2c;
    FUN_06916814();
    FUN_0674bb60();
    iVar13 = FUN_0675ebb0();
    if (iVar13 == 1) {
      if (*plVar26 == 0) goto LAB_06762e2c;
      FUN_06916814();
    }
    if (*(int *)(*(long *)PTR_DAT_06f988b8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_0691ff78(&stack0x000008c8);
    FUN_0691250c();
  }
  if ((uVar37 & uVar35) == 1) {
    uVar22 = *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<Voxelize>_TypeInfo;
    iVar13 = FUN_0675ebb0();
    if (iVar13 == 1) {
      lVar33 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar33 == 0) goto LAB_06762e2c;
      lVar30 = *(long *)(lVar33 + 0x30);
      uVar34 = FUN_06778aa4(lVar33,0);
      if (lVar30 == 0) goto LAB_06762e2c;
      if (*(uint *)(lVar30 + 0x18) <= uVar34) goto LAB_06762e3c;
      plVar26 = (long *)(lVar30 + (long)(int)uVar34 * 8 + 0x20);
      if (*plVar26 == 0) goto LAB_06762e2c;
      uVar22 = *(undefined8 *)(*plVar26 + 0x58);
    }
    else {
      plVar26 = (long *)(unaff_x19 + 0x2b0);
    }
    FUN_068e41c8(&stack0x000006c0,0,0);
    iVar13 = FUN_0675ebb0();
    if (iVar13 == 1) {
      lVar33 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar33 == 0) goto LAB_06762e2c;
      uVar21 = FUN_06778aa4(lVar33,0);
      uVar21 = FUN_06778be0(lVar33,uVar21,0);
    }
    else {
      if (*(int *)(*(long *)Unity_Entities_TypeManager_SharedTypeIndex<VRIK>_TypeInfo + 0xe0) == 0)
      {
        thunk_FUN_02fdcff0();
      }
      uVar21 = FUN_0678bcb0(0);
    }
    FUN_068e40b4(&stack0x000006c0,uVar21,0);
    iVar13 = FUN_0675ebb0();
    if (iVar13 == 1) {
      lVar33 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar33 == 0) goto LAB_06762e2c;
      uVar21 = FUN_06778aa4(lVar33,0);
      FUN_0677a264(lVar33,&stack0x000002a0,uVar21,0);
    }
    else {
      if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_06748f48(0,plVar26,&stack0x000006c0,0,1,0,1,uVar22,0);
    }
    if ((*plVar26 == 0) || (unaff_x28 == 0)) goto LAB_06762e2c;
    FUN_06916814();
    iVar13 = FUN_0675ebb0();
    if (iVar13 == 1) {
      if (*plVar26 == 0) goto LAB_06762e2c;
      FUN_06916814();
    }
    if (*(int *)(*(long *)PTR_DAT_06f988b8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_0691ff78(&stack0x000008c8);
    FUN_0691250c();
  }
  if (uVar35 != 0) {
    iVar13 = FUN_0675ebb0();
    if (uVar37 == 0) {
      if (iVar13 == 1) goto LAB_06762190;
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_06762e2c;
      FUN_0678ce44(*(long *)(unaff_x19 + 0x1b0),&stack0x00000200,*(undefined8 *)(unaff_x19 + 0x2a8),
                   0);
    }
    else if (iVar13 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar34 = FUN_06778aa4(*(long *)(unaff_x19 + 0x2e0),0);
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar24 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
      lVar33 = *(long *)(unaff_x19 + 0x2e0);
      if ((lVar33 == 0) || (lVar30 = *(long *)(lVar33 + 0x30), lVar30 == 0)) goto LAB_06762e2c;
      if (*(uint *)(lVar30 + 0x18) <= uVar34) {
LAB_06762e3c:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar39 = *(long *)(unaff_x19 + 0x1b8);
      uVar22 = *(undefined8 *)(unaff_x19 + 0x288);
      uVar38 = *(undefined8 *)(lVar30 + (long)(int)uVar34 * 8 + 0x20);
      if ((uVar24 & 1) == 0) {
        if (bVar36) {
          if (lVar39 == 0) goto LAB_06762e2c;
          FUN_0678bd80(lVar39,uVar22,uVar38,*(undefined8 *)(unaff_x19 + 0x2b8),0);
        }
        else {
          if (lVar39 == 0) goto LAB_06762e2c;
          FUN_0678bd48(lVar39,uVar22,uVar38,0);
        }
      }
      else {
        uVar34 = FUN_06778ac8(lVar33,0);
        if (*(uint *)(lVar30 + 0x18) <= uVar34) goto LAB_06762e3c;
        if (lVar39 == 0) goto LAB_06762e2c;
        FUN_0678bd80(lVar39,uVar22,uVar38,*(undefined8 *)(lVar30 + (long)(int)uVar34 * 8 + 0x20),0);
      }
      puVar6 = System_Collections_Generic_List<TweenBase>_TypeInfo;
      if (iVar20 - 0xdcU < 0x1f) {
        lVar30 = *(long *)(unaff_x19 + 0x1b8);
        lVar33 = *(long *)System_Collections_Generic_List<TweenBase>_TypeInfo;
        if (*(int *)(lVar33 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
          lVar33 = *(long *)puVar6;
        }
        if (lVar30 == 0) goto LAB_06762e2c;
        puVar31 = (undefined8 *)(lVar30 + 0xe0);
        *puVar31 = **(undefined8 **)(lVar33 + 0xb8);
        thunk_FUN_03048534(puVar31);
      }
    }
    else {
      lVar33 = *(long *)(unaff_x19 + 0x1b8);
      if (bVar36) {
        if (lVar33 == 0) goto LAB_06762e2c;
        FUN_0678bd80();
      }
      else {
        if (lVar33 == 0) goto LAB_06762e2c;
        FUN_0678bd48(lVar33,*(undefined8 *)(unaff_x19 + 0x2a8),*(undefined8 *)(unaff_x19 + 0x2b0),0)
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
  uVar24 = FUN_0663edb0(*(long *)(unaff_x20 + 400),0);
  if ((uVar24 & 1) != 0) {
    FUN_067295d4();
  }
  bVar9 = *(byte *)(unaff_x20 + 0x1d8);
  iVar13 = FUN_0675ebb0();
  if (iVar13 == 1) {
    lVar33 = *(long *)(unaff_x19 + 0x2e0);
    if (lVar33 == 0) goto LAB_06762e2c;
    if ((*(char *)(lVar33 + 0x15) != '\0') &&
       ((iVar20 == 0xdc || (*(char *)(unaff_x19 + 0x1a4) == '\0')))) {
      FUN_0677a1bc(lVar33,0);
    }
    FUN_067638f4();
  }
  else {
    uVar21 = 2;
    if (!bVar7) {
      uVar21 = 0;
    }
    uVar2 = 0;
    if (1 < in_stack_00000898) {
      uVar2 = uVar21;
    }
    iVar13 = 0;
    if ((!bVar7 && uVar12 == 0) && bVar9 != 0) {
      iVar13 = 3;
    }
    if (*(long *)(unaff_x20 + 400) == 0) goto LAB_06762e2c;
    uVar24 = FUN_0663aecc(*(long *)(unaff_x20 + 400),0);
    if ((uVar24 & 1) != 0) {
      if (*(long *)(unaff_x20 + 400) == 0) goto LAB_06762e2c;
      if (*(char *)(*(long *)(unaff_x20 + 400) + 0x20) != '\0') {
        iVar13 = 0;
      }
    }
    if ((1 < in_stack_00000898) && (uVar12 != 0)) {
      if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar24 = FUN_0674de10(0);
      if ((uVar24 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06762e2c;
        if (!bVar7 && *(int *)(*(long *)(unaff_x19 + 0x218) + 0x10) == 500) {
          if (iVar13 == 0) {
            iVar13 = 2;
          }
          else if (iVar13 == 3) {
            iVar13 = 1;
          }
        }
      }
    }
    if (uStack0000000000000064 == 0) {
      lVar33 = *(long *)(unaff_x19 + 0x200);
    }
    else {
      lVar33 = *(long *)(unaff_x19 + 0x208);
      if (lVar33 == 0) goto LAB_06762e2c;
      FUN_0678d900(lVar33,*(undefined8 *)(unaff_x19 + 0x278),*(undefined8 *)(unaff_x19 + 0x2b8),
                   *(undefined8 *)(unaff_x19 + 0x288),0);
    }
    if (lVar33 == 0) goto LAB_06762e2c;
    FUN_0671e2d0(lVar33,uVar2,0,0);
    FUN_0671e408(lVar33,iVar13,0);
    puVar6 = Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
    lVar39 = *(long *)(unaff_x19 + 0x100);
    lVar30 = *(long *)Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
    if (*(int *)(lVar30 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar30 = *(long *)puVar6;
    }
    lVar32 = *(long *)(*(long *)(lVar30 + 0xb8) + 0x10);
    if (lVar32 == 0) {
      if (*(int *)(lVar30 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar30 = *(long *)Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
      }
      puVar6 = Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
      uVar22 = **(undefined8 **)(lVar30 + 0xb8);
      lVar32 = thunk_FUN_0301080c(*(undefined8 *)OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_TypeInfo)
      ;
      FUN_0494bc5c(lVar32,uVar22,
                   *(undefined8 *)
                    Unity_Entities_TypeManager_SharedTypeIndex<VehicleController>_TypeInfo,0);
      plVar26 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10);
      *plVar26 = lVar32;
      thunk_FUN_03048534(plVar26,lVar32);
    }
    if (lVar39 == 0) goto LAB_06762e2c;
    lVar30 = FUN_04430950(lVar39,lVar32,
                          *(undefined8 *)
                           OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo);
    if ((lVar30 == 0) && (*(int *)(unaff_x20 + 0xe0) == 0)) {
      uVar21 = 1;
    }
    else {
      uVar21 = 0;
    }
    uVar24 = FUN_06900e10(0);
    if ((uVar24 & 1) != 0) {
      FUN_0671ed40(0,0,0,0x3f800000,lVar33,uVar21,0);
    }
    FUN_067295d4();
  }
  if (unaff_x24 == 0) goto LAB_06762e2c;
  iVar13 = FUN_068ba01c(unaff_x24,0);
  if ((iVar13 == 1) && (*(int *)(unaff_x20 + 0xe0) != 1)) {
    uVar22 = FUN_068ced20(0);
    puVar6 = PTR_DAT_06f6d618;
    if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
    }
    uVar24 = FUN_068f8810(uVar22,0,0);
    if ((uVar24 & 1) == 0) {
      uVar24 = FUN_03bbf6cc(unaff_x24,&stack0x00000668,
                            *(undefined8 *)
                             Unity_Entities_TypeManager_SharedTypeIndex<VRUtils>_TypeInfo);
      if ((uVar24 & 1) != 0) {
        if (in_stack_00000668 == 0) goto LAB_06762e2c;
        uVar22 = FUN_068d3d38(in_stack_00000668,0);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*(long *)puVar6);
        }
        uVar24 = FUN_068f8810(uVar22,0,0);
        if ((uVar24 & 1) != 0) goto LAB_06762584;
      }
    }
    else {
LAB_06762584:
      FUN_067295d4();
    }
  }
  if (uVar12 == 0) {
    if (uVar35 == 0 && *(int *)(unaff_x20 + 0xe0) == 0) {
      uVar24 = FUN_06900a10(0);
      uVar22 = *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<TwoDragMe>_TypeInfo;
      if ((uVar24 & 1) == 0) {
        uVar38 = FUN_068dcf50(0);
      }
      else {
        uVar38 = FUN_068dcf78(0);
      }
      FUN_068cf75c(uVar22,uVar38,0);
    }
  }
  else {
    iVar13 = FUN_0675ebb0();
    if (((iVar13 != 1) || ((uVar23 & 1) != 0)) || (*(char *)(unaff_x19 + 0x1a4) == '\0')) {
      if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06762e2c;
      Unity_XR_Oculus_Input_OculusHMD__set_deviceRotation
                (*(long *)(unaff_x19 + 0x218),*(undefined8 *)(unaff_x19 + 0x288),
                 *(undefined8 *)(unaff_x19 + 0x2a8),0);
      FUN_067295d4();
    }
  }
  if (bVar7) {
    if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar33 = FUN_067676ac(0);
    if (lVar33 == 0) goto LAB_06762e2c;
    uVar21 = *(undefined4 *)(lVar33 + 0x50);
    FUN_06788be8(uVar21,&stack0x00000630,&stack0x0000062c,0);
    if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06748f48(0,unaff_x19 + 0x2c0,&stack0x00000630,in_stack_0000062c,1,0,1,
                 *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<VolatileFire>_TypeInfo,0)
    ;
    if (*(long *)(unaff_x19 + 0x220) == 0) goto LAB_06762e2c;
    FUN_06788d74(*(long *)(unaff_x19 + 0x220),*(undefined8 *)(unaff_x19 + 0x278),
                 *(undefined8 *)(unaff_x19 + 0x2c0),uVar21,0);
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
  if ((uVar18 & 1) != 0) {
    FUN_067295d4();
  }
  uVar34 = 0;
  if (bVar9 != 0) {
    uVar34 = 3;
  }
  if (uVar12 != 0) {
    if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06762e2c;
    if (499 < *(int *)(*(long *)(unaff_x19 + 0x218) + 0x10)) {
      if (in_stack_00000898 < 2) {
        uVar34 = 0;
      }
      else {
        if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar34 = FUN_0674de10(0);
        uVar34 = uVar34 & 1;
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_06762e2c;
  FUN_0671e2d0(*(long *)(unaff_x19 + 0x230),1 < in_stack_00000898 & bVar9,0,0);
  if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_06762e2c;
  FUN_0671e408(*(long *)(unaff_x19 + 0x230),uVar34,0);
  FUN_067295d4();
  FUN_067295d4();
  uVar12 = FUN_06770690(unaff_x26,0);
  uVar34 = FUN_0676cdd8(unaff_x26,0);
  if (((uVar12 & 1) != 0) && ((uVar34 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x260) == 0) goto LAB_06762e2c;
    FUN_06736864(*(long *)(unaff_x19 + 0x260),unaff_x26,0x18,0);
    FUN_067295d4();
  }
  bVar11 = *(long *)(unaff_x20 + 0x1a8) != 0 & bVar9;
  if ((bVar10 & bVar9) == 0) {
LAB_06762a14:
    bVar36 = false;
  }
  else if ((*(int *)(unaff_x20 + 0x1c4) == 1) ||
          ((*(int *)(unaff_x20 + 0x168) == 1 && (*(int *)(unaff_x20 + 0x16c) != 0)))) {
    bVar36 = true;
  }
  else {
    uVar23 = FUN_0676c0e0(unaff_x26,0);
    if ((uVar23 & 1) == 0) goto LAB_06762a14;
    bVar36 = 0.0 < *(float *)(unaff_x20 + 0x214);
  }
  bVar10 = bVar36 ^ 1;
  if (bVar11 != 0 || lVar28 != 0) {
    bVar10 = 0;
  }
  if (*(long *)(unaff_x19 + 0xe0) == 0) {
    uVar37 = 1;
  }
  else {
    uVar37 = FUN_0670f6ac(*(long *)(unaff_x19 + 0xe0),unaff_x26,0);
    uVar37 = ~uVar37 & 1;
  }
  plVar26 = (long *)(unaff_x19 + 0x278);
  plVar25 = (long *)(unaff_x19 + 0x288);
  if (uVar14 == 0) {
    if (bVar9 == 0) {
      return;
    }
    FUN_067600e4();
  }
  else {
    uVar21 = FUN_068e3d08(&stack0x00000890,0);
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
    FUN_0673d3c8(&stack0x000001c0,&stack0x00000180,in_stack_00000890,in_stack_00000894,uVar21,0,0);
    if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06748f48(0,unaff_x19 + 0x368,&stack0x00000570,0,1,0,1,
                 *(undefined8 *)OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo,0);
    if (bVar9 == 0) {
      if (*(long *)(unaff_x19 + 0x358) == 0) goto LAB_06762e2c;
      FUN_0673ac68(*(long *)(unaff_x19 + 0x358),&stack0x00000890,plVar26,0,plVar25,&stack0x00000670,
                   unaff_x19 + 0x2c8,0);
      goto LAB_06760c28;
    }
    FUN_067600e4();
    if (*(long *)(unaff_x19 + 0x358) == 0) goto LAB_06762e2c;
    FUN_0673ac68(*(long *)(unaff_x19 + 0x358),&stack0x00000890,plVar26,bVar10,plVar25,
                 &stack0x00000670,unaff_x19 + 0x2c8,bVar36);
    FUN_067295d4();
  }
  lVar33 = *plVar26;
  if (bVar36 != false) {
    if (*(long *)(unaff_x19 + 0x360) == 0) goto LAB_06762e2c;
    FUN_0673adb0(*(long *)(unaff_x19 + 0x360),&stack0x00000568,1,uVar37,0);
    FUN_067295d4();
  }
  if (*(long *)(unaff_x20 + 0x1a8) != 0) {
    FUN_067295d4();
  }
  if ((bVar36 == false) && (((uVar14 == 0 || (lVar28 != 0)) || (bVar11 != 0)))) {
    lVar28 = *plVar26;
    if (lVar28 == 0) goto LAB_06762e2c;
    lVar30 = *(long *)(unaff_x19 + 0x298);
    if (lVar30 == 0) goto LAB_06762e2c;
    in_stack_00000128 = *(undefined8 *)(lVar30 + 0x30);
    in_stack_00000120 = *(undefined8 *)(lVar30 + 0x28);
    in_stack_00000138 = *(undefined8 *)(lVar30 + 0x40);
    in_stack_00000130 = *(undefined8 *)(lVar30 + 0x38);
    in_stack_00000140 = *(undefined8 *)(lVar30 + 0x48);
    in_stack_00000150 = *(undefined8 *)(lVar28 + 0x28);
    in_stack_00000158 = *(undefined8 *)(lVar28 + 0x30);
    in_stack_00000160 = *(undefined8 *)(lVar28 + 0x38);
    in_stack_00000168 = *(undefined8 *)(lVar28 + 0x40);
    in_stack_00000170 = *(undefined8 *)(lVar28 + 0x48);
    uVar23 = FUN_0691198c(&stack0x00000150,&stack0x00000120,0);
    if ((uVar23 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x240) == 0) goto LAB_06762e2c;
      in_stack_000000e0 = CONCAT44(in_stack_00000894,in_stack_00000890);
      in_stack_000000e8 = CONCAT44(in_stack_0000089c,in_stack_00000898);
      in_stack_000000f0 = in_stack_000008a0;
      in_stack_000000f8 = in_stack_000008a8;
      in_stack_00000100 = in_stack_000008b0;
      in_stack_00000108 = in_stack_000008b8;
      in_stack_00000110 = in_stack_000008c0;
      FUN_0678f410(*(long *)(unaff_x19 + 0x240),&stack0x000000e0,lVar33,0);
      FUN_067295d4();
    }
  }
  if (((uVar34 | uVar12 ^ 0xffffffff) & 1) == 0) {
    FUN_067295d4();
  }
  if (*(long *)(unaff_x20 + 400) != 0) {
    uVar23 = FUN_0663aecc(*(long *)(unaff_x20 + 400),0);
    if ((uVar23 & 1) == 0) {
      return;
    }
    lVar28 = *plVar25;
    if (lVar28 != 0) {
      lVar33 = *(long *)(unaff_x20 + 400);
      if (lVar33 != 0) {
        in_stack_00000088 = *(undefined8 *)(lVar33 + 0x38);
        in_stack_00000080 = *(undefined8 *)(lVar33 + 0x30);
        in_stack_00000098 = *(undefined8 *)(lVar33 + 0x48);
        in_stack_00000090 = *(undefined8 *)(lVar33 + 0x40);
        in_stack_000000a0 = *(undefined8 *)(lVar33 + 0x50);
        in_stack_000000b0 = *(undefined8 *)(lVar28 + 0x28);
        in_stack_000000b8 = *(undefined8 *)(lVar28 + 0x30);
        in_stack_000000c0 = *(undefined8 *)(lVar28 + 0x38);
        in_stack_000000c8 = *(undefined8 *)(lVar28 + 0x40);
        in_stack_000000d0 = *(undefined8 *)(lVar28 + 0x48);
        uVar23 = FUN_0691198c(&stack0x000000b0,&stack0x00000080,0);
        if ((uVar23 & 1) != 0) {
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


