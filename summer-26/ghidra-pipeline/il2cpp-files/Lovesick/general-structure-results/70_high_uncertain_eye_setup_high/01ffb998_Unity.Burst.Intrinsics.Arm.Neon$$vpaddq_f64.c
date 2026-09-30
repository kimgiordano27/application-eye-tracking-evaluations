/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vpaddq_f64
ENTRY_POINT: 01ffb998
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

long * Unity_Burst_Intrinsics_Arm_Neon__vpaddq_f64(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 in_ZR;
  int iVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long in_x9;
  ulong uVar16;
  int *in_x10;
  int *piVar17;
  long *unaff_x19;
  uint unaff_w20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  long *unaff_x27;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar10 = (undefined8 *)(param_1 + (long)(in_x10[4] + 1) * 0x10 + 0x138);
      goto LAB_01ffb9c0;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar10 = (undefined8 *)FUN_00d59724();
LAB_01ffb9c0:
  iVar8 = (*(code *)*puVar10)();
  plVar11 = (long *)thunk_FUN_00d62348(*unaff_x21);
  if (plVar11 != (long *)0x0) {
    FUN_01743cd4(plVar11,iVar8 + unaff_w24,0);
    lVar14 = *unaff_x23;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *unaff_x27) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_01ffba3c;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724();
LAB_01ffba3c:
    puVar1 = StringLiteral_10310;
    plVar12 = (long *)(*(code *)*puVar10)();
    puVar5 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar15 = *plVar12;
      lVar14 = *(long *)puVar5;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar10 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_01ffbaac;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724(plVar12,lVar14,0);
LAB_01ffbaac:
      uVar16 = (*(code *)*puVar10)(plVar12,puVar10[1]);
      if ((uVar16 & 1) == 0) goto LAB_01ffbb34;
      lVar15 = *plVar12;
      lVar14 = *(long *)puVar5;
      uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == lVar14) {
            puVar10 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_01ffbb0c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724(plVar12,lVar14,1);
LAB_01ffbb0c:
      uVar13 = (*(code *)*puVar10)(plVar12,puVar10[1]);
      (**(code **)(*plVar11 + 0x308))(plVar11,uVar13,*(undefined8 *)(*plVar11 + 0x310));
    } while( true );
  }
  goto LAB_01ffc104;
LAB_01ffbb34:
  plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)puVar1);
  if (plVar12 != (long *)0x0) {
    lVar14 = *plVar12;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar1) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_01ffbb9c;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar1,0);
LAB_01ffbb9c:
    (*(code *)*puVar10)(plVar12,puVar10[1]);
  }
  puVar5 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  lVar14 = *unaff_x22;
  uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
  if (uVar16 != 0) {
    piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *unaff_x27) {
        puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_01ffbc0c;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  puVar10 = (undefined8 *)FUN_00d59724();
LAB_01ffbc0c:
  plVar12 = (long *)(*(code *)*puVar10)();
  puVar2 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar15 = *plVar12;
    lVar14 = *(long *)puVar2;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar14) {
          puVar10 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_01ffbc74;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar12,lVar14,0);
LAB_01ffbc74:
    uVar16 = (*(code *)*puVar10)(plVar12,puVar10[1]);
    if ((uVar16 & 1) == 0) break;
    lVar15 = *plVar12;
    lVar14 = *(long *)puVar2;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == lVar14) {
          puVar10 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_01ffbcd4;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar12,lVar14,1);
LAB_01ffbcd4:
    uVar13 = (*(code *)*puVar10)(plVar12,puVar10[1]);
    (**(code **)(*plVar11 + 0x308))(plVar11,uVar13,*(undefined8 *)(*plVar11 + 0x310));
  } while( true );
  plVar12 = (long *)thunk_FUN_00d6225c(plVar12,*(undefined8 *)puVar1);
  if (plVar12 != (long *)0x0) {
    lVar14 = *plVar12;
    uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar1) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_01ffbd60;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar1,0);
LAB_01ffbd60:
    (*(code *)*puVar10)(plVar12,puVar10[1]);
  }
  puVar7 = StringLiteral_3724;
  puVar6 = Method_System_Runtime_Serialization_Formatters_Binary_BinaryAssemblyInfo_GetAssembly__;
  puVar4 = Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__;
  puVar3 = System_Xml_QueryOutputWriter_TypeInfo;
  puVar2 = System_IndexOutOfRangeException_TypeInfo;
  puVar1 = System_Data_SqlTypes_SqlByte___TypeInfo;
  if (unaff_x19 == (long *)0x0) {
    return plVar11;
  }
  if (unaff_w20 == 2) {
    uVar9 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
    uVar13 = FUN_00da4fb8(*(undefined8 *)puVar2,uVar9);
    (**(code **)(*plVar11 + 0x368))(plVar11,uVar13,0,*(undefined8 *)(*plVar11 + 0x370));
    lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar14 == 0) goto LAB_01ffc104;
    FUN_01fd8fec(lVar14,uVar13,1,0);
  }
  else if (unaff_w20 == 1) {
    uVar9 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
    uVar13 = FUN_00da4fb8(*(undefined8 *)puVar4,uVar9);
    (**(code **)(*plVar11 + 0x368))(plVar11,uVar13,0,*(undefined8 *)(*plVar11 + 0x370));
    lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
    if (lVar14 == 0) goto LAB_01ffc104;
    FUN_01fdf08c(lVar14,uVar13,1,0);
  }
  else if (unaff_w20 == 0) {
    uVar9 = (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
    uVar13 = FUN_00da4fb8(*(undefined8 *)puVar3,uVar9);
    (**(code **)(*plVar11 + 0x368))(plVar11,uVar13,0,*(undefined8 *)(*plVar11 + 0x370));
    lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
    if (lVar14 == 0) goto LAB_01ffc104;
    FUN_020cc648(lVar14,uVar13,0);
  }
  lVar14 = *(long *)puVar5;
  if (*(int *)(lVar14 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar14 = *(long *)puVar5;
  }
  lVar14 = *(long *)(*(long *)(lVar14 + 0xb8) + 0x38);
  if (lVar14 != 0) {
    if (unaff_w20 < *(uint *)(lVar14 + 0x18)) {
      lVar14 = lVar14 + (long)(int)unaff_w20 * 0x10;
      in_stack_00000020 = *(undefined8 *)(lVar14 + 0x20);
      in_stack_00000028 = *(undefined8 *)(lVar14 + 0x28);
      thunk_FUN_00d61fa0(*(undefined8 *)
                          UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo,
                         &stack0x00000020);
      lVar14 = *unaff_x19;
      uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) ==
              *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
            puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_01ffbf9c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724();
LAB_01ffbf9c:
      (*(code *)*puVar10)();
      lVar14 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x40);
      if (lVar14 == 0) goto LAB_01ffc104;
      if (unaff_w20 < *(uint *)(lVar14 + 0x18)) {
        lVar14 = lVar14 + (long)(int)unaff_w20 * 0x10;
        in_stack_00000010 = *(undefined8 *)(lVar14 + 0x20);
        in_stack_00000018 = *(undefined8 *)(lVar14 + 0x28);
        thunk_FUN_00d61fa0(*(undefined8 *)
                            UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                           ,&stack0x00000010);
        lVar14 = *unaff_x19;
        uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
        if (uVar16 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) ==
                *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
              puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 10) * 0x10 + 0x138);
              goto LAB_01ffc048;
            }
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724();
LAB_01ffc048:
        (*(code *)*puVar10)();
        lVar14 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x48);
        if (lVar14 == 0) goto LAB_01ffc104;
        if (unaff_w20 < *(uint *)(lVar14 + 0x18)) {
          thunk_FUN_00d61fa0(*(undefined8 *)
                              UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                            );
          lVar14 = *unaff_x19;
          uVar16 = (ulong)*(ushort *)(lVar14 + 0x12a);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) ==
                  *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
                puVar10 = (undefined8 *)(lVar14 + (long)(*piVar17 + 10) * 0x10 + 0x138);
                goto LAB_01ffc0f0;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724();
LAB_01ffc0f0:
          (*(code *)*puVar10)();
          return plVar11;
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


