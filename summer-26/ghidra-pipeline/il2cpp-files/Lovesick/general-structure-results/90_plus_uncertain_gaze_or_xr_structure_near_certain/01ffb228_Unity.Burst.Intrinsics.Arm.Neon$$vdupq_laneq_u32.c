/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vdupq_laneq_u32
ENTRY_POINT: 01ffb228
PROGRAM: Lovesick-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01ffc11c) */
/* WARNING: Removing unreachable block (ram,0x01ffc110) */
/* WARNING: Removing unreachable block (ram,0x01ffbbb4) */

long * Unity_Burst_Intrinsics_Arm_Neon__vdupq_laneq_u32(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  long *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
  *(undefined1 *)(unaff_x21 + 0x863) = 1;
  puVar4 = System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo;
  if (unaff_x22 == (long *)0x0) {
    return unaff_x23;
  }
  lVar17 = *unaff_x22;
  uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
  if (uVar19 != 0) {
    piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) ==
          *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
        puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
        goto LAB_01ffb29c;
      }
      uVar19 = uVar19 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar19 != 0);
  }
  puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffb29c:
  iVar8 = (*(code *)*puVar12)();
  puVar1 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  puVar2 = Method_UnityEngine_UIElements_UIR_Page_DataSet<Vertex>_Dispose__;
  if (iVar8 == 0) {
    return unaff_x23;
  }
  if (unaff_x19 != (long *)0x0) {
    lVar17 = *(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar17 = *(long *)puVar1;
    }
    lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x38);
    if (lVar17 == 0) goto LAB_01ffc104;
    if (*(uint *)(lVar17 + 0x18) <= unaff_w20) goto LAB_01ffc108;
    lVar17 = lVar17 + (long)(int)unaff_w20 * 0x10;
    in_stack_00000020 = *(undefined8 *)(lVar17 + 0x20);
    in_stack_00000028 = *(undefined8 *)(lVar17 + 0x28);
    thunk_FUN_00d61fa0(*(undefined8 *)
                        UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo,
                       &stack0x00000020);
    lVar17 = *unaff_x19;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) ==
            *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_01ffb390;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffb390:
    uVar13 = (*(code *)*puVar12)();
    plVar14 = (long *)thunk_FUN_00d6225c(uVar13,*(undefined8 *)puVar4);
    if (plVar14 != (long *)0x0) {
      lVar17 = *plVar14;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
            puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_01ffb400;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar4,1);
LAB_01ffb400:
      iVar8 = (*(code *)*puVar12)(plVar14,puVar12[1]);
      if (unaff_x23 == (long *)0x0) goto LAB_01ffc104;
      lVar17 = *unaff_x23;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
            puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_01ffb464;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffb464:
      iVar9 = (*(code *)*puVar12)();
      lVar17 = *unaff_x22;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
            puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_01ffb4c4;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffb4c4:
      iVar10 = (*(code *)*puVar12)();
      if (iVar8 == iVar10 + iVar9) {
        lVar17 = *plVar14;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
              puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_01ffb528;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar2,0);
LAB_01ffb528:
        plVar15 = (long *)(*(code *)*puVar12)(plVar14,puVar12[1]);
        lVar17 = *unaff_x23;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
              puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_01ffb584;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffb584:
        plVar16 = (long *)(*(code *)*puVar12)();
        puVar1 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
        if (plVar16 == (long *)0x0) goto LAB_01ffc104;
        do {
          lVar17 = *plVar16;
          uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
                puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_01ffb5ec;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_00d59724(plVar16,*(long *)puVar1,0);
LAB_01ffb5ec:
          uVar19 = (*(code *)*puVar12)(plVar16,puVar12[1]);
          if ((uVar19 & 1) == 0) {
LAB_01ffb724:
            lVar17 = *unaff_x22;
            uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
            if (uVar19 == 0) goto LAB_01ffb754;
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            goto LAB_01ffb73c;
          }
          if (plVar15 == (long *)0x0) goto LAB_01ffc104;
          lVar17 = *plVar15;
          uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
                puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_01ffb64c;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_00d59724(plVar15,*(long *)puVar1,0);
LAB_01ffb64c:
          uVar19 = (*(code *)*puVar12)(plVar15,puVar12[1]);
          if ((uVar19 & 1) == 0) goto LAB_01ffb724;
          lVar17 = *plVar16;
          uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
                puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto LAB_01ffb6ac;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_00d59724(plVar16,*(long *)puVar1,1);
LAB_01ffb6ac:
          lVar17 = (*(code *)*puVar12)(plVar16,puVar12[1]);
          lVar18 = *plVar15;
          uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
                puVar12 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                goto FUN_01ffb70c;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_00d59724(plVar15,*(long *)puVar1,1);
FUN_01ffb70c:
          lVar18 = (*(code *)*puVar12)(plVar15,puVar12[1]);
        } while (lVar17 == lVar18);
      }
    }
  }
  goto LAB_01ffb904;
LAB_01ffbb34:
  plVar15 = (long *)thunk_FUN_00d6225c(plVar15,*(undefined8 *)puVar1);
  if (plVar15 != (long *)0x0) {
    lVar17 = *plVar15;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_01ffbb9c;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar15,*(long *)puVar1,0);
LAB_01ffbb9c:
    (*(code *)*puVar12)(plVar15,puVar12[1]);
  }
  puVar4 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  lVar17 = *unaff_x22;
  uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
  if (uVar19 != 0) {
    piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
    do {
      if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
        puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
        goto LAB_01ffbc0c;
      }
      uVar19 = uVar19 - 1;
      piVar20 = piVar20 + 4;
    } while (uVar19 != 0);
  }
  puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffbc0c:
  plVar15 = (long *)(*(code *)*puVar12)();
  puVar2 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar18 = *plVar15;
    lVar17 = *(long *)puVar2;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar17) {
          puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_01ffbc74;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar15,lVar17,0);
LAB_01ffbc74:
    uVar19 = (*(code *)*puVar12)(plVar15,puVar12[1]);
    if ((uVar19 & 1) == 0) break;
    lVar18 = *plVar15;
    lVar17 = *(long *)puVar2;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == lVar17) {
          puVar12 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_01ffbcd4;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar15,lVar17,1);
LAB_01ffbcd4:
    uVar13 = (*(code *)*puVar12)(plVar15,puVar12[1]);
    (**(code **)(*plVar14 + 0x308))(plVar14,uVar13,*(undefined8 *)(*plVar14 + 0x310));
  } while( true );
  plVar15 = (long *)thunk_FUN_00d6225c(plVar15,*(undefined8 *)puVar1);
  if (plVar15 != (long *)0x0) {
    lVar17 = *plVar15;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_01ffbd60;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar15,*(long *)puVar1,0);
LAB_01ffbd60:
    (*(code *)*puVar12)(plVar15,puVar12[1]);
  }
  puVar7 = StringLiteral_3724;
  puVar6 = Method_System_Runtime_Serialization_Formatters_Binary_BinaryAssemblyInfo_GetAssembly__;
  puVar5 = Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__;
  puVar3 = System_Xml_QueryOutputWriter_TypeInfo;
  puVar1 = System_IndexOutOfRangeException_TypeInfo;
  puVar2 = System_Data_SqlTypes_SqlByte___TypeInfo;
  if (unaff_x19 == (long *)0x0) {
    return plVar14;
  }
  if (unaff_w20 == 2) {
    uVar11 = (**(code **)(*plVar14 + 0x298))(plVar14,*(undefined8 *)(*plVar14 + 0x2a0));
    uVar13 = FUN_00da4fb8(*(undefined8 *)puVar1,uVar11);
    (**(code **)(*plVar14 + 0x368))(plVar14,uVar13,0,*(undefined8 *)(*plVar14 + 0x370));
    lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar17 == 0) goto LAB_01ffc104;
    FUN_01fd8fec(lVar17,uVar13,1,0);
  }
  else if (unaff_w20 == 1) {
    uVar11 = (**(code **)(*plVar14 + 0x298))(plVar14,*(undefined8 *)(*plVar14 + 0x2a0));
    uVar13 = FUN_00da4fb8(*(undefined8 *)puVar5,uVar11);
    (**(code **)(*plVar14 + 0x368))(plVar14,uVar13,0,*(undefined8 *)(*plVar14 + 0x370));
    lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
    if (lVar17 == 0) goto LAB_01ffc104;
    FUN_01fdf08c(lVar17,uVar13,1,0);
  }
  else if (unaff_w20 == 0) {
    uVar11 = (**(code **)(*plVar14 + 0x298))(plVar14,*(undefined8 *)(*plVar14 + 0x2a0));
    uVar13 = FUN_00da4fb8(*(undefined8 *)puVar3,uVar11);
    (**(code **)(*plVar14 + 0x368))(plVar14,uVar13,0,*(undefined8 *)(*plVar14 + 0x370));
    lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
    if (lVar17 == 0) goto LAB_01ffc104;
    FUN_020cc648(lVar17,uVar13,0);
  }
  lVar17 = *(long *)puVar4;
  if (*(int *)(lVar17 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar17 = *(long *)puVar4;
  }
  lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x38);
  if (lVar17 != 0) {
    if (unaff_w20 < *(uint *)(lVar17 + 0x18)) {
      lVar17 = lVar17 + (long)(int)unaff_w20 * 0x10;
      in_stack_00000020 = *(undefined8 *)(lVar17 + 0x20);
      in_stack_00000028 = *(undefined8 *)(lVar17 + 0x28);
      thunk_FUN_00d61fa0(*(undefined8 *)
                          UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo,
                         &stack0x00000020);
      lVar17 = *unaff_x19;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) ==
              *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
            puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
            goto LAB_01ffbf9c;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffbf9c:
      (*(code *)*puVar12)();
      lVar17 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40);
      if (lVar17 == 0) goto LAB_01ffc104;
      if (unaff_w20 < *(uint *)(lVar17 + 0x18)) {
        lVar17 = lVar17 + (long)(int)unaff_w20 * 0x10;
        in_stack_00000010 = *(undefined8 *)(lVar17 + 0x20);
        in_stack_00000018 = *(undefined8 *)(lVar17 + 0x28);
        thunk_FUN_00d61fa0(*(undefined8 *)
                            UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                           ,&stack0x00000010);
        lVar17 = *unaff_x19;
        uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) ==
                *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
              puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 10) * 0x10 + 0x138);
              goto LAB_01ffc048;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffc048:
        (*(code *)*puVar12)();
        lVar17 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48);
        if (lVar17 == 0) goto LAB_01ffc104;
        if (unaff_w20 < *(uint *)(lVar17 + 0x18)) {
          thunk_FUN_00d61fa0(*(undefined8 *)
                              UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                            );
          lVar17 = *unaff_x19;
          uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
          if (uVar19 != 0) {
            piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) ==
                  *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
                puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 10) * 0x10 + 0x138);
                goto LAB_01ffc0f0;
              }
              uVar19 = uVar19 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar19 != 0);
          }
          puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffc0f0:
          (*(code *)*puVar12)();
          return plVar14;
        }
      }
    }
LAB_01ffc108:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  goto LAB_01ffc104;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_01ffb73c:
    if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
      puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_01ffb770;
    }
  }
LAB_01ffb754:
  puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffb770:
  plVar16 = (long *)(*(code *)*puVar12)();
  if (plVar16 == (long *)0x0) goto LAB_01ffc104;
  do {
    lVar17 = *plVar16;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_01ffb7d0;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar16,*(long *)puVar1,0);
LAB_01ffb7d0:
    uVar19 = (*(code *)*puVar12)(plVar16,puVar12[1]);
    if ((uVar19 & 1) == 0) {
      return plVar14;
    }
    if (plVar15 == (long *)0x0) goto LAB_01ffc104;
    lVar17 = *plVar15;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_01ffb830;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar15,*(long *)puVar1,0);
LAB_01ffb830:
    uVar19 = (*(code *)*puVar12)(plVar15,puVar12[1]);
    if ((uVar19 & 1) == 0) {
      return plVar14;
    }
    lVar17 = *plVar16;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
          puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_01ffb890;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar16,*(long *)puVar1,1);
LAB_01ffb890:
    lVar17 = (*(code *)*puVar12)(plVar16,puVar12[1]);
    lVar18 = *plVar15;
    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar1) {
          puVar12 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_01ffb8f0;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar15,*(long *)puVar1,1);
LAB_01ffb8f0:
    lVar18 = (*(code *)*puVar12)(plVar15,puVar12[1]);
  } while (lVar17 == lVar18);
LAB_01ffb904:
  if (unaff_x23 != (long *)0x0) {
    lVar17 = *unaff_x23;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
          puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto Unity_Burst_Intrinsics_Arm_Neon__vpaddq_f32;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724();
Unity_Burst_Intrinsics_Arm_Neon__vpaddq_f32:
    puVar1 = PTR_DAT_033ee168;
    iVar8 = (*(code *)*puVar12)();
    lVar17 = *unaff_x22;
    uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar19 != 0) {
      piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
          puVar12 = (undefined8 *)(lVar17 + (long)(*piVar20 + 1) * 0x10 + 0x138);
          goto LAB_01ffb9c0;
        }
        uVar19 = uVar19 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar19 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffb9c0:
    iVar9 = (*(code *)*puVar12)();
    plVar14 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (plVar14 != (long *)0x0) {
      FUN_01743cd4(plVar14,iVar9 + iVar8,0);
      lVar17 = *unaff_x23;
      uVar19 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar19 != 0) {
        piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar20 + -2) == *(long *)puVar2) {
            puVar12 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_01ffba3c;
          }
          uVar19 = uVar19 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar19 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffba3c:
      puVar1 = StringLiteral_10310;
      plVar15 = (long *)(*(code *)*puVar12)();
      puVar4 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      do {
        lVar18 = *plVar15;
        lVar17 = *(long *)puVar4;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar17) {
              puVar12 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_01ffbaac;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724(plVar15,lVar17,0);
LAB_01ffbaac:
        uVar19 = (*(code *)*puVar12)(plVar15,puVar12[1]);
        if ((uVar19 & 1) == 0) goto LAB_01ffbb34;
        lVar18 = *plVar15;
        lVar17 = *(long *)puVar4;
        uVar19 = (ulong)*(ushort *)(lVar18 + 0x12a);
        if (uVar19 != 0) {
          piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar17) {
              puVar12 = (undefined8 *)(lVar18 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_01ffbb0c;
            }
            uVar19 = uVar19 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar19 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724(plVar15,lVar17,1);
LAB_01ffbb0c:
        uVar13 = (*(code *)*puVar12)(plVar15,puVar12[1]);
        (**(code **)(*plVar14 + 0x308))(plVar14,uVar13,*(undefined8 *)(*plVar14 + 0x310));
      } while( true );
    }
  }
LAB_01ffc104:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


