/*
FUNCTION_NAME: FUN_03692894
ENTRY_POINT: 03692894
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 FUN_03692894(undefined8 param_1,long param_2,uint *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_04833ece & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_59__);
    DAT_04833ece = 1;
  }
  *param_3 = 0xffffffff;
  lVar3 = *(long *)(param_2 + 0x38);
  if (lVar3 == 0) {
LAB_03692994:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar4 = (uint)*(undefined8 *)(lVar3 + 0x18);
  if ((int)uVar4 < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar6 = 0;
    uVar5 = 0xffffffff;
    fVar8 = INFINITY;
    do {
      if (uVar4 <= uVar6) goto LAB_03692998;
      if (*(long *)(lVar3 + (long)(int)uVar6 * 8 + 0x20) == 0) goto LAB_03692994;
      fVar7 = (float)FUN_0369299c(param_1);
      if (fVar7 < fVar8) {
        *param_3 = uVar6;
        uVar5 = uVar6;
        fVar8 = fVar7;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)uVar4);
  }
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__653_59__;
  if (uVar5 == 0xffffffff) {
    lVar3 = *(long *)Method_OVRPlugin_<>c_<_cctor>b__653_59__;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *(long *)puVar1;
    }
    puVar2 = *(undefined8 **)(lVar3 + 0xb8);
  }
  else {
    if (uVar4 <= uVar5) {
LAB_03692998:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    puVar2 = (undefined8 *)(lVar3 + (long)(int)uVar5 * 8 + 0x20);
  }
  return *puVar2;
}


