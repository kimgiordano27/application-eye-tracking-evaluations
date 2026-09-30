/*
FUNCTION_NAME: FUN_05b21980
ENTRY_POINT: 05b21980
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05b21ca4) */

void FUN_05b21980(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  
  puVar1 = PTR_DAT_067c8f20;
  if ((DAT_06bc2914 & 1) == 0) {
    FUN_02f08768(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000DB7_PostfixBurstDelegate>__
                );
    FUN_02f08768(PTR_DAT_067d7680);
    FUN_02f08768(System_Runtime_Serialization_FormatterServices_TypeInfo);
    FUN_02f08768(PTR_DAT_067d7688);
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider_UxmlSerializedData<float,_float>__ctor__);
    FUN_02f08768(PTR_DAT_067c91b8);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp__);
    FUN_02f08768(PTR_DAT_067cbf00);
    DAT_06bc2914 = 1;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar6 = FUN_060f245c(uVar11,0,0);
  if ((uVar6 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0xa0) == 0) {
    uVar11 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067d7688);
    FUN_0492c420(uVar11,*(undefined8 *)PTR_DAT_067d7680);
    *(undefined8 *)(param_1 + 0xa0) = uVar11;
  }
  else {
    FUN_0492cec0(*(long *)(param_1 + 0xa0),
                 *(undefined8 *)
                  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000DB7_PostfixBurstDelegate>__
                );
  }
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  plVar7 = (long *)FUN_05a7ccbc(*(long *)(param_1 + 0x28),0);
  puVar5 = Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp__;
  puVar4 = Method_Unity_AppUI_UI_BaseSlider_UxmlSerializedData<float,_float>__ctor__;
  puVar3 = System_Runtime_Serialization_FormatterServices_TypeInfo;
  puVar2 = PTR_DAT_067cbf00;
  puVar1 = PTR_DAT_067c91b8;
  do {
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar9 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05b21b38;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)puVar1,0);
LAB_05b21b38:
    uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 == 0) goto LAB_05b21c48;
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar9 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05b21b9c;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)puVar4,0);
LAB_05b21b9c:
    lVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_05a774b8(lVar9,0);
    uVar11 = FUN_05aa5f34(*(undefined8 *)(lVar9 + 0x10),*(undefined8 *)puVar2,0);
    lVar13 = *(long *)(param_1 + 0xa0);
    uVar12 = *(undefined8 *)(lVar9 + 0x28);
    uVar11 = FUN_04f65260(*(undefined8 *)puVar5,uVar11,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_0492cd24(lVar13,uVar12,uVar11,*(undefined8 *)puVar3);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar10 = piVar10 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_067c91b0) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_05b21c64;
    }
  }
LAB_05b21c48:
  puVar8 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)PTR_DAT_067c91b0,0);
LAB_05b21c64:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
}


