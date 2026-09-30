/*
FUNCTION_NAME: OVRManager$$add_ShareSpacesComplete
ENTRY_POINT: 01f5dd10
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

undefined8
OVRManager__add_ShareSpacesComplete
          (undefined4 param_1,undefined8 param_2,long param_3,undefined8 param_4,long *param_5,
          long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((DAT_0293dca5 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027ba9b8);
    thunk_FUN_01279b34(PTR_DAT_027be4d0);
    thunk_FUN_01279b34(PTR_DAT_027c0aa8);
    DAT_0293dca5 = 1;
  }
  puVar2 = PTR_DAT_027c0a78;
  puVar1 = PTR_DAT_027ba9b8;
  switch(param_1) {
  case 0x17:
  case 0x18:
    if (*(int *)(*(long *)PTR_DAT_027ba9b8 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_01f5bf4c(param_3,param_4);
    if (param_6 == 0) {
LAB_01f5e0a0:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    uVar4 = FUN_01f1c750(param_6,param_3,(long)param_5 + 0xc,1,0);
    puVar2 = PTR_DAT_027be4d0;
    if ((uVar4 & 1) == 0) goto LAB_01f5e070;
    if (*(int *)(*(long *)PTR_DAT_027be4d0 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    if (DAT_0293daf8 == '\0') {
      thunk_FUN_01279b34(PTR_DAT_027be4d0);
      DAT_0293daf8 = '\x01';
    }
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01220628();
      lVar3 = *(long *)puVar2;
    }
    if (**(char **)(lVar3 + 0xb8) != '\0') goto LAB_01f5e05c;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar4 = FUN_01f5c80c(param_3,param_5,param_6);
    break;
  case 0x19:
    *(undefined4 *)(param_5 + 2) = *(undefined4 *)(*param_5 + 4);
    if (param_6 == 0) goto LAB_01f5e0a0;
    uVar4 = FUN_01f1c750(param_6,param_5 + 2,(long)param_5 + 0xc,1,0);
    if ((uVar4 & 1) == 0) goto LAB_01f5e070;
    if (*(int *)(*(long *)PTR_DAT_027ba9b8 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar4 = FUN_01f5cbd0(param_3,param_5,param_6);
    break;
  default:
    if ((DAT_0293dcc4 & 1) == 0) {
      thunk_FUN_01279b34(PTR_DAT_027c0a78);
      DAT_0293dcc4 = 1;
    }
    *(undefined4 *)(param_3 + 0x40) = 4;
    uVar5 = *(undefined8 *)puVar2;
    goto LAB_01f5e088;
  case 0x1f:
    if (param_6 == 0) goto LAB_01f5e0a0;
    uVar4 = FUN_01f1c750(param_6,param_5 + 2,(long)param_5 + 0xc,1,0);
    if ((uVar4 & 1) == 0) goto LAB_01f5e070;
    if (*(int *)(*(long *)PTR_DAT_027ba9b8 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar4 = FUN_01f5d234(param_3,param_5);
    break;
  case 0x21:
    if (param_6 == 0) goto LAB_01f5e0a0;
    uVar4 = FUN_01f1c750(param_6,param_5 + 2,(long)param_5 + 0xc,1,0);
    if ((uVar4 & 1) == 0) goto LAB_01f5e070;
    if (*(int *)(*(long *)PTR_DAT_027ba9b8 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar4 = FUN_01f5d454(param_3,param_5);
    break;
  case 0x22:
    if (*(int *)(*(long *)PTR_DAT_027ba9b8 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar4 = FUN_01f5d660(param_3,param_5);
    break;
  case 0x23:
    if (*(int *)(*(long *)PTR_DAT_027ba9b8 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar4 = FUN_01f5d720(param_3,param_5);
    break;
  case 0x24:
    if (*(int *)(*(long *)PTR_DAT_027ba9b8 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar4 = FUN_01f5d7a8(param_3,param_5);
    break;
  case 0x26:
    if ((int)param_5[2] < 1000) {
      *(int *)(param_5 + 2) = (int)param_5[2] + 5000;
    }
    if (*(int *)(*(long *)PTR_DAT_027ba9b8 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar4 = FUN_01f5d078(param_3,param_5,param_6);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    if (param_6 == 0) goto LAB_01f5e0a0;
    uVar4 = FUN_01f1c750(param_6,param_3,(long)param_5 + 0xc,1,0);
    if ((uVar4 & 1) != 0) goto LAB_01f5e05c;
LAB_01f5e070:
    uVar5 = *(undefined8 *)PTR_DAT_027c0aa8;
    *(undefined4 *)(param_3 + 0x40) = 7;
LAB_01f5e088:
    *(undefined8 *)(param_3 + 0x48) = uVar5;
    *(undefined8 *)(param_3 + 0x50) = 0;
    return 0;
  }
  if ((uVar4 & 1) == 0) {
    return 0;
  }
LAB_01f5e05c:
  *(undefined4 *)(param_5 + 1) = 0;
  return 1;
}


