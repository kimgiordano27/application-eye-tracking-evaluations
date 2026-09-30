/*
FUNCTION_NAME: Unity.VisualScripting.RayConverter$$DoDeserialize
ENTRY_POINT: 0676133c
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


void Unity_VisualScripting_RayConverter__DoDeserialize(void)

{
  long *plVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  uint unaff_w23;
  uint unaff_w25;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  uint unaff_w27;
  long unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  byte bStack0000000000000020;
  uint uStack0000000000000028;
  ulong in_stack_00000030;
  long in_stack_00000040;
  int in_stack_00000048;
  int iStack0000000000000050;
  int iStack0000000000000054;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  ulong in_stack_00000068;
  uint in_stack_00000070;
  int iStack0000000000000078;
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
  undefined4 in_stack_0000062c;
  long in_stack_00000668;
  undefined4 in_stack_0000067c;
  int in_stack_00000774;
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
  
  uVar16 = in_stack_00000030;
  if (*(long *)(unaff_x19 + 0x108) == 0) goto LAB_06762e2c;
  if ((_iStack0000000000000078 & 0x100000000) == 0 &&
      *(int *)(*(long *)(unaff_x19 + 0x108) + 0x18) != 0) {
    if (*unaff_x29 == 0) goto LAB_06762e2c;
    FUN_067946d0(*unaff_x29,0);
    FUN_06726080();
  }
  if (*(char *)(unaff_x20 + 0x188) != '\0') {
    unaff_w21 = 1;
  }
  FUN_06725e18();
  puVar5 = Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
  lVar20 = *(long *)(unaff_x19 + 0x100);
  lVar13 = *(long *)Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar13 = *(long *)puVar5;
  }
  lVar17 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
  if (lVar17 == 0) {
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar13 = *(long *)puVar5;
    }
    uVar21 = **(undefined8 **)(lVar13 + 0xb8);
    lVar17 = thunk_FUN_0301080c(*(undefined8 *)OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_TypeInfo);
    FUN_0494bc5c(lVar17,uVar21,
                 *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<VRVideoPlayer>_TypeInfo,0
                );
    plVar14 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
    *plVar14 = lVar17;
    thunk_FUN_03048534(plVar14,lVar17);
    unaff_w25 = in_stack_00000070;
  }
  if (lVar20 == 0) goto LAB_06762e2c;
  lVar13 = FUN_04430950(lVar20,lVar17,
                        *(undefined8 *)
                         OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo);
  if ((_uStack0000000000000028 & 0x100000000) != 0) {
    FUN_067295d4();
  }
  if ((in_stack_00000060 & 1) != 0) {
    FUN_067295d4();
  }
  uVar9 = unaff_w21 & unaff_w23;
  if ((_uStack0000000000000028 & 1) == 0) {
    uVar11 = (uint)in_stack_00000068 & 1;
    if (iStack0000000000000078 != 0 || *(char *)(unaff_x20 + 0x187) != '\0') {
      uVar11 = 1;
    }
  }
  else {
    uVar11 = 0;
  }
  bVar6 = uVar9 != 0;
  uVar11 = uVar11 & unaff_w27;
  if ((*(long *)(unaff_x19 + 0xe0) != 0) &&
     (uVar15 = FUN_0670f9b0(*(long *)(unaff_x19 + 0xe0),in_stack_00000058,0), (uVar15 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06762e2c;
    FUN_0670f9f0(*(long *)(unaff_x19 + 0xe0),&stack0x00000774,0);
    if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06762e2c;
    uStack0000000000000028 = uStack0000000000000028 | in_stack_00000774 == 1;
    uVar15 = FUN_0670f5d4(*(long *)(unaff_x19 + 0xe0),0);
    if (((uVar15 & 1) == 0) && (iStack0000000000000054 == 0)) {
      uVar11 = 0;
      uVar9 = 0;
      uStack0000000000000028 = 0;
      in_stack_00000030._4_4_ = 0;
      *(undefined1 *)(unaff_x19 + 0x1a5) = 0;
    }
    bVar6 = uVar9 != 0;
    if (*(char *)(unaff_x19 + 0x1a4) != '\0') {
      if (*(long *)(unaff_x19 + 0xe0) == 0) goto LAB_06762e2c;
      bVar7 = FUN_0670f728(*(long *)(unaff_x19 + 0xe0),0);
      *(byte *)(unaff_x19 + 0x1a4) = bVar7 & 1;
    }
  }
  if (*(long *)(unaff_x20 + 0x1d0) == 0) goto LAB_06762e2c;
  *(undefined1 *)(*(long *)(unaff_x20 + 0x1d0) + 0x1a5) = *(undefined1 *)(unaff_x19 + 0x1a5);
  iVar8 = FUN_0675ebb0();
  if (iVar8 == 1) {
    lVar20 = *(long *)(unaff_x19 + 0x2e0);
    if (lVar20 == 0) goto LAB_06762e2c;
    if ((*(char *)(lVar20 + 0x15) != '\0') &&
       ((in_stack_00000048 == 0xdc || (*(char *)(unaff_x19 + 0x1a4) == '\0')))) {
      FUN_0677a1bc(lVar20,0);
    }
  }
  iVar8 = FUN_0675ebb0();
  if (iVar8 == 1) {
    bVar7 = *(byte *)(unaff_x19 + 0x1a4) ^ 1;
  }
  else {
    bVar7 = 0;
  }
  if (bVar7 != 0 || (uStack0000000000000028 != 0 || uVar11 != 0)) {
    if ((uStack0000000000000028 == 0) || (iVar8 = FUN_0675ebb0(), iVar8 == 1)) {
      if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar15 = FUN_0674ac30(0x31,4,0);
      if ((uVar15 & 1) == 0) goto LAB_0676191c;
      uVar10 = 0;
      uVar21 = 0x31;
    }
    else {
LAB_0676191c:
      uVar21 = 0;
      uVar10 = 0x18;
    }
    FUN_068e40b4(&stack0x00000740,uVar21,0);
    FUN_068e41c8(&stack0x00000740,uVar10,0);
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
  if ((uVar16 & 1) == 0) {
    iVar8 = FUN_0675ebb0();
    if (iVar8 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar16 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar16 & 1) != 0) goto LAB_06761a24;
    }
  }
  else {
LAB_06761a24:
    plVar14 = (long *)(unaff_x19 + 0x2b8);
    uVar21 = *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<VibrationManager>_TypeInfo;
    iVar8 = FUN_0675ebb0();
    if (iVar8 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar16 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar16 & 1) != 0) {
        lVar20 = *(long *)(unaff_x19 + 0x2e0);
        if (lVar20 == 0) goto LAB_06762e2c;
        lVar17 = *(long *)(lVar20 + 0x30);
        uVar9 = FUN_06778ac8(lVar20,0);
        if (lVar17 == 0) goto LAB_06762e2c;
        if (*(uint *)(lVar17 + 0x18) <= uVar9) goto LAB_06762e3c;
        plVar14 = (long *)(lVar17 + (long)(int)uVar9 * 8 + 0x20);
        if (*plVar14 == 0) goto LAB_06762e2c;
        uVar21 = *(undefined8 *)(*plVar14 + 0x58);
      }
    }
    FUN_068e41c8(&stack0x00000700,0,0);
    iVar8 = FUN_0675ebb0();
    if (iVar8 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar16 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar16 & 1) == 0) goto LAB_06761b44;
      lVar20 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar20 == 0) goto LAB_06762e2c;
      uVar10 = FUN_06778ac8(lVar20,0);
      uVar10 = FUN_06778be0(lVar20,uVar10,0);
    }
    else {
LAB_06761b44:
      uVar10 = FUN_0674bc74(in_stack_00000888,0);
    }
    FUN_068e40b4(&stack0x00000700,uVar10,0);
    iVar8 = FUN_0675ebb0();
    if (iVar8 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar16 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
      if ((uVar16 & 1) == 0) goto LAB_06761bec;
      lVar20 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar20 == 0) goto LAB_06762e2c;
      uVar10 = FUN_06778ac8(lVar20,0);
      FUN_0677a264(lVar20,&stack0x00000340,uVar10,0);
    }
    else {
LAB_06761bec:
      if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_06748f48(0,plVar14,&stack0x00000700,0,1,0,1,uVar21,0);
    }
    if ((*plVar14 == 0) || (unaff_x28 == 0)) goto LAB_06762e2c;
    FUN_06916814();
    FUN_0674bb60();
    iVar8 = FUN_0675ebb0();
    if (iVar8 == 1) {
      if (*plVar14 == 0) goto LAB_06762e2c;
      FUN_06916814();
    }
    if (*(int *)(*(long *)PTR_DAT_06f988b8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_0691ff78(&stack0x000008c8);
    FUN_0691250c();
    unaff_w25 = in_stack_00000070;
  }
  if ((unaff_w25 & uStack0000000000000028) == 1) {
    uVar21 = *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<Voxelize>_TypeInfo;
    iVar8 = FUN_0675ebb0();
    if (iVar8 == 1) {
      lVar20 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar20 == 0) goto LAB_06762e2c;
      lVar17 = *(long *)(lVar20 + 0x30);
      uVar9 = FUN_06778aa4(lVar20,0);
      if (lVar17 == 0) goto LAB_06762e2c;
      if (*(uint *)(lVar17 + 0x18) <= uVar9) goto LAB_06762e3c;
      plVar14 = (long *)(lVar17 + (long)(int)uVar9 * 8 + 0x20);
      if (*plVar14 == 0) goto LAB_06762e2c;
      uVar21 = *(undefined8 *)(*plVar14 + 0x58);
    }
    else {
      plVar14 = (long *)(unaff_x19 + 0x2b0);
    }
    FUN_068e41c8(&stack0x000006c0,0,0);
    iVar8 = FUN_0675ebb0();
    if (iVar8 == 1) {
      lVar20 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar20 == 0) goto LAB_06762e2c;
      uVar10 = FUN_06778aa4(lVar20,0);
      uVar10 = FUN_06778be0(lVar20,uVar10,0);
    }
    else {
      if (*(int *)(*(long *)Unity_Entities_TypeManager_SharedTypeIndex<VRIK>_TypeInfo + 0xe0) == 0)
      {
        thunk_FUN_02fdcff0();
      }
      uVar10 = FUN_0678bcb0(0);
    }
    FUN_068e40b4(&stack0x000006c0,uVar10,0);
    iVar8 = FUN_0675ebb0();
    if (iVar8 == 1) {
      lVar20 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar20 == 0) goto LAB_06762e2c;
      uVar10 = FUN_06778aa4(lVar20,0);
      FUN_0677a264(lVar20,&stack0x000002a0,uVar10,0);
    }
    else {
      if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_06748f48(0,plVar14,&stack0x000006c0,0,1,0,1,uVar21,0);
    }
    if ((*plVar14 == 0) || (unaff_x28 == 0)) goto LAB_06762e2c;
    FUN_06916814();
    iVar8 = FUN_0675ebb0();
    if (iVar8 == 1) {
      if (*plVar14 == 0) goto LAB_06762e2c;
      FUN_06916814();
    }
    if (*(int *)(*(long *)PTR_DAT_06f988b8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_0691ff78(&stack0x000008c8);
    FUN_0691250c();
    unaff_w25 = in_stack_00000070;
  }
  if (uStack0000000000000028 != 0) {
    iVar8 = FUN_0675ebb0();
    if (unaff_w25 == 0) {
      if (iVar8 == 1) goto LAB_06762190;
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_06762e2c;
      FUN_0678ce44(*(long *)(unaff_x19 + 0x1b0),&stack0x00000200,*(undefined8 *)(unaff_x19 + 0x2a8),
                   0);
    }
    else if (iVar8 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar9 = FUN_06778aa4(*(long *)(unaff_x19 + 0x2e0),0);
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar16 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
      lVar20 = *(long *)(unaff_x19 + 0x2e0);
      if ((lVar20 == 0) || (lVar17 = *(long *)(lVar20 + 0x30), lVar17 == 0)) goto LAB_06762e2c;
      if (*(uint *)(lVar17 + 0x18) <= uVar9) {
LAB_06762e3c:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar23 = *(long *)(unaff_x19 + 0x1b8);
      uVar21 = *(undefined8 *)(unaff_x19 + 0x288);
      uVar22 = *(undefined8 *)(lVar17 + (long)(int)uVar9 * 8 + 0x20);
      if ((uVar16 & 1) == 0) {
        if (in_stack_00000018._4_4_ == 0) {
          if (lVar23 == 0) goto LAB_06762e2c;
          FUN_0678bd48(lVar23,uVar21,uVar22,0);
        }
        else {
          if (lVar23 == 0) goto LAB_06762e2c;
          FUN_0678bd80(lVar23,uVar21,uVar22,*(undefined8 *)(unaff_x19 + 0x2b8),0);
        }
      }
      else {
        uVar9 = FUN_06778ac8(lVar20,0);
        if (*(uint *)(lVar17 + 0x18) <= uVar9) goto LAB_06762e3c;
        if (lVar23 == 0) goto LAB_06762e2c;
        FUN_0678bd80(lVar23,uVar21,uVar22,*(undefined8 *)(lVar17 + (long)(int)uVar9 * 8 + 0x20),0);
      }
      puVar5 = System_Collections_Generic_List<TweenBase>_TypeInfo;
      if (in_stack_00000048 - 0xdcU < 0x1f) {
        lVar17 = *(long *)(unaff_x19 + 0x1b8);
        lVar20 = *(long *)System_Collections_Generic_List<TweenBase>_TypeInfo;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
          lVar20 = *(long *)puVar5;
        }
        if (lVar17 == 0) goto LAB_06762e2c;
        puVar18 = (undefined8 *)(lVar17 + 0xe0);
        *puVar18 = **(undefined8 **)(lVar20 + 0xb8);
        thunk_FUN_03048534(puVar18);
      }
    }
    else {
      lVar20 = *(long *)(unaff_x19 + 0x1b8);
      if (in_stack_00000018._4_4_ == 0) {
        if (lVar20 == 0) goto LAB_06762e2c;
        FUN_0678bd48(lVar20,*(undefined8 *)(unaff_x19 + 0x2a8),*(undefined8 *)(unaff_x19 + 0x2b0),0)
        ;
      }
      else {
        if (lVar20 == 0) goto LAB_06762e2c;
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
  if ((in_stack_00000030._4_4_ & 1) != 0) {
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
  uVar16 = FUN_0663edb0(*(long *)(unaff_x20 + 400),0);
  if ((uVar16 & 1) != 0) {
    FUN_067295d4();
  }
  bVar7 = *(byte *)(unaff_x20 + 0x1d8);
  iVar8 = FUN_0675ebb0();
  if (iVar8 == 1) {
    lVar20 = *(long *)(unaff_x19 + 0x2e0);
    if (lVar20 == 0) goto LAB_06762e2c;
    if ((*(char *)(lVar20 + 0x15) != '\0') &&
       ((in_stack_00000048 == 0xdc || (*(char *)(unaff_x19 + 0x1a4) == '\0')))) {
      FUN_0677a1bc(lVar20,0);
    }
    FUN_067638f4();
  }
  else {
    uVar10 = 2;
    if (!bVar6) {
      uVar10 = 0;
    }
    uVar2 = 0;
    if (1 < in_stack_00000898) {
      uVar2 = uVar10;
    }
    iVar8 = 0;
    if ((!bVar6 && uVar11 == 0) && bVar7 != 0) {
      iVar8 = 3;
    }
    if (*(long *)(unaff_x20 + 400) == 0) goto LAB_06762e2c;
    uVar16 = FUN_0663aecc(*(long *)(unaff_x20 + 400),0);
    if ((uVar16 & 1) != 0) {
      if (*(long *)(unaff_x20 + 400) == 0) goto LAB_06762e2c;
      if (*(char *)(*(long *)(unaff_x20 + 400) + 0x20) != '\0') {
        iVar8 = 0;
      }
    }
    if ((1 < in_stack_00000898) && (uVar11 != 0)) {
      if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar16 = FUN_0674de10(0);
      if ((uVar16 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06762e2c;
        if (!bVar6 && *(int *)(*(long *)(unaff_x19 + 0x218) + 0x10) == 500) {
          if (iVar8 == 0) {
            iVar8 = 2;
          }
          else if (iVar8 == 3) {
            iVar8 = 1;
          }
        }
      }
    }
    if (in_stack_00000060._4_4_ == 0) {
      lVar20 = *(long *)(unaff_x19 + 0x200);
    }
    else {
      lVar20 = *(long *)(unaff_x19 + 0x208);
      if (lVar20 == 0) goto LAB_06762e2c;
      FUN_0678d900(lVar20,*(undefined8 *)(unaff_x19 + 0x278),*(undefined8 *)(unaff_x19 + 0x2b8),
                   *(undefined8 *)(unaff_x19 + 0x288),0);
    }
    if (lVar20 == 0) goto LAB_06762e2c;
    FUN_0671e2d0(lVar20,uVar2,0,0);
    FUN_0671e408(lVar20,iVar8,0);
    puVar5 = Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
    lVar23 = *(long *)(unaff_x19 + 0x100);
    lVar17 = *(long *)Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar17 = *(long *)puVar5;
    }
    lVar19 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x10);
    if (lVar19 == 0) {
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar17 = *(long *)Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
      }
      puVar5 = Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
      uVar21 = **(undefined8 **)(lVar17 + 0xb8);
      lVar19 = thunk_FUN_0301080c(*(undefined8 *)OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_TypeInfo)
      ;
      FUN_0494bc5c(lVar19,uVar21,
                   *(undefined8 *)
                    Unity_Entities_TypeManager_SharedTypeIndex<VehicleController>_TypeInfo,0);
      plVar14 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
      *plVar14 = lVar19;
      thunk_FUN_03048534(plVar14,lVar19);
    }
    if (lVar23 == 0) goto LAB_06762e2c;
    lVar17 = FUN_04430950(lVar23,lVar19,
                          *(undefined8 *)
                           OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo);
    if ((lVar17 == 0) && (*(int *)(unaff_x20 + 0xe0) == 0)) {
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
    }
    uVar16 = FUN_06900e10(0);
    if ((uVar16 & 1) != 0) {
      FUN_0671ed40(0,0,0,0x3f800000,lVar20,uVar10,0);
    }
    FUN_067295d4();
  }
  if (in_stack_00000040 == 0) goto LAB_06762e2c;
  iVar8 = FUN_068ba01c(in_stack_00000040,0);
  if ((iVar8 == 1) && (*(int *)(unaff_x20 + 0xe0) != 1)) {
    uVar21 = FUN_068ced20(0);
    puVar5 = PTR_DAT_06f6d618;
    if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
    }
    uVar16 = FUN_068f8810(uVar21,0,0);
    if ((uVar16 & 1) == 0) {
      uVar16 = FUN_03bbf6cc(in_stack_00000040,&stack0x00000668,
                            *(undefined8 *)
                             Unity_Entities_TypeManager_SharedTypeIndex<VRUtils>_TypeInfo);
      if ((uVar16 & 1) != 0) {
        if (in_stack_00000668 == 0) goto LAB_06762e2c;
        uVar21 = FUN_068d3d38(in_stack_00000668,0);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*(long *)puVar5);
        }
        uVar16 = FUN_068f8810(uVar21,0,0);
        if ((uVar16 & 1) != 0) goto LAB_06762584;
      }
    }
    else {
LAB_06762584:
      FUN_067295d4();
    }
  }
  if (uVar11 == 0) {
    if ((uStack0000000000000028 & 1) == 0 && *(int *)(unaff_x20 + 0xe0) == 0) {
      uVar16 = FUN_06900a10(0);
      uVar21 = *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<TwoDragMe>_TypeInfo;
      if ((uVar16 & 1) == 0) {
        uVar22 = FUN_068dcf50(0);
      }
      else {
        uVar22 = FUN_068dcf78(0);
      }
      FUN_068cf75c(uVar21,uVar22,0);
    }
  }
  else {
    iVar8 = FUN_0675ebb0();
    if (((iVar8 != 1) || ((in_stack_00000068 & 1) != 0)) || (*(char *)(unaff_x19 + 0x1a4) == '\0'))
    {
      if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06762e2c;
      Unity_XR_Oculus_Input_OculusHMD__set_deviceRotation
                (*(long *)(unaff_x19 + 0x218),*(undefined8 *)(unaff_x19 + 0x288),
                 *(undefined8 *)(unaff_x19 + 0x2a8),0);
      FUN_067295d4();
    }
  }
  if (bVar6) {
    if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar20 = FUN_067676ac(0);
    if (lVar20 == 0) goto LAB_06762e2c;
    uVar10 = *(undefined4 *)(lVar20 + 0x50);
    FUN_06788be8(uVar10,&stack0x00000630,&stack0x0000062c,0);
    if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06748f48(0,unaff_x19 + 0x2c0,&stack0x00000630,in_stack_0000062c,1,0,1,
                 *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<VolatileFire>_TypeInfo,0)
    ;
    if (*(long *)(unaff_x19 + 0x220) == 0) goto LAB_06762e2c;
    FUN_06788d74(*(long *)(unaff_x19 + 0x220),*(undefined8 *)(unaff_x19 + 0x278),
                 *(undefined8 *)(unaff_x19 + 0x2c0),uVar10,0);
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
  if ((_bStack0000000000000020 & 0x100000000) != 0) {
    FUN_067295d4();
  }
  uVar9 = 0;
  if (bVar7 != 0) {
    uVar9 = 3;
  }
  if (uVar11 != 0) {
    if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06762e2c;
    if (499 < *(int *)(*(long *)(unaff_x19 + 0x218) + 0x10)) {
      if (in_stack_00000898 < 2) {
        uVar9 = 0;
      }
      else {
        if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
        }
        uVar9 = FUN_0674de10(0);
        uVar9 = uVar9 & 1;
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_06762e2c;
  FUN_0671e2d0(*(long *)(unaff_x19 + 0x230),1 < in_stack_00000898 & bVar7,0,0);
  if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_06762e2c;
  FUN_0671e408(*(long *)(unaff_x19 + 0x230),uVar9,0);
  FUN_067295d4();
  FUN_067295d4();
  uVar9 = FUN_06770690(in_stack_00000058,0);
  uVar11 = FUN_0676cdd8(in_stack_00000058,0);
  if (((uVar9 & 1) != 0) && ((uVar11 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x260) == 0) goto LAB_06762e2c;
    FUN_06736864(*(long *)(unaff_x19 + 0x260),in_stack_00000058,0x18,0);
    FUN_067295d4();
  }
  bVar4 = *(long *)(unaff_x20 + 0x1a8) != 0 & bVar7;
  if ((bStack0000000000000020 & bVar7) == 0) {
LAB_06762a14:
    bVar6 = false;
  }
  else if ((*(int *)(unaff_x20 + 0x1c4) == 1) ||
          ((*(int *)(unaff_x20 + 0x168) == 1 && (*(int *)(unaff_x20 + 0x16c) != 0)))) {
    bVar6 = true;
  }
  else {
    uVar16 = FUN_0676c0e0(in_stack_00000058,0);
    if ((uVar16 & 1) == 0) goto LAB_06762a14;
    bVar6 = 0.0 < *(float *)(unaff_x20 + 0x214);
  }
  bVar3 = bVar6 ^ 1;
  if (bVar4 != 0 || lVar13 != 0) {
    bVar3 = 0;
  }
  if (*(long *)(unaff_x19 + 0xe0) == 0) {
    uVar12 = 1;
  }
  else {
    uVar12 = FUN_0670f6ac(*(long *)(unaff_x19 + 0xe0),in_stack_00000058,0);
    uVar12 = ~uVar12 & 1;
  }
  plVar14 = (long *)(unaff_x19 + 0x278);
  plVar1 = (long *)(unaff_x19 + 0x288);
  if (iStack0000000000000050 == 0) {
    if (bVar7 == 0) {
      return;
    }
    FUN_067600e4();
  }
  else {
    uVar10 = FUN_068e3d08(&stack0x00000890,0);
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
    FUN_0673d3c8(&stack0x000001c0,&stack0x00000180,in_stack_00000890,in_stack_00000894,uVar10,0,0);
    if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06748f48(0,unaff_x19 + 0x368,&stack0x00000570,0,1,0,1,
                 *(undefined8 *)OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo,0);
    if (bVar7 == 0) {
      if (*(long *)(unaff_x19 + 0x358) == 0) goto LAB_06762e2c;
      FUN_0673ac68(*(long *)(unaff_x19 + 0x358),&stack0x00000890,plVar14,0,plVar1,&stack0x00000670,
                   unaff_x19 + 0x2c8,0);
      goto LAB_06760c28;
    }
    FUN_067600e4();
    if (*(long *)(unaff_x19 + 0x358) == 0) goto LAB_06762e2c;
    FUN_0673ac68(*(long *)(unaff_x19 + 0x358),&stack0x00000890,plVar14,bVar3,plVar1,&stack0x00000670
                 ,unaff_x19 + 0x2c8,bVar6);
    FUN_067295d4();
  }
  lVar20 = *plVar14;
  if (bVar6 != false) {
    if (*(long *)(unaff_x19 + 0x360) == 0) goto LAB_06762e2c;
    FUN_0673adb0(*(long *)(unaff_x19 + 0x360),&stack0x00000568,1,uVar12,0);
    FUN_067295d4();
  }
  if (*(long *)(unaff_x20 + 0x1a8) != 0) {
    FUN_067295d4();
  }
  if ((bVar6 == false) && (((iStack0000000000000050 == 0 || (lVar13 != 0)) || (bVar4 != 0)))) {
    lVar13 = *plVar14;
    if (lVar13 == 0) goto LAB_06762e2c;
    lVar17 = *(long *)(unaff_x19 + 0x298);
    if (lVar17 == 0) goto LAB_06762e2c;
    in_stack_00000128 = *(undefined8 *)(lVar17 + 0x30);
    in_stack_00000120 = *(undefined8 *)(lVar17 + 0x28);
    in_stack_00000138 = *(undefined8 *)(lVar17 + 0x40);
    in_stack_00000130 = *(undefined8 *)(lVar17 + 0x38);
    in_stack_00000140 = *(undefined8 *)(lVar17 + 0x48);
    in_stack_00000150 = *(undefined8 *)(lVar13 + 0x28);
    in_stack_00000158 = *(undefined8 *)(lVar13 + 0x30);
    in_stack_00000160 = *(undefined8 *)(lVar13 + 0x38);
    in_stack_00000168 = *(undefined8 *)(lVar13 + 0x40);
    in_stack_00000170 = *(undefined8 *)(lVar13 + 0x48);
    uVar16 = FUN_0691198c(&stack0x00000150,&stack0x00000120,0);
    if ((uVar16 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x240) == 0) goto LAB_06762e2c;
      in_stack_000000e0 = CONCAT44(in_stack_00000894,in_stack_00000890);
      in_stack_000000e8 = CONCAT44(in_stack_0000089c,in_stack_00000898);
      in_stack_000000f0 = in_stack_000008a0;
      in_stack_000000f8 = in_stack_000008a8;
      in_stack_00000100 = in_stack_000008b0;
      in_stack_00000108 = in_stack_000008b8;
      in_stack_00000110 = in_stack_000008c0;
      FUN_0678f410(*(long *)(unaff_x19 + 0x240),&stack0x000000e0,lVar20,0);
      FUN_067295d4();
    }
  }
  if (((uVar11 | uVar9 ^ 0xffffffff) & 1) == 0) {
    FUN_067295d4();
  }
  if (*(long *)(unaff_x20 + 400) != 0) {
    uVar16 = FUN_0663aecc(*(long *)(unaff_x20 + 400),0);
    if ((uVar16 & 1) == 0) {
      return;
    }
    lVar13 = *plVar1;
    if (lVar13 != 0) {
      lVar20 = *(long *)(unaff_x20 + 400);
      if (lVar20 != 0) {
        in_stack_00000088 = *(undefined8 *)(lVar20 + 0x38);
        in_stack_00000080 = *(undefined8 *)(lVar20 + 0x30);
        in_stack_00000098 = *(undefined8 *)(lVar20 + 0x48);
        in_stack_00000090 = *(undefined8 *)(lVar20 + 0x40);
        in_stack_000000a0 = *(undefined8 *)(lVar20 + 0x50);
        in_stack_000000b0 = *(undefined8 *)(lVar13 + 0x28);
        in_stack_000000b8 = *(undefined8 *)(lVar13 + 0x30);
        in_stack_000000c0 = *(undefined8 *)(lVar13 + 0x38);
        in_stack_000000c8 = *(undefined8 *)(lVar13 + 0x40);
        in_stack_000000d0 = *(undefined8 *)(lVar13 + 0x48);
        uVar16 = FUN_0691198c(&stack0x000000b0,&stack0x00000080,0);
        if ((uVar16 & 1) != 0) {
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


