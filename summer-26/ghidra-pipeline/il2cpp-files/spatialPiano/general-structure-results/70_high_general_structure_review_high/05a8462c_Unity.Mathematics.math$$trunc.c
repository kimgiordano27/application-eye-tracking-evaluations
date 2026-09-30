/*
FUNCTION_NAME: Unity.Mathematics.math$$trunc
ENTRY_POINT: 05a8462c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x05a84910) */

void Unity_Mathematics_math__trunc(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  long *in_stack_00000118;
  undefined *puVar6;
  
  if ((DAT_06bc2367 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(Method_Unity_AppUI_UI_RangeSliderBase_UxmlSerializedData<Vector2Int,_int>__ctor__);
    FUN_02f08768(
                Method_Unity_AppUI_UI_RangeSliderBase_UxmlSerializedData<Vector2Int,_int>_Deserialize__
                );
    FUN_02f08768(PTR_DAT_067c91b8);
    DAT_06bc2367 = 1;
  }
  in_stack_00000110 = 0;
  in_stack_00000118 = (long *)0x0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  if (param_1 == 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar4 = thunk_FUN_02f45270();
    puVar6 = PTR_DAT_067ca380;
  }
  else {
    if (param_2 != (long *)0x0) {
      lVar7 = *param_2;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)
               Method_Unity_AppUI_UI_RangeSliderBase_UxmlSerializedData<Vector2Int,_int>__ctor__) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05a846f4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_02f421d0(param_2,*(long *)
                                     Method_Unity_AppUI_UI_RangeSliderBase_UxmlSerializedData<Vector2Int,_int>__ctor__
                            ,0);
LAB_05a846f4:
      plVar3 = (long *)(*(code *)*puVar2)(param_2,puVar2[1]);
      puVar1 = 
      Method_Unity_AppUI_UI_RangeSliderBase_UxmlSerializedData<Vector2Int,_int>_Deserialize__;
      puVar6 = PTR_DAT_067c91b8;
      in_stack_000000b8 = &stack0x00000118;
      in_stack_000000b0 = 0;
      do {
        in_stack_00000118 = plVar3;
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar7 = *plVar3;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar6) {
              puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_05a84770;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar2 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)puVar6,0);
LAB_05a84770:
        uVar8 = (*(code *)*puVar2)(plVar3,puVar2[1]);
        plVar3 = in_stack_00000118;
        if ((uVar8 & 1) == 0) {
          if (in_stack_00000118 == (long *)0x0) {
            return;
          }
          lVar7 = *in_stack_00000118;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 == 0) goto LAB_05a84864;
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_05a8484c;
        }
        if (in_stack_00000118 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar7 = *in_stack_00000118;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_05a847d4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar2 = (undefined8 *)FUN_02f421d0(in_stack_00000118,*(long *)puVar1,0);
LAB_05a847d4:
        (*(code *)*puVar2)(&stack0x00000058,plVar3,puVar2[1]);
        memcpy(&stack0x000000c0,&stack0x00000058,0x58);
        memcpy(&stack0x00000000,&stack0x000000c0,0x58);
        FUN_05a83c9c(param_1);
        plVar3 = in_stack_00000118;
      } while( true );
    }
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar4 = thunk_FUN_02f45270();
    puVar6 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Bounds>__ctor__;
  }
  uVar5 = thunk_FUN_02f6ef30(puVar6);
  FUN_0504ee1c(uVar4,uVar5,0);
  uVar5 = thunk_FUN_02f6ef30(Method_UnityEngine_UIElements_BaseField_UxmlTraits<BoundsInt>__ctor__);
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar4,uVar5);
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_05a8484c:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_05a84880;
    }
  }
LAB_05a84864:
  puVar2 = (undefined8 *)FUN_02f421d0(in_stack_00000118,*(long *)PTR_DAT_067c91b0,0);
LAB_05a84880:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  return;
}


