/*
FUNCTION_NAME: Unity.VisualScripting.TypeFilter$$get_ExpectsBoolean
ENTRY_POINT: 036b6bf8
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


undefined4 Unity_VisualScripting_TypeFilter__get_ExpectsBoolean(void)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  void *__dest;
  uint uVar11;
  long lVar12;
  long lVar13;
  long unaff_x19;
  long *unaff_x20;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  long *unaff_x24;
  ulong uVar19;
  long *unaff_x27;
  long lVar20;
  undefined8 in_stack_00000020;
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
  
  if (*(char *)(unaff_x19 + 0x3f5) != '\0') {
    *(undefined1 *)(unaff_x19 + 0x3f5) = 0;
LAB_036b6c0c:
    return *(undefined4 *)(unaff_x19 + 0x490);
  }
  lVar15 = *unaff_x20;
  if (lVar15 != 0) {
    *(undefined4 *)(lVar15 + 0x1c) = in_stack_00000020._4_4_;
    lVar7 = *unaff_x24;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar7 = *unaff_x24;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if (lVar7 != 0) {
      uVar3 = FUN_02554fc4(lVar7,*(undefined8 *)PTR_DAT_03d9b168);
      *(uint *)(lVar15 + 0x34) = uVar3;
      if (*unaff_x20 != 0) {
        plVar16 = (long *)(*unaff_x20 + 0x60);
        lVar15 = *plVar16;
        if (lVar15 != 0) {
          uVar14 = (ulong)uVar3;
          if (*(int *)(lVar15 + 0x18) < (int)uVar3) {
            if (*(int *)(*unaff_x27 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_01f52de4(plVar16,uVar14,0,*(undefined8 *)PTR_DAT_03d9cb38);
          }
          if (*(long *)(unaff_x19 + 0x708) != 0) {
            plVar16 = (long *)(unaff_x19 + 0x708);
            if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)uVar3) {
              uVar4 = FUN_039155e8(uVar3 + 1,0);
              if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                thunk_FUN_01ac7298(*unaff_x27);
              }
              FUN_01f52b30(plVar16,uVar4,*(undefined8 *)PTR_DAT_03d9cb40);
            }
            if (*(char *)(unaff_x19 + 0x321) != '\0') {
              if (*unaff_x20 == 0) goto thunk_FUN_01b48178;
              plVar17 = (long *)(*unaff_x20 + 0x38);
              lVar15 = *plVar17;
              if (lVar15 == 0) goto thunk_FUN_01b48178;
              iVar5 = *(int *)(unaff_x19 + 0x490);
              if (0x100 < *(int *)(lVar15 + 0x18) - iVar5) {
                iVar6 = 0x100;
                if (0x100 < iVar5 + 1) {
                  iVar6 = iVar5 + 1;
                }
                if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                FUN_01f52d44(plVar17,iVar6,1,*(undefined8 *)PTR_DAT_03d9cb30);
                unaff_x24 = (long *)PTR_DAT_03d9c920;
              }
            }
            if (0 < (int)uVar3) {
              lVar15 = 0;
              uVar19 = 0;
              lVar7 = 0x54;
              lVar20 = 0x20;
              do {
                if (uVar19 != 0) {
                  lVar12 = *plVar16;
                  if (lVar12 == 0) goto thunk_FUN_01b48178;
                  if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_036b7478;
                  uVar18 = *(undefined8 *)(lVar12 + uVar19 * 8 + 0x20);
                  if (*(int *)(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar8 = FUN_03922f24(uVar18,0,0);
                  if ((uVar8 & 1) != 0) {
                    lVar12 = *unaff_x24;
                    plVar17 = (long *)*plVar16;
                    if (*(int *)(lVar12 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                      lVar12 = *unaff_x24;
                    }
                    lVar12 = **(long **)(lVar12 + 0xb8);
                    if (lVar12 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_036b7478;
                    lVar12 = lVar12 + lVar7;
                    in_stack_00000160 = *(undefined8 *)(lVar12 + -4);
                    in_stack_00000158 = *(undefined8 *)(lVar12 + -0xc);
                    in_stack_00000150 = *(undefined8 *)(lVar12 + -0x14);
                    in_stack_00000148 = *(undefined8 *)(lVar12 + -0x1c);
                    in_stack_00000140 = *(undefined8 *)(lVar12 + -0x24);
                    in_stack_00000138 = *(undefined8 *)(lVar12 + -0x2c);
                    in_stack_00000130 = *(undefined8 *)(lVar12 + -0x34);
                    lVar12 = FUN_03701aec();
                    if (plVar17 == (long *)0x0) goto thunk_FUN_01b48178;
                    if ((lVar12 != 0) &&
                       (lVar9 = thunk_FUN_01afa9e0(lVar12,*(undefined8 *)(*plVar17 + 0x40)),
                       lVar9 == 0)) {
                      uVar18 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
                      FUN_01b48050(uVar18,0);
                    }
                    if (*(uint *)(plVar17 + 3) <= uVar19) goto LAB_036b7478;
                    plVar17[uVar19 + 4] = lVar12;
                    thunk_FUN_01b4f09c((long)plVar17 + lVar20,lVar12);
                    unaff_x24 = (long *)PTR_DAT_03d9c920;
                    if (*unaff_x20 == 0) goto thunk_FUN_01b48178;
                    lVar12 = *(long *)(*unaff_x20 + 0x60);
                    if (lVar12 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_036b7478;
                    puVar10 = (undefined8 *)(lVar12 + lVar15 + 0x30);
                    *puVar10 = 0;
                    thunk_FUN_01b4f09c(puVar10,0);
                  }
                  lVar12 = *plVar16;
                  if (lVar12 == 0) goto thunk_FUN_01b48178;
                  if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_036b7478;
                  lVar12 = *(long *)(lVar12 + uVar19 * 8 + 0x20);
                  if (lVar12 == 0) goto thunk_FUN_01b48178;
                  uVar18 = *(undefined8 *)(lVar12 + 0x38);
                  if (*(int *)(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar8 = FUN_03922f24(uVar18,0,0);
                  if ((uVar8 & 1) == 0) {
                    lVar12 = *plVar16;
                    if (lVar12 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_036b7478;
                    lVar12 = *(long *)(lVar12 + uVar19 * 8 + 0x20);
                    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x38), lVar12 == 0))
                    goto thunk_FUN_01b48178;
                    iVar5 = FUN_03922ce0(lVar12,0);
                    lVar12 = *unaff_x24;
                    if (*(int *)(lVar12 + 0xe0) == 0) {
                      thunk_FUN_01ac7298(lVar12);
                      lVar12 = *unaff_x24;
                    }
                    lVar12 = **(long **)(lVar12 + 0xb8);
                    if (lVar12 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_036b7478;
                    lVar12 = *(long *)(lVar12 + lVar7 + -0x1c);
                    if (lVar12 == 0) goto thunk_FUN_01b48178;
                    iVar6 = FUN_03922ce0(lVar12,0);
                    if (iVar5 != iVar6) goto LAB_036b6f94;
                  }
                  else {
LAB_036b6f94:
                    lVar12 = *plVar16;
                    if (lVar12 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_036b7478;
                    lVar9 = *unaff_x24;
                    lVar12 = *(long *)(lVar12 + uVar19 * 8 + 0x20);
                    if (*(int *)(lVar9 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                      lVar9 = *unaff_x24;
                    }
                    lVar9 = **(long **)(lVar9 + 0xb8);
                    if (lVar9 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_036b7478;
                    if (lVar12 == 0) goto thunk_FUN_01b48178;
                    thunk_FUN_03701608(lVar12,*(undefined8 *)(lVar9 + lVar7 + -0x1c),0);
                    lVar12 = *plVar16;
                    if (lVar12 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_036b7478;
                    lVar9 = **(long **)(*unaff_x24 + 0xb8);
                    if (lVar9 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_036b7478;
                    lVar12 = *(long *)(lVar12 + uVar19 * 8 + 0x20);
                    if (lVar12 == 0) goto thunk_FUN_01b48178;
                    *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)(lVar9 + lVar7 + -0x2c);
                    thunk_FUN_01b4f09c();
                    lVar12 = *plVar16;
                    if (lVar12 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_036b7478;
                    lVar9 = **(long **)(*unaff_x24 + 0xb8);
                    if (lVar9 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_036b7478;
                    lVar12 = *(long *)(lVar12 + uVar19 * 8 + 0x20);
                    if (lVar12 == 0) goto thunk_FUN_01b48178;
                    *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)(lVar9 + lVar7 + -0x24);
                    thunk_FUN_01b4f09c();
                  }
                  lVar12 = *unaff_x24;
                  if (*(int *)(lVar12 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    lVar12 = *unaff_x24;
                  }
                  lVar9 = **(long **)(lVar12 + 0xb8);
                  if (lVar9 == 0) goto thunk_FUN_01b48178;
                  if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_036b7478;
                  if (*(char *)(lVar9 + lVar7 + -0x13) != '\0') {
                    lVar13 = *plVar16;
                    if (lVar13 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_036b7478;
                    lVar13 = *(long *)(lVar13 + uVar19 * 8 + 0x20);
                    if (*(int *)(lVar12 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                      lVar9 = **(long **)(*unaff_x24 + 0xb8);
                      if (lVar9 == 0) goto thunk_FUN_01b48178;
                    }
                    if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_036b7478;
                    if (lVar13 == 0) goto thunk_FUN_01b48178;
                    FUN_03701638(lVar13,*(undefined8 *)(lVar9 + lVar7 + -0x1c),0);
                    lVar12 = *plVar16;
                    if (lVar12 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_036b7478;
                    lVar9 = **(long **)(*unaff_x24 + 0xb8);
                    if (lVar9 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_036b7478;
                    lVar12 = *(long *)(lVar12 + uVar19 * 8 + 0x20);
                    if (lVar12 == 0) goto thunk_FUN_01b48178;
                    *(undefined8 *)(lVar12 + 0x48) = *(undefined8 *)(lVar9 + lVar7 + -0xc);
                    thunk_FUN_01b4f09c();
                  }
                }
                lVar12 = *unaff_x24;
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar12 = *unaff_x24;
                }
                lVar12 = **(long **)(lVar12 + 0xb8);
                if (lVar12 == 0) goto thunk_FUN_01b48178;
                if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_036b7478;
                if ((*unaff_x20 == 0) || (lVar9 = *(long *)(*unaff_x20 + 0x60), lVar9 == 0))
                goto thunk_FUN_01b48178;
                if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_036b7478;
                lVar13 = *(long *)(lVar9 + lVar15 + 0x30);
                iVar5 = *(int *)(lVar12 + lVar7);
                if (lVar13 == 0) {
                  if (uVar19 == 0) {
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
                    FUN_036f884c(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar5 + 1,0);
                    memcpy(&stack0x00000090,&stack0x000000e0,0x50);
                    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_036b7478;
                    memcpy((void *)(lVar9 + lVar15 + 0x20),&stack0x00000090,0x50);
                    __dest = (void *)(lVar9 + 0x20);
                  }
                  else {
                    lVar12 = *plVar16;
                    if (lVar12 == 0) goto thunk_FUN_01b48178;
                    if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_036b7478;
                    lVar12 = *(long *)(lVar12 + uVar19 * 8 + 0x20);
                    if (lVar12 == 0) goto thunk_FUN_01b48178;
                    uVar18 = FUN_03701980(lVar12,0);
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
                    FUN_036f884c(&stack0x000000e0,uVar18,iVar5 + 1,0);
                    memcpy(&stack0x00000040,&stack0x000000e0,0x50);
                    if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_036b7478;
                    __dest = (void *)(lVar9 + lVar15 + 0x20);
                    memcpy(__dest,&stack0x00000040,0x50);
                  }
                  thunk_FUN_01b4f09c(__dest,0);
                }
                else {
                  iVar6 = *(int *)(lVar13 + 0x18);
                  if (iVar6 < iVar5 * 4) {
LAB_036b7200:
                    if (iVar5 < 0x401) {
                      iVar5 = FUN_039155e8(iVar5 + 1,0);
                    }
                    else {
                      iVar5 = iVar5 + 0x100;
                    }
                    if (*(int *)(*(long *)
                                  Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__
                                + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    FUN_036f961c(lVar9 + lVar15 + 0x20,iVar5,0);
                  }
                  else if ((0 < iVar5) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
                    iVar1 = iVar6 + 3;
                    if (-1 < iVar6) {
                      iVar1 = iVar6;
                    }
                    if (0x100 < (iVar1 >> 2) - iVar5) goto LAB_036b7200;
                  }
                }
                unaff_x24 = (long *)PTR_DAT_03d9c920;
                if (*unaff_x20 == 0) goto thunk_FUN_01b48178;
                lVar12 = *(long *)(*unaff_x20 + 0x60);
                if (lVar12 == 0) goto thunk_FUN_01b48178;
                lVar9 = *(long *)PTR_DAT_03d9c920;
                if (*(int *)(lVar9 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar9 = *unaff_x24;
                }
                lVar9 = **(long **)(lVar9 + 0xb8);
                if (lVar9 == 0) goto thunk_FUN_01b48178;
                if ((*(uint *)(lVar9 + 0x18) <= uVar19) || (*(uint *)(lVar12 + 0x18) <= uVar19))
                goto LAB_036b7478;
                *(undefined8 *)(lVar12 + lVar15 + 0x68) = *(undefined8 *)(lVar9 + lVar7 + -0x1c);
                thunk_FUN_01b4f09c();
                uVar19 = uVar19 + 1;
                lVar15 = lVar15 + 0x50;
                lVar7 = lVar7 + 0x38;
                lVar20 = lVar20 + 8;
              } while (uVar3 != uVar19);
            }
            puVar2 = Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__;
            lVar15 = *plVar16;
            if (lVar15 != 0) {
              lVar7 = (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3) + 0x20;
              lVar20 = (long)(int)uVar3 * 0x50 + 0x20;
              do {
                uVar3 = (uint)uVar14;
                if ((int)*(uint *)(lVar15 + 0x18) <= (int)uVar3) goto LAB_036b6c0c;
                if (*(uint *)(lVar15 + 0x18) <= uVar3) {
LAB_036b7478:
                    /* WARNING: Subroutine does not return */
                  FUN_01b48180();
                }
                uVar18 = *(undefined8 *)(lVar15 + lVar7);
                if (*(int *)(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar14 = FUN_0391f968(uVar18,0,0);
                if ((uVar14 & 1) == 0) goto LAB_036b6c0c;
                if ((*unaff_x20 == 0) || (lVar15 = *(long *)(*unaff_x20 + 0x60), lVar15 == 0))
                break;
                uVar11 = *(uint *)(lVar15 + 0x18);
                if ((int)uVar3 < (int)uVar11) {
                  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                    uVar11 = *(uint *)(lVar15 + 0x18);
                  }
                  if (uVar11 <= uVar3) goto LAB_036b7478;
                  FUN_036fa5b4(lVar15 + lVar20,0,1,0);
                }
                lVar15 = *plVar16;
                uVar14 = (ulong)(uVar3 + 1);
                lVar20 = lVar20 + 0x50;
                lVar7 = lVar7 + 8;
              } while (lVar15 != 0);
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


