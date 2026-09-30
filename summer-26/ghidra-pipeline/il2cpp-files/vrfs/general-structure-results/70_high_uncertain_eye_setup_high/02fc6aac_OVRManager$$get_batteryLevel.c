/*
FUNCTION_NAME: OVRManager$$get_batteryLevel
ENTRY_POINT: 02fc6aac
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_batteryLevel
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam00000000072371d1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06dc26f0);
    thunk_FUN_0159f088(PTR_DAT_06e604a0);
    thunk_FUN_0159f088(PTR_DAT_06dae300);
    thunk_FUN_0159f088(PTR_DAT_06df8b20);
    thunk_FUN_0159f088(PTR_DAT_06d90088);
    bRam00000000072371d1 = 1;
  }
  puVar2 = PTR_DAT_06dc26f0;
  puVar1 = PTR_DAT_06dae300;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031cb62c(4,0);
  }
  FUN_02cacddc(param_2,*(undefined8 *)PTR_DAT_06d90088,*(undefined4 *)(param_1 + 0x2c),0);
  lVar5 = *(long *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)puVar1;
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x10) + 8))();
  }
  puVar1 = PTR_DAT_06e604a0;
  uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x110);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar6 = FUN_031c8668(uVar6,0);
  FUN_02cab664(param_2,uVar4,lVar5,uVar6,0);
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x18);
  }
  FUN_02cacddc(param_2,*(undefined8 *)puVar1,uVar3,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = (**(code **)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0xe8) + 8))
                      (param_1);
    lVar5 = *(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x118);
    if ((*(byte *)(lVar5 + 0x132) & 1) == 0) {
      lVar5 = FUN_015c2790(lVar5);
    }
    puVar1 = PTR_DAT_06df8b20;
    uVar4 = FUN_0160edfc(lVar5,uVar3);
    (**(code **)(*(long *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x120) + 8))
              (param_1,uVar4,0);
    uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_5 + 0x20) + 0xc0) + 0x128);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar6 = FUN_031c8668(uVar6,0);
    FUN_02cab664(param_2,*(undefined8 *)puVar1,uVar4,uVar6,0);
    return;
  }
  return;
}


