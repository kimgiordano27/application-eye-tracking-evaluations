/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vdupb_lane_s8
ENTRY_POINT: 01ffb3e8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x01ffbbb4) */
/* WARNING: Removing unreachable block (ram,0x01ffc11c) */
/* WARNING: Removing unreachable block (ram,0x01ffc110) */

long * Unity_Burst_Intrinsics_Arm_Neon__vdupb_lane_s8(void)

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
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  puVar12 = (undefined8 *)FUN_00d59724();
  iVar8 = (*(code *)*puVar12)();
  if (unaff_x23 == (long *)0x0) goto LAB_01ffc104;
  lVar16 = *unaff_x23;
  uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
  if (uVar18 != 0) {
    piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *unaff_x28) {
        puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
        goto LAB_01ffb464;
      }
      uVar18 = uVar18 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar18 != 0);
  }
  puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffb464:
  iVar9 = (*(code *)*puVar12)();
  lVar16 = *unaff_x22;
  uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
  if (uVar18 != 0) {
    piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *unaff_x28) {
        puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
        goto LAB_01ffb4c4;
      }
      uVar18 = uVar18 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar18 != 0);
  }
  puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffb4c4:
  iVar10 = (*(code *)*puVar12)();
  if (iVar8 == iVar10 + iVar9) {
    lVar16 = *unaff_x21;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *unaff_x27) {
          puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_01ffb528;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffb528:
    plVar13 = (long *)(*(code *)*puVar12)();
    lVar16 = *unaff_x23;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *unaff_x27) {
          puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_01ffb584;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffb584:
    plVar14 = (long *)(*(code *)*puVar12)();
    puVar1 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    if (plVar14 == (long *)0x0) goto LAB_01ffc104;
    do {
      lVar16 = *plVar14;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
            puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_01ffb5ec;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar1,0);
LAB_01ffb5ec:
      uVar18 = (*(code *)*puVar12)(plVar14,puVar12[1]);
      if ((uVar18 & 1) == 0) {
LAB_01ffb724:
        lVar16 = *unaff_x22;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar18 == 0) goto LAB_01ffb754;
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        goto LAB_01ffb73c;
      }
      if (plVar13 == (long *)0x0) goto LAB_01ffc104;
      lVar16 = *plVar13;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
            puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_01ffb64c;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar1,0);
LAB_01ffb64c:
      uVar18 = (*(code *)*puVar12)(plVar13,puVar12[1]);
      if ((uVar18 & 1) == 0) goto LAB_01ffb724;
      lVar16 = *plVar14;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
            puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_01ffb6ac;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar1,1);
LAB_01ffb6ac:
      lVar16 = (*(code *)*puVar12)(plVar14,puVar12[1]);
      lVar17 = *plVar13;
      uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
            puVar12 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto FUN_01ffb70c;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar1,1);
FUN_01ffb70c:
      lVar17 = (*(code *)*puVar12)(plVar13,puVar12[1]);
    } while (lVar16 == lVar17);
  }
  goto LAB_01ffb904;
LAB_01ffbb34:
  plVar14 = (long *)thunk_FUN_00d6225c(plVar14,*(undefined8 *)puVar2);
  if (plVar14 != (long *)0x0) {
    lVar16 = *plVar14;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
          puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_01ffbb9c;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar2,0);
LAB_01ffbb9c:
    (*(code *)*puVar12)(plVar14,puVar12[1]);
  }
  puVar1 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  lVar16 = *unaff_x22;
  uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
  if (uVar18 != 0) {
    piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *unaff_x27) {
        puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
        goto LAB_01ffbc0c;
      }
      uVar18 = uVar18 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar18 != 0);
  }
  puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffbc0c:
  plVar14 = (long *)(*(code *)*puVar12)();
  puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar17 = *plVar14;
    lVar16 = *(long *)puVar3;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar16) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_01ffbc74;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar14,lVar16,0);
LAB_01ffbc74:
    uVar18 = (*(code *)*puVar12)(plVar14,puVar12[1]);
    if ((uVar18 & 1) == 0) break;
    lVar17 = *plVar14;
    lVar16 = *(long *)puVar3;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar16) {
          puVar12 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto LAB_01ffbcd4;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar14,lVar16,1);
LAB_01ffbcd4:
    uVar15 = (*(code *)*puVar12)(plVar14,puVar12[1]);
    (**(code **)(*plVar13 + 0x308))(plVar13,uVar15,*(undefined8 *)(*plVar13 + 0x310));
  } while( true );
  plVar14 = (long *)thunk_FUN_00d6225c(plVar14,*(undefined8 *)puVar2);
  if (plVar14 != (long *)0x0) {
    lVar16 = *plVar14;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar2) {
          puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_01ffbd60;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar2,0);
LAB_01ffbd60:
    (*(code *)*puVar12)(plVar14,puVar12[1]);
  }
  puVar7 = StringLiteral_3724;
  puVar6 = Method_System_Runtime_Serialization_Formatters_Binary_BinaryAssemblyInfo_GetAssembly__;
  puVar5 = Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__;
  puVar4 = System_Xml_QueryOutputWriter_TypeInfo;
  puVar3 = System_IndexOutOfRangeException_TypeInfo;
  puVar2 = System_Data_SqlTypes_SqlByte___TypeInfo;
  if (unaff_x19 == (long *)0x0) {
    return plVar13;
  }
  if (unaff_w20 == 2) {
    uVar11 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
    uVar15 = FUN_00da4fb8(*(undefined8 *)puVar3,uVar11);
    (**(code **)(*plVar13 + 0x368))(plVar13,uVar15,0,*(undefined8 *)(*plVar13 + 0x370));
    lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar16 == 0) goto LAB_01ffc104;
    FUN_01fd8fec(lVar16,uVar15,1,0);
  }
  else if (unaff_w20 == 1) {
    uVar11 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
    uVar15 = FUN_00da4fb8(*(undefined8 *)puVar5,uVar11);
    (**(code **)(*plVar13 + 0x368))(plVar13,uVar15,0,*(undefined8 *)(*plVar13 + 0x370));
    lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
    if (lVar16 == 0) goto LAB_01ffc104;
    FUN_01fdf08c(lVar16,uVar15,1,0);
  }
  else if (unaff_w20 == 0) {
    uVar11 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
    uVar15 = FUN_00da4fb8(*(undefined8 *)puVar4,uVar11);
    (**(code **)(*plVar13 + 0x368))(plVar13,uVar15,0,*(undefined8 *)(*plVar13 + 0x370));
    lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
    if (lVar16 == 0) goto LAB_01ffc104;
    FUN_020cc648(lVar16,uVar15,0);
  }
  lVar16 = *(long *)puVar1;
  if (*(int *)(lVar16 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar16 = *(long *)puVar1;
  }
  lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 0x38);
  if (lVar16 != 0) {
    if (unaff_w20 < *(uint *)(lVar16 + 0x18)) {
      lVar16 = lVar16 + (long)(int)unaff_w20 * 0x10;
      in_stack_00000020 = *(undefined8 *)(lVar16 + 0x20);
      in_stack_00000028 = *(undefined8 *)(lVar16 + 0x28);
      thunk_FUN_00d61fa0(*(undefined8 *)
                          UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo,
                         &stack0x00000020);
      lVar16 = *unaff_x19;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) ==
              *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
            puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
            goto LAB_01ffbf9c;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffbf9c:
      (*(code *)*puVar12)();
      lVar16 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
      if (lVar16 == 0) goto LAB_01ffc104;
      if (unaff_w20 < *(uint *)(lVar16 + 0x18)) {
        lVar16 = lVar16 + (long)(int)unaff_w20 * 0x10;
        in_stack_00000010 = *(undefined8 *)(lVar16 + 0x20);
        in_stack_00000018 = *(undefined8 *)(lVar16 + 0x28);
        thunk_FUN_00d61fa0(*(undefined8 *)
                            UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                           ,&stack0x00000010);
        lVar16 = *unaff_x19;
        uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) ==
                *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
              puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 10) * 0x10 + 0x138);
              goto LAB_01ffc048;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffc048:
        (*(code *)*puVar12)();
        lVar16 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48);
        if (lVar16 == 0) goto LAB_01ffc104;
        if (unaff_w20 < *(uint *)(lVar16 + 0x18)) {
          thunk_FUN_00d61fa0(*(undefined8 *)
                              UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                            );
          lVar16 = *unaff_x19;
          uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) ==
                  *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
                puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 10) * 0x10 + 0x138);
                goto LAB_01ffc0f0;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar18 != 0);
          }
          puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffc0f0:
          (*(code *)*puVar12)();
          return plVar13;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  goto LAB_01ffc104;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar19 = piVar19 + 4;
    if (uVar18 == 0) break;
LAB_01ffb73c:
    if (*(long *)(piVar19 + -2) == *unaff_x27) {
      puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_01ffb770;
    }
  }
LAB_01ffb754:
  puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffb770:
  plVar14 = (long *)(*(code *)*puVar12)();
  if (plVar14 == (long *)0x0) goto LAB_01ffc104;
  do {
    lVar16 = *plVar14;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
          puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_01ffb7d0;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar1,0);
LAB_01ffb7d0:
    uVar18 = (*(code *)*puVar12)(plVar14,puVar12[1]);
    if ((uVar18 & 1) == 0) {
      return unaff_x21;
    }
    if (plVar13 == (long *)0x0) goto LAB_01ffc104;
    lVar16 = *plVar13;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
          puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_01ffb830;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar1,0);
LAB_01ffb830:
    uVar18 = (*(code *)*puVar12)(plVar13,puVar12[1]);
    if ((uVar18 & 1) == 0) {
      return unaff_x21;
    }
    lVar16 = *plVar14;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
          puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto LAB_01ffb890;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar1,1);
LAB_01ffb890:
    lVar16 = (*(code *)*puVar12)(plVar14,puVar12[1]);
    lVar17 = *plVar13;
    uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)puVar1) {
          puVar12 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto LAB_01ffb8f0;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar1,1);
LAB_01ffb8f0:
    lVar17 = (*(code *)*puVar12)(plVar13,puVar12[1]);
  } while (lVar16 == lVar17);
LAB_01ffb904:
  if (unaff_x23 != (long *)0x0) {
    lVar16 = *unaff_x23;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *unaff_x28) {
          puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto Unity_Burst_Intrinsics_Arm_Neon__vpaddq_f32;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724();
Unity_Burst_Intrinsics_Arm_Neon__vpaddq_f32:
    puVar1 = PTR_DAT_033ee168;
    iVar8 = (*(code *)*puVar12)();
    lVar16 = *unaff_x22;
    uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar18 != 0) {
      piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *unaff_x28) {
          puVar12 = (undefined8 *)(lVar16 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto LAB_01ffb9c0;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffb9c0:
    iVar9 = (*(code *)*puVar12)();
    plVar13 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (plVar13 != (long *)0x0) {
      FUN_01743cd4(plVar13,iVar9 + iVar8,0);
      lVar16 = *unaff_x23;
      uVar18 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar18 != 0) {
        piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *unaff_x27) {
            puVar12 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_01ffba3c;
          }
          uVar18 = uVar18 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar18 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffba3c:
      puVar2 = StringLiteral_10310;
      plVar14 = (long *)(*(code *)*puVar12)();
      puVar1 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      do {
        lVar17 = *plVar14;
        lVar16 = *(long *)puVar1;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar16) {
              puVar12 = (undefined8 *)(lVar17 + (long)*piVar19 * 0x10 + 0x138);
              goto LAB_01ffbaac;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724(plVar14,lVar16,0);
LAB_01ffbaac:
        uVar18 = (*(code *)*puVar12)(plVar14,puVar12[1]);
        if ((uVar18 & 1) == 0) goto LAB_01ffbb34;
        lVar17 = *plVar14;
        lVar16 = *(long *)puVar1;
        uVar18 = (ulong)*(ushort *)(lVar17 + 0x12a);
        if (uVar18 != 0) {
          piVar19 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          do {
            if (*(long *)(piVar19 + -2) == lVar16) {
              puVar12 = (undefined8 *)(lVar17 + (long)(*piVar19 + 1) * 0x10 + 0x138);
              goto LAB_01ffbb0c;
            }
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724(plVar14,lVar16,1);
LAB_01ffbb0c:
        uVar15 = (*(code *)*puVar12)(plVar14,puVar12[1]);
        (**(code **)(*plVar13 + 0x308))(plVar13,uVar15,*(undefined8 *)(*plVar13 + 0x310));
      } while( true );
    }
  }
LAB_01ffc104:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


