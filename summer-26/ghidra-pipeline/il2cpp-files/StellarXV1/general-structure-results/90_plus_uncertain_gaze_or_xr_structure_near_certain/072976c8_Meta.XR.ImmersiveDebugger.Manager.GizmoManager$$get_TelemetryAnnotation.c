/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManager$$get_TelemetryAnnotation
ENTRY_POINT: 072976c8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


int Meta_XR_ImmersiveDebugger_Manager_GizmoManager__get_TelemetryAnnotation(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  
  puVar1 = PTR_DAT_092c21c0;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092c21c0) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto LAB_07297724;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00();
LAB_07297724:
  iVar2 = (*(code *)*puVar4)();
  lVar6 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
        goto LAB_07297784;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00();
LAB_07297784:
  uVar5 = (*(code *)*puVar4)();
  lVar6 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 4) * 0x10 + 0x138);
        goto LAB_072977e4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072977e4:
  iVar3 = (*(code *)*puVar4)();
  if (iVar3 == 10) {
    lVar6 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 6) * 0x10 + 0x138);
          goto LAB_07297848;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00();
LAB_07297848:
    iVar3 = (*(code *)*puVar4)();
    if (iVar3 != 3) {
      iVar3 = -0x20;
      goto LAB_07297938;
    }
  }
  lVar6 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 4) * 0x10 + 0x138);
        goto LAB_072978b4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00();
LAB_072978b4:
  iVar3 = (*(code *)*puVar4)();
  if (10 < iVar3) {
    lVar6 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 6) * 0x10 + 0x138);
          goto LAB_07297918;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00();
LAB_07297918:
    iVar3 = (*(code *)*puVar4)();
    if (iVar3 == 3) {
      iVar3 = -9;
      goto LAB_07297938;
    }
  }
  iVar3 = -0x11;
LAB_07297938:
  iVar7 = -6;
  if ((uVar5 & 1) == 0) {
    iVar7 = -4;
  }
  return iVar7 + iVar2 + iVar3;
}


