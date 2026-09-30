/*
FUNCTION_NAME: RootMotion.Demos.Platform.<NewTargetPos>d__13$$System.IDisposable.Dispose
ENTRY_POINT: 05064aa4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8 RootMotion_Demos_Platform_<NewTargetPos>d__13__System_IDisposable_Dispose(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 *unaff_x19;
  undefined4 unaff_w20;
  long *plVar10;
  int unaff_w21;
  long *plVar11;
  long unaff_x22;
  long *plVar12;
  long *unaff_x23;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  
  FUN_02b3c81c(*(undefined8 *)(param_1 + 0xad8));
  FUN_02b3c81c(System_Resources_ResourceReader_var);
  FUN_02b3c81c(PTR_DAT_06313050);
  FUN_02b3c81c(Unity_Properties_TypeConverter<object,_long>_TypeInfo);
  FUN_02b3c81c(UnityEngine_ResourceRequest_var);
  FUN_02b3c81c(Unity_Properties_TypeConverter<double,_object>_TypeInfo);
  *(undefined1 *)(unaff_x22 + 0x4a6) = 1;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  iVar3 = FUN_05058c20();
  if ((unaff_w21 == 0) && (iVar3 == 3)) {
    if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05c41e34(*(undefined8 *)Unity_Properties_TypeConverter<double,_object>_TypeInfo,0);
    unaff_w21 = -1;
  }
  puVar2 = Unity_Properties_TypeConverter<int,_double>_TypeInfo;
  if (*(int *)(*unaff_x23 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar4 = FUN_050581a8();
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar6);
    lVar6 = *(long *)puVar2;
  }
  uVar5 = FUN_04d9b740(uVar4,**(undefined8 **)(lVar6 + 0xb8),0);
  lVar6 = *unaff_x23;
  if ((uVar5 & 1) != 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (DAT_066cc3c6 == '\0') {
      FUN_02b3c81c(PTR_DAT_0631fad8);
      DAT_066cc3c6 = '\x01';
    }
    lVar6 = *unaff_x23;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar6 = *unaff_x23;
    }
    if (*(int *)(*(long *)(lVar6 + 0xb8) + 0x5e0) == 1) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      iVar3 = FUN_05097cac(unaff_w21,0xffffffff,unaff_w20,*(long *)(*unaff_x23 + 0xb8) + 0x288,0);
      if (iVar3 != 0) {
        return 0;
      }
      plVar11 = (long *)(unaff_x19 + 8);
      if ((*plVar11 == 0) || (*(int *)(*plVar11 + 0x18) != 0x1a)) {
        lVar6 = FUN_02b3c908(*(undefined8 *)System_Resources_ResourceReader_var,0x1a);
        *plVar11 = lVar6;
        thunk_FUN_02bb0e9c(plVar11,lVar6);
      }
      plVar10 = (long *)(unaff_x19 + 10);
      if ((*plVar10 == 0) || (*(int *)(*plVar10 + 0x18) != 0x1a)) {
        lVar6 = FUN_02b3c908(*(undefined8 *)UnityEngine_ResourceRequest_var,0x1a);
        *plVar10 = lVar6;
        thunk_FUN_02bb0e9c(plVar10,lVar6);
      }
      plVar12 = (long *)(unaff_x19 + 0xe);
      if ((*plVar12 == 0) || (*(int *)(*plVar12 + 0x18) != 5)) {
        lVar6 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313050,5);
        *plVar12 = lVar6;
        thunk_FUN_02bb0e9c(plVar12,lVar6);
      }
      plVar12 = (long *)(unaff_x19 + 0x1a);
      if ((*plVar12 == 0) || (*(int *)(*plVar12 + 0x18) != 5)) {
        lVar6 = FUN_02b3c908(*(undefined8 *)Unity_Properties_TypeConverter<object,_long>_TypeInfo,5)
        ;
        *plVar12 = lVar6;
        thunk_FUN_02bb0e9c(plVar12,lVar6);
      }
      lVar6 = *unaff_x23;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar6 = *unaff_x23;
      }
      lVar6 = *(long *)(lVar6 + 0xb8);
      *unaff_x19 = *(undefined4 *)(lVar6 + 0x288);
      uVar4 = *(undefined8 *)(lVar6 + 0x29c);
      lVar7 = *(long *)(unaff_x19 + 8);
      uVar14 = *(undefined8 *)(lVar6 + 0x294);
      uVar13 = *(undefined8 *)(lVar6 + 0x28c);
      unaff_x19[7] = *(undefined4 *)(lVar6 + 0x2a4);
      *(undefined8 *)(unaff_x19 + 5) = uVar4;
      *(undefined8 *)(unaff_x19 + 3) = uVar14;
      *(undefined8 *)(unaff_x19 + 1) = uVar13;
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x18) != 0) {
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x2a8);
          *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x2b0);
          *(undefined8 *)(lVar7 + 0x20) = uVar4;
          lVar6 = *plVar11;
          if (lVar6 == 0) goto LAB_05065d18;
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x2c4);
          *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x2cc);
          *(undefined8 *)(lVar6 + 0x30) = uVar4;
          lVar6 = *plVar11;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x2e0);
          *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x2e8);
          *(undefined8 *)(lVar6 + 0x40) = uVar4;
          lVar6 = *plVar11;
          if (lVar6 == 0) goto LAB_05065d18;
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) == 0) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x2fc);
          *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x304);
          *(undefined8 *)(lVar6 + 0x50) = uVar4;
          lVar6 = *plVar11;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x318);
          *(undefined8 *)(lVar6 + 0x68) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 800);
          *(undefined8 *)(lVar6 + 0x60) = uVar4;
          lVar6 = *plVar11;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 6) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x334);
          *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x33c);
          *(undefined8 *)(lVar6 + 0x70) = uVar4;
          lVar6 = *plVar11;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 7) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x350);
          *(undefined8 *)(lVar6 + 0x88) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x358);
          *(undefined8 *)(lVar6 + 0x80) = uVar4;
          lVar6 = *plVar11;
          if (lVar6 == 0) goto LAB_05065d18;
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffff8) == 0) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x36c);
          *(undefined8 *)(lVar6 + 0x98) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x374);
          *(undefined8 *)(lVar6 + 0x90) = uVar4;
          lVar6 = *plVar11;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 9) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x388);
          *(undefined8 *)(lVar6 + 0xa8) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x390);
          *(undefined8 *)(lVar6 + 0xa0) = uVar4;
          lVar6 = *plVar11;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 10) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x3a4);
          *(undefined8 *)(lVar6 + 0xb8) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x3ac);
          *(undefined8 *)(lVar6 + 0xb0) = uVar4;
          lVar6 = *plVar11;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0xb) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x3c0);
          *(undefined8 *)(lVar6 + 200) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x3c8);
          *(undefined8 *)(lVar6 + 0xc0) = uVar4;
          lVar6 = *plVar11;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0xc) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x3dc);
          *(undefined8 *)(lVar6 + 0xd8) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x3e4);
          *(undefined8 *)(lVar6 + 0xd0) = uVar4;
          lVar6 = *plVar11;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0xd) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x3f8);
          *(undefined8 *)(lVar6 + 0xe8) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x400);
          *(undefined8 *)(lVar6 + 0xe0) = uVar4;
          lVar6 = *plVar11;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0xe) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x414);
          *(undefined8 *)(lVar6 + 0xf8) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x41c);
          *(undefined8 *)(lVar6 + 0xf0) = uVar4;
          lVar6 = *plVar11;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0xf) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x430);
          *(undefined8 *)(lVar6 + 0x108) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x438);
          *(undefined8 *)(lVar6 + 0x100) = uVar4;
          lVar6 = *plVar11;
          if (lVar6 == 0) goto LAB_05065d18;
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffff0) == 0) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x44c);
          *(undefined8 *)(lVar6 + 0x118) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x454);
          *(undefined8 *)(lVar6 + 0x110) = uVar4;
          lVar6 = *plVar11;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0x11) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x468);
          *(undefined8 *)(lVar6 + 0x128) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x470);
          *(undefined8 *)(lVar6 + 0x120) = uVar4;
          lVar6 = *plVar11;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0x12) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x484);
          *(undefined8 *)(lVar6 + 0x138) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x48c);
          *(undefined8 *)(lVar6 + 0x130) = uVar4;
          lVar6 = *plVar11;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0x13) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x4a0);
          *(undefined8 *)(lVar6 + 0x148) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x4a8);
          *(undefined8 *)(lVar6 + 0x140) = uVar4;
          lVar6 = *plVar11;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0x14) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x4bc);
          *(undefined8 *)(lVar6 + 0x158) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x4c4);
          *(undefined8 *)(lVar6 + 0x150) = uVar4;
          lVar6 = *plVar11;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0x15) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x4d8);
          *(undefined8 *)(lVar6 + 0x168) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x4e0);
          *(undefined8 *)(lVar6 + 0x160) = uVar4;
          lVar6 = *plVar11;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0x16) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x4f4);
          *(undefined8 *)(lVar6 + 0x178) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x4fc);
          *(undefined8 *)(lVar6 + 0x170) = uVar4;
          lVar6 = *plVar11;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0x17) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x510);
          *(undefined8 *)(lVar6 + 0x188) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x518);
          *(undefined8 *)(lVar6 + 0x180) = uVar4;
          lVar6 = *plVar11;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0x18) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x52c);
          *(undefined8 *)(lVar6 + 0x198) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x534);
          *(undefined8 *)(lVar6 + 400) = uVar4;
          lVar6 = *plVar11;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0x19) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x548);
          *(undefined8 *)(lVar6 + 0x1a8) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x550);
          *(undefined8 *)(lVar6 + 0x1a0) = uVar4;
          lVar6 = *plVar11;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0x1a) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x564);
          *(undefined8 *)(lVar6 + 0x1b8) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x56c);
          *(undefined8 *)(lVar6 + 0x1b0) = uVar4;
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(int *)(lVar6 + 0x18) == 0) goto LAB_05065d14;
          uVar15 = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 0x2c0);
          *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x2b8);
          *(undefined4 *)(lVar6 + 0x28) = uVar15;
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_05065d18;
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x2d4);
          *(undefined4 *)(lVar6 + 0x34) = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 0x2dc);
          *(undefined8 *)(lVar6 + 0x2c) = uVar4;
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_05065d14;
          uVar15 = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 0x2f8);
          *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x2f0);
          *(undefined4 *)(lVar6 + 0x40) = uVar15;
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_05065d18;
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) == 0) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x30c);
          *(undefined4 *)(lVar6 + 0x4c) = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 0x314);
          *(undefined8 *)(lVar6 + 0x44) = uVar4;
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_05065d14;
          uVar15 = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 0x330);
          *(undefined8 *)(lVar6 + 0x50) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x328);
          *(undefined4 *)(lVar6 + 0x58) = uVar15;
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 6) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x344);
          *(undefined4 *)(lVar6 + 100) = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 0x34c);
          *(undefined8 *)(lVar6 + 0x5c) = uVar4;
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 7) goto LAB_05065d14;
          uVar15 = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 0x368);
          *(undefined8 *)(lVar6 + 0x68) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x360);
          *(undefined4 *)(lVar6 + 0x70) = uVar15;
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_05065d18;
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffff8) == 0) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x37c);
          *(undefined4 *)(lVar6 + 0x7c) = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 900);
          *(undefined8 *)(lVar6 + 0x74) = uVar4;
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 9) goto LAB_05065d14;
          uVar15 = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 0x3a0);
          *(undefined8 *)(lVar6 + 0x80) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x398);
          *(undefined4 *)(lVar6 + 0x88) = uVar15;
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 10) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x3b4);
          *(undefined4 *)(lVar6 + 0x94) = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 0x3bc);
          *(undefined8 *)(lVar6 + 0x8c) = uVar4;
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0xb) goto LAB_05065d14;
          uVar15 = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 0x3d8);
          *(undefined8 *)(lVar6 + 0x98) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x3d0);
          *(undefined4 *)(lVar6 + 0xa0) = uVar15;
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0xc) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x3ec);
          *(undefined4 *)(lVar6 + 0xac) = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 0x3f4);
          *(undefined8 *)(lVar6 + 0xa4) = uVar4;
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0xd) goto LAB_05065d14;
          uVar15 = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 0x410);
          *(undefined8 *)(lVar6 + 0xb0) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x408);
          *(undefined4 *)(lVar6 + 0xb8) = uVar15;
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0xe) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x424);
          *(undefined4 *)(lVar6 + 0xc4) = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 0x42c);
          *(undefined8 *)(lVar6 + 0xbc) = uVar4;
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0xf) goto LAB_05065d14;
          uVar15 = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 0x448);
          *(undefined8 *)(lVar6 + 200) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x440);
          *(undefined4 *)(lVar6 + 0xd0) = uVar15;
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_05065d18;
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffff0) == 0) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x45c);
          *(undefined4 *)(lVar6 + 0xdc) = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 0x464);
          *(undefined8 *)(lVar6 + 0xd4) = uVar4;
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0x11) goto LAB_05065d14;
          uVar15 = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 0x480);
          *(undefined8 *)(lVar6 + 0xe0) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x478);
          *(undefined4 *)(lVar6 + 0xe8) = uVar15;
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0x12) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x494);
          *(undefined4 *)(lVar6 + 0xf4) = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 0x49c);
          *(undefined8 *)(lVar6 + 0xec) = uVar4;
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0x13) goto LAB_05065d14;
          uVar15 = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 0x4b8);
          *(undefined8 *)(lVar6 + 0xf8) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x4b0);
          *(undefined4 *)(lVar6 + 0x100) = uVar15;
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0x14) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x4d0);
          *(undefined4 *)(lVar6 + 0x104) = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 0x4cc);
          *(undefined8 *)(lVar6 + 0x108) = uVar4;
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0x15) goto LAB_05065d14;
          uVar15 = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 0x4f0);
          *(undefined8 *)(lVar6 + 0x110) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x4e8);
          *(undefined4 *)(lVar6 + 0x118) = uVar15;
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0x16) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x508);
          *(undefined4 *)(lVar6 + 0x11c) = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 0x504);
          *(undefined8 *)(lVar6 + 0x120) = uVar4;
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0x17) goto LAB_05065d14;
          uVar15 = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 0x528);
          *(undefined8 *)(lVar6 + 0x128) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x520);
          *(undefined4 *)(lVar6 + 0x130) = uVar15;
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0x18) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x540);
          *(undefined4 *)(lVar6 + 0x134) = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 0x53c);
          *(undefined8 *)(lVar6 + 0x138) = uVar4;
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0x19) goto LAB_05065d14;
          uVar15 = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 0x560);
          *(undefined8 *)(lVar6 + 0x140) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x558);
          *(undefined4 *)(lVar6 + 0x148) = uVar15;
          lVar6 = *plVar10;
          if (lVar6 == 0) goto LAB_05065d18;
          if (*(uint *)(lVar6 + 0x18) < 0x1a) goto LAB_05065d14;
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x578);
          *(undefined4 *)(lVar6 + 0x14c) = *(undefined4 *)(*(long *)(*unaff_x23 + 0xb8) + 0x574);
          *(undefined8 *)(lVar6 + 0x150) = uVar4;
          lVar6 = *unaff_x23;
          lVar9 = *(long *)(unaff_x19 + 0xe);
          lVar7 = *(long *)(lVar6 + 0xb8);
          unaff_x19[0xc] = *(undefined4 *)(lVar7 + 0x580);
          if (lVar9 == 0) goto LAB_05065d18;
          uVar1 = *(uint *)(lVar9 + 0x18);
          if ((((uVar1 == 0) ||
               (*(undefined4 *)(lVar9 + 0x20) = *(undefined4 *)(lVar7 + 0x584), uVar1 == 1)) ||
              (*(undefined4 *)(lVar9 + 0x24) = *(undefined4 *)(lVar7 + 0x588), uVar1 < 3)) ||
             ((*(undefined4 *)(lVar9 + 0x28) = *(undefined4 *)(lVar7 + 0x58c), uVar1 == 3 ||
              (*(undefined4 *)(lVar9 + 0x2c) = *(undefined4 *)(lVar7 + 0x590), uVar1 < 5))))
          goto LAB_05065d14;
          *(undefined4 *)(lVar9 + 0x30) = *(undefined4 *)(lVar7 + 0x594);
          uVar4 = *(undefined8 *)(lVar7 + 0x5a8);
          uVar14 = *(undefined8 *)(lVar7 + 0x5a0);
          uVar13 = *(undefined8 *)(lVar7 + 0x598);
          unaff_x19[0x16] = *(undefined4 *)(lVar7 + 0x5b0);
          *(undefined8 *)(unaff_x19 + 0x14) = uVar4;
          lVar7 = *(long *)(unaff_x19 + 0x1a);
          *(undefined8 *)(unaff_x19 + 0x12) = uVar14;
          *(undefined8 *)(unaff_x19 + 0x10) = uVar13;
          lVar6 = *(long *)(lVar6 + 0xb8);
          uVar15 = *(undefined4 *)(lVar6 + 0x5b8);
          unaff_x19[0x17] = *(undefined4 *)(lVar6 + 0x5b4);
          unaff_x19[0x18] = uVar15;
          if (lVar7 == 0) goto LAB_05065d18;
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (((uVar1 == 0) ||
              (*(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(lVar6 + 0x5bc), uVar1 == 1)) ||
             ((*(undefined4 *)(lVar7 + 0x24) = *(undefined4 *)(lVar6 + 0x5c0), uVar1 < 3 ||
              ((*(undefined4 *)(lVar7 + 0x28) = *(undefined4 *)(lVar6 + 0x5c4), uVar1 == 3 ||
               (*(undefined4 *)(lVar7 + 0x2c) = *(undefined4 *)(lVar6 + 0x5c8), uVar1 < 5))))))
          goto LAB_05065d14;
          uVar15 = *(undefined4 *)(lVar6 + 0x5cc);
          uVar4 = *(undefined8 *)(lVar6 + 0x5d0);
          puVar8 = (undefined8 *)(lVar6 + 0x5d8);
          goto LAB_05065cec;
        }
        goto LAB_05065d14;
      }
      goto LAB_05065d18;
    }
  }
  puVar2 = Unity_Properties_TypeConverter<int,_StyleLength>_TypeInfo;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar4 = FUN_050581a8();
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44(lVar6);
    lVar6 = *(long *)puVar2;
  }
  uVar5 = FUN_04d9b740(uVar4,**(undefined8 **)(lVar6 + 0xb8),0);
  if ((uVar5 & 1) != 0) {
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    iVar3 = FUN_0509003c(unaff_w21,unaff_w20,*(long *)(*unaff_x23 + 0xb8) + 0x88,0);
    if (iVar3 == 0) {
      plVar11 = (long *)(unaff_x19 + 8);
      if ((*plVar11 == 0) || (*(int *)(*plVar11 + 0x18) != 0x18)) {
        lVar6 = FUN_02b3c908(*(undefined8 *)System_Resources_ResourceReader_var,0x18);
        *plVar11 = lVar6;
        thunk_FUN_02bb0e9c(plVar11,lVar6);
      }
      plVar10 = (long *)(unaff_x19 + 0xe);
      if ((*plVar10 == 0) || (*(int *)(*plVar10 + 0x18) != 5)) {
        lVar6 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313050,5);
        *plVar10 = lVar6;
        thunk_FUN_02bb0e9c(plVar10,lVar6);
      }
      plVar10 = (long *)(unaff_x19 + 0x1a);
      if ((*plVar10 == 0) || (*(int *)(*plVar10 + 0x18) != 5)) {
        lVar6 = FUN_02b3c908(*(undefined8 *)Unity_Properties_TypeConverter<object,_long>_TypeInfo,5)
        ;
        *plVar10 = lVar6;
        thunk_FUN_02bb0e9c(plVar10,lVar6);
      }
      lVar6 = *unaff_x23;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar6 = *unaff_x23;
      }
      lVar7 = *(long *)(lVar6 + 0xb8);
      *unaff_x19 = *(undefined4 *)(lVar7 + 0x88);
      lVar6 = *(long *)(unaff_x19 + 8);
      uVar4 = *(undefined8 *)(lVar7 + 0x9c);
      uVar14 = *(undefined8 *)(lVar7 + 0x94);
      uVar13 = *(undefined8 *)(lVar7 + 0x8c);
      unaff_x19[7] = *(undefined4 *)(lVar7 + 0xa4);
      *(undefined8 *)(unaff_x19 + 5) = uVar4;
      *(undefined8 *)(unaff_x19 + 3) = uVar14;
      *(undefined8 *)(unaff_x19 + 1) = uVar13;
      if (lVar6 == 0) {
LAB_05065d18:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(int *)(lVar6 + 0x18) != 0) {
        uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0xa8);
        *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0xb0);
        *(undefined8 *)(lVar6 + 0x20) = uVar4;
        lVar6 = *plVar11;
        if (lVar6 == 0) goto LAB_05065d18;
        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0xb8);
          *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0xc0);
          *(undefined8 *)(lVar6 + 0x30) = uVar4;
          lVar6 = *plVar11;
          if (lVar6 == 0) goto LAB_05065d18;
          if (2 < *(uint *)(lVar6 + 0x18)) {
            uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 200);
            *(undefined8 *)(lVar6 + 0x48) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0xd0);
            *(undefined8 *)(lVar6 + 0x40) = uVar4;
            lVar6 = *plVar11;
            if (lVar6 == 0) goto LAB_05065d18;
            if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
              uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0xd8);
              *(undefined8 *)(lVar6 + 0x58) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0xe0);
              *(undefined8 *)(lVar6 + 0x50) = uVar4;
              lVar6 = *plVar11;
              if (lVar6 == 0) goto LAB_05065d18;
              if (4 < *(uint *)(lVar6 + 0x18)) {
                uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0xe8);
                *(undefined8 *)(lVar6 + 0x68) = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0xf0)
                ;
                *(undefined8 *)(lVar6 + 0x60) = uVar4;
                lVar6 = *plVar11;
                if (lVar6 == 0) goto LAB_05065d18;
                if (5 < *(uint *)(lVar6 + 0x18)) {
                  uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0xf8);
                  *(undefined8 *)(lVar6 + 0x78) =
                       *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x100);
                  *(undefined8 *)(lVar6 + 0x70) = uVar4;
                  lVar6 = *plVar11;
                  if (lVar6 == 0) goto LAB_05065d18;
                  if (6 < *(uint *)(lVar6 + 0x18)) {
                    uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x108);
                    *(undefined8 *)(lVar6 + 0x88) =
                         *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x110);
                    *(undefined8 *)(lVar6 + 0x80) = uVar4;
                    lVar6 = *plVar11;
                    if (lVar6 == 0) goto LAB_05065d18;
                    if ((*(uint *)(lVar6 + 0x18) & 0xfffffff8) != 0) {
                      uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x118);
                      *(undefined8 *)(lVar6 + 0x98) =
                           *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x120);
                      *(undefined8 *)(lVar6 + 0x90) = uVar4;
                      lVar6 = *plVar11;
                      if (lVar6 == 0) goto LAB_05065d18;
                      if (8 < *(uint *)(lVar6 + 0x18)) {
                        uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x128);
                        *(undefined8 *)(lVar6 + 0xa8) =
                             *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x130);
                        *(undefined8 *)(lVar6 + 0xa0) = uVar4;
                        lVar6 = *plVar11;
                        if (lVar6 == 0) goto LAB_05065d18;
                        if (9 < *(uint *)(lVar6 + 0x18)) {
                          uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x138);
                          *(undefined8 *)(lVar6 + 0xb8) =
                               *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x140);
                          *(undefined8 *)(lVar6 + 0xb0) = uVar4;
                          lVar6 = *plVar11;
                          if (lVar6 == 0) goto LAB_05065d18;
                          if (10 < *(uint *)(lVar6 + 0x18)) {
                            uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x148);
                            *(undefined8 *)(lVar6 + 200) =
                                 *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x150);
                            *(undefined8 *)(lVar6 + 0xc0) = uVar4;
                            lVar6 = *plVar11;
                            if (lVar6 == 0) goto LAB_05065d18;
                            if (0xb < *(uint *)(lVar6 + 0x18)) {
                              uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x158);
                              *(undefined8 *)(lVar6 + 0xd8) =
                                   *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x160);
                              *(undefined8 *)(lVar6 + 0xd0) = uVar4;
                              lVar6 = *plVar11;
                              if (lVar6 == 0) goto LAB_05065d18;
                              if (0xc < *(uint *)(lVar6 + 0x18)) {
                                uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x168);
                                *(undefined8 *)(lVar6 + 0xe8) =
                                     *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x170);
                                *(undefined8 *)(lVar6 + 0xe0) = uVar4;
                                lVar6 = *plVar11;
                                if (lVar6 == 0) goto LAB_05065d18;
                                if (0xd < *(uint *)(lVar6 + 0x18)) {
                                  uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x178);
                                  *(undefined8 *)(lVar6 + 0xf8) =
                                       *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x180);
                                  *(undefined8 *)(lVar6 + 0xf0) = uVar4;
                                  lVar6 = *plVar11;
                                  if (lVar6 == 0) goto LAB_05065d18;
                                  if (0xe < *(uint *)(lVar6 + 0x18)) {
                                    uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x188);
                                    *(undefined8 *)(lVar6 + 0x108) =
                                         *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 400);
                                    *(undefined8 *)(lVar6 + 0x100) = uVar4;
                                    lVar6 = *plVar11;
                                    if (lVar6 == 0) goto LAB_05065d18;
                                    if ((*(uint *)(lVar6 + 0x18) & 0xfffffff0) != 0) {
                                      uVar4 = *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x198);
                                      *(undefined8 *)(lVar6 + 0x118) =
                                           *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x1a0);
                                      *(undefined8 *)(lVar6 + 0x110) = uVar4;
                                      lVar6 = *plVar11;
                                      if (lVar6 == 0) goto LAB_05065d18;
                                      if (0x10 < *(uint *)(lVar6 + 0x18)) {
                                        uVar4 = *(undefined8 *)
                                                 (*(long *)(*unaff_x23 + 0xb8) + 0x1a8);
                                        *(undefined8 *)(lVar6 + 0x128) =
                                             *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x1b0);
                                        *(undefined8 *)(lVar6 + 0x120) = uVar4;
                                        lVar6 = *plVar11;
                                        if (lVar6 == 0) goto LAB_05065d18;
                                        if (0x11 < *(uint *)(lVar6 + 0x18)) {
                                          uVar4 = *(undefined8 *)
                                                   (*(long *)(*unaff_x23 + 0xb8) + 0x1b8);
                                          *(undefined8 *)(lVar6 + 0x138) =
                                               *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x1c0)
                                          ;
                                          *(undefined8 *)(lVar6 + 0x130) = uVar4;
                                          lVar6 = *plVar11;
                                          if (lVar6 == 0) goto LAB_05065d18;
                                          if (0x12 < *(uint *)(lVar6 + 0x18)) {
                                            uVar4 = *(undefined8 *)
                                                     (*(long *)(*unaff_x23 + 0xb8) + 0x1c8);
                                            *(undefined8 *)(lVar6 + 0x148) =
                                                 *(undefined8 *)
                                                  (*(long *)(*unaff_x23 + 0xb8) + 0x1d0);
                                            *(undefined8 *)(lVar6 + 0x140) = uVar4;
                                            lVar6 = *plVar11;
                                            if (lVar6 == 0) goto LAB_05065d18;
                                            if (0x13 < *(uint *)(lVar6 + 0x18)) {
                                              uVar4 = *(undefined8 *)
                                                       (*(long *)(*unaff_x23 + 0xb8) + 0x1d8);
                                              *(undefined8 *)(lVar6 + 0x158) =
                                                   *(undefined8 *)
                                                    (*(long *)(*unaff_x23 + 0xb8) + 0x1e0);
                                              *(undefined8 *)(lVar6 + 0x150) = uVar4;
                                              lVar6 = *plVar11;
                                              if (lVar6 == 0) goto LAB_05065d18;
                                              if (0x14 < *(uint *)(lVar6 + 0x18)) {
                                                uVar4 = *(undefined8 *)
                                                         (*(long *)(*unaff_x23 + 0xb8) + 0x1e8);
                                                *(undefined8 *)(lVar6 + 0x168) =
                                                     *(undefined8 *)
                                                      (*(long *)(*unaff_x23 + 0xb8) + 0x1f0);
                                                *(undefined8 *)(lVar6 + 0x160) = uVar4;
                                                lVar6 = *plVar11;
                                                if (lVar6 == 0) goto LAB_05065d18;
                                                if (0x15 < *(uint *)(lVar6 + 0x18)) {
                                                  uVar4 = *(undefined8 *)
                                                           (*(long *)(*unaff_x23 + 0xb8) + 0x1f8);
                                                  *(undefined8 *)(lVar6 + 0x178) =
                                                       *(undefined8 *)
                                                        (*(long *)(*unaff_x23 + 0xb8) + 0x200);
                                                  *(undefined8 *)(lVar6 + 0x170) = uVar4;
                                                  lVar6 = *plVar11;
                                                  if (lVar6 == 0) goto LAB_05065d18;
                                                  if (0x16 < *(uint *)(lVar6 + 0x18)) {
                                                    uVar4 = *(undefined8 *)
                                                             (*(long *)(*unaff_x23 + 0xb8) + 0x208);
                                                    *(undefined8 *)(lVar6 + 0x188) =
                                                         *(undefined8 *)
                                                          (*(long *)(*unaff_x23 + 0xb8) + 0x210);
                                                    *(undefined8 *)(lVar6 + 0x180) = uVar4;
                                                    lVar6 = *plVar11;
                                                    if (lVar6 == 0) goto LAB_05065d18;
                                                    if (0x17 < *(uint *)(lVar6 + 0x18)) {
                                                      uVar4 = *(undefined8 *)
                                                               (*(long *)(*unaff_x23 + 0xb8) + 0x218
                                                               );
                                                      *(undefined8 *)(lVar6 + 0x198) =
                                                           *(undefined8 *)
                                                            (*(long *)(*unaff_x23 + 0xb8) + 0x220);
                                                      *(undefined8 *)(lVar6 + 400) = uVar4;
                                                      lVar6 = *unaff_x23;
                                                      lVar7 = *(long *)(unaff_x19 + 0xe);
                                                      lVar9 = *(long *)(lVar6 + 0xb8);
                                                      unaff_x19[0xc] =
                                                           *(undefined4 *)(lVar9 + 0x228);
                                                      if (lVar7 == 0) goto LAB_05065d18;
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if ((((uVar1 != 0) &&
                                                           (*(undefined4 *)(lVar7 + 0x20) =
                                                                 *(undefined4 *)(lVar9 + 0x22c),
                                                           uVar1 != 1)) &&
                                                          (*(undefined4 *)(lVar7 + 0x24) =
                                                                *(undefined4 *)(lVar9 + 0x230),
                                                          2 < uVar1)) &&
                                                         ((*(undefined4 *)(lVar7 + 0x28) =
                                                                *(undefined4 *)(lVar9 + 0x234),
                                                          uVar1 != 3 &&
                                                          (*(undefined4 *)(lVar7 + 0x2c) =
                                                                *(undefined4 *)(lVar9 + 0x238),
                                                          4 < uVar1)))) {
                                                        *(undefined4 *)(lVar7 + 0x30) =
                                                             *(undefined4 *)(lVar9 + 0x23c);
                                                        uVar4 = *(undefined8 *)(lVar9 + 0x250);
                                                        uVar14 = *(undefined8 *)(lVar9 + 0x248);
                                                        uVar13 = *(undefined8 *)(lVar9 + 0x240);
                                                        lVar7 = *(long *)(unaff_x19 + 0x1a);
                                                        unaff_x19[0x16] =
                                                             *(undefined4 *)(lVar9 + 600);
                                                        *(undefined8 *)(unaff_x19 + 0x14) = uVar4;
                                                        *(undefined8 *)(unaff_x19 + 0x12) = uVar14;
                                                        *(undefined8 *)(unaff_x19 + 0x10) = uVar13;
                                                        lVar6 = *(long *)(lVar6 + 0xb8);
                                                        uVar15 = *(undefined4 *)(lVar6 + 0x260);
                                                        unaff_x19[0x17] =
                                                             *(undefined4 *)(lVar6 + 0x25c);
                                                        unaff_x19[0x18] = uVar15;
                                                        if (lVar7 == 0) goto LAB_05065d18;
                                                        uVar1 = *(uint *)(lVar7 + 0x18);
                                                        if (((uVar1 != 0) &&
                                                            (*(undefined4 *)(lVar7 + 0x20) =
                                                                  *(undefined4 *)(lVar6 + 0x264),
                                                            uVar1 != 1)) &&
                                                           ((*(undefined4 *)(lVar7 + 0x24) =
                                                                  *(undefined4 *)(lVar6 + 0x268),
                                                            2 < uVar1 &&
                                                            ((*(undefined4 *)(lVar7 + 0x28) =
                                                                   *(undefined4 *)(lVar6 + 0x26c),
                                                             uVar1 != 3 &&
                                                             (*(undefined4 *)(lVar7 + 0x2c) =
                                                                   *(undefined4 *)(lVar6 + 0x270),
                                                             4 < uVar1)))))) {
                                                          uVar15 = *(undefined4 *)(lVar6 + 0x274);
                                                          uVar4 = *(undefined8 *)(lVar6 + 0x278);
                                                          puVar8 = (undefined8 *)(lVar6 + 0x280);
LAB_05065cec:
                                                          *(undefined4 *)(lVar7 + 0x30) = uVar15;
                                                          *(undefined8 *)(unaff_x19 + 0x1c) = uVar4;
                                                          *(undefined8 *)(unaff_x19 + 0x1e) =
                                                               *puVar8;
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
LAB_05065d14:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
  }
  return 0;
}


