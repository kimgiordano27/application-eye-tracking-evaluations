/*
FUNCTION_NAME: OVRManager$$get_batteryTemperature
ENTRY_POINT: 0511b6e8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


bool OVRManager__get_batteryTemperature(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *unaff_x19;
  long *plVar8;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *puVar9;
  undefined8 *unaff_x25;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0xa60));
  FUN_02d6084c(PTR_DAT_0677eae0);
  *(undefined1 *)(unaff_x22 + 0xbc8) = 1;
  lVar4 = thunk_FUN_02d9d534(*unaff_x25);
  FUN_0504920c(lVar4,0);
  uVar5 = thunk_FUN_02d9d534(*unaff_x24);
  FUN_03aabc60(uVar5,*unaff_x23);
  puVar2 = PTR_DAT_06780a68;
  puVar1 = PTR_DAT_0677eae0;
  if (lVar4 != 0) {
    puVar9 = (undefined8 *)(lVar4 + 0x10);
    *puVar9 = uVar5;
    thunk_FUN_02dd37b4(puVar9,uVar5);
    uVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
    OVRManager__OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames
              (uVar5,lVar4,*(undefined8 *)puVar2);
    FUN_0511b430();
    *unaff_x19 = *puVar9;
    thunk_FUN_02dd37b4();
    plVar8 = (long *)*unaff_x19;
    if (plVar8 != (long *)0x0) {
      lVar4 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06764000) {
            puVar9 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0511b7e8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)PTR_DAT_06764000,0);
LAB_0511b7e8:
      iVar3 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      return iVar3 == 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


