/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry.TelemetryTracker$$Init
ENTRY_POINT: 05f20a14
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


long * Meta_XR_ImmersiveDebugger_Telemetry_TelemetryTracker__Init(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar6;
  undefined8 unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  
  lVar2 = thunk_FUN_037787d0(param_2,*(undefined8 *)(param_1 + 0x40));
  if (lVar2 == 0) {
    uVar6 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar6,0);
  }
  if (*(int *)(unaff_x23 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
  *(undefined8 *)(unaff_x23 + 0x20) = unaff_x21;
  thunk_FUN_037aeb94();
  if ((unaff_x22 == (long *)0x0) ||
     (plVar3 = (long *)(**(code **)(*unaff_x22 + 0x978))(), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar4 = (**(code **)(*plVar3 + 0x2a8))();
  if ((uVar4 & 1) == 0) {
    uVar4 = (**(code **)(*unaff_x20 + 0x5b8))();
    if ((uVar4 & 1) == 0) {
switchD_05f20b34_default:
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03775678();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        FUN_03775678();
      }
      plVar3 = (long *)thunk_FUN_037788cc();
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03775678(lVar2);
      }
      FUN_04f042e4(plVar3,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x38));
      return plVar3;
    }
    if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar6 = FUN_06276e18();
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70(*(long *)(unaff_x25 + 0xe0));
    }
    uVar1 = FUN_0625d834(uVar6,0);
    switch(uVar1) {
    case 5:
      lVar2 = *(long *)(unaff_x25 + 0xe0);
      puVar5 = (undefined8 *)PTR_DAT_07d98338;
      break;
    case 6:
    case 8:
    case 9:
    case 10:
      lVar2 = *(long *)(unaff_x25 + 0xe0);
      puVar5 = (undefined8 *)PTR_DAT_07d98300;
      break;
    case 7:
      lVar2 = *(long *)(unaff_x25 + 0xe0);
      puVar5 = (undefined8 *)PTR_DAT_07d98340;
      break;
    case 0xb:
    case 0xc:
      lVar2 = *(long *)(unaff_x25 + 0xe0);
      puVar5 = (undefined8 *)PTR_DAT_07d98320;
      break;
    default:
      goto switchD_05f20b34_default;
    }
    uVar6 = *puVar5;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar6 = FUN_062519f8(uVar6,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03798b70(*unaff_x24);
    }
  }
  else {
    uVar6 = *(undefined8 *)PTR_DAT_07d98328;
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    uVar6 = FUN_062519f8(uVar6,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03798b70(*unaff_x24);
    }
  }
  plVar3 = (long *)FUN_06284508(uVar6);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678(lVar2);
  }
  lVar2 = **(long **)(lVar2 + 0xc0);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03775678(lVar2);
  }
  if (plVar3 != (long *)0x0) {
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar3);
    }
  }
  return plVar3;
}


