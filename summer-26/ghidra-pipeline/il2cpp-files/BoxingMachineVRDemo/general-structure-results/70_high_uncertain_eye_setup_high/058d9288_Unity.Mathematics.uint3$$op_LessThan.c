/*
FUNCTION_NAME: Unity.Mathematics.uint3$$op_LessThan
ENTRY_POINT: 058d9288
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


int Unity_Mathematics_uint3__op_LessThan(long param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_220 [464];
  long lStack_50;
  
  if ((DAT_06b80b37 & 1) == 0) {
    FUN_02d6084c(OVRPlugin_OVRP_1_36_0_TypeInfo);
    FUN_02d6084c(OVRPlugin_OVRP_1_38_0_TypeInfo);
    DAT_06b80b37 = 1;
  }
  puVar1 = OVRPlugin_OVRP_1_38_0_TypeInfo;
  if (*(int *)(param_1 + 0x128) == param_2) {
    iVar3 = *(int *)(param_1 + 300);
  }
  else {
    if (0 < *(int *)(param_1 + 0x138)) {
      iVar3 = 0;
      do {
        iVar2 = FUN_03794e9c((int *)(param_1 + 0x138),iVar3,*(undefined8 *)puVar1);
        if (iVar2 == param_2) {
          return iVar3;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x138));
    }
    puVar1 = OVRPlugin_OVRP_1_36_0_TypeInfo;
    if (0 < *(int *)(param_1 + 0x160)) {
      iVar3 = 0;
      do {
        FUN_03799508(auStack_220,(int *)(param_1 + 0x160),iVar3,*(undefined8 *)puVar1);
        if (lStack_50 == 0) {
LAB_058d93a4:
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if (*(int *)(lStack_50 + 400) == param_2) {
          return iVar3;
        }
        if (*(int *)(lStack_50 + 400) != 0) {
          if (*(long *)(lStack_50 + 0x188) == 0) goto LAB_058d93a4;
          if (*(int *)(*(long *)(lStack_50 + 0x188) + 0xe0) == param_2) {
            return iVar3;
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x160));
    }
    iVar3 = -1;
  }
  return iVar3;
}


