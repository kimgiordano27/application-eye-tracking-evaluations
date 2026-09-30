/*
FUNCTION_NAME: FUN_05a842e8
ENTRY_POINT: 05a842e8
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


/* WARNING: Removing unreachable block (ram,0x05a845d0) */

void FUN_05a842e8(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined1 auStack_150 [88];
  undefined1 auStack_f8 [88];
  undefined8 local_a0;
  long **pplStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  undefined *puVar6;
  
  if ((DAT_06bc2366 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(Method_Unity_AppUI_UI_RangeSliderBase_UxmlSerializedData<Vector2Int,_int>__ctor__);
    FUN_02f08768(
                Method_Unity_AppUI_UI_RangeSliderBase_UxmlSerializedData<Vector2Int,_int>_Deserialize__
                );
    FUN_02f08768(PTR_DAT_067c91b8);
    DAT_06bc2366 = 1;
  }
  local_40 = 0;
  local_38 = (long *)0x0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_88 = 0;
  local_90 = 0;
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
            goto LAB_05a843b4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)
               FUN_02f421d0(param_2,*(long *)
                                     Method_Unity_AppUI_UI_RangeSliderBase_UxmlSerializedData<Vector2Int,_int>__ctor__
                            ,0);
LAB_05a843b4:
      plVar3 = (long *)(*(code *)*puVar2)(param_2,puVar2[1]);
      puVar1 = 
      Method_Unity_AppUI_UI_RangeSliderBase_UxmlSerializedData<Vector2Int,_int>_Deserialize__;
      puVar6 = PTR_DAT_067c91b8;
      pplStack_98 = &local_38;
      local_a0 = 0;
      do {
        local_38 = plVar3;
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
              goto LAB_05a84430;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar2 = (undefined8 *)FUN_02f421d0(plVar3,*(long *)puVar6,0);
LAB_05a84430:
        uVar8 = (*(code *)*puVar2)(plVar3,puVar2[1]);
        plVar3 = local_38;
        if ((uVar8 & 1) == 0) {
          if (local_38 == (long *)0x0) {
            return;
          }
          lVar7 = *local_38;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 == 0) goto LAB_05a84524;
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_05a8450c;
        }
        if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar7 = *local_38;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_05a84494;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar2 = (undefined8 *)FUN_02f421d0(local_38,*(long *)puVar1,0);
LAB_05a84494:
        (*(code *)*puVar2)(auStack_f8,plVar3,puVar2[1]);
        memcpy(&local_90,auStack_f8,0x58);
        memcpy(auStack_150,&local_90,0x58);
        FUN_05a837bc(param_1,auStack_150);
        plVar3 = local_38;
      } while( true );
    }
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar4 = thunk_FUN_02f45270();
    puVar6 = Method_UnityEngine_UIElements_BaseField_UxmlTraits<Bounds>__ctor__;
  }
  uVar5 = thunk_FUN_02f6ef30(puVar6);
  FUN_0504ee1c(uVar4,uVar5,0);
  uVar5 = thunk_FUN_02f6ef30(Method_UnityEngine_UIElements_BaseField_UxmlTraits<Bounds>_Init__);
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar4,uVar5);
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_05a8450c:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_05a84540;
    }
  }
LAB_05a84524:
  puVar2 = (undefined8 *)FUN_02f421d0(local_38,*(long *)PTR_DAT_067c91b0,0);
LAB_05a84540:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  return;
}


