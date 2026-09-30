/*
FUNCTION_NAME: Unity.VisualScripting.DoNotSerializeAttribute$$.ctor
ENTRY_POINT: 06761ad8
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


void Unity_VisualScripting_DoNotSerializeAttribute___ctor(int param_1)

{
  long *plVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long unaff_x19;
  long unaff_x20;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  uint unaff_w24;
  bool bVar18;
  long *unaff_x25;
  long *plVar19;
  undefined8 uVar20;
  uint unaff_w26;
  long lVar21;
  long unaff_x28;
  int unaff_w29;
  undefined8 in_stack_00000018;
  byte bStack0000000000000020;
  ulong in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  int in_stack_00000048;
  int in_stack_00000050;
  undefined8 in_stack_00000060;
  ulong in_stack_00000068;
  uint in_stack_00000070;
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
  
  if (param_1 == 1) {
    if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
    uVar12 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
    if ((uVar12 & 1) == 0) goto LAB_06761b44;
    lVar13 = *(long *)(unaff_x19 + 0x2e0);
    if (lVar13 == 0) goto LAB_06762e2c;
    uVar7 = FUN_06778ac8(lVar13,0);
    uVar7 = FUN_06778be0(lVar13,uVar7,0);
  }
  else {
LAB_06761b44:
    uVar7 = FUN_0674bc74(in_stack_00000888,0);
  }
  FUN_068e40b4(&stack0x00000700,uVar7,0);
  iVar8 = FUN_0675ebb0();
  if (iVar8 == 1) {
    if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
    uVar12 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
    if ((uVar12 & 1) == 0) goto LAB_06761bec;
    lVar13 = *(long *)(unaff_x19 + 0x2e0);
    if (lVar13 == 0) goto LAB_06762e2c;
    uVar7 = FUN_06778ac8(lVar13,0);
    FUN_0677a264(lVar13,&stack0x00000340,uVar7,0);
  }
  else {
LAB_06761bec:
    if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06748f48(0);
  }
  if ((*unaff_x25 == 0) || (unaff_x28 == 0)) goto LAB_06762e2c;
  FUN_06916814();
  FUN_0674bb60();
  iVar8 = FUN_0675ebb0();
  if (iVar8 == 1) {
    if (*unaff_x25 == 0) goto LAB_06762e2c;
    FUN_06916814();
  }
  if (*(int *)(*(long *)PTR_DAT_06f988b8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  FUN_0691ff78(&stack0x000008c8);
  FUN_0691250c();
  if ((in_stack_00000070 & unaff_w26) == 1) {
    uVar17 = *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<Voxelize>_TypeInfo;
    iVar8 = FUN_0675ebb0();
    if (iVar8 == 1) {
      lVar13 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar13 == 0) goto LAB_06762e2c;
      lVar14 = *(long *)(lVar13 + 0x30);
      uVar9 = FUN_06778aa4(lVar13,0);
      if (lVar14 == 0) goto LAB_06762e2c;
      if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_06762e3c;
      plVar19 = (long *)(lVar14 + (long)(int)uVar9 * 8 + 0x20);
      if (*plVar19 == 0) goto LAB_06762e2c;
      uVar17 = *(undefined8 *)(*plVar19 + 0x58);
    }
    else {
      plVar19 = (long *)(unaff_x19 + 0x2b0);
    }
    FUN_068e41c8(&stack0x000006c0,0,0);
    iVar8 = FUN_0675ebb0();
    if (iVar8 == 1) {
      lVar13 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar13 == 0) goto LAB_06762e2c;
      uVar7 = FUN_06778aa4(lVar13,0);
      uVar7 = FUN_06778be0(lVar13,uVar7,0);
    }
    else {
      if (*(int *)(*(long *)Unity_Entities_TypeManager_SharedTypeIndex<VRIK>_TypeInfo + 0xe0) == 0)
      {
        thunk_FUN_02fdcff0();
      }
      uVar7 = FUN_0678bcb0(0);
    }
    FUN_068e40b4(&stack0x000006c0,uVar7,0);
    iVar8 = FUN_0675ebb0();
    if (iVar8 == 1) {
      lVar13 = *(long *)(unaff_x19 + 0x2e0);
      if (lVar13 == 0) goto LAB_06762e2c;
      uVar7 = FUN_06778aa4(lVar13,0);
      FUN_0677a264(lVar13,&stack0x000002a0,uVar7,0);
    }
    else {
      if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      FUN_06748f48(0,plVar19,&stack0x000006c0,0,1,0,1,uVar17,0);
    }
    if ((*plVar19 == 0) || (unaff_x28 == 0)) goto LAB_06762e2c;
    FUN_06916814();
    iVar8 = FUN_0675ebb0();
    if (iVar8 == 1) {
      if (*plVar19 == 0) goto LAB_06762e2c;
      FUN_06916814();
    }
    if (*(int *)(*(long *)PTR_DAT_06f988b8 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_0691ff78(&stack0x000008c8);
    FUN_0691250c();
  }
  if (unaff_w26 != 0) {
    iVar8 = FUN_0675ebb0();
    if (in_stack_00000070 == 0) {
      if (iVar8 == 1) goto LAB_06762190;
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_06762e2c;
      FUN_0678ce44(*(long *)(unaff_x19 + 0x1b0),&stack0x00000200,*(undefined8 *)(unaff_x19 + 0x2a8),
                   0);
    }
    else if (iVar8 == 1) {
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar9 = FUN_06778aa4(*(long *)(unaff_x19 + 0x2e0),0);
      if (*(long *)(unaff_x19 + 0x2e0) == 0) goto LAB_06762e2c;
      uVar12 = FUN_06778b00(*(long *)(unaff_x19 + 0x2e0),0);
      lVar13 = *(long *)(unaff_x19 + 0x2e0);
      if ((lVar13 == 0) || (lVar14 = *(long *)(lVar13 + 0x30), lVar14 == 0)) goto LAB_06762e2c;
      if (*(uint *)(lVar14 + 0x18) <= uVar9) {
LAB_06762e3c:
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      lVar21 = *(long *)(unaff_x19 + 0x1b8);
      uVar17 = *(undefined8 *)(unaff_x19 + 0x288);
      uVar20 = *(undefined8 *)(lVar14 + (long)(int)uVar9 * 8 + 0x20);
      if ((uVar12 & 1) == 0) {
        if (in_stack_00000018._4_4_ == 0) {
          if (lVar21 == 0) goto LAB_06762e2c;
          FUN_0678bd48(lVar21,uVar17,uVar20,0);
        }
        else {
          if (lVar21 == 0) goto LAB_06762e2c;
          FUN_0678bd80(lVar21,uVar17,uVar20,*(undefined8 *)(unaff_x19 + 0x2b8),0);
        }
      }
      else {
        uVar9 = FUN_06778ac8(lVar13,0);
        if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_06762e3c;
        if (lVar21 == 0) goto LAB_06762e2c;
        FUN_0678bd80(lVar21,uVar17,uVar20,*(undefined8 *)(lVar14 + (long)(int)uVar9 * 8 + 0x20),0);
      }
      puVar6 = System_Collections_Generic_List<TweenBase>_TypeInfo;
      if (in_stack_00000048 - 0xdcU < 0x1f) {
        lVar14 = *(long *)(unaff_x19 + 0x1b8);
        lVar13 = *(long *)System_Collections_Generic_List<TweenBase>_TypeInfo;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_02fdcff0();
          lVar13 = *(long *)puVar6;
        }
        if (lVar14 == 0) goto LAB_06762e2c;
        puVar15 = (undefined8 *)(lVar14 + 0xe0);
        *puVar15 = **(undefined8 **)(lVar13 + 0xb8);
        thunk_FUN_03048534(puVar15);
      }
    }
    else {
      lVar13 = *(long *)(unaff_x19 + 0x1b8);
      if (in_stack_00000018._4_4_ == 0) {
        if (lVar13 == 0) goto LAB_06762e2c;
        FUN_0678bd48(lVar13,*(undefined8 *)(unaff_x19 + 0x2a8),*(undefined8 *)(unaff_x19 + 0x2b0),0)
        ;
      }
      else {
        if (lVar13 == 0) goto LAB_06762e2c;
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
  if ((in_stack_00000030 & 0x100000000) != 0) {
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
  uVar12 = FUN_0663edb0(*(long *)(unaff_x20 + 400),0);
  if ((uVar12 & 1) != 0) {
    FUN_067295d4();
  }
  bVar4 = *(byte *)(unaff_x20 + 0x1d8);
  iVar8 = FUN_0675ebb0();
  if (iVar8 == 1) {
    lVar13 = *(long *)(unaff_x19 + 0x2e0);
    if (lVar13 == 0) goto LAB_06762e2c;
    if ((*(char *)(lVar13 + 0x15) != '\0') &&
       ((in_stack_00000048 == 0xdc || (*(char *)(unaff_x19 + 0x1a4) == '\0')))) {
      FUN_0677a1bc(lVar13,0);
    }
    FUN_067638f4();
  }
  else {
    uVar7 = 2;
    if (unaff_w24 == 0) {
      uVar7 = 0;
    }
    uVar2 = 0;
    if (1 < in_stack_00000898) {
      uVar2 = uVar7;
    }
    iVar8 = 0;
    if ((unaff_w24 == 0 && unaff_w29 == 0) && bVar4 != 0) {
      iVar8 = 3;
    }
    if (*(long *)(unaff_x20 + 400) == 0) goto LAB_06762e2c;
    uVar12 = FUN_0663aecc(*(long *)(unaff_x20 + 400),0);
    if ((uVar12 & 1) != 0) {
      if (*(long *)(unaff_x20 + 400) == 0) goto LAB_06762e2c;
      if (*(char *)(*(long *)(unaff_x20 + 400) + 0x20) != '\0') {
        iVar8 = 0;
      }
    }
    if ((1 < in_stack_00000898) && (unaff_w29 != 0)) {
      if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
      }
      uVar12 = FUN_0674de10(0);
      if ((uVar12 & 1) != 0) {
        if (*(long *)(unaff_x19 + 0x218) == 0) goto LAB_06762e2c;
        if ((unaff_w24 & 1) == 0 && *(int *)(*(long *)(unaff_x19 + 0x218) + 0x10) == 500) {
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
      lVar13 = *(long *)(unaff_x19 + 0x200);
    }
    else {
      lVar13 = *(long *)(unaff_x19 + 0x208);
      if (lVar13 == 0) goto LAB_06762e2c;
      FUN_0678d900(lVar13,*(undefined8 *)(unaff_x19 + 0x278),*(undefined8 *)(unaff_x19 + 0x2b8),
                   *(undefined8 *)(unaff_x19 + 0x288),0);
    }
    if (lVar13 == 0) goto LAB_06762e2c;
    FUN_0671e2d0(lVar13,uVar2,0,0);
    FUN_0671e408(lVar13,iVar8,0);
    puVar6 = Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
    lVar21 = *(long *)(unaff_x19 + 0x100);
    lVar14 = *(long *)Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar14 = *(long *)puVar6;
    }
    lVar16 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x10);
    if (lVar16 == 0) {
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_02fdcff0();
        lVar14 = *(long *)Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
      }
      puVar6 = Unity_Entities_TypeManager_SharedTypeIndex<VelocityTracker>_TypeInfo;
      uVar17 = **(undefined8 **)(lVar14 + 0xb8);
      lVar16 = thunk_FUN_0301080c(*(undefined8 *)OVRTask<OVRSpatialAnchor_UnboundAnchor[]>_TypeInfo)
      ;
      FUN_0494bc5c(lVar16,uVar17,
                   *(undefined8 *)
                    Unity_Entities_TypeManager_SharedTypeIndex<VehicleController>_TypeInfo,0);
      plVar19 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10);
      *plVar19 = lVar16;
      thunk_FUN_03048534(plVar19,lVar16);
    }
    if (lVar21 == 0) goto LAB_06762e2c;
    lVar14 = FUN_04430950(lVar21,lVar16,
                          *(undefined8 *)
                           OVRTask<ValueTuple<OVRSceneManager_LoadSceneModelResult,_int>>_TypeInfo);
    if ((lVar14 == 0) && (*(int *)(unaff_x20 + 0xe0) == 0)) {
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
    uVar12 = FUN_06900e10(0);
    if ((uVar12 & 1) != 0) {
      FUN_0671ed40(0,0,0,0x3f800000,lVar13,uVar7,0);
    }
    FUN_067295d4();
  }
  if (in_stack_00000040 == 0) goto LAB_06762e2c;
  iVar8 = FUN_068ba01c(in_stack_00000040,0);
  if ((iVar8 == 1) && (*(int *)(unaff_x20 + 0xe0) != 1)) {
    uVar17 = FUN_068ced20(0);
    puVar6 = PTR_DAT_06f6d618;
    if (*(int *)(*(long *)PTR_DAT_06f6d618 + 0xe0) == 0) {
      thunk_FUN_02fdcff0(*(long *)PTR_DAT_06f6d618);
    }
    uVar12 = FUN_068f8810(uVar17,0,0);
    if ((uVar12 & 1) == 0) {
      uVar12 = FUN_03bbf6cc(in_stack_00000040,&stack0x00000668,
                            *(undefined8 *)
                             Unity_Entities_TypeManager_SharedTypeIndex<VRUtils>_TypeInfo);
      if ((uVar12 & 1) != 0) {
        if (in_stack_00000668 == 0) goto LAB_06762e2c;
        uVar17 = FUN_068d3d38(in_stack_00000668,0);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_02fdcff0(*(long *)puVar6);
        }
        uVar12 = FUN_068f8810(uVar17,0,0);
        if ((uVar12 & 1) != 0) goto LAB_06762584;
      }
    }
    else {
LAB_06762584:
      FUN_067295d4();
    }
  }
  if (unaff_w29 == 0) {
    if ((unaff_w26 & 1) == 0 && *(int *)(unaff_x20 + 0xe0) == 0) {
      uVar12 = FUN_06900a10(0);
      uVar17 = *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<TwoDragMe>_TypeInfo;
      if ((uVar12 & 1) == 0) {
        uVar20 = FUN_068dcf50(0);
      }
      else {
        uVar20 = FUN_068dcf78(0);
      }
      FUN_068cf75c(uVar17,uVar20,0);
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
  if (unaff_w24 != 0) {
    if (*(int *)(*(long *)PTR_DAT_06f9a540 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar13 = FUN_067676ac(0);
    if (lVar13 == 0) goto LAB_06762e2c;
    uVar7 = *(undefined4 *)(lVar13 + 0x50);
    FUN_06788be8(uVar7,&stack0x00000630,&stack0x0000062c,0);
    if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06748f48(0,unaff_x19 + 0x2c0,&stack0x00000630,in_stack_0000062c,1,0,1,
                 *(undefined8 *)Unity_Entities_TypeManager_SharedTypeIndex<VolatileFire>_TypeInfo,0)
    ;
    if (*(long *)(unaff_x19 + 0x220) == 0) goto LAB_06762e2c;
    FUN_06788d74(*(long *)(unaff_x19 + 0x220),*(undefined8 *)(unaff_x19 + 0x278),
                 *(undefined8 *)(unaff_x19 + 0x2c0),uVar7,0);
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
  if (bVar4 != 0) {
    uVar9 = 3;
  }
  if (unaff_w29 != 0) {
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
  FUN_0671e2d0(*(long *)(unaff_x19 + 0x230),1 < in_stack_00000898 & bVar4,0,0);
  if (*(long *)(unaff_x19 + 0x230) == 0) goto LAB_06762e2c;
  FUN_0671e408(*(long *)(unaff_x19 + 0x230),uVar9,0);
  FUN_067295d4();
  FUN_067295d4();
  uVar9 = FUN_06770690();
  uVar10 = FUN_0676cdd8();
  if (((uVar9 & 1) != 0) && ((uVar10 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x260) == 0) goto LAB_06762e2c;
    FUN_06736864();
    FUN_067295d4();
  }
  bVar5 = *(long *)(unaff_x20 + 0x1a8) != 0 & bVar4;
  if ((bStack0000000000000020 & bVar4) == 0) {
LAB_06762a14:
    bVar18 = false;
  }
  else if ((*(int *)(unaff_x20 + 0x1c4) == 1) ||
          ((*(int *)(unaff_x20 + 0x168) == 1 && (*(int *)(unaff_x20 + 0x16c) != 0)))) {
    bVar18 = true;
  }
  else {
    uVar12 = FUN_0676c0e0();
    if ((uVar12 & 1) == 0) goto LAB_06762a14;
    bVar18 = 0.0 < *(float *)(unaff_x20 + 0x214);
  }
  bVar3 = bVar18 ^ 1;
  if (bVar5 != 0 || in_stack_00000038 != 0) {
    bVar3 = 0;
  }
  if (*(long *)(unaff_x19 + 0xe0) == 0) {
    uVar11 = 1;
  }
  else {
    uVar11 = FUN_0670f6ac();
    uVar11 = ~uVar11 & 1;
  }
  plVar19 = (long *)(unaff_x19 + 0x278);
  plVar1 = (long *)(unaff_x19 + 0x288);
  if (in_stack_00000050 == 0) {
    if (bVar4 == 0) {
      return;
    }
    FUN_067600e4();
  }
  else {
    uVar7 = FUN_068e3d08(&stack0x00000890,0);
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
    FUN_0673d3c8(&stack0x000001c0,&stack0x00000180,in_stack_00000890,in_stack_00000894,uVar7,0,0);
    if (*(int *)(*(long *)System_Collections_Generic_List<TypeName>_TypeInfo + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_06748f48(0,unaff_x19 + 0x368,&stack0x00000570,0,1,0,1,
                 *(undefined8 *)OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo,0);
    if (bVar4 == 0) {
      if (*(long *)(unaff_x19 + 0x358) == 0) goto LAB_06762e2c;
      FUN_0673ac68(*(long *)(unaff_x19 + 0x358),&stack0x00000890,plVar19,0,plVar1,&stack0x00000670,
                   unaff_x19 + 0x2c8,0);
      goto LAB_06760c28;
    }
    FUN_067600e4();
    if (*(long *)(unaff_x19 + 0x358) == 0) goto LAB_06762e2c;
    FUN_0673ac68(*(long *)(unaff_x19 + 0x358),&stack0x00000890,plVar19,bVar3,plVar1,&stack0x00000670
                 ,unaff_x19 + 0x2c8,bVar18);
    FUN_067295d4();
  }
  lVar13 = *plVar19;
  if (bVar18 != false) {
    if (*(long *)(unaff_x19 + 0x360) == 0) goto LAB_06762e2c;
    FUN_0673adb0(*(long *)(unaff_x19 + 0x360),&stack0x00000568,1,uVar11,0);
    FUN_067295d4();
  }
  if (*(long *)(unaff_x20 + 0x1a8) != 0) {
    FUN_067295d4();
  }
  if ((bVar18 == false) && (((in_stack_00000050 == 0 || (in_stack_00000038 != 0)) || (bVar5 != 0))))
  {
    lVar14 = *plVar19;
    if (lVar14 == 0) goto LAB_06762e2c;
    lVar21 = *(long *)(unaff_x19 + 0x298);
    if (lVar21 == 0) goto LAB_06762e2c;
    in_stack_00000128 = *(undefined8 *)(lVar21 + 0x30);
    in_stack_00000120 = *(undefined8 *)(lVar21 + 0x28);
    in_stack_00000138 = *(undefined8 *)(lVar21 + 0x40);
    in_stack_00000130 = *(undefined8 *)(lVar21 + 0x38);
    in_stack_00000140 = *(undefined8 *)(lVar21 + 0x48);
    in_stack_00000150 = *(undefined8 *)(lVar14 + 0x28);
    in_stack_00000158 = *(undefined8 *)(lVar14 + 0x30);
    in_stack_00000160 = *(undefined8 *)(lVar14 + 0x38);
    in_stack_00000168 = *(undefined8 *)(lVar14 + 0x40);
    in_stack_00000170 = *(undefined8 *)(lVar14 + 0x48);
    uVar12 = FUN_0691198c(&stack0x00000150,&stack0x00000120,0);
    if ((uVar12 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x240) == 0) goto LAB_06762e2c;
      in_stack_000000e0 = CONCAT44(in_stack_00000894,in_stack_00000890);
      in_stack_000000e8 = CONCAT44(in_stack_0000089c,in_stack_00000898);
      in_stack_000000f0 = in_stack_000008a0;
      in_stack_000000f8 = in_stack_000008a8;
      in_stack_00000100 = in_stack_000008b0;
      in_stack_00000108 = in_stack_000008b8;
      in_stack_00000110 = in_stack_000008c0;
      FUN_0678f410(*(long *)(unaff_x19 + 0x240),&stack0x000000e0,lVar13,0);
      FUN_067295d4();
    }
  }
  if (((uVar10 | uVar9 ^ 0xffffffff) & 1) == 0) {
    FUN_067295d4();
  }
  if (*(long *)(unaff_x20 + 400) != 0) {
    uVar12 = FUN_0663aecc(*(long *)(unaff_x20 + 400),0);
    if ((uVar12 & 1) == 0) {
      return;
    }
    lVar13 = *plVar1;
    if (lVar13 != 0) {
      lVar14 = *(long *)(unaff_x20 + 400);
      if (lVar14 != 0) {
        in_stack_00000088 = *(undefined8 *)(lVar14 + 0x38);
        in_stack_00000080 = *(undefined8 *)(lVar14 + 0x30);
        in_stack_00000098 = *(undefined8 *)(lVar14 + 0x48);
        in_stack_00000090 = *(undefined8 *)(lVar14 + 0x40);
        in_stack_000000a0 = *(undefined8 *)(lVar14 + 0x50);
        in_stack_000000b0 = *(undefined8 *)(lVar13 + 0x28);
        in_stack_000000b8 = *(undefined8 *)(lVar13 + 0x30);
        in_stack_000000c0 = *(undefined8 *)(lVar13 + 0x38);
        in_stack_000000c8 = *(undefined8 *)(lVar13 + 0x40);
        in_stack_000000d0 = *(undefined8 *)(lVar13 + 0x48);
        uVar12 = FUN_0691198c(&stack0x000000b0,&stack0x00000080,0);
        if ((uVar12 & 1) != 0) {
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


