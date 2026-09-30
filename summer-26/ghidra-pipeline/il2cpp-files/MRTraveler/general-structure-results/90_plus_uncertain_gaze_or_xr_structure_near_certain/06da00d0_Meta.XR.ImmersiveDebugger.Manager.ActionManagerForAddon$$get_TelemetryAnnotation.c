/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 06da00d0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_ImmersiveDebugger_Manager_ActionManagerForAddon__get_TelemetryAnnotation
          (undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  
  iVar2 = (*(code *)*param_1)();
  lVar5 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  iVar3 = 1;
  if (iVar2 != 3) {
    iVar3 = 2;
  }
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x21) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
        goto LAB_06da014c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da014c:
  iVar2 = (*(code *)*puVar4)();
  puVar1 = PTR_DAT_08e8fbc0;
  if (iVar2 != 10) {
    lVar5 = *(long *)PTR_DAT_08e8fbc0;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = **(long **)(lVar5 + 0xb8);
    if (lVar5 != 0) {
      if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_06da03f8;
      puVar4 = (undefined8 *)(lVar5 + 0x40);
      goto LAB_06da0268;
    }
    goto LAB_06da03f4;
  }
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = unaff_w20 / iVar3;
  }
  if (iVar2 < 56000 == iVar2 < 81000) {
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x21) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06da0210;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da0210:
    iVar3 = (*(code *)*puVar4)();
    if ((iVar2 < 56000) || (iVar3 != 48000)) {
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_06da02c8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da02c8:
      iVar3 = (*(code *)*puVar4)();
      puVar1 = PTR_DAT_08e8fbc0;
      if ((95999 < iVar2) && (iVar3 != 48000)) {
        lVar5 = *(long *)PTR_DAT_08e8fbc0;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar5 = *(long *)puVar1;
        }
        lVar5 = **(long **)(lVar5 + 0xb8);
        if (lVar5 != 0) {
          if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_06da03f8;
          puVar4 = (undefined8 *)(lVar5 + 0x28);
          goto LAB_06da0268;
        }
        goto LAB_06da03f4;
      }
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x21) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_06da0378;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03cf1348();
LAB_06da0378:
      iVar3 = (*(code *)*puVar4)();
      puVar1 = PTR_DAT_08e8fbc0;
      lVar5 = *(long *)PTR_DAT_08e8fbc0;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar5 = *(long *)puVar1;
      }
      lVar5 = **(long **)(lVar5 + 0xb8);
      if (lVar5 == 0) goto LAB_06da03f4;
      if (48999 < iVar2 || iVar3 == 32000) {
        if (3 < *(uint *)(lVar5 + 0x18)) {
          puVar4 = (undefined8 *)(lVar5 + 0x38);
          goto LAB_06da0268;
        }
        goto LAB_06da03f8;
      }
      if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_06da03f8;
      puVar4 = (undefined8 *)(lVar5 + 0x30);
      goto LAB_06da0268;
    }
  }
  puVar1 = PTR_DAT_08e8fbc0;
  lVar5 = *(long *)PTR_DAT_08e8fbc0;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar5 = *(long *)puVar1;
  }
  lVar5 = **(long **)(lVar5 + 0xb8);
  if (lVar5 == 0) {
LAB_06da03f4:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(int *)(lVar5 + 0x18) == 0) {
LAB_06da03f8:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb38();
  }
  puVar4 = (undefined8 *)(lVar5 + 0x20);
LAB_06da0268:
  return *puVar4;
}


