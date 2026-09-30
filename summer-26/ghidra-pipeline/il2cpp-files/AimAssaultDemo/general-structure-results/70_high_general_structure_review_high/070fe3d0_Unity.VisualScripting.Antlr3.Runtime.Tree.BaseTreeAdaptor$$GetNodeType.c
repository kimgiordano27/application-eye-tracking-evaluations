/*
FUNCTION_NAME: Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTreeAdaptor$$GetNodeType
ENTRY_POINT: 070fe3d0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void Unity_VisualScripting_Antlr3_Runtime_Tree_BaseTreeAdaptor__GetNodeType(void)

{
  long *plVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  undefined8 *puVar20;
  uint unaff_w23;
  long lVar21;
  long lVar22;
  long unaff_x26;
  long unaff_x27;
  uint unaff_w29;
  int iStack0000000000000028;
  byte bStack000000000000002c;
  byte bStack0000000000000030;
  int iStack0000000000000034;
  uint in_stack_00000038;
  ulong in_stack_00000048;
  int in_stack_00000050;
  long in_stack_00000060;
  long in_stack_00000068;
  int in_stack_00000070;
  undefined8 in_stack_00000078;
  uint in_stack_00000080;
  ulong in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined4 in_stack_00000120;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined4 in_stack_000001c0;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined4 in_stack_0000073c;
  long in_stack_00000778;
  undefined4 in_stack_0000078c;
  undefined4 in_stack_00000998;
  undefined4 in_stack_000009b0;
  undefined4 in_stack_000009b4;
  int in_stack_000009b8;
  undefined4 in_stack_000009bc;
  undefined8 in_stack_000009c0;
  undefined4 in_stack_000009c8;
  undefined4 in_stack_000009cc;
  undefined8 in_stack_000009d0;
  undefined8 in_stack_000009d8;
  undefined4 in_stack_000009e0;
  
  thunk_FUN_03798b70();
  FUN_070d69a8(0);
  if ((*unaff_x22 == 0) || (unaff_x27 == 0)) goto LAB_070ff6d4;
  FUN_075dcdd0();
  if (*(int *)(*(long *)PTR_DAT_07df4d48 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  uVar13 = FUN_06f350cc();
  VisualEffectActivationClip__CreatePlayable(uVar13,in_stack_00000998,0);
  iVar8 = FUN_070fa838();
  if (iVar8 == 1) {
    if (*unaff_x22 == 0) goto LAB_070ff6d4;
    FUN_075dcdd0();
  }
  if (*(int *)(*(long *)PTR_DAT_07df8330 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  FUN_075e7ba8(&stack0x000009f8);
  FUN_075d1274();
  if (unaff_w23 != 0) {
    if ((in_stack_00000080 & 1) == 0) {
      iVar8 = FUN_070fa838();
      if (iVar8 == 1) goto LAB_070fe978;
      if (*(long *)(unaff_x19 + 0x148) == 0) goto LAB_070ff6d4;
      FUN_071317b0(*(long *)(unaff_x19 + 0x148),&stack0x00000250,*(undefined8 *)(unaff_x19 + 0x260),
                   0);
    }
    else {
      uVar13 = *(undefined8 *)UnityEngine_PlayerLoop_PostLateUpdate_PlayerSendFrameComplete_var;
      iVar8 = FUN_070fa838();
      if (iVar8 == 1) {
        lVar15 = *(long *)(unaff_x19 + 0x298);
        if (lVar15 == 0) goto LAB_070ff6d4;
        lVar19 = *(long *)(lVar15 + 0x30);
        uVar9 = FUN_0711a3d8(lVar15,0);
        if (lVar19 == 0) goto LAB_070ff6d4;
        if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_070ff6e4;
        plVar16 = (long *)(lVar19 + (long)(int)uVar9 * 8 + 0x20);
        if (*plVar16 == 0) goto LAB_070ff6d4;
        uVar13 = *(undefined8 *)(*plVar16 + 0x58);
      }
      else {
        plVar16 = (long *)(unaff_x19 + 0x268);
      }
      iVar8 = FUN_070fa838();
      if (iVar8 == 1) {
        lVar15 = *(long *)(unaff_x19 + 0x298);
        if (lVar15 == 0) goto LAB_070ff6d4;
        uVar12 = FUN_0711a3d8(lVar15,0);
        uVar12 = FUN_0711a528(lVar15,uVar12,0);
      }
      else {
        if (*(int *)(*(long *)System_Action<LogEntry>_TypeInfo + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar12 = FUN_0712fef8(0);
      }
      FUN_07590518(&stack0x000007d0,uVar12,0);
      iVar8 = FUN_070fa838();
      if (iVar8 == 1) {
        lVar15 = *(long *)(unaff_x19 + 0x298);
        if (lVar15 == 0) goto LAB_070ff6d4;
        uVar12 = FUN_0711a3d8(lVar15,0);
        FUN_0711bef8(lVar15,&stack0x000002f0,uVar12,0);
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_07dfbd28 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        FUN_070d69a8(0,plVar16,&stack0x000007d0,0,1,1,uVar13,0);
      }
      if ((*plVar16 == 0) || (unaff_x27 == 0)) goto LAB_070ff6d4;
      FUN_075dcdd0();
      iVar8 = FUN_070fa838();
      if (iVar8 == 1) {
        if (*plVar16 == 0) goto LAB_070ff6d4;
        FUN_075dcdd0();
      }
      if (*(int *)(*(long *)PTR_DAT_07df8330 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      FUN_075e7ba8(&stack0x000009f8);
      FUN_075d1274();
      iVar8 = FUN_070fa838();
      if (iVar8 != 1) {
        lVar15 = *(long *)(unaff_x19 + 0x150);
        if (iStack0000000000000028 == 0) {
          if (lVar15 == 0) goto LAB_070ff6d4;
          FUN_0712ff44(lVar15,*(undefined8 *)(unaff_x19 + 0x260),*(undefined8 *)(unaff_x19 + 0x268),
                       0);
        }
        else {
          if (lVar15 == 0) goto LAB_070ff6d4;
          FUN_0712ff7c();
        }
        goto LAB_070fe96c;
      }
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_070ff6d4;
      uVar9 = FUN_0711a3d8(*(long *)(unaff_x19 + 0x298),0);
      if (*(long *)(unaff_x19 + 0x298) == 0) goto LAB_070ff6d4;
      uVar14 = FUN_0711a434(*(long *)(unaff_x19 + 0x298),0);
      lVar15 = *(long *)(unaff_x19 + 0x298);
      if ((lVar15 == 0) || (lVar19 = *(long *)(lVar15 + 0x30), lVar19 == 0)) goto LAB_070ff6d4;
      if (*(uint *)(lVar19 + 0x18) <= uVar9) {
LAB_070ff6e4:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7bc();
      }
      lVar21 = *(long *)(unaff_x19 + 0x150);
      uVar13 = *(undefined8 *)(unaff_x19 + 0x238);
      uVar17 = *(undefined8 *)(lVar19 + (long)(int)uVar9 * 8 + 0x20);
      if ((uVar14 & 1) == 0) {
        if (iStack0000000000000028 != 0) {
          if (lVar21 == 0) goto LAB_070ff6d4;
          uVar18 = *(undefined8 *)(unaff_x19 + 0x270);
          goto LAB_070fe8e0;
        }
        if (lVar21 == 0) goto LAB_070ff6d4;
        FUN_0712ff44(lVar21,uVar13,uVar17,0);
      }
      else {
        uVar9 = FUN_0711a3fc(lVar15,0);
        if (*(uint *)(lVar19 + 0x18) <= uVar9) goto LAB_070ff6e4;
        if (lVar21 == 0) goto LAB_070ff6d4;
        uVar18 = *(undefined8 *)(lVar19 + (long)(int)uVar9 * 8 + 0x20);
LAB_070fe8e0:
        FUN_0712ff7c(lVar21,uVar13,uVar17,uVar18,0);
      }
      puVar5 = PTR_DAT_07dfc190;
      if (in_stack_00000050 - 0xdcU < 0x1f) {
        lVar19 = *(long *)(unaff_x19 + 0x150);
        lVar15 = *(long *)PTR_DAT_07dfc190;
        if (*(int *)(lVar15 + 0xe4) == 0) {
          thunk_FUN_03798b70();
          lVar15 = *(long *)puVar5;
        }
        if (lVar19 == 0) goto LAB_070ff6d4;
        puVar20 = (undefined8 *)(lVar19 + 0xb8);
        *puVar20 = **(undefined8 **)(lVar15 + 0xb8);
        thunk_FUN_037aeb94(puVar20);
      }
    }
LAB_070fe96c:
    FUN_0709c924();
  }
LAB_070fe978:
  if (*(char *)(unaff_x19 + 0x140) != '\0') {
    if (*(long *)(unaff_x19 + 0x158) == 0) goto LAB_070ff6d4;
    FUN_0712dc40(*(long *)(unaff_x19 + 0x158),*(undefined8 *)(unaff_x19 + 0x238),
                 *(undefined8 *)(unaff_x19 + 0x260),0);
    FUN_0709c924();
  }
  if ((in_stack_00000048 & 0x100000000) != 0) {
    if (*(long *)(unaff_x19 + 0x300) == 0) goto LAB_070ff6d4;
    FUN_0712a660(*(long *)(unaff_x19 + 0x300),&stack0x000009f0,&stack0x00000790,&stack0x0000078c,0);
    if (*(int *)(*(long *)PTR_DAT_07dfbd28 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_070d69a8(0,unaff_x19 + 800,&stack0x00000790,in_stack_0000078c,1,0,
                 *(undefined8 *)PTR_DAT_07dfc158,0);
    if (*(long *)(unaff_x19 + 0x300) == 0) goto LAB_070ff6d4;
    FUN_0712a5fc(*(long *)(unaff_x19 + 0x300),&stack0x00000780,0);
    FUN_0709c924();
  }
  if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_070ff6d4;
  uVar14 = FUN_06f30984(*(long *)(unaff_x20 + 0x1a0),0);
  if ((uVar14 & 1) != 0) {
    FUN_0709c924();
  }
  bVar3 = *(byte *)(unaff_x20 + 0x1e0);
  iVar8 = FUN_070fa838();
  if (iVar8 == 1) {
    lVar15 = *(long *)(unaff_x19 + 0x298);
    if (lVar15 == 0) goto LAB_070ff6d4;
    if ((*(char *)(lVar15 + 0x15) != '\0') &&
       ((in_stack_00000050 == 0xdc || (*(char *)(unaff_x19 + 0x134) == '\0')))) {
      FUN_0711be64(lVar15,0);
    }
    FUN_07100308();
  }
  else {
    uVar12 = 2;
    if (unaff_w29 == 0) {
      uVar12 = 0;
    }
    uVar2 = 0;
    if (1 < in_stack_000009b8) {
      uVar2 = uVar12;
    }
    iVar8 = 0;
    if ((unaff_w29 == 0 && in_stack_00000070 == 0) && bVar3 != 0) {
      iVar8 = 3;
    }
    if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_070ff6d4;
    uVar14 = FUN_06f2c330(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar14 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x1a0) == 0) goto LAB_070ff6d4;
      if (*(char *)(*(long *)(unaff_x20 + 0x1a0) + 0x20) != '\0') {
        iVar8 = 0;
      }
    }
    if ((in_stack_000009b8 < 2) || (in_stack_00000070 == 0)) {
joined_r0x070ff6cc:
      if (in_stack_00000078._4_4_ == 0) goto LAB_070febbc;
LAB_070febcc:
      lVar15 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar15 == 0) goto LAB_070ff6d4;
      FUN_071346f8(lVar15,*(undefined8 *)(unaff_x19 + 0x228),*(undefined8 *)(unaff_x19 + 0x270),
                   *(undefined8 *)(unaff_x19 + 0x238),0);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_07dfbd28 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar14 = UnityEngine_VFX_EventAttributeInt_<>c__<_ctor>b__0_1(0);
      if ((uVar14 & 1) == 0) goto joined_r0x070ff6cc;
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_070ff6d4;
      if ((unaff_w29 & 1) != 0 || *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10) != 500)
      goto joined_r0x070ff6cc;
      if (iVar8 == 0) {
        iVar8 = 2;
        goto joined_r0x070ff6cc;
      }
      if (iVar8 != 3) goto joined_r0x070ff6cc;
      iVar8 = 1;
      if (in_stack_00000078._4_4_ != 0) goto LAB_070febcc;
LAB_070febbc:
      lVar15 = *(long *)(unaff_x19 + 0x198);
    }
    if (lVar15 == 0) goto LAB_070ff6d4;
    FUN_070904f4(lVar15,uVar2,0,0);
    FUN_0709062c(lVar15,iVar8,0);
    puVar5 = System_Action<Quaternion>_TypeInfo;
    lVar21 = *(long *)(unaff_x19 + 0x108);
    lVar19 = *(long *)System_Action<Quaternion>_TypeInfo;
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_03798b70();
      lVar19 = *(long *)puVar5;
    }
    lVar22 = *(long *)(*(long *)(lVar19 + 0xb8) + 0x10);
    if (lVar22 == 0) {
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar19 = *(long *)System_Action<Quaternion>_TypeInfo;
      }
      puVar5 = System_Action<Quaternion>_TypeInfo;
      uVar13 = **(undefined8 **)(lVar19 + 0xb8);
      lVar22 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07dfc130);
      FUN_04fbae00(lVar22,uVar13,
                   *(undefined8 *)System_Action<PxrEventSenseDataProviderStateChanged>_TypeInfo,0);
      plVar16 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
      *plVar16 = lVar22;
      thunk_FUN_037aeb94(plVar16,lVar22);
      unaff_x26 = in_stack_00000060;
    }
    if (lVar21 == 0) goto LAB_070ff6d4;
    lVar19 = FUN_049cf55c(lVar21,lVar22,*(undefined8 *)PTR_DAT_07dfc120);
    if ((lVar19 == 0) && (*(int *)(unaff_x20 + 0xe8) == 0)) {
      if (unaff_x26 == 0) goto LAB_070ff6d4;
      iVar8 = FUN_07557bb4(unaff_x26,0);
      if (iVar8 == 4) goto LAB_070fecf0;
      uVar12 = 1;
    }
    else {
LAB_070fecf0:
      uVar12 = 0;
    }
    uVar14 = FUN_075b5ca8(0);
    if ((uVar14 & 1) != 0) {
      FUN_07090b20(0,0,0,0x3f800000,lVar15,uVar12,0);
    }
    FUN_0709c924();
  }
  if (unaff_x26 == 0) goto LAB_070ff6d4;
  iVar8 = FUN_07557bb4(unaff_x26,0);
  if ((iVar8 == 1) && (*(int *)(unaff_x20 + 0xe8) != 1)) {
    uVar13 = FUN_07572c60(0);
    puVar5 = PTR_DAT_07d86398;
    if (*(int *)(*(long *)PTR_DAT_07d86398 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)PTR_DAT_07d86398);
    }
    uVar14 = FUN_075aa744(uVar13,0,0);
    if ((uVar14 & 1) == 0) {
      uVar14 = FUN_03f0eaa0(unaff_x26,&stack0x00000778,*(undefined8 *)System_Action<Pose>_TypeInfo);
      if ((uVar14 & 1) != 0) {
        if (in_stack_00000778 == 0) goto LAB_070ff6d4;
        uVar13 = FUN_0757ad64(in_stack_00000778,0);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_03798b70(*(long *)puVar5);
        }
        uVar14 = FUN_075aa744(uVar13,0,0);
        if ((uVar14 & 1) != 0) goto LAB_070fed94;
      }
    }
    else {
LAB_070fed94:
      FUN_0709c924();
    }
  }
  if (in_stack_00000070 == 0) {
    if ((unaff_w23 & 1) == 0 && *(int *)(unaff_x20 + 0xe8) == 0) {
      uVar14 = FUN_075b587c(0);
      uVar13 = *(undefined8 *)PTR_DAT_07dfc1d0;
      if ((uVar14 & 1) == 0) {
        uVar17 = FUN_07586e34(0);
      }
      else {
        uVar17 = FUN_07586ec0(0);
      }
      FUN_07573ea8(uVar13,uVar17,0);
    }
  }
  else {
    iVar8 = FUN_070fa838();
    if (((iVar8 != 1) || (*(char *)(unaff_x19 + 0x134) == '\0')) || ((in_stack_00000088 & 1) != 0))
    {
      if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_070ff6d4;
      FUN_0712dc40(*(long *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x238),
                   *(undefined8 *)(unaff_x19 + 0x260),0);
      FUN_0709c924();
    }
  }
  if (unaff_w29 != 0) {
    if (*(int *)(*(long *)PTR_DAT_07d97de8 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar15 = FUN_070fbc78();
    if (lVar15 == 0) goto LAB_070ff6d4;
    uVar12 = *(undefined4 *)(lVar15 + 0x48);
    FUN_0712c8c8(uVar12,&stack0x00000740,&stack0x0000073c,0);
    if (*(int *)(*(long *)PTR_DAT_07dfbd28 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_070d69a8(0,unaff_x19 + 0x278,&stack0x00000740,in_stack_0000073c,1,1,
                 *(undefined8 *)UnityEngine_Vector3_var,0);
    if (*(long *)(unaff_x19 + 0x1b8) == 0) goto LAB_070ff6d4;
    FUN_0712c968(*(long *)(unaff_x19 + 0x1b8),*(undefined8 *)(unaff_x19 + 0x228),
                 *(undefined8 *)(unaff_x19 + 0x278),uVar12,0);
    FUN_0709c924();
  }
  if ((in_stack_00000088 >> 0x28 & 1) != 0) {
    FUN_07590518(&stack0x00000700,0x2e,0);
    if (*(int *)(*(long *)PTR_DAT_07dfbd28 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_070d69a8(0,unaff_x19 + 0x280,&stack0x00000700,0,1,1,
                 *(undefined8 *)UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_var,0);
    FUN_07590518(&stack0x000006c0,0,0);
    FUN_070d69a8(0,unaff_x19 + 0x288,&stack0x000006c0,0,1,1,
                 *(undefined8 *)UnityEngine_XR_XRMeshSubsystem_var,0);
    if (*(int *)(*(long *)UnityEngine_XR_ARSubsystems_XRCpuImage_var + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_070b7090();
    if (*(long *)(unaff_x19 + 0x160) == 0) goto LAB_070ff6d4;
    FUN_070b5a7c(*(long *)(unaff_x19 + 0x160),*(undefined8 *)(unaff_x19 + 0x280),
                 *(undefined8 *)(unaff_x19 + 0x288),0);
    FUN_0709c924();
  }
  if ((in_stack_00000038 & 1) != 0) {
    FUN_0709c924();
  }
  uVar9 = 0;
  if (bVar3 != 0) {
    uVar9 = 3;
  }
  if (in_stack_00000070 != 0) {
    if (*(long *)(unaff_x19 + 0x1b0) == 0) goto LAB_070ff6d4;
    if (499 < *(int *)(*(long *)(unaff_x19 + 0x1b0) + 0x10)) {
      if (in_stack_000009b8 < 2) {
        uVar9 = 0;
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_07dfbd28 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar9 = UnityEngine_VFX_EventAttributeInt_<>c__<_ctor>b__0_1(0);
        uVar9 = uVar9 & 1;
      }
    }
  }
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_070ff6d4;
  FUN_070904f4(*(long *)(unaff_x19 + 0x1c8),
               (1 < in_stack_000009b8 & bVar3) != 0 & bStack000000000000002c,0,0);
  if (*(long *)(unaff_x19 + 0x1c8) == 0) goto LAB_070ff6d4;
  FUN_0709062c(*(long *)(unaff_x19 + 0x1c8),uVar9,0);
  FUN_0709c924();
  FUN_0709c924();
  FUN_07100490();
  FUN_071006e8();
  uVar9 = FUN_070a3b70();
  uVar10 = FUN_070a3938();
  if (((uVar9 & 1) != 0) && ((uVar10 & 1) != 0)) {
    if (*(long *)(unaff_x19 + 0x200) == 0) goto LAB_070ff6d4;
    FUN_070b03b8();
    FUN_0709c924();
  }
  bVar4 = *(long *)(unaff_x20 + 0x1b0) != 0 & bVar3;
  if (((bStack0000000000000030 & bVar3) == 0) ||
     (((*(int *)(unaff_x20 + 0x1cc) != 1 &&
       ((*(int *)(unaff_x20 + 0x170) != 1 || (*(int *)(unaff_x20 + 0x174) == 0)))) &&
      ((uVar14 = FUN_070a3e84(), (uVar14 & 1) == 0 || (*(float *)(unaff_x20 + 0x224) <= 0.0)))))) {
    uVar11 = 0;
LAB_070ff284:
    bVar6 = uVar11 != 0;
    uVar11 = uVar11 ^ 1;
    if (bVar4 != 0 || in_stack_00000068 != 0) {
      uVar11 = 0;
    }
    bVar7 = uVar11 != 0;
    if (*(long *)(unaff_x19 + 0xe8) == 0) goto LAB_070ff2d4;
    uVar11 = FUN_0707a544(*(long *)(unaff_x19 + 0xe8),*(undefined1 *)(unaff_x20 + 0x1e0),0);
    uVar11 = ~uVar11 & 1;
  }
  else {
    if (*(long *)(unaff_x19 + 0xe8) != 0) {
      uVar11 = FUN_0707a448(*(long *)(unaff_x19 + 0xe8),0);
      uVar11 = uVar11 & 1;
      goto LAB_070ff284;
    }
    bVar7 = false;
    bVar6 = true;
LAB_070ff2d4:
    uVar11 = 1;
  }
  plVar16 = (long *)(unaff_x19 + 0x228);
  plVar1 = (long *)(unaff_x19 + 0x238);
  if (iStack0000000000000034 == 0) {
    if (bVar3 == 0) {
      return;
    }
    FUN_070fc204();
    uVar13 = *(undefined8 *)(unaff_x19 + 0x228);
    if (bVar6 != false) goto LAB_070ff468;
LAB_070ff4bc:
    bVar6 = false;
  }
  else {
    uVar12 = FUN_07590510(&stack0x000009b0,0);
    if (*(int *)(*(long *)PTR_DAT_07dfc128 + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)PTR_DAT_07dfc128);
    }
    in_stack_00000190 = CONCAT44(in_stack_000009b4,in_stack_000009b0);
    in_stack_00000198 = CONCAT44(in_stack_000009bc,in_stack_000009b8);
    in_stack_000001a0 = in_stack_000009c0;
    in_stack_000001a8 = CONCAT44(in_stack_000009cc,in_stack_000009c8);
    in_stack_000001b0 = in_stack_000009d0;
    in_stack_000001b8 = in_stack_000009d8;
    in_stack_000001c0 = in_stack_000009e0;
    FUN_070bb2c8(&stack0x000001d0,&stack0x00000190,in_stack_000009b0,in_stack_000009b4,uVar12,0,0);
    if (*(int *)(*(long *)PTR_DAT_07dfbd28 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    FUN_070d69a8(0,unaff_x19 + 0x318,&stack0x00000680,0,1,1,*(undefined8 *)PTR_DAT_07dfc0f0,0);
    if (bVar3 == 0) {
      if (*(long *)(unaff_x19 + 0x308) == 0) goto LAB_070ff6d4;
      FUN_070b8728(*(long *)(unaff_x19 + 0x308),&stack0x000009b0,plVar16,0,plVar1,&stack0x00000780,
                   unaff_x19 + 0x280,0);
      goto Unity_VisualScripting_Antlr3_Runtime_RecognitionException__set_Char;
    }
    FUN_070fc204();
    if (*(long *)(unaff_x19 + 0x308) == 0) goto LAB_070ff6d4;
    FUN_070b8728(*(long *)(unaff_x19 + 0x308),&stack0x000009b0,plVar16,bVar7,plVar1,&stack0x00000780
                 ,unaff_x19 + 0x280,bVar6);
    FUN_0709c924();
    uVar13 = *(undefined8 *)(unaff_x19 + 0x228);
    if (bVar6 == false) goto LAB_070ff4bc;
LAB_070ff468:
    if (*(long *)(unaff_x19 + 0x310) == 0) goto LAB_070ff6d4;
    bVar6 = true;
    FUN_070b8874(*(long *)(unaff_x19 + 0x310),&stack0x00000678,1,uVar11,0);
    FUN_0709c924();
  }
  if (*(long *)(unaff_x20 + 0x1b0) != 0) {
    FUN_0709c924();
  }
  if ((!bVar6) && (((iStack0000000000000034 == 0 || (in_stack_00000068 != 0)) || (bVar4 != 0)))) {
    lVar15 = *plVar16;
    if (lVar15 == 0) goto LAB_070ff6d4;
    lVar19 = *(long *)(unaff_x19 + 0x250);
    if (lVar19 == 0) goto LAB_070ff6d4;
    in_stack_00000138 = *(undefined8 *)(lVar19 + 0x30);
    in_stack_00000130 = *(undefined8 *)(lVar19 + 0x28);
    in_stack_00000148 = *(undefined8 *)(lVar19 + 0x40);
    in_stack_00000140 = *(undefined8 *)(lVar19 + 0x38);
    in_stack_00000150 = *(undefined8 *)(lVar19 + 0x48);
    in_stack_00000160 = *(undefined8 *)(lVar15 + 0x28);
    in_stack_00000168 = *(undefined8 *)(lVar15 + 0x30);
    in_stack_00000170 = *(undefined8 *)(lVar15 + 0x38);
    in_stack_00000178 = *(undefined8 *)(lVar15 + 0x40);
    in_stack_00000180 = *(undefined8 *)(lVar15 + 0x48);
    uVar14 = FUN_075cb2dc(&stack0x00000160,&stack0x00000130,0);
    if ((uVar14 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x1d8) == 0) goto LAB_070ff6d4;
      in_stack_000000f0 = CONCAT44(in_stack_000009b4,in_stack_000009b0);
      in_stack_000000f8 = CONCAT44(in_stack_000009bc,in_stack_000009b8);
      in_stack_00000100 = in_stack_000009c0;
      in_stack_00000108 = CONCAT44(in_stack_000009cc,in_stack_000009c8);
      in_stack_00000110 = in_stack_000009d0;
      in_stack_00000118 = in_stack_000009d8;
      in_stack_00000120 = in_stack_000009e0;
      FUN_07135bcc(*(long *)(unaff_x19 + 0x1d8),&stack0x000000f0,uVar13,0);
      FUN_0709c924();
    }
  }
  if (((uVar10 | uVar9 ^ 0xffffffff) & 1) == 0) {
    FUN_0709c924();
  }
  if (*(long *)(unaff_x20 + 0x1a0) != 0) {
    uVar14 = FUN_06f2c330(*(long *)(unaff_x20 + 0x1a0),0);
    if ((uVar14 & 1) == 0) {
      return;
    }
    lVar15 = *plVar1;
    if (lVar15 != 0) {
      lVar19 = *(long *)(unaff_x20 + 0x1a0);
      if (lVar19 != 0) {
        in_stack_00000098 = *(undefined8 *)(lVar19 + 0x38);
        in_stack_00000090 = *(undefined8 *)(lVar19 + 0x30);
        in_stack_000000a8 = *(undefined8 *)(lVar19 + 0x48);
        in_stack_000000a0 = *(undefined8 *)(lVar19 + 0x40);
        in_stack_000000b0 = *(undefined8 *)(lVar19 + 0x50);
        in_stack_000000c0 = *(undefined8 *)(lVar15 + 0x28);
        in_stack_000000c8 = *(undefined8 *)(lVar15 + 0x30);
        in_stack_000000d0 = *(undefined8 *)(lVar15 + 0x38);
        in_stack_000000d8 = *(undefined8 *)(lVar15 + 0x40);
        in_stack_000000e0 = *(undefined8 *)(lVar15 + 0x48);
        uVar14 = FUN_075cb2dc(&stack0x000000c0,&stack0x00000090,0);
        if ((uVar14 & 1) != 0) {
          return;
        }
        if (*(long *)(unaff_x20 + 0x1a0) != 0) {
          if (*(char *)(*(long *)(unaff_x20 + 0x1a0) + 0x20) == '\0') {
            return;
          }
          if (*(long *)(unaff_x19 + 0x1f0) != 0) {
            FUN_0712dc40(*(long *)(unaff_x19 + 0x1f0),*(undefined8 *)(unaff_x19 + 0x238),
                         *(undefined8 *)(unaff_x19 + 600),0);
            if (*(long *)(unaff_x19 + 0x1f0) != 0) {
              *(undefined1 *)(*(long *)(unaff_x19 + 0x1f0) + 0xcd) = 1;
Unity_VisualScripting_Antlr3_Runtime_RecognitionException__set_Char:
              FUN_0709c924();
              return;
            }
          }
        }
      }
    }
  }
LAB_070ff6d4:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


