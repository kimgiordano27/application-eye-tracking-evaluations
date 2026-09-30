/*
FUNCTION_NAME: Unity.Mathematics.math$$rcp
ENTRY_POINT: 05a84cc0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05a84f1c) */
/* WARNING: Removing unreachable block (ram,0x05a84fcc) */

undefined8 Unity_Mathematics_math__rcp(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  undefined8 in_stack_00000058;
  long *in_stack_00000128;
  
  uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == param_3) {
        puVar3 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_05a84d04;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02f421d0();
LAB_05a84d04:
  plVar4 = (long *)(*(code *)*puVar3)();
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             Method_Unity_AppUI_UI_RangeSliderBase_UxmlSerializedData<Vector2Int,_int>__ctor__) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto Unity_Mathematics_math__sign;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_02f421d0(plVar4,*(long *)
                                  Method_Unity_AppUI_UI_RangeSliderBase_UxmlSerializedData<Vector2Int,_int>__ctor__
                          ,0);
Unity_Mathematics_math__sign:
    plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
    puVar2 = Method_Unity_AppUI_UI_RangeSliderBase_UxmlSerializedData<Vector2Int,_int>_Deserialize__
    ;
    puVar1 = PTR_DAT_067c91b8;
    do {
      in_stack_00000128 = plVar4;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_05a84de8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02f421d0(plVar4,*(long *)puVar1,0);
LAB_05a84de8:
      uVar7 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      plVar4 = in_stack_00000128;
      if ((uVar7 & 1) == 0) {
        if (in_stack_00000128 == (long *)0x0) goto LAB_05a84f10;
        lVar6 = *in_stack_00000128;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 == 0) goto LAB_05a84ee8;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_05a84ed0;
      }
      if (in_stack_00000128 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar6 = *in_stack_00000128;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_05a84e4c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02f421d0(in_stack_00000128,*(long *)puVar2,0);
LAB_05a84e4c:
      (*(code *)*puVar3)(&stack0x00000058,plVar4,puVar3[1]);
      memcpy(&stack0x000000c0,&stack0x00000058,0x58);
      memcpy(&stack0x00000000,&stack0x000000c0,0x58);
      FUN_05a85028();
      plVar4 = in_stack_00000128;
    } while( true );
  }
  goto LAB_05a84f80;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_05a84ed0:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_05a84f04;
    }
  }
LAB_05a84ee8:
  puVar3 = (undefined8 *)FUN_02f421d0(in_stack_00000128,*(long *)PTR_DAT_067c91b0,0);
LAB_05a84f04:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
LAB_05a84f10:
  if (unaff_x19 != 0) {
    if (*(int *)(unaff_x19 + 0x18) == 0) {
      uVar5 = **(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
    }
    else {
      uVar5 = thunk_FUN_02f44ec4(*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseField_UxmlTraits<Enum>_Init__,
                                 &stack0x00000058);
      uVar5 = FUN_06160c44(uVar5,0);
    }
    return uVar5;
  }
LAB_05a84f80:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


