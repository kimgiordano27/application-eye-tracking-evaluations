/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vdups_laneq_u32
ENTRY_POINT: 01ffb738
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

long * Unity_Burst_Intrinsics_Arm_Neon__vdups_laneq_u32
                 (long param_1,undefined8 param_2,long param_3)

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
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long in_x9;
  ulong uVar17;
  long in_x10;
  int *piVar18;
  long *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  piVar18 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar18 + -2) == param_3) {
      puVar11 = (undefined8 *)(param_1 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_01ffb770;
    }
    in_x9 = in_x9 + -1;
    piVar18 = piVar18 + 4;
  } while (in_x9 != 0);
  puVar11 = (undefined8 *)FUN_00d59724();
LAB_01ffb770:
  plVar12 = (long *)(*(code *)*puVar11)();
  if (plVar12 != (long *)0x0) {
    do {
      lVar15 = *plVar12;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x29) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_01ffb7d0;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724(plVar12,*unaff_x29,0);
LAB_01ffb7d0:
      uVar17 = (*(code *)*puVar11)(plVar12,puVar11[1]);
      if ((uVar17 & 1) == 0) {
        return unaff_x21;
      }
      if (unaff_x24 == (long *)0x0) goto LAB_01ffc104;
      lVar15 = *unaff_x24;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x29) {
            puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_01ffb830;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724();
LAB_01ffb830:
      uVar17 = (*(code *)*puVar11)();
      if ((uVar17 & 1) == 0) {
        return unaff_x21;
      }
      lVar15 = *plVar12;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x29) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_01ffb890;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724(plVar12,*unaff_x29,1);
LAB_01ffb890:
      lVar15 = (*(code *)*puVar11)(plVar12,puVar11[1]);
      lVar16 = *unaff_x24;
      uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x29) {
            puVar11 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_01ffb8f0;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724();
LAB_01ffb8f0:
      lVar16 = (*(code *)*puVar11)();
    } while (lVar15 == lVar16);
    if (unaff_x23 != (long *)0x0) {
      lVar15 = *unaff_x23;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x28) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto Unity_Burst_Intrinsics_Arm_Neon__vpaddq_f32;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724();
Unity_Burst_Intrinsics_Arm_Neon__vpaddq_f32:
      puVar1 = PTR_DAT_033ee168;
      iVar8 = (*(code *)*puVar11)();
      lVar15 = *unaff_x22;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *unaff_x28) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_01ffb9c0;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724();
LAB_01ffb9c0:
      iVar9 = (*(code *)*puVar11)();
      plVar12 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (plVar12 != (long *)0x0) {
        FUN_01743cd4(plVar12,iVar9 + iVar8,0);
        lVar15 = *unaff_x23;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == *unaff_x27) {
              puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
              goto LAB_01ffba3c;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_00d59724();
LAB_01ffba3c:
        puVar2 = StringLiteral_10310;
        plVar13 = (long *)(*(code *)*puVar11)();
        puVar1 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        do {
          lVar16 = *plVar13;
          lVar15 = *(long *)puVar1;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == lVar15) {
                puVar11 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
                goto LAB_01ffbaac;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_00d59724(plVar13,lVar15,0);
LAB_01ffbaac:
          uVar17 = (*(code *)*puVar11)(plVar13,puVar11[1]);
          if ((uVar17 & 1) == 0) goto LAB_01ffbb34;
          lVar16 = *plVar13;
          lVar15 = *(long *)puVar1;
          uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == lVar15) {
                puVar11 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
                goto LAB_01ffbb0c;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_00d59724(plVar13,lVar15,1);
LAB_01ffbb0c:
          uVar14 = (*(code *)*puVar11)(plVar13,puVar11[1]);
          (**(code **)(*plVar12 + 0x308))(plVar12,uVar14,*(undefined8 *)(*plVar12 + 0x310));
        } while( true );
      }
    }
  }
  goto LAB_01ffc104;
LAB_01ffbb34:
  plVar13 = (long *)thunk_FUN_00d6225c(plVar13,*(undefined8 *)puVar2);
  if (plVar13 != (long *)0x0) {
    lVar15 = *plVar13;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_01ffbb9c;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar2,0);
LAB_01ffbb9c:
    (*(code *)*puVar11)(plVar13,puVar11[1]);
  }
  puVar1 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  lVar15 = *unaff_x22;
  uVar17 = (ulong)*(ushort *)(lVar15 + 0x12a);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *unaff_x27) {
        puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_01ffbc0c;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar11 = (undefined8 *)FUN_00d59724();
LAB_01ffbc0c:
  plVar13 = (long *)(*(code *)*puVar11)();
  puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar16 = *plVar13;
    lVar15 = *(long *)puVar3;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar15) {
          puVar11 = (undefined8 *)(lVar16 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_01ffbc74;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724(plVar13,lVar15,0);
LAB_01ffbc74:
    uVar17 = (*(code *)*puVar11)(plVar13,puVar11[1]);
    if ((uVar17 & 1) == 0) break;
    lVar16 = *plVar13;
    lVar15 = *(long *)puVar3;
    uVar17 = (ulong)*(ushort *)(lVar16 + 0x12a);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar15) {
          puVar11 = (undefined8 *)(lVar16 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_01ffbcd4;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724(plVar13,lVar15,1);
LAB_01ffbcd4:
    uVar14 = (*(code *)*puVar11)(plVar13,puVar11[1]);
    (**(code **)(*plVar12 + 0x308))(plVar12,uVar14,*(undefined8 *)(*plVar12 + 0x310));
  } while( true );
  plVar13 = (long *)thunk_FUN_00d6225c(plVar13,*(undefined8 *)puVar2);
  if (plVar13 != (long *)0x0) {
    lVar15 = *plVar13;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)puVar2) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_01ffbd60;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar11 = (undefined8 *)FUN_00d59724(plVar13,*(long *)puVar2,0);
LAB_01ffbd60:
    (*(code *)*puVar11)(plVar13,puVar11[1]);
  }
  puVar7 = StringLiteral_3724;
  puVar6 = Method_System_Runtime_Serialization_Formatters_Binary_BinaryAssemblyInfo_GetAssembly__;
  puVar5 = Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__;
  puVar4 = System_Xml_QueryOutputWriter_TypeInfo;
  puVar3 = System_IndexOutOfRangeException_TypeInfo;
  puVar2 = System_Data_SqlTypes_SqlByte___TypeInfo;
  if (unaff_x19 == (long *)0x0) {
    return plVar12;
  }
  if (unaff_w20 == 2) {
    uVar10 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0));
    uVar14 = FUN_00da4fb8(*(undefined8 *)puVar3,uVar10);
    (**(code **)(*plVar12 + 0x368))(plVar12,uVar14,0,*(undefined8 *)(*plVar12 + 0x370));
    lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar15 == 0) goto LAB_01ffc104;
    FUN_01fd8fec(lVar15,uVar14,1,0);
  }
  else if (unaff_w20 == 1) {
    uVar10 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0));
    uVar14 = FUN_00da4fb8(*(undefined8 *)puVar5,uVar10);
    (**(code **)(*plVar12 + 0x368))(plVar12,uVar14,0,*(undefined8 *)(*plVar12 + 0x370));
    lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
    if (lVar15 == 0) goto LAB_01ffc104;
    FUN_01fdf08c(lVar15,uVar14,1,0);
  }
  else if (unaff_w20 == 0) {
    uVar10 = (**(code **)(*plVar12 + 0x298))(plVar12,*(undefined8 *)(*plVar12 + 0x2a0));
    uVar14 = FUN_00da4fb8(*(undefined8 *)puVar4,uVar10);
    (**(code **)(*plVar12 + 0x368))(plVar12,uVar14,0,*(undefined8 *)(*plVar12 + 0x370));
    lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
    if (lVar15 == 0) goto LAB_01ffc104;
    FUN_020cc648(lVar15,uVar14,0);
  }
  lVar15 = *(long *)puVar1;
  if (*(int *)(lVar15 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar15 = *(long *)puVar1;
  }
  lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 0x38);
  if (lVar15 != 0) {
    if (unaff_w20 < *(uint *)(lVar15 + 0x18)) {
      lVar15 = lVar15 + (long)(int)unaff_w20 * 0x10;
      in_stack_00000020 = *(undefined8 *)(lVar15 + 0x20);
      in_stack_00000028 = *(undefined8 *)(lVar15 + 0x28);
      thunk_FUN_00d61fa0(*(undefined8 *)
                          UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo,
                         &stack0x00000020);
      lVar15 = *unaff_x19;
      uVar17 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) ==
              *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
            puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_01ffbf9c;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar11 = (undefined8 *)FUN_00d59724();
LAB_01ffbf9c:
      (*(code *)*puVar11)();
      lVar15 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
      if (lVar15 == 0) goto LAB_01ffc104;
      if (unaff_w20 < *(uint *)(lVar15 + 0x18)) {
        lVar15 = lVar15 + (long)(int)unaff_w20 * 0x10;
        in_stack_00000010 = *(undefined8 *)(lVar15 + 0x20);
        in_stack_00000018 = *(undefined8 *)(lVar15 + 0x28);
        thunk_FUN_00d61fa0(*(undefined8 *)
                            UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                           ,&stack0x00000010);
        lVar15 = *unaff_x19;
        uVar17 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar17 != 0) {
          piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) ==
                *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
              puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 10) * 0x10 + 0x138);
              goto LAB_01ffc048;
            }
            uVar17 = uVar17 - 1;
            piVar18 = piVar18 + 4;
          } while (uVar17 != 0);
        }
        puVar11 = (undefined8 *)FUN_00d59724();
LAB_01ffc048:
        (*(code *)*puVar11)();
        lVar15 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x48);
        if (lVar15 == 0) goto LAB_01ffc104;
        if (unaff_w20 < *(uint *)(lVar15 + 0x18)) {
          thunk_FUN_00d61fa0(*(undefined8 *)
                              UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                            );
          lVar15 = *unaff_x19;
          uVar17 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar17 != 0) {
            piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) ==
                  *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
                puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 10) * 0x10 + 0x138);
                goto LAB_01ffc0f0;
              }
              uVar17 = uVar17 - 1;
              piVar18 = piVar18 + 4;
            } while (uVar17 != 0);
          }
          puVar11 = (undefined8 *)FUN_00d59724();
LAB_01ffc0f0:
          (*(code *)*puVar11)();
          return plVar12;
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


