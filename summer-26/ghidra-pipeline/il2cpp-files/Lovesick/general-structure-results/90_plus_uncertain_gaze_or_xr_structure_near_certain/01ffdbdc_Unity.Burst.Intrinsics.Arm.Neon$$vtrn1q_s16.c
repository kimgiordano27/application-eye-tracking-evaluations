/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vtrn1q_s16
ENTRY_POINT: 01ffdbdc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_1
*/


void Unity_Burst_Intrinsics_Arm_Neon__vtrn1q_s16(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long *unaff_x19;
  long *unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long lVar15;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
  thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
  *(undefined1 *)(unaff_x22 + 0x862) = 1;
  puVar4 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  if (unaff_x20 == (long *)0x0) {
    return;
  }
  lVar7 = *(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *(long *)puVar4;
  }
  puVar3 = UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo;
  puVar2 = System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo;
  puVar1 = System_Globalization_DateTimeFormatInfoScanner_TypeInfo;
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x30);
  if (lVar7 != 0) {
    if (*(uint *)(lVar7 + 0x18) <= unaff_w21) goto LAB_01ffe288;
    lVar15 = (long)(int)unaff_w21;
    lVar7 = lVar7 + lVar15 * 0x10;
    in_stack_00000030 = *(undefined8 *)(lVar7 + 0x20);
    in_stack_00000038 = *(undefined8 *)(lVar7 + 0x28);
    thunk_FUN_00d61fa0(*(undefined8 *)
                        UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo,
                       &stack0x00000030);
    lVar7 = *unaff_x20;
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_01ffdcb8;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724();
LAB_01ffdcb8:
    uVar9 = (*(code *)*puVar8)();
    plVar10 = (long *)thunk_FUN_00d6225c(uVar9,*(undefined8 *)puVar2);
    if (plVar10 == (long *)0x0) {
      return;
    }
    lVar7 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto FUN_01ffdd28;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar2,1);
FUN_01ffdd28:
    iVar5 = (*(code *)*puVar8)(plVar10,puVar8[1]);
    if (unaff_x19 != (long *)0x0) {
      lVar7 = *unaff_x19;
      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar7 + (long)(*piVar14 + 1) * 0x10 + 0x138);
            goto LAB_01ffdd8c;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724();
LAB_01ffdd8c:
      iVar6 = (*(code *)*puVar8)();
      puVar2 = Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__;
      if (iVar5 != iVar6) {
        return;
      }
      lVar7 = *plVar10;
      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) ==
              *(long *)Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__) {
            puVar8 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_01ffddf4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_00d59724(plVar10,*(long *)
                                     Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__
                            ,0);
LAB_01ffddf4:
      plVar10 = (long *)(*(code *)*puVar8)(plVar10,puVar8[1]);
      lVar7 = *unaff_x19;
      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_01ffde50;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724();
LAB_01ffde50:
      plVar11 = (long *)(*(code *)*puVar8)();
      puVar2 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      if (plVar10 != (long *)0x0) {
        do {
          lVar7 = *plVar10;
          uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                puVar8 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_01ffdeb8;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar2,0);
LAB_01ffdeb8:
          uVar13 = (*(code *)*puVar8)(plVar10,puVar8[1]);
          if ((uVar13 & 1) == 0) {
            return;
          }
          if (plVar11 == (long *)0x0) goto Unity_Burst_Intrinsics_Arm_Neon__vfms_n_f64;
          lVar7 = *plVar11;
          uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                puVar8 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_01ffdf18;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar2,0);
LAB_01ffdf18:
          uVar13 = (*(code *)*puVar8)(plVar11,puVar8[1]);
          if ((uVar13 & 1) == 0) {
            return;
          }
          lVar7 = *plVar10;
          uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                puVar8 = (undefined8 *)(lVar7 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto LAB_01ffdf78;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar2,1);
LAB_01ffdf78:
          lVar7 = (*(code *)*puVar8)(plVar10,puVar8[1]);
          lVar12 = *plVar11;
          uVar13 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar13 != 0) {
            piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                puVar8 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                goto FUN_01ffdfd8;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          puVar8 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar2,1);
FUN_01ffdfd8:
          lVar12 = (*(code *)*puVar8)(plVar11,puVar8[1]);
        } while (lVar7 == lVar12);
        lVar7 = *(long *)puVar4;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar7 = *(long *)puVar4;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x38);
        if (lVar7 != 0) {
          if (unaff_w21 < *(uint *)(lVar7 + 0x18)) {
            lVar7 = lVar7 + lVar15 * 0x10;
            in_stack_00000030 = *(undefined8 *)(lVar7 + 0x20);
            in_stack_00000038 = *(undefined8 *)(lVar7 + 0x28);
            thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x00000030);
            lVar7 = *unaff_x20;
            uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
            if (uVar13 != 0) {
              piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                  puVar8 = (undefined8 *)(lVar7 + (long)(*piVar14 + 10) * 0x10 + 0x138);
                  goto LAB_01ffe084;
                }
                uVar13 = uVar13 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar13 != 0);
            }
            puVar8 = (undefined8 *)FUN_00d59724();
LAB_01ffe084:
            (*(code *)*puVar8)();
            lVar7 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40);
            if (lVar7 == 0) goto Unity_Burst_Intrinsics_Arm_Neon__vfms_n_f64;
            if (unaff_w21 < *(uint *)(lVar7 + 0x18)) {
              lVar7 = lVar7 + lVar15 * 0x10;
              in_stack_00000020 = *(undefined8 *)(lVar7 + 0x20);
              in_stack_00000028 = *(undefined8 *)(lVar7 + 0x28);
              thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x00000020);
              lVar7 = *unaff_x20;
              uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                    puVar8 = (undefined8 *)(lVar7 + (long)(*piVar14 + 10) * 0x10 + 0x138);
                    goto LAB_01ffe11c;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar8 = (undefined8 *)FUN_00d59724();
LAB_01ffe11c:
              (*(code *)*puVar8)();
              lVar7 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48);
              if (lVar7 == 0) goto Unity_Burst_Intrinsics_Arm_Neon__vfms_n_f64;
              if (unaff_w21 < *(uint *)(lVar7 + 0x18)) {
                lVar7 = lVar7 + lVar15 * 0x10;
                in_stack_00000010 = *(undefined8 *)(lVar7 + 0x20);
                in_stack_00000018 = *(undefined8 *)(lVar7 + 0x28);
                thunk_FUN_00d61fa0(*(undefined8 *)puVar3,&stack0x00000010);
                lVar7 = *unaff_x20;
                uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                      puVar8 = (undefined8 *)(lVar7 + (long)(*piVar14 + 10) * 0x10 + 0x138);
                      goto LAB_01ffe1b4;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar8 = (undefined8 *)FUN_00d59724();
LAB_01ffe1b4:
                (*(code *)*puVar8)();
                lVar7 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
                if (lVar7 == 0) goto Unity_Burst_Intrinsics_Arm_Neon__vfms_n_f64;
                if (unaff_w21 < *(uint *)(lVar7 + 0x18)) {
                  thunk_FUN_00d61fa0(*(undefined8 *)puVar3);
                  lVar7 = *unaff_x20;
                  uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
                  if (uVar13 != 0) {
                    piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                        puVar8 = (undefined8 *)(lVar7 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                        goto LAB_01ffe24c;
                      }
                      uVar13 = uVar13 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar13 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_00d59724();
LAB_01ffe24c:
                  (*(code *)*puVar8)();
                  return;
                }
              }
            }
          }
LAB_01ffe288:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
      }
    }
  }
Unity_Burst_Intrinsics_Arm_Neon__vfms_n_f64:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


