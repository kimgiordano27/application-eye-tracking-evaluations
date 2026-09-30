/*
FUNCTION_NAME: Unity.VisualScripting.RuntimeCodebase.<GetAssemblyAttributes>d__15$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 036b6870
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
Unity_VisualScripting_RuntimeCodebase_<GetAssemblyAttributes>d__15__System_Collections_IEnumerator_get_Current
          (undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  void *__dest;
  uint uVar14;
  long lVar15;
  long lVar16;
  long unaff_x19;
  long *unaff_x20;
  uint unaff_w22;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long *plVar20;
  long *unaff_x24;
  long *plVar21;
  long lVar22;
  uint unaff_w26;
  ulong uVar23;
  long unaff_x27;
  int unaff_w28;
  uint *puVar24;
  long *unaff_x29;
  long lVar25;
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
  
FUN_036b688c:
  *in_stack_00000028 = param_1;
  thunk_FUN_01b4f09c(in_stack_00000028);
  lVar9 = *unaff_x24;
  uVar18 = *in_stack_00000028;
  lVar22 = *unaff_x29;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar9 = *unaff_x24;
  }
  uVar5 = FUN_036b0b30(uVar18,lVar22,*(long *)(lVar9 + 0xb8),
                       *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8));
  *(undefined4 *)(unaff_x19 + 0x120) = uVar5;
LAB_036b68d4:
  if (*(long *)(unaff_x27 + 0x20) != 0) {
    iVar6 = FUN_0396b18c(*(long *)(unaff_x27 + 0x20),0);
    if (0 < iVar6) {
      if (*(long *)(unaff_x27 + 0x20) == 0) goto thunk_FUN_01b48178;
      lVar9 = *unaff_x29;
      uVar18 = *in_stack_00000028;
      uVar5 = FUN_0396b18c(*(long *)(unaff_x27 + 0x20),0);
      if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb20);
      }
      uVar18 = FUN_036f77c8(lVar9,uVar18,uVar5,0);
      *in_stack_00000028 = uVar18;
      thunk_FUN_01b4f09c(in_stack_00000028,uVar18);
      lVar9 = *unaff_x24;
      uVar18 = *in_stack_00000028;
      lVar22 = *unaff_x29;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar9 = *unaff_x24;
      }
      uVar5 = FUN_036b0b30(uVar18,lVar22,*(long *)(lVar9 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8));
      unaff_w28 = 1;
      *(undefined4 *)(unaff_x19 + 0x120) = uVar5;
    }
    if (*(int *)(*(long *)
                  Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar10 = FUN_02fdb080(unaff_w26,0);
    plVar21 = (long *)PTR_DAT_03d9c8a0;
    if ((unaff_w26 != 0x200b) && ((uVar10 & 1) == 0)) {
      lVar9 = *unaff_x24;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_01ac7298(lVar9);
        lVar9 = *unaff_x24;
      }
      lVar22 = **(long **)(lVar9 + 0xb8);
      if (lVar22 == 0) goto thunk_FUN_01b48178;
      uVar7 = *(uint *)(unaff_x19 + 0x120);
      if (*(uint *)(lVar22 + 0x18) <= uVar7) goto LAB_036b7478;
      if (*(int *)(lVar22 + (long)(int)uVar7 * 0x38 + 0x54) < 0x3fff) {
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar9);
          lVar22 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar22 == 0) goto thunk_FUN_01b48178;
          uVar7 = *(uint *)(unaff_x19 + 0x120);
        }
      }
      else {
        uVar19 = *in_stack_00000028;
        uVar18 = thunk_FUN_01afaadc(*(undefined8 *)
                                     Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                                   );
        FUN_038ff0a8(uVar18,uVar19,0);
        lVar9 = *unaff_x24;
        lVar22 = *unaff_x29;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar9 = *unaff_x24;
        }
        uVar7 = FUN_036b0b30(uVar18,lVar22,*(long *)(lVar9 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8));
        *(uint *)(unaff_x19 + 0x120) = uVar7;
        lVar22 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar22 == 0) goto thunk_FUN_01b48178;
      }
      if (*(uint *)(lVar22 + 0x18) <= uVar7) goto LAB_036b7478;
      lVar22 = lVar22 + (long)(int)uVar7 * 0x38;
      *(int *)(lVar22 + 0x54) = *(int *)(lVar22 + 0x54) + 1;
    }
    if ((*unaff_x20 != 0) && (lVar9 = *(long *)(*unaff_x20 + 0x38), lVar9 != 0)) {
      if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar9 + 0x18)) {
        *(undefined8 *)(lVar9 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x50) =
             *in_stack_00000028;
        thunk_FUN_01b4f09c();
        if ((*unaff_x20 != 0) && (lVar9 = *(long *)(*unaff_x20 + 0x38), lVar9 != 0)) {
          if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar9 + 0x18)) {
            uVar7 = *(uint *)(unaff_x19 + 0x120);
            *(uint *)(lVar9 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x58) = uVar7;
            lVar9 = *unaff_x24;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar9 = *unaff_x24;
              uVar7 = *(uint *)(unaff_x19 + 0x120);
            }
            lVar22 = **(long **)(lVar9 + 0xb8);
            if (lVar22 == 0) goto thunk_FUN_01b48178;
            if (*(uint *)(lVar22 + 0x18) <= uVar7) goto LAB_036b7478;
            *(char *)(lVar22 + (long)(int)uVar7 * 0x38 + 0x41) = (char)unaff_w28;
            if (unaff_w28 != 0) {
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar22 = **(long **)(*unaff_x24 + 0xb8);
                if (lVar22 == 0) goto thunk_FUN_01b48178;
                uVar7 = *(uint *)(unaff_x19 + 0x120);
              }
              if (*(uint *)(lVar22 + 0x18) <= uVar7) goto LAB_036b7478;
              puVar11 = (undefined8 *)(lVar22 + (long)(int)uVar7 * 0x38 + 0x48);
              *puVar11 = in_stack_00000018;
              thunk_FUN_01b4f09c(puVar11,in_stack_00000018);
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
                  lVar9 = *unaff_x20;
                  if (lVar9 == 0) goto thunk_FUN_01b48178;
                  *(int *)(lVar9 + 0x1c) = in_stack_00000020._4_4_;
                  lVar22 = *unaff_x24;
                  if (*(int *)(lVar22 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    lVar22 = *unaff_x24;
                  }
                  lVar22 = *(long *)(*(long *)(lVar22 + 0xb8) + 8);
                  if (lVar22 == 0) goto thunk_FUN_01b48178;
                  uVar7 = FUN_02554fc4(lVar22,*(undefined8 *)PTR_DAT_03d9b168);
                  *(uint *)(lVar9 + 0x34) = uVar7;
                  if (*unaff_x20 == 0) goto thunk_FUN_01b48178;
                  plVar17 = (long *)(*unaff_x20 + 0x60);
                  lVar9 = *plVar17;
                  if (lVar9 == 0) goto thunk_FUN_01b48178;
                  uVar10 = (ulong)uVar7;
                  if (*(int *)(lVar9 + 0x18) < (int)uVar7) {
                    if (*(int *)(*plVar21 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    FUN_01f52de4(plVar17,uVar10,0,*(undefined8 *)PTR_DAT_03d9cb38);
                  }
                  if (*(long *)(unaff_x19 + 0x708) == 0) goto thunk_FUN_01b48178;
                  plVar17 = (long *)(unaff_x19 + 0x708);
                  if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar7) {
                    uVar5 = FUN_039155e8(uVar7 + 1,0);
                    if (*(int *)(*plVar21 + 0xe0) == 0) {
                      thunk_FUN_01ac7298(*plVar21);
                    }
                    FUN_01f52b30(plVar17,uVar5,*(undefined8 *)PTR_DAT_03d9cb40);
                  }
                  if (*(char *)(unaff_x19 + 0x321) != '\0') {
                    if (*unaff_x20 == 0) goto thunk_FUN_01b48178;
                    plVar20 = (long *)(*unaff_x20 + 0x38);
                    lVar9 = *plVar20;
                    if (lVar9 == 0) goto thunk_FUN_01b48178;
                    iVar6 = *(int *)(unaff_x19 + 0x490);
                    if (0x100 < *(int *)(lVar9 + 0x18) - iVar6) {
                      iVar8 = 0x100;
                      if (0x100 < iVar6 + 1) {
                        iVar8 = iVar6 + 1;
                      }
                      if (*(int *)(*plVar21 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      FUN_01f52d44(plVar20,iVar8,1,*(undefined8 *)PTR_DAT_03d9cb30);
                      unaff_x24 = (long *)PTR_DAT_03d9c920;
                    }
                  }
                  if ((int)uVar7 < 1) goto LAB_036b73b0;
                  lVar9 = 0;
                  uVar23 = 0;
                  lVar22 = 0x54;
                  lVar25 = 0x20;
                  goto LAB_036b6da0;
                }
                if (uVar7 <= unaff_w22) goto LAB_036b7478;
                puVar24 = (uint *)(in_stack_00000038 + (long)(int)unaff_w22 * 0xc + 0x20);
                if (*puVar24 == 0) goto FUN_036b6c00;
                if (*unaff_x20 == 0) goto thunk_FUN_01b48178;
                plVar17 = (long *)(*unaff_x20 + 0x38);
                lVar9 = *plVar17;
                iVar6 = *(int *)(unaff_x19 + 0x490);
                if ((lVar9 == 0) || (*(int *)(lVar9 + 0x18) <= iVar6)) {
                  if (*(int *)(*plVar21 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  FUN_01f52d44(plVar17,iVar6 + 1,1,*(undefined8 *)PTR_DAT_03d9cb30);
                  uVar7 = *(uint *)(in_stack_00000038 + 0x18);
                }
                if (uVar7 <= unaff_w22) goto LAB_036b7478;
                unaff_w26 = *puVar24;
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
                      uVar10 = FUN_02fdd92c(unaff_w26,0);
                      if ((uVar10 & 1) != 0) {
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
                    uVar10 = FUN_02fdd9e8(unaff_w26,0);
                    if ((uVar10 & 1) != 0) {
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
                  unaff_x27 = FUN_036f260c();
                  if (unaff_x27 == 0) {
                    iVar6 = FUN_036fb88c();
                    if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) goto LAB_036b7478;
                    if (iVar6 == 0) {
                      uVar7 = 0x25a1;
                    }
                    else {
                      uVar7 = FUN_036fb88c(0);
                    }
                    *puVar24 = uVar7;
                    uVar18 = *(undefined8 *)(unaff_x19 + 0x100);
                    uVar5 = *(undefined4 *)(unaff_x19 + 0x25c);
                    uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                    if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    unaff_x27 = FUN_036d1ff4(uVar7,uVar18,1,uVar5,uVar2,(long)&stack0x000001a8 + 4,0
                                            );
                    if (unaff_x27 == 0) {
                      lVar9 = FUN_036fba04();
                      if (lVar9 != 0) {
                        lVar9 = FUN_036fba04(0);
                        if (lVar9 == 0) goto thunk_FUN_01b48178;
                        if (0 < *(int *)(lVar9 + 0x18)) {
                          uVar19 = *(undefined8 *)(unaff_x19 + 0x100);
                          uVar18 = FUN_036fba04(0);
                          uVar5 = *(undefined4 *)(unaff_x19 + 0x25c);
                          uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                          if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                            thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb18);
                          }
                          unaff_x27 = FUN_036d2514(uVar7,uVar19,uVar18,1,uVar5,uVar2,
                                                   (long)&stack0x000001a8 + 4,0);
                          if (unaff_x27 != 0) goto LAB_036b605c;
                        }
                      }
                      uVar18 = FUN_036fb8e4(0);
                      if (*(int *)(*(long *)
                                    Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                  + 0xe0) == 0) {
                        thunk_FUN_01ac7298(*(long *)
                                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                          );
                      }
                      uVar10 = FUN_0391f968(uVar18,0,0);
                      if ((uVar10 & 1) != 0) {
                        uVar18 = FUN_036fb8e4(0);
                        uVar5 = *(undefined4 *)(unaff_x19 + 0x25c);
                        uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                        if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                          thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb18);
                        }
                        unaff_x27 = FUN_036d1ff4(uVar7,uVar18,1,uVar5,uVar2,
                                                 (long)&stack0x000001a8 + 4,0);
                        if (unaff_x27 != 0) goto LAB_036b605c;
                      }
                      if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) goto LAB_036b7478;
                      *puVar24 = 0x20;
                      uVar18 = *(undefined8 *)(unaff_x19 + 0x100);
                      uVar5 = *(undefined4 *)(unaff_x19 + 0x25c);
                      uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                      if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uVar7 = 0x20;
                      unaff_x27 = FUN_036d1ff4(0x20,uVar18,1,uVar5,uVar2,(long)&stack0x000001a8 + 4,
                                               0);
                      if (unaff_x27 == 0) {
                        if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) goto LAB_036b7478;
                        *puVar24 = 3;
                        uVar18 = *(undefined8 *)(unaff_x19 + 0x100);
                        uVar5 = *(undefined4 *)(unaff_x19 + 0x25c);
                        uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                        if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                        }
                        uVar7 = 3;
                        unaff_x27 = FUN_036d1ff4(3,uVar18,1,uVar5,uVar2,(long)&stack0x000001a8 + 4,0
                                                );
                      }
                    }
LAB_036b605c:
                    uVar10 = FUN_036fb8c8(0);
                    if ((uVar10 & 1) == 0) {
                      plVar21 = (long *)FUN_01b47fd0(*(undefined8 *)
                                                                                                            
                                                  Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                                  ,4);
                      if ((int)unaff_w26 < 0x10000) {
                        in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,unaff_w26);
                        lVar9 = thunk_FUN_01afa70c(*(undefined8 *)
                                                                                                        
                                                  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                                  ,&stack0x000000e0);
                        if (plVar21 == (long *)0x0) goto thunk_FUN_01b48178;
                        if ((lVar9 != 0) &&
                           (lVar22 = thunk_FUN_01afa9e0(lVar9,*(undefined8 *)(*plVar21 + 0x40)),
                           lVar22 == 0)) goto LAB_036b747c;
                        if ((int)plVar21[3] == 0) goto LAB_036b7478;
                        plVar21[4] = lVar9;
                        thunk_FUN_01b4f09c(plVar21 + 4,lVar9);
                        if (*(long *)(unaff_x19 + 0xf8) == 0) goto thunk_FUN_01b48178;
                        lVar9 = FUN_039230bc(*(long *)(unaff_x19 + 0xf8),0);
                        if ((lVar9 != 0) &&
                           (lVar22 = thunk_FUN_01afa9e0(lVar9,*(undefined8 *)(*plVar21 + 0x40)),
                           lVar22 == 0)) goto LAB_036b747c;
                        if (*(uint *)(plVar21 + 3) < 2) goto LAB_036b7478;
                        plVar21[5] = lVar9;
                        thunk_FUN_01b4f09c(plVar21 + 5,lVar9);
                        if (unaff_x27 == 0) goto thunk_FUN_01b48178;
                        in_stack_00000170 = *(undefined4 *)(unaff_x27 + 0x14);
                        lVar9 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,
                                                   &stack0x00000170);
                        if ((lVar9 != 0) &&
                           (lVar22 = thunk_FUN_01afa9e0(lVar9,*(undefined8 *)(*plVar21 + 0x40)),
                           lVar22 == 0)) goto LAB_036b747c;
                        if (*(uint *)(plVar21 + 3) < 3) goto LAB_036b7478;
                        plVar21[6] = lVar9;
                        thunk_FUN_01b4f09c(plVar21 + 6,lVar9);
                        lVar9 = FUN_039230bc();
                        if ((lVar9 != 0) &&
                           (lVar22 = thunk_FUN_01afa9e0(lVar9,*(undefined8 *)(*plVar21 + 0x40)),
                           lVar22 == 0)) goto LAB_036b747c;
                        if (*(uint *)(plVar21 + 3) < 4) goto LAB_036b7478;
                        plVar21[7] = lVar9;
                        thunk_FUN_01b4f09c(plVar21 + 7,lVar9);
                        puVar11 = (undefined8 *)PTR_DAT_03d9cb50;
                      }
                      else {
                        in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,unaff_w26);
                        lVar9 = thunk_FUN_01afa70c(*(undefined8 *)
                                                                                                        
                                                  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                                  ,&stack0x000000e0);
                        if (plVar21 == (long *)0x0) goto thunk_FUN_01b48178;
                        if ((lVar9 != 0) &&
                           (lVar22 = thunk_FUN_01afa9e0(lVar9,*(undefined8 *)(*plVar21 + 0x40)),
                           lVar22 == 0)) goto LAB_036b747c;
                        if ((int)plVar21[3] == 0) goto LAB_036b7478;
                        plVar21[4] = lVar9;
                        thunk_FUN_01b4f09c(plVar21 + 4,lVar9);
                        if (*(long *)(unaff_x19 + 0xf8) == 0) goto thunk_FUN_01b48178;
                        lVar9 = FUN_039230bc(*(long *)(unaff_x19 + 0xf8),0);
                        if ((lVar9 != 0) &&
                           (lVar22 = thunk_FUN_01afa9e0(lVar9,*(undefined8 *)(*plVar21 + 0x40)),
                           lVar22 == 0)) goto LAB_036b747c;
                        if (*(uint *)(plVar21 + 3) < 2) goto LAB_036b7478;
                        plVar21[5] = lVar9;
                        thunk_FUN_01b4f09c(plVar21 + 5,lVar9);
                        if (unaff_x27 == 0) goto thunk_FUN_01b48178;
                        in_stack_00000170 = *(undefined4 *)(unaff_x27 + 0x14);
                        lVar9 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,
                                                   &stack0x00000170);
                        if ((lVar9 != 0) &&
                           (lVar22 = thunk_FUN_01afa9e0(lVar9,*(undefined8 *)(*plVar21 + 0x40)),
                           lVar22 == 0)) goto LAB_036b747c;
                        if (*(uint *)(plVar21 + 3) < 3) goto LAB_036b7478;
                        plVar21[6] = lVar9;
                        thunk_FUN_01b4f09c(plVar21 + 6,lVar9);
                        lVar9 = FUN_039230bc();
                        if ((lVar9 != 0) &&
                           (lVar22 = thunk_FUN_01afa9e0(lVar9,*(undefined8 *)(*plVar21 + 0x40)),
                           lVar22 == 0)) goto LAB_036b747c;
                        if (*(uint *)(plVar21 + 3) < 4) goto LAB_036b7478;
                        plVar21[7] = lVar9;
                        thunk_FUN_01b4f09c(plVar21 + 7,lVar9);
                        puVar11 = (undefined8 *)PTR_DAT_03d9cb48;
                      }
                      uVar18 = FUN_02ee71a8(*puVar11,plVar21,0);
                      if (*(int *)(*(long *)
                                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                  + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      FUN_038f3474(uVar18);
                      unaff_w26 = uVar7;
                    }
                    else {
                      unaff_w26 = uVar7;
                      if (unaff_x27 == 0) goto thunk_FUN_01b48178;
                    }
                  }
                  if (*(char *)(unaff_x27 + 0x10) == '\x01') {
                    if (*(long *)(unaff_x27 + 0x18) == 0) goto thunk_FUN_01b48178;
                    iVar6 = FUN_036c1bb4(*(long *)(unaff_x27 + 0x18),0);
                    if (*unaff_x29 == 0) goto thunk_FUN_01b48178;
                    iVar8 = FUN_036c1bb4(*unaff_x29,0);
                    if (iVar6 == iVar8) goto LAB_036b6570;
                    plVar21 = *(long **)(unaff_x27 + 0x18);
                    if (plVar21 == (long *)0x0) {
                      plVar21 = (long *)0x0;
                      *unaff_x29 = 0;
                    }
                    else {
                      lVar9 = *(long *)StringLiteral_444;
                      bVar3 = *(byte *)(lVar9 + 0x130);
                      if (*(byte *)(*plVar21 + 0x130) < bVar3) {
                        plVar17 = (long *)0x0;
                      }
                      else {
                        plVar17 = plVar21;
                        if (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar3 * 8 + -8) != lVar9) {
                          plVar17 = (long *)0x0;
                        }
                      }
                      *unaff_x29 = (long)plVar17;
                      if (*(byte *)(*plVar21 + 0x130) < bVar3) {
                        plVar21 = (long *)0x0;
                      }
                      else if (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar3 * 8 + -8) != lVar9
                              ) {
                        plVar21 = (long *)0x0;
                      }
                    }
                    thunk_FUN_01b4f09c(unaff_x29,plVar21);
                    unaff_w28 = 1;
                  }
                  else {
LAB_036b6570:
                    unaff_w28 = 0;
                  }
                  if ((*unaff_x20 == 0) || (lVar9 = *(long *)(*unaff_x20 + 0x38), lVar9 == 0))
                  goto thunk_FUN_01b48178;
                  if (*(uint *)(lVar9 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036b7478;
                  lVar9 = lVar9 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                  plVar21 = (long *)(lVar9 + 0x30);
                  *plVar21 = unaff_x27;
                  *(undefined4 *)(lVar9 + 0x2c) = 0;
                  thunk_FUN_01b4f09c(plVar21,unaff_x27);
                  if ((*unaff_x20 == 0) || (lVar9 = *(long *)(*unaff_x20 + 0x38), lVar9 == 0))
                  goto thunk_FUN_01b48178;
                  uVar7 = *(uint *)(unaff_x19 + 0x490);
                  if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_036b7478;
                  lVar22 = lVar9 + (long)(int)uVar7 * 0x178;
                  *(short *)(lVar22 + 0x20) = (short)unaff_w26;
                  *(undefined1 *)(lVar22 + 0x5c) = uStack00000000000001ac;
                  if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) goto LAB_036b7478;
                  lVar9 = lVar9 + (long)(int)uVar7 * 0x178;
                  *(undefined8 *)(lVar9 + 0x24) =
                       *(undefined8 *)(in_stack_00000038 + (long)(int)unaff_w22 * 0xc + 0x24);
                  *(long *)(lVar9 + 0x38) = *unaff_x29;
                  thunk_FUN_01b4f09c();
                  unaff_x24 = (long *)PTR_DAT_03d9c920;
                  if (*(char *)(unaff_x27 + 0x10) != '\x02') {
                    if (unaff_w28 == 0) goto LAB_036b68d4;
                    if (*unaff_x29 == 0) goto thunk_FUN_01b48178;
                    iVar6 = FUN_036c1bb4(*unaff_x29,0);
                    if (*(long *)(unaff_x19 + 0xf8) == 0) goto thunk_FUN_01b48178;
                    iVar8 = FUN_036c1bb4(*(long *)(unaff_x19 + 0xf8),0);
                    if (iVar6 == iVar8) goto LAB_036b68d4;
                    uVar10 = FUN_036fba20(0);
                    if ((uVar10 & 1) == 0) {
                      if (*unaff_x29 == 0) goto thunk_FUN_01b48178;
                      param_1 = *(undefined8 *)(*unaff_x29 + 0x20);
                    }
                    else {
                      if (*unaff_x29 == 0) goto thunk_FUN_01b48178;
                      uVar18 = *in_stack_00000028;
                      uVar19 = *(undefined8 *)(*unaff_x29 + 0x20);
                      if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      param_1 = FUN_036f7d2c(uVar18,uVar19,0);
                    }
                    goto FUN_036b688c;
                  }
                  plVar21 = *(long **)(unaff_x27 + 0x18);
                  if (plVar21 == (long *)0x0) goto thunk_FUN_01b48178;
                  bVar3 = *(byte *)(*(long *)PTR_DAT_03d9cb28 + 0x130);
                  if ((*(byte *)(*plVar21 + 0x130) < bVar3) ||
                     (*(long *)(*(long *)(*plVar21 + 200) + (ulong)bVar3 * 8 + -8) !=
                      *(long *)PTR_DAT_03d9cb28)) goto thunk_FUN_01b48178;
                  lVar22 = plVar21[4];
                  lVar9 = *(long *)PTR_DAT_03d9c920;
                  if (*(int *)(lVar9 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    lVar9 = *unaff_x24;
                  }
                  uVar7 = FUN_036b0d60(lVar22,plVar21,*(long *)(lVar9 + 0xb8),
                                       *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8));
                  *(uint *)(unaff_x19 + 0x120) = uVar7;
                  lVar9 = **(long **)(*unaff_x24 + 0xb8);
                  if (lVar9 == 0) goto thunk_FUN_01b48178;
                  if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_036b7478;
                  lVar9 = lVar9 + (long)(int)uVar7 * 0x38;
                  *(int *)(lVar9 + 0x54) = *(int *)(lVar9 + 0x54) + 1;
                  if ((*unaff_x20 == 0) || (lVar9 = *(long *)(*unaff_x20 + 0x38), lVar9 == 0))
                  goto thunk_FUN_01b48178;
                  if (*(uint *)(lVar9 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036b7478;
                  lVar9 = lVar9 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                  *(undefined4 *)(lVar9 + 0x2c) = 1;
                  uVar5 = *(undefined4 *)(unaff_x19 + 0x120);
                  *(undefined8 *)(lVar9 + 0x40) = plVar21;
                  *(undefined4 *)(lVar9 + 0x58) = uVar5;
                  thunk_FUN_01b4f09c((undefined8 *)(lVar9 + 0x40),plVar21);
                  unaff_x24 = (long *)PTR_DAT_03d9c920;
                  if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                     (lVar9 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar9 == 0))
                  goto thunk_FUN_01b48178;
                  uVar7 = *(uint *)(unaff_x19 + 0x490);
                  if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_036b7478;
                  *(undefined4 *)(lVar9 + (long)(int)uVar7 * 0x178 + 0x48) =
                       *(undefined4 *)(unaff_x27 + 0x28);
                  *(undefined4 *)(unaff_x19 + 0x644) = 0;
                  *(undefined4 *)(unaff_x19 + 0x120) = in_stack_00000030._4_4_;
                  in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
                  plVar21 = (long *)PTR_DAT_03d9c8a0;
                  goto LAB_036b6be0;
                }
                uVar5 = *(undefined4 *)(unaff_x19 + 0x120);
                uVar10 = FUN_036e7318();
                uVar14 = uStack00000000000001a8;
                if ((uVar10 & 1) == 0) goto LAB_036b5ed4;
                if (*(uint *)(in_stack_00000038 + 0x18) <= unaff_w22) goto LAB_036b7478;
                iVar6 = *(int *)(in_stack_00000038 + (long)(int)unaff_w22 * 0xc + 0x24);
                if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
                  *(undefined1 *)(unaff_x19 + 0x26a) = 1;
                }
                puVar4 = PTR_DAT_03d9c920;
                unaff_x24 = (long *)PTR_DAT_03d9c920;
                unaff_w22 = uStack00000000000001a8;
              } while (*(int *)(unaff_x19 + 0x644) != 1);
              lVar9 = *(long *)PTR_DAT_03d9c920;
              if (*(int *)(lVar9 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar9 = *(long *)puVar4;
              }
              lVar9 = **(long **)(lVar9 + 0xb8);
              if (lVar9 == 0) goto thunk_FUN_01b48178;
              if (*(uint *)(lVar9 + 0x18) <= *(uint *)(unaff_x19 + 0x120)) break;
              lVar9 = lVar9 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
              *(int *)(lVar9 + 0x54) = *(int *)(lVar9 + 0x54) + 1;
              if ((*unaff_x20 == 0) || (lVar9 = *(long *)(*unaff_x20 + 0x38), lVar9 == 0))
              goto thunk_FUN_01b48178;
              if (*(uint *)(lVar9 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
              uVar2 = *(undefined4 *)(unaff_x19 + 0x6a4);
              lVar9 = lVar9 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
              *(short *)(lVar9 + 0x20) = (short)uVar2 + -0x2000;
              *(undefined4 *)(lVar9 + 0x48) = uVar2;
              *(long *)(lVar9 + 0x38) = *unaff_x29;
              thunk_FUN_01b4f09c();
              if ((*unaff_x20 == 0) || (lVar9 = *(long *)(*unaff_x20 + 0x38), lVar9 == 0))
              goto thunk_FUN_01b48178;
              if (*(uint *)(lVar9 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) break;
              *(undefined8 *)(lVar9 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x40) =
                   *(undefined8 *)(unaff_x19 + 0x698);
              thunk_FUN_01b4f09c();
              if ((*unaff_x20 == 0) || (lVar9 = *(long *)(*unaff_x20 + 0x38), lVar9 == 0))
              goto thunk_FUN_01b48178;
              uVar7 = *(uint *)(unaff_x19 + 0x490);
              if (*(uint *)(lVar9 + 0x18) <= uVar7) break;
              *(undefined4 *)(lVar9 + (long)(int)uVar7 * 0x178 + 0x58) =
                   *(undefined4 *)(unaff_x19 + 0x120);
              if ((*(long *)(unaff_x19 + 0x698) == 0) ||
                 (lVar22 = FUN_036fe7c0(*(long *)(unaff_x19 + 0x698),0), lVar22 == 0))
              goto thunk_FUN_01b48178;
              uVar18 = FUN_02b59714(lVar22,*(undefined4 *)(unaff_x19 + 0x6a4),
                                    *(undefined8 *)PTR_DAT_03d9c878);
              if (*(uint *)(lVar9 + 0x18) <= uVar7) break;
              *(undefined8 *)(lVar9 + (long)(int)uVar7 * 0x178 + 0x30) = uVar18;
              thunk_FUN_01b4f09c();
              if ((*unaff_x20 == 0) || (lVar9 = *(long *)(*unaff_x20 + 0x38), lVar9 == 0))
              goto thunk_FUN_01b48178;
              uVar7 = *(uint *)(unaff_x19 + 0x490);
              if (*(uint *)(lVar9 + 0x18) <= uVar7) break;
              uVar2 = *(undefined4 *)(unaff_x19 + 0x644);
              lVar22 = lVar9 + (long)(int)uVar7 * 0x178;
              *(int *)(lVar22 + 0x24) = iVar6;
              *(undefined4 *)(lVar22 + 0x2c) = uVar2;
              if (*(uint *)(in_stack_00000038 + 0x18) <= uVar14) break;
              *(int *)(lVar9 + (long)(int)uVar7 * 0x178 + 0x28) =
                   (*(int *)(in_stack_00000038 + (long)(int)uVar14 * 0xc + 0x24) - iVar6) + 1;
              *(undefined4 *)(unaff_x19 + 0x644) = 0;
              *(undefined4 *)(unaff_x19 + 0x120) = uVar5;
              in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
              unaff_x24 = (long *)PTR_DAT_03d9c920;
              unaff_w22 = uVar14;
            } while( true );
          }
          goto LAB_036b7478;
        }
        goto thunk_FUN_01b48178;
      }
      goto LAB_036b7478;
    }
  }
  goto thunk_FUN_01b48178;
LAB_036b6da0:
  do {
    if (uVar23 != 0) {
      lVar15 = *plVar17;
      if (lVar15 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_036b7478;
      uVar18 = *(undefined8 *)(lVar15 + uVar23 * 8 + 0x20);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar12 = FUN_03922f24(uVar18,0,0);
      if ((uVar12 & 1) != 0) {
        lVar15 = *unaff_x24;
        plVar21 = (long *)*plVar17;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar15 = *unaff_x24;
        }
        lVar15 = **(long **)(lVar15 + 0xb8);
        if (lVar15 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_036b7478;
        lVar15 = lVar15 + lVar22;
        in_stack_00000160 = *(undefined8 *)(lVar15 + -4);
        in_stack_00000158 = *(undefined8 *)(lVar15 + -0xc);
        in_stack_00000150 = *(undefined8 *)(lVar15 + -0x14);
        in_stack_00000148 = *(undefined8 *)(lVar15 + -0x1c);
        in_stack_00000140 = *(undefined8 *)(lVar15 + -0x24);
        in_stack_00000138 = *(undefined8 *)(lVar15 + -0x2c);
        in_stack_00000130 = *(undefined8 *)(lVar15 + -0x34);
        lVar15 = FUN_03701aec();
        if (plVar21 == (long *)0x0) goto thunk_FUN_01b48178;
        if ((lVar15 != 0) &&
           (lVar13 = thunk_FUN_01afa9e0(lVar15,*(undefined8 *)(*plVar21 + 0x40)), lVar13 == 0)) {
LAB_036b747c:
          uVar18 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
          FUN_01b48050(uVar18,0);
        }
        if (*(uint *)(plVar21 + 3) <= uVar23) goto LAB_036b7478;
        plVar21[uVar23 + 4] = lVar15;
        thunk_FUN_01b4f09c((long)plVar21 + lVar25,lVar15);
        unaff_x24 = (long *)PTR_DAT_03d9c920;
        if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x60), lVar15 == 0))
        goto thunk_FUN_01b48178;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_036b7478;
        puVar11 = (undefined8 *)(lVar15 + lVar9 + 0x30);
        *puVar11 = 0;
        thunk_FUN_01b4f09c(puVar11,0);
      }
      lVar15 = *plVar17;
      if (lVar15 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_036b7478;
      lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
      if (lVar15 == 0) goto thunk_FUN_01b48178;
      uVar18 = *(undefined8 *)(lVar15 + 0x38);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar12 = FUN_03922f24(uVar18,0,0);
      if ((uVar12 & 1) == 0) {
        lVar15 = *plVar17;
        if (lVar15 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_036b7478;
        lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
        if ((lVar15 == 0) || (lVar15 = *(long *)(lVar15 + 0x38), lVar15 == 0))
        goto thunk_FUN_01b48178;
        iVar6 = FUN_03922ce0(lVar15,0);
        lVar15 = *unaff_x24;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01ac7298(lVar15);
          lVar15 = *unaff_x24;
        }
        lVar15 = **(long **)(lVar15 + 0xb8);
        if (lVar15 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_036b7478;
        lVar15 = *(long *)(lVar15 + lVar22 + -0x1c);
        if (lVar15 == 0) goto thunk_FUN_01b48178;
        iVar8 = FUN_03922ce0(lVar15,0);
        if (iVar6 != iVar8) goto LAB_036b6f94;
      }
      else {
LAB_036b6f94:
        lVar15 = *plVar17;
        if (lVar15 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_036b7478;
        lVar13 = *unaff_x24;
        lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar13 = *unaff_x24;
        }
        lVar13 = **(long **)(lVar13 + 0xb8);
        if (lVar13 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar13 + 0x18) <= uVar23) goto LAB_036b7478;
        if (lVar15 == 0) goto thunk_FUN_01b48178;
        thunk_FUN_03701608(lVar15,*(undefined8 *)(lVar13 + lVar22 + -0x1c),0);
        lVar15 = *plVar17;
        if (lVar15 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_036b7478;
        lVar13 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar13 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar13 + 0x18) <= uVar23) goto LAB_036b7478;
        lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
        if (lVar15 == 0) goto thunk_FUN_01b48178;
        *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)(lVar13 + lVar22 + -0x2c);
        thunk_FUN_01b4f09c();
        lVar15 = *plVar17;
        if (lVar15 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_036b7478;
        lVar13 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar13 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar13 + 0x18) <= uVar23) goto LAB_036b7478;
        lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
        if (lVar15 == 0) goto thunk_FUN_01b48178;
        *(undefined8 *)(lVar15 + 0x28) = *(undefined8 *)(lVar13 + lVar22 + -0x24);
        thunk_FUN_01b4f09c();
      }
      lVar15 = *unaff_x24;
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar15 = *unaff_x24;
      }
      lVar13 = **(long **)(lVar15 + 0xb8);
      if (lVar13 == 0) goto thunk_FUN_01b48178;
      if (*(uint *)(lVar13 + 0x18) <= uVar23) goto LAB_036b7478;
      if (*(char *)(lVar13 + lVar22 + -0x13) != '\0') {
        lVar16 = *plVar17;
        if (lVar16 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar16 + 0x18) <= uVar23) goto LAB_036b7478;
        lVar16 = *(long *)(lVar16 + uVar23 * 8 + 0x20);
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar13 = **(long **)(*unaff_x24 + 0xb8);
          if (lVar13 == 0) goto thunk_FUN_01b48178;
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar23) goto LAB_036b7478;
        if (lVar16 == 0) goto thunk_FUN_01b48178;
        FUN_03701638(lVar16,*(undefined8 *)(lVar13 + lVar22 + -0x1c),0);
        lVar15 = *plVar17;
        if (lVar15 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_036b7478;
        lVar13 = **(long **)(*unaff_x24 + 0xb8);
        if (lVar13 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar13 + 0x18) <= uVar23) goto LAB_036b7478;
        lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
        if (lVar15 == 0) goto thunk_FUN_01b48178;
        *(undefined8 *)(lVar15 + 0x48) = *(undefined8 *)(lVar13 + lVar22 + -0xc);
        thunk_FUN_01b4f09c();
      }
    }
    lVar15 = *unaff_x24;
    if (*(int *)(lVar15 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar15 = *unaff_x24;
    }
    lVar15 = **(long **)(lVar15 + 0xb8);
    if (lVar15 == 0) goto thunk_FUN_01b48178;
    if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_036b7478;
    if ((*unaff_x20 == 0) || (lVar13 = *(long *)(*unaff_x20 + 0x60), lVar13 == 0))
    goto thunk_FUN_01b48178;
    if (*(uint *)(lVar13 + 0x18) <= uVar23) goto LAB_036b7478;
    lVar16 = *(long *)(lVar13 + lVar9 + 0x30);
    iVar6 = *(int *)(lVar15 + lVar22);
    if (lVar16 == 0) {
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
        FUN_036f884c(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar6 + 1,0);
        memcpy(&stack0x00000090,&stack0x000000e0,0x50);
        if (*(int *)(lVar13 + 0x18) == 0) goto LAB_036b7478;
        memcpy((void *)(lVar13 + lVar9 + 0x20),&stack0x00000090,0x50);
        __dest = (void *)(lVar13 + 0x20);
      }
      else {
        lVar15 = *plVar17;
        if (lVar15 == 0) goto thunk_FUN_01b48178;
        if (*(uint *)(lVar15 + 0x18) <= uVar23) goto LAB_036b7478;
        lVar15 = *(long *)(lVar15 + uVar23 * 8 + 0x20);
        if (lVar15 == 0) goto thunk_FUN_01b48178;
        uVar18 = FUN_03701980(lVar15,0);
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
        FUN_036f884c(&stack0x000000e0,uVar18,iVar6 + 1,0);
        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
        if (*(uint *)(lVar13 + 0x18) <= uVar23) goto LAB_036b7478;
        __dest = (void *)(lVar13 + lVar9 + 0x20);
        memcpy(__dest,&stack0x00000040,0x50);
      }
      thunk_FUN_01b4f09c(__dest,0);
    }
    else {
      iVar8 = *(int *)(lVar16 + 0x18);
      if (iVar8 < iVar6 * 4) {
LAB_036b7200:
        if (iVar6 < 0x401) {
          iVar6 = FUN_039155e8(iVar6 + 1,0);
        }
        else {
          iVar6 = iVar6 + 0x100;
        }
        if (*(int *)(*(long *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__ +
                    0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_036f961c(lVar13 + lVar9 + 0x20,iVar6,0);
      }
      else if ((0 < iVar6) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
        iVar1 = iVar8 + 3;
        if (-1 < iVar8) {
          iVar1 = iVar8;
        }
        if (0x100 < (iVar1 >> 2) - iVar6) goto LAB_036b7200;
      }
    }
    unaff_x24 = (long *)PTR_DAT_03d9c920;
    if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x60), lVar15 == 0))
    goto thunk_FUN_01b48178;
    lVar13 = *(long *)PTR_DAT_03d9c920;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar13 = *unaff_x24;
    }
    lVar13 = **(long **)(lVar13 + 0xb8);
    if (lVar13 == 0) goto thunk_FUN_01b48178;
    if ((*(uint *)(lVar13 + 0x18) <= uVar23) || (*(uint *)(lVar15 + 0x18) <= uVar23))
    goto LAB_036b7478;
    *(undefined8 *)(lVar15 + lVar9 + 0x68) = *(undefined8 *)(lVar13 + lVar22 + -0x1c);
    thunk_FUN_01b4f09c();
    uVar23 = uVar23 + 1;
    lVar9 = lVar9 + 0x50;
    lVar22 = lVar22 + 0x38;
    lVar25 = lVar25 + 8;
  } while (uVar7 != uVar23);
LAB_036b73b0:
  puVar4 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
  lVar9 = *plVar17;
  if (lVar9 != 0) {
    lVar22 = (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3) + 0x20;
    lVar25 = (long)(int)uVar7 * 0x50 + 0x20;
    do {
      uVar7 = (uint)uVar10;
      if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar7) {
LAB_036b6c0c:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar7) {
LAB_036b7478:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar18 = *(undefined8 *)(lVar9 + lVar22);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar10 = FUN_0391f968(uVar18,0,0);
      if ((uVar10 & 1) == 0) goto LAB_036b6c0c;
      if ((*unaff_x20 == 0) || (lVar9 = *(long *)(*unaff_x20 + 0x60), lVar9 == 0)) break;
      uVar14 = *(uint *)(lVar9 + 0x18);
      if ((int)uVar7 < (int)uVar14) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          uVar14 = *(uint *)(lVar9 + 0x18);
        }
        if (uVar14 <= uVar7) goto LAB_036b7478;
        FUN_036fa5b4(lVar9 + lVar25,0,1,0);
      }
      lVar9 = *plVar17;
      uVar10 = (ulong)(uVar7 + 1);
      lVar25 = lVar25 + 0x50;
      lVar22 = lVar22 + 8;
    } while (lVar9 != 0);
  }
thunk_FUN_01b48178:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


