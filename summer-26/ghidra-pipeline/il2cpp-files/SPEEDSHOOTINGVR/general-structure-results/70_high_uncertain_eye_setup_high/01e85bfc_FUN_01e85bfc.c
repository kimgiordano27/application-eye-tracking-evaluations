/*
FUNCTION_NAME: FUN_01e85bfc
ENTRY_POINT: 01e85bfc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_01e85bfc(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  
  puVar2 = PTR_DAT_0234c2e8;
  if ((DAT_0247e2c2 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234ba20);
    FUN_00fdc2e4(PTR_DAT_0235f358);
    FUN_00fdc2e4(PTR_DAT_0235f398);
    FUN_00fdc2e4(PTR_DAT_0234c2e8);
    FUN_00fdc2e4(PTR_DAT_0235f458);
    FUN_00fdc2e4(PTR_DAT_0234bad0);
    FUN_00fdc2e4(PTR_DAT_0235f460);
    FUN_00fdc2e4(PTR_DAT_0235f468);
    FUN_00fdc2e4(PTR_DAT_0235f290);
    DAT_0247e2c2 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  iVar4 = FUN_01e79c44();
  if ((param_1 == 0) && (iVar4 == 3)) {
    if (*(int *)(*(long *)PTR_DAT_0234ba20 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01fd0f18(*(undefined8 *)PTR_DAT_0235f290,0);
    param_1 = -1;
  }
  puVar3 = PTR_DAT_0235f358;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar5 = FUN_01e79184();
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01022c14(lVar7);
    lVar7 = *(long *)puVar3;
  }
  uVar6 = OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY
                    (uVar5,**(undefined8 **)(lVar7 + 0xb8),0);
  lVar7 = *(long *)puVar2;
  if ((uVar6 & 1) != 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01022c14(lVar7);
    }
    if (DAT_0247e1e0 == '\0') {
      FUN_00fdc2e4(PTR_DAT_0234c2e8);
      DAT_0247e1e0 = '\x01';
    }
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01022c14(lVar7);
      lVar7 = *(long *)puVar2;
    }
    if (*(int *)(*(long *)(lVar7 + 0xb8) + 0x5d8) == 1) {
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01022c14(lVar7);
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      iVar4 = FUN_01ebf1e0(param_1,0xffffffff,param_2,*(long *)(*(long *)puVar2 + 0xb8) + 0x280,0);
      if (iVar4 != 0) {
        return 0;
      }
      plVar11 = (long *)(param_3 + 8);
      if ((*plVar11 == 0) || (*(int *)(*plVar11 + 0x18) != 0x1a)) {
        lVar7 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0235f458,0x1a);
        *plVar11 = lVar7;
        thunk_FUN_0106e12c(plVar11,lVar7);
      }
      plVar10 = (long *)(param_3 + 10);
      if ((*plVar10 == 0) || (*(int *)(*plVar10 + 0x18) != 0x1a)) {
        lVar7 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0235f468,0x1a);
        *plVar10 = lVar7;
        thunk_FUN_0106e12c(plVar10,lVar7);
      }
      plVar12 = (long *)(param_3 + 0xe);
      if ((*plVar12 == 0) || (*(int *)(*plVar12 + 0x18) != 5)) {
        lVar7 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0234bad0,5);
        *plVar12 = lVar7;
        thunk_FUN_0106e12c(plVar12,lVar7);
      }
      plVar12 = (long *)(param_3 + 0x1a);
      if ((*plVar12 == 0) || (*(int *)(*plVar12 + 0x18) != 5)) {
        lVar7 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0235f460,5);
        *plVar12 = lVar7;
        thunk_FUN_0106e12c(plVar12,lVar7);
      }
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01022c14();
        lVar7 = *(long *)puVar2;
      }
      lVar8 = *(long *)(lVar7 + 0xb8);
      lVar7 = *(long *)(param_3 + 8);
      *param_3 = *(undefined4 *)(lVar8 + 0x280);
      uVar5 = *(undefined8 *)(lVar8 + 0x294);
      uVar14 = *(undefined8 *)(lVar8 + 0x28c);
      uVar13 = *(undefined8 *)(lVar8 + 0x284);
      param_3[7] = *(undefined4 *)(lVar8 + 0x29c);
      *(undefined8 *)(param_3 + 5) = uVar5;
      *(undefined8 *)(param_3 + 3) = uVar14;
      *(undefined8 *)(param_3 + 1) = uVar13;
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x18) != 0) {
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x2a0);
          *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x2a8)
          ;
          *(undefined8 *)(lVar7 + 0x20) = uVar5;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_01e86ea0;
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 700);
          *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x2c4)
          ;
          *(undefined8 *)(lVar7 + 0x30) = uVar5;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_01e86ea0;
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x2d8);
          *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x2e0)
          ;
          *(undefined8 *)(lVar7 + 0x40) = uVar5;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_01e86ea0;
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x2f4);
          *(undefined8 *)(lVar7 + 0x58) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x2fc)
          ;
          *(undefined8 *)(lVar7 + 0x50) = uVar5;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 5) goto LAB_01e86ea0;
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x310);
          *(undefined8 *)(lVar7 + 0x68) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x318)
          ;
          *(undefined8 *)(lVar7 + 0x60) = uVar5;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 6) goto LAB_01e86ea0;
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x32c);
          *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x334)
          ;
          *(undefined8 *)(lVar7 + 0x70) = uVar5;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 7) goto LAB_01e86ea0;
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x348);
          *(undefined8 *)(lVar7 + 0x88) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x350)
          ;
          *(undefined8 *)(lVar7 + 0x80) = uVar5;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 8) goto LAB_01e86ea0;
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x364);
          *(undefined8 *)(lVar7 + 0x98) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x36c)
          ;
          *(undefined8 *)(lVar7 + 0x90) = uVar5;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 9) goto LAB_01e86ea0;
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x380);
          *(undefined8 *)(lVar7 + 0xa8) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x388)
          ;
          *(undefined8 *)(lVar7 + 0xa0) = uVar5;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 10) goto LAB_01e86ea0;
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x39c);
          *(undefined8 *)(lVar7 + 0xb8) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x3a4)
          ;
          *(undefined8 *)(lVar7 + 0xb0) = uVar5;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0xb) goto LAB_01e86ea0;
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x3b8);
          *(undefined8 *)(lVar7 + 200) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x3c0);
          *(undefined8 *)(lVar7 + 0xc0) = uVar5;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0xc) goto LAB_01e86ea0;
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x3d4);
          *(undefined8 *)(lVar7 + 0xd8) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x3dc)
          ;
          *(undefined8 *)(lVar7 + 0xd0) = uVar5;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0xd) goto LAB_01e86ea0;
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x3f0);
          *(undefined8 *)(lVar7 + 0xe8) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x3f8)
          ;
          *(undefined8 *)(lVar7 + 0xe0) = uVar5;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0xe) goto LAB_01e86ea0;
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x40c);
          *(undefined8 *)(lVar7 + 0xf8) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x414)
          ;
          *(undefined8 *)(lVar7 + 0xf0) = uVar5;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0xf) goto LAB_01e86ea0;
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x428);
          *(undefined8 *)(lVar7 + 0x108) =
               *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x430);
          *(undefined8 *)(lVar7 + 0x100) = uVar5;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0x10) goto LAB_01e86ea0;
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x444);
          *(undefined8 *)(lVar7 + 0x118) =
               *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x44c);
          *(undefined8 *)(lVar7 + 0x110) = uVar5;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0x11) goto LAB_01e86ea0;
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x460);
          *(undefined8 *)(lVar7 + 0x128) =
               *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x468);
          *(undefined8 *)(lVar7 + 0x120) = uVar5;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0x12) goto LAB_01e86ea0;
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x47c);
          *(undefined8 *)(lVar7 + 0x138) =
               *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x484);
          *(undefined8 *)(lVar7 + 0x130) = uVar5;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0x13) goto LAB_01e86ea0;
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x498);
          *(undefined8 *)(lVar7 + 0x148) =
               *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x4a0);
          *(undefined8 *)(lVar7 + 0x140) = uVar5;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0x14) goto LAB_01e86ea0;
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x4b4);
          *(undefined8 *)(lVar7 + 0x158) =
               *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x4bc);
          *(undefined8 *)(lVar7 + 0x150) = uVar5;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0x15) goto LAB_01e86ea0;
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x4d0);
          *(undefined8 *)(lVar7 + 0x168) =
               *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x4d8);
          *(undefined8 *)(lVar7 + 0x160) = uVar5;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0x16) goto LAB_01e86ea0;
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x4ec);
          *(undefined8 *)(lVar7 + 0x178) =
               *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x4f4);
          *(undefined8 *)(lVar7 + 0x170) = uVar5;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0x17) goto LAB_01e86ea0;
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x508);
          *(undefined8 *)(lVar7 + 0x188) =
               *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x510);
          *(undefined8 *)(lVar7 + 0x180) = uVar5;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0x18) goto LAB_01e86ea0;
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x524);
          *(undefined8 *)(lVar7 + 0x198) =
               *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x52c);
          *(undefined8 *)(lVar7 + 400) = uVar5;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0x19) goto LAB_01e86ea0;
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x540);
          *(undefined8 *)(lVar7 + 0x1a8) =
               *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x548);
          *(undefined8 *)(lVar7 + 0x1a0) = uVar5;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0x1a) goto LAB_01e86ea0;
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x55c);
          *(undefined8 *)(lVar7 + 0x1b8) =
               *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x564);
          *(undefined8 *)(lVar7 + 0x1b0) = uVar5;
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(int *)(lVar7 + 0x18) == 0) goto LAB_01e86ea0;
          uVar15 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x2b8);
          *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x2b0)
          ;
          *(undefined4 *)(lVar7 + 0x28) = uVar15;
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_01e86ea0;
          uVar15 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x2d4);
          *(undefined8 *)(lVar7 + 0x2c) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x2cc)
          ;
          *(undefined4 *)(lVar7 + 0x34) = uVar15;
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_01e86ea0;
          uVar15 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x2f0);
          *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x2e8)
          ;
          *(undefined4 *)(lVar7 + 0x40) = uVar15;
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_01e86ea0;
          uVar15 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30c);
          *(undefined8 *)(lVar7 + 0x44) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x304)
          ;
          *(undefined4 *)(lVar7 + 0x4c) = uVar15;
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 5) goto LAB_01e86ea0;
          uVar15 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x328);
          *(undefined8 *)(lVar7 + 0x50) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 800);
          *(undefined4 *)(lVar7 + 0x58) = uVar15;
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 6) goto LAB_01e86ea0;
          uVar15 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x344);
          *(undefined8 *)(lVar7 + 0x5c) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x33c)
          ;
          *(undefined4 *)(lVar7 + 100) = uVar15;
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 7) goto LAB_01e86ea0;
          uVar15 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x360);
          *(undefined8 *)(lVar7 + 0x68) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x358)
          ;
          *(undefined4 *)(lVar7 + 0x70) = uVar15;
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 8) goto LAB_01e86ea0;
          uVar15 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x37c);
          *(undefined8 *)(lVar7 + 0x74) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x374)
          ;
          *(undefined4 *)(lVar7 + 0x7c) = uVar15;
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 9) goto LAB_01e86ea0;
          uVar15 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x398);
          *(undefined8 *)(lVar7 + 0x80) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x390)
          ;
          *(undefined4 *)(lVar7 + 0x88) = uVar15;
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 10) goto LAB_01e86ea0;
          uVar15 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x3b4);
          *(undefined8 *)(lVar7 + 0x8c) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x3ac)
          ;
          *(undefined4 *)(lVar7 + 0x94) = uVar15;
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0xb) goto LAB_01e86ea0;
          uVar15 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x3d0);
          *(undefined8 *)(lVar7 + 0x98) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x3c8)
          ;
          *(undefined4 *)(lVar7 + 0xa0) = uVar15;
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0xc) goto LAB_01e86ea0;
          uVar15 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x3ec);
          *(undefined8 *)(lVar7 + 0xa4) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x3e4)
          ;
          *(undefined4 *)(lVar7 + 0xac) = uVar15;
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0xd) goto LAB_01e86ea0;
          uVar15 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x408);
          *(undefined8 *)(lVar7 + 0xb0) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x400)
          ;
          *(undefined4 *)(lVar7 + 0xb8) = uVar15;
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0xe) goto LAB_01e86ea0;
          uVar15 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x424);
          *(undefined8 *)(lVar7 + 0xbc) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x41c)
          ;
          *(undefined4 *)(lVar7 + 0xc4) = uVar15;
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0xf) goto LAB_01e86ea0;
          uVar15 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x440);
          *(undefined8 *)(lVar7 + 200) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x438);
          *(undefined4 *)(lVar7 + 0xd0) = uVar15;
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0x10) goto LAB_01e86ea0;
          uVar15 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x45c);
          *(undefined8 *)(lVar7 + 0xd4) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x454)
          ;
          *(undefined4 *)(lVar7 + 0xdc) = uVar15;
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0x11) goto LAB_01e86ea0;
          uVar15 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x478);
          *(undefined8 *)(lVar7 + 0xe0) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x470)
          ;
          *(undefined4 *)(lVar7 + 0xe8) = uVar15;
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0x12) goto LAB_01e86ea0;
          uVar15 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x494);
          *(undefined8 *)(lVar7 + 0xec) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x48c)
          ;
          *(undefined4 *)(lVar7 + 0xf4) = uVar15;
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0x13) goto LAB_01e86ea0;
          uVar15 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x4b0);
          *(undefined8 *)(lVar7 + 0xf8) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x4a8)
          ;
          *(undefined4 *)(lVar7 + 0x100) = uVar15;
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0x14) goto LAB_01e86ea0;
          uVar15 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x4cc);
          *(undefined8 *)(lVar7 + 0x104) =
               *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x4c4);
          *(undefined4 *)(lVar7 + 0x10c) = uVar15;
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0x15) goto LAB_01e86ea0;
          uVar15 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x4e8);
          *(undefined8 *)(lVar7 + 0x110) =
               *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x4e0);
          *(undefined4 *)(lVar7 + 0x118) = uVar15;
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0x16) goto LAB_01e86ea0;
          uVar15 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x504);
          *(undefined8 *)(lVar7 + 0x11c) =
               *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x4fc);
          *(undefined4 *)(lVar7 + 0x124) = uVar15;
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0x17) goto LAB_01e86ea0;
          uVar15 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x520);
          *(undefined8 *)(lVar7 + 0x128) =
               *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x518);
          *(undefined4 *)(lVar7 + 0x130) = uVar15;
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0x18) goto LAB_01e86ea0;
          uVar15 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x53c);
          *(undefined8 *)(lVar7 + 0x134) =
               *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x534);
          *(undefined4 *)(lVar7 + 0x13c) = uVar15;
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0x19) goto LAB_01e86ea0;
          uVar15 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x558);
          *(undefined8 *)(lVar7 + 0x140) =
               *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x550);
          *(undefined4 *)(lVar7 + 0x148) = uVar15;
          lVar7 = *plVar10;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (*(uint *)(lVar7 + 0x18) < 0x1a) goto LAB_01e86ea0;
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x56c);
          *(undefined4 *)(lVar7 + 0x154) =
               *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x574);
          *(undefined8 *)(lVar7 + 0x14c) = uVar5;
          lVar7 = *(long *)puVar2;
          lVar9 = *(long *)(param_3 + 0xe);
          lVar8 = *(long *)(lVar7 + 0xb8);
          param_3[0xc] = *(undefined4 *)(lVar8 + 0x578);
          if (lVar9 == 0) goto LAB_01e86ea4;
          uVar1 = *(uint *)(lVar9 + 0x18);
          if ((((uVar1 == 0) ||
               (*(undefined4 *)(lVar9 + 0x20) = *(undefined4 *)(lVar8 + 0x57c), uVar1 == 1)) ||
              (*(undefined4 *)(lVar9 + 0x24) = *(undefined4 *)(lVar8 + 0x580), uVar1 < 3)) ||
             ((*(undefined4 *)(lVar9 + 0x28) = *(undefined4 *)(lVar8 + 0x584), uVar1 == 3 ||
              (*(undefined4 *)(lVar9 + 0x2c) = *(undefined4 *)(lVar8 + 0x588), uVar1 < 5))))
          goto LAB_01e86ea0;
          *(undefined4 *)(lVar9 + 0x30) = *(undefined4 *)(lVar8 + 0x58c);
          uVar5 = *(undefined8 *)(lVar8 + 0x5a0);
          uVar14 = *(undefined8 *)(lVar8 + 0x598);
          uVar13 = *(undefined8 *)(lVar8 + 0x590);
          lVar9 = *(long *)(param_3 + 0x1a);
          param_3[0x16] = *(undefined4 *)(lVar8 + 0x5a8);
          *(undefined8 *)(param_3 + 0x14) = uVar5;
          *(undefined8 *)(param_3 + 0x12) = uVar14;
          *(undefined8 *)(param_3 + 0x10) = uVar13;
          lVar7 = *(long *)(lVar7 + 0xb8);
          param_3[0x17] = *(undefined4 *)(lVar7 + 0x5ac);
          param_3[0x18] = *(undefined4 *)(lVar7 + 0x5b0);
          if (lVar9 == 0) goto LAB_01e86ea4;
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (((uVar1 == 0) ||
              (*(undefined4 *)(lVar9 + 0x20) = *(undefined4 *)(lVar7 + 0x5b4), uVar1 == 1)) ||
             ((*(undefined4 *)(lVar9 + 0x24) = *(undefined4 *)(lVar7 + 0x5b8), uVar1 < 3 ||
              ((*(undefined4 *)(lVar9 + 0x28) = *(undefined4 *)(lVar7 + 0x5bc), uVar1 == 3 ||
               (*(undefined4 *)(lVar9 + 0x2c) = *(undefined4 *)(lVar7 + 0x5c0), uVar1 < 5))))))
          goto LAB_01e86ea0;
          *(undefined4 *)(lVar9 + 0x30) = *(undefined4 *)(lVar7 + 0x5c4);
          uVar13 = *(undefined8 *)(lVar7 + 0x5d0);
          uVar5 = *(undefined8 *)(lVar7 + 0x5c8);
          goto LAB_01e86e84;
        }
        goto LAB_01e86ea0;
      }
      goto LAB_01e86ea4;
    }
  }
  puVar3 = PTR_DAT_0235f398;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01022c14(lVar7);
  }
  uVar5 = FUN_01e79184();
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01022c14(lVar7);
    lVar7 = *(long *)puVar3;
  }
  uVar6 = OVRManager__OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY
                    (uVar5,**(undefined8 **)(lVar7 + 0xb8),0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    iVar4 = FUN_01eb6014(param_1,param_2,*(long *)(*(long *)puVar2 + 0xb8) + 0x80,0);
    if (iVar4 == 0) {
      plVar11 = (long *)(param_3 + 8);
      if ((*plVar11 == 0) || (*(int *)(*plVar11 + 0x18) != 0x18)) {
        lVar7 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0235f458,0x18);
        *plVar11 = lVar7;
        thunk_FUN_0106e12c(plVar11,lVar7);
      }
      plVar10 = (long *)(param_3 + 0xe);
      if ((*plVar10 == 0) || (*(int *)(*plVar10 + 0x18) != 5)) {
        lVar7 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0234bad0,5);
        *plVar10 = lVar7;
        thunk_FUN_0106e12c(plVar10,lVar7);
      }
      plVar10 = (long *)(param_3 + 0x1a);
      if ((*plVar10 == 0) || (*(int *)(*plVar10 + 0x18) != 5)) {
        lVar7 = FUN_00fdc388(*(undefined8 *)PTR_DAT_0235f460,5);
        *plVar10 = lVar7;
        thunk_FUN_0106e12c(plVar10,lVar7);
      }
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01022c14();
        lVar7 = *(long *)puVar2;
      }
      lVar8 = *(long *)(lVar7 + 0xb8);
      lVar7 = *(long *)(param_3 + 8);
      *param_3 = *(undefined4 *)(lVar8 + 0x80);
      uVar5 = *(undefined8 *)(lVar8 + 0x94);
      uVar14 = *(undefined8 *)(lVar8 + 0x8c);
      uVar13 = *(undefined8 *)(lVar8 + 0x84);
      param_3[7] = *(undefined4 *)(lVar8 + 0x9c);
      *(undefined8 *)(param_3 + 5) = uVar5;
      *(undefined8 *)(param_3 + 3) = uVar14;
      *(undefined8 *)(param_3 + 1) = uVar13;
      if (lVar7 == 0) {
LAB_01e86ea4:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      if (*(int *)(lVar7 + 0x18) != 0) {
        uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xa0);
        *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xa8);
        *(undefined8 *)(lVar7 + 0x20) = uVar5;
        lVar7 = *plVar11;
        if (lVar7 == 0) goto LAB_01e86ea4;
        if (1 < *(uint *)(lVar7 + 0x18)) {
          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xb0);
          *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xb8);
          *(undefined8 *)(lVar7 + 0x30) = uVar5;
          lVar7 = *plVar11;
          if (lVar7 == 0) goto LAB_01e86ea4;
          if (2 < *(uint *)(lVar7 + 0x18)) {
            uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc0);
            *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 200)
            ;
            *(undefined8 *)(lVar7 + 0x40) = uVar5;
            lVar7 = *plVar11;
            if (lVar7 == 0) goto LAB_01e86ea4;
            if (3 < *(uint *)(lVar7 + 0x18)) {
              uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xd0);
              *(undefined8 *)(lVar7 + 0x58) =
                   *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xd8);
              *(undefined8 *)(lVar7 + 0x50) = uVar5;
              lVar7 = *plVar11;
              if (lVar7 == 0) goto LAB_01e86ea4;
              if (4 < *(uint *)(lVar7 + 0x18)) {
                uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xe0);
                *(undefined8 *)(lVar7 + 0x68) =
                     *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xe8);
                *(undefined8 *)(lVar7 + 0x60) = uVar5;
                lVar7 = *plVar11;
                if (lVar7 == 0) goto LAB_01e86ea4;
                if (5 < *(uint *)(lVar7 + 0x18)) {
                  uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xf0);
                  *(undefined8 *)(lVar7 + 0x78) =
                       *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xf8);
                  *(undefined8 *)(lVar7 + 0x70) = uVar5;
                  lVar7 = *plVar11;
                  if (lVar7 == 0) goto LAB_01e86ea4;
                  if (6 < *(uint *)(lVar7 + 0x18)) {
                    uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x100);
                    *(undefined8 *)(lVar7 + 0x88) =
                         *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x108);
                    *(undefined8 *)(lVar7 + 0x80) = uVar5;
                    lVar7 = *plVar11;
                    if (lVar7 == 0) goto LAB_01e86ea4;
                    if (7 < *(uint *)(lVar7 + 0x18)) {
                      uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x110);
                      *(undefined8 *)(lVar7 + 0x98) =
                           *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x118);
                      *(undefined8 *)(lVar7 + 0x90) = uVar5;
                      lVar7 = *plVar11;
                      if (lVar7 == 0) goto LAB_01e86ea4;
                      if (8 < *(uint *)(lVar7 + 0x18)) {
                        uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x120);
                        *(undefined8 *)(lVar7 + 0xa8) =
                             *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x128);
                        *(undefined8 *)(lVar7 + 0xa0) = uVar5;
                        lVar7 = *plVar11;
                        if (lVar7 == 0) goto LAB_01e86ea4;
                        if (9 < *(uint *)(lVar7 + 0x18)) {
                          uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x130);
                          *(undefined8 *)(lVar7 + 0xb8) =
                               *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x138);
                          *(undefined8 *)(lVar7 + 0xb0) = uVar5;
                          lVar7 = *plVar11;
                          if (lVar7 == 0) goto LAB_01e86ea4;
                          if (10 < *(uint *)(lVar7 + 0x18)) {
                            uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x140);
                            *(undefined8 *)(lVar7 + 200) =
                                 *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x148);
                            *(undefined8 *)(lVar7 + 0xc0) = uVar5;
                            lVar7 = *plVar11;
                            if (lVar7 == 0) goto LAB_01e86ea4;
                            if (0xb < *(uint *)(lVar7 + 0x18)) {
                              uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x150);
                              *(undefined8 *)(lVar7 + 0xd8) =
                                   *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x158);
                              *(undefined8 *)(lVar7 + 0xd0) = uVar5;
                              lVar7 = *plVar11;
                              if (lVar7 == 0) goto LAB_01e86ea4;
                              if (0xc < *(uint *)(lVar7 + 0x18)) {
                                uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x160);
                                *(undefined8 *)(lVar7 + 0xe8) =
                                     *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x168);
                                *(undefined8 *)(lVar7 + 0xe0) = uVar5;
                                lVar7 = *plVar11;
                                if (lVar7 == 0) goto LAB_01e86ea4;
                                if (0xd < *(uint *)(lVar7 + 0x18)) {
                                  uVar5 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x170)
                                  ;
                                  *(undefined8 *)(lVar7 + 0xf8) =
                                       *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x178);
                                  *(undefined8 *)(lVar7 + 0xf0) = uVar5;
                                  lVar7 = *plVar11;
                                  if (lVar7 == 0) goto LAB_01e86ea4;
                                  if (0xe < *(uint *)(lVar7 + 0x18)) {
                                    uVar5 = *(undefined8 *)
                                             (*(long *)(*(long *)puVar2 + 0xb8) + 0x180);
                                    *(undefined8 *)(lVar7 + 0x108) =
                                         *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x188);
                                    *(undefined8 *)(lVar7 + 0x100) = uVar5;
                                    lVar7 = *plVar11;
                                    if (lVar7 == 0) goto LAB_01e86ea4;
                                    if (0xf < *(uint *)(lVar7 + 0x18)) {
                                      uVar5 = *(undefined8 *)
                                               (*(long *)(*(long *)puVar2 + 0xb8) + 400);
                                      *(undefined8 *)(lVar7 + 0x118) =
                                           *(undefined8 *)
                                            (*(long *)(*(long *)puVar2 + 0xb8) + 0x198);
                                      *(undefined8 *)(lVar7 + 0x110) = uVar5;
                                      lVar7 = *plVar11;
                                      if (lVar7 == 0) goto LAB_01e86ea4;
                                      if (0x10 < *(uint *)(lVar7 + 0x18)) {
                                        uVar5 = *(undefined8 *)
                                                 (*(long *)(*(long *)puVar2 + 0xb8) + 0x1a0);
                                        *(undefined8 *)(lVar7 + 0x128) =
                                             *(undefined8 *)
                                              (*(long *)(*(long *)puVar2 + 0xb8) + 0x1a8);
                                        *(undefined8 *)(lVar7 + 0x120) = uVar5;
                                        lVar7 = *plVar11;
                                        if (lVar7 == 0) goto LAB_01e86ea4;
                                        if (0x11 < *(uint *)(lVar7 + 0x18)) {
                                          uVar5 = *(undefined8 *)
                                                   (*(long *)(*(long *)puVar2 + 0xb8) + 0x1b0);
                                          *(undefined8 *)(lVar7 + 0x138) =
                                               *(undefined8 *)
                                                (*(long *)(*(long *)puVar2 + 0xb8) + 0x1b8);
                                          *(undefined8 *)(lVar7 + 0x130) = uVar5;
                                          lVar7 = *plVar11;
                                          if (lVar7 == 0) goto LAB_01e86ea4;
                                          if (0x12 < *(uint *)(lVar7 + 0x18)) {
                                            uVar5 = *(undefined8 *)
                                                     (*(long *)(*(long *)puVar2 + 0xb8) + 0x1c0);
                                            *(undefined8 *)(lVar7 + 0x148) =
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)puVar2 + 0xb8) + 0x1c8);
                                            *(undefined8 *)(lVar7 + 0x140) = uVar5;
                                            lVar7 = *plVar11;
                                            if (lVar7 == 0) goto LAB_01e86ea4;
                                            if (0x13 < *(uint *)(lVar7 + 0x18)) {
                                              uVar5 = *(undefined8 *)
                                                       (*(long *)(*(long *)puVar2 + 0xb8) + 0x1d0);
                                              *(undefined8 *)(lVar7 + 0x158) =
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)puVar2 + 0xb8) + 0x1d8);
                                              *(undefined8 *)(lVar7 + 0x150) = uVar5;
                                              lVar7 = *plVar11;
                                              if (lVar7 == 0) goto LAB_01e86ea4;
                                              if (0x14 < *(uint *)(lVar7 + 0x18)) {
                                                uVar5 = *(undefined8 *)
                                                         (*(long *)(*(long *)puVar2 + 0xb8) + 0x1e0)
                                                ;
                                                *(undefined8 *)(lVar7 + 0x168) =
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)puVar2 + 0xb8) + 0x1e8);
                                                *(undefined8 *)(lVar7 + 0x160) = uVar5;
                                                lVar7 = *plVar11;
                                                if (lVar7 == 0) goto LAB_01e86ea4;
                                                if (0x15 < *(uint *)(lVar7 + 0x18)) {
                                                  uVar5 = *(undefined8 *)
                                                           (*(long *)(*(long *)puVar2 + 0xb8) +
                                                           0x1f0);
                                                  *(undefined8 *)(lVar7 + 0x178) =
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)puVar2 + 0xb8) + 0x1f8);
                                                  *(undefined8 *)(lVar7 + 0x170) = uVar5;
                                                  lVar7 = *plVar11;
                                                  if (lVar7 == 0) goto LAB_01e86ea4;
                                                  if (0x16 < *(uint *)(lVar7 + 0x18)) {
                                                    uVar5 = *(undefined8 *)
                                                             (*(long *)(*(long *)puVar2 + 0xb8) +
                                                             0x200);
                                                    *(undefined8 *)(lVar7 + 0x188) =
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)puVar2 + 0xb8) + 0x208
                                                          );
                                                    *(undefined8 *)(lVar7 + 0x180) = uVar5;
                                                    lVar7 = *plVar11;
                                                    if (lVar7 == 0) goto LAB_01e86ea4;
                                                    if (0x17 < *(uint *)(lVar7 + 0x18)) {
                                                      uVar5 = *(undefined8 *)
                                                               (*(long *)(*(long *)puVar2 + 0xb8) +
                                                               0x210);
                                                      *(undefined8 *)(lVar7 + 0x198) =
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)puVar2 + 0xb8) +
                                                            0x218);
                                                      *(undefined8 *)(lVar7 + 400) = uVar5;
                                                      lVar7 = *(long *)puVar2;
                                                      lVar9 = *(long *)(param_3 + 0xe);
                                                      lVar8 = *(long *)(lVar7 + 0xb8);
                                                      param_3[0xc] = *(undefined4 *)(lVar8 + 0x220);
                                                      if (lVar9 == 0) goto LAB_01e86ea4;
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if ((((uVar1 != 0) &&
                                                           (*(undefined4 *)(lVar9 + 0x20) =
                                                                 *(undefined4 *)(lVar8 + 0x224),
                                                           uVar1 != 1)) &&
                                                          (*(undefined4 *)(lVar9 + 0x24) =
                                                                *(undefined4 *)(lVar8 + 0x228),
                                                          2 < uVar1)) &&
                                                         ((*(undefined4 *)(lVar9 + 0x28) =
                                                                *(undefined4 *)(lVar8 + 0x22c),
                                                          uVar1 != 3 &&
                                                          (*(undefined4 *)(lVar9 + 0x2c) =
                                                                *(undefined4 *)(lVar8 + 0x230),
                                                          4 < uVar1)))) {
                                                        *(undefined4 *)(lVar9 + 0x30) =
                                                             *(undefined4 *)(lVar8 + 0x234);
                                                        uVar5 = *(undefined8 *)(lVar8 + 0x248);
                                                        uVar14 = *(undefined8 *)(lVar8 + 0x240);
                                                        uVar13 = *(undefined8 *)(lVar8 + 0x238);
                                                        param_3[0x16] =
                                                             *(undefined4 *)(lVar8 + 0x250);
                                                        *(undefined8 *)(param_3 + 0x14) = uVar5;
                                                        *(undefined8 *)(param_3 + 0x12) = uVar14;
                                                        *(undefined8 *)(param_3 + 0x10) = uVar13;
                                                        lVar7 = *(long *)(lVar7 + 0xb8);
                                                        lVar8 = *(long *)(param_3 + 0x1a);
                                                        param_3[0x17] =
                                                             *(undefined4 *)(lVar7 + 0x254);
                                                        param_3[0x18] = *(undefined4 *)(lVar7 + 600)
                                                        ;
                                                        if (lVar8 == 0) goto LAB_01e86ea4;
                                                        uVar1 = *(uint *)(lVar8 + 0x18);
                                                        if (((uVar1 != 0) &&
                                                            (*(undefined4 *)(lVar8 + 0x20) =
                                                                  *(undefined4 *)(lVar7 + 0x25c),
                                                            uVar1 != 1)) &&
                                                           ((*(undefined4 *)(lVar8 + 0x24) =
                                                                  *(undefined4 *)(lVar7 + 0x260),
                                                            2 < uVar1 &&
                                                            ((*(undefined4 *)(lVar8 + 0x28) =
                                                                   *(undefined4 *)(lVar7 + 0x264),
                                                             uVar1 != 3 &&
                                                             (*(undefined4 *)(lVar8 + 0x2c) =
                                                                   *(undefined4 *)(lVar7 + 0x268),
                                                             4 < uVar1)))))) {
                                                          *(undefined4 *)(lVar8 + 0x30) =
                                                               *(undefined4 *)(lVar7 + 0x26c);
                                                          uVar13 = *(undefined8 *)(lVar7 + 0x278);
                                                          uVar5 = *(undefined8 *)(lVar7 + 0x270);
LAB_01e86e84:
                                                          *(undefined8 *)(param_3 + 0x1e) = uVar13;
                                                          *(undefined8 *)(param_3 + 0x1c) = uVar5;
                                                          return 1;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_01e86ea0:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
  }
  return 0;
}


