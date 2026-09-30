/*
FUNCTION_NAME: FUN_0601c24c
ENTRY_POINT: 0601c24c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_10
*/


void FUN_0601c24c(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if ((DAT_06bc5373 & 1) == 0) {
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_62__);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(PTR_DAT_067cc1e0);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_63__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_64__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_65__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_66__);
    DAT_06bc5373 = 1;
  }
  puVar1 = PTR_DAT_067c8f20;
  if (*(char *)((long)param_1 + 0x2c) != '\0') {
    return;
  }
  lVar6 = param_1[4];
  if (*(int *)(*(long *)PTR_DAT_067c8f20 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar2 = FUN_060f245c(lVar6,0,0);
  if ((uVar2 & 1) == 0) {
    lVar6 = param_1[4];
  }
  else {
    lVar6 = FUN_03356cdc(param_1,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_62__);
    param_1[4] = lVar6;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar2 = FUN_060f245c(lVar6,0,0);
  puVar5 = (undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_64__;
  if ((uVar2 & 1) != 0) {
LAB_0601c404:
    uVar4 = FUN_04f65e2c(*puVar5,param_1,0);
    if (*(int *)(*(long *)PTR_DAT_067cc1e0 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067cc1e0);
    }
    FUN_05f052b4(uVar4,param_1,0);
    FUN_060ed000(param_1,0,0);
    return;
  }
  if ((param_1[4] != 0) && (lVar6 = thunk_FUN_060bbdcc(param_1[4],0), lVar6 != 0)) {
    puVar5 = (undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_63__;
    if (*(long *)(lVar6 + 0x18) == 0) goto LAB_0601c404;
    if (param_1[4] != 0) {
      lVar6 = param_1[5];
      lVar3 = thunk_FUN_060bbdcc(param_1[4],0);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x18) < (int)lVar6) {
          uVar4 = FUN_04f65e2c(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_66__,param_1,0);
          uVar4 = FUN_04f65260(uVar4,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_65__,0);
          if (*(int *)(*(long *)PTR_DAT_067cc1e0 + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)PTR_DAT_067cc1e0);
          }
          FUN_05f05208(uVar4,param_1,0);
          *(undefined4 *)(param_1 + 5) = 0;
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x0601c470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


