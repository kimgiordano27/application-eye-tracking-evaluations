/*
FUNCTION_NAME: UnityEngine.UI.Graphic$$set_material
ENTRY_POINT: 075c52e0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_11
*/


/* WARNING: Removing unreachable block (ram,0x075c5588) */

void UnityEngine_UI_Graphic__set_material(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *plVar9;
  long unaff_x20;
  long *plVar10;
  long lVar11;
  
  FUN_0373b518(OVRPlugin_OVRP_1_60_0_TypeInfo);
  FUN_0373b518(OVRPlugin_OVRP_1_81_0_TypeInfo);
  FUN_0373b518(OVRPlugin_OVRP_1_82_0_TypeInfo);
  FUN_0373b518(PTR_DAT_07d896f8);
  FUN_0373b518(OVRPlugin_OVRP_1_83_0_TypeInfo);
  FUN_0373b518(OVRPlugin_OVRP_1_84_0_TypeInfo);
  FUN_0373b518(PTR_DAT_07d89700);
  *(undefined1 *)(unaff_x20 + 0x853) = 1;
  plVar10 = (long *)(unaff_x19 + 0x18);
  if (*plVar10 != 0) {
    return;
  }
  uVar4 = thunk_FUN_037788cc(*(undefined8 *)OVRPlugin_OVRP_1_82_0_TypeInfo);
  FUN_059ea120(uVar4,*(undefined8 *)OVRPlugin_OVRP_1_81_0_TypeInfo);
  *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
  thunk_FUN_037aeb94(plVar10,uVar4);
  plVar9 = *(long **)(unaff_x19 + 0x10);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)OVRPlugin_OVRP_1_83_0_TypeInfo) {
        puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_075c53d8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_0377596c(plVar9,*(long *)OVRPlugin_OVRP_1_83_0_TypeInfo,0);
LAB_075c53d8:
  plVar9 = (long *)(*(code *)*puVar5)(plVar9,puVar5[1]);
  puVar3 = OVRPlugin_OVRP_1_84_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_60_0_TypeInfo;
  puVar1 = PTR_DAT_07d89700;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  do {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_075c5450;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar9,*(long *)puVar1,0);
LAB_075c5450:
    uVar7 = (*(code *)*puVar5)(plVar9,puVar5[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar9 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_075c5534;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_075c54ac;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar9,*(long *)puVar3,0);
LAB_075c54ac:
    lVar6 = (*(code *)*puVar5)(plVar9,puVar5[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar11 = *plVar10;
    FUN_0623b108();
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_059eaf08(lVar11,0,0,lVar6,*(undefined8 *)puVar2);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_075c5550;
    }
  }
LAB_075c5534:
  puVar5 = (undefined8 *)FUN_0377596c(plVar9,*(long *)PTR_DAT_07d896f8,0);
LAB_075c5550:
  (*(code *)*puVar5)(plVar9,puVar5[1]);
  return;
}


