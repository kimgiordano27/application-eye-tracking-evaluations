/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.GizmoManagerFromInspector$$get_TelemetryAnnotation
ENTRY_POINT: 0727c1fc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_DebugInspectorManager_GizmoManagerFromInspector__get_TelemetryAnnotation
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar7;
  long unaff_x21;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0x598));
  FUN_04077588(PTR_DAT_092c15a0);
  FUN_04077588(PTR_DAT_092c15a8);
  FUN_04077588(PTR_DAT_092c15b0);
  FUN_04077588(PTR_DAT_092c15b8);
  *(undefined1 *)(unaff_x21 + 0x776) = 1;
  if (unaff_x20 == 0) {
    unaff_x19[2] = 0;
    unaff_x19[3] = 0;
    *unaff_x19 = 0x3ff0000000000000;
    unaff_x19[1] = 0;
    unaff_x19[4] = 0x3ff0000000000000;
    unaff_x19[5] = 0;
    unaff_x19[6] = 0;
    unaff_x19[7] = 0;
    unaff_x19[8] = 0x3ff0000000000000;
    unaff_x19[9] = 0;
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    return;
  }
  lVar7 = *(long *)(unaff_x20 + 0x30);
  lVar4 = FUN_04077674(*(undefined8 *)PTR_DAT_09286040,1);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    *(undefined2 *)(lVar4 + 0x20) = 0x20;
    if ((lVar7 != 0) && (lVar4 = FUN_074e93f0(lVar7,lVar4,0), puVar3 = PTR_DAT_092c15b8, lVar4 != 0)
       ) {
      if (*(int *)(lVar4 + 0x18) != 0xc) {
        thunk_FUN_040dedf8(PTR_DAT_092c1430);
        uVar9 = thunk_FUN_040b4efc();
        uVar10 = thunk_FUN_040dedf8(PTR_DAT_092c15c0);
        FUN_0727b03c(uVar9,uVar10);
        uVar10 = thunk_FUN_040dedf8(PTR_DAT_092c15c8);
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar9,uVar10);
      }
      lVar7 = *(long *)PTR_DAT_092c15b8;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar7 = *(long *)puVar3;
      }
      puVar2 = PTR_DAT_092c1598;
      puVar1 = PTR_DAT_092c1590;
      puVar6 = *(undefined8 **)(lVar7 + 0xb8);
      lVar8 = puVar6[1];
      if (lVar8 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          puVar6 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
        }
        uVar9 = *puVar6;
        lVar8 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c15a0);
        FUN_05689eec(lVar8,uVar9,*(undefined8 *)PTR_DAT_092c15b0,0);
        plVar5 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
        *plVar5 = lVar8;
        thunk_FUN_040ec700(plVar5,lVar8);
      }
      uVar9 = FUN_04fac4b4(lVar4,lVar8,*(undefined8 *)puVar1);
      lVar4 = FUN_04fbe7b8(uVar9,*(undefined8 *)puVar2);
      puVar3 = PTR_DAT_092c15a8;
      if (lVar4 != 0) {
        uVar9 = FUN_05b60c98(lVar4,0,*(undefined8 *)PTR_DAT_092c15a8);
        uVar10 = FUN_05b60c98(lVar4,1,*(undefined8 *)puVar3);
        uVar11 = FUN_05b60c98(lVar4,2,*(undefined8 *)puVar3);
        uVar12 = FUN_05b60c98(lVar4,3,*(undefined8 *)puVar3);
        uVar13 = FUN_05b60c98(lVar4,4,*(undefined8 *)puVar3);
        uVar14 = FUN_05b60c98(lVar4,5,*(undefined8 *)puVar3);
        uVar15 = FUN_05b60c98(lVar4,6,*(undefined8 *)puVar3);
        uVar16 = FUN_05b60c98(lVar4,7,*(undefined8 *)puVar3);
        uVar17 = FUN_05b60c98(lVar4,8,*(undefined8 *)puVar3);
        uVar18 = FUN_05b60c98(lVar4,9,*(undefined8 *)puVar3);
        uVar19 = FUN_05b60c98(lVar4,10,*(undefined8 *)puVar3);
        uVar20 = FUN_05b60c98(lVar4,0xb,*(undefined8 *)puVar3);
        unaff_x19[1] = 0;
        *unaff_x19 = 0;
        unaff_x19[3] = 0;
        unaff_x19[2] = 0;
        unaff_x19[5] = 0;
        unaff_x19[4] = 0;
        unaff_x19[7] = 0;
        unaff_x19[6] = 0;
        unaff_x19[9] = 0;
        unaff_x19[8] = 0;
        unaff_x19[0xb] = 0;
        unaff_x19[10] = 0;
        unaff_x19[4] = uVar13;
        unaff_x19[5] = uVar14;
        unaff_x19[6] = uVar15;
        unaff_x19[7] = uVar16;
        *unaff_x19 = uVar9;
        unaff_x19[1] = uVar10;
        unaff_x19[8] = uVar17;
        unaff_x19[9] = uVar18;
        unaff_x19[2] = uVar11;
        unaff_x19[3] = uVar12;
        unaff_x19[10] = uVar19;
        unaff_x19[0xb] = uVar20;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


