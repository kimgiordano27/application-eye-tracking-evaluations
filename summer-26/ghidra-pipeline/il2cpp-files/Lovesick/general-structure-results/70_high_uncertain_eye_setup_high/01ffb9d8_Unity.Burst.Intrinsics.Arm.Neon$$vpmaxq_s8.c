/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vpmaxq_s8
ENTRY_POINT: 01ffb9d8
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

long * Unity_Burst_Intrinsics_Arm_Neon__vpmaxq_s8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *unaff_x19;
  uint unaff_w20;
  long *unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  int unaff_w25;
  long *unaff_x27;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  plVar9 = (long *)thunk_FUN_00d62348();
  if (plVar9 != (long *)0x0) {
    FUN_01743cd4(plVar9,unaff_w25 + unaff_w24,0);
    lVar13 = *unaff_x23;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *unaff_x27) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01ffba3c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724();
LAB_01ffba3c:
    puVar1 = StringLiteral_10310;
    plVar11 = (long *)(*(code *)*puVar10)();
    puVar5 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    do {
      lVar14 = *plVar11;
      lVar13 = *(long *)puVar5;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar13) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01ffbaac;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724(plVar11,lVar13,0);
LAB_01ffbaac:
      uVar15 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      if ((uVar15 & 1) == 0) goto LAB_01ffbb34;
      lVar14 = *plVar11;
      lVar13 = *(long *)puVar5;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar13) {
            puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_01ffbb0c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724(plVar11,lVar13,1);
LAB_01ffbb0c:
      uVar12 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      (**(code **)(*plVar9 + 0x308))(plVar9,uVar12,*(undefined8 *)(*plVar9 + 0x310));
    } while( true );
  }
  goto LAB_01ffc104;
LAB_01ffbb34:
  plVar11 = (long *)thunk_FUN_00d6225c(plVar11,*(undefined8 *)puVar1);
  if (plVar11 != (long *)0x0) {
    lVar13 = *plVar11;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01ffbb9c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar1,0);
LAB_01ffbb9c:
    (*(code *)*puVar10)(plVar11,puVar10[1]);
  }
  puVar5 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  lVar13 = *unaff_x22;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *unaff_x27) {
        puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_01ffbc0c;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_00d59724();
LAB_01ffbc0c:
  plVar11 = (long *)(*(code *)*puVar10)();
  puVar2 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar14 = *plVar11;
    lVar13 = *(long *)puVar2;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar13) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01ffbc74;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar11,lVar13,0);
LAB_01ffbc74:
    uVar15 = (*(code *)*puVar10)(plVar11,puVar10[1]);
    if ((uVar15 & 1) == 0) break;
    lVar14 = *plVar11;
    lVar13 = *(long *)puVar2;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == lVar13) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_01ffbcd4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar11,lVar13,1);
LAB_01ffbcd4:
    uVar12 = (*(code *)*puVar10)(plVar11,puVar10[1]);
    (**(code **)(*plVar9 + 0x308))(plVar9,uVar12,*(undefined8 *)(*plVar9 + 0x310));
  } while( true );
  plVar11 = (long *)thunk_FUN_00d6225c(plVar11,*(undefined8 *)puVar1);
  if (plVar11 != (long *)0x0) {
    lVar13 = *plVar11;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_01ffbd60;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_00d59724(plVar11,*(long *)puVar1,0);
LAB_01ffbd60:
    (*(code *)*puVar10)(plVar11,puVar10[1]);
  }
  puVar7 = StringLiteral_3724;
  puVar6 = Method_System_Runtime_Serialization_Formatters_Binary_BinaryAssemblyInfo_GetAssembly__;
  puVar4 = Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__;
  puVar3 = System_Xml_QueryOutputWriter_TypeInfo;
  puVar2 = System_IndexOutOfRangeException_TypeInfo;
  puVar1 = System_Data_SqlTypes_SqlByte___TypeInfo;
  if (unaff_x19 == (long *)0x0) {
    return plVar9;
  }
  if (unaff_w20 == 2) {
    uVar8 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
    uVar12 = FUN_00da4fb8(*(undefined8 *)puVar2,uVar8);
    (**(code **)(*plVar9 + 0x368))(plVar9,uVar12,0,*(undefined8 *)(*plVar9 + 0x370));
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar13 == 0) goto LAB_01ffc104;
    FUN_01fd8fec(lVar13,uVar12,1,0);
  }
  else if (unaff_w20 == 1) {
    uVar8 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
    uVar12 = FUN_00da4fb8(*(undefined8 *)puVar4,uVar8);
    (**(code **)(*plVar9 + 0x368))(plVar9,uVar12,0,*(undefined8 *)(*plVar9 + 0x370));
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
    if (lVar13 == 0) goto LAB_01ffc104;
    FUN_01fdf08c(lVar13,uVar12,1,0);
  }
  else if (unaff_w20 == 0) {
    uVar8 = (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
    uVar12 = FUN_00da4fb8(*(undefined8 *)puVar3,uVar8);
    (**(code **)(*plVar9 + 0x368))(plVar9,uVar12,0,*(undefined8 *)(*plVar9 + 0x370));
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
    if (lVar13 == 0) goto LAB_01ffc104;
    FUN_020cc648(lVar13,uVar12,0);
  }
  lVar13 = *(long *)puVar5;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar13 = *(long *)puVar5;
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x38);
  if (lVar13 != 0) {
    if (unaff_w20 < *(uint *)(lVar13 + 0x18)) {
      lVar13 = lVar13 + (long)(int)unaff_w20 * 0x10;
      in_stack_00000020 = *(undefined8 *)(lVar13 + 0x20);
      in_stack_00000028 = *(undefined8 *)(lVar13 + 0x28);
      thunk_FUN_00d61fa0(*(undefined8 *)
                          UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo,
                         &stack0x00000020);
      lVar13 = *unaff_x19;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) ==
              *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
            puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_01ffbf9c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724();
LAB_01ffbf9c:
      (*(code *)*puVar10)();
      lVar13 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x40);
      if (lVar13 == 0) goto LAB_01ffc104;
      if (unaff_w20 < *(uint *)(lVar13 + 0x18)) {
        lVar13 = lVar13 + (long)(int)unaff_w20 * 0x10;
        in_stack_00000010 = *(undefined8 *)(lVar13 + 0x20);
        in_stack_00000018 = *(undefined8 *)(lVar13 + 0x28);
        thunk_FUN_00d61fa0(*(undefined8 *)
                            UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                           ,&stack0x00000010);
        lVar13 = *unaff_x19;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) ==
                *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
              puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 10) * 0x10 + 0x138);
              goto LAB_01ffc048;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724();
LAB_01ffc048:
        (*(code *)*puVar10)();
        lVar13 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x48);
        if (lVar13 == 0) goto LAB_01ffc104;
        if (unaff_w20 < *(uint *)(lVar13 + 0x18)) {
          thunk_FUN_00d61fa0(*(undefined8 *)
                              UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                            );
          lVar13 = *unaff_x19;
          uVar15 = (ulong)*(ushort *)(lVar13 + 0x12a);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) ==
                  *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
                puVar10 = (undefined8 *)(lVar13 + (long)(*piVar16 + 10) * 0x10 + 0x138);
                goto LAB_01ffc0f0;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)FUN_00d59724();
LAB_01ffc0f0:
          (*(code *)*puVar10)();
          return plVar9;
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


