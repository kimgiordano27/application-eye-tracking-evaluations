/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnBeforeSerialize
ENTRY_POINT: 057912e8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_ImmersiveDebugger_RuntimeSettings__OnBeforeSerialize(undefined4 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long unaff_x19;
  undefined8 uVar4;
  long *unaff_x24;
  long *unaff_x25;
  
  switch(param_1) {
  case 5:
    lVar1 = *unaff_x25;
    puVar3 = (undefined8 *)PTR_DAT_06f9ceb0;
    break;
  case 6:
  case 8:
  case 9:
  case 10:
    lVar1 = *unaff_x25;
    puVar3 = (undefined8 *)PTR_DAT_06f9ce80;
    break;
  case 7:
    lVar1 = *unaff_x25;
    puVar3 = (undefined8 *)PTR_DAT_06f9ceb8;
    break;
  case 0xb:
  case 0xc:
    lVar1 = *unaff_x25;
    puVar3 = (undefined8 *)PTR_DAT_06f9cea0;
    break;
  default:
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_02feb2c4();
    }
    plVar2 = (long *)thunk_FUN_0301080c();
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4(lVar1);
    }
    FUN_0491a27c(plVar2,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x38));
    return plVar2;
  }
  uVar4 = *puVar3;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar4 = FUN_05afde1c(uVar4,0);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*unaff_x24);
  }
  plVar2 = (long *)FUN_05b31ad8(uVar4);
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02feb2c4(lVar1);
  }
  lVar1 = **(long **)(lVar1 + 0xc0);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02feb2c4(lVar1);
  }
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(lVar1 + 0x130)) ||
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) != lVar1)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(plVar2);
    }
  }
  return plVar2;
}


