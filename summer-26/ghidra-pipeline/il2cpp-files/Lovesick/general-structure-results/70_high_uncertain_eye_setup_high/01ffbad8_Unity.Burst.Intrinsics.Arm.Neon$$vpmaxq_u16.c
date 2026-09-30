/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vpmaxq_u16
ENTRY_POINT: 01ffbad8
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

void Unity_Burst_Intrinsics_Arm_Neon__vpmaxq_u16(long param_1,undefined8 param_2,long param_3)

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
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong in_x9;
  int *in_x10;
  int *piVar15;
  long in_x11;
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
  
  do {
    if (in_x11 == param_3) {
      puVar9 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
      goto LAB_01ffba60;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar9 = (undefined8 *)FUN_00d59724();
LAB_01ffba60:
        (*(code *)*puVar9)();
        (**(code **)(*unaff_x21 + 0x308))();
        lVar12 = *unaff_x24;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *unaff_x23) {
              puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_01ffbaac;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar9 = (undefined8 *)FUN_00d59724();
LAB_01ffbaac:
        uVar14 = (*(code *)*puVar9)();
        if ((uVar14 & 1) == 0) {
          plVar10 = (long *)thunk_FUN_00d6225c();
          if (plVar10 == (long *)0x0) goto LAB_01ffbba8;
          lVar12 = *plVar10;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
          if (uVar14 == 0) goto LAB_01ffbb80;
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_01ffbb68;
        }
        param_1 = *unaff_x24;
        param_3 = *unaff_x23;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12a);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_01ffbb68:
    if (*(long *)(piVar15 + -2) == *unaff_x26) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_01ffbb9c;
    }
  }
LAB_01ffbb80:
  puVar9 = (undefined8 *)FUN_00d59724(plVar10,*unaff_x26,0);
LAB_01ffbb9c:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_01ffbba8:
  puVar5 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  lVar12 = *unaff_x22;
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *unaff_x27) {
        puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_01ffbc0c;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar9 = (undefined8 *)FUN_00d59724();
LAB_01ffbc0c:
  plVar10 = (long *)(*(code *)*puVar9)();
  puVar1 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  do {
    lVar13 = *plVar10;
    lVar12 = *(long *)puVar1;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar12) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ffbc74;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar10,lVar12,0);
LAB_01ffbc74:
    uVar14 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    if ((uVar14 & 1) == 0) break;
    lVar13 = *plVar10;
    lVar12 = *(long *)puVar1;
    uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == lVar12) {
          puVar9 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_01ffbcd4;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar10,lVar12,1);
LAB_01ffbcd4:
    (*(code *)*puVar9)(plVar10,puVar9[1]);
    (**(code **)(*unaff_x21 + 0x308))();
  } while( true );
  plVar10 = (long *)thunk_FUN_00d6225c(plVar10,*unaff_x26);
  if (plVar10 != (long *)0x0) {
    lVar12 = *plVar10;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *unaff_x26) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_01ffbd60;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724(plVar10,*unaff_x26,0);
LAB_01ffbd60:
    (*(code *)*puVar9)(plVar10,puVar9[1]);
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
    uVar11 = FUN_00da4fb8(*(undefined8 *)puVar2,uVar8);
    (**(code **)(*unaff_x21 + 0x368))();
    lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar12 == 0) goto LAB_01ffc104;
    FUN_01fd8fec(lVar12,uVar11,1,0);
  }
  else if (unaff_w20 == 1) {
    uVar8 = (**(code **)(*unaff_x21 + 0x298))();
    uVar11 = FUN_00da4fb8(*(undefined8 *)puVar4,uVar8);
    (**(code **)(*unaff_x21 + 0x368))();
    lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar7);
    if (lVar12 == 0) goto LAB_01ffc104;
    FUN_01fdf08c(lVar12,uVar11,1,0);
  }
  else if (unaff_w20 == 0) {
    uVar8 = (**(code **)(*unaff_x21 + 0x298))();
    uVar11 = FUN_00da4fb8(*(undefined8 *)puVar3,uVar8);
    (**(code **)(*unaff_x21 + 0x368))();
    lVar12 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
    if (lVar12 == 0) goto LAB_01ffc104;
    FUN_020cc648(lVar12,uVar11,0);
  }
  lVar12 = *(long *)puVar5;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar12 = *(long *)puVar5;
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x38);
  if (lVar12 == 0) {
LAB_01ffc104:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (unaff_w20 < *(uint *)(lVar12 + 0x18)) {
    lVar12 = lVar12 + (long)(int)unaff_w20 * 0x10;
    in_stack_00000020 = *(undefined8 *)(lVar12 + 0x20);
    in_stack_00000028 = *(undefined8 *)(lVar12 + 0x28);
    thunk_FUN_00d61fa0(*(undefined8 *)
                        UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo,
                       &stack0x00000020);
    lVar12 = *unaff_x19;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) ==
            *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
          puVar9 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
          goto LAB_01ffbf9c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar9 = (undefined8 *)FUN_00d59724();
LAB_01ffbf9c:
    (*(code *)*puVar9)();
    lVar12 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x40);
    if (lVar12 == 0) goto LAB_01ffc104;
    if (unaff_w20 < *(uint *)(lVar12 + 0x18)) {
      lVar12 = lVar12 + (long)(int)unaff_w20 * 0x10;
      in_stack_00000010 = *(undefined8 *)(lVar12 + 0x20);
      in_stack_00000018 = *(undefined8 *)(lVar12 + 0x28);
      thunk_FUN_00d61fa0(*(undefined8 *)
                          UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo,
                         &stack0x00000010);
      lVar12 = *unaff_x19;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) ==
              *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
            puVar9 = (undefined8 *)(lVar12 + (long)(*piVar15 + 10) * 0x10 + 0x138);
            goto LAB_01ffc048;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar9 = (undefined8 *)FUN_00d59724();
LAB_01ffc048:
      (*(code *)*puVar9)();
      lVar12 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x48);
      if (lVar12 == 0) goto LAB_01ffc104;
      if (unaff_w20 < *(uint *)(lVar12 + 0x18)) {
        thunk_FUN_00d61fa0(*(undefined8 *)
                            UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo
                          );
        lVar12 = *unaff_x19;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo) {
              puVar9 = (undefined8 *)(lVar12 + (long)(*piVar15 + 10) * 0x10 + 0x138);
              goto LAB_01ffc0f0;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
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


