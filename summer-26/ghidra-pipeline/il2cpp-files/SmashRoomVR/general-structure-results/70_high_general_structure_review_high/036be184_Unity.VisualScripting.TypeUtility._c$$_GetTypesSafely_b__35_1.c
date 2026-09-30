/*
FUNCTION_NAME: Unity.VisualScripting.TypeUtility.<>c$$<GetTypesSafely>b__35_1
ENTRY_POINT: 036be184
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


undefined4
Unity_VisualScripting_TypeUtility_<>c__<GetTypesSafely>b__35_1
          (undefined1 param_1 [16],ulong param_2,uint param_3)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  void *__dest;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  long *unaff_x20;
  uint uVar12;
  ulong uVar13;
  long unaff_x22;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  long *unaff_x24;
  ulong uVar17;
  long *unaff_x27;
  long lVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
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
  
  *(uint *)(unaff_x22 + 0x34) = param_3;
  if (*unaff_x20 != 0) {
    plVar14 = (long *)(*unaff_x20 + 0x60);
    lVar9 = *plVar14;
    if (lVar9 != 0) {
      uVar13 = (ulong)param_3;
      if (*(int *)(lVar9 + 0x18) < (int)param_3) {
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_01f52de4(plVar14,uVar13,0,*(undefined8 *)PTR_DAT_03d9cb38);
      }
      if (*(long *)(unaff_x19 + 0x708) != 0) {
        plVar14 = (long *)(unaff_x19 + 0x708);
        if (*(int *)(*(long *)(unaff_x19 + 0x708) + 0x18) < (int)param_3) {
          uVar3 = FUN_039155e8(param_3 + 1,0);
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*unaff_x27);
          }
          FUN_01f52b30(plVar14,uVar3,*(undefined8 *)PTR_DAT_03d9cc70);
        }
        if (*(char *)(unaff_x19 + 0x321) != '\0') {
          if (*unaff_x20 == 0) goto LAB_036bea38;
          plVar15 = (long *)(*unaff_x20 + 0x38);
          lVar9 = *plVar15;
          if (lVar9 == 0) goto LAB_036bea38;
          iVar4 = *(int *)(unaff_x19 + 0x490);
          if (0x100 < *(int *)(lVar9 + 0x18) - iVar4) {
            iVar5 = 0x100;
            if (0x100 < iVar4 + 1) {
              iVar5 = iVar4 + 1;
            }
            if (*(int *)(*unaff_x27 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_01f52d44(plVar15,iVar5,1,*(undefined8 *)PTR_DAT_03d9cb30);
            unaff_x24 = (long *)PTR_DAT_03d9c920;
          }
        }
        fVar2 = DAT_00b55084;
        if (0 < (int)param_3) {
          lVar9 = 0;
          uVar17 = 0;
          lVar18 = 0x54;
          lVar19 = 0x20;
          do {
            fVar23 = (float)param_2;
            if (uVar17 != 0) {
              lVar10 = *plVar14;
              if (lVar10 == 0) goto LAB_036bea38;
              if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_036beac8;
              uVar16 = *(undefined8 *)(lVar10 + uVar17 * 8 + 0x20);
              if (*(int *)(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar6 = FUN_03922f24(uVar16,0,0);
              if ((uVar6 & 1) != 0) {
                lVar10 = *unaff_x24;
                plVar15 = (long *)*plVar14;
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar10 = *unaff_x24;
                }
                lVar10 = **(long **)(lVar10 + 0xb8);
                if (lVar10 == 0) goto LAB_036bea38;
                if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_036beac8;
                lVar10 = lVar10 + lVar18;
                in_stack_00000160 = *(undefined8 *)(lVar10 + -4);
                in_stack_00000158 = *(undefined8 *)(lVar10 + -0xc);
                in_stack_00000150 = *(undefined8 *)(lVar10 + -0x14);
                in_stack_00000148 = *(undefined8 *)(lVar10 + -0x1c);
                uVar16 = *(undefined8 *)(lVar10 + -0x24);
                in_stack_00000138 = *(undefined8 *)(lVar10 + -0x2c);
                in_stack_00000130 = *(undefined8 *)(lVar10 + -0x34);
                in_stack_00000140 = uVar16;
                lVar10 = FUN_03702d14();
                fVar23 = (float)uVar16;
                if (plVar15 == (long *)0x0) goto LAB_036bea38;
                if ((lVar10 != 0) &&
                   (lVar7 = thunk_FUN_01afa9e0(lVar10,*(undefined8 *)(*plVar15 + 0x40)), lVar7 == 0)
                   ) {
                  uVar16 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
                  FUN_01b48050(uVar16,0);
                }
                if (*(uint *)(plVar15 + 3) <= uVar17) goto LAB_036beac8;
                plVar15[uVar17 + 4] = lVar10;
                thunk_FUN_01b4f09c((long)plVar15 + lVar19,lVar10);
                unaff_x24 = (long *)PTR_DAT_03d9c920;
                if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x60), lVar10 == 0))
                goto LAB_036bea38;
                if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_036beac8;
                puVar8 = (undefined8 *)(lVar10 + lVar9 + 0x30);
                *puVar8 = 0;
                thunk_FUN_01b4f09c(puVar8,0);
              }
              if (*(long *)(unaff_x19 + 0x380) == 0) goto LAB_036bea38;
              fVar20 = (float)FUN_03928134(*(long *)(unaff_x19 + 0x380),0);
              lVar10 = *plVar14;
              if (lVar10 == 0) goto LAB_036bea38;
              if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_036beac8;
              lVar10 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
              if ((lVar10 == 0) || (fVar22 = fVar23, lVar10 = FUN_039ad440(lVar10,0), lVar10 == 0))
              goto LAB_036bea38;
              fVar21 = (float)FUN_03928134(lVar10,0);
              fVar23 = (fVar23 - fVar22) * (fVar23 - fVar22);
              param_2 = (ulong)(uint)fVar23;
              if (fVar2 <= (fVar20 - fVar21) * (fVar20 - fVar21) + fVar23) {
                lVar10 = *plVar14;
                if (lVar10 == 0) goto LAB_036bea38;
                if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_036beac8;
                lVar10 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_036bea38;
                lVar10 = FUN_039ad440(lVar10,0);
                if ((*(long *)(unaff_x19 + 0x380) == 0) ||
                   (FUN_03928134(*(long *)(unaff_x19 + 0x380),0), lVar10 == 0)) goto LAB_036bea38;
                FUN_039281c4(lVar10,0);
              }
              lVar10 = *plVar14;
              if (lVar10 == 0) goto LAB_036bea38;
              if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_036beac8;
              lVar10 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
              if (lVar10 == 0) goto LAB_036bea38;
              uVar16 = *(undefined8 *)(lVar10 + 0xf0);
              if (*(int *)(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar6 = FUN_03922f24(uVar16,0,0);
              if ((uVar6 & 1) == 0) {
                lVar10 = *plVar14;
                if (lVar10 == 0) goto LAB_036bea38;
                if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_036beac8;
                lVar10 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
                if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0xf0), lVar10 == 0))
                goto LAB_036bea38;
                iVar4 = FUN_03922ce0(lVar10,0);
                lVar10 = *unaff_x24;
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_01ac7298(lVar10);
                  lVar10 = *unaff_x24;
                }
                lVar10 = **(long **)(lVar10 + 0xb8);
                if (lVar10 == 0) goto LAB_036bea38;
                if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_036beac8;
                lVar10 = *(long *)(lVar10 + lVar18 + -0x1c);
                if (lVar10 == 0) goto LAB_036bea38;
                iVar5 = FUN_03922ce0(lVar10,0);
                if (iVar4 != iVar5) goto LAB_036be568;
              }
              else {
LAB_036be568:
                lVar10 = *plVar14;
                if (lVar10 == 0) goto LAB_036bea38;
                if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_036beac8;
                lVar7 = *unaff_x24;
                lVar10 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
                if (*(int *)(lVar7 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar7 = *unaff_x24;
                }
                lVar7 = **(long **)(lVar7 + 0xb8);
                if (lVar7 == 0) goto LAB_036bea38;
                if (*(uint *)(lVar7 + 0x18) <= uVar17) goto LAB_036beac8;
                if (lVar10 == 0) goto LAB_036bea38;
                thunk_FUN_03702968(lVar10,*(undefined8 *)(lVar7 + lVar18 + -0x1c),0);
                lVar10 = *plVar14;
                if (lVar10 == 0) goto LAB_036bea38;
                if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_036beac8;
                lVar7 = **(long **)(*unaff_x24 + 0xb8);
                if (lVar7 == 0) goto LAB_036bea38;
                if (*(uint *)(lVar7 + 0x18) <= uVar17) goto LAB_036beac8;
                lVar10 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_036bea38;
                *(undefined8 *)(lVar10 + 0xd8) = *(undefined8 *)(lVar7 + lVar18 + -0x2c);
                thunk_FUN_01b4f09c();
                lVar10 = *plVar14;
                if (lVar10 == 0) goto LAB_036bea38;
                if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_036beac8;
                lVar7 = **(long **)(*unaff_x24 + 0xb8);
                if (lVar7 == 0) goto LAB_036bea38;
                if (*(uint *)(lVar7 + 0x18) <= uVar17) goto LAB_036beac8;
                lVar10 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_036bea38;
                *(undefined8 *)(lVar10 + 0xe0) = *(undefined8 *)(lVar7 + lVar18 + -0x24);
                thunk_FUN_01b4f09c();
              }
              lVar10 = *unaff_x24;
              if (*(int *)(lVar10 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
                lVar10 = *unaff_x24;
              }
              lVar7 = **(long **)(lVar10 + 0xb8);
              if (lVar7 == 0) goto LAB_036bea38;
              if (*(uint *)(lVar7 + 0x18) <= uVar17) goto LAB_036beac8;
              if (*(char *)(lVar7 + lVar18 + -0x13) != '\0') {
                lVar11 = *plVar14;
                if (lVar11 == 0) goto LAB_036bea38;
                if (*(uint *)(lVar11 + 0x18) <= uVar17) goto LAB_036beac8;
                lVar11 = *(long *)(lVar11 + uVar17 * 8 + 0x20);
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                  lVar7 = **(long **)(*unaff_x24 + 0xb8);
                  if (lVar7 == 0) goto LAB_036bea38;
                }
                if (*(uint *)(lVar7 + 0x18) <= uVar17) goto LAB_036beac8;
                if (lVar11 == 0) goto LAB_036bea38;
                FUN_037029c4(lVar11,*(undefined8 *)(lVar7 + lVar18 + -0x1c),0);
                lVar10 = *plVar14;
                if (lVar10 == 0) goto LAB_036bea38;
                if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_036beac8;
                lVar7 = **(long **)(*unaff_x24 + 0xb8);
                if (lVar7 == 0) goto LAB_036bea38;
                if (*(uint *)(lVar7 + 0x18) <= uVar17) goto LAB_036beac8;
                lVar10 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_036bea38;
                *(undefined8 *)(lVar10 + 0x100) = *(undefined8 *)(lVar7 + lVar18 + -0xc);
                thunk_FUN_01b4f09c(lVar10 + 0x100);
              }
            }
            lVar10 = *unaff_x24;
            if (*(int *)(lVar10 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar10 = *unaff_x24;
            }
            lVar10 = **(long **)(lVar10 + 0xb8);
            if (lVar10 == 0) goto LAB_036bea38;
            if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_036beac8;
            if ((*unaff_x20 == 0) || (lVar7 = *(long *)(*unaff_x20 + 0x60), lVar7 == 0))
            goto LAB_036bea38;
            if (*(uint *)(lVar7 + 0x18) <= uVar17) goto LAB_036beac8;
            lVar11 = *(long *)(lVar7 + lVar9 + 0x30);
            iVar4 = *(int *)(lVar10 + lVar18);
            if (lVar11 == 0) {
              if (uVar17 == 0) {
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
                FUN_036f884c(&stack0x000000e0,*(undefined8 *)(unaff_x19 + 0x3a0),iVar4 + 1,0);
                memcpy(&stack0x00000090,&stack0x000000e0,0x50);
                if (*(int *)(lVar7 + 0x18) == 0) goto LAB_036beac8;
                memcpy((void *)(lVar7 + lVar9 + 0x20),&stack0x00000090,0x50);
                __dest = (void *)(lVar7 + 0x20);
              }
              else {
                lVar10 = *plVar14;
                if (lVar10 == 0) goto LAB_036bea38;
                if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_036beac8;
                lVar10 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_036bea38;
                uVar16 = FUN_03702ba4(lVar10,0);
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
                FUN_036f884c(&stack0x000000e0,uVar16,iVar4 + 1,0);
                memcpy(&stack0x00000040,&stack0x000000e0,0x50);
                if (*(uint *)(lVar7 + 0x18) <= uVar17) goto LAB_036beac8;
                __dest = (void *)(lVar7 + lVar9 + 0x20);
                memcpy(__dest,&stack0x00000040,0x50);
              }
              thunk_FUN_01b4f09c(__dest,0);
            }
            else {
              iVar5 = *(int *)(lVar11 + 0x18);
              if (iVar5 < iVar4 * 4) {
LAB_036be7d8:
                if (iVar4 < 0x401) {
                  iVar4 = FUN_039155e8(iVar4 + 1,0);
                }
                else {
                  iVar4 = iVar4 + 0x100;
                }
                if (*(int *)(*(long *)
                              Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_69__ +
                            0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                FUN_036f961c(lVar7 + lVar9 + 0x20,iVar4,0);
              }
              else if ((0 < iVar4) && (*(char *)(unaff_x19 + 0x321) != '\0')) {
                iVar1 = iVar5 + 3;
                if (-1 < iVar5) {
                  iVar1 = iVar5;
                }
                if (0x100 < (iVar1 >> 2) - iVar4) goto LAB_036be7d8;
              }
            }
            unaff_x24 = (long *)PTR_DAT_03d9c920;
            if ((*unaff_x20 == 0) || (lVar10 = *(long *)(*unaff_x20 + 0x60), lVar10 == 0))
            goto LAB_036bea38;
            lVar7 = *(long *)PTR_DAT_03d9c920;
            if (*(int *)(lVar7 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
              lVar7 = *unaff_x24;
            }
            lVar7 = **(long **)(lVar7 + 0xb8);
            if (lVar7 == 0) goto LAB_036bea38;
            if ((*(uint *)(lVar7 + 0x18) <= uVar17) || (*(uint *)(lVar10 + 0x18) <= uVar17))
            goto LAB_036beac8;
            *(undefined8 *)(lVar10 + lVar9 + 0x68) = *(undefined8 *)(lVar7 + lVar18 + -0x1c);
            thunk_FUN_01b4f09c();
            uVar17 = uVar17 + 1;
            lVar9 = lVar9 + 0x50;
            lVar18 = lVar18 + 0x38;
            lVar19 = lVar19 + 8;
          } while (param_3 != uVar17);
        }
        lVar9 = *plVar14;
        if (lVar9 != 0) {
          lVar18 = (-(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3) + 0x20;
          do {
            uVar12 = (uint)uVar13;
            if ((int)*(uint *)(lVar9 + 0x18) <= (int)uVar12) {
LAB_036be118:
              return *(undefined4 *)(unaff_x19 + 0x490);
            }
            if (*(uint *)(lVar9 + 0x18) <= uVar12) {
LAB_036beac8:
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            uVar16 = *(undefined8 *)(lVar9 + lVar18);
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar13 = FUN_0391f968(uVar16,0,0);
            if ((uVar13 & 1) == 0) goto LAB_036be118;
            if ((*unaff_x20 == 0) || (lVar9 = *(long *)(*unaff_x20 + 0x60), lVar9 == 0)) break;
            if ((int)uVar12 < *(int *)(lVar9 + 0x18)) {
              lVar9 = *plVar14;
              if (lVar9 == 0) break;
              if (*(uint *)(lVar9 + 0x18) <= uVar12) goto LAB_036beac8;
              if ((*(long *)(lVar9 + lVar18) == 0) ||
                 (lVar9 = FUN_039add2c(*(long *)(lVar9 + lVar18),0), lVar9 == 0)) break;
              FUN_03af8c9c(lVar9,0,0);
            }
            lVar9 = *plVar14;
            uVar13 = (ulong)(uVar12 + 1);
            lVar18 = lVar18 + 8;
          } while (lVar9 != 0);
        }
      }
    }
  }
LAB_036bea38:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


