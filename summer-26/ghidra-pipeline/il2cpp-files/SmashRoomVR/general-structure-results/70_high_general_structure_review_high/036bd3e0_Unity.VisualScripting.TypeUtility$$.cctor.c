/*
FUNCTION_NAME: Unity.VisualScripting.TypeUtility$$.cctor
ENTRY_POINT: 036bd3e0
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


undefined4 Unity_VisualScripting_TypeUtility___cctor(undefined1 param_1 [16],ulong param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  float fVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  void *__dest;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  long *plVar22;
  long *plVar23;
  undefined8 uVar24;
  long unaff_x24;
  long *plVar25;
  long unaff_x25;
  undefined8 uVar26;
  ulong uVar27;
  uint unaff_w28;
  uint *unaff_x29;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined4 uStack0000000000000034;
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
  
code_r0x036bd3e0:
  uStack0000000000000010 = *(undefined8 *)(unaff_x19 + 0x100);
  uStack0000000000000018 = *(undefined8 *)(unaff_x19 + 0x118);
  uStack0000000000000034 = *(undefined4 *)(unaff_x19 + 0x120);
  if (*(int *)(unaff_x19 + 0x644) != 0) goto LAB_036bd4b8;
  uVar7 = *(uint *)(unaff_x19 + 0x25c);
  if ((uVar7 >> 4 & 1) == 0) {
    if ((uVar7 >> 3 & 1) == 0) {
      if ((uVar7 >> 5 & 1) != 0) goto LAB_036bd40c;
    }
    else {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar11 = FUN_02fdd92c(unaff_w28,0);
      if ((uVar11 & 1) != 0) {
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar7 = FUN_02fdddc0(unaff_w28,0);
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
    uVar11 = FUN_02fdd9e8(unaff_w28,0);
    if ((uVar11 & 1) != 0) {
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar7 = FUN_02fddc48(unaff_w28,0);
LAB_036bd4b4:
      unaff_w28 = uVar7 & 0xffff;
    }
  }
LAB_036bd4b8:
  lVar12 = FUN_036f260c();
  if (lVar12 == 0) {
    iVar8 = FUN_036fb88c();
    if (*(uint *)(unaff_x25 + 0x18) <= unaff_w22) goto LAB_036beac8;
    if (iVar8 == 0) {
      uVar7 = 0x25a1;
    }
    else {
      uVar7 = FUN_036fb88c(0);
    }
    *unaff_x29 = uVar7;
    uVar24 = *(undefined8 *)(unaff_x19 + 0x100);
    uVar10 = *(undefined4 *)(unaff_x19 + 0x25c);
    uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
    if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    lVar12 = FUN_036d1ff4(uVar7,uVar24,1,uVar10,uVar2,(long)&stack0x000001b8 + 4,0);
    if (lVar12 == 0) {
      lVar12 = FUN_036fba04();
      if (lVar12 != 0) {
        lVar12 = FUN_036fba04(0);
        if (lVar12 == 0) goto LAB_036bea38;
        if (0 < *(int *)(lVar12 + 0x18)) {
          uVar26 = *(undefined8 *)(unaff_x19 + 0x100);
          uVar24 = FUN_036fba04(0);
          uVar10 = *(undefined4 *)(unaff_x19 + 0x25c);
          uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
          if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb18);
          }
          lVar12 = FUN_036d2514(uVar7,uVar26,uVar24,1,uVar10,uVar2,(long)&stack0x000001b8 + 4,0);
          if (lVar12 != 0) goto LAB_036bd568;
        }
      }
      uVar24 = FUN_036fb8e4(0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar11 = FUN_0391f968(uVar24,0,0);
      if ((uVar11 & 1) != 0) {
        uVar24 = FUN_036fb8e4(0);
        uVar10 = *(undefined4 *)(unaff_x19 + 0x25c);
        uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
        if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb18);
        }
        lVar12 = FUN_036d1ff4(uVar7,uVar24,1,uVar10,uVar2,(long)&stack0x000001b8 + 4,0);
        if (lVar12 != 0) goto LAB_036bd568;
      }
      if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) goto LAB_036beac8;
      *unaff_x29 = 0x20;
      uVar24 = *(undefined8 *)(unaff_x19 + 0x100);
      uVar10 = *(undefined4 *)(unaff_x19 + 0x25c);
      uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
      if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar7 = 0x20;
      lVar12 = FUN_036d1ff4(0x20,uVar24,1,uVar10,uVar2,(long)&stack0x000001b8 + 4,0);
      if (lVar12 == 0) {
        if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) goto LAB_036beac8;
        *unaff_x29 = 3;
        uVar24 = *(undefined8 *)(unaff_x19 + 0x100);
        uVar10 = *(undefined4 *)(unaff_x19 + 0x25c);
        uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
        if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar7 = 3;
        lVar12 = FUN_036d1ff4(3,uVar24,1,uVar10,uVar2,(long)&stack0x000001b8 + 4,0);
      }
    }
LAB_036bd568:
    uVar11 = FUN_036fb8c8(0);
    if ((uVar11 & 1) == 0) {
      plVar13 = (long *)FUN_01b47fd0(*(undefined8 *)
                                      Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                     ,4);
      if ((int)unaff_w28 < 0x10000) {
        in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,unaff_w28);
        lVar18 = thunk_FUN_01afa70c(*(undefined8 *)
                                     Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                    ,&stack0x000000e0);
        if (plVar13 == (long *)0x0) goto LAB_036bea38;
        if ((lVar18 != 0) &&
           (lVar21 = thunk_FUN_01afa9e0(lVar18,*(undefined8 *)(*plVar13 + 0x40)), lVar21 == 0))
        goto LAB_036beacc;
        if ((int)plVar13[3] == 0) goto LAB_036beac8;
        plVar13[4] = lVar18;
        thunk_FUN_01b4f09c(plVar13 + 4,lVar18);
        if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_036bea38;
        lVar18 = FUN_039230bc(*(long *)(unaff_x19 + 0xf8),0);
        if ((lVar18 != 0) &&
           (lVar21 = thunk_FUN_01afa9e0(lVar18,*(undefined8 *)(*plVar13 + 0x40)), lVar21 == 0))
        goto LAB_036beacc;
        if (*(uint *)(plVar13 + 3) < 2) goto LAB_036beac8;
        plVar13[5] = lVar18;
        thunk_FUN_01b4f09c(plVar13 + 5,lVar18);
        if (lVar12 == 0) goto LAB_036bea38;
        in_stack_00000170 = *(undefined4 *)(lVar12 + 0x14);
        lVar18 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&stack0x00000170);
        if ((lVar18 != 0) &&
           (lVar21 = thunk_FUN_01afa9e0(lVar18,*(undefined8 *)(*plVar13 + 0x40)), lVar21 == 0))
        goto LAB_036beacc;
        if (*(uint *)(plVar13 + 3) < 3) goto LAB_036beac8;
        plVar13[6] = lVar18;
        thunk_FUN_01b4f09c(plVar13 + 6,lVar18);
        lVar18 = FUN_039230bc();
        if ((lVar18 != 0) &&
           (lVar21 = thunk_FUN_01afa9e0(lVar18,*(undefined8 *)(*plVar13 + 0x40)), lVar21 == 0))
        goto LAB_036beacc;
        if (*(uint *)(plVar13 + 3) < 4) goto LAB_036beac8;
        plVar13[7] = lVar18;
        thunk_FUN_01b4f09c(plVar13 + 7,lVar18);
        puVar16 = (undefined8 *)PTR_DAT_03d9cb50;
      }
      else {
        in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,unaff_w28);
        lVar18 = thunk_FUN_01afa70c(*(undefined8 *)
                                     Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                    ,&stack0x000000e0);
        if (plVar13 == (long *)0x0) goto LAB_036bea38;
        if ((lVar18 != 0) &&
           (lVar21 = thunk_FUN_01afa9e0(lVar18,*(undefined8 *)(*plVar13 + 0x40)), lVar21 == 0))
        goto LAB_036beacc;
        if ((int)plVar13[3] == 0) goto LAB_036beac8;
        plVar13[4] = lVar18;
        thunk_FUN_01b4f09c(plVar13 + 4,lVar18);
        if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_036bea38;
        lVar18 = FUN_039230bc(*(long *)(unaff_x19 + 0xf8),0);
        if ((lVar18 != 0) &&
           (lVar21 = thunk_FUN_01afa9e0(lVar18,*(undefined8 *)(*plVar13 + 0x40)), lVar21 == 0))
        goto LAB_036beacc;
        if (*(uint *)(plVar13 + 3) < 2) goto LAB_036beac8;
        plVar13[5] = lVar18;
        thunk_FUN_01b4f09c(plVar13 + 5,lVar18);
        if (lVar12 == 0) goto LAB_036bea38;
        in_stack_00000170 = *(undefined4 *)(lVar12 + 0x14);
        lVar18 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&stack0x00000170);
        if ((lVar18 != 0) &&
           (lVar21 = thunk_FUN_01afa9e0(lVar18,*(undefined8 *)(*plVar13 + 0x40)), lVar21 == 0))
        goto LAB_036beacc;
        if (*(uint *)(plVar13 + 3) < 3) goto LAB_036beac8;
        plVar13[6] = lVar18;
        thunk_FUN_01b4f09c(plVar13 + 6,lVar18);
        lVar18 = FUN_039230bc();
        if ((lVar18 != 0) &&
           (lVar21 = thunk_FUN_01afa9e0(lVar18,*(undefined8 *)(*plVar13 + 0x40)), lVar21 == 0))
        goto LAB_036beacc;
        if (*(uint *)(plVar13 + 3) < 4) goto LAB_036beac8;
        plVar13[7] = lVar18;
        thunk_FUN_01b4f09c(plVar13 + 7,lVar18);
        puVar16 = (undefined8 *)PTR_DAT_03d9cb48;
      }
      uVar24 = FUN_02ee71a8(*puVar16,plVar13,0);
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_038f3474(uVar24);
      unaff_x25 = in_stack_00000038;
      unaff_w28 = uVar7;
    }
    else {
      unaff_x25 = in_stack_00000038;
      unaff_w28 = uVar7;
      if (lVar12 == 0) goto LAB_036bea38;
    }
  }
  if (*(char *)(lVar12 + 0x10) == '\x01') {
    if (*(long *)(lVar12 + 0x18) == 0) goto LAB_036bea38;
    iVar8 = FUN_036c1bb4(*(long *)(lVar12 + 0x18),0);
    if (*unaff_x21 == 0) goto LAB_036bea38;
    iVar9 = FUN_036c1bb4(*unaff_x21,0);
    if (iVar8 == iVar9) goto LAB_036bda7c;
    plVar13 = *(long **)(lVar12 + 0x18);
    if (plVar13 == (long *)0x0) {
      plVar13 = (long *)0x0;
      *unaff_x21 = 0;
    }
    else {
      lVar18 = *(long *)StringLiteral_444;
      bVar3 = *(byte *)(lVar18 + 0x130);
      if (*(byte *)(*plVar13 + 0x130) < bVar3) {
        plVar25 = (long *)0x0;
      }
      else {
        plVar25 = plVar13;
        if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar3 * 8 + -8) != lVar18) {
          plVar25 = (long *)0x0;
        }
      }
      *unaff_x21 = (long)plVar25;
      if (*(byte *)(*plVar13 + 0x130) < bVar3) {
        plVar13 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar3 * 8 + -8) != lVar18) {
        plVar13 = (long *)0x0;
      }
    }
    thunk_FUN_01b4f09c(unaff_x21,plVar13);
    bVar4 = true;
  }
  else {
LAB_036bda7c:
    bVar4 = false;
  }
  if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x38), lVar18 == 0)) goto LAB_036bea38;
  if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar18 + 0x18)) {
    lVar18 = lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
    plVar13 = (long *)(lVar18 + 0x30);
    *plVar13 = lVar12;
    *(undefined4 *)(lVar18 + 0x2c) = 0;
    thunk_FUN_01b4f09c(plVar13,lVar12);
    if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x38), lVar18 == 0))
    goto LAB_036bea38;
    uVar7 = *(uint *)(unaff_x19 + 0x490);
    if (*(uint *)(lVar18 + 0x18) <= uVar7) goto LAB_036beac8;
    lVar21 = lVar18 + (long)(int)uVar7 * 0x178;
    *(short *)(lVar21 + 0x20) = (short)unaff_w28;
    *(undefined1 *)(lVar21 + 0x5c) = uStack00000000000001bc;
    if (*(uint *)(unaff_x25 + 0x18) <= unaff_w22) goto LAB_036beac8;
    lVar18 = lVar18 + (long)(int)uVar7 * 0x178;
    *(undefined8 *)(lVar18 + 0x24) = *(undefined8 *)(unaff_x25 + unaff_x24 * 0xc + 0x24);
    *(long *)(lVar18 + 0x38) = *unaff_x21;
    thunk_FUN_01b4f09c();
    plVar13 = (long *)PTR_DAT_03d9c920;
    if (*(char *)(lVar12 + 0x10) == '\x02') {
      plVar25 = *(long **)(lVar12 + 0x18);
      if (plVar25 == (long *)0x0) goto LAB_036bea38;
      bVar3 = *(byte *)(*(long *)PTR_DAT_03d9cb28 + 0x130);
      if ((*(byte *)(*plVar25 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(*plVar25 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_03d9cb28)
         ) goto LAB_036bea38;
      lVar21 = plVar25[4];
      lVar18 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar18 = *plVar13;
      }
      uVar7 = FUN_036b0d60(lVar21,plVar25,*(long *)(lVar18 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8));
      *(uint *)(unaff_x19 + 0x120) = uVar7;
      lVar18 = **(long **)(*plVar13 + 0xb8);
      if (lVar18 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar18 + 0x18) <= uVar7) goto LAB_036beac8;
      lVar18 = lVar18 + (long)(int)uVar7 * 0x38;
      *(int *)(lVar18 + 0x54) = *(int *)(lVar18 + 0x54) + 1;
      if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x38), lVar18 == 0))
      goto LAB_036bea38;
      if (*(uint *)(lVar18 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036beac8;
      lVar18 = lVar18 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
      *(undefined4 *)(lVar18 + 0x2c) = 1;
      uVar10 = *(undefined4 *)(unaff_x19 + 0x120);
      *(undefined8 *)(lVar18 + 0x40) = plVar25;
      *(undefined4 *)(lVar18 + 0x58) = uVar10;
      thunk_FUN_01b4f09c((undefined8 *)(lVar18 + 0x40),plVar25);
      plVar13 = (long *)PTR_DAT_03d9c920;
      if ((*(long *)(unaff_x19 + 0x368) == 0) ||
         (lVar18 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar18 == 0)) goto LAB_036bea38;
      uVar7 = *(uint *)(unaff_x19 + 0x490);
      if (*(uint *)(lVar18 + 0x18) <= uVar7) goto LAB_036beac8;
      *(undefined4 *)(lVar18 + (long)(int)uVar7 * 0x178 + 0x48) = *(undefined4 *)(lVar12 + 0x28);
      *(undefined4 *)(unaff_x19 + 0x644) = 0;
      *(undefined4 *)(unaff_x19 + 0x120) = uStack0000000000000034;
      in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
      unaff_x25 = in_stack_00000038;
      plVar25 = (long *)PTR_DAT_03d9c8a0;
    }
    else {
      if (bVar4) {
        if (*unaff_x21 == 0) goto LAB_036bea38;
        iVar8 = FUN_036c1bb4(*unaff_x21,0);
        if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_036bea38;
        iVar9 = FUN_036c1bb4(*(long *)(unaff_x19 + 0xf8),0);
        if (iVar8 != iVar9) {
          uVar11 = FUN_036fba20(0);
          if ((uVar11 & 1) == 0) {
            if (*unaff_x21 == 0) goto LAB_036bea38;
            uVar24 = *(undefined8 *)(*unaff_x21 + 0x20);
          }
          else {
            if (*unaff_x21 == 0) goto LAB_036bea38;
            uVar24 = *in_stack_00000028;
            uVar26 = *(undefined8 *)(*unaff_x21 + 0x20);
            if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar24 = FUN_036f7d2c(uVar24,uVar26,0);
          }
          *in_stack_00000028 = uVar24;
          thunk_FUN_01b4f09c(in_stack_00000028);
          lVar18 = *plVar13;
          uVar24 = *in_stack_00000028;
          lVar21 = *unaff_x21;
          if (*(int *)(lVar18 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar18 = *plVar13;
          }
          uVar10 = FUN_036b0b30(uVar24,lVar21,*(long *)(lVar18 + 0xb8),
                                *(undefined8 *)(*(long *)(lVar18 + 0xb8) + 8));
          *(undefined4 *)(unaff_x19 + 0x120) = uVar10;
          unaff_x25 = in_stack_00000038;
        }
      }
      if (*(long *)(lVar12 + 0x20) == 0) goto LAB_036bea38;
      iVar8 = FUN_0396b18c(*(long *)(lVar12 + 0x20),0);
      if (0 < iVar8) {
        if (*(long *)(lVar12 + 0x20) == 0) goto LAB_036bea38;
        lVar18 = *unaff_x21;
        uVar24 = *in_stack_00000028;
        uVar10 = FUN_0396b18c(*(long *)(lVar12 + 0x20),0);
        if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb20);
        }
        uVar24 = FUN_036f77c8(lVar18,uVar24,uVar10,0);
        *in_stack_00000028 = uVar24;
        thunk_FUN_01b4f09c(in_stack_00000028,uVar24);
        lVar12 = *plVar13;
        uVar24 = *in_stack_00000028;
        lVar18 = *unaff_x21;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar12 = *plVar13;
        }
        uVar10 = FUN_036b0b30(uVar24,lVar18,*(long *)(lVar12 + 0xb8),
                              *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
        bVar4 = true;
        *(undefined4 *)(unaff_x19 + 0x120) = uVar10;
        unaff_x25 = in_stack_00000038;
      }
      if (*(int *)(*(long *)
                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar11 = FUN_02fdb080(unaff_w28,0);
      plVar25 = (long *)PTR_DAT_03d9c8a0;
      if ((unaff_w28 != 0x200b) && ((uVar11 & 1) == 0)) {
        lVar12 = *plVar13;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar12);
          lVar12 = *plVar13;
        }
        lVar18 = **(long **)(lVar12 + 0xb8);
        if (lVar18 == 0) goto LAB_036bea38;
        uVar7 = *(uint *)(unaff_x19 + 0x120);
        if (*(uint *)(lVar18 + 0x18) <= uVar7) goto LAB_036beac8;
        if (*(int *)(lVar18 + (long)(int)uVar7 * 0x38 + 0x54) < 0x3fff) {
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01ac7298(lVar12);
            lVar18 = **(long **)(*plVar13 + 0xb8);
            if (lVar18 == 0) goto LAB_036bea38;
            uVar7 = *(uint *)(unaff_x19 + 0x120);
          }
        }
        else {
          uVar26 = *in_stack_00000028;
          uVar24 = thunk_FUN_01afaadc(*(undefined8 *)
                                       Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                                     );
          FUN_038ff0a8(uVar24,uVar26,0);
          lVar12 = *plVar13;
          lVar18 = *unaff_x21;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar12 = *plVar13;
          }
          uVar7 = FUN_036b0b30(uVar24,lVar18,*(long *)(lVar12 + 0xb8),
                               *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
          *(uint *)(unaff_x19 + 0x120) = uVar7;
          lVar18 = **(long **)(*plVar13 + 0xb8);
          if (lVar18 == 0) goto LAB_036bea38;
        }
        if (*(uint *)(lVar18 + 0x18) <= uVar7) goto LAB_036beac8;
        lVar18 = lVar18 + (long)(int)uVar7 * 0x38;
        *(int *)(lVar18 + 0x54) = *(int *)(lVar18 + 0x54) + 1;
      }
      if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
      goto LAB_036bea38;
      if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036beac8;
      *(undefined8 *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x50) =
           *in_stack_00000028;
      thunk_FUN_01b4f09c();
      if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
      goto LAB_036bea38;
      if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036beac8;
      uVar7 = *(uint *)(unaff_x19 + 0x120);
      *(uint *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x58) = uVar7;
      lVar12 = *plVar13;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar12 = *plVar13;
        uVar7 = *(uint *)(unaff_x19 + 0x120);
      }
      lVar18 = **(long **)(lVar12 + 0xb8);
      if (lVar18 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar18 + 0x18) <= uVar7) goto LAB_036beac8;
      *(bool *)(lVar18 + (long)(int)uVar7 * 0x38 + 0x41) = bVar4;
      if (bVar4) {
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar18 = **(long **)(*plVar13 + 0xb8);
          if (lVar18 == 0) goto LAB_036bea38;
          uVar7 = *(uint *)(unaff_x19 + 0x120);
        }
        uVar24 = uStack0000000000000018;
        if (*(uint *)(lVar18 + 0x18) <= uVar7) goto LAB_036beac8;
        puVar16 = (undefined8 *)(lVar18 + (long)(int)uVar7 * 0x38 + 0x48);
        *puVar16 = uStack0000000000000018;
        thunk_FUN_01b4f09c(puVar16,uStack0000000000000018);
        *(undefined8 *)(unaff_x19 + 0x100) = uStack0000000000000010;
        thunk_FUN_01b4f09c(unaff_x21);
        *(undefined8 *)(unaff_x19 + 0x118) = uVar24;
        thunk_FUN_01b4f09c(in_stack_00000028,uVar24);
        *(undefined4 *)(unaff_x19 + 0x120) = uStack0000000000000034;
      }
      uVar7 = *(uint *)(unaff_x19 + 0x490);
    }
    do {
      *(uint *)(unaff_x19 + 0x490) = uVar7 + 1;
      do {
        uVar17 = *(uint *)(unaff_x25 + 0x18);
        uVar7 = unaff_w22 + 1;
        if ((int)uVar17 <= (int)uVar7) {
LAB_036be10c:
          if (*(char *)(unaff_x19 + 0x3f5) != '\0') {
            *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
            goto LAB_036be118;
          }
          lVar12 = *unaff_x20;
          if (lVar12 == 0) goto LAB_036bea38;
          *(int *)(lVar12 + 0x1c) = in_stack_00000020._4_4_;
          lVar18 = *plVar13;
          if (*(int *)(lVar18 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar18 = *plVar13;
          }
          lVar18 = *(long *)(*(long *)(lVar18 + 0xb8) + 8);
          if (lVar18 == 0) goto LAB_036bea38;
          uVar7 = FUN_02554fc4(lVar18,*(undefined8 *)PTR_DAT_03d9b168);
          *(uint *)(lVar12 + 0x34) = uVar7;
          if (*unaff_x20 == 0) goto LAB_036bea38;
          plVar22 = (long *)(*unaff_x20 + 0x60);
          lVar12 = *plVar22;
          if (lVar12 == 0) goto LAB_036bea38;
          uVar11 = (ulong)uVar7;
          if (*(int *)(lVar12 + 0x18) < (int)uVar7) {
            if (*(int *)(*plVar25 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_01f52de4(plVar22,uVar11,0,*(undefined8 *)PTR_DAT_03d9cb38);
          }
          if (*(long *)(unaff_x19 + 0x708) == 0) goto LAB_036bea38;
          plVar22 = (long *)(unaff_x19 + 0x708);
          if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar7) {
            uVar10 = FUN_039155e8(uVar7 + 1,0);
            if (*(int *)(*plVar25 + 0xe0) == 0) {
              thunk_FUN_01ac7298(*plVar25);
            }
            FUN_01f52b30(plVar22,uVar10,*(undefined8 *)PTR_DAT_03d9cc70);
          }
          if (*(char *)(unaff_x19 + 0x321) != '\0') {
            if (*unaff_x20 == 0) goto LAB_036bea38;
            plVar23 = (long *)(*unaff_x20 + 0x38);
            lVar12 = *plVar23;
            if (lVar12 == 0) goto LAB_036bea38;
            iVar8 = *(int *)(unaff_x19 + 0x490);
            if (0x100 < *(int *)(lVar12 + 0x18) - iVar8) {
              iVar9 = 0x100;
              if (0x100 < iVar8 + 1) {
                iVar9 = iVar8 + 1;
              }
              if (*(int *)(*plVar25 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              FUN_01f52d44(plVar23,iVar9,1,*(undefined8 *)PTR_DAT_03d9cb30);
              plVar13 = (long *)PTR_DAT_03d9c920;
            }
          }
          fVar5 = DAT_00b55084;
          if ((int)uVar7 < 1) goto LAB_036be988;
          lVar12 = 0;
          uVar27 = 0;
          lVar18 = 0x54;
          lVar21 = 0x20;
          goto LAB_036be2bc;
        }
        if (uVar17 <= uVar7) goto LAB_036beac8;
        unaff_x29 = (uint *)(unaff_x25 + (long)(int)uVar7 * 0xc + 0x20);
        if (*unaff_x29 == 0) goto LAB_036be10c;
        if (*unaff_x20 == 0) goto LAB_036bea38;
        plVar13 = (long *)(*unaff_x20 + 0x38);
        lVar12 = *plVar13;
        iVar8 = *(int *)(unaff_x19 + 0x490);
        if ((lVar12 == 0) || (*(int *)(lVar12 + 0x18) <= iVar8)) {
          if (*(int *)(*plVar25 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_01f52d44(plVar13,iVar8 + 1,1,*(undefined8 *)PTR_DAT_03d9cb30);
          uVar17 = *(uint *)(unaff_x25 + 0x18);
        }
        if (uVar17 <= uVar7) goto LAB_036beac8;
        unaff_w28 = *unaff_x29;
        unaff_x24 = (long)(int)uVar7;
        if ((unaff_w28 != 0x3c) || (*(char *)(unaff_x19 + 0x302) == '\0')) {
LAB_036bd3dc:
          uStack00000000000001bc = 0;
          unaff_w22 = uVar7;
          goto code_r0x036bd3e0;
        }
        uVar10 = *(undefined4 *)(unaff_x19 + 0x120);
        uVar11 = FUN_036e7318();
        unaff_w22 = uStack00000000000001b8;
        if ((uVar11 & 1) == 0) goto LAB_036bd3dc;
        if (*(uint *)(unaff_x25 + 0x18) <= uVar7) goto LAB_036beac8;
        iVar8 = *(int *)(unaff_x25 + unaff_x24 * 0xc + 0x24);
        if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
          *(undefined1 *)(unaff_x19 + 0x26a) = 1;
        }
        puVar6 = PTR_DAT_03d9c920;
        plVar13 = (long *)PTR_DAT_03d9c920;
      } while (*(int *)(unaff_x19 + 0x644) != 1);
      lVar12 = *(long *)PTR_DAT_03d9c920;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar12 = *(long *)puVar6;
      }
      lVar12 = **(long **)(lVar12 + 0xb8);
      if (lVar12 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) break;
      lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
      *(int *)(lVar12 + 0x54) = *(int *)(lVar12 + 0x54) + 1;
      if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
      goto LAB_036bea38;
      if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
      uVar2 = *(undefined4 *)(unaff_x19 + 0x6a4);
      lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
      *(short *)(lVar12 + 0x20) = (short)uVar2 + -0x2000;
      *(undefined4 *)(lVar12 + 0x48) = uVar2;
      *(long *)(lVar12 + 0x38) = *unaff_x21;
      thunk_FUN_01b4f09c();
      if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
      goto LAB_036bea38;
      if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
      *(undefined8 *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x40) =
           *(undefined8 *)(unaff_x19 + 0x698);
      thunk_FUN_01b4f09c();
      if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
      goto LAB_036bea38;
      uVar7 = *(uint *)(unaff_x19 + 0x490);
      if (*(uint *)(lVar12 + 0x18) <= uVar7) break;
      *(undefined4 *)(lVar12 + (long)(int)uVar7 * 0x178 + 0x58) = *(undefined4 *)(unaff_x19 + 0x120)
      ;
      if ((*(long *)(unaff_x19 + 0x698) == 0) ||
         (lVar18 = FUN_036fe7c0(*(long *)(unaff_x19 + 0x698),0), lVar18 == 0)) goto LAB_036bea38;
      uVar24 = FUN_02b59714(lVar18,*(undefined4 *)(unaff_x19 + 0x6a4),
                            *(undefined8 *)PTR_DAT_03d9c878);
      if (*(uint *)(lVar12 + 0x18) <= uVar7) break;
      *(undefined8 *)(lVar12 + (long)(int)uVar7 * 0x178 + 0x30) = uVar24;
      thunk_FUN_01b4f09c();
      if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
      goto LAB_036bea38;
      uVar7 = *(uint *)(unaff_x19 + 0x490);
      if (*(uint *)(lVar12 + 0x18) <= uVar7) break;
      uVar2 = *(undefined4 *)(unaff_x19 + 0x644);
      lVar18 = lVar12 + (long)(int)uVar7 * 0x178;
      *(int *)(lVar18 + 0x24) = iVar8;
      *(undefined4 *)(lVar18 + 0x2c) = uVar2;
      if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) break;
      *(int *)(lVar12 + (long)(int)uVar7 * 0x178 + 0x28) =
           (*(int *)(in_stack_00000038 + (long)(int)unaff_w22 * 0xc + 0x24) - iVar8) + 1;
      *(undefined4 *)(unaff_x19 + 0x644) = 0;
      *(undefined4 *)(unaff_x19 + 0x120) = uVar10;
      in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
      plVar13 = (long *)PTR_DAT_03d9c920;
      unaff_x25 = in_stack_00000038;
    } while( true );
  }
  goto LAB_036beac8;
LAB_036be2bc:
  do {
    fVar31 = (float)param_2;
    if (uVar27 != 0) {
      lVar19 = *plVar22;
      if (lVar19 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_036beac8;
      uVar24 = *(undefined8 *)(lVar19 + uVar27 * 8 + 0x20);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar14 = FUN_03922f24(uVar24,0,0);
      if ((uVar14 & 1) != 0) {
        lVar19 = *plVar13;
        plVar25 = (long *)*plVar22;
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar19 = *plVar13;
        }
        lVar19 = **(long **)(lVar19 + 0xb8);
        if (lVar19 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_036beac8;
        lVar19 = lVar19 + lVar18;
        in_stack_00000160 = *(undefined8 *)(lVar19 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar19 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar19 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar19 + -0x1c);
        uVar24 = *(undefined8 *)(lVar19 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar19 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar19 + -0x34);
        in_stack_00000140 = uVar24;
        lVar19 = FUN_03702d14();
        fVar31 = (float)uVar24;
        if (plVar25 == (long *)0x0) goto LAB_036bea38;
        if ((lVar19 != 0) &&
           (lVar15 = thunk_FUN_01afa9e0(lVar19,*(undefined8 *)(*plVar25 + 0x40)), lVar15 == 0)) {
LAB_036beacc:
          uVar24 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
          FUN_01b48050(uVar24,0);
        }
        if (*(uint *)(plVar25 + 3) <= uVar27) goto LAB_036beac8;
        plVar25[uVar27 + 4] = lVar19;
        thunk_FUN_01b4f09c((long)plVar25 + lVar21,lVar19);
        plVar13 = (long *)PTR_DAT_03d9c920;
        if ((*unaff_x20 == 0) || (lVar19 = *(long *)(*unaff_x20 + 0x60), lVar19 == 0))
        goto LAB_036bea38;
        if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_036beac8;
        puVar16 = (undefined8 *)(lVar19 + lVar12 + 0x30);
        *puVar16 = 0;
        thunk_FUN_01b4f09c(puVar16,0);
      }
      if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_036bea38;
      fVar28 = (float)FUN_03928134(*(long *)(unaff_x19 + 0x380),0);
      lVar19 = *plVar22;
      if (lVar19 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_036beac8;
      lVar19 = *(long *)(lVar19 + uVar27 * 8 + 0x20);
      if ((lVar19 == 0) || (fVar30 = fVar31, lVar19 = FUN_039ad440(lVar19,0), lVar19 == 0))
      goto LAB_036bea38;
      fVar29 = (float)FUN_03928134(lVar19,0);
      fVar31 = (fVar31 - fVar30) * (fVar31 - fVar30);
      param_2 = (ulong)(uint)fVar31;
      if (fVar5 <= (fVar28 - fVar29) * (fVar28 - fVar29) + fVar31) {
        lVar19 = *plVar22;
        if (lVar19 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_036beac8;
        lVar19 = *(long *)(lVar19 + uVar27 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_036bea38;
        lVar19 = FUN_039ad440(lVar19,0);
        if ((*(long *)(unaff_x19 + 0x380) == 0) ||
           (FUN_03928134(*(long *)(unaff_x19 + 0x380),0), lVar19 == 0)) goto LAB_036bea38;
        FUN_039281c4(lVar19,0);
      }
      lVar19 = *plVar22;
      if (lVar19 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_036beac8;
      lVar19 = *(long *)(lVar19 + uVar27 * 8 + 0x20);
      if (lVar19 == 0) goto LAB_036bea38;
      uVar24 = *(undefined8 *)(lVar19 + 0xf0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar14 = FUN_03922f24(uVar24,0,0);
      if ((uVar14 & 1) == 0) {
        lVar19 = *plVar22;
        if (lVar19 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_036beac8;
        lVar19 = *(long *)(lVar19 + uVar27 * 8 + 0x20);
        if ((lVar19 == 0) || (lVar19 = *(long *)(lVar19 + 0xf0), lVar19 == 0)) goto LAB_036bea38;
        iVar8 = FUN_03922ce0(lVar19,0);
        lVar19 = *plVar13;
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar19);
          lVar19 = *plVar13;
        }
        lVar19 = **(long **)(lVar19 + 0xb8);
        if (lVar19 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_036beac8;
        lVar19 = *(long *)(lVar19 + lVar18 + -0x1c);
        if (lVar19 == 0) goto LAB_036bea38;
        iVar9 = FUN_03922ce0(lVar19,0);
        if (iVar8 != iVar9) goto LAB_036be568;
      }
      else {
LAB_036be568:
        lVar19 = *plVar22;
        if (lVar19 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_036beac8;
        lVar15 = *plVar13;
        lVar19 = *(long *)(lVar19 + uVar27 * 8 + 0x20);
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar15 = *plVar13;
        }
        lVar15 = **(long **)(lVar15 + 0xb8);
        if (lVar15 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_036beac8;
        if (lVar19 == 0) goto LAB_036bea38;
        thunk_FUN_03702968(lVar19,*(undefined8 *)(lVar15 + lVar18 + -0x1c),0);
        lVar19 = *plVar22;
        if (lVar19 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_036beac8;
        lVar15 = **(long **)(*plVar13 + 0xb8);
        if (lVar15 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_036beac8;
        lVar19 = *(long *)(lVar19 + uVar27 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_036bea38;
        *(undefined8 *)(lVar19 + 0xd8) = *(undefined8 *)(lVar15 + lVar18 + -0x2c);
        thunk_FUN_01b4f09c();
        lVar19 = *plVar22;
        if (lVar19 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_036beac8;
        lVar15 = **(long **)(*plVar13 + 0xb8);
        if (lVar15 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_036beac8;
        lVar19 = *(long *)(lVar19 + uVar27 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_036bea38;
        *(undefined8 *)(lVar19 + 0xe0) = *(undefined8 *)(lVar15 + lVar18 + -0x24);
        thunk_FUN_01b4f09c();
      }
      lVar19 = *plVar13;
      if (*(int *)(lVar19 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar19 = *plVar13;
      }
      lVar15 = **(long **)(lVar19 + 0xb8);
      if (lVar15 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_036beac8;
      if (*(char *)(lVar15 + lVar18 + -0x13) != '\0') {
        lVar20 = *plVar22;
        if (lVar20 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_036beac8;
        lVar20 = *(long *)(lVar20 + uVar27 * 8 + 0x20);
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar15 = **(long **)(*plVar13 + 0xb8);
          if (lVar15 == 0) goto LAB_036bea38;
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_036beac8;
        if (lVar20 == 0) goto LAB_036bea38;
        FUN_037029c4(lVar20,*(undefined8 *)(lVar15 + lVar18 + -0x1c),0);
        lVar19 = *plVar22;
        if (lVar19 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_036beac8;
        lVar15 = **(long **)(*plVar13 + 0xb8);
        if (lVar15 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_036beac8;
        lVar19 = *(long *)(lVar19 + uVar27 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_036bea38;
        *(undefined8 *)(lVar19 + 0x100) = *(undefined8 *)(lVar15 + lVar18 + -0xc);
        thunk_FUN_01b4f09c(lVar19 + 0x100);
      }
    }
    lVar19 = *plVar13;
    if (*(int *)(lVar19 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar19 = *plVar13;
    }
    lVar19 = **(long **)(lVar19 + 0xb8);
    if (lVar19 == 0) goto LAB_036bea38;
    if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_036beac8;
    if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x60), lVar15 == 0))
    goto LAB_036bea38;
    if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_036beac8;
    lVar20 = *(long *)(lVar15 + lVar12 + 0x30);
    iVar8 = *(int *)(lVar19 + lVar18);
    if (lVar20 == 0) {
      if (uVar27 == 0) {
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
        FUN_036f884c(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar8 + 1,0);
        memcpy(&stack0x00000090,&stack0x000000e0,0x50);
        if (*(int *)(lVar15 + 0x18) == 0) goto LAB_036beac8;
        memcpy((void *)(lVar15 + lVar12 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar15 + 0x20);
      }
      else {
        lVar19 = *plVar22;
        if (lVar19 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar19 + 0x18) <= uVar27) goto LAB_036beac8;
        lVar19 = *(long *)(lVar19 + uVar27 * 8 + 0x20);
        if (lVar19 == 0) goto LAB_036bea38;
        uVar24 = FUN_03702ba4(lVar19,0);
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
        FUN_036f884c(&stack0x000000e0,uVar24,iVar8 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar15 + 0x18) <= uVar27) goto LAB_036beac8;
        __dest = (void *)(lVar15 + lVar12 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      thunk_FUN_01b4f09c(__dest,0);
    }
    else {
      iVar9 = *(int *)(lVar20 + 0x18);
      if (iVar9 < iVar8 * 4) {
LAB_036be7d8:
        if (iVar8 < 0x401) {
          iVar8 = FUN_039155e8(iVar8 + 1,0);
        }
        else {
          iVar8 = iVar8 + 0x100;
        }
        if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__ +
                    0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_036f961c(lVar15 + lVar12 + 0x20,iVar8,0);
      }
      else if ((0 < iVar8) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
        iVar1 = iVar9 + 3;
        if (-1 < iVar9) {
          iVar1 = iVar9;
        }
        if (0x100 < (iVar1 >> 2) - iVar8) goto LAB_036be7d8;
      }
    }
    plVar13 = (long *)PTR_DAT_03d9c920;
    if ((*unaff_x20 == 0) || (lVar19 = *(long *)(*unaff_x20 + 0x60), lVar19 == 0))
    goto LAB_036bea38;
    lVar15 = *(long *)PTR_DAT_03d9c920;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar15 = *plVar13;
    }
    lVar15 = **(long **)(lVar15 + 0xb8);
    if (lVar15 == 0) goto LAB_036bea38;
    if ((*(uint *)(lVar15 + 0x18) <= uVar27) || (*(uint *)(lVar19 + 0x18) <= uVar27))
    goto LAB_036beac8;
    *(undefined8 *)(lVar19 + lVar12 + 0x68) = *(undefined8 *)(lVar15 + lVar18 + -0x1c);
    thunk_FUN_01b4f09c();
    uVar27 = uVar27 + 1;
    lVar12 = lVar12 + 0x50;
    lVar18 = lVar18 + 0x38;
    lVar21 = lVar21 + 8;
  } while (uVar7 != uVar27);
LAB_036be988:
  lVar12 = *plVar22;
  if (lVar12 != 0) {
    lVar18 = (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3) + 0x20;
    do {
      uVar7 = (uint)uVar11;
      if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar7) {
LAB_036be118:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar12 + 0x18) <= uVar7) {
LAB_036beac8:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar24 = *(undefined8 *)(lVar12 + lVar18);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar11 = FUN_0391f968(uVar24,0,0);
      if ((uVar11 & 1) == 0) goto LAB_036be118;
      if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x60), lVar12 == 0)) break;
      if ((int)uVar7 < *(int *)(lVar12 + 0x18)) {
        lVar12 = *plVar22;
        if (lVar12 == 0) break;
        if (*(uint *)(lVar12 + 0x18) <= uVar7) goto LAB_036beac8;
        if ((*(long *)(lVar12 + lVar18) == 0) ||
           (lVar12 = FUN_039add2c(*(long *)(lVar12 + lVar18),0), lVar12 == 0)) break;
        FUN_03af8c9c(lVar12,0,0);
      }
      lVar12 = *plVar22;
      uVar11 = (ulong)(uVar7 + 1);
      lVar18 = lVar18 + 8;
    } while (lVar12 != 0);
  }
LAB_036bea38:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


