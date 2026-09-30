/*
FUNCTION_NAME: Unity.VisualScripting.TypeFilter$$.ctor
ENTRY_POINT: 036b6930
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


undefined4 Unity_VisualScripting_TypeFilter___ctor(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  void *__dest;
  uint uVar16;
  long lVar17;
  long lVar18;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  uint unaff_w22;
  long *plVar19;
  undefined4 unaff_w23;
  undefined8 uVar20;
  long *plVar21;
  long *unaff_x24;
  long *plVar22;
  long lVar23;
  uint unaff_w26;
  ulong uVar24;
  uint *puVar25;
  long *unaff_x29;
  long lVar26;
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
  uint uStack00000000000001a8;
  undefined1 uStack00000000000001ac;
  
code_r0x036b6930:
  uVar10 = FUN_036f77c8(param_1,param_2,unaff_w23,0);
  *unaff_x21 = uVar10;
  thunk_FUN_01b4f09c(unaff_x21,uVar10);
  lVar11 = *unaff_x24;
  uVar10 = *unaff_x21;
  lVar23 = *unaff_x29;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar11 = *unaff_x24;
  }
  uVar6 = FUN_036b0b30(uVar10,lVar23,*(long *)(lVar11 + 0xb8),
                       *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
  bVar4 = true;
  *(undefined4 *)(unaff_x19 + 0x120) = uVar6;
LAB_036b698c:
  if (*(int *)(*(long *)
                Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar12 = FUN_02fdb080(unaff_w26,0);
  plVar22 = (long *)PTR_DAT_03d9c8a0;
  if ((unaff_w26 != 0x200b) && ((uVar12 & 1) == 0)) {
    lVar11 = *unaff_x24;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar11);
      lVar11 = *unaff_x24;
    }
    lVar23 = **(long **)(lVar11 + 0xb8);
    if (lVar23 == 0) goto thunk_FUN_01b48178;
    uVar7 = *(uint *)(unaff_x19 + 0x120);
    if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_036b7478;
    if (*(int *)(lVar23 + (long)(int)uVar7 * 0x38 + 0x54) < 0x3fff) {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar11);
        lVar23 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar23 == 0) goto thunk_FUN_01b48178;
        uVar7 = *(uint *)(unaff_x19 + 0x120);
      }
    }
    else {
      uVar20 = *in_stack_00000028;
      uVar10 = thunk_FUN_01afaadc(*(undefined8 *)
                                   Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                                 );
      FUN_038ff0a8(uVar10,uVar20,0);
      lVar11 = *unaff_x24;
      lVar23 = *unaff_x29;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar11 = *unaff_x24;
      }
      uVar7 = FUN_036b0b30(uVar10,lVar23,*(long *)(lVar11 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 8));
      *(uint *)(unaff_x19 + 0x120) = uVar7;
      lVar23 = **(long **)(*unaff_x24 + 0xb8);
      if (lVar23 == 0) goto thunk_FUN_01b48178;
    }
    if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_036b7478;
    lVar23 = lVar23 + (long)(int)uVar7 * 0x38;
    *(int *)(lVar23 + 0x54) = *(int *)(lVar23 + 0x54) + 1;
  }
  if ((*unaff_x20 != 0) && (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 != 0)) {
    if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar11 + 0x18)) {
      *(undefined8 *)(lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x50) =
           *in_stack_00000028;
      thunk_FUN_01b4f09c();
      if ((*unaff_x20 != 0) && (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 != 0)) {
        if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar11 + 0x18)) {
          uVar7 = *(uint *)(unaff_x19 + 0x120);
          *(uint *)(lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x58) = uVar7;
          lVar11 = *unaff_x24;
          if (*(int *)(lVar11 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar11 = *unaff_x24;
            uVar7 = *(uint *)(unaff_x19 + 0x120);
          }
          lVar23 = **(long **)(lVar11 + 0xb8);
          if (lVar23 == 0) goto thunk_FUN_01b48178;
          if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_036b7478;
          *(bool *)(lVar23 + (long)(int)uVar7 * 0x38 + 0x41) = bVar4;
          if (bVar4) {
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar23 = **(long **)(*unaff_x24 + 0xb8);
              if (lVar23 == 0) goto thunk_FUN_01b48178;
              uVar7 = *(uint *)(unaff_x19 + 0x120);
            }
            if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_036b7478;
            puVar13 = (undefined8 *)(lVar23 + (long)(int)uVar7 * 0x38 + 0x48);
            *puVar13 = in_stack_00000018;
            thunk_FUN_01b4f09c(puVar13,in_stack_00000018);
            *(undefined8 *)(unaff_x19 + 0x100) = in_stack_00000010;
            thunk_FUN_01b4f09c(unaff_x29);
            *(undefined8 *)(unaff_x19 + 0x118) = in_stack_00000018;
            thunk_FUN_01b4f09c(in_stack_00000028,in_stack_00000018);
            *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
          }
          uVar7 = *(uint *)(unaff_x19 + 0x490);
LAB_036b6be0:
          do {
            *(uint *)(unaff_x19 + 0x490) = uVar7 + 1;
            do {
              uVar7 = *(uint *)(in_stack_00000038 + 0x18);
              unaff_w22 = unaff_w22 + 1;
              if ((int)uVar7 <= (int)unaff_w22) {
FUN_036b6c00:
                if (*(char *)(unaff_x19 + 0x3f5) != '\0') {
                  *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
                  goto LAB_036b6c0c;
                }
                lVar11 = *unaff_x20;
                if (lVar11 == 0) goto thunk_FUN_01b48178;
                *(int *)(lVar11 + 0x1c) = in_stack_00000020._4_4_;
                lVar23 = *unaff_x24;
                if (*(int *)(lVar23 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar23 = *unaff_x24;
                }
                lVar23 = *(long *)(*(long *)(lVar23 + 0xb8) + 8);
                if (lVar23 == 0) goto thunk_FUN_01b48178;
                uVar7 = FUN_02554fc4(lVar23,*(undefined8 *)PTR_DAT_03d9b168);
                *(uint *)(lVar11 + 0x34) = uVar7;
                if (*unaff_x20 == 0) goto thunk_FUN_01b48178;
                plVar19 = (long *)(*unaff_x20 + 0x60);
                lVar11 = *plVar19;
                if (lVar11 == 0) goto thunk_FUN_01b48178;
                uVar12 = (ulong)uVar7;
                if (*(int *)(lVar11 + 0x18) < (int)uVar7) {
                  if (*(int *)(*plVar22 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  FUN_01f52de4(plVar19,uVar12,0,*(undefined8 *)PTR_DAT_03d9cb38);
                }
                if (*(long *)(unaff_x19 + 0x708) == 0) goto thunk_FUN_01b48178;
                plVar19 = (long *)(unaff_x19 + 0x708);
                if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar7) {
                  uVar6 = FUN_039155e8(uVar7 + 1,0);
                  if (*(int *)(*plVar22 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*plVar22);
                  }
                  FUN_01f52b30(plVar19,uVar6,*(undefined8 *)PTR_DAT_03d9cb40);
                }
                if (*(char *)(unaff_x19 + 0x321) != '\0') {
                  if (*unaff_x20 == 0) goto thunk_FUN_01b48178;
                  plVar21 = (long *)(*unaff_x20 + 0x38);
                  lVar11 = *plVar21;
                  if (lVar11 == 0) goto thunk_FUN_01b48178;
                  iVar8 = *(int *)(unaff_x19 + 0x490);
                  if (0x100 < *(int *)(lVar11 + 0x18) - iVar8) {
                    iVar9 = 0x100;
                    if (0x100 < iVar8 + 1) {
                      iVar9 = iVar8 + 1;
                    }
                    if (*(int *)(*plVar22 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    FUN_01f52d44(plVar21,iVar9,1,*(undefined8 *)PTR_DAT_03d9cb30);
                    unaff_x24 = (long *)PTR_DAT_03d9c920;
                  }
                }
                if ((int)uVar7 < 1) goto LAB_036b73b0;
                lVar11 = 0;
                uVar24 = 0;
                lVar23 = 0x54;
                lVar26 = 0x20;
                goto LAB_036b6da0;
              }
              if (uVar7 <= unaff_w22) goto LAB_036b7478;
              puVar25 = (uint *)(in_stack_00000038 + (long)(int)unaff_w22 * 0xc + 0x20);
              if (*puVar25 == 0) goto FUN_036b6c00;
              if (*unaff_x20 == 0) goto thunk_FUN_01b48178;
              plVar19 = (long *)(*unaff_x20 + 0x38);
              lVar11 = *plVar19;
              iVar8 = *(int *)(unaff_x19 + 0x490);
              if ((lVar11 == 0) || (*(int *)(lVar11 + 0x18) <= iVar8)) {
                if (*(int *)(*plVar22 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                FUN_01f52d44(plVar19,iVar8 + 1,1,*(undefined8 *)PTR_DAT_03d9cb30);
                uVar7 = *(uint *)(in_stack_00000038 + 0x18);
              }
              if (uVar7 <= unaff_w22) goto LAB_036b7478;
              unaff_w26 = *puVar25;
              if ((unaff_w26 != 0x3c) || (*(char *)(unaff_x19 + 0x302) == '\0')) {
LAB_036b5ed4:
                in_stack_00000010 = *(undefined8 *)(unaff_x19 + 0x100);
                in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x118);
                in_stack_00000030._4_4_ = *(undefined4 *)(unaff_x19 + 0x120);
                if (*(int *)(unaff_x19 + 0x644) != 0) goto LAB_036b5fac;
                uVar7 = *(uint *)(unaff_x19 + 0x25c);
                if ((uVar7 >> 4 & 1) == 0) {
                  if ((uVar7 >> 3 & 1) == 0) {
                    if ((uVar7 >> 5 & 1) != 0) goto LAB_036b5f00;
                  }
                  else {
                    if (*(int *)(*(long *)
                                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar12 = FUN_02fdd92c(unaff_w26,0);
                    if ((uVar12 & 1) != 0) {
                      if (*(int *)(*(long *)
                                    Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                                  + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uVar7 = FUN_02fdddc0(unaff_w26,0);
                      goto LAB_036b5fa8;
                    }
                  }
                }
                else {
LAB_036b5f00:
                  if (*(int *)(*(long *)
                                Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                              + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar12 = FUN_02fdd9e8(unaff_w26,0);
                  if ((uVar12 & 1) != 0) {
                    if (*(int *)(*(long *)
                                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar7 = FUN_02fddc48(unaff_w26,0);
LAB_036b5fa8:
                    unaff_w26 = uVar7 & 0xffff;
                  }
                }
LAB_036b5fac:
                lVar11 = FUN_036f260c();
                if (lVar11 == 0) {
                  iVar8 = FUN_036fb88c();
                  if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) goto LAB_036b7478;
                  if (iVar8 == 0) {
                    uVar7 = 0x25a1;
                  }
                  else {
                    uVar7 = FUN_036fb88c(0);
                  }
                  *puVar25 = uVar7;
                  uVar10 = *(undefined8 *)(unaff_x19 + 0x100);
                  uVar6 = *(undefined4 *)(unaff_x19 + 0x25c);
                  uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                  if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  lVar11 = FUN_036d1ff4(uVar7,uVar10,1,uVar6,uVar2,(long)&stack0x000001a8 + 4,0);
                  if (lVar11 == 0) {
                    lVar11 = FUN_036fba04();
                    if (lVar11 != 0) {
                      lVar11 = FUN_036fba04(0);
                      if (lVar11 == 0) goto thunk_FUN_01b48178;
                      if (0 < *(int *)(lVar11 + 0x18)) {
                        uVar20 = *(undefined8 *)(unaff_x19 + 0x100);
                        uVar10 = FUN_036fba04(0);
                        uVar6 = *(undefined4 *)(unaff_x19 + 0x25c);
                        uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                        if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                          thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb18);
                        }
                        lVar11 = FUN_036d2514(uVar7,uVar20,uVar10,1,uVar6,uVar2,
                                              (long)&stack0x000001a8 + 4,0);
                        if (lVar11 != 0) goto LAB_036b605c;
                      }
                    }
                    uVar10 = FUN_036fb8e4(0);
                    if (*(int *)(*(long *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298(*(long *)
                                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                        );
                    }
                    uVar12 = FUN_0391f968(uVar10,0,0);
                    if ((uVar12 & 1) != 0) {
                      uVar10 = FUN_036fb8e4(0);
                      uVar6 = *(undefined4 *)(unaff_x19 + 0x25c);
                      uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                      if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                        thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb18);
                      }
                      lVar11 = FUN_036d1ff4(uVar7,uVar10,1,uVar6,uVar2,(long)&stack0x000001a8 + 4,0)
                      ;
                      if (lVar11 != 0) goto LAB_036b605c;
                    }
                    if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) goto LAB_036b7478;
                    *puVar25 = 0x20;
                    uVar10 = *(undefined8 *)(unaff_x19 + 0x100);
                    uVar6 = *(undefined4 *)(unaff_x19 + 0x25c);
                    uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                    if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar7 = 0x20;
                    lVar11 = FUN_036d1ff4(0x20,uVar10,1,uVar6,uVar2,(long)&stack0x000001a8 + 4,0);
                    if (lVar11 == 0) {
                      if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) goto LAB_036b7478;
                      *puVar25 = 3;
                      uVar10 = *(undefined8 *)(unaff_x19 + 0x100);
                      uVar6 = *(undefined4 *)(unaff_x19 + 0x25c);
                      uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                      if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uVar7 = 3;
                      lVar11 = FUN_036d1ff4(3,uVar10,1,uVar6,uVar2,(long)&stack0x000001a8 + 4,0);
                    }
                  }
LAB_036b605c:
                  uVar12 = FUN_036fb8c8(0);
                  if ((uVar12 & 1) == 0) {
                    plVar22 = (long *)FUN_01b47fd0(*(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                                  ,4);
                    if ((int)unaff_w26 < 0x10000) {
                      in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,unaff_w26);
                      lVar23 = thunk_FUN_01afa70c(*(undefined8 *)
                                                                                                      
                                                  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                                  ,&stack0x000000e0);
                      if (plVar22 == (long *)0x0) goto thunk_FUN_01b48178;
                      if ((lVar23 != 0) &&
                         (lVar26 = thunk_FUN_01afa9e0(lVar23,*(undefined8 *)(*plVar22 + 0x40)),
                         lVar26 == 0)) goto LAB_036b747c;
                      if ((int)plVar22[3] == 0) goto LAB_036b7478;
                      plVar22[4] = lVar23;
                      thunk_FUN_01b4f09c(plVar22 + 4,lVar23);
                      if (*(long *)(unaff_x19 + 0xf8) == 0) goto thunk_FUN_01b48178;
                      lVar23 = FUN_039230bc(*(long *)(unaff_x19 + 0xf8),0);
                      if ((lVar23 != 0) &&
                         (lVar26 = thunk_FUN_01afa9e0(lVar23,*(undefined8 *)(*plVar22 + 0x40)),
                         lVar26 == 0)) goto LAB_036b747c;
                      if (*(uint *)(plVar22 + 3) < 2) goto LAB_036b7478;
                      plVar22[5] = lVar23;
                      thunk_FUN_01b4f09c(plVar22 + 5,lVar23);
                      if (lVar11 == 0) goto thunk_FUN_01b48178;
                      in_stack_00000170 = *(undefined4 *)(lVar11 + 0x14);
                      lVar23 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&stack0x00000170
                                                 );
                      if ((lVar23 != 0) &&
                         (lVar26 = thunk_FUN_01afa9e0(lVar23,*(undefined8 *)(*plVar22 + 0x40)),
                         lVar26 == 0)) goto LAB_036b747c;
                      if (*(uint *)(plVar22 + 3) < 3) goto LAB_036b7478;
                      plVar22[6] = lVar23;
                      thunk_FUN_01b4f09c(plVar22 + 6,lVar23);
                      lVar23 = FUN_039230bc();
                      if ((lVar23 != 0) &&
                         (lVar26 = thunk_FUN_01afa9e0(lVar23,*(undefined8 *)(*plVar22 + 0x40)),
                         lVar26 == 0)) goto LAB_036b747c;
                      if (*(uint *)(plVar22 + 3) < 4) goto LAB_036b7478;
                      plVar22[7] = lVar23;
                      thunk_FUN_01b4f09c(plVar22 + 7,lVar23);
                      puVar13 = (undefined8 *)PTR_DAT_03d9cb50;
                    }
                    else {
                      in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,unaff_w26);
                      lVar23 = thunk_FUN_01afa70c(*(undefined8 *)
                                                                                                      
                                                  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                                  ,&stack0x000000e0);
                      if (plVar22 == (long *)0x0) goto thunk_FUN_01b48178;
                      if ((lVar23 != 0) &&
                         (lVar26 = thunk_FUN_01afa9e0(lVar23,*(undefined8 *)(*plVar22 + 0x40)),
                         lVar26 == 0)) goto LAB_036b747c;
                      if ((int)plVar22[3] == 0) goto LAB_036b7478;
                      plVar22[4] = lVar23;
                      thunk_FUN_01b4f09c(plVar22 + 4,lVar23);
                      if (*(long *)(unaff_x19 + 0xf8) == 0) goto thunk_FUN_01b48178;
                      lVar23 = FUN_039230bc(*(long *)(unaff_x19 + 0xf8),0);
                      if ((lVar23 != 0) &&
                         (lVar26 = thunk_FUN_01afa9e0(lVar23,*(undefined8 *)(*plVar22 + 0x40)),
                         lVar26 == 0)) goto LAB_036b747c;
                      if (*(uint *)(plVar22 + 3) < 2) goto LAB_036b7478;
                      plVar22[5] = lVar23;
                      thunk_FUN_01b4f09c(plVar22 + 5,lVar23);
                      if (lVar11 == 0) goto thunk_FUN_01b48178;
                      in_stack_00000170 = *(undefined4 *)(lVar11 + 0x14);
                      lVar23 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&stack0x00000170
                                                 );
                      if ((lVar23 != 0) &&
                         (lVar26 = thunk_FUN_01afa9e0(lVar23,*(undefined8 *)(*plVar22 + 0x40)),
                         lVar26 == 0)) goto LAB_036b747c;
                      if (*(uint *)(plVar22 + 3) < 3) goto LAB_036b7478;
                      plVar22[6] = lVar23;
                      thunk_FUN_01b4f09c(plVar22 + 6,lVar23);
                      lVar23 = FUN_039230bc();
                      if ((lVar23 != 0) &&
                         (lVar26 = thunk_FUN_01afa9e0(lVar23,*(undefined8 *)(*plVar22 + 0x40)),
                         lVar26 == 0)) goto LAB_036b747c;
                      if (*(uint *)(plVar22 + 3) < 4) goto LAB_036b7478;
                      plVar22[7] = lVar23;
                      thunk_FUN_01b4f09c(plVar22 + 7,lVar23);
                      puVar13 = (undefined8 *)PTR_DAT_03d9cb48;
                    }
                    uVar10 = FUN_02ee71a8(*puVar13,plVar22,0);
                    if (*(int *)(*(long *)
                                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    FUN_038f3474(uVar10);
                    unaff_w26 = uVar7;
                  }
                  else {
                    unaff_w26 = uVar7;
                    if (lVar11 == 0) goto thunk_FUN_01b48178;
                  }
                }
                if (*(char *)(lVar11 + 0x10) == '\x01') {
                  if (*(long *)(lVar11 + 0x18) == 0) goto thunk_FUN_01b48178;
                  iVar8 = FUN_036c1bb4(*(long *)(lVar11 + 0x18),0);
                  if (*unaff_x29 == 0) goto thunk_FUN_01b48178;
                  iVar9 = FUN_036c1bb4(*unaff_x29,0);
                  if (iVar8 == iVar9) goto LAB_036b6570;
                  plVar22 = *(long **)(lVar11 + 0x18);
                  if (plVar22 == (long *)0x0) {
                    plVar22 = (long *)0x0;
                    *unaff_x29 = 0;
                  }
                  else {
                    lVar23 = *(long *)StringLiteral_444;
                    bVar3 = *(byte *)(lVar23 + 0x130);
                    if (*(byte *)(*plVar22 + 0x130) < bVar3) {
                      plVar19 = (long *)0x0;
                    }
                    else {
                      plVar19 = plVar22;
                      if (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar3 * 8 + -8) != lVar23) {
                        plVar19 = (long *)0x0;
                      }
                    }
                    *unaff_x29 = (long)plVar19;
                    if (*(byte *)(*plVar22 + 0x130) < bVar3) {
                      plVar22 = (long *)0x0;
                    }
                    else if (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar3 * 8 + -8) != lVar23)
                    {
                      plVar22 = (long *)0x0;
                    }
                  }
                  thunk_FUN_01b4f09c(unaff_x29,plVar22);
                  bVar4 = true;
                }
                else {
LAB_036b6570:
                  bVar4 = false;
                }
                if ((*unaff_x20 == 0) || (lVar23 = *(long *)(*unaff_x20 + 0x38), lVar23 == 0))
                goto thunk_FUN_01b48178;
                if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036b7478;
                lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                plVar22 = (long *)(lVar23 + 0x30);
                *plVar22 = lVar11;
                *(undefined4 *)(lVar23 + 0x2c) = 0;
                thunk_FUN_01b4f09c(plVar22,lVar11);
                if ((*unaff_x20 == 0) || (lVar23 = *(long *)(*unaff_x20 + 0x38), lVar23 == 0))
                goto thunk_FUN_01b48178;
                uVar7 = *(uint *)(unaff_x19 + 0x490);
                if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_036b7478;
                lVar26 = lVar23 + (long)(int)uVar7 * 0x178;
                *(short *)(lVar26 + 0x20) = (short)unaff_w26;
                *(undefined1 *)(lVar26 + 0x5c) = uStack00000000000001ac;
                if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) goto LAB_036b7478;
                lVar23 = lVar23 + (long)(int)uVar7 * 0x178;
                *(undefined8 *)(lVar23 + 0x24) =
                     *(undefined8 *)(in_stack_00000038 + (long)(int)unaff_w22 * 0xc + 0x24);
                *(long *)(lVar23 + 0x38) = *unaff_x29;
                thunk_FUN_01b4f09c();
                unaff_x24 = (long *)PTR_DAT_03d9c920;
                if (*(char *)(lVar11 + 0x10) == '\x02') {
                  plVar22 = *(long **)(lVar11 + 0x18);
                  if (plVar22 == (long *)0x0) goto thunk_FUN_01b48178;
                  bVar3 = *(byte *)(*(long *)PTR_DAT_03d9cb28 + 0x130);
                  if ((*(byte *)(*plVar22 + 0x130) < bVar3) ||
                     (*(long *)(*(long *)(*plVar22 + 200) + (ulong)bVar3 * 8 + -8) !=
                      *(long *)PTR_DAT_03d9cb28)) goto thunk_FUN_01b48178;
                  lVar26 = plVar22[4];
                  lVar23 = *(long *)PTR_DAT_03d9c920;
                  if (*(int *)(lVar23 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    lVar23 = *unaff_x24;
                  }
                  uVar7 = FUN_036b0d60(lVar26,plVar22,*(long *)(lVar23 + 0xb8),
                                       *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 8));
                  *(uint *)(unaff_x19 + 0x120) = uVar7;
                  lVar23 = **(long **)(*unaff_x24 + 0xb8);
                  if (lVar23 == 0) goto thunk_FUN_01b48178;
                  if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_036b7478;
                  lVar23 = lVar23 + (long)(int)uVar7 * 0x38;
                  *(int *)(lVar23 + 0x54) = *(int *)(lVar23 + 0x54) + 1;
                  if ((*unaff_x20 == 0) || (lVar23 = *(long *)(*unaff_x20 + 0x38), lVar23 == 0))
                  goto thunk_FUN_01b48178;
                  if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036b7478;
                  lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                  *(undefined4 *)(lVar23 + 0x2c) = 1;
                  uVar6 = *(undefined4 *)(unaff_x19 + 0x120);
                  *(undefined8 *)(lVar23 + 0x40) = plVar22;
                  *(undefined4 *)(lVar23 + 0x58) = uVar6;
                  thunk_FUN_01b4f09c((undefined8 *)(lVar23 + 0x40),plVar22);
                  unaff_x24 = (long *)PTR_DAT_03d9c920;
                  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                     (lVar23 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar23 == 0))
                  goto thunk_FUN_01b48178;
                  uVar7 = *(uint *)(unaff_x19 + 0x490);
                  if (*(uint *)(lVar23 + 0x18) <= uVar7) goto LAB_036b7478;
                  *(undefined4 *)(lVar23 + (long)(int)uVar7 * 0x178 + 0x48) =
                       *(undefined4 *)(lVar11 + 0x28);
                  *(undefined4 *)(unaff_x19 + 0x644) = 0;
                  *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
                  in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
                  plVar22 = (long *)PTR_DAT_03d9c8a0;
                  goto LAB_036b6be0;
                }
                if (bVar4) {
                  if (*unaff_x29 == 0) goto thunk_FUN_01b48178;
                  iVar8 = FUN_036c1bb4(*unaff_x29,0);
                  if (*(long *)(unaff_x19 + 0xf8) == 0) goto thunk_FUN_01b48178;
                  iVar9 = FUN_036c1bb4(*(long *)(unaff_x19 + 0xf8),0);
                  if (iVar8 != iVar9) {
                    uVar12 = FUN_036fba20(0);
                    if ((uVar12 & 1) == 0) {
                      if (*unaff_x29 == 0) goto thunk_FUN_01b48178;
                      uVar10 = *(undefined8 *)(*unaff_x29 + 0x20);
                    }
                    else {
                      if (*unaff_x29 == 0) goto thunk_FUN_01b48178;
                      uVar10 = *in_stack_00000028;
                      uVar20 = *(undefined8 *)(*unaff_x29 + 0x20);
                      if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uVar10 = FUN_036f7d2c(uVar10,uVar20,0);
                    }
                    *in_stack_00000028 = uVar10;
                    thunk_FUN_01b4f09c(in_stack_00000028);
                    lVar23 = *unaff_x24;
                    uVar10 = *in_stack_00000028;
                    lVar26 = *unaff_x29;
                    if (*(int *)(lVar23 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                      lVar23 = *unaff_x24;
                    }
                    uVar6 = FUN_036b0b30(uVar10,lVar26,*(long *)(lVar23 + 0xb8),
                                         *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 8));
                    *(undefined4 *)(unaff_x19 + 0x120) = uVar6;
                  }
                }
                if (*(long *)(lVar11 + 0x20) == 0) goto thunk_FUN_01b48178;
                iVar8 = FUN_0396b18c(*(long *)(lVar11 + 0x20),0);
                if (iVar8 < 1) goto LAB_036b698c;
                if (*(long *)(lVar11 + 0x20) == 0) goto thunk_FUN_01b48178;
                param_1 = *unaff_x29;
                param_2 = *in_stack_00000028;
                unaff_w23 = FUN_0396b18c(*(long *)(lVar11 + 0x20),0);
                unaff_x21 = in_stack_00000028;
                if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb20);
                }
                goto code_r0x036b6930;
              }
              uVar6 = *(undefined4 *)(unaff_x19 + 0x120);
              uVar12 = FUN_036e7318();
              uVar16 = uStack00000000000001a8;
              if ((uVar12 & 1) == 0) goto LAB_036b5ed4;
              if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) goto LAB_036b7478;
              iVar8 = *(int *)(in_stack_00000038 + (long)(int)unaff_w22 * 0xc + 0x24);
              if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
                *(undefined1 *)(unaff_x19 + 0x26a) = 1;
              }
              puVar5 = PTR_DAT_03d9c920;
              unaff_x24 = (long *)PTR_DAT_03d9c920;
              unaff_w22 = uStack00000000000001a8;
            } while (*(int *)(unaff_x19 + 0x644) != 1);
            lVar11 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar11 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar11 = *(long *)puVar5;
            }
            lVar11 = **(long **)(lVar11 + 0xb8);
            if (lVar11 == 0) goto thunk_FUN_01b48178;
            if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) break;
            lVar11 = lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
            *(int *)(lVar11 + 0x54) = *(int *)(lVar11 + 0x54) + 1;
            if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
            goto thunk_FUN_01b48178;
            if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
            uVar2 = *(undefined4 *)(unaff_x19 + 0x6a4);
            lVar11 = lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
            *(short *)(lVar11 + 0x20) = (short)uVar2 + -0x2000;
            *(undefined4 *)(lVar11 + 0x48) = uVar2;
            *(long *)(lVar11 + 0x38) = *unaff_x29;
            thunk_FUN_01b4f09c();
            if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
            goto thunk_FUN_01b48178;
            if (*(uint *)(lVar11 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
            *(undefined8 *)(lVar11 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x40) =
                 *(undefined8 *)(unaff_x19 + 0x698);
            thunk_FUN_01b4f09c();
            if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
            goto thunk_FUN_01b48178;
            uVar7 = *(uint *)(unaff_x19 + 0x490);
            if (*(uint *)(lVar11 + 0x18) <= uVar7) break;
            *(undefined4 *)(lVar11 + (long)(int)uVar7 * 0x178 + 0x58) =
                 *(undefined4 *)(unaff_x19 + 0x120);
            if ((*(long *)(unaff_x19 + 0x698) == 0) ||
               (lVar23 = FUN_036fe7c0(*(long *)(unaff_x19 + 0x698),0), lVar23 == 0))
            goto thunk_FUN_01b48178;
            uVar10 = FUN_02b59714(lVar23,*(undefined4 *)(unaff_x19 + 0x6a4),
                                  *(undefined8 *)PTR_DAT_03d9c878);
            if (*(uint *)(lVar11 + 0x18) <= uVar7) break;
            *(undefined8 *)(lVar11 + (long)(int)uVar7 * 0x178 + 0x30) = uVar10;
            thunk_FUN_01b4f09c();
            if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x38), lVar11 == 0))
            goto thunk_FUN_01b48178;
            uVar7 = *(uint *)(unaff_x19 + 0x490);
            if (*(uint *)(lVar11 + 0x18) <= uVar7) break;
            uVar2 = *(undefined4 *)(unaff_x19 + 0x644);
            lVar23 = lVar11 + (long)(int)uVar7 * 0x178;
            *(int *)(lVar23 + 0x24) = iVar8;
            *(undefined4 *)(lVar23 + 0x2c) = uVar2;
            if (*(uint *)(in_stack_00000038 + 0x18) <= uVar16) break;
            *(int *)(lVar11 + (long)(int)uVar7 * 0x178 + 0x28) =
                 (*(int *)(in_stack_00000038 + (long)(int)uVar16 * 0xc + 0x24) - iVar8) + 1;
            *(undefined4 *)(unaff_x19 + 0x644) = 0;
            *(undefined4 *)(unaff_x19 + 0x120) = uVar6;
            in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
            unaff_x24 = (long *)PTR_DAT_03d9c920;
            unaff_w22 = uVar16;
          } while( true );
        }
        goto LAB_036b7478;
      }
      goto thunk_FUN_01b48178;
    }
    goto LAB_036b7478;
  }
  goto thunk_FUN_01b48178;
LAB_036b6da0:
  do {
    if (uVar24 != 0) {
      lVar17 = *plVar19;
      if (lVar17 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar17 + 0x18) <= uVar24) goto LAB_036b7478;
      uVar10 = *(undefined8 *)(lVar17 + uVar24 * 8 + 0x20);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar14 = FUN_03922f24(uVar10,0,0);
      if ((uVar14 & 1) != 0) {
        lVar17 = *unaff_x24;
        plVar22 = (long *)*plVar19;
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar17 = *unaff_x24;
        }
        lVar17 = **(long **)(lVar17 + 0xb8);
        if (lVar17 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar17 + 0x18) <= uVar24) goto LAB_036b7478;
        lVar17 = lVar17 + lVar23;
        in_stack_00000160 = *(undefined8 *)(lVar17 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar17 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar17 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar17 + -0x1c);
        in_stack_00000140 = *(undefined8 *)(lVar17 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar17 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar17 + -0x34);
        lVar17 = FUN_03701aec();
        if (plVar22 == (long *)0x0) goto thunk_FUN_01b48178;
        if ((lVar17 != 0) &&
           (lVar15 = thunk_FUN_01afa9e0(lVar17,*(undefined8 *)(*plVar22 + 0x40)), lVar15 == 0)) {
LAB_036b747c:
          uVar10 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
          FUN_01b48050(uVar10,0);
        }
        if (*(uint *)(plVar22 + 3) <= uVar24) goto LAB_036b7478;
        plVar22[uVar24 + 4] = lVar17;
        thunk_FUN_01b4f09c((long)plVar22 + lVar26,lVar17);
        unaff_x24 = (long *)PTR_DAT_03d9c920;
        if ((*unaff_x20 == 0) || (lVar17 = *(long *)(*unaff_x20 + 0x60), lVar17 == 0))
        goto thunk_FUN_01b48178;
        if (*(uint *)(lVar17 + 0x18) <= uVar24) goto LAB_036b7478;
        puVar13 = (undefined8 *)(lVar17 + lVar11 + 0x30);
        *puVar13 = 0;
        thunk_FUN_01b4f09c(puVar13,0);
      }
      lVar17 = *plVar19;
      if (lVar17 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar17 + 0x18) <= uVar24) goto LAB_036b7478;
      lVar17 = *(long *)(lVar17 + uVar24 * 8 + 0x20);
      if (lVar17 == 0) goto thunk_FUN_01b48178;
      uVar10 = *(undefined8 *)(lVar17 + 0x38);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar14 = FUN_03922f24(uVar10,0,0);
      if ((uVar14 & 1) == 0) {
        lVar17 = *plVar19;
        if (lVar17 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar17 + 0x18) <= uVar24) goto LAB_036b7478;
        lVar17 = *(long *)(lVar17 + uVar24 * 8 + 0x20);
        if ((lVar17 == 0) || (lVar17 = *(long *)(lVar17 + 0x38), lVar17 == 0))
        goto thunk_FUN_01b48178;
        iVar8 = FUN_03922ce0(lVar17,0);
        lVar17 = *unaff_x24;
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar17);
          lVar17 = *unaff_x24;
        }
        lVar17 = **(long **)(lVar17 + 0xb8);
        if (lVar17 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar17 + 0x18) <= uVar24) goto LAB_036b7478;
        lVar17 = *(long *)(lVar17 + lVar23 + -0x1c);
        if (lVar17 == 0) goto thunk_FUN_01b48178;
        iVar9 = FUN_03922ce0(lVar17,0);
        if (iVar8 != iVar9) goto LAB_036b6f94;
      }
      else {
LAB_036b6f94:
        lVar17 = *plVar19;
        if (lVar17 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar17 + 0x18) <= uVar24) goto LAB_036b7478;
        lVar15 = *unaff_x24;
        lVar17 = *(long *)(lVar17 + uVar24 * 8 + 0x20);
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar15 = *unaff_x24;
        }
        lVar15 = **(long **)(lVar15 + 0xb8);
        if (lVar15 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_036b7478;
        if (lVar17 == 0) goto thunk_FUN_01b48178;
        thunk_FUN_03701608(lVar17,*(undefined8 *)(lVar15 + lVar23 + -0x1c),0);
        lVar17 = *plVar19;
        if (lVar17 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar17 + 0x18) <= uVar24) goto LAB_036b7478;
        lVar15 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar15 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_036b7478;
        lVar17 = *(long *)(lVar17 + uVar24 * 8 + 0x20);
        if (lVar17 == 0) goto thunk_FUN_01b48178;
        *(undefined8 *)(lVar17 + 0x20) = *(undefined8 *)(lVar15 + lVar23 + -0x2c);
        thunk_FUN_01b4f09c();
        lVar17 = *plVar19;
        if (lVar17 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar17 + 0x18) <= uVar24) goto LAB_036b7478;
        lVar15 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar15 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_036b7478;
        lVar17 = *(long *)(lVar17 + uVar24 * 8 + 0x20);
        if (lVar17 == 0) goto thunk_FUN_01b48178;
        *(undefined8 *)(lVar17 + 0x28) = *(undefined8 *)(lVar15 + lVar23 + -0x24);
        thunk_FUN_01b4f09c();
      }
      lVar17 = *unaff_x24;
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar17 = *unaff_x24;
      }
      lVar15 = **(long **)(lVar17 + 0xb8);
      if (lVar15 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_036b7478;
      if (*(char *)(lVar15 + lVar23 + -0x13) != '\0') {
        lVar18 = *plVar19;
        if (lVar18 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar18 + 0x18) <= uVar24) goto LAB_036b7478;
        lVar18 = *(long *)(lVar18 + uVar24 * 8 + 0x20);
        if (*(int *)(lVar17 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar15 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar15 == 0) goto thunk_FUN_01b48178;
        }
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_036b7478;
        if (lVar18 == 0) goto thunk_FUN_01b48178;
        FUN_03701638(lVar18,*(undefined8 *)(lVar15 + lVar23 + -0x1c),0);
        lVar17 = *plVar19;
        if (lVar17 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar17 + 0x18) <= uVar24) goto LAB_036b7478;
        lVar15 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar15 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_036b7478;
        lVar17 = *(long *)(lVar17 + uVar24 * 8 + 0x20);
        if (lVar17 == 0) goto thunk_FUN_01b48178;
        *(undefined8 *)(lVar17 + 0x48) = *(undefined8 *)(lVar15 + lVar23 + -0xc);
        thunk_FUN_01b4f09c();
      }
    }
    lVar17 = *unaff_x24;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar17 = *unaff_x24;
    }
    lVar17 = **(long **)(lVar17 + 0xb8);
    if (lVar17 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar17 + 0x18) <= uVar24) goto LAB_036b7478;
    if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x60), lVar15 == 0))
    goto thunk_FUN_01b48178;
    if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_036b7478;
    lVar18 = *(long *)(lVar15 + lVar11 + 0x30);
    iVar8 = *(int *)(lVar17 + lVar23);
    if (lVar18 == 0) {
      if (uVar24 == 0) {
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
        if (*(int *)(lVar15 + 0x18) == 0) goto LAB_036b7478;
        memcpy((void *)(lVar15 + lVar11 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar15 + 0x20);
      }
      else {
        lVar17 = *plVar19;
        if (lVar17 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar17 + 0x18) <= uVar24) goto LAB_036b7478;
        lVar17 = *(long *)(lVar17 + uVar24 * 8 + 0x20);
        if (lVar17 == 0) goto thunk_FUN_01b48178;
        uVar10 = FUN_03701980(lVar17,0);
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
        FUN_036f884c(&stack0x000000e0,uVar10,iVar8 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar15 + 0x18) <= uVar24) goto LAB_036b7478;
        __dest = (void *)(lVar15 + lVar11 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      thunk_FUN_01b4f09c(__dest,0);
    }
    else {
      iVar9 = *(int *)(lVar18 + 0x18);
      if (iVar9 < iVar8 * 4) {
LAB_036b7200:
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
        FUN_036f961c(lVar15 + lVar11 + 0x20,iVar8,0);
      }
      else if ((0 < iVar8) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
        iVar1 = iVar9 + 3;
        if (-1 < iVar9) {
          iVar1 = iVar9;
        }
        if (0x100 < (iVar1 >> 2) - iVar8) goto LAB_036b7200;
      }
    }
    unaff_x24 = (long *)PTR_DAT_03d9c920;
    if ((*unaff_x20 == 0) || (lVar17 = *(long *)(*unaff_x20 + 0x60), lVar17 == 0))
    goto thunk_FUN_01b48178;
    lVar15 = *(long *)PTR_DAT_03d9c920;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar15 = *unaff_x24;
    }
    lVar15 = **(long **)(lVar15 + 0xb8);
    if (lVar15 == 0) goto thunk_FUN_01b48178;
    if ((*(uint *)(lVar15 + 0x18) <= uVar24) || (*(uint *)(lVar17 + 0x18) <= uVar24))
    goto LAB_036b7478;
    *(undefined8 *)(lVar17 + lVar11 + 0x68) = *(undefined8 *)(lVar15 + lVar23 + -0x1c);
    thunk_FUN_01b4f09c();
    uVar24 = uVar24 + 1;
    lVar11 = lVar11 + 0x50;
    lVar23 = lVar23 + 0x38;
    lVar26 = lVar26 + 8;
  } while (uVar7 != uVar24);
LAB_036b73b0:
  puVar5 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
  lVar11 = *plVar19;
  if (lVar11 != 0) {
    lVar23 = (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar12 << 3) + 0x20;
    lVar26 = (long)(int)uVar7 * 0x50 + 0x20;
    do {
      uVar7 = (uint)uVar12;
      if ((int)*(uint *)(lVar11 + 0x18) <= (int)uVar7) {
LAB_036b6c0c:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar7) {
LAB_036b7478:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar10 = *(undefined8 *)(lVar11 + lVar23);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar12 = FUN_0391f968(uVar10,0,0);
      if ((uVar12 & 1) == 0) goto LAB_036b6c0c;
      if ((*unaff_x20 == 0) || (lVar11 = *(long *)(*unaff_x20 + 0x60), lVar11 == 0)) break;
      uVar16 = *(uint *)(lVar11 + 0x18);
      if ((int)uVar7 < (int)uVar16) {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          uVar16 = *(uint *)(lVar11 + 0x18);
        }
        if (uVar16 <= uVar7) goto LAB_036b7478;
        FUN_036fa5b4(lVar11 + lVar26,0,1,0);
      }
      lVar11 = *plVar19;
      uVar12 = (ulong)(uVar7 + 1);
      lVar26 = lVar26 + 0x50;
      lVar23 = lVar23 + 8;
    } while (lVar11 != 0);
  }
thunk_FUN_01b48178:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


