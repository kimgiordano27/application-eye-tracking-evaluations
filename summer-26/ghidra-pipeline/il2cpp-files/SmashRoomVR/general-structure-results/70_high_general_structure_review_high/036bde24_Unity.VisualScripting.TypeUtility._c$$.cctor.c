/*
FUNCTION_NAME: Unity.VisualScripting.TypeUtility.<>c$$.cctor
ENTRY_POINT: 036bde24
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
Unity_VisualScripting_TypeUtility_<>c___cctor(long param_1,undefined1 param_2 [16],ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  float fVar5;
  undefined *puVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  void *__dest;
  long lVar18;
  long lVar19;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  uint unaff_w22;
  long *plVar20;
  undefined4 unaff_w23;
  undefined8 uVar21;
  long *plVar22;
  long *unaff_x24;
  long *plVar23;
  long lVar24;
  uint unaff_w26;
  ulong uVar25;
  long unaff_x27;
  undefined8 unaff_x28;
  uint *puVar26;
  long *unaff_x29;
  long lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
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
  
code_r0x036bde24:
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01ac7298(param_1);
  }
  uVar12 = FUN_036f77c8(unaff_x27,unaff_x28,unaff_w23,0);
  *unaff_x21 = uVar12;
  thunk_FUN_01b4f09c(unaff_x21,uVar12);
  lVar13 = *unaff_x24;
  uVar12 = *unaff_x21;
  lVar24 = *unaff_x29;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar13 = *unaff_x24;
  }
  uVar8 = FUN_036b0b30(uVar12,lVar24,*(long *)(lVar13 + 0xb8),
                       *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
  bVar4 = true;
  *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
LAB_036bde98:
  if (*(int *)(*(long *)
                Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar14 = FUN_02fdb080(unaff_w26,0);
  plVar23 = (long *)PTR_DAT_03d9c8a0;
  if ((unaff_w26 != 0x200b) && ((uVar14 & 1) == 0)) {
    lVar13 = *unaff_x24;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar13);
      lVar13 = *unaff_x24;
    }
    lVar24 = **(long **)(lVar13 + 0xb8);
    if (lVar24 == 0) goto LAB_036bea38;
    uVar9 = *(uint *)(unaff_x19 + 0x120);
    if (*(uint *)(lVar24 + 0x18) <= uVar9) goto LAB_036beac8;
    if (*(int *)(lVar24 + (long)(int)uVar9 * 0x38 + 0x54) < 0x3fff) {
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar13);
        lVar24 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar24 == 0) goto LAB_036bea38;
        uVar9 = *(uint *)(unaff_x19 + 0x120);
      }
    }
    else {
      uVar21 = *in_stack_00000028;
      uVar12 = thunk_FUN_01afaadc(*(undefined8 *)
                                   Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                                 );
      FUN_038ff0a8(uVar12,uVar21,0);
      lVar13 = *unaff_x24;
      lVar24 = *unaff_x29;
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar13 = *unaff_x24;
      }
      uVar9 = FUN_036b0b30(uVar12,lVar24,*(long *)(lVar13 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 8));
      *(uint *)(unaff_x19 + 0x120) = uVar9;
      lVar24 = **(long **)(*unaff_x24 + 0xb8);
      if (lVar24 == 0) goto LAB_036bea38;
    }
    if (*(uint *)(lVar24 + 0x18) <= uVar9) goto LAB_036beac8;
    lVar24 = lVar24 + (long)(int)uVar9 * 0x38;
    *(int *)(lVar24 + 0x54) = *(int *)(lVar24 + 0x54) + 1;
  }
  if ((*unaff_x20 != 0) && (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 != 0)) {
    if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar13 + 0x18)) {
      *(undefined8 *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x50) =
           *in_stack_00000028;
      thunk_FUN_01b4f09c();
      if ((*unaff_x20 != 0) && (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 != 0)) {
        if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar13 + 0x18)) {
          uVar9 = *(uint *)(unaff_x19 + 0x120);
          *(uint *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x58) = uVar9;
          lVar13 = *unaff_x24;
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar13 = *unaff_x24;
            uVar9 = *(uint *)(unaff_x19 + 0x120);
          }
          lVar24 = **(long **)(lVar13 + 0xb8);
          if (lVar24 == 0) goto LAB_036bea38;
          if (*(uint *)(lVar24 + 0x18) <= uVar9) goto LAB_036beac8;
          *(bool *)(lVar24 + (long)(int)uVar9 * 0x38 + 0x41) = bVar4;
          if (bVar4) {
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar24 = **(long **)(*unaff_x24 + 0xb8);
              if (lVar24 == 0) goto LAB_036bea38;
              uVar9 = *(uint *)(unaff_x19 + 0x120);
            }
            if (*(uint *)(lVar24 + 0x18) <= uVar9) goto LAB_036beac8;
            puVar15 = (undefined8 *)(lVar24 + (long)(int)uVar9 * 0x38 + 0x48);
            *puVar15 = in_stack_00000018;
            thunk_FUN_01b4f09c(puVar15,in_stack_00000018);
            *(undefined8 *)(unaff_x19 + 0x100) = in_stack_00000010;
            thunk_FUN_01b4f09c(unaff_x29);
            *(undefined8 *)(unaff_x19 + 0x118) = in_stack_00000018;
            thunk_FUN_01b4f09c(in_stack_00000028,in_stack_00000018);
            *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
          }
          uVar9 = *(uint *)(unaff_x19 + 0x490);
LAB_036be0ec:
          do {
            *(uint *)(unaff_x19 + 0x490) = uVar9 + 1;
            do {
              uVar9 = *(uint *)(in_stack_00000038 + 0x18);
              unaff_w22 = unaff_w22 + 1;
              if ((int)uVar9 <= (int)unaff_w22) {
LAB_036be10c:
                if (*(char *)(unaff_x19 + 0x3f5) != '\0') {
                  *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
                  goto LAB_036be118;
                }
                lVar13 = *unaff_x20;
                if (lVar13 == 0) goto LAB_036bea38;
                *(int *)(lVar13 + 0x1c) = in_stack_00000020._4_4_;
                lVar24 = *unaff_x24;
                if (*(int *)(lVar24 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar24 = *unaff_x24;
                }
                lVar24 = *(long *)(*(long *)(lVar24 + 0xb8) + 8);
                if (lVar24 == 0) goto LAB_036bea38;
                uVar9 = FUN_02554fc4(lVar24,*(undefined8 *)PTR_DAT_03d9b168);
                *(uint *)(lVar13 + 0x34) = uVar9;
                if (*unaff_x20 == 0) goto LAB_036bea38;
                plVar20 = (long *)(*unaff_x20 + 0x60);
                lVar13 = *plVar20;
                if (lVar13 == 0) goto LAB_036bea38;
                uVar14 = (ulong)uVar9;
                if (*(int *)(lVar13 + 0x18) < (int)uVar9) {
                  if (*(int *)(*plVar23 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  FUN_01f52de4(plVar20,uVar14,0,*(undefined8 *)PTR_DAT_03d9cb38);
                }
                if (*(long *)(unaff_x19 + 0x708) == 0) goto LAB_036bea38;
                plVar20 = (long *)(unaff_x19 + 0x708);
                if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar9) {
                  uVar8 = FUN_039155e8(uVar9 + 1,0);
                  if (*(int *)(*plVar23 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*plVar23);
                  }
                  FUN_01f52b30(plVar20,uVar8,*(undefined8 *)PTR_DAT_03d9cc70);
                }
                if (*(char *)(unaff_x19 + 0x321) != '\0') {
                  if (*unaff_x20 == 0) goto LAB_036bea38;
                  plVar22 = (long *)(*unaff_x20 + 0x38);
                  lVar13 = *plVar22;
                  if (lVar13 == 0) goto LAB_036bea38;
                  iVar10 = *(int *)(unaff_x19 + 0x490);
                  if (0x100 < *(int *)(lVar13 + 0x18) - iVar10) {
                    iVar11 = 0x100;
                    if (0x100 < iVar10 + 1) {
                      iVar11 = iVar10 + 1;
                    }
                    if (*(int *)(*plVar23 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    FUN_01f52d44(plVar22,iVar11,1,*(undefined8 *)PTR_DAT_03d9cb30);
                    unaff_x24 = (long *)PTR_DAT_03d9c920;
                  }
                }
                fVar5 = DAT_00b55084;
                if ((int)uVar9 < 1) goto LAB_036be988;
                lVar13 = 0;
                uVar25 = 0;
                lVar24 = 0x54;
                lVar27 = 0x20;
                goto LAB_036be2bc;
              }
              if (uVar9 <= unaff_w22) goto LAB_036beac8;
              puVar26 = (uint *)(in_stack_00000038 + (long)(int)unaff_w22 * 0xc + 0x20);
              if (*puVar26 == 0) goto LAB_036be10c;
              if (*unaff_x20 == 0) goto LAB_036bea38;
              plVar20 = (long *)(*unaff_x20 + 0x38);
              lVar13 = *plVar20;
              iVar10 = *(int *)(unaff_x19 + 0x490);
              if ((lVar13 == 0) || (*(int *)(lVar13 + 0x18) <= iVar10)) {
                if (*(int *)(*plVar23 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                FUN_01f52d44(plVar20,iVar10 + 1,1,*(undefined8 *)PTR_DAT_03d9cb30);
                uVar9 = *(uint *)(in_stack_00000038 + 0x18);
              }
              if (uVar9 <= unaff_w22) goto LAB_036beac8;
              unaff_w26 = *puVar26;
              if ((unaff_w26 != 0x3c) || (*(char *)(unaff_x19 + 0x302) == '\0')) {
LAB_036bd3dc:
                uStack00000000000001bc = 0;
                in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x100);
                in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x118);
                in_stack_00000030._4_4_ = *(undefined4 *)(unaff_x19 + 0x120);
                if (*(int *)(unaff_x19 + 0x644) != 0) goto LAB_036bd4b8;
                uVar9 = *(uint *)(unaff_x19 + 0x25c);
                if ((uVar9 >> 4 & 1) == 0) {
                  if ((uVar9 >> 3 & 1) == 0) {
                    if ((uVar9 >> 5 & 1) != 0) goto LAB_036bd40c;
                  }
                  else {
                    if (*(int *)(*(long *)
                                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar14 = FUN_02fdd92c(unaff_w26,0);
                    if ((uVar14 & 1) != 0) {
                      if (*(int *)(*(long *)
                                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                                  + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uVar9 = FUN_02fdddc0(unaff_w26,0);
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
                  uVar14 = FUN_02fdd9e8(unaff_w26,0);
                  if ((uVar14 & 1) != 0) {
                    if (*(int *)(*(long *)
                                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar9 = FUN_02fddc48(unaff_w26,0);
LAB_036bd4b4:
                    unaff_w26 = uVar9 & 0xffff;
                  }
                }
LAB_036bd4b8:
                lVar13 = FUN_036f260c();
                if (lVar13 == 0) {
                  iVar10 = FUN_036fb88c();
                  if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) goto LAB_036beac8;
                  if (iVar10 == 0) {
                    uVar9 = 0x25a1;
                  }
                  else {
                    uVar9 = FUN_036fb88c(0);
                  }
                  *puVar26 = uVar9;
                  uVar12 = *(undefined8 *)(unaff_x19 + 0x100);
                  uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
                  uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                  if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  lVar13 = FUN_036d1ff4(uVar9,uVar12,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
                  if (lVar13 == 0) {
                    lVar13 = FUN_036fba04();
                    if (lVar13 != 0) {
                      lVar13 = FUN_036fba04(0);
                      if (lVar13 == 0) goto LAB_036bea38;
                      if (0 < *(int *)(lVar13 + 0x18)) {
                        uVar21 = *(undefined8 *)(unaff_x19 + 0x100);
                        uVar12 = FUN_036fba04(0);
                        uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
                        uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                        if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                          thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb18);
                        }
                        lVar13 = FUN_036d2514(uVar9,uVar21,uVar12,1,uVar8,uVar2,
                                              (long)&stack0x000001b8 + 4,0);
                        if (lVar13 != 0) goto LAB_036bd568;
                      }
                    }
                    uVar12 = FUN_036fb8e4(0);
                    if (*(int *)(*(long *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298(*(long *)
                                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                        );
                    }
                    uVar14 = FUN_0391f968(uVar12,0,0);
                    if ((uVar14 & 1) != 0) {
                      uVar12 = FUN_036fb8e4(0);
                      uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
                      uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                      if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                        thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb18);
                      }
                      lVar13 = FUN_036d1ff4(uVar9,uVar12,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0)
                      ;
                      if (lVar13 != 0) goto LAB_036bd568;
                    }
                    if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) goto LAB_036beac8;
                    *puVar26 = 0x20;
                    uVar12 = *(undefined8 *)(unaff_x19 + 0x100);
                    uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
                    uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                    if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar9 = 0x20;
                    lVar13 = FUN_036d1ff4(0x20,uVar12,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
                    if (lVar13 == 0) {
                      if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) goto LAB_036beac8;
                      *puVar26 = 3;
                      uVar12 = *(undefined8 *)(unaff_x19 + 0x100);
                      uVar8 = *(undefined4 *)(unaff_x19 + 0x25c);
                      uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                      if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uVar9 = 3;
                      lVar13 = FUN_036d1ff4(3,uVar12,1,uVar8,uVar2,(long)&stack0x000001b8 + 4,0);
                    }
                  }
LAB_036bd568:
                  uVar14 = FUN_036fb8c8(0);
                  if ((uVar14 & 1) == 0) {
                    plVar23 = (long *)FUN_01b47fd0(*(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                                  ,4);
                    if ((int)unaff_w26 < 0x10000) {
                      in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,unaff_w26);
                      lVar24 = thunk_FUN_01afa70c(*(undefined8 *)
                                                                                                      
                                                  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                                  ,&stack0x000000e0);
                      if (plVar23 == (long *)0x0) goto LAB_036bea38;
                      if ((lVar24 != 0) &&
                         (lVar27 = thunk_FUN_01afa9e0(lVar24,*(undefined8 *)(*plVar23 + 0x40)),
                         lVar27 == 0)) goto LAB_036beacc;
                      if ((int)plVar23[3] == 0) goto LAB_036beac8;
                      plVar23[4] = lVar24;
                      thunk_FUN_01b4f09c(plVar23 + 4,lVar24);
                      if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_036bea38;
                      lVar24 = FUN_039230bc(*(long *)(unaff_x19 + 0xf8),0);
                      if ((lVar24 != 0) &&
                         (lVar27 = thunk_FUN_01afa9e0(lVar24,*(undefined8 *)(*plVar23 + 0x40)),
                         lVar27 == 0)) goto LAB_036beacc;
                      if (*(uint *)(plVar23 + 3) < 2) goto LAB_036beac8;
                      plVar23[5] = lVar24;
                      thunk_FUN_01b4f09c(plVar23 + 5,lVar24);
                      if (lVar13 == 0) goto LAB_036bea38;
                      in_stack_00000170 = *(undefined4 *)(lVar13 + 0x14);
                      lVar24 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&stack0x00000170
                                                 );
                      if ((lVar24 != 0) &&
                         (lVar27 = thunk_FUN_01afa9e0(lVar24,*(undefined8 *)(*plVar23 + 0x40)),
                         lVar27 == 0)) goto LAB_036beacc;
                      if (*(uint *)(plVar23 + 3) < 3) goto LAB_036beac8;
                      plVar23[6] = lVar24;
                      thunk_FUN_01b4f09c(plVar23 + 6,lVar24);
                      lVar24 = FUN_039230bc();
                      if ((lVar24 != 0) &&
                         (lVar27 = thunk_FUN_01afa9e0(lVar24,*(undefined8 *)(*plVar23 + 0x40)),
                         lVar27 == 0)) goto LAB_036beacc;
                      if (*(uint *)(plVar23 + 3) < 4) goto LAB_036beac8;
                      plVar23[7] = lVar24;
                      thunk_FUN_01b4f09c(plVar23 + 7,lVar24);
                      puVar15 = (undefined8 *)PTR_DAT_03d9cb50;
                    }
                    else {
                      in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,unaff_w26);
                      lVar24 = thunk_FUN_01afa70c(*(undefined8 *)
                                                                                                      
                                                  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                                  ,&stack0x000000e0);
                      if (plVar23 == (long *)0x0) goto LAB_036bea38;
                      if ((lVar24 != 0) &&
                         (lVar27 = thunk_FUN_01afa9e0(lVar24,*(undefined8 *)(*plVar23 + 0x40)),
                         lVar27 == 0)) goto LAB_036beacc;
                      if ((int)plVar23[3] == 0) goto LAB_036beac8;
                      plVar23[4] = lVar24;
                      thunk_FUN_01b4f09c(plVar23 + 4,lVar24);
                      if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_036bea38;
                      lVar24 = FUN_039230bc(*(long *)(unaff_x19 + 0xf8),0);
                      if ((lVar24 != 0) &&
                         (lVar27 = thunk_FUN_01afa9e0(lVar24,*(undefined8 *)(*plVar23 + 0x40)),
                         lVar27 == 0)) goto LAB_036beacc;
                      if (*(uint *)(plVar23 + 3) < 2) goto LAB_036beac8;
                      plVar23[5] = lVar24;
                      thunk_FUN_01b4f09c(plVar23 + 5,lVar24);
                      if (lVar13 == 0) goto LAB_036bea38;
                      in_stack_00000170 = *(undefined4 *)(lVar13 + 0x14);
                      lVar24 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&stack0x00000170
                                                 );
                      if ((lVar24 != 0) &&
                         (lVar27 = thunk_FUN_01afa9e0(lVar24,*(undefined8 *)(*plVar23 + 0x40)),
                         lVar27 == 0)) goto LAB_036beacc;
                      if (*(uint *)(plVar23 + 3) < 3) goto LAB_036beac8;
                      plVar23[6] = lVar24;
                      thunk_FUN_01b4f09c(plVar23 + 6,lVar24);
                      lVar24 = FUN_039230bc();
                      if ((lVar24 != 0) &&
                         (lVar27 = thunk_FUN_01afa9e0(lVar24,*(undefined8 *)(*plVar23 + 0x40)),
                         lVar27 == 0)) goto LAB_036beacc;
                      if (*(uint *)(plVar23 + 3) < 4) goto LAB_036beac8;
                      plVar23[7] = lVar24;
                      thunk_FUN_01b4f09c(plVar23 + 7,lVar24);
                      puVar15 = (undefined8 *)PTR_DAT_03d9cb48;
                    }
                    uVar12 = FUN_02ee71a8(*puVar15,plVar23,0);
                    if (*(int *)(*(long *)
                                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    FUN_038f3474(uVar12);
                    unaff_w26 = uVar9;
                  }
                  else {
                    unaff_w26 = uVar9;
                    if (lVar13 == 0) goto LAB_036bea38;
                  }
                }
                if (*(char *)(lVar13 + 0x10) == '\x01') {
                  if (*(long *)(lVar13 + 0x18) == 0) goto LAB_036bea38;
                  iVar10 = FUN_036c1bb4(*(long *)(lVar13 + 0x18),0);
                  if (*unaff_x29 == 0) goto LAB_036bea38;
                  iVar11 = FUN_036c1bb4(*unaff_x29,0);
                  if (iVar10 == iVar11) goto LAB_036bda7c;
                  plVar23 = *(long **)(lVar13 + 0x18);
                  if (plVar23 == (long *)0x0) {
                    plVar23 = (long *)0x0;
                    *unaff_x29 = 0;
                  }
                  else {
                    lVar24 = *(long *)StringLiteral_444;
                    bVar3 = *(byte *)(lVar24 + 0x130);
                    if (*(byte *)(*plVar23 + 0x130) < bVar3) {
                      plVar20 = (long *)0x0;
                    }
                    else {
                      plVar20 = plVar23;
                      if (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar3 * 8 + -8) != lVar24) {
                        plVar20 = (long *)0x0;
                      }
                    }
                    *unaff_x29 = (long)plVar20;
                    if (*(byte *)(*plVar23 + 0x130) < bVar3) {
                      plVar23 = (long *)0x0;
                    }
                    else if (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar3 * 8 + -8) != lVar24)
                    {
                      plVar23 = (long *)0x0;
                    }
                  }
                  thunk_FUN_01b4f09c(unaff_x29,plVar23);
                  bVar4 = true;
                }
                else {
LAB_036bda7c:
                  bVar4 = false;
                }
                if ((*unaff_x20 == 0) || (lVar24 = *(long *)(*unaff_x20 + 0x38), lVar24 == 0))
                goto LAB_036bea38;
                if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036beac8;
                lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                plVar23 = (long *)(lVar24 + 0x30);
                *plVar23 = lVar13;
                *(undefined4 *)(lVar24 + 0x2c) = 0;
                thunk_FUN_01b4f09c(plVar23,lVar13);
                if ((*unaff_x20 == 0) || (lVar24 = *(long *)(*unaff_x20 + 0x38), lVar24 == 0))
                goto LAB_036bea38;
                uVar9 = *(uint *)(unaff_x19 + 0x490);
                if (*(uint *)(lVar24 + 0x18) <= uVar9) goto LAB_036beac8;
                lVar27 = lVar24 + (long)(int)uVar9 * 0x178;
                *(short *)(lVar27 + 0x20) = (short)unaff_w26;
                *(undefined1 *)(lVar27 + 0x5c) = uStack00000000000001bc;
                if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) goto LAB_036beac8;
                lVar24 = lVar24 + (long)(int)uVar9 * 0x178;
                *(undefined8 *)(lVar24 + 0x24) =
                     *(undefined8 *)(in_stack_00000038 + (long)(int)unaff_w22 * 0xc + 0x24);
                *(long *)(lVar24 + 0x38) = *unaff_x29;
                thunk_FUN_01b4f09c();
                unaff_x24 = (long *)PTR_DAT_03d9c920;
                if (*(char *)(lVar13 + 0x10) == '\x02') {
                  plVar23 = *(long **)(lVar13 + 0x18);
                  if (plVar23 == (long *)0x0) goto LAB_036bea38;
                  bVar3 = *(byte *)(*(long *)PTR_DAT_03d9cb28 + 0x130);
                  if ((*(byte *)(*plVar23 + 0x130) < bVar3) ||
                     (*(long *)(*(long *)(*plVar23 + 200) + (ulong)bVar3 * 8 + -8) !=
                      *(long *)PTR_DAT_03d9cb28)) goto LAB_036bea38;
                  lVar27 = plVar23[4];
                  lVar24 = *(long *)PTR_DAT_03d9c920;
                  if (*(int *)(lVar24 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    lVar24 = *unaff_x24;
                  }
                  uVar9 = FUN_036b0d60(lVar27,plVar23,*(long *)(lVar24 + 0xb8),
                                       *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 8));
                  *(uint *)(unaff_x19 + 0x120) = uVar9;
                  lVar24 = **(long **)(*unaff_x24 + 0xb8);
                  if (lVar24 == 0) goto LAB_036bea38;
                  if (*(uint *)(lVar24 + 0x18) <= uVar9) goto LAB_036beac8;
                  lVar24 = lVar24 + (long)(int)uVar9 * 0x38;
                  *(int *)(lVar24 + 0x54) = *(int *)(lVar24 + 0x54) + 1;
                  if ((*unaff_x20 == 0) || (lVar24 = *(long *)(*unaff_x20 + 0x38), lVar24 == 0))
                  goto LAB_036bea38;
                  if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036beac8;
                  lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                  *(undefined4 *)(lVar24 + 0x2c) = 1;
                  uVar8 = *(undefined4 *)(unaff_x19 + 0x120);
                  *(undefined8 *)(lVar24 + 0x40) = plVar23;
                  *(undefined4 *)(lVar24 + 0x58) = uVar8;
                  thunk_FUN_01b4f09c((undefined8 *)(lVar24 + 0x40),plVar23);
                  unaff_x24 = (long *)PTR_DAT_03d9c920;
                  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                     (lVar24 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar24 == 0))
                  goto LAB_036bea38;
                  uVar9 = *(uint *)(unaff_x19 + 0x490);
                  if (*(uint *)(lVar24 + 0x18) <= uVar9) goto LAB_036beac8;
                  *(undefined4 *)(lVar24 + (long)(int)uVar9 * 0x178 + 0x48) =
                       *(undefined4 *)(lVar13 + 0x28);
                  *(undefined4 *)(unaff_x19 + 0x644) = 0;
                  *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
                  in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
                  plVar23 = (long *)PTR_DAT_03d9c8a0;
                  goto LAB_036be0ec;
                }
                if (bVar4) {
                  if (*unaff_x29 == 0) goto LAB_036bea38;
                  iVar10 = FUN_036c1bb4(*unaff_x29,0);
                  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_036bea38;
                  iVar11 = FUN_036c1bb4(*(long *)(unaff_x19 + 0xf8),0);
                  if (iVar10 != iVar11) {
                    uVar14 = FUN_036fba20(0);
                    if ((uVar14 & 1) == 0) {
                      if (*unaff_x29 == 0) goto LAB_036bea38;
                      uVar12 = *(undefined8 *)(*unaff_x29 + 0x20);
                    }
                    else {
                      if (*unaff_x29 == 0) goto LAB_036bea38;
                      uVar12 = *in_stack_00000028;
                      uVar21 = *(undefined8 *)(*unaff_x29 + 0x20);
                      if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uVar12 = FUN_036f7d2c(uVar12,uVar21,0);
                    }
                    *in_stack_00000028 = uVar12;
                    thunk_FUN_01b4f09c(in_stack_00000028);
                    lVar24 = *unaff_x24;
                    uVar12 = *in_stack_00000028;
                    lVar27 = *unaff_x29;
                    if (*(int *)(lVar24 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                      lVar24 = *unaff_x24;
                    }
                    uVar8 = FUN_036b0b30(uVar12,lVar27,*(long *)(lVar24 + 0xb8),
                                         *(undefined8 *)(*(long *)(lVar24 + 0xb8) + 8));
                    *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
                  }
                }
                if (*(long *)(lVar13 + 0x20) == 0) goto LAB_036bea38;
                iVar10 = FUN_0396b18c(*(long *)(lVar13 + 0x20),0);
                if (iVar10 < 1) goto LAB_036bde98;
                if (*(long *)(lVar13 + 0x20) == 0) goto LAB_036bea38;
                unaff_x27 = *unaff_x29;
                unaff_x28 = *in_stack_00000028;
                unaff_w23 = FUN_0396b18c(*(long *)(lVar13 + 0x20),0);
                param_1 = *(long *)PTR_DAT_03d9cb20;
                unaff_x21 = in_stack_00000028;
                goto code_r0x036bde24;
              }
              uVar8 = *(undefined4 *)(unaff_x19 + 0x120);
              uVar14 = FUN_036e7318();
              uVar7 = uStack00000000000001b8;
              if ((uVar14 & 1) == 0) goto LAB_036bd3dc;
              if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) goto LAB_036beac8;
              iVar10 = *(int *)(in_stack_00000038 + (long)(int)unaff_w22 * 0xc + 0x24);
              if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
                *(undefined1 *)(unaff_x19 + 0x26a) = 1;
              }
              puVar6 = PTR_DAT_03d9c920;
              unaff_x24 = (long *)PTR_DAT_03d9c920;
              unaff_w22 = uStack00000000000001b8;
            } while (*(int *)(unaff_x19 + 0x644) != 1);
            lVar13 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar13 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar13 = *(long *)puVar6;
            }
            lVar13 = **(long **)(lVar13 + 0xb8);
            if (lVar13 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) break;
            lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
            *(int *)(lVar13 + 0x54) = *(int *)(lVar13 + 0x54) + 1;
            if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
            goto LAB_036bea38;
            if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
            uVar2 = *(undefined4 *)(unaff_x19 + 0x6a4);
            lVar13 = lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
            *(short *)(lVar13 + 0x20) = (short)uVar2 + -0x2000;
            *(undefined4 *)(lVar13 + 0x48) = uVar2;
            *(long *)(lVar13 + 0x38) = *unaff_x29;
            thunk_FUN_01b4f09c();
            if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
            goto LAB_036bea38;
            if (*(uint *)(lVar13 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
            *(undefined8 *)(lVar13 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x40) =
                 *(undefined8 *)(unaff_x19 + 0x698);
            thunk_FUN_01b4f09c();
            if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
            goto LAB_036bea38;
            uVar9 = *(uint *)(unaff_x19 + 0x490);
            if (*(uint *)(lVar13 + 0x18) <= uVar9) break;
            *(undefined4 *)(lVar13 + (long)(int)uVar9 * 0x178 + 0x58) =
                 *(undefined4 *)(unaff_x19 + 0x120);
            if ((*(long *)(unaff_x19 + 0x698) == 0) ||
               (lVar24 = FUN_036fe7c0(*(long *)(unaff_x19 + 0x698),0), lVar24 == 0))
            goto LAB_036bea38;
            uVar12 = FUN_02b59714(lVar24,*(undefined4 *)(unaff_x19 + 0x6a4),
                                  *(undefined8 *)PTR_DAT_03d9c878);
            if (*(uint *)(lVar13 + 0x18) <= uVar9) break;
            *(undefined8 *)(lVar13 + (long)(int)uVar9 * 0x178 + 0x30) = uVar12;
            thunk_FUN_01b4f09c();
            if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x38), lVar13 == 0))
            goto LAB_036bea38;
            uVar9 = *(uint *)(unaff_x19 + 0x490);
            if (*(uint *)(lVar13 + 0x18) <= uVar9) break;
            uVar2 = *(undefined4 *)(unaff_x19 + 0x644);
            lVar24 = lVar13 + (long)(int)uVar9 * 0x178;
            *(int *)(lVar24 + 0x24) = iVar10;
            *(undefined4 *)(lVar24 + 0x2c) = uVar2;
            if (*(uint *)(in_stack_00000038 + 0x18) <= uVar7) break;
            *(int *)(lVar13 + (long)(int)uVar9 * 0x178 + 0x28) =
                 (*(int *)(in_stack_00000038 + (long)(int)uVar7 * 0xc + 0x24) - iVar10) + 1;
            *(undefined4 *)(unaff_x19 + 0x644) = 0;
            *(undefined4 *)(unaff_x19 + 0x120) = uVar8;
            in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
            unaff_x24 = (long *)PTR_DAT_03d9c920;
            unaff_w22 = uVar7;
          } while( true );
        }
        goto LAB_036beac8;
      }
      goto LAB_036bea38;
    }
    goto LAB_036beac8;
  }
  goto LAB_036bea38;
LAB_036be2bc:
  do {
    fVar31 = (float)param_3;
    if (uVar25 != 0) {
      lVar18 = *plVar20;
      if (lVar18 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_036beac8;
      uVar12 = *(undefined8 *)(lVar18 + uVar25 * 8 + 0x20);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar16 = FUN_03922f24(uVar12,0,0);
      if ((uVar16 & 1) != 0) {
        lVar18 = *unaff_x24;
        plVar23 = (long *)*plVar20;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar18 = *unaff_x24;
        }
        lVar18 = **(long **)(lVar18 + 0xb8);
        if (lVar18 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_036beac8;
        lVar18 = lVar18 + lVar24;
        in_stack_00000160 = *(undefined8 *)(lVar18 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar18 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar18 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar18 + -0x1c);
        uVar12 = *(undefined8 *)(lVar18 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar18 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar18 + -0x34);
        in_stack_00000140 = uVar12;
        lVar18 = FUN_03702d14();
        fVar31 = (float)uVar12;
        if (plVar23 == (long *)0x0) goto LAB_036bea38;
        if ((lVar18 != 0) &&
           (lVar17 = thunk_FUN_01afa9e0(lVar18,*(undefined8 *)(*plVar23 + 0x40)), lVar17 == 0)) {
LAB_036beacc:
          uVar12 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
          FUN_01b48050(uVar12,0);
        }
        if (*(uint *)(plVar23 + 3) <= uVar25) goto LAB_036beac8;
        plVar23[uVar25 + 4] = lVar18;
        thunk_FUN_01b4f09c((long)plVar23 + lVar27,lVar18);
        unaff_x24 = (long *)PTR_DAT_03d9c920;
        if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x60), lVar18 == 0))
        goto LAB_036bea38;
        if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_036beac8;
        puVar15 = (undefined8 *)(lVar18 + lVar13 + 0x30);
        *puVar15 = 0;
        thunk_FUN_01b4f09c(puVar15,0);
      }
      if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_036bea38;
      fVar28 = (float)FUN_03928134(*(long *)(unaff_x19 + 0x380),0);
      lVar18 = *plVar20;
      if (lVar18 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_036beac8;
      lVar18 = *(long *)(lVar18 + uVar25 * 8 + 0x20);
      if ((lVar18 == 0) || (fVar30 = fVar31, lVar18 = FUN_039ad440(lVar18,0), lVar18 == 0))
      goto LAB_036bea38;
      fVar29 = (float)FUN_03928134(lVar18,0);
      fVar31 = (fVar31 - fVar30) * (fVar31 - fVar30);
      param_3 = (ulong)(uint)fVar31;
      if (fVar5 <= (fVar28 - fVar29) * (fVar28 - fVar29) + fVar31) {
        lVar18 = *plVar20;
        if (lVar18 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_036beac8;
        lVar18 = *(long *)(lVar18 + uVar25 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_036bea38;
        lVar18 = FUN_039ad440(lVar18,0);
        if ((*(long *)(unaff_x19 + 0x380) == 0) ||
           (FUN_03928134(*(long *)(unaff_x19 + 0x380),0), lVar18 == 0)) goto LAB_036bea38;
        FUN_039281c4(lVar18,0);
      }
      lVar18 = *plVar20;
      if (lVar18 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_036beac8;
      lVar18 = *(long *)(lVar18 + uVar25 * 8 + 0x20);
      if (lVar18 == 0) goto LAB_036bea38;
      uVar12 = *(undefined8 *)(lVar18 + 0xf0);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar16 = FUN_03922f24(uVar12,0,0);
      if ((uVar16 & 1) == 0) {
        lVar18 = *plVar20;
        if (lVar18 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_036beac8;
        lVar18 = *(long *)(lVar18 + uVar25 * 8 + 0x20);
        if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0xf0), lVar18 == 0)) goto LAB_036bea38;
        iVar10 = FUN_03922ce0(lVar18,0);
        lVar18 = *unaff_x24;
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar18);
          lVar18 = *unaff_x24;
        }
        lVar18 = **(long **)(lVar18 + 0xb8);
        if (lVar18 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_036beac8;
        lVar18 = *(long *)(lVar18 + lVar24 + -0x1c);
        if (lVar18 == 0) goto LAB_036bea38;
        iVar11 = FUN_03922ce0(lVar18,0);
        if (iVar10 != iVar11) goto LAB_036be568;
      }
      else {
LAB_036be568:
        lVar18 = *plVar20;
        if (lVar18 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_036beac8;
        lVar17 = *unaff_x24;
        lVar18 = *(long *)(lVar18 + uVar25 * 8 + 0x20);
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar17 = *unaff_x24;
        }
        lVar17 = **(long **)(lVar17 + 0xb8);
        if (lVar17 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_036beac8;
        if (lVar18 == 0) goto LAB_036bea38;
        thunk_FUN_03702968(lVar18,*(undefined8 *)(lVar17 + lVar24 + -0x1c),0);
        lVar18 = *plVar20;
        if (lVar18 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_036beac8;
        lVar17 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar17 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_036beac8;
        lVar18 = *(long *)(lVar18 + uVar25 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_036bea38;
        *(undefined8 *)(lVar18 + 0xd8) = *(undefined8 *)(lVar17 + lVar24 + -0x2c);
        thunk_FUN_01b4f09c();
        lVar18 = *plVar20;
        if (lVar18 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_036beac8;
        lVar17 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar17 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_036beac8;
        lVar18 = *(long *)(lVar18 + uVar25 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_036bea38;
        *(undefined8 *)(lVar18 + 0xe0) = *(undefined8 *)(lVar17 + lVar24 + -0x24);
        thunk_FUN_01b4f09c();
      }
      lVar18 = *unaff_x24;
      if (*(int *)(lVar18 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar18 = *unaff_x24;
      }
      lVar17 = **(long **)(lVar18 + 0xb8);
      if (lVar17 == 0) goto LAB_036bea38;
      if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_036beac8;
      if (*(char *)(lVar17 + lVar24 + -0x13) != '\0') {
        lVar19 = *plVar20;
        if (lVar19 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar19 + 0x18) <= uVar25) goto LAB_036beac8;
        lVar19 = *(long *)(lVar19 + uVar25 * 8 + 0x20);
        if (*(int *)(lVar18 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar17 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar17 == 0) goto LAB_036bea38;
        }
        if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_036beac8;
        if (lVar19 == 0) goto LAB_036bea38;
        FUN_037029c4(lVar19,*(undefined8 *)(lVar17 + lVar24 + -0x1c),0);
        lVar18 = *plVar20;
        if (lVar18 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_036beac8;
        lVar17 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar17 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_036beac8;
        lVar18 = *(long *)(lVar18 + uVar25 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_036bea38;
        *(undefined8 *)(lVar18 + 0x100) = *(undefined8 *)(lVar17 + lVar24 + -0xc);
        thunk_FUN_01b4f09c(lVar18 + 0x100);
      }
    }
    lVar18 = *unaff_x24;
    if (*(int *)(lVar18 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar18 = *unaff_x24;
    }
    lVar18 = **(long **)(lVar18 + 0xb8);
    if (lVar18 == 0) goto LAB_036bea38;
    if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_036beac8;
    if ((*unaff_x20 == 0) || (lVar17 = *(long *)(*unaff_x20 + 0x60), lVar17 == 0))
    goto LAB_036bea38;
    if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_036beac8;
    lVar19 = *(long *)(lVar17 + lVar13 + 0x30);
    iVar10 = *(int *)(lVar18 + lVar24);
    if (lVar19 == 0) {
      if (uVar25 == 0) {
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
        FUN_036f884c(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar10 + 1,0);
        memcpy(&stack0x00000090,&stack0x000000e0,0x50);
        if (*(int *)(lVar17 + 0x18) == 0) goto LAB_036beac8;
        memcpy((void *)(lVar17 + lVar13 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar17 + 0x20);
      }
      else {
        lVar18 = *plVar20;
        if (lVar18 == 0) goto LAB_036bea38;
        if (*(uint *)(lVar18 + 0x18) <= uVar25) goto LAB_036beac8;
        lVar18 = *(long *)(lVar18 + uVar25 * 8 + 0x20);
        if (lVar18 == 0) goto LAB_036bea38;
        uVar12 = FUN_03702ba4(lVar18,0);
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
        FUN_036f884c(&stack0x000000e0,uVar12,iVar10 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_036beac8;
        __dest = (void *)(lVar17 + lVar13 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      thunk_FUN_01b4f09c(__dest,0);
    }
    else {
      iVar11 = *(int *)(lVar19 + 0x18);
      if (iVar11 < iVar10 * 4) {
LAB_036be7d8:
        if (iVar10 < 0x401) {
          iVar10 = FUN_039155e8(iVar10 + 1,0);
        }
        else {
          iVar10 = iVar10 + 0x100;
        }
        if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__ +
                    0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_036f961c(lVar17 + lVar13 + 0x20,iVar10,0);
      }
      else if ((0 < iVar10) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
        iVar1 = iVar11 + 3;
        if (-1 < iVar11) {
          iVar1 = iVar11;
        }
        if (0x100 < (iVar1 >> 2) - iVar10) goto LAB_036be7d8;
      }
    }
    unaff_x24 = (long *)PTR_DAT_03d9c920;
    if ((*unaff_x20 == 0) || (lVar18 = *(long *)(*unaff_x20 + 0x60), lVar18 == 0))
    goto LAB_036bea38;
    lVar17 = *(long *)PTR_DAT_03d9c920;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar17 = *unaff_x24;
    }
    lVar17 = **(long **)(lVar17 + 0xb8);
    if (lVar17 == 0) goto LAB_036bea38;
    if ((*(uint *)(lVar17 + 0x18) <= uVar25) || (*(uint *)(lVar18 + 0x18) <= uVar25))
    goto LAB_036beac8;
    *(undefined8 *)(lVar18 + lVar13 + 0x68) = *(undefined8 *)(lVar17 + lVar24 + -0x1c);
    thunk_FUN_01b4f09c();
    uVar25 = uVar25 + 1;
    lVar13 = lVar13 + 0x50;
    lVar24 = lVar24 + 0x38;
    lVar27 = lVar27 + 8;
  } while (uVar9 != uVar25);
LAB_036be988:
  lVar13 = *plVar20;
  if (lVar13 != 0) {
    lVar24 = (-(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3) + 0x20;
    do {
      uVar9 = (uint)uVar14;
      if ((int)*(uint *)(lVar13 + 0x18) <= (int)uVar9) {
LAB_036be118:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar9) {
LAB_036beac8:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar12 = *(undefined8 *)(lVar13 + lVar24);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar14 = FUN_0391f968(uVar12,0,0);
      if ((uVar14 & 1) == 0) goto LAB_036be118;
      if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x60), lVar13 == 0)) break;
      if ((int)uVar9 < *(int *)(lVar13 + 0x18)) {
        lVar13 = *plVar20;
        if (lVar13 == 0) break;
        if (*(uint *)(lVar13 + 0x18) <= uVar9) goto LAB_036beac8;
        if ((*(long *)(lVar13 + lVar24) == 0) ||
           (lVar13 = FUN_039add2c(*(long *)(lVar13 + lVar24),0), lVar13 == 0)) break;
        FUN_03af8c9c(lVar13,0,0);
      }
      lVar13 = *plVar20;
      uVar14 = (ulong)(uVar9 + 1);
      lVar24 = lVar24 + 8;
    } while (lVar13 != 0);
  }
LAB_036bea38:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


