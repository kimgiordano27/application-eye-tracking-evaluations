/*
FUNCTION_NAME: Unity.Mathematics.math$$rcp
ENTRY_POINT: 05a84c84
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x05a84f1c) */
/* WARNING: Removing unreachable block (ram,0x05a84fcc) */

undefined8 Unity_Mathematics_math__rcp(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x20;
  long in_stack_00000058;
  undefined8 in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  undefined8 uStack00000000000000c0;
  long *in_stack_00000128;
  
  puVar2 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Rect>__ctor__;
  puVar1 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<int>__ctor__;
  uStack00000000000000c0 = param_1;
  if (unaff_x20 == (long *)0x0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar6 = thunk_FUN_02f45270();
    uVar7 = thunk_FUN_02f6ef30(
                              Method_Unity_AppUI_UI_BaseSlider_UxmlSerializedData<float,_float>_Deserialize__
                              );
    FUN_0504ee1c(uVar6,uVar7,0);
    uVar7 = thunk_FUN_02f6ef30(Method_UnityEngine_UIElements_BaseField_UxmlTraits<RectInt>_Init__);
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar6,uVar7);
  }
  lVar3 = thunk_FUN_02f45270(*(undefined8 *)
                              Method_UnityEngine_UIElements_BaseField_UxmlTraits<RectInt>__ctor__);
  FUN_03bd3400(lVar3,*(undefined8 *)puVar2);
  lVar8 = *unaff_x20;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_05a84d04;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_02f421d0();
LAB_05a84d04:
  plVar5 = (long *)(*(code *)*puVar4)();
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)
             Method_Unity_AppUI_UI_RangeSliderBase_UxmlSerializedData<Vector2Int,_int>__ctor__) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto Unity_Mathematics_math__sign;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_02f421d0(plVar5,*(long *)
                                  Method_Unity_AppUI_UI_RangeSliderBase_UxmlSerializedData<Vector2Int,_int>__ctor__
                          ,0);
Unity_Mathematics_math__sign:
    plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
    puVar2 = Method_Unity_AppUI_UI_RangeSliderBase_UxmlSerializedData<Vector2Int,_int>_Deserialize__
    ;
    puVar1 = PTR_DAT_067c91b8;
    in_stack_000000b8 = &stack0x00000128;
    in_stack_000000b0 = 0;
    do {
      in_stack_00000128 = plVar5;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05a84de8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02f421d0(plVar5,*(long *)puVar1,0);
LAB_05a84de8:
      uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      plVar5 = in_stack_00000128;
      if ((uVar9 & 1) == 0) {
        if (in_stack_00000128 == (long *)0x0) goto LAB_05a84f10;
        lVar8 = *in_stack_00000128;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 == 0) goto LAB_05a84ee8;
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_05a84ed0;
      }
      if (in_stack_00000128 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar8 = *in_stack_00000128;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05a84e4c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_02f421d0(in_stack_00000128,*(long *)puVar2,0);
LAB_05a84e4c:
      (*(code *)*puVar4)(&stack0x00000058,plVar5,puVar4[1]);
      memcpy(&stack0x000000c0,&stack0x00000058,0x58);
      memcpy(&stack0x00000000,&stack0x000000c0,0x58);
      FUN_05a85028();
      plVar5 = in_stack_00000128;
    } while( true );
  }
  goto LAB_05a84f80;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_05a84ed0:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_05a84f04;
    }
  }
LAB_05a84ee8:
  puVar4 = (undefined8 *)FUN_02f421d0(in_stack_00000128,*(long *)PTR_DAT_067c91b0,0);
LAB_05a84f04:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_05a84f10:
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
      uVar6 = **(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
    }
    else {
      in_stack_00000058 = lVar3;
      uVar6 = thunk_FUN_02f44ec4(*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__,
                                 &stack0x00000058);
      uVar6 = FUN_06160c44(uVar6,0);
    }
    return uVar6;
  }
LAB_05a84f80:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


