/*
FUNCTION_NAME: FUN_05d7cc04
ENTRY_POINT: 05d7cc04
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


void FUN_05d7cc04(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  if ((DAT_06b82cd5 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_067693f8);
    FUN_02d6084c(PTR_DAT_06769400);
    FUN_02d6084c(Method_OVRResult<OVRPlugin_Result>_get_Success__);
    DAT_06b82cd5 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar8 = *(long *)Method_OVRResult<OVRPlugin_Result>_get_Success__;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    puVar3 = PTR_DAT_06769400;
    puVar2 = PTR_DAT_067693f8;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
        *puVar7 = param_2;
        thunk_FUN_02dd37b4(puVar7,param_2);
      }
      else {
        FUN_03aac494(lVar4,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                    );
      }
      uVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
      FUN_04894d4c(uVar5,*(undefined8 *)puVar2);
      *(undefined8 *)(param_1 + 0x50) = uVar5;
      thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x50),uVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


