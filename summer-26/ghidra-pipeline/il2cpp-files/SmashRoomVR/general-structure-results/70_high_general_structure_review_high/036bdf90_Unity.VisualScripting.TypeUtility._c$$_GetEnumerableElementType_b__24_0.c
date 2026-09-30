/*
FUNCTION_NAME: Unity.VisualScripting.TypeUtility.<>c$$<GetEnumerableElementType>b__24_0
ENTRY_POINT: 036bdf90
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
Unity_VisualScripting_TypeUtility_<>c__<GetEnumerableElementType>b__24_0
          (long param_1,undefined1 param_2 [16],ulong param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  float fVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  void *__dest;
  long lVar14;
  long lVar15;
  long in_x9;
  long lVar16;
  long lVar17;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar18;
  uint unaff_w22;
  long *plVar19;
  long *plVar20;
  undefined8 uVar21;
  long *unaff_x24;
  undefined8 uVar22;
  long unaff_x25;
  ulong uVar23;
  long *unaff_x27;
  int unaff_w28;
  uint *puVar24;
  long *unaff_x29;
  long lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 in_stack_00000030;
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
  
code_r0x036bdf90:
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01ac7298(param_1);
    in_x9 = **(long **)(*unaff_x24 + 0xb8);
    if (in_x9 == 0) goto LAB_036bea38;
    param_4 = *(uint *)(unaff_x19 + 0x120);
  }
LAB_036bdfb4:
  if (param_4 < *(uint *)(in_x9 + 0x18)) {
    lVar14 = in_x9 + (long)(int)param_4 * 0x38;
    *(int *)(lVar14 + 0x54) = *(int *)(lVar14 + 0x54) + 1;
LAB_036bdfd4:
    if ((*unaff_x20 != 0) && (lVar14 = *(long *)(*unaff_x20 + 0x38), lVar14 != 0)) {
      if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar14 + 0x18)) {
        *(undefined8 *)(lVar14 + (int)*(uint *)(unaff_x19 + 0x490) * unaff_x21 + 0x50) =
             *in_stack_00000028;
        thunk_FUN_01b4f09c();
        if ((*unaff_x20 != 0) && (lVar14 = *(long *)(*unaff_x20 + 0x38), lVar14 != 0)) {
          if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar14 + 0x18)) {
            uVar7 = *(uint *)(unaff_x19 + 0x120);
            *(uint *)(lVar14 + (int)*(uint *)(unaff_x19 + 0x490) * unaff_x21 + 0x58) = uVar7;
            lVar14 = *unaff_x24;
            if (*(int *)(lVar14 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar14 = *unaff_x24;
              uVar7 = *(uint *)(unaff_x19 + 0x120);
            }
            lVar16 = **(long **)(lVar14 + 0xb8);
            if (lVar16 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_036beac8;
            *(char *)(lVar16 + (long)(int)uVar7 * 0x38 + 0x41) = (char)unaff_w28;
            if (unaff_w28 != 0) {
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar16 = **(long **)(*unaff_x24 + 0xb8);
                if (lVar16 == 0) goto LAB_036bea38;
                uVar7 = *(uint *)(unaff_x19 + 0x120);
              }
              if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_036beac8;
              puVar11 = (undefined8 *)(lVar16 + (long)(int)uVar7 * 0x38 + 0x48);
              *puVar11 = in_stack_00000018;
              thunk_FUN_01b4f09c(puVar11,in_stack_00000018);
              *(undefined8 *)(unaff_x19 + 0x100) = in_stack_00000010;
              thunk_FUN_01b4f09c(unaff_x29);
              *(undefined8 *)(unaff_x19 + 0x118) = in_stack_00000018;
              thunk_FUN_01b4f09c(in_stack_00000028,in_stack_00000018);
              *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
            }
            uVar7 = *(uint *)(unaff_x19 + 0x490);
LAB_036be0ec:
            do {
              *(uint *)(unaff_x19 + 0x490) = uVar7 + 1;
              do {
                uVar7 = *(uint *)(unaff_x25 + 0x18);
                unaff_w22 = unaff_w22 + 1;
                if ((int)uVar7 <= (int)unaff_w22) {
LAB_036be10c:
                  if (*(char *)(unaff_x19 + 0x3f5) != '\0') {
                    *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
                    goto LAB_036be118;
                  }
                  lVar14 = *unaff_x20;
                  if (lVar14 == 0) goto LAB_036bea38;
                  *(int *)(lVar14 + 0x1c) = in_stack_00000020._4_4_;
                  lVar16 = *unaff_x24;
                  if (*(int *)(lVar16 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    lVar16 = *unaff_x24;
                  }
                  lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 8);
                  if (lVar16 == 0) goto LAB_036bea38;
                  uVar7 = FUN_02554fc4(lVar16,*(undefined8 *)PTR_DAT_03d9b168);
                  *(uint *)(lVar14 + 0x34) = uVar7;
                  if (*unaff_x20 == 0) goto LAB_036bea38;
                  plVar19 = (long *)(*unaff_x20 + 0x60);
                  lVar14 = *plVar19;
                  if (lVar14 == 0) goto LAB_036bea38;
                  uVar18 = (ulong)uVar7;
                  if (*(int *)(lVar14 + 0x18) < (int)uVar7) {
                    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    FUN_01f52de4(plVar19,uVar18,0,*(undefined8 *)PTR_DAT_03d9cb38);
                  }
                  if (*(long *)(unaff_x19 + 0x708) == 0) goto LAB_036bea38;
                  plVar19 = (long *)(unaff_x19 + 0x708);
                  if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar7) {
                    uVar8 = FUN_039155e8(uVar7 + 1,0);
                    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                      thunk_FUN_01ac7298(*unaff_x27);
                    }
                    FUN_01f52b30(plVar19,uVar8,*(undefined8 *)PTR_DAT_03d9cc70);
                  }
                  if (*(char *)(unaff_x19 + 0x321) != '\0') {
                    if (*unaff_x20 == 0) goto LAB_036bea38;
                    plVar20 = (long *)(*unaff_x20 + 0x38);
                    lVar14 = *plVar20;
                    if (lVar14 == 0) goto LAB_036bea38;
                    iVar9 = *(int *)(unaff_x19 + 0x490);
                    if (0x100 < *(int *)(lVar14 + 0x18) - iVar9) {
                      iVar10 = 0x100;
                      if (0x100 < iVar9 + 1) {
                        iVar10 = iVar9 + 1;
                      }
                      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      FUN_01f52d44(plVar20,iVar10,1,*(undefined8 *)PTR_DAT_03d9cb30);
                      unaff_x24 = (long *)PTR_DAT_03d9c920;
                    }
                  }
                  fVar4 = DAT_00b55084;
                  if ((int)uVar7 < 1) goto LAB_036be988;
                  lVar14 = 0;
                  uVar23 = 0;
                  lVar16 = 0x54;
                  lVar25 = 0x20;
                  goto LAB_036be2bc;
                }
                if (uVar7 <= unaff_w22) goto LAB_036beac8;
                puVar24 = (uint *)(unaff_x25 + (long)(int)unaff_w22 * 0xc + 0x20);
                if (*puVar24 == 0) goto LAB_036be10c;
                if (*unaff_x20 == 0) goto LAB_036bea38;
                plVar19 = (long *)(*unaff_x20 + 0x38);
                lVar14 = *plVar19;
                iVar9 = *(int *)(unaff_x19 + 0x490);
                if ((lVar14 == 0) || (*(int *)(lVar14 + 0x18) <= iVar9)) {
                  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  FUN_01f52d44(plVar19,iVar9 + 1,1,*(undefined8 *)PTR_DAT_03d9cb30);
                  uVar7 = *(uint *)(unaff_x25 + 0x18);
                }
                if (uVar7 <= unaff_w22) goto LAB_036beac8;
                uVar7 = *puVar24;
                if ((uVar7 != 0x3c) || (*(char *)(unaff_x19 + 0x302) == '\0')) {
LAB_036bd3dc:
                  uStack00000000000001bc = 0;
                  in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x100);
                  in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x118);
                  in_stack_00000030._4_4_ = *(undefined4 *)(unaff_x19 + 0x120);
                  if (*(int *)(unaff_x19 + 0x644) != 0) goto LAB_036bd4b8;
                  uVar6 = *(uint *)(unaff_x19 + 0x25c);
                  if ((uVar6 >> 4 & 1) == 0) {
                    if ((uVar6 >> 3 & 1) == 0) {
                      if ((uVar6 >> 5 & 1) != 0) goto LAB_036bd40c;
                    }
                    else {
                      if (*(int *)(*(long *)
                                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                                  + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uVar18 = FUN_02fdd92c(uVar7,0);
                      if ((uVar18 & 1) != 0) {
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
                    uVar18 = FUN_02fdd9e8(uVar7,0);
                    if ((uVar18 & 1) != 0) {
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
                  lVar14 = FUN_036f260c();
                  if (lVar14 == 0) {
                    iVar9 = FUN_036fb88c();
                    if (*(uint *)(unaff_x25 + 0x18) <= unaff_w22) goto LAB_036beac8;
                    if (iVar9 == 0) {
                      uVar6 = 0x25a1;
                    }
                    else {
                      uVar6 = FUN_036fb88c(0);
                    }
                    *puVar24 = uVar6;
                    uVar21 = *(undefined8 *)(unaff_x19 + 0x100);
                    uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
                    uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                    if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    lVar14 = FUN_036d1ff4(uVar6,uVar21,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
                    if (lVar14 == 0) {
                      lVar14 = FUN_036fba04();
                      if (lVar14 != 0) {
                        lVar14 = FUN_036fba04(0);
                        if (lVar14 == 0) goto LAB_036bea38;
                        if (0 < *(int *)(lVar14 + 0x18)) {
                          uVar22 = *(undefined8 *)(unaff_x19 + 0x100);
                          uVar21 = FUN_036fba04(0);
                          uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
                          uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                          if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                            thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb18);
                          }
                          lVar14 = FUN_036d2514(uVar6,uVar22,uVar21,1,uVar8,uVar2,
                                                (long)&stack0x000001b8 + 4,0);
                          if (lVar14 != 0) goto LAB_036bd568;
                        }
                      }
                      uVar21 = FUN_036fb8e4(0);
                      if (*(int *)(*(long *)
                                    Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                  + 0xe0) == 0) {
                        thunk_FUN_01ac7298(*(long *)
                                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                          );
                      }
                      uVar18 = FUN_0391f968(uVar21,0,0);
                      if ((uVar18 & 1) != 0) {
                        uVar21 = FUN_036fb8e4(0);
                        uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
                        uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                        if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                          thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb18);
                        }
                        lVar14 = FUN_036d1ff4(uVar6,uVar21,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,
                                              0);
                        if (lVar14 != 0) goto LAB_036bd568;
                      }
                      if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) goto LAB_036beac8;
                      *puVar24 = 0x20;
                      uVar21 = *(undefined8 *)(unaff_x19 + 0x100);
                      uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
                      uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                      if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uVar6 = 0x20;
                      lVar14 = FUN_036d1ff4(0x20,uVar21,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
                      if (lVar14 == 0) {
                        if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) goto LAB_036beac8;
                        *puVar24 = 3;
                        uVar21 = *(undefined8 *)(unaff_x19 + 0x100);
                        uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
                        uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                        if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                        }
                        uVar6 = 3;
                        lVar14 = FUN_036d1ff4(3,uVar21,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
                      }
                    }
LAB_036bd568:
                    uVar18 = FUN_036fb8c8(0);
                    if ((uVar18 & 1) == 0) {
                      plVar19 = (long *)FUN_01b47fd0(*(undefined8 *)
                                                                                                            
                                                  Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                                  ,4);
                      if ((int)uVar7 < 0x10000) {
                        in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar7);
                        lVar16 = thunk_FUN_01afa70c(*(undefined8 *)
                                                                                                          
                                                  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                                  ,&stack0x000000e0);
                        if (plVar19 == (long *)0x0) goto LAB_036bea38;
                        if ((lVar16 != 0) &&
                           (lVar25 = thunk_FUN_01afa9e0(lVar16,*(undefined8 *)(*plVar19 + 0x40)),
                           lVar25 == 0)) goto LAB_036beacc;
                        if ((int)plVar19[3] == 0) goto LAB_036beac8;
                        plVar19[4] = lVar16;
                        thunk_FUN_01b4f09c(plVar19 + 4,lVar16);
                        if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_036bea38;
                        lVar16 = FUN_039230bc(*(long *)(unaff_x19 + 0xf8),0);
                        if ((lVar16 != 0) &&
                           (lVar25 = thunk_FUN_01afa9e0(lVar16,*(undefined8 *)(*plVar19 + 0x40)),
                           lVar25 == 0)) goto LAB_036beacc;
                        if (*(uint *)(plVar19 + 3) < 2) goto LAB_036beac8;
                        plVar19[5] = lVar16;
                        thunk_FUN_01b4f09c(plVar19 + 5,lVar16);
                        if (lVar14 == 0) goto LAB_036bea38;
                        in_stack_00000170 = *(undefined4 *)(lVar14 + 0x14);
                        lVar16 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,
                                                    &stack0x00000170);
                        if ((lVar16 != 0) &&
                           (lVar25 = thunk_FUN_01afa9e0(lVar16,*(undefined8 *)(*plVar19 + 0x40)),
                           lVar25 == 0)) goto LAB_036beacc;
                        if (*(uint *)(plVar19 + 3) < 3) goto LAB_036beac8;
                        plVar19[6] = lVar16;
                        thunk_FUN_01b4f09c(plVar19 + 6,lVar16);
                        lVar16 = FUN_039230bc();
                        if ((lVar16 != 0) &&
                           (lVar25 = thunk_FUN_01afa9e0(lVar16,*(undefined8 *)(*plVar19 + 0x40)),
                           lVar25 == 0)) goto LAB_036beacc;
                        if (*(uint *)(plVar19 + 3) < 4) goto LAB_036beac8;
                        plVar19[7] = lVar16;
                        thunk_FUN_01b4f09c(plVar19 + 7,lVar16);
                        puVar11 = (undefined8 *)PTR_DAT_03d9cb50;
                      }
                      else {
                        in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar7);
                        lVar16 = thunk_FUN_01afa70c(*(undefined8 *)
                                                                                                          
                                                  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                                  ,&stack0x000000e0);
                        if (plVar19 == (long *)0x0) goto LAB_036bea38;
                        if ((lVar16 != 0) &&
                           (lVar25 = thunk_FUN_01afa9e0(lVar16,*(undefined8 *)(*plVar19 + 0x40)),
                           lVar25 == 0)) goto LAB_036beacc;
                        if ((int)plVar19[3] == 0) goto LAB_036beac8;
                        plVar19[4] = lVar16;
                        thunk_FUN_01b4f09c(plVar19 + 4,lVar16);
                        if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_036bea38;
                        lVar16 = FUN_039230bc(*(long *)(unaff_x19 + 0xf8),0);
                        if ((lVar16 != 0) &&
                           (lVar25 = thunk_FUN_01afa9e0(lVar16,*(undefined8 *)(*plVar19 + 0x40)),
                           lVar25 == 0)) goto LAB_036beacc;
                        if (*(uint *)(plVar19 + 3) < 2) goto LAB_036beac8;
                        plVar19[5] = lVar16;
                        thunk_FUN_01b4f09c(plVar19 + 5,lVar16);
                        if (lVar14 == 0) goto LAB_036bea38;
                        in_stack_00000170 = *(undefined4 *)(lVar14 + 0x14);
                        lVar16 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,
                                                    &stack0x00000170);
                        if ((lVar16 != 0) &&
                           (lVar25 = thunk_FUN_01afa9e0(lVar16,*(undefined8 *)(*plVar19 + 0x40)),
                           lVar25 == 0)) goto LAB_036beacc;
                        if (*(uint *)(plVar19 + 3) < 3) goto LAB_036beac8;
                        plVar19[6] = lVar16;
                        thunk_FUN_01b4f09c(plVar19 + 6,lVar16);
                        lVar16 = FUN_039230bc();
                        if ((lVar16 != 0) &&
                           (lVar25 = thunk_FUN_01afa9e0(lVar16,*(undefined8 *)(*plVar19 + 0x40)),
                           lVar25 == 0)) goto LAB_036beacc;
                        if (*(uint *)(plVar19 + 3) < 4) goto LAB_036beac8;
                        plVar19[7] = lVar16;
                        thunk_FUN_01b4f09c(plVar19 + 7,lVar16);
                        puVar11 = (undefined8 *)PTR_DAT_03d9cb48;
                      }
                      uVar21 = FUN_02ee71a8(*puVar11,plVar19,0);
                      if (*(int *)(*(long *)
                                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                  + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      FUN_038f3474(uVar21);
                      unaff_x25 = in_stack_00000038;
                      uVar7 = uVar6;
                    }
                    else {
                      unaff_x25 = in_stack_00000038;
                      uVar7 = uVar6;
                      if (lVar14 == 0) goto LAB_036bea38;
                    }
                  }
                  if (*(char *)(lVar14 + 0x10) == '\x01') {
                    if (*(long *)(lVar14 + 0x18) == 0) goto LAB_036bea38;
                    iVar9 = FUN_036c1bb4(*(long *)(lVar14 + 0x18),0);
                    if (*unaff_x29 == 0) goto LAB_036bea38;
                    iVar10 = FUN_036c1bb4(*unaff_x29,0);
                    if (iVar9 == iVar10) goto LAB_036bda7c;
                    plVar19 = *(long **)(lVar14 + 0x18);
                    if (plVar19 == (long *)0x0) {
                      plVar19 = (long *)0x0;
                      *unaff_x29 = 0;
                    }
                    else {
                      lVar16 = *(long *)StringLiteral_444;
                      bVar3 = *(byte *)(lVar16 + 0x130);
                      if (*(byte *)(*plVar19 + 0x130) < bVar3) {
                        plVar20 = (long *)0x0;
                      }
                      else {
                        plVar20 = plVar19;
                        if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar3 * 8 + -8) != lVar16)
                        {
                          plVar20 = (long *)0x0;
                        }
                      }
                      *unaff_x29 = (long)plVar20;
                      if (*(byte *)(*plVar19 + 0x130) < bVar3) {
                        plVar19 = (long *)0x0;
                      }
                      else if (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar3 * 8 + -8) !=
                               lVar16) {
                        plVar19 = (long *)0x0;
                      }
                    }
                    thunk_FUN_01b4f09c(unaff_x29,plVar19);
                    unaff_w28 = 1;
                  }
                  else {
LAB_036bda7c:
                    unaff_w28 = 0;
                  }
                  if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x38), lVar16 == 0))
                  goto LAB_036bea38;
                  if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036beac8;
                  lVar16 = lVar16 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                  plVar19 = (long *)(lVar16 + 0x30);
                  *plVar19 = lVar14;
                  *(undefined4 *)(lVar16 + 0x2c) = 0;
                  thunk_FUN_01b4f09c(plVar19,lVar14);
                  if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x38), lVar16 == 0))
                  goto LAB_036bea38;
                  uVar6 = *(uint *)(unaff_x19 + 0x490);
                  if (*(uint *)(lVar16 + 0x18) <= uVar6) goto LAB_036beac8;
                  lVar25 = lVar16 + (long)(int)uVar6 * 0x178;
                  *(short *)(lVar25 + 0x20) = (short)uVar7;
                  *(undefined1 *)(lVar25 + 0x5c) = uStack00000000000001bc;
                  if (*(uint *)(unaff_x25 + 0x18) <= unaff_w22) goto LAB_036beac8;
                  lVar16 = lVar16 + (long)(int)uVar6 * 0x178;
                  *(undefined8 *)(lVar16 + 0x24) =
                       *(undefined8 *)(unaff_x25 + (long)(int)unaff_w22 * 0xc + 0x24);
                  *(long *)(lVar16 + 0x38) = *unaff_x29;
                  thunk_FUN_01b4f09c();
                  unaff_x24 = (long *)PTR_DAT_03d9c920;
                  if (*(char *)(lVar14 + 0x10) == '\x02') {
                    plVar19 = *(long **)(lVar14 + 0x18);
                    if (plVar19 == (long *)0x0) goto LAB_036bea38;
                    bVar3 = *(byte *)(*(long *)PTR_DAT_03d9cb28 + 0x130);
                    if ((*(byte *)(*plVar19 + 0x130) < bVar3) ||
                       (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar3 * 8 + -8) !=
                        *(long *)PTR_DAT_03d9cb28)) goto LAB_036bea38;
                    lVar25 = plVar19[4];
                    lVar16 = *(long *)PTR_DAT_03d9c920;
                    if (*(int *)(lVar16 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                      lVar16 = *unaff_x24;
                    }
                    uVar7 = FUN_036b0d60(lVar25,plVar19,*(long *)(lVar16 + 0xb8),
                                         *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8));
                    *(uint *)(unaff_x19 + 0x120) = uVar7;
                    lVar16 = **(long **)(*unaff_x24 + 0xb8);
                    if (lVar16 == 0) goto LAB_036bea38;
                    if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_036beac8;
                    lVar16 = lVar16 + (long)(int)uVar7 * 0x38;
                    *(int *)(lVar16 + 0x54) = *(int *)(lVar16 + 0x54) + 1;
                    if ((*unaff_x20 == 0) || (lVar16 = *(long *)(*unaff_x20 + 0x38), lVar16 == 0))
                    goto LAB_036bea38;
                    if (*(uint *)(lVar16 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036beac8;
                    lVar16 = lVar16 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                    *(undefined4 *)(lVar16 + 0x2c) = 1;
                    uVar8 = *(undefined4 *)(unaff_x19 + 0x120);
                    *(undefined8 *)(lVar16 + 0x40) = plVar19;
                    *(undefined4 *)(lVar16 + 0x58) = uVar8;
                    thunk_FUN_01b4f09c((undefined8 *)(lVar16 + 0x40),plVar19);
                    unaff_x24 = (long *)PTR_DAT_03d9c920;
                    if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                       (lVar16 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar16 == 0))
                    goto LAB_036bea38;
                    uVar7 = *(uint *)(unaff_x19 + 0x490);
                    if (*(uint *)(lVar16 + 0x18) <= uVar7) goto LAB_036beac8;
                    *(undefined4 *)(lVar16 + (long)(int)uVar7 * 0x178 + 0x48) =
                         *(undefined4 *)(lVar14 + 0x28);
                    *(undefined4 *)(unaff_x19 + 0x644) = 0;
                    *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
                    in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
                    unaff_x25 = in_stack_00000038;
                    unaff_x27 = (long *)PTR_DAT_03d9c8a0;
                    goto LAB_036be0ec;
                  }
                  if (unaff_w28 != 0) {
                    if (*unaff_x29 == 0) goto LAB_036bea38;
                    iVar9 = FUN_036c1bb4(*unaff_x29,0);
                    if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_036bea38;
                    iVar10 = FUN_036c1bb4(*(long *)(unaff_x19 + 0xf8),0);
                    if (iVar9 != iVar10) {
                      uVar18 = FUN_036fba20(0);
                      if ((uVar18 & 1) == 0) {
                        if (*unaff_x29 == 0) goto LAB_036bea38;
                        uVar21 = *(undefined8 *)(*unaff_x29 + 0x20);
                      }
                      else {
                        if (*unaff_x29 == 0) goto LAB_036bea38;
                        uVar21 = *in_stack_00000028;
                        uVar22 = *(undefined8 *)(*unaff_x29 + 0x20);
                        if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                        }
                        uVar21 = FUN_036f7d2c(uVar21,uVar22,0);
                      }
                      *in_stack_00000028 = uVar21;
                      thunk_FUN_01b4f09c(in_stack_00000028);
                      lVar16 = *unaff_x24;
                      uVar21 = *in_stack_00000028;
                      lVar25 = *unaff_x29;
                      if (*(int *)(lVar16 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                        lVar16 = *unaff_x24;
                      }
                      uVar8 = FUN_036b0b30(uVar21,lVar25,*(long *)(lVar16 + 0xb8),
                                           *(undefined8 *)(*(long *)(lVar16 + 0xb8) + 8));
                      *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
                      unaff_x25 = in_stack_00000038;
                    }
                  }
                  if (*(long *)(lVar14 + 0x20) == 0) goto LAB_036bea38;
                  iVar9 = FUN_0396b18c(*(long *)(lVar14 + 0x20),0);
                  if (0 < iVar9) {
                    if (*(long *)(lVar14 + 0x20) == 0) goto LAB_036bea38;
                    lVar16 = *unaff_x29;
                    uVar21 = *in_stack_00000028;
                    uVar8 = FUN_0396b18c(*(long *)(lVar14 + 0x20),0);
                    if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
                      thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb20);
                    }
                    uVar21 = FUN_036f77c8(lVar16,uVar21,uVar8,0);
                    *in_stack_00000028 = uVar21;
                    thunk_FUN_01b4f09c(in_stack_00000028,uVar21);
                    lVar14 = *unaff_x24;
                    uVar21 = *in_stack_00000028;
                    lVar16 = *unaff_x29;
                    if (*(int *)(lVar14 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                      lVar14 = *unaff_x24;
                    }
                    uVar8 = FUN_036b0b30(uVar21,lVar16,*(long *)(lVar14 + 0xb8),
                                         *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8));
                    unaff_w28 = 1;
                    *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
                    unaff_x25 = in_stack_00000038;
                  }
                  unaff_x21 = 0x178;
                  if (*(int *)(*(long *)
                                Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                              + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar18 = FUN_02fdb080(uVar7,0);
                  unaff_x27 = (long *)PTR_DAT_03d9c8a0;
                  if ((uVar7 == 0x200b) || ((uVar18 & 1) != 0)) goto LAB_036bdfd4;
                  param_1 = *unaff_x24;
                  if (*(int *)(param_1 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(param_1);
                    param_1 = *unaff_x24;
                  }
                  in_x9 = **(long **)(param_1 + 0xb8);
                  if (in_x9 == 0) goto LAB_036bea38;
                  param_4 = *(uint *)(unaff_x19 + 0x120);
                  if (*(uint *)(in_x9 + 0x18) <= param_4) goto LAB_036beac8;
                  if (*(int *)(in_x9 + (long)(int)param_4 * 0x38 + 0x54) < 0x3fff)
                  goto code_r0x036bdf90;
                  uVar22 = *in_stack_00000028;
                  uVar21 = thunk_FUN_01afaadc(*(undefined8 *)
                                               Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                                             );
                  FUN_038ff0a8(uVar21,uVar22,0);
                  lVar14 = *unaff_x24;
                  lVar16 = *unaff_x29;
                  if (*(int *)(lVar14 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    lVar14 = *unaff_x24;
                  }
                  param_4 = FUN_036b0b30(uVar21,lVar16,*(long *)(lVar14 + 0xb8),
                                         *(undefined8 *)(*(long *)(lVar14 + 0xb8) + 8));
                  *(uint *)(unaff_x19 + 0x120) = param_4;
                  in_x9 = **(long **)(*unaff_x24 + 0xb8);
                  if (in_x9 != 0) goto LAB_036bdfb4;
                  goto LAB_036bea38;
                }
                uVar8 = *(undefined4 *)(unaff_x19 + 0x120);
                uVar18 = FUN_036e7318();
                uVar6 = uStack00000000000001b8;
                if ((uVar18 & 1) == 0) goto LAB_036bd3dc;
                if (*(uint *)(unaff_x25 + 0x18) <= unaff_w22) goto LAB_036beac8;
                iVar9 = *(int *)(unaff_x25 + (long)(int)unaff_w22 * 0xc + 0x24);
                if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
                  *(undefined1 *)(unaff_x19 + 0x26a) = 1;
                }
                puVar5 = PTR_DAT_03d9c920;
                unaff_x24 = (long *)PTR_DAT_03d9c920;
                unaff_w22 = uStack00000000000001b8;
              } while (*(int *)(unaff_x19 + 0x644) != 1);
              lVar14 = *(long *)PTR_DAT_03d9c920;
              if (*(int *)(lVar14 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar14 = *(long *)puVar5;
              }
              lVar14 = **(long **)(lVar14 + 0xb8);
              if (lVar14 == 0) goto LAB_036bea38;
              if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) break;
              lVar14 = lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
              *(int *)(lVar14 + 0x54) = *(int *)(lVar14 + 0x54) + 1;
              if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x38), lVar14 == 0))
              goto LAB_036bea38;
              if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
              uVar2 = *(undefined4 *)(unaff_x19 + 0x6a4);
              lVar14 = lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
              *(short *)(lVar14 + 0x20) = (short)uVar2 + -0x2000;
              *(undefined4 *)(lVar14 + 0x48) = uVar2;
              *(long *)(lVar14 + 0x38) = *unaff_x29;
              thunk_FUN_01b4f09c();
              if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x38), lVar14 == 0))
              goto LAB_036bea38;
              if (*(uint *)(lVar14 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
              *(undefined8 *)(lVar14 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x40) =
                   *(undefined8 *)(unaff_x19 + 0x698);
              thunk_FUN_01b4f09c();
              if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x38), lVar14 == 0))
              goto LAB_036bea38;
              uVar7 = *(uint *)(unaff_x19 + 0x490);
              if (*(uint *)(lVar14 + 0x18) <= uVar7) break;
              *(undefined4 *)(lVar14 + (long)(int)uVar7 * 0x178 + 0x58) =
                   *(undefined4 *)(unaff_x19 + 0x120);
              if ((*(long *)(unaff_x19 + 0x698) == 0) ||
                 (lVar16 = FUN_036fe7c0(*(long *)(unaff_x19 + 0x698),0), lVar16 == 0))
              goto LAB_036bea38;
              uVar21 = FUN_02b59714(lVar16,*(undefined4 *)(unaff_x19 + 0x6a4),
                                    *(undefined8 *)PTR_DAT_03d9c878);
              if (*(uint *)(lVar14 + 0x18) <= uVar7) break;
              *(undefined8 *)(lVar14 + (long)(int)uVar7 * 0x178 + 0x30) = uVar21;
              thunk_FUN_01b4f09c();
              if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x38), lVar14 == 0))
              goto LAB_036bea38;
              uVar7 = *(uint *)(unaff_x19 + 0x490);
              if (*(uint *)(lVar14 + 0x18) <= uVar7) break;
              uVar2 = *(undefined4 *)(unaff_x19 + 0x644);
              lVar16 = lVar14 + (long)(int)uVar7 * 0x178;
              *(int *)(lVar16 + 0x24) = iVar9;
              *(undefined4 *)(lVar16 + 0x2c) = uVar2;
              if (*(uint *)(in_stack_00000038 + 0x18) <= uVar6) break;
              *(int *)(lVar14 + (long)(int)uVar7 * 0x178 + 0x28) =
                   (*(int *)(in_stack_00000038 + (long)(int)uVar6 * 0xc + 0x24) - iVar9) + 1;
              *(undefined4 *)(unaff_x19 + 0x644) = 0;
              *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
              in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
              unaff_x24 = (long *)PTR_DAT_03d9c920;
              unaff_x25 = in_stack_00000038;
              unaff_w22 = uVar6;
            } while( true );
          }
          goto LAB_036beac8;
        }
        goto LAB_036bea38;
      }
      goto LAB_036beac8;
    }
    goto LAB_036bea38;
  }
LAB_036beac8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48180();
LAB_036be2bc:
  do {
    fVar29 = (float)param_3;
    if (uVar23 != 0) {
      lVar15 = *plVar19;
      if (lVar15 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_036beac8;
      uVar21 = *(undefined8 *)(lVar15 + uVar23 * 8 + 0x20);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar12 = FUN_03922f24(uVar21,0,0);
      if ((uVar12 & 1) != 0) {
        lVar15 = *unaff_x24;
        plVar20 = (long *)*plVar19;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar15 = *unaff_x24;
        }
        lVar15 = **(long **)(lVar15 + 0xb8);
        if (lVar15 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_036beac8;
        lVar15 = lVar15 + lVar16;
        in_stack_00000160 = *(undefined8 *)(lVar15 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar15 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar15 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar15 + -0x1c);
        uVar21 = *(undefined8 *)(lVar15 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar15 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar15 + -0x34);
        in_stack_00000140 = uVar21;
        lVar15 = FUN_03702d14();
        fVar29 = (float)uVar21;
        if (plVar20 == (long *)0x0) goto LAB_036bea38;
        if ((lVar15 != 0) &&
           (lVar13 = thunk_FUN_01afa9e0(lVar15,*(undefined8 *)(*plVar20 + 0x40)), lVar13 == 0)) {
LAB_036beacc:
          uVar21 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
          FUN_01b48050(uVar21,0);
        }
        if (*(uint *)(plVar20 + 3) <= uVar23) goto LAB_036beac8;
        plVar20[uVar23 + 4] = lVar15;
        thunk_FUN_01b4f09c((long)plVar20 + lVar25,lVar15);
        unaff_x24 = (long *)PTR_DAT_03d9c920;
        if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x60), lVar15 == 0))
        goto LAB_036bea38;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_036beac8;
        puVar11 = (undefined8 *)(lVar15 + lVar14 + 0x30);
        *puVar11 = 0;
        thunk_FUN_01b4f09c(puVar11,0);
      }
      if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_036bea38;
      fVar26 = (float)FUN_03928134(*(long *)(unaff_x19 + 0x380),0);
      lVar15 = *plVar19;
      if (lVar15 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_036beac8;
      lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
      if ((lVar15 == 0) || (fVar28 = fVar29, lVar15 = FUN_039ad440(lVar15,0), lVar15 == 0))
      goto LAB_036bea38;
      fVar27 = (float)FUN_03928134(lVar15,0);
      fVar29 = (fVar29 - fVar28) * (fVar29 - fVar28);
      param_3 = (ulong)(uint)fVar29;
      if (fVar4 <= (fVar26 - fVar27) * (fVar26 - fVar27) + fVar29) {
        lVar15 = *plVar19;
        if (lVar15 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_036beac8;
        lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_036bea38;
        lVar15 = FUN_039ad440(lVar15,0);
        if ((*(long *)(unaff_x19 + 0x380) == 0) ||
           (FUN_03928134(*(long *)(unaff_x19 + 0x380),0), lVar15 == 0)) goto LAB_036bea38;
        FUN_039281c4(lVar15,0);
      }
      lVar15 = *plVar19;
      if (lVar15 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_036beac8;
      lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
      if (lVar15 == 0) goto LAB_036bea38;
      uVar21 = *(undefined8 *)(lVar15 + 0xf0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar12 = FUN_03922f24(uVar21,0,0);
      if ((uVar12 & 1) == 0) {
        lVar15 = *plVar19;
        if (lVar15 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_036beac8;
        lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
        if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0xf0), lVar15 == 0)) goto LAB_036bea38;
        iVar9 = FUN_03922ce0(lVar15,0);
        lVar15 = *unaff_x24;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar15);
          lVar15 = *unaff_x24;
        }
        lVar15 = **(long **)(lVar15 + 0xb8);
        if (lVar15 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_036beac8;
        lVar15 = *(long *)(lVar15 + lVar16 + -0x1c);
        if (lVar15 == 0) goto LAB_036bea38;
        iVar10 = FUN_03922ce0(lVar15,0);
        if (iVar9 != iVar10) goto LAB_036be568;
      }
      else {
LAB_036be568:
        lVar15 = *plVar19;
        if (lVar15 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_036beac8;
        lVar13 = *unaff_x24;
        lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar13 = *unaff_x24;
        }
        lVar13 = **(long **)(lVar13 + 0xb8);
        if (lVar13 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar13 + 0x18) <= uVar23) goto LAB_036beac8;
        if (lVar15 == 0) goto LAB_036bea38;
        thunk_FUN_03702968(lVar15,*(undefined8 *)(lVar13 + lVar16 + -0x1c),0);
        lVar15 = *plVar19;
        if (lVar15 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_036beac8;
        lVar13 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar13 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar13 + 0x18) <= uVar23) goto LAB_036beac8;
        lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_036bea38;
        *(undefined8 *)(lVar15 + 0xd8) = *(undefined8 *)(lVar13 + lVar16 + -0x2c);
        thunk_FUN_01b4f09c();
        lVar15 = *plVar19;
        if (lVar15 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_036beac8;
        lVar13 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar13 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar13 + 0x18) <= uVar23) goto LAB_036beac8;
        lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_036bea38;
        *(undefined8 *)(lVar15 + 0xe0) = *(undefined8 *)(lVar13 + lVar16 + -0x24);
        thunk_FUN_01b4f09c();
      }
      lVar15 = *unaff_x24;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar15 = *unaff_x24;
      }
      lVar13 = **(long **)(lVar15 + 0xb8);
      if (lVar13 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar13 + 0x18) <= uVar23) goto LAB_036beac8;
      if (*(char *)(lVar13 + lVar16 + -0x13) != '\0') {
        lVar17 = *plVar19;
        if (lVar17 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar17 + 0x18) <= uVar23) goto LAB_036beac8;
        lVar17 = *(long *)(lVar17 + uVar23 * 8 + 0x20);
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar13 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar13 == 0) goto LAB_036bea38;
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar23) goto LAB_036beac8;
        if (lVar17 == 0) goto LAB_036bea38;
        FUN_037029c4(lVar17,*(undefined8 *)(lVar13 + lVar16 + -0x1c),0);
        lVar15 = *plVar19;
        if (lVar15 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_036beac8;
        lVar13 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar13 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar13 + 0x18) <= uVar23) goto LAB_036beac8;
        lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_036bea38;
        *(undefined8 *)(lVar15 + 0x100) = *(undefined8 *)(lVar13 + lVar16 + -0xc);
        thunk_FUN_01b4f09c(lVar15 + 0x100);
      }
    }
    lVar15 = *unaff_x24;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar15 = *unaff_x24;
    }
    lVar15 = **(long **)(lVar15 + 0xb8);
    if (lVar15 == 0) goto LAB_036bea38;
    if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_036beac8;
    if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x60), lVar13 == 0))
    goto LAB_036bea38;
    if (*(uint *)(lVar13 + 0x18) <= uVar23) goto LAB_036beac8;
    lVar17 = *(long *)(lVar13 + lVar14 + 0x30);
    iVar9 = *(int *)(lVar15 + lVar16);
    if (lVar17 == 0) {
      if (uVar23 == 0) {
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
        FUN_036f884c(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar9 + 1,0);
        memcpy(&stack0x00000090,&stack0x000000e0,0x50);
        if (*(int *)(lVar13 + 0x18) == 0) goto LAB_036beac8;
        memcpy((void *)(lVar13 + lVar14 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar13 + 0x20);
      }
      else {
        lVar15 = *plVar19;
        if (lVar15 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_036beac8;
        lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
        if (lVar15 == 0) goto LAB_036bea38;
        uVar21 = FUN_03702ba4(lVar15,0);
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
        FUN_036f884c(&stack0x000000e0,uVar21,iVar9 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar13 + 0x18) <= uVar23) goto LAB_036beac8;
        __dest = (void *)(lVar13 + lVar14 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      thunk_FUN_01b4f09c(__dest,0);
    }
    else {
      iVar10 = *(int *)(lVar17 + 0x18);
      if (iVar10 < iVar9 * 4) {
LAB_036be7d8:
        if (iVar9 < 0x401) {
          iVar9 = FUN_039155e8(iVar9 + 1,0);
        }
        else {
          iVar9 = iVar9 + 0x100;
        }
        if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__ +
                    0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_036f961c(lVar13 + lVar14 + 0x20,iVar9,0);
      }
      else if ((0 < iVar9) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
        iVar1 = iVar10 + 3;
        if (-1 < iVar10) {
          iVar1 = iVar10;
        }
        if (0x100 < (iVar1 >> 2) - iVar9) goto LAB_036be7d8;
      }
    }
    unaff_x24 = (long *)PTR_DAT_03d9c920;
    if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x60), lVar15 == 0))
    goto LAB_036bea38;
    lVar13 = *(long *)PTR_DAT_03d9c920;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar13 = *unaff_x24;
    }
    lVar13 = **(long **)(lVar13 + 0xb8);
    if (lVar13 == 0) goto LAB_036bea38;
    if ((*(uint *)(lVar13 + 0x18) <= uVar23) || (*(uint *)(lVar15 + 0x18) <= uVar23))
    goto LAB_036beac8;
    *(undefined8 *)(lVar15 + lVar14 + 0x68) = *(undefined8 *)(lVar13 + lVar16 + -0x1c);
    thunk_FUN_01b4f09c();
    uVar23 = uVar23 + 1;
    lVar14 = lVar14 + 0x50;
    lVar16 = lVar16 + 0x38;
    lVar25 = lVar25 + 8;
  } while (uVar7 != uVar23);
LAB_036be988:
  lVar14 = *plVar19;
  if (lVar14 != 0) {
    lVar16 = (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar18 << 3) + 0x20;
    do {
      uVar7 = (uint)uVar18;
      if ((int)*(uint *)(lVar14 + 0x18) <= (int)uVar7) {
LAB_036be118:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_036beac8;
      uVar21 = *(undefined8 *)(lVar14 + lVar16);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar18 = FUN_0391f968(uVar21,0,0);
      if ((uVar18 & 1) == 0) goto LAB_036be118;
      if ((*unaff_x20 == 0) || (lVar14 = *(long *)(*unaff_x20 + 0x60), lVar14 == 0)) break;
      if ((int)uVar7 < *(int *)(lVar14 + 0x18)) {
        lVar14 = *plVar19;
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar7) goto LAB_036beac8;
        if ((*(long *)(lVar14 + lVar16) == 0) ||
           (lVar14 = FUN_039add2c(*(long *)(lVar14 + lVar16),0), lVar14 == 0)) break;
        FUN_03af8c9c(lVar14,0,0);
      }
      lVar14 = *plVar19;
      uVar18 = (ulong)(uVar7 + 1);
      lVar16 = lVar16 + 8;
    } while (lVar14 != 0);
  }
LAB_036bea38:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


