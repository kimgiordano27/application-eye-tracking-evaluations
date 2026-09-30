/*
FUNCTION_NAME: Unity.VisualScripting.TypeUtility.<GetTypesSafely>d__35$$.ctor
ENTRY_POINT: 036bd3ac
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_14;validity_or_gating_hits_21;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


undefined4
Unity_VisualScripting_TypeUtility_<GetTypesSafely>d__35___ctor
          (undefined1 param_1 [16],ulong param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  float fVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  void *__dest;
  uint in_w8;
  long lVar18;
  long in_x9;
  long lVar19;
  long in_x10;
  int in_w11;
  undefined8 uVar20;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar21;
  uint unaff_w22;
  long lVar22;
  long *plVar23;
  undefined4 unaff_w23;
  undefined8 uVar24;
  long *plVar25;
  undefined8 uVar26;
  int unaff_w24;
  long *plVar27;
  long unaff_x25;
  undefined8 uVar28;
  ulong uVar29;
  long *unaff_x27;
  uint *puVar30;
  long *unaff_x29;
  long lVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000038;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined4 in_stack_00000170;
  uint uStack00000000000001b8;
  undefined1 uStack00000000000001bc;
  
code_r0x036bd3ac:
  *(int *)(in_x9 + in_x10 * unaff_x21 + 0x28) = (in_w11 - unaff_w24) + 1;
  *(undefined4 *)(unaff_x19 + 0x644) = 0;
  *(undefined4 *)(unaff_x19 + 0x120) = unaff_w23;
  in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
  plVar27 = (long *)PTR_DAT_03d9c920;
  uVar10 = unaff_w22;
LAB_036be0ec:
  *(uint *)(unaff_x19 + 0x490) = in_w8 + 1;
  do {
    uVar7 = *(uint *)(unaff_x25 + 0x18);
    uVar10 = uVar10 + 1;
    if ((int)uVar7 <= (int)uVar10) {
LAB_036be10c:
      if (*(char *)(unaff_x19 + 0x3f5) != '\0') {
        *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
        goto LAB_036be118;
      }
      lVar22 = *unaff_x20;
      if (lVar22 == 0) goto LAB_036bea38;
      *(int *)(lVar22 + 0x1c) = in_stack_00000020._4_4_;
      lVar14 = *plVar27;
      if (*(int *)(lVar14 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar14 = *plVar27;
      }
      lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 8);
      if (lVar14 == 0) goto LAB_036bea38;
      uVar10 = FUN_02554fc4(lVar14,*(undefined8 *)PTR_DAT_03d9b168);
      *(uint *)(lVar22 + 0x34) = uVar10;
      if (*unaff_x20 == 0) goto LAB_036bea38;
      plVar23 = (long *)(*unaff_x20 + 0x60);
      lVar22 = *plVar23;
      if (lVar22 == 0) goto LAB_036bea38;
      uVar21 = (ulong)uVar10;
      if (*(int *)(lVar22 + 0x18) < (int)uVar10) {
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_01f52de4(plVar23,uVar21,0,*(undefined8 *)PTR_DAT_03d9cb38);
      }
      if (*(long *)(unaff_x19 + 0x708) == 0) goto LAB_036bea38;
      plVar23 = (long *)(unaff_x19 + 0x708);
      if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar10) {
        uVar11 = FUN_039155e8(uVar10 + 1,0);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*unaff_x27);
        }
        FUN_01f52b30(plVar23,uVar11,*(undefined8 *)PTR_DAT_03d9cc70);
      }
      if (*(char *)(unaff_x19 + 0x321) != '\0') {
        if (*unaff_x20 == 0) goto LAB_036bea38;
        plVar25 = (long *)(*unaff_x20 + 0x38);
        lVar22 = *plVar25;
        if (lVar22 == 0) goto LAB_036bea38;
        iVar12 = *(int *)(unaff_x19 + 0x490);
        if (0x100 < *(int *)(lVar22 + 0x18) - iVar12) {
          iVar13 = 0x100;
          if (0x100 < iVar12 + 1) {
            iVar13 = iVar12 + 1;
          }
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_01f52d44(plVar25,iVar13,1,*(undefined8 *)PTR_DAT_03d9cb30);
          plVar27 = (long *)PTR_DAT_03d9c920;
        }
      }
      fVar5 = DAT_00b55084;
      if ((int)uVar10 < 1) goto LAB_036be988;
      lVar22 = 0;
      uVar29 = 0;
      lVar14 = 0x54;
      lVar31 = 0x20;
      goto LAB_036be2bc;
    }
    if (uVar7 <= uVar10) goto LAB_036beac8;
    puVar30 = (uint *)(unaff_x25 + (long)(int)uVar10 * 0xc + 0x20);
    if (*puVar30 == 0) goto LAB_036be10c;
    if (*unaff_x20 == 0) goto LAB_036bea38;
    plVar27 = (long *)(*unaff_x20 + 0x38);
    lVar22 = *plVar27;
    iVar12 = *(int *)(unaff_x19 + 0x490);
    if ((lVar22 == 0) || (*(int *)(lVar22 + 0x18) <= iVar12)) {
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_01f52d44(plVar27,iVar12 + 1,1,*(undefined8 *)PTR_DAT_03d9cb30);
      uVar7 = *(uint *)(unaff_x25 + 0x18);
    }
    if (uVar7 <= uVar10) goto LAB_036beac8;
    uVar7 = *puVar30;
    if ((uVar7 != 0x3c) || (*(char *)(unaff_x19 + 0x302) == '\0')) break;
    unaff_w23 = *(undefined4 *)(unaff_x19 + 0x120);
    uVar21 = FUN_036e7318();
    unaff_w22 = uStack00000000000001b8;
    if ((uVar21 & 1) == 0) break;
    if (*(uint *)(unaff_x25 + 0x18) <= uVar10) goto LAB_036beac8;
    unaff_w24 = *(int *)(unaff_x25 + (long)(int)uVar10 * 0xc + 0x24);
    if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
      *(undefined1 *)(unaff_x19 + 0x26a) = 1;
    }
    puVar6 = PTR_DAT_03d9c920;
    unaff_x21 = 0x178;
    plVar27 = (long *)PTR_DAT_03d9c920;
    uVar10 = uStack00000000000001b8;
    if (*(int *)(unaff_x19 + 0x644) == 1) {
      lVar22 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar22 = *(long *)puVar6;
      }
      lVar22 = **(long **)(lVar22 + 0xb8);
      if (lVar22 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) goto LAB_036beac8;
      lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
      *(int *)(lVar22 + 0x54) = *(int *)(lVar22 + 0x54) + 1;
      if ((*unaff_x20 == 0) || (lVar22 = *(long *)(*unaff_x20 + 0x38), lVar22 == 0))
      goto LAB_036bea38;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036beac8;
      uVar11 = *(undefined4 *)(unaff_x19 + 0x6a4);
      lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
      *(short *)(lVar22 + 0x20) = (short)uVar11 + -0x2000;
      *(undefined4 *)(lVar22 + 0x48) = uVar11;
      *(long *)(lVar22 + 0x38) = *unaff_x29;
      thunk_FUN_01b4f09c();
      if ((*unaff_x20 == 0) || (lVar22 = *(long *)(*unaff_x20 + 0x38), lVar22 == 0))
      goto LAB_036bea38;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036beac8;
      *(undefined8 *)(lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x40) =
           *(undefined8 *)(unaff_x19 + 0x698);
      thunk_FUN_01b4f09c();
      if ((*unaff_x20 == 0) || (lVar22 = *(long *)(*unaff_x20 + 0x38), lVar22 == 0))
      goto LAB_036bea38;
      uVar10 = *(uint *)(unaff_x19 + 0x490);
      if (*(uint *)(lVar22 + 0x18) <= uVar10) goto LAB_036beac8;
      *(undefined4 *)(lVar22 + (long)(int)uVar10 * 0x178 + 0x58) =
           *(undefined4 *)(unaff_x19 + 0x120);
      if ((*(long *)(unaff_x19 + 0x698) == 0) ||
         (lVar14 = FUN_036fe7c0(*(long *)(unaff_x19 + 0x698),0), lVar14 == 0)) goto LAB_036bea38;
      uVar26 = FUN_02b59714(lVar14,*(undefined4 *)(unaff_x19 + 0x6a4),
                            *(undefined8 *)PTR_DAT_03d9c878);
      if (*(uint *)(lVar22 + 0x18) <= uVar10) goto LAB_036beac8;
      *(undefined8 *)(lVar22 + (long)(int)uVar10 * 0x178 + 0x30) = uVar26;
      thunk_FUN_01b4f09c();
      if ((*unaff_x20 == 0) || (in_x9 = *(long *)(*unaff_x20 + 0x38), in_x9 == 0))
      goto LAB_036bea38;
      in_w8 = *(uint *)(unaff_x19 + 0x490);
      if (*(uint *)(in_x9 + 0x18) <= in_w8) goto LAB_036beac8;
      uVar11 = *(undefined4 *)(unaff_x19 + 0x644);
      in_x10 = (long)(int)in_w8;
      lVar22 = in_x9 + in_x10 * 0x178;
      *(int *)(lVar22 + 0x24) = unaff_w24;
      *(undefined4 *)(lVar22 + 0x2c) = uVar11;
      if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) goto LAB_036beac8;
      in_w11 = *(int *)(in_stack_00000038 + (long)(int)unaff_w22 * 0xc + 0x24);
      unaff_x25 = in_stack_00000038;
      goto code_r0x036bd3ac;
    }
  } while( true );
  uStack00000000000001bc = 0;
  uVar20 = *(undefined8 *)(unaff_x19 + 0x100);
  uVar26 = *(undefined8 *)(unaff_x19 + 0x118);
  uVar11 = *(undefined4 *)(unaff_x19 + 0x120);
  if (*(int *)(unaff_x19 + 0x644) != 0) goto LAB_036bd4b8;
  uVar8 = *(uint *)(unaff_x19 + 0x25c);
  if ((uVar8 >> 4 & 1) == 0) {
    if ((uVar8 >> 3 & 1) == 0) {
      if ((uVar8 >> 5 & 1) != 0) goto LAB_036bd40c;
    }
    else {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar21 = FUN_02fdd92c(uVar7,0);
      if ((uVar21 & 1) != 0) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar7 = FUN_02fdddc0(uVar7,0);
        goto LAB_036bd4b4;
      }
    }
  }
  else {
LAB_036bd40c:
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar21 = FUN_02fdd9e8(uVar7,0);
    if ((uVar21 & 1) != 0) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar7 = FUN_02fddc48(uVar7,0);
LAB_036bd4b4:
      uVar7 = uVar7 & 0xffff;
    }
  }
LAB_036bd4b8:
  lVar22 = FUN_036f260c();
  if (lVar22 == 0) {
    iVar12 = FUN_036fb88c();
    if (*(uint *)(unaff_x25 + 0x18) <= uVar10) goto LAB_036beac8;
    if (iVar12 == 0) {
      uVar8 = 0x25a1;
    }
    else {
      uVar8 = FUN_036fb88c(0);
    }
    *puVar30 = uVar8;
    uVar24 = *(undefined8 *)(unaff_x19 + 0x100);
    uVar9 = *(undefined4 *)(unaff_x19 + 0x25c);
    uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
    if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar22 = FUN_036d1ff4(uVar8,uVar24,1,uVar9,uVar2,(long)&stack0x000001b8 + 4,0);
    if (lVar22 == 0) {
      lVar22 = FUN_036fba04();
      if (lVar22 != 0) {
        lVar22 = FUN_036fba04(0);
        if (lVar22 == 0) goto LAB_036bea38;
        if (0 < *(int *)(lVar22 + 0x18)) {
          uVar28 = *(undefined8 *)(unaff_x19 + 0x100);
          uVar24 = FUN_036fba04(0);
          uVar9 = *(undefined4 *)(unaff_x19 + 0x25c);
          uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
          if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb18);
          }
          lVar22 = FUN_036d2514(uVar8,uVar28,uVar24,1,uVar9,uVar2,(long)&stack0x000001b8 + 4,0);
          if (lVar22 != 0) goto LAB_036bd568;
        }
      }
      uVar24 = FUN_036fb8e4(0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar21 = FUN_0391f968(uVar24,0,0);
      if ((uVar21 & 1) != 0) {
        uVar24 = FUN_036fb8e4(0);
        uVar9 = *(undefined4 *)(unaff_x19 + 0x25c);
        uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
        if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb18);
        }
        lVar22 = FUN_036d1ff4(uVar8,uVar24,1,uVar9,uVar2,(long)&stack0x000001b8 + 4,0);
        if (lVar22 != 0) goto LAB_036bd568;
      }
      if (*(uint *)(in_stack_00000038 + 0x18) <= uVar10) goto LAB_036beac8;
      *puVar30 = 0x20;
      uVar24 = *(undefined8 *)(unaff_x19 + 0x100);
      uVar9 = *(undefined4 *)(unaff_x19 + 0x25c);
      uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
      if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = 0x20;
      lVar22 = FUN_036d1ff4(0x20,uVar24,1,uVar9,uVar2,(long)&stack0x000001b8 + 4,0);
      if (lVar22 == 0) {
        if (*(uint *)(in_stack_00000038 + 0x18) <= uVar10) goto LAB_036beac8;
        *puVar30 = 3;
        uVar24 = *(undefined8 *)(unaff_x19 + 0x100);
        uVar9 = *(undefined4 *)(unaff_x19 + 0x25c);
        uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
        if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar8 = 3;
        lVar22 = FUN_036d1ff4(3,uVar24,1,uVar9,uVar2,(long)&stack0x000001b8 + 4,0);
      }
    }
LAB_036bd568:
    uVar21 = FUN_036fb8c8(0);
    if ((uVar21 & 1) == 0) {
      plVar27 = (long *)FUN_01b47fd0(*(undefined8 *)
                                      Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                     ,4);
      if ((int)uVar7 < 0x10000) {
        in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar7);
        lVar14 = thunk_FUN_01afa70c(*(undefined8 *)
                                     Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                    ,&stack0x000000e0);
        if (plVar27 == (long *)0x0) goto LAB_036bea38;
        if ((lVar14 != 0) &&
           (lVar31 = thunk_FUN_01afa9e0(lVar14,*(undefined8 *)(*plVar27 + 0x40)), lVar31 == 0))
        goto LAB_036beacc;
        if ((int)plVar27[3] == 0) goto LAB_036beac8;
        plVar27[4] = lVar14;
        thunk_FUN_01b4f09c(plVar27 + 4,lVar14);
        if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_036bea38;
        lVar14 = FUN_039230bc(*(long *)(unaff_x19 + 0xf8),0);
        if ((lVar14 != 0) &&
           (lVar31 = thunk_FUN_01afa9e0(lVar14,*(undefined8 *)(*plVar27 + 0x40)), lVar31 == 0))
        goto LAB_036beacc;
        if (*(uint *)(plVar27 + 3) < 2) goto LAB_036beac8;
        plVar27[5] = lVar14;
        thunk_FUN_01b4f09c(plVar27 + 5,lVar14);
        if (lVar22 == 0) goto LAB_036bea38;
        in_stack_00000170 = *(undefined4 *)(lVar22 + 0x14);
        lVar14 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&stack0x00000170);
        if ((lVar14 != 0) &&
           (lVar31 = thunk_FUN_01afa9e0(lVar14,*(undefined8 *)(*plVar27 + 0x40)), lVar31 == 0))
        goto LAB_036beacc;
        if (*(uint *)(plVar27 + 3) < 3) goto LAB_036beac8;
        plVar27[6] = lVar14;
        thunk_FUN_01b4f09c(plVar27 + 6,lVar14);
        lVar14 = FUN_039230bc();
        if ((lVar14 != 0) &&
           (lVar31 = thunk_FUN_01afa9e0(lVar14,*(undefined8 *)(*plVar27 + 0x40)), lVar31 == 0))
        goto LAB_036beacc;
        if (*(uint *)(plVar27 + 3) < 4) goto LAB_036beac8;
        plVar27[7] = lVar14;
        thunk_FUN_01b4f09c(plVar27 + 7,lVar14);
        puVar17 = (undefined8 *)PTR_DAT_03d9cb50;
      }
      else {
        in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar7);
        lVar14 = thunk_FUN_01afa70c(*(undefined8 *)
                                     Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                    ,&stack0x000000e0);
        if (plVar27 == (long *)0x0) goto LAB_036bea38;
        if ((lVar14 != 0) &&
           (lVar31 = thunk_FUN_01afa9e0(lVar14,*(undefined8 *)(*plVar27 + 0x40)), lVar31 == 0))
        goto LAB_036beacc;
        if ((int)plVar27[3] == 0) goto LAB_036beac8;
        plVar27[4] = lVar14;
        thunk_FUN_01b4f09c(plVar27 + 4,lVar14);
        if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_036bea38;
        lVar14 = FUN_039230bc(*(long *)(unaff_x19 + 0xf8),0);
        if ((lVar14 != 0) &&
           (lVar31 = thunk_FUN_01afa9e0(lVar14,*(undefined8 *)(*plVar27 + 0x40)), lVar31 == 0))
        goto LAB_036beacc;
        if (*(uint *)(plVar27 + 3) < 2) goto LAB_036beac8;
        plVar27[5] = lVar14;
        thunk_FUN_01b4f09c(plVar27 + 5,lVar14);
        if (lVar22 == 0) goto LAB_036bea38;
        in_stack_00000170 = *(undefined4 *)(lVar22 + 0x14);
        lVar14 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&stack0x00000170);
        if ((lVar14 != 0) &&
           (lVar31 = thunk_FUN_01afa9e0(lVar14,*(undefined8 *)(*plVar27 + 0x40)), lVar31 == 0))
        goto LAB_036beacc;
        if (*(uint *)(plVar27 + 3) < 3) goto LAB_036beac8;
        plVar27[6] = lVar14;
        thunk_FUN_01b4f09c(plVar27 + 6,lVar14);
        lVar14 = FUN_039230bc();
        if ((lVar14 != 0) &&
           (lVar31 = thunk_FUN_01afa9e0(lVar14,*(undefined8 *)(*plVar27 + 0x40)), lVar31 == 0))
        goto LAB_036beacc;
        if (*(uint *)(plVar27 + 3) < 4) goto LAB_036beac8;
        plVar27[7] = lVar14;
        thunk_FUN_01b4f09c(plVar27 + 7,lVar14);
        puVar17 = (undefined8 *)PTR_DAT_03d9cb48;
      }
      uVar24 = FUN_02ee71a8(*puVar17,plVar27,0);
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f3474(uVar24);
      unaff_x25 = in_stack_00000038;
      uVar7 = uVar8;
    }
    else {
      unaff_x25 = in_stack_00000038;
      uVar7 = uVar8;
      if (lVar22 == 0) goto LAB_036bea38;
    }
  }
  if (*(char *)(lVar22 + 0x10) == '\x01') {
    if (*(long *)(lVar22 + 0x18) == 0) goto LAB_036bea38;
    iVar12 = FUN_036c1bb4(*(long *)(lVar22 + 0x18),0);
    if (*unaff_x29 == 0) goto LAB_036bea38;
    iVar13 = FUN_036c1bb4(*unaff_x29,0);
    if (iVar12 != iVar13) {
      plVar27 = *(long **)(lVar22 + 0x18);
      if (plVar27 == (long *)0x0) {
        plVar27 = (long *)0x0;
        *unaff_x29 = 0;
      }
      else {
        lVar14 = *(long *)StringLiteral_444;
        bVar3 = *(byte *)(lVar14 + 0x130);
        if (*(byte *)(*plVar27 + 0x130) < bVar3) {
          plVar23 = (long *)0x0;
        }
        else {
          plVar23 = plVar27;
          if (*(long *)(*(long *)(*plVar27 + 200) + (ulong)bVar3 * 8 + -8) != lVar14) {
            plVar23 = (long *)0x0;
          }
        }
        *unaff_x29 = (long)plVar23;
        if (*(byte *)(*plVar27 + 0x130) < bVar3) {
          plVar27 = (long *)0x0;
        }
        else if (*(long *)(*(long *)(*plVar27 + 200) + (ulong)bVar3 * 8 + -8) != lVar14) {
          plVar27 = (long *)0x0;
        }
      }
      thunk_FUN_01b4f09c(unaff_x29,plVar27);
      bVar4 = true;
      goto LAB_036bdb10;
    }
  }
  bVar4 = false;
LAB_036bdb10:
  if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x38), lVar14 == 0)) goto LAB_036bea38;
  if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036beac8;
  lVar14 = lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
  plVar27 = (long *)(lVar14 + 0x30);
  *plVar27 = lVar22;
  *(undefined4 *)(lVar14 + 0x2c) = 0;
  thunk_FUN_01b4f09c(plVar27,lVar22);
  if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x38), lVar14 == 0)) goto LAB_036bea38;
  uVar8 = *(uint *)(unaff_x19 + 0x490);
  if (*(uint *)(lVar14 + 0x18) <= uVar8) goto LAB_036beac8;
  lVar31 = lVar14 + (long)(int)uVar8 * 0x178;
  *(short *)(lVar31 + 0x20) = (short)uVar7;
  *(undefined1 *)(lVar31 + 0x5c) = uStack00000000000001bc;
  if (*(uint *)(unaff_x25 + 0x18) <= uVar10) goto LAB_036beac8;
  lVar14 = lVar14 + (long)(int)uVar8 * 0x178;
  *(undefined8 *)(lVar14 + 0x24) = *(undefined8 *)(unaff_x25 + (long)(int)uVar10 * 0xc + 0x24);
  *(long *)(lVar14 + 0x38) = *unaff_x29;
  thunk_FUN_01b4f09c();
  plVar27 = (long *)PTR_DAT_03d9c920;
  if (*(char *)(lVar22 + 0x10) == '\x02') {
    plVar23 = *(long **)(lVar22 + 0x18);
    if (plVar23 == (long *)0x0) goto LAB_036bea38;
    bVar3 = *(byte *)(*(long *)PTR_DAT_03d9cb28 + 0x130);
    if ((*(byte *)(*plVar23 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_03d9cb28))
    goto LAB_036bea38;
    lVar31 = plVar23[4];
    lVar14 = *(long *)PTR_DAT_03d9c920;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar14 = *plVar27;
    }
    uVar7 = FUN_036b0d60(lVar31,plVar23,*(long *)(lVar14 + 0xb8),
                         *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8));
    *(uint *)(unaff_x19 + 0x120) = uVar7;
    lVar14 = **(long **)(*plVar27 + 0xb8);
    if (lVar14 == 0) goto LAB_036bea38;
    if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_036beac8;
    lVar14 = lVar14 + (long)(int)uVar7 * 0x38;
    *(int *)(lVar14 + 0x54) = *(int *)(lVar14 + 0x54) + 1;
    if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x38), lVar14 == 0))
    goto LAB_036bea38;
    if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036beac8;
    lVar14 = lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
    *(undefined4 *)(lVar14 + 0x2c) = 1;
    uVar9 = *(undefined4 *)(unaff_x19 + 0x120);
    *(undefined8 *)(lVar14 + 0x40) = plVar23;
    *(undefined4 *)(lVar14 + 0x58) = uVar9;
    thunk_FUN_01b4f09c((undefined8 *)(lVar14 + 0x40),plVar23);
    plVar27 = (long *)PTR_DAT_03d9c920;
    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
       (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar14 == 0)) goto LAB_036bea38;
    in_w8 = *(uint *)(unaff_x19 + 0x490);
    if (*(uint *)(lVar14 + 0x18) <= in_w8) goto LAB_036beac8;
    *(undefined4 *)(lVar14 + (long)(int)in_w8 * 0x178 + 0x48) = *(undefined4 *)(lVar22 + 0x28);
    *(undefined4 *)(unaff_x19 + 0x644) = 0;
    *(undefined4 *)(unaff_x19 + 0x120) = uVar11;
    in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
    unaff_x25 = in_stack_00000038;
    unaff_x27 = (long *)PTR_DAT_03d9c8a0;
  }
  else {
    if (bVar4) {
      if (*unaff_x29 == 0) goto LAB_036bea38;
      iVar12 = FUN_036c1bb4(*unaff_x29,0);
      if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_036bea38;
      iVar13 = FUN_036c1bb4(*(long *)(unaff_x19 + 0xf8),0);
      if (iVar12 != iVar13) {
        uVar21 = FUN_036fba20(0);
        if ((uVar21 & 1) == 0) {
          if (*unaff_x29 == 0) goto LAB_036bea38;
          uVar24 = *(undefined8 *)(*unaff_x29 + 0x20);
        }
        else {
          if (*unaff_x29 == 0) goto LAB_036bea38;
          uVar24 = *in_stack_00000028;
          uVar28 = *(undefined8 *)(*unaff_x29 + 0x20);
          if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar24 = FUN_036f7d2c(uVar24,uVar28,0);
        }
        *in_stack_00000028 = uVar24;
        thunk_FUN_01b4f09c(in_stack_00000028);
        lVar14 = *plVar27;
        uVar24 = *in_stack_00000028;
        lVar31 = *unaff_x29;
        if (*(int *)(lVar14 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar14 = *plVar27;
        }
        uVar9 = FUN_036b0b30(uVar24,lVar31,*(long *)(lVar14 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8));
        *(undefined4 *)(unaff_x19 + 0x120) = uVar9;
        unaff_x25 = in_stack_00000038;
      }
    }
    if (*(long *)(lVar22 + 0x20) == 0) goto LAB_036bea38;
    iVar12 = FUN_0396b18c(*(long *)(lVar22 + 0x20),0);
    if (0 < iVar12) {
      if (*(long *)(lVar22 + 0x20) == 0) goto LAB_036bea38;
      lVar14 = *unaff_x29;
      uVar24 = *in_stack_00000028;
      uVar9 = FUN_0396b18c(*(long *)(lVar22 + 0x20),0);
      if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb20);
      }
      uVar24 = FUN_036f77c8(lVar14,uVar24,uVar9,0);
      *in_stack_00000028 = uVar24;
      thunk_FUN_01b4f09c(in_stack_00000028,uVar24);
      lVar22 = *plVar27;
      uVar24 = *in_stack_00000028;
      lVar14 = *unaff_x29;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar22 = *plVar27;
      }
      uVar9 = FUN_036b0b30(uVar24,lVar14,*(long *)(lVar22 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 8));
      bVar4 = true;
      *(undefined4 *)(unaff_x19 + 0x120) = uVar9;
      unaff_x25 = in_stack_00000038;
    }
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar21 = FUN_02fdb080(uVar7,0);
    unaff_x27 = (long *)PTR_DAT_03d9c8a0;
    if ((uVar7 != 0x200b) && ((uVar21 & 1) == 0)) {
      lVar22 = *plVar27;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar22);
        lVar22 = *plVar27;
      }
      lVar14 = **(long **)(lVar22 + 0xb8);
      if (lVar14 == 0) goto LAB_036bea38;
      uVar7 = *(uint *)(unaff_x19 + 0x120);
      if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_036beac8;
      if (*(int *)(lVar14 + (long)(int)uVar7 * 0x38 + 0x54) < 0x3fff) {
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar22);
          lVar14 = **(long **)(*plVar27 + 0xb8);
          if (lVar14 == 0) goto LAB_036bea38;
          uVar7 = *(uint *)(unaff_x19 + 0x120);
        }
      }
      else {
        uVar28 = *in_stack_00000028;
        uVar24 = thunk_FUN_01afaadc(*(undefined8 *)
                                     Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                                   );
        FUN_038ff0a8(uVar24,uVar28,0);
        lVar22 = *plVar27;
        lVar14 = *unaff_x29;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar22 = *plVar27;
        }
        uVar7 = FUN_036b0b30(uVar24,lVar14,*(long *)(lVar22 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 8));
        *(uint *)(unaff_x19 + 0x120) = uVar7;
        lVar14 = **(long **)(*plVar27 + 0xb8);
        if (lVar14 == 0) goto LAB_036bea38;
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_036beac8;
      lVar14 = lVar14 + (long)(int)uVar7 * 0x38;
      *(int *)(lVar14 + 0x54) = *(int *)(lVar14 + 0x54) + 1;
    }
    if ((*unaff_x20 == 0) || (lVar22 = *(long *)(*unaff_x20 + 0x38), lVar22 == 0))
    goto LAB_036bea38;
    if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036beac8;
    *(undefined8 *)(lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x50) =
         *in_stack_00000028;
    thunk_FUN_01b4f09c();
    if ((*unaff_x20 == 0) || (lVar22 = *(long *)(*unaff_x20 + 0x38), lVar22 == 0))
    goto LAB_036bea38;
    if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036beac8;
    uVar7 = *(uint *)(unaff_x19 + 0x120);
    *(uint *)(lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x58) = uVar7;
    lVar22 = *plVar27;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar22 = *plVar27;
      uVar7 = *(uint *)(unaff_x19 + 0x120);
    }
    lVar14 = **(long **)(lVar22 + 0xb8);
    if (lVar14 == 0) goto LAB_036bea38;
    if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_036beac8;
    *(bool *)(lVar14 + (long)(int)uVar7 * 0x38 + 0x41) = bVar4;
    if (bVar4) {
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar14 = **(long **)(*plVar27 + 0xb8);
        if (lVar14 == 0) goto LAB_036bea38;
        uVar7 = *(uint *)(unaff_x19 + 0x120);
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_036beac8;
      puVar17 = (undefined8 *)(lVar14 + (long)(int)uVar7 * 0x38 + 0x48);
      *puVar17 = uVar26;
      thunk_FUN_01b4f09c(puVar17,uVar26);
      *(undefined8 *)(unaff_x19 + 0x100) = uVar20;
      thunk_FUN_01b4f09c(unaff_x29);
      *(undefined8 *)(unaff_x19 + 0x118) = uVar26;
      thunk_FUN_01b4f09c(in_stack_00000028,uVar26);
      *(undefined4 *)(unaff_x19 + 0x120) = uVar11;
    }
    in_w8 = *(uint *)(unaff_x19 + 0x490);
  }
  goto LAB_036be0ec;
LAB_036be2bc:
  do {
    fVar35 = (float)param_2;
    if (uVar29 != 0) {
      lVar18 = *plVar23;
      if (lVar18 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_036beac8;
      uVar26 = *(undefined8 *)(lVar18 + uVar29 * 8 + 0x20);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar15 = FUN_03922f24(uVar26,0,0);
      if ((uVar15 & 1) != 0) {
        lVar18 = *plVar27;
        plVar25 = (long *)*plVar23;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar18 = *plVar27;
        }
        lVar18 = **(long **)(lVar18 + 0xb8);
        if (lVar18 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_036beac8;
        lVar18 = lVar18 + lVar14;
        in_stack_00000160 = *(undefined8 *)(lVar18 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar18 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar18 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar18 + -0x1c);
        uVar26 = *(undefined8 *)(lVar18 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar18 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar18 + -0x34);
        in_stack_00000140 = uVar26;
        lVar18 = FUN_03702d14();
        fVar35 = (float)uVar26;
        if (plVar25 == (long *)0x0) goto LAB_036bea38;
        if ((lVar18 != 0) &&
           (lVar16 = thunk_FUN_01afa9e0(lVar18,*(undefined8 *)(*plVar25 + 0x40)), lVar16 == 0)) {
LAB_036beacc:
          uVar26 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
          FUN_01b48050(uVar26,0);
        }
        if (*(uint *)(plVar25 + 3) <= uVar29) goto LAB_036beac8;
        plVar25[uVar29 + 4] = lVar18;
        thunk_FUN_01b4f09c((long)plVar25 + lVar31,lVar18);
        plVar27 = (long *)PTR_DAT_03d9c920;
        if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x60), lVar18 == 0))
        goto LAB_036bea38;
        if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_036beac8;
        puVar17 = (undefined8 *)(lVar18 + lVar22 + 0x30);
        *puVar17 = 0;
        thunk_FUN_01b4f09c(puVar17,0);
      }
      if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_036bea38;
      fVar32 = (float)FUN_03928134(*(long *)(unaff_x19 + 0x380),0);
      lVar18 = *plVar23;
      if (lVar18 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_036beac8;
      lVar18 = *(long *)(lVar18 + uVar29 * 8 + 0x20);
      if ((lVar18 == 0) || (fVar34 = fVar35, lVar18 = FUN_039ad440(lVar18,0), lVar18 == 0))
      goto LAB_036bea38;
      fVar33 = (float)FUN_03928134(lVar18,0);
      fVar35 = (fVar35 - fVar34) * (fVar35 - fVar34);
      param_2 = (ulong)(uint)fVar35;
      if (fVar5 <= (fVar32 - fVar33) * (fVar32 - fVar33) + fVar35) {
        lVar18 = *plVar23;
        if (lVar18 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_036beac8;
        lVar18 = *(long *)(lVar18 + uVar29 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_036bea38;
        lVar18 = FUN_039ad440(lVar18,0);
        if ((*(long *)(unaff_x19 + 0x380) == 0) ||
           (FUN_03928134(*(long *)(unaff_x19 + 0x380),0), lVar18 == 0)) goto LAB_036bea38;
        FUN_039281c4(lVar18,0);
      }
      lVar18 = *plVar23;
      if (lVar18 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_036beac8;
      lVar18 = *(long *)(lVar18 + uVar29 * 8 + 0x20);
      if (lVar18 == 0) goto LAB_036bea38;
      uVar26 = *(undefined8 *)(lVar18 + 0xf0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar15 = FUN_03922f24(uVar26,0,0);
      if ((uVar15 & 1) == 0) {
        lVar18 = *plVar23;
        if (lVar18 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_036beac8;
        lVar18 = *(long *)(lVar18 + uVar29 * 8 + 0x20);
        if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0xf0), lVar18 == 0)) goto LAB_036bea38;
        iVar12 = FUN_03922ce0(lVar18,0);
        lVar18 = *plVar27;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar18);
          lVar18 = *plVar27;
        }
        lVar18 = **(long **)(lVar18 + 0xb8);
        if (lVar18 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_036beac8;
        lVar18 = *(long *)(lVar18 + lVar14 + -0x1c);
        if (lVar18 == 0) goto LAB_036bea38;
        iVar13 = FUN_03922ce0(lVar18,0);
        if (iVar12 != iVar13) goto LAB_036be568;
      }
      else {
LAB_036be568:
        lVar18 = *plVar23;
        if (lVar18 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_036beac8;
        lVar16 = *plVar27;
        lVar18 = *(long *)(lVar18 + uVar29 * 8 + 0x20);
        if (*(int *)(lVar16 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar16 = *plVar27;
        }
        lVar16 = **(long **)(lVar16 + 0xb8);
        if (lVar16 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar16 + 0x18) <= uVar29) goto LAB_036beac8;
        if (lVar18 == 0) goto LAB_036bea38;
        thunk_FUN_03702968(lVar18,*(undefined8 *)(lVar16 + lVar14 + -0x1c),0);
        lVar18 = *plVar23;
        if (lVar18 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_036beac8;
        lVar16 = **(long **)(*plVar27 + 0xb8);
        if (lVar16 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar16 + 0x18) <= uVar29) goto LAB_036beac8;
        lVar18 = *(long *)(lVar18 + uVar29 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_036bea38;
        *(undefined8 *)(lVar18 + 0xd8) = *(undefined8 *)(lVar16 + lVar14 + -0x2c);
        thunk_FUN_01b4f09c();
        lVar18 = *plVar23;
        if (lVar18 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_036beac8;
        lVar16 = **(long **)(*plVar27 + 0xb8);
        if (lVar16 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar16 + 0x18) <= uVar29) goto LAB_036beac8;
        lVar18 = *(long *)(lVar18 + uVar29 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_036bea38;
        *(undefined8 *)(lVar18 + 0xe0) = *(undefined8 *)(lVar16 + lVar14 + -0x24);
        thunk_FUN_01b4f09c();
      }
      lVar18 = *plVar27;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar18 = *plVar27;
      }
      lVar16 = **(long **)(lVar18 + 0xb8);
      if (lVar16 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar16 + 0x18) <= uVar29) goto LAB_036beac8;
      if (*(char *)(lVar16 + lVar14 + -0x13) != '\0') {
        lVar19 = *plVar23;
        if (lVar19 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar19 + 0x18) <= uVar29) goto LAB_036beac8;
        lVar19 = *(long *)(lVar19 + uVar29 * 8 + 0x20);
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar16 = **(long **)(*plVar27 + 0xb8);
          if (lVar16 == 0) goto LAB_036bea38;
        }
        if (*(uint *)(lVar16 + 0x18) <= uVar29) goto LAB_036beac8;
        if (lVar19 == 0) goto LAB_036bea38;
        FUN_037029c4(lVar19,*(undefined8 *)(lVar16 + lVar14 + -0x1c),0);
        lVar18 = *plVar23;
        if (lVar18 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_036beac8;
        lVar16 = **(long **)(*plVar27 + 0xb8);
        if (lVar16 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar16 + 0x18) <= uVar29) goto LAB_036beac8;
        lVar18 = *(long *)(lVar18 + uVar29 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_036bea38;
        *(undefined8 *)(lVar18 + 0x100) = *(undefined8 *)(lVar16 + lVar14 + -0xc);
        thunk_FUN_01b4f09c(lVar18 + 0x100);
      }
    }
    lVar18 = *plVar27;
    if (*(int *)(lVar18 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar18 = *plVar27;
    }
    lVar18 = **(long **)(lVar18 + 0xb8);
    if (lVar18 == 0) goto LAB_036bea38;
    if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_036beac8;
    if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x60), lVar16 == 0))
    goto LAB_036bea38;
    if (*(uint *)(lVar16 + 0x18) <= uVar29) goto LAB_036beac8;
    lVar19 = *(long *)(lVar16 + lVar22 + 0x30);
    iVar12 = *(int *)(lVar18 + lVar14);
    if (lVar19 == 0) {
      if (uVar29 == 0) {
        in_stack_00000118 = 0;
        in_stack_00000110 = 0;
        in_stack_00000128 = 0;
        in_stack_00000120 = 0;
        in_stack_000000f8 = 0;
        in_stack_000000f0 = 0;
        in_stack_00000108 = 0;
        in_stack_00000100 = 0;
        in_stack_000000e8 = 0;
        in_stack_000000e0 = 0;
        FUN_036f884c(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar12 + 1,0);
        memcpy(&stack0x00000090,&stack0x000000e0,0x50);
        if (*(int *)(lVar16 + 0x18) == 0) goto LAB_036beac8;
        memcpy((void *)(lVar16 + lVar22 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar16 + 0x20);
      }
      else {
        lVar18 = *plVar23;
        if (lVar18 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar18 + 0x18) <= uVar29) goto LAB_036beac8;
        lVar18 = *(long *)(lVar18 + uVar29 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_036bea38;
        uVar26 = FUN_03702ba4(lVar18,0);
        in_stack_00000118 = 0;
        in_stack_00000110 = 0;
        in_stack_00000128 = 0;
        in_stack_00000120 = 0;
        in_stack_000000f8 = 0;
        in_stack_000000f0 = 0;
        in_stack_00000108 = 0;
        in_stack_00000100 = 0;
        in_stack_000000e8 = 0;
        in_stack_000000e0 = 0;
        FUN_036f884c(&stack0x000000e0,uVar26,iVar12 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar16 + 0x18) <= uVar29) goto LAB_036beac8;
        __dest = (void *)(lVar16 + lVar22 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      thunk_FUN_01b4f09c(__dest,0);
    }
    else {
      iVar13 = *(int *)(lVar19 + 0x18);
      if (iVar13 < iVar12 * 4) {
LAB_036be7d8:
        if (iVar12 < 0x401) {
          iVar12 = FUN_039155e8(iVar12 + 1,0);
        }
        else {
          iVar12 = iVar12 + 0x100;
        }
        if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__ +
                    0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_036f961c(lVar16 + lVar22 + 0x20,iVar12,0);
      }
      else if ((0 < iVar12) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
        iVar1 = iVar13 + 3;
        if (-1 < iVar13) {
          iVar1 = iVar13;
        }
        if (0x100 < (iVar1 >> 2) - iVar12) goto LAB_036be7d8;
      }
    }
    plVar27 = (long *)PTR_DAT_03d9c920;
    if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x60), lVar18 == 0))
    goto LAB_036bea38;
    lVar16 = *(long *)PTR_DAT_03d9c920;
    if (*(int *)(lVar16 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar16 = *plVar27;
    }
    lVar16 = **(long **)(lVar16 + 0xb8);
    if (lVar16 == 0) goto LAB_036bea38;
    if ((*(uint *)(lVar16 + 0x18) <= uVar29) || (*(uint *)(lVar18 + 0x18) <= uVar29))
    goto LAB_036beac8;
    *(undefined8 *)(lVar18 + lVar22 + 0x68) = *(undefined8 *)(lVar16 + lVar14 + -0x1c);
    thunk_FUN_01b4f09c();
    uVar29 = uVar29 + 1;
    lVar22 = lVar22 + 0x50;
    lVar14 = lVar14 + 0x38;
    lVar31 = lVar31 + 8;
  } while (uVar10 != uVar29);
LAB_036be988:
  lVar22 = *plVar23;
  if (lVar22 != 0) {
    lVar14 = (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar21 << 3) + 0x20;
    do {
      uVar10 = (uint)uVar21;
      if ((int)*(uint *)(lVar22 + 0x18) <= (int)uVar10) {
LAB_036be118:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar22 + 0x18) <= uVar10) {
LAB_036beac8:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar26 = *(undefined8 *)(lVar22 + lVar14);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar21 = FUN_0391f968(uVar26,0,0);
      if ((uVar21 & 1) == 0) goto LAB_036be118;
      if ((*unaff_x20 == 0) || (lVar22 = *(long *)(*unaff_x20 + 0x60), lVar22 == 0)) break;
      if ((int)uVar10 < *(int *)(lVar22 + 0x18)) {
        lVar22 = *plVar23;
        if (lVar22 == 0) break;
        if (*(uint *)(lVar22 + 0x18) <= uVar10) goto LAB_036beac8;
        if ((*(long *)(lVar22 + lVar14) == 0) ||
           (lVar22 = FUN_039add2c(*(long *)(lVar22 + lVar14),0), lVar22 == 0)) break;
        FUN_03af8c9c(lVar22,0,0);
      }
      lVar22 = *plVar23;
      uVar21 = (ulong)(uVar10 + 1);
      lVar14 = lVar14 + 8;
    } while (lVar22 != 0);
  }
LAB_036bea38:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


