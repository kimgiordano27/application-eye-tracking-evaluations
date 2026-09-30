/*
FUNCTION_NAME: FUN_05a83d20
ENTRY_POINT: 05a83d20
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05a84100) */
/* WARNING: Removing unreachable block (ram,0x05a840fc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_05a83d20(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  if ((DAT_06bc2365 & 1) == 0) {
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_UnityObjectReferenceCache<ICurveInteractionCaster,_Object>__ctor__
                );
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(Method_Unity_AppUI_UI_Picker_UxmlSerializedData<DropdownItem,_DropdownItem>__ctor__
                );
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider_UxmlSerializedData<float,_float>__ctor__);
    FUN_02f08768(PTR_DAT_067c91b8);
    DAT_06bc2365 = 1;
  }
  puVar2 = Method_Unity_AppUI_UI_Picker_UxmlSerializedData<DropdownItem,_DropdownItem>__ctor__;
  puVar1 = PTR_DAT_067c91b0;
  if (param_1 == (long *)0x0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar10 = thunk_FUN_02f45270();
    uVar11 = thunk_FUN_02f6ef30(
                               Method_Unity_AppUI_UI_BaseSlider_UxmlSerializedData<float,_float>_Deserialize__
                               );
    FUN_0504ee1c(uVar10,uVar11,0);
    uVar11 = thunk_FUN_02f6ef30(
                               Method_Unity_AppUI_UI_RangeSliderBase_UxmlSerializedData<Vector2,_float>__ctor__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar10,uVar11);
  }
  plVar6 = (long *)FUN_05a8075c();
  lVar12 = *param_1;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
        puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
        goto LAB_05a83e08;
      }
      uVar13 = uVar13 - 1;
      piVar14 = piVar14 + 4;
    } while (uVar13 != 0);
  }
  puVar7 = (undefined8 *)FUN_02f421d0(param_1,*(long *)puVar2,0);
LAB_05a83e08:
  plVar8 = (long *)(*(code *)*puVar7)(param_1,puVar7[1]);
  puVar4 = Method_Unity_AppUI_UI_BaseSlider_UxmlSerializedData<float,_float>__ctor__;
  puVar3 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_UnityObjectReferenceCache<ICurveInteractionCaster,_Object>__ctor__
  ;
  puVar2 = PTR_DAT_067c91b8;
  do {
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar12 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_05a83e8c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)puVar2,0);
LAB_05a83e8c:
    uVar13 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if ((uVar13 & 1) == 0) {
      if (plVar8 == (long *)0x0) goto LAB_05a8400c;
      lVar15 = *plVar8;
      lVar12 = *(long *)puVar1;
      uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar13 == 0) goto LAB_05a83fe4;
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      break;
    }
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar12 = *plVar8;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_05a83ef0;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)puVar4,0);
LAB_05a83ef0:
    lVar12 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar15 = *(long *)(lVar12 + 200);
    if (lVar15 == 0) {
      FUN_05a78fb8(lVar12);
      lVar15 = *(long *)(lVar12 + 200);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
    }
    lVar16 = *(long *)(lVar15 + 0x30);
    uVar5 = FUN_032f13e8(lVar16,*(undefined8 *)puVar3);
    if (0 < (int)uVar5) {
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      uVar13 = 0;
      lVar17 = lVar16 + 0x20;
      do {
        if (*(uint *)(lVar16 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        uVar9 = FUN_05a9035c(lVar17,lVar12,0);
        if ((uVar9 & 1) != 0) {
          FUN_05a9b268(lVar17,0);
        }
        uVar13 = uVar13 + 1;
        lVar17 = lVar17 + 0x58;
      } while (uVar5 != uVar13);
    }
    *(undefined8 *)(lVar15 + 0x138) = 0;
    *(undefined8 *)(lVar15 + 0x38) = 0;
    *(undefined8 *)(lVar15 + 0x40) = 0;
    *(uint *)(lVar15 + 200) = *(uint *)(lVar15 + 200) & 0xfffffff3;
    FUN_05a777d8(lVar15,1);
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar14 = piVar14 + 4;
    if (uVar13 == 0) break;
    if (*(long *)(piVar14 + -2) == lVar12) {
      puVar7 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_05a84000;
    }
  }
LAB_05a83fe4:
  puVar7 = (undefined8 *)FUN_02f421d0(plVar8,lVar12,0);
LAB_05a84000:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
LAB_05a8400c:
  if (plVar6 != (long *)0x0) {
    lVar15 = *plVar6;
    lVar12 = *(long *)puVar1;
    uVar13 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == lVar12) {
          puVar7 = (undefined8 *)(lVar15 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_05a84068;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar7 = (undefined8 *)FUN_02f421d0(plVar6,lVar12,0);
LAB_05a84068:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  return;
}


