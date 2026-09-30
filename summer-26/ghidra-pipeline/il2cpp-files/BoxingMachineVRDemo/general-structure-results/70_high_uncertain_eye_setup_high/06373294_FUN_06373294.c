/*
FUNCTION_NAME: FUN_06373294
ENTRY_POINT: 06373294
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 FUN_06373294(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_06b8c670 & 1) == 0) {
    FUN_02d6084c(OVRPlugin_OVRP_1_54_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_55_0_TypeInfo);
    FUN_02d6084c(PTR_DAT_06767fc8);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    DAT_06b8c670 = 1;
  }
  if (param_1[7] != 0) {
    uVar6 = *(undefined8 *)(param_1[7] + 0x40);
    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar2 = UnityEngine_Font__add_textureRebuilt(uVar6,0,0);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    plVar3 = (long *)(**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
    plVar4 = (long *)FUN_0636f850(param_1);
    if (plVar4 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar4 + 0x348))(plVar4,param_1[0x15],*(undefined8 *)(*plVar4 + 0x350));
      puVar1 = PTR_DAT_06767fc8;
      if ((uVar2 & 1) != 0) {
        if (param_1[7] == 0) goto LAB_063734a4;
        uVar6 = *(undefined8 *)(param_1[7] + 0x40);
        if (*(int *)(*(long *)PTR_DAT_06767fc8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        if (DAT_06b80b9d == '\0') {
          FUN_02d6084c(PTR_DAT_06767fc8);
          DAT_06b80b9d = '\x01';
        }
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar5 = *(long *)puVar1;
        }
        FUN_033c3938(uVar6,plVar3,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x80),
                     *(undefined8 *)OVRPlugin_OVRP_1_55_0_TypeInfo);
      }
      plVar4 = (long *)FUN_0636f850(param_1);
      if (plVar4 != (long *)0x0) {
        uVar2 = (**(code **)(*plVar4 + 0x348))
                          (plVar4,param_1[0x16],*(undefined8 *)(*plVar4 + 0x350));
        puVar1 = PTR_DAT_06767fc8;
        if ((uVar2 & 1) != 0) {
          if (param_1[7] == 0) goto LAB_063734a4;
          uVar6 = *(undefined8 *)(param_1[7] + 0x40);
          if (*(int *)(*(long *)PTR_DAT_06767fc8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          if (DAT_06b80b9c == '\0') {
            FUN_02d6084c(PTR_DAT_06767fc8);
            DAT_06b80b9c = '\x01';
          }
          lVar5 = *(long *)puVar1;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar5 = *(long *)puVar1;
          }
          FUN_033c3938(uVar6,plVar3,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x88),
                       *(undefined8 *)OVRPlugin_OVRP_1_54_0_TypeInfo);
        }
        if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x063734a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
          return uVar6;
        }
      }
    }
  }
LAB_063734a4:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


