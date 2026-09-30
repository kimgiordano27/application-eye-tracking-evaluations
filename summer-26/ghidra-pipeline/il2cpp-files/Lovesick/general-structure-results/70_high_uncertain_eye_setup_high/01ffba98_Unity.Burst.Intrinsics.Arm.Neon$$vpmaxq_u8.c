/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vpmaxq_u8
ENTRY_POINT: 01ffba98
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

void Unity_Burst_Intrinsics_Arm_Neon__vpmaxq_u8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long *unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
code_r0x01ffba98:
  puVar9 = (undefined8 *)FUN_00d59724();
  do {
    uVar10 = (*(code *)*puVar9)();
    if ((uVar10 & 1) == 0) {
      plVar11 = (long *)thunk_FUN_00d6225c();
      if (plVar11 == (long *)0x0) goto LAB_01ffbba8;
      lVar13 = *plVar11;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar10 == 0) goto LAB_01ffbb80;
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    lVar13 = *unaff_x24;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar10 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *unaff_x23) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_01ffba60;
        }
        uVar10 = uVar10 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724();
LAB_01ffba60:
    (*(code *)*puVar9)();
    (**(code **)(*unaff_x21 + 0x308))();
    lVar13 = *unaff_x24;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar10 == 0) goto code_r0x01ffba98;
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    while (*(long *)(piVar15 + -2) != *unaff_x23) {
      uVar10 = uVar10 - 1;
      piVar15 = piVar15 + 4;
      if (uVar10 == 0) goto code_r0x01ffba98;
    }
    puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar15 = piVar15 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar15 + -2) == *unaff_x26) {
      puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_01ffbb9c;
    }
  }
LAB_01ffbb80:
  puVar9 = (undefined8 *)FUN_00d59724(plVar11,*unaff_x26,0);
LAB_01ffbb9c:
  (*(code *)*puVar9)(plVar11,puVar9[1]);
LAB_01ffbba8:
  puVar5 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  lVar13 = *unaff_x22;
  uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
  if (uVar10 != 0) {
    piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *unaff_x27) {
        puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_01ffbc0c;
      }
      uVar10 = uVar10 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar10 != 0);
  }
  puVar9 = (undefined8 *)FUN_00d59724();
LAB_01ffbc0c:
  plVar11 = (long *)(*(code *)*puVar9)();
  puVar1 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar14 = *plVar11;
    lVar13 = *(long *)puVar1;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar10 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar13) {
          puVar9 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ffbc74;
        }
        uVar10 = uVar10 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar11,lVar13,0);
LAB_01ffbc74:
    uVar10 = (*(code *)*puVar9)(plVar11,puVar9[1]);
    if ((uVar10 & 1) == 0) break;
    lVar14 = *plVar11;
    lVar13 = *(long *)puVar1;
    uVar10 = (ulong)*(ushort *)(lVar14 + 0x12a);
    if (uVar10 != 0) {
      piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar13) {
          puVar9 = (undefined8 *)(lVar14 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_01ffbcd4;
        }
        uVar10 = uVar10 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar11,lVar13,1);
LAB_01ffbcd4:
    (*(code *)*puVar9)(plVar11,puVar9[1]);
    (**(code **)(*unaff_x21 + 0x308))();
  } while( true );
  plVar11 = (long *)thunk_FUN_00d6225c(plVar11,*unaff_x26);
  if (plVar11 != (long *)0x0) {
    lVar13 = *plVar11;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar10 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *unaff_x26) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ffbd60;
        }
        uVar10 = uVar10 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar11,*unaff_x26,0);
LAB_01ffbd60:
    (*(code *)*puVar9)(plVar11,puVar9[1]);
  }
  puVar7 = StringLiteral_3724;
  puVar6 = Method_System_Runtime_Serialization_Formatters_Binary_BinaryAssemblyInfo_GetAssembly__;
  puVar4 = Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__;
  puVar3 = System_Xml_QueryOutputWriter_TypeInfo;
  puVar2 = System_IndexOutOfRangeException_TypeInfo;
  puVar1 = System_Data_SqlTypes_SqlByte___TypeInfo;
  if (unaff_x19 == (long *)0x0) {
    return;
  }
  if (unaff_w20 == 2) {
    uVar8 = (**(code **)(*unaff_x21 + 0x298))();
    uVar12 = FUN_00da4fb8(*(undefined8 *)puVar2,uVar8);
    (**(code **)(*unaff_x21 + 0x368))();
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar13 == 0) goto LAB_01ffc104;
    FUN_01fd8fec(lVar13,uVar12,1,0);
  }
  else if (unaff_w20 == 1) {
    uVar8 = (**(code **)(*unaff_x21 + 0x298))();
    uVar12 = FUN_00da4fb8(*(undefined8 *)puVar4,uVar8);
    (**(code **)(*unaff_x21 + 0x368))();
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
    if (lVar13 == 0) goto LAB_01ffc104;
    FUN_01fdf08c(lVar13,uVar12,1,0);
  }
  else if (unaff_w20 == 0) {
    uVar8 = (**(code **)(*unaff_x21 + 0x298))();
    uVar12 = FUN_00da4fb8(*(undefined8 *)puVar3,uVar8);
    (**(code **)(*unaff_x21 + 0x368))();
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
  if (lVar13 == 0) {
LAB_01ffc104:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (unaff_w20 < *(uint *)(lVar13 + 0x18)) {
    lVar13 = lVar13 + (long)(int)unaff_w20 * 0x10;
    in_stack_00000020 = *(undefined8 *)(lVar13 + 0x20);
    in_stack_00000028 = *(undefined8 *)(lVar13 + 0x28);
    thunk_FUN_00d61fa0(*(undefined8 *)
                        UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo,
                       &stack0x00000020);
    lVar13 = *unaff_x19;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar10 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_01ffbf9c;
        }
        uVar10 = uVar10 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar10 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724();
LAB_01ffbf9c:
    (*(code *)*puVar9)();
    lVar13 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x40);
    if (lVar13 == 0) goto LAB_01ffc104;
    if (unaff_w20 < *(uint *)(lVar13 + 0x18)) {
      lVar13 = lVar13 + (long)(int)unaff_w20 * 0x10;
      in_stack_00000010 = *(undefined8 *)(lVar13 + 0x20);
      in_stack_00000018 = *(undefined8 *)(lVar13 + 0x28);
      thunk_FUN_00d61fa0(*(undefined8 *)
                          UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo,
                         &stack0x00000010);
      lVar13 = *unaff_x19;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar10 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
            puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 10) * 0x10 + 0x138);
            goto LAB_01ffc048;
          }
          uVar10 = uVar10 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar10 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724();
LAB_01ffc048:
      (*(code *)*puVar9)();
      lVar13 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x48);
      if (lVar13 == 0) goto LAB_01ffc104;
      if (unaff_w20 < *(uint *)(lVar13 + 0x18)) {
        thunk_FUN_00d61fa0(*(undefined8 *)
                            UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                          );
        lVar13 = *unaff_x19;
        uVar10 = (ulong)*(ushort *)(lVar13 + 0x12a);
        if (uVar10 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
              puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 10) * 0x10 + 0x138);
              goto LAB_01ffc0f0;
            }
            uVar10 = uVar10 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar10 != 0);
        }
        puVar9 = (undefined8 *)FUN_00d59724();
LAB_01ffc0f0:
        (*(code *)*puVar9)();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


