/*
FUNCTION_NAME: Unity.VisualScripting.RuntimeCodebase$$FetchRenamedMembers
ENTRY_POINT: 036b5a14
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_16;validity_or_gating_hits_21;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


undefined4 Unity_VisualScripting_RuntimeCodebase__FetchRenamedMembers(ulong param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  void *__dest;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long unaff_x19;
  long *unaff_x20;
  uint uVar22;
  undefined8 uVar23;
  long *plVar24;
  long *unaff_x24;
  undefined8 uVar25;
  long unaff_x25;
  undefined8 uVar26;
  ulong uVar27;
  long *unaff_x27;
  long *unaff_x29;
  uint *puVar28;
  long lVar29;
  int iStack0000000000000024;
  long *in_stack_00000028;
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
  
  if ((param_1 & 1) == 0) {
LAB_036b5a50:
    if (*(long *)(unaff_x19 + 0x658) == 0) goto thunk_FUN_01b48178;
    *(undefined8 *)(unaff_x19 + 0x660) = *(undefined8 *)(*(long *)(unaff_x19 + 0x658) + 0x20);
  }
  else {
    if (*in_stack_00000028 == 0) goto thunk_FUN_01b48178;
    iVar6 = FUN_03922ce0(*in_stack_00000028,0);
    if ((*(long *)(unaff_x19 + 0x658) == 0) ||
       (lVar12 = *(long *)(*(long *)(unaff_x19 + 0x658) + 0x20), lVar12 == 0))
    goto thunk_FUN_01b48178;
    iVar7 = FUN_03922ce0(lVar12,0);
    if (iVar6 == iVar7) goto LAB_036b5a50;
    if (*(long *)(unaff_x19 + 0x658) == 0) goto thunk_FUN_01b48178;
    uVar23 = *(undefined8 *)(unaff_x19 + 0x118);
    uVar25 = *(undefined8 *)(*(long *)(unaff_x19 + 0x658) + 0x20);
    if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar23 = FUN_036f7d2c(uVar23,uVar25,0);
    *(undefined8 *)(unaff_x19 + 0x660) = uVar23;
    unaff_x24 = (long *)PTR_DAT_03d9c920;
  }
  thunk_FUN_01b4f09c(unaff_x19 + 0x660);
  lVar12 = *unaff_x24;
  uVar23 = *(undefined8 *)(unaff_x19 + 0x660);
  uVar25 = *(undefined8 *)(unaff_x19 + 0x658);
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar12 = *unaff_x24;
  }
  uVar8 = FUN_036b0b30(uVar23,uVar25,*(long *)(lVar12 + 0xb8),
                       *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
  *(uint *)(unaff_x19 + 0x668) = uVar8;
  lVar12 = **(long **)(*unaff_x24 + 0xb8);
  if (lVar12 != 0) {
    if (*(uint *)(lVar12 + 0x18) <= uVar8) {
LAB_036b7478:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    *(undefined4 *)(lVar12 + (long)(int)uVar8 * 0x38 + 0x54) = 0;
    if (*(int *)(unaff_x19 + 0x2e0) == 6) {
      uVar23 = *(undefined8 *)(unaff_x19 + 0x2e8);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar13 = FUN_0391f968(uVar23,0,0);
      if (((uVar13 & 1) != 0) && (*(char *)(unaff_x19 + 0x3f5) == '\0')) {
        plVar14 = *(long **)(unaff_x19 + 0x2e8);
        if (plVar14 == (long *)0x0) goto thunk_FUN_01b48178;
        (**(code **)(*plVar14 + 0x558))
                  (plVar14,**(undefined8 **)
                             (*(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_51__ +
                             0xb8),*(undefined8 *)(*plVar14 + 0x560));
      }
    }
    if (unaff_x25 != 0) {
      uVar8 = *(uint *)(unaff_x25 + 0x18);
      if ((int)uVar8 < 1) {
        iStack0000000000000024 = 0;
      }
      else {
        uVar22 = 0;
        iStack0000000000000024 = 0;
        do {
          if (uVar8 <= uVar22) goto LAB_036b7478;
          puVar28 = (uint *)(unaff_x25 + (long)(int)uVar22 * 0xc + 0x20);
          if (*puVar28 == 0) break;
          if (*unaff_x20 == 0) goto thunk_FUN_01b48178;
          plVar14 = (long *)(*unaff_x20 + 0x38);
          lVar12 = *plVar14;
          iVar6 = *(int *)(unaff_x19 + 0x490);
          if ((lVar12 == 0) || (*(int *)(lVar12 + 0x18) <= iVar6)) {
            if (*(int *)(*unaff_x27 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_01f52d44(plVar14,iVar6 + 1,1,*(undefined8 *)PTR_DAT_03d9cb30);
            uVar8 = *(uint *)(unaff_x25 + 0x18);
          }
          if (uVar8 <= uVar22) goto LAB_036b7478;
          uVar8 = *puVar28;
          if ((uVar8 == 0x3c) && (*(char *)(unaff_x19 + 0x302) != '\0')) {
            uVar11 = *(undefined4 *)(unaff_x19 + 0x120);
            uVar13 = FUN_036e7318();
            uVar9 = uStack00000000000001a8;
            if ((uVar13 & 1) == 0) goto LAB_036b5ed4;
            if (*(uint *)(unaff_x25 + 0x18) <= uVar22) goto LAB_036b7478;
            iVar6 = *(int *)(unaff_x25 + (long)(int)uVar22 * 0xc + 0x24);
            if ((*(byte *)(unaff_x19 + 0x25c) & 1) != 0) {
              *(undefined1 *)(unaff_x19 + 0x26a) = 1;
            }
            puVar5 = PTR_DAT_03d9c920;
            unaff_x24 = (long *)PTR_DAT_03d9c920;
            uVar22 = uStack00000000000001a8;
            if (*(int *)(unaff_x19 + 0x644) == 1) {
              lVar12 = *(long *)PTR_DAT_03d9c920;
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar12 = *(long *)puVar5;
              }
              lVar12 = **(long **)(lVar12 + 0xb8);
              if (lVar12 != 0) {
                if (*(uint *)(unaff_x19 + 0x120) < *(uint *)(lVar12 + 0x18)) {
                  lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x120) * 0x38;
                  *(int *)(lVar12 + 0x54) = *(int *)(lVar12 + 0x54) + 1;
                  if ((*unaff_x20 != 0) && (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 != 0)) {
                    if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar12 + 0x18)) {
                      uVar10 = *(undefined4 *)(unaff_x19 + 0x6a4);
                      lVar12 = lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
                      *(short *)(lVar12 + 0x20) = (short)uVar10 + -0x2000;
                      *(undefined4 *)(lVar12 + 0x48) = uVar10;
                      *(long *)(lVar12 + 0x38) = *unaff_x29;
                      thunk_FUN_01b4f09c();
                      if ((*unaff_x20 != 0) && (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 != 0))
                      {
                        if (*(uint *)(unaff_x19 + 0x490) < *(uint *)(lVar12 + 0x18)) {
                          *(undefined8 *)
                           (lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x40) =
                               *(undefined8 *)(unaff_x19 + 0x698);
                          thunk_FUN_01b4f09c();
                          if ((*unaff_x20 != 0) &&
                             (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 != 0)) {
                            uVar8 = *(uint *)(unaff_x19 + 0x490);
                            if (uVar8 < *(uint *)(lVar12 + 0x18)) {
                              *(undefined4 *)(lVar12 + (long)(int)uVar8 * 0x178 + 0x58) =
                                   *(undefined4 *)(unaff_x19 + 0x120);
                              if ((*(long *)(unaff_x19 + 0x698) != 0) &&
                                 (lVar15 = FUN_036fe7c0(*(long *)(unaff_x19 + 0x698),0), lVar15 != 0
                                 )) {
                                uVar23 = FUN_02b59714(lVar15,*(undefined4 *)(unaff_x19 + 0x6a4),
                                                      *(undefined8 *)PTR_DAT_03d9c878);
                                if (uVar8 < *(uint *)(lVar12 + 0x18)) {
                                  *(undefined8 *)(lVar12 + (long)(int)uVar8 * 0x178 + 0x30) = uVar23
                                  ;
                                  thunk_FUN_01b4f09c();
                                  if ((*unaff_x20 != 0) &&
                                     (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 != 0)) {
                                    uVar8 = *(uint *)(unaff_x19 + 0x490);
                                    if (uVar8 < *(uint *)(lVar12 + 0x18)) {
                                      uVar10 = *(undefined4 *)(unaff_x19 + 0x644);
                                      lVar15 = lVar12 + (long)(int)uVar8 * 0x178;
                                      *(int *)(lVar15 + 0x24) = iVar6;
                                      *(undefined4 *)(lVar15 + 0x2c) = uVar10;
                                      if (uVar9 < *(uint *)(in_stack_00000038 + 0x18)) {
                                        *(int *)(lVar12 + (long)(int)uVar8 * 0x178 + 0x28) =
                                             (*(int *)(in_stack_00000038 + (long)(int)uVar9 * 0xc +
                                                      0x24) - iVar6) + 1;
                                        *(undefined4 *)(unaff_x19 + 0x644) = 0;
                                        *(undefined4 *)(unaff_x19 + 0x120) = uVar11;
                                        iStack0000000000000024 = iStack0000000000000024 + 1;
                                        unaff_x24 = (long *)PTR_DAT_03d9c920;
                                        unaff_x25 = in_stack_00000038;
                                        uVar22 = uVar9;
                                        goto LAB_036b6be0;
                                      }
                                    }
                                    goto LAB_036b7478;
                                  }
                                  goto thunk_FUN_01b48178;
                                }
                                goto LAB_036b7478;
                              }
                              goto thunk_FUN_01b48178;
                            }
                            goto LAB_036b7478;
                          }
                          goto thunk_FUN_01b48178;
                        }
                        goto LAB_036b7478;
                      }
                      goto thunk_FUN_01b48178;
                    }
                    goto LAB_036b7478;
                  }
                  goto thunk_FUN_01b48178;
                }
                goto LAB_036b7478;
              }
              goto thunk_FUN_01b48178;
            }
          }
          else {
LAB_036b5ed4:
            uVar25 = *(undefined8 *)(unaff_x19 + 0x100);
            uVar23 = *(undefined8 *)(unaff_x19 + 0x118);
            uVar11 = *(undefined4 *)(unaff_x19 + 0x120);
            if (*(int *)(unaff_x19 + 0x644) != 0) goto LAB_036b5fac;
            uVar9 = *(uint *)(unaff_x19 + 0x25c);
            if ((uVar9 >> 4 & 1) == 0) {
              if ((uVar9 >> 3 & 1) == 0) {
                if ((uVar9 >> 5 & 1) != 0) goto LAB_036b5f00;
              }
              else {
                if (*(int *)(*(long *)
                              Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar13 = FUN_02fdd92c(uVar8,0);
                if ((uVar13 & 1) != 0) {
                  if (*(int *)(*(long *)
                                Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                              + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar8 = FUN_02fdddc0(uVar8,0);
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
              uVar13 = FUN_02fdd9e8(uVar8,0);
              if ((uVar13 & 1) != 0) {
                if (*(int *)(*(long *)
                              Field_<PrivateImplementationDetails>_27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar8 = FUN_02fddc48(uVar8,0);
LAB_036b5fa8:
                uVar8 = uVar8 & 0xffff;
              }
            }
LAB_036b5fac:
            lVar12 = FUN_036f260c();
            if (lVar12 == 0) {
              iVar6 = FUN_036fb88c();
              if (*(uint *)(unaff_x25 + 0x18) <= uVar22) goto LAB_036b7478;
              if (iVar6 == 0) {
                uVar9 = 0x25a1;
              }
              else {
                uVar9 = FUN_036fb88c(0);
              }
              *puVar28 = uVar9;
              uVar26 = *(undefined8 *)(unaff_x19 + 0x100);
              uVar10 = *(undefined4 *)(unaff_x19 + 0x25c);
              uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
              if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              lVar12 = FUN_036d1ff4(uVar9,uVar26,1,uVar10,uVar2,(long)&stack0x000001a8 + 4,0);
              if (lVar12 == 0) {
                lVar12 = FUN_036fba04();
                if (lVar12 != 0) {
                  lVar12 = FUN_036fba04(0);
                  if (lVar12 == 0) goto thunk_FUN_01b48178;
                  if (0 < *(int *)(lVar12 + 0x18)) {
                    uVar19 = *(undefined8 *)(unaff_x19 + 0x100);
                    uVar26 = FUN_036fba04(0);
                    uVar10 = *(undefined4 *)(unaff_x19 + 0x25c);
                    uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                    if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                      thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb18);
                    }
                    lVar12 = FUN_036d2514(uVar9,uVar19,uVar26,1,uVar10,uVar2,
                                          (long)&stack0x000001a8 + 4,0);
                    if (lVar12 != 0) goto LAB_036b605c;
                  }
                }
                uVar26 = FUN_036fb8e4(0);
                if (*(int *)(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)
                                      Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                    );
                }
                uVar13 = FUN_0391f968(uVar26,0,0);
                if ((uVar13 & 1) != 0) {
                  uVar26 = FUN_036fb8e4(0);
                  uVar10 = *(undefined4 *)(unaff_x19 + 0x25c);
                  uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                  if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb18);
                  }
                  lVar12 = FUN_036d1ff4(uVar9,uVar26,1,uVar10,uVar2,(long)&stack0x000001a8 + 4,0);
                  if (lVar12 != 0) goto LAB_036b605c;
                }
                if (*(uint *)(in_stack_00000038 + 0x18) <= uVar22) goto LAB_036b7478;
                *puVar28 = 0x20;
                uVar26 = *(undefined8 *)(unaff_x19 + 0x100);
                uVar10 = *(undefined4 *)(unaff_x19 + 0x25c);
                uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar9 = 0x20;
                lVar12 = FUN_036d1ff4(0x20,uVar26,1,uVar10,uVar2,(long)&stack0x000001a8 + 4,0);
                if (lVar12 == 0) {
                  if (*(uint *)(in_stack_00000038 + 0x18) <= uVar22) goto LAB_036b7478;
                  *puVar28 = 3;
                  uVar26 = *(undefined8 *)(unaff_x19 + 0x100);
                  uVar10 = *(undefined4 *)(unaff_x19 + 0x25c);
                  uVar2 = *(undefined4 *)(unaff_x19 + 0x214);
                  if (*(int *)(*(long *)PTR_DAT_03d9cb18 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar9 = 3;
                  lVar12 = FUN_036d1ff4(3,uVar26,1,uVar10,uVar2,(long)&stack0x000001a8 + 4,0);
                }
              }
LAB_036b605c:
              uVar13 = FUN_036fb8c8(0);
              if ((uVar13 & 1) == 0) {
                plVar14 = (long *)FUN_01b47fd0(*(undefined8 *)
                                                Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                               ,4);
                if ((int)uVar8 < 0x10000) {
                  in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar8);
                  lVar15 = thunk_FUN_01afa70c(*(undefined8 *)
                                               Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                              ,&stack0x000000e0);
                  if (plVar14 == (long *)0x0) goto thunk_FUN_01b48178;
                  if ((lVar15 != 0) &&
                     (lVar29 = thunk_FUN_01afa9e0(lVar15,*(undefined8 *)(*plVar14 + 0x40)),
                     lVar29 == 0)) goto LAB_036b747c;
                  if ((int)plVar14[3] == 0) goto LAB_036b7478;
                  plVar14[4] = lVar15;
                  thunk_FUN_01b4f09c(plVar14 + 4,lVar15);
                  if (*(long *)(unaff_x19 + 0xf8) == 0) goto thunk_FUN_01b48178;
                  lVar15 = FUN_039230bc(*(long *)(unaff_x19 + 0xf8),0);
                  if ((lVar15 != 0) &&
                     (lVar29 = thunk_FUN_01afa9e0(lVar15,*(undefined8 *)(*plVar14 + 0x40)),
                     lVar29 == 0)) goto LAB_036b747c;
                  if (*(uint *)(plVar14 + 3) < 2) goto LAB_036b7478;
                  plVar14[5] = lVar15;
                  thunk_FUN_01b4f09c(plVar14 + 5,lVar15);
                  if (lVar12 == 0) goto thunk_FUN_01b48178;
                  in_stack_00000170 = *(undefined4 *)(lVar12 + 0x14);
                  lVar15 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&stack0x00000170);
                  if ((lVar15 != 0) &&
                     (lVar29 = thunk_FUN_01afa9e0(lVar15,*(undefined8 *)(*plVar14 + 0x40)),
                     lVar29 == 0)) goto LAB_036b747c;
                  if (*(uint *)(plVar14 + 3) < 3) goto LAB_036b7478;
                  plVar14[6] = lVar15;
                  thunk_FUN_01b4f09c(plVar14 + 6,lVar15);
                  lVar15 = FUN_039230bc();
                  if ((lVar15 != 0) &&
                     (lVar29 = thunk_FUN_01afa9e0(lVar15,*(undefined8 *)(*plVar14 + 0x40)),
                     lVar29 == 0)) goto LAB_036b747c;
                  if (*(uint *)(plVar14 + 3) < 4) goto LAB_036b7478;
                  plVar14[7] = lVar15;
                  thunk_FUN_01b4f09c(plVar14 + 7,lVar15);
                  puVar18 = (undefined8 *)PTR_DAT_03d9cb50;
                }
                else {
                  in_stack_000000e0 = CONCAT44(in_stack_000000e0._4_4_,uVar8);
                  lVar15 = thunk_FUN_01afa70c(*(undefined8 *)
                                               Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                              ,&stack0x000000e0);
                  if (plVar14 == (long *)0x0) goto thunk_FUN_01b48178;
                  if ((lVar15 != 0) &&
                     (lVar29 = thunk_FUN_01afa9e0(lVar15,*(undefined8 *)(*plVar14 + 0x40)),
                     lVar29 == 0)) goto LAB_036b747c;
                  if ((int)plVar14[3] == 0) goto LAB_036b7478;
                  plVar14[4] = lVar15;
                  thunk_FUN_01b4f09c(plVar14 + 4,lVar15);
                  if (*(long *)(unaff_x19 + 0xf8) == 0) goto thunk_FUN_01b48178;
                  lVar15 = FUN_039230bc(*(long *)(unaff_x19 + 0xf8),0);
                  if ((lVar15 != 0) &&
                     (lVar29 = thunk_FUN_01afa9e0(lVar15,*(undefined8 *)(*plVar14 + 0x40)),
                     lVar29 == 0)) goto LAB_036b747c;
                  if (*(uint *)(plVar14 + 3) < 2) goto LAB_036b7478;
                  plVar14[5] = lVar15;
                  thunk_FUN_01b4f09c(plVar14 + 5,lVar15);
                  if (lVar12 == 0) goto thunk_FUN_01b48178;
                  in_stack_00000170 = *(undefined4 *)(lVar12 + 0x14);
                  lVar15 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_2494,&stack0x00000170);
                  if ((lVar15 != 0) &&
                     (lVar29 = thunk_FUN_01afa9e0(lVar15,*(undefined8 *)(*plVar14 + 0x40)),
                     lVar29 == 0)) goto LAB_036b747c;
                  if (*(uint *)(plVar14 + 3) < 3) goto LAB_036b7478;
                  plVar14[6] = lVar15;
                  thunk_FUN_01b4f09c(plVar14 + 6,lVar15);
                  lVar15 = FUN_039230bc();
                  if ((lVar15 != 0) &&
                     (lVar29 = thunk_FUN_01afa9e0(lVar15,*(undefined8 *)(*plVar14 + 0x40)),
                     lVar29 == 0)) goto LAB_036b747c;
                  if (*(uint *)(plVar14 + 3) < 4) goto LAB_036b7478;
                  plVar14[7] = lVar15;
                  thunk_FUN_01b4f09c(plVar14 + 7,lVar15);
                  puVar18 = (undefined8 *)PTR_DAT_03d9cb48;
                }
                uVar26 = FUN_02ee71a8(*puVar18,plVar14,0);
                if (*(int *)(*(long *)
                              Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                FUN_038f3474(uVar26);
                unaff_x25 = in_stack_00000038;
                uVar8 = uVar9;
              }
              else {
                unaff_x25 = in_stack_00000038;
                uVar8 = uVar9;
                if (lVar12 == 0) goto thunk_FUN_01b48178;
              }
            }
            if (*(char *)(lVar12 + 0x10) == '\x01') {
              if (*(long *)(lVar12 + 0x18) == 0) goto thunk_FUN_01b48178;
              iVar6 = FUN_036c1bb4(*(long *)(lVar12 + 0x18),0);
              if (*unaff_x29 == 0) goto thunk_FUN_01b48178;
              iVar7 = FUN_036c1bb4(*unaff_x29,0);
              if (iVar6 == iVar7) goto LAB_036b6570;
              plVar14 = *(long **)(lVar12 + 0x18);
              if (plVar14 == (long *)0x0) {
                plVar14 = (long *)0x0;
                *unaff_x29 = 0;
              }
              else {
                lVar15 = *(long *)StringLiteral_444;
                bVar3 = *(byte *)(lVar15 + 0x130);
                if (*(byte *)(*plVar14 + 0x130) < bVar3) {
                  plVar24 = (long *)0x0;
                }
                else {
                  plVar24 = plVar14;
                  if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != lVar15) {
                    plVar24 = (long *)0x0;
                  }
                }
                *unaff_x29 = (long)plVar24;
                if (*(byte *)(*plVar14 + 0x130) < bVar3) {
                  plVar14 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) != lVar15) {
                  plVar14 = (long *)0x0;
                }
              }
              thunk_FUN_01b4f09c(unaff_x29,plVar14);
              bVar4 = true;
            }
            else {
LAB_036b6570:
              bVar4 = false;
            }
            if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x38), lVar15 == 0))
            goto thunk_FUN_01b48178;
            if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036b7478;
            lVar15 = lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
            plVar14 = (long *)(lVar15 + 0x30);
            *plVar14 = lVar12;
            *(undefined4 *)(lVar15 + 0x2c) = 0;
            thunk_FUN_01b4f09c(plVar14,lVar12);
            if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x38), lVar15 == 0))
            goto thunk_FUN_01b48178;
            uVar9 = *(uint *)(unaff_x19 + 0x490);
            if (*(uint *)(lVar15 + 0x18) <= uVar9) goto LAB_036b7478;
            lVar29 = lVar15 + (long)(int)uVar9 * 0x178;
            *(short *)(lVar29 + 0x20) = (short)uVar8;
            *(undefined1 *)(lVar29 + 0x5c) = uStack00000000000001ac;
            if (*(uint *)(unaff_x25 + 0x18) <= uVar22) goto LAB_036b7478;
            lVar15 = lVar15 + (long)(int)uVar9 * 0x178;
            *(undefined8 *)(lVar15 + 0x24) =
                 *(undefined8 *)(unaff_x25 + (long)(int)uVar22 * 0xc + 0x24);
            *(long *)(lVar15 + 0x38) = *unaff_x29;
            thunk_FUN_01b4f09c();
            unaff_x24 = (long *)PTR_DAT_03d9c920;
            if (*(char *)(lVar12 + 0x10) == '\x02') {
              plVar14 = *(long **)(lVar12 + 0x18);
              if (plVar14 == (long *)0x0) goto thunk_FUN_01b48178;
              bVar3 = *(byte *)(*(long *)PTR_DAT_03d9cb28 + 0x130);
              if ((*(byte *)(*plVar14 + 0x130) < bVar3) ||
                 (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar3 * 8 + -8) !=
                  *(long *)PTR_DAT_03d9cb28)) goto thunk_FUN_01b48178;
              lVar29 = plVar14[4];
              lVar15 = *(long *)PTR_DAT_03d9c920;
              if (*(int *)(lVar15 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar15 = *unaff_x24;
              }
              uVar8 = FUN_036b0d60(lVar29,plVar14,*(long *)(lVar15 + 0xb8),
                                   *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
              *(uint *)(unaff_x19 + 0x120) = uVar8;
              lVar15 = **(long **)(*unaff_x24 + 0xb8);
              if (lVar15 == 0) goto thunk_FUN_01b48178;
              if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_036b7478;
              lVar15 = lVar15 + (long)(int)uVar8 * 0x38;
              *(int *)(lVar15 + 0x54) = *(int *)(lVar15 + 0x54) + 1;
              if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x38), lVar15 == 0))
              goto thunk_FUN_01b48178;
              if (*(uint *)(lVar15 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036b7478;
              lVar15 = lVar15 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178;
              *(undefined4 *)(lVar15 + 0x2c) = 1;
              uVar10 = *(undefined4 *)(unaff_x19 + 0x120);
              *(undefined8 *)(lVar15 + 0x40) = plVar14;
              *(undefined4 *)(lVar15 + 0x58) = uVar10;
              thunk_FUN_01b4f09c((undefined8 *)(lVar15 + 0x40),plVar14);
              unaff_x24 = (long *)PTR_DAT_03d9c920;
              if ((*(long *)(unaff_x19 + 0x368) == 0) ||
                 (lVar15 = *(long *)(*(long *)(unaff_x19 + 0x368) + 0x38), lVar15 == 0))
              goto thunk_FUN_01b48178;
              uVar8 = *(uint *)(unaff_x19 + 0x490);
              if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_036b7478;
              *(undefined4 *)(lVar15 + (long)(int)uVar8 * 0x178 + 0x48) =
                   *(undefined4 *)(lVar12 + 0x28);
              *(undefined4 *)(unaff_x19 + 0x644) = 0;
              *(undefined4 *)(unaff_x19 + 0x120) = uVar11;
              iStack0000000000000024 = iStack0000000000000024 + 1;
              unaff_x25 = in_stack_00000038;
              unaff_x27 = (long *)PTR_DAT_03d9c8a0;
            }
            else {
              if (bVar4) {
                if (*unaff_x29 == 0) goto thunk_FUN_01b48178;
                iVar6 = FUN_036c1bb4(*unaff_x29,0);
                if (*(long *)(unaff_x19 + 0xf8) == 0) goto thunk_FUN_01b48178;
                iVar7 = FUN_036c1bb4(*(long *)(unaff_x19 + 0xf8),0);
                if (iVar6 != iVar7) {
                  uVar13 = FUN_036fba20(0);
                  if ((uVar13 & 1) == 0) {
                    if (*unaff_x29 == 0) goto thunk_FUN_01b48178;
                    lVar15 = *(long *)(*unaff_x29 + 0x20);
                  }
                  else {
                    if (*unaff_x29 == 0) goto thunk_FUN_01b48178;
                    lVar15 = *in_stack_00000028;
                    uVar26 = *(undefined8 *)(*unaff_x29 + 0x20);
                    if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    lVar15 = FUN_036f7d2c(lVar15,uVar26,0);
                  }
                  *in_stack_00000028 = lVar15;
                  thunk_FUN_01b4f09c(in_stack_00000028);
                  lVar15 = *unaff_x24;
                  lVar29 = *in_stack_00000028;
                  lVar20 = *unaff_x29;
                  if (*(int *)(lVar15 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    lVar15 = *unaff_x24;
                  }
                  uVar10 = FUN_036b0b30(lVar29,lVar20,*(long *)(lVar15 + 0xb8),
                                        *(undefined8 *)(*(long *)(lVar15 + 0xb8) + 8));
                  *(undefined4 *)(unaff_x19 + 0x120) = uVar10;
                  unaff_x25 = in_stack_00000038;
                }
              }
              if (*(long *)(lVar12 + 0x20) == 0) goto thunk_FUN_01b48178;
              iVar6 = FUN_0396b18c(*(long *)(lVar12 + 0x20),0);
              if (0 < iVar6) {
                if (*(long *)(lVar12 + 0x20) == 0) goto thunk_FUN_01b48178;
                lVar15 = *unaff_x29;
                lVar29 = *in_stack_00000028;
                uVar10 = FUN_0396b18c(*(long *)(lVar12 + 0x20),0);
                if (*(int *)(*(long *)PTR_DAT_03d9cb20 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(*(long *)PTR_DAT_03d9cb20);
                }
                lVar12 = FUN_036f77c8(lVar15,lVar29,uVar10,0);
                *in_stack_00000028 = lVar12;
                thunk_FUN_01b4f09c(in_stack_00000028,lVar12);
                lVar12 = *unaff_x24;
                lVar15 = *in_stack_00000028;
                lVar29 = *unaff_x29;
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar12 = *unaff_x24;
                }
                uVar10 = FUN_036b0b30(lVar15,lVar29,*(long *)(lVar12 + 0xb8),
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
              uVar13 = FUN_02fdb080(uVar8,0);
              unaff_x27 = (long *)PTR_DAT_03d9c8a0;
              if ((uVar8 != 0x200b) && ((uVar13 & 1) == 0)) {
                lVar12 = *unaff_x24;
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(lVar12);
                  lVar12 = *unaff_x24;
                }
                lVar15 = **(long **)(lVar12 + 0xb8);
                if (lVar15 == 0) goto thunk_FUN_01b48178;
                uVar8 = *(uint *)(unaff_x19 + 0x120);
                if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_036b7478;
                if (*(int *)(lVar15 + (long)(int)uVar8 * 0x38 + 0x54) < 0x3fff) {
                  if (*(int *)(lVar12 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(lVar12);
                    lVar15 = **(long **)(*unaff_x24 + 0xb8);
                    if (lVar15 == 0) goto thunk_FUN_01b48178;
                    uVar8 = *(uint *)(unaff_x19 + 0x120);
                  }
                }
                else {
                  lVar12 = *in_stack_00000028;
                  uVar26 = thunk_FUN_01afaadc(*(undefined8 *)
                                               Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesColor_IsSame__
                                             );
                  FUN_038ff0a8(uVar26,lVar12,0);
                  lVar12 = *unaff_x24;
                  lVar15 = *unaff_x29;
                  if (*(int *)(lVar12 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    lVar12 = *unaff_x24;
                  }
                  uVar8 = FUN_036b0b30(uVar26,lVar15,*(long *)(lVar12 + 0xb8),
                                       *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 8));
                  *(uint *)(unaff_x19 + 0x120) = uVar8;
                  lVar15 = **(long **)(*unaff_x24 + 0xb8);
                  if (lVar15 == 0) goto thunk_FUN_01b48178;
                }
                if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_036b7478;
                lVar15 = lVar15 + (long)(int)uVar8 * 0x38;
                *(int *)(lVar15 + 0x54) = *(int *)(lVar15 + 0x54) + 1;
              }
              if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
              goto thunk_FUN_01b48178;
              if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036b7478;
              *(long *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x50) =
                   *in_stack_00000028;
              thunk_FUN_01b4f09c();
              if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x38), lVar12 == 0))
              goto thunk_FUN_01b48178;
              if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x19 + 0x490)) goto LAB_036b7478;
              uVar8 = *(uint *)(unaff_x19 + 0x120);
              *(uint *)(lVar12 + (long)(int)*(uint *)(unaff_x19 + 0x490) * 0x178 + 0x58) = uVar8;
              lVar12 = *unaff_x24;
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar12 = *unaff_x24;
                uVar8 = *(uint *)(unaff_x19 + 0x120);
              }
              lVar15 = **(long **)(lVar12 + 0xb8);
              if (lVar15 == 0) goto thunk_FUN_01b48178;
              if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_036b7478;
              *(bool *)(lVar15 + (long)(int)uVar8 * 0x38 + 0x41) = bVar4;
              if (bVar4) {
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar15 = **(long **)(*unaff_x24 + 0xb8);
                  if (lVar15 == 0) goto thunk_FUN_01b48178;
                  uVar8 = *(uint *)(unaff_x19 + 0x120);
                }
                if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_036b7478;
                puVar18 = (undefined8 *)(lVar15 + (long)(int)uVar8 * 0x38 + 0x48);
                *puVar18 = uVar23;
                thunk_FUN_01b4f09c(puVar18,uVar23);
                *(undefined8 *)(unaff_x19 + 0x100) = uVar25;
                thunk_FUN_01b4f09c(unaff_x29);
                *(undefined8 *)(unaff_x19 + 0x118) = uVar23;
                thunk_FUN_01b4f09c(in_stack_00000028,uVar23);
                *(undefined4 *)(unaff_x19 + 0x120) = uVar11;
              }
              uVar8 = *(uint *)(unaff_x19 + 0x490);
            }
LAB_036b6be0:
            *(uint *)(unaff_x19 + 0x490) = uVar8 + 1;
          }
          uVar8 = *(uint *)(unaff_x25 + 0x18);
          uVar22 = uVar22 + 1;
        } while ((int)uVar22 < (int)uVar8);
      }
      if (*(char *)(unaff_x19 + 0x3f5) != '\0') {
        *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
LAB_036b6c0c:
        return *(undefined4 *)(unaff_x19 + 0x490);
      }
      lVar12 = *unaff_x20;
      if (lVar12 != 0) {
        *(int *)(lVar12 + 0x1c) = iStack0000000000000024;
        lVar15 = *unaff_x24;
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar15 = *unaff_x24;
        }
        lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
        if (lVar15 != 0) {
          uVar8 = FUN_02554fc4(lVar15,*(undefined8 *)PTR_DAT_03d9b168);
          *(uint *)(lVar12 + 0x34) = uVar8;
          if (*unaff_x20 != 0) {
            plVar14 = (long *)(*unaff_x20 + 0x60);
            lVar12 = *plVar14;
            if (lVar12 != 0) {
              uVar13 = (ulong)uVar8;
              if (*(int *)(lVar12 + 0x18) < (int)uVar8) {
                if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                FUN_01f52de4(plVar14,uVar13,0,*(undefined8 *)PTR_DAT_03d9cb38);
              }
              if (*(long *)(unaff_x19 + 0x708) != 0) {
                plVar14 = (long *)(unaff_x19 + 0x708);
                if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar8) {
                  uVar11 = FUN_039155e8(uVar8 + 1,0);
                  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                    thunk_FUN_01ac7298(*unaff_x27);
                  }
                  FUN_01f52b30(plVar14,uVar11,*(undefined8 *)PTR_DAT_03d9cb40);
                }
                if (*(char *)(unaff_x19 + 0x321) != '\0') {
                  if (*unaff_x20 == 0) goto thunk_FUN_01b48178;
                  plVar24 = (long *)(*unaff_x20 + 0x38);
                  lVar12 = *plVar24;
                  if (lVar12 == 0) goto thunk_FUN_01b48178;
                  iVar6 = *(int *)(unaff_x19 + 0x490);
                  if (0x100 < *(int *)(lVar12 + 0x18) - iVar6) {
                    iVar7 = 0x100;
                    if (0x100 < iVar6 + 1) {
                      iVar7 = iVar6 + 1;
                    }
                    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    FUN_01f52d44(plVar24,iVar7,1,*(undefined8 *)PTR_DAT_03d9cb30);
                    unaff_x24 = (long *)PTR_DAT_03d9c920;
                  }
                }
                if (0 < (int)uVar8) {
                  lVar12 = 0;
                  uVar27 = 0;
                  lVar15 = 0x54;
                  lVar29 = 0x20;
                  do {
                    if (uVar27 != 0) {
                      lVar20 = *plVar14;
                      if (lVar20 == 0) goto thunk_FUN_01b48178;
                      if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_036b7478;
                      uVar23 = *(undefined8 *)(lVar20 + uVar27 * 8 + 0x20);
                      if (*(int *)(*(long *)
                                    Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                  + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uVar16 = FUN_03922f24(uVar23,0,0);
                      if ((uVar16 & 1) != 0) {
                        lVar20 = *unaff_x24;
                        plVar24 = (long *)*plVar14;
                        if (*(int *)(lVar20 + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                          lVar20 = *unaff_x24;
                        }
                        lVar20 = **(long **)(lVar20 + 0xb8);
                        if (lVar20 == 0) goto thunk_FUN_01b48178;
                        if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_036b7478;
                        lVar20 = lVar20 + lVar15;
                        in_stack_00000160 = *(undefined8 *)(lVar20 + -4);
                        in_stack_00000158 = *(undefined8 *)(lVar20 + -0xc);
                        in_stack_00000150 = *(undefined8 *)(lVar20 + -0x14);
                        in_stack_00000148 = *(undefined8 *)(lVar20 + -0x1c);
                        in_stack_00000140 = *(undefined8 *)(lVar20 + -0x24);
                        in_stack_00000138 = *(undefined8 *)(lVar20 + -0x2c);
                        in_stack_00000130 = *(undefined8 *)(lVar20 + -0x34);
                        lVar20 = FUN_03701aec();
                        if (plVar24 == (long *)0x0) goto thunk_FUN_01b48178;
                        if ((lVar20 != 0) &&
                           (lVar17 = thunk_FUN_01afa9e0(lVar20,*(undefined8 *)(*plVar24 + 0x40)),
                           lVar17 == 0)) {
LAB_036b747c:
                          uVar23 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
                          FUN_01b48050(uVar23,0);
                        }
                        if (*(uint *)(plVar24 + 3) <= uVar27) goto LAB_036b7478;
                        plVar24[uVar27 + 4] = lVar20;
                        thunk_FUN_01b4f09c((long)plVar24 + lVar29,lVar20);
                        unaff_x24 = (long *)PTR_DAT_03d9c920;
                        if ((*unaff_x20 == 0) ||
                           (lVar20 = *(long *)(*unaff_x20 + 0x60), lVar20 == 0))
                        goto thunk_FUN_01b48178;
                        if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_036b7478;
                        puVar18 = (undefined8 *)(lVar20 + lVar12 + 0x30);
                        *puVar18 = 0;
                        thunk_FUN_01b4f09c(puVar18,0);
                      }
                      lVar20 = *plVar14;
                      if (lVar20 == 0) goto thunk_FUN_01b48178;
                      if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_036b7478;
                      lVar20 = *(long *)(lVar20 + uVar27 * 8 + 0x20);
                      if (lVar20 == 0) goto thunk_FUN_01b48178;
                      uVar23 = *(undefined8 *)(lVar20 + 0x38);
                      if (*(int *)(*(long *)
                                    Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                  + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                      }
                      uVar16 = FUN_03922f24(uVar23,0,0);
                      if ((uVar16 & 1) == 0) {
                        lVar20 = *plVar14;
                        if (lVar20 == 0) goto thunk_FUN_01b48178;
                        if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_036b7478;
                        lVar20 = *(long *)(lVar20 + uVar27 * 8 + 0x20);
                        if ((lVar20 == 0) || (lVar20 = *(long *)(lVar20 + 0x38), lVar20 == 0))
                        goto thunk_FUN_01b48178;
                        iVar6 = FUN_03922ce0(lVar20,0);
                        lVar20 = *unaff_x24;
                        if (*(int *)(lVar20 + 0xe0) == 0) {
                          thunk_FUN_01ac7298(lVar20);
                          lVar20 = *unaff_x24;
                        }
                        lVar20 = **(long **)(lVar20 + 0xb8);
                        if (lVar20 == 0) goto thunk_FUN_01b48178;
                        if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_036b7478;
                        lVar20 = *(long *)(lVar20 + lVar15 + -0x1c);
                        if (lVar20 == 0) goto thunk_FUN_01b48178;
                        iVar7 = FUN_03922ce0(lVar20,0);
                        if (iVar6 != iVar7) goto LAB_036b6f94;
                      }
                      else {
LAB_036b6f94:
                        lVar20 = *plVar14;
                        if (lVar20 == 0) goto thunk_FUN_01b48178;
                        if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_036b7478;
                        lVar17 = *unaff_x24;
                        lVar20 = *(long *)(lVar20 + uVar27 * 8 + 0x20);
                        if (*(int *)(lVar17 + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                          lVar17 = *unaff_x24;
                        }
                        lVar17 = **(long **)(lVar17 + 0xb8);
                        if (lVar17 == 0) goto thunk_FUN_01b48178;
                        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_036b7478;
                        if (lVar20 == 0) goto thunk_FUN_01b48178;
                        thunk_FUN_03701608(lVar20,*(undefined8 *)(lVar17 + lVar15 + -0x1c),0);
                        lVar20 = *plVar14;
                        if (lVar20 == 0) goto thunk_FUN_01b48178;
                        if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_036b7478;
                        lVar17 = **(long **)(*unaff_x24 + 0xb8);
                        if (lVar17 == 0) goto thunk_FUN_01b48178;
                        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_036b7478;
                        lVar20 = *(long *)(lVar20 + uVar27 * 8 + 0x20);
                        if (lVar20 == 0) goto thunk_FUN_01b48178;
                        *(undefined8 *)(lVar20 + 0x20) = *(undefined8 *)(lVar17 + lVar15 + -0x2c);
                        thunk_FUN_01b4f09c();
                        lVar20 = *plVar14;
                        if (lVar20 == 0) goto thunk_FUN_01b48178;
                        if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_036b7478;
                        lVar17 = **(long **)(*unaff_x24 + 0xb8);
                        if (lVar17 == 0) goto thunk_FUN_01b48178;
                        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_036b7478;
                        lVar20 = *(long *)(lVar20 + uVar27 * 8 + 0x20);
                        if (lVar20 == 0) goto thunk_FUN_01b48178;
                        *(undefined8 *)(lVar20 + 0x28) = *(undefined8 *)(lVar17 + lVar15 + -0x24);
                        thunk_FUN_01b4f09c();
                      }
                      lVar20 = *unaff_x24;
                      if (*(int *)(lVar20 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                        lVar20 = *unaff_x24;
                      }
                      lVar17 = **(long **)(lVar20 + 0xb8);
                      if (lVar17 == 0) goto thunk_FUN_01b48178;
                      if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_036b7478;
                      if (*(char *)(lVar17 + lVar15 + -0x13) != '\0') {
                        lVar21 = *plVar14;
                        if (lVar21 == 0) goto thunk_FUN_01b48178;
                        if (*(uint *)(lVar21 + 0x18) <= uVar27) goto LAB_036b7478;
                        lVar21 = *(long *)(lVar21 + uVar27 * 8 + 0x20);
                        if (*(int *)(lVar20 + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                          lVar17 = **(long **)(*unaff_x24 + 0xb8);
                          if (lVar17 == 0) goto thunk_FUN_01b48178;
                        }
                        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_036b7478;
                        if (lVar21 == 0) goto thunk_FUN_01b48178;
                        FUN_03701638(lVar21,*(undefined8 *)(lVar17 + lVar15 + -0x1c),0);
                        lVar20 = *plVar14;
                        if (lVar20 == 0) goto thunk_FUN_01b48178;
                        if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_036b7478;
                        lVar17 = **(long **)(*unaff_x24 + 0xb8);
                        if (lVar17 == 0) goto thunk_FUN_01b48178;
                        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_036b7478;
                        lVar20 = *(long *)(lVar20 + uVar27 * 8 + 0x20);
                        if (lVar20 == 0) goto thunk_FUN_01b48178;
                        *(undefined8 *)(lVar20 + 0x48) = *(undefined8 *)(lVar17 + lVar15 + -0xc);
                        thunk_FUN_01b4f09c();
                      }
                    }
                    lVar20 = *unaff_x24;
                    if (*(int *)(lVar20 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                      lVar20 = *unaff_x24;
                    }
                    lVar20 = **(long **)(lVar20 + 0xb8);
                    if (lVar20 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_036b7478;
                    if ((*unaff_x20 == 0) || (lVar17 = *(long *)(*unaff_x20 + 0x60), lVar17 == 0))
                    goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_036b7478;
                    lVar21 = *(long *)(lVar17 + lVar12 + 0x30);
                    iVar6 = *(int *)(lVar20 + lVar15);
                    if (lVar21 == 0) {
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
                        FUN_036f884c(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar6 + 1,0
                                    );
                        memcpy(&stack0x00000090,&stack0x000000e0,0x50);
                        if (*(int *)(lVar17 + 0x18) == 0) goto LAB_036b7478;
                        memcpy((void *)(lVar17 + lVar12 + 0x20),&stack0x00000090,0x50);
                        __dest = (void *)(lVar17 + 0x20);
                      }
                      else {
                        lVar20 = *plVar14;
                        if (lVar20 == 0) goto thunk_FUN_01b48178;
                        if (*(uint *)(lVar20 + 0x18) <= uVar27) goto LAB_036b7478;
                        lVar20 = *(long *)(lVar20 + uVar27 * 8 + 0x20);
                        if (lVar20 == 0) goto thunk_FUN_01b48178;
                        uVar23 = FUN_03701980(lVar20,0);
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
                        FUN_036f884c(&stack0x000000e0,uVar23,iVar6 + 1,0);
                        memcpy(&stack0x00000040,&stack0x000000e0,0x50);
                        if (*(uint *)(lVar17 + 0x18) <= uVar27) goto LAB_036b7478;
                        __dest = (void *)(lVar17 + lVar12 + 0x20);
                        memcpy(__dest,&stack0x00000040,0x50);
                      }
                      thunk_FUN_01b4f09c(__dest,0);
                    }
                    else {
                      iVar7 = *(int *)(lVar21 + 0x18);
                      if (iVar7 < iVar6 * 4) {
LAB_036b7200:
                        if (iVar6 < 0x401) {
                          iVar6 = FUN_039155e8(iVar6 + 1,0);
                        }
                        else {
                          iVar6 = iVar6 + 0x100;
                        }
                        if (*(int *)(*(long *)
                                      Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__
                                    + 0xe0) == 0) {
                          thunk_FUN_01ac7298();
                        }
                        FUN_036f961c(lVar17 + lVar12 + 0x20,iVar6,0);
                      }
                      else if ((0 < iVar6) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
                        iVar1 = iVar7 + 3;
                        if (-1 < iVar7) {
                          iVar1 = iVar7;
                        }
                        if (0x100 < (iVar1 >> 2) - iVar6) goto LAB_036b7200;
                      }
                    }
                    unaff_x24 = (long *)PTR_DAT_03d9c920;
                    if ((*unaff_x20 == 0) || (lVar20 = *(long *)(*unaff_x20 + 0x60), lVar20 == 0))
                    goto thunk_FUN_01b48178;
                    lVar17 = *(long *)PTR_DAT_03d9c920;
                    if (*(int *)(lVar17 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                      lVar17 = *unaff_x24;
                    }
                    lVar17 = **(long **)(lVar17 + 0xb8);
                    if (lVar17 == 0) goto thunk_FUN_01b48178;
                    if ((*(uint *)(lVar17 + 0x18) <= uVar27) || (*(uint *)(lVar20 + 0x18) <= uVar27)
                       ) goto LAB_036b7478;
                    *(undefined8 *)(lVar20 + lVar12 + 0x68) =
                         *(undefined8 *)(lVar17 + lVar15 + -0x1c);
                    thunk_FUN_01b4f09c();
                    uVar27 = uVar27 + 1;
                    lVar12 = lVar12 + 0x50;
                    lVar15 = lVar15 + 0x38;
                    lVar29 = lVar29 + 8;
                  } while (uVar8 != uVar27);
                }
                puVar5 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
                lVar12 = *plVar14;
                if (lVar12 != 0) {
                  lVar15 = (-(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3) + 0x20;
                  lVar29 = (long)(int)uVar8 * 0x50 + 0x20;
                  do {
                    uVar8 = (uint)uVar13;
                    if ((int)*(uint *)(lVar12 + 0x18) <= (int)uVar8) goto LAB_036b6c0c;
                    if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_036b7478;
                    uVar23 = *(undefined8 *)(lVar12 + lVar15);
                    if (*(int *)(*(long *)
                                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar13 = FUN_0391f968(uVar23,0,0);
                    if ((uVar13 & 1) == 0) goto LAB_036b6c0c;
                    if ((*unaff_x20 == 0) || (lVar12 = *(long *)(*unaff_x20 + 0x60), lVar12 == 0))
                    break;
                    uVar22 = *(uint *)(lVar12 + 0x18);
                    if ((int)uVar8 < (int)uVar22) {
                      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
                        thunk_FUN_01ac7298();
                        uVar22 = *(uint *)(lVar12 + 0x18);
                      }
                      if (uVar22 <= uVar8) goto LAB_036b7478;
                      FUN_036fa5b4(lVar12 + lVar29,0,1,0);
                    }
                    lVar12 = *plVar14;
                    uVar13 = (ulong)(uVar8 + 1);
                    lVar29 = lVar29 + 0x50;
                    lVar15 = lVar15 + 8;
                  } while (lVar12 != 0);
                }
              }
            }
          }
        }
      }
    }
  }
thunk_FUN_01b48178:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


