/*
FUNCTION_NAME: OVRPlugin$$GetLayerTexture
ENTRY_POINT: 0513438c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetLayerTexture(long param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  
  if ((DAT_06b79c86 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06781298);
    FUN_02d6084c(PTR_DAT_067812a0);
    DAT_06b79c86 = 1;
  }
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x578))(param_2,*(undefined8 *)(*param_2 + 0x580));
    puVar2 = PTR_DAT_067812a0;
    puVar1 = PTR_DAT_06781298;
    lVar4 = *(long *)(param_1 + 0x58);
    if (lVar4 != 0) {
      iVar6 = 0;
      do {
        iVar3 = FUN_04387650(lVar4,*(undefined8 *)puVar1);
        if (iVar3 <= iVar6) {
                    /* WARNING: Could not recover jumptable at 0x05134470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_2 + 0x588))(param_2,*(undefined8 *)(*param_2 + 0x590));
          return;
        }
        if ((*(long *)(param_1 + 0x58) == 0) ||
           (plVar5 = (long *)FUN_043876e0(*(long *)(param_1 + 0x58),iVar6,*(undefined8 *)puVar2),
           plVar5 == (long *)0x0)) break;
        (**(code **)(*plVar5 + 0x2b8))(plVar5,param_2,param_3,*(undefined8 *)(*plVar5 + 0x2c0));
        lVar4 = *(long *)(param_1 + 0x58);
        iVar6 = iVar6 + 1;
      } while (lVar4 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


