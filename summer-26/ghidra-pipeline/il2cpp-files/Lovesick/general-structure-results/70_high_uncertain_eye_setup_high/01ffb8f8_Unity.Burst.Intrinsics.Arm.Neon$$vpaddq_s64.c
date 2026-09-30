/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vpaddq_s64
ENTRY_POINT: 01ffb8f8
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

long * Unity_Burst_Intrinsics_Arm_Neon__vpaddq_s64(code *param_1)

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
  undefined4 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  long *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  while (lVar11 = (*param_1)(), unaff_x26 == lVar11) {
    lVar11 = *unaff_x25;
    uVar17 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *unaff_x29) {
          puVar12 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_01ffb7d0;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffb7d0:
    uVar17 = (*(code *)*puVar12)();
    if ((uVar17 & 1) == 0) {
      return unaff_x21;
    }
    if (unaff_x24 == (long *)0x0) goto LAB_01ffc104;
    lVar11 = *unaff_x24;
    uVar17 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *unaff_x29) {
          puVar12 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_01ffb830;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffb830:
    uVar17 = (*(code *)*puVar12)();
    if ((uVar17 & 1) == 0) {
      return unaff_x21;
    }
    lVar11 = *unaff_x25;
    uVar17 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *unaff_x29) {
          puVar12 = (undefined8 *)(lVar11 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_01ffb890;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffb890:
    unaff_x26 = (*(code *)*puVar12)();
    lVar11 = *unaff_x24;
    uVar17 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *unaff_x29) {
          puVar12 = (undefined8 *)(lVar11 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_01ffb8f0;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffb8f0:
    param_1 = (code *)*puVar12;
  }
  if (unaff_x23 != (long *)0x0) {
    lVar11 = *unaff_x23;
    uVar17 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *unaff_x28) {
          puVar12 = (undefined8 *)(lVar11 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto Unity_Burst_Intrinsics_Arm_Neon__vpaddq_f32;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724();
Unity_Burst_Intrinsics_Arm_Neon__vpaddq_f32:
    puVar1 = PTR_DAT_033ee168;
    iVar8 = (*(code *)*puVar12)();
    lVar11 = *unaff_x22;
    uVar17 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *unaff_x28) {
          puVar12 = (undefined8 *)(lVar11 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_01ffb9c0;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffb9c0:
    iVar9 = (*(code *)*puVar12)();
    plVar13 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (plVar13 != (long *)0x0) {
      FUN_01743cd4(plVar13,iVar9 + iVar8,0);
      lVar11 = *unaff_x23;
      uVar17 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x27) {
            puVar12 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_01ffba3c;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
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
        lVar16 = *plVar14;
        lVar11 = *(long *)puVar1;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar11) {
              puVar12 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_01ffbaac;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724(plVar14,lVar11,0);
LAB_01ffbaac:
        uVar17 = (*(code *)*puVar12)(plVar14,puVar12[1]);
        if ((uVar17 & 1) == 0) goto LAB_01ffbb34;
        lVar16 = *plVar14;
        lVar11 = *(long *)puVar1;
        uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar11) {
              puVar12 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
              goto LAB_01ffbb0c;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724(plVar14,lVar11,1);
LAB_01ffbb0c:
        uVar15 = (*(code *)*puVar12)(plVar14,puVar12[1]);
        (**(code **)(*plVar13 + 0x308))(plVar13,uVar15,*(undefined8 *)(*plVar13 + 0x310));
      } while( true );
    }
  }
  goto LAB_01ffc104;
LAB_01ffbb34:
  plVar14 = (long *)thunk_FUN_00d6225c(plVar14,*(undefined8 *)puVar2);
  if (plVar14 != (long *)0x0) {
    lVar11 = *plVar14;
    uVar17 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
          puVar12 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_01ffbb9c;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar14,*(long *)puVar2,0);
LAB_01ffbb9c:
    (*(code *)*puVar12)(plVar14,puVar12[1]);
  }
  puVar1 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  lVar11 = *unaff_x22;
  uVar17 = (ulong)*(ushort *)(lVar11 + 0x12a);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *unaff_x27) {
        puVar12 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_01ffbc0c;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
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
    lVar16 = *plVar14;
    lVar11 = *(long *)puVar3;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar11) {
          puVar12 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_01ffbc74;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar14,lVar11,0);
LAB_01ffbc74:
    uVar17 = (*(code *)*puVar12)(plVar14,puVar12[1]);
    if ((uVar17 & 1) == 0) break;
    lVar16 = *plVar14;
    lVar11 = *(long *)puVar3;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar11) {
          puVar12 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_01ffbcd4;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar14,lVar11,1);
LAB_01ffbcd4:
    uVar15 = (*(code *)*puVar12)(plVar14,puVar12[1]);
    (**(code **)(*plVar13 + 0x308))(plVar13,uVar15,*(undefined8 *)(*plVar13 + 0x310));
  } while( true );
  plVar14 = (long *)thunk_FUN_00d6225c(plVar14,*(undefined8 *)puVar2);
  if (plVar14 != (long *)0x0) {
    lVar11 = *plVar14;
    uVar17 = (ulong)*(ushort *)(lVar11 + 0x12a);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
          puVar12 = (undefined8 *)(lVar11 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_01ffbd60;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
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
    uVar10 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
    uVar15 = FUN_00da4fb8(*(undefined8 *)puVar3,uVar10);
    (**(code **)(*plVar13 + 0x368))(plVar13,uVar15,0,*(undefined8 *)(*plVar13 + 0x370));
    lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar11 == 0) goto LAB_01ffc104;
    FUN_01fd8fec(lVar11,uVar15,1,0);
  }
  else if (unaff_w20 == 1) {
    uVar10 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
    uVar15 = FUN_00da4fb8(*(undefined8 *)puVar5,uVar10);
    (**(code **)(*plVar13 + 0x368))(plVar13,uVar15,0,*(undefined8 *)(*plVar13 + 0x370));
    lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
    if (lVar11 == 0) goto LAB_01ffc104;
    FUN_01fdf08c(lVar11,uVar15,1,0);
  }
  else if (unaff_w20 == 0) {
    uVar10 = (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
    uVar15 = FUN_00da4fb8(*(undefined8 *)puVar4,uVar10);
    (**(code **)(*plVar13 + 0x368))(plVar13,uVar15,0,*(undefined8 *)(*plVar13 + 0x370));
    lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
    if (lVar11 == 0) goto LAB_01ffc104;
    FUN_020cc648(lVar11,uVar15,0);
  }
  lVar11 = *(long *)puVar1;
  if (*(int *)(lVar11 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar11 = *(long *)puVar1;
  }
  lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x38);
  if (lVar11 != 0) {
    if (unaff_w20 < *(uint *)(lVar11 + 0x18)) {
      lVar11 = lVar11 + (long)(int)unaff_w20 * 0x10;
      in_stack_00000020 = *(undefined8 *)(lVar11 + 0x20);
      in_stack_00000028 = *(undefined8 *)(lVar11 + 0x28);
      thunk_FUN_00d61fa0(*(undefined8 *)
                          UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo,
                         &stack0x00000020);
      lVar11 = *unaff_x19;
      uVar17 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) ==
              *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
            puVar12 = (undefined8 *)(lVar11 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_01ffbf9c;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffbf9c:
      (*(code *)*puVar12)();
      lVar11 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
      if (lVar11 == 0) goto LAB_01ffc104;
      if (unaff_w20 < *(uint *)(lVar11 + 0x18)) {
        lVar11 = lVar11 + (long)(int)unaff_w20 * 0x10;
        in_stack_00000010 = *(undefined8 *)(lVar11 + 0x20);
        in_stack_00000018 = *(undefined8 *)(lVar11 + 0x28);
        thunk_FUN_00d61fa0(*(undefined8 *)
                            UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                           ,&stack0x00000010);
        lVar11 = *unaff_x19;
        uVar17 = (ulong)*(ushort *)(lVar11 + 0x12a);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) ==
                *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
              puVar12 = (undefined8 *)(lVar11 + (long)(*piVar18 + 10) * 0x10 + 0x138);
              goto LAB_01ffc048;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar12 = (undefined8 *)FUN_00d59724();
LAB_01ffc048:
        (*(code *)*puVar12)();
        lVar11 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48);
        if (lVar11 == 0) goto LAB_01ffc104;
        if (unaff_w20 < *(uint *)(lVar11 + 0x18)) {
          thunk_FUN_00d61fa0(*(undefined8 *)
                              UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                            );
          lVar11 = *unaff_x19;
          uVar17 = (ulong)*(ushort *)(lVar11 + 0x12a);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) ==
                  *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
                puVar12 = (undefined8 *)(lVar11 + (long)(*piVar18 + 10) * 0x10 + 0x138);
                goto LAB_01ffc0f0;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
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
LAB_01ffc104:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


