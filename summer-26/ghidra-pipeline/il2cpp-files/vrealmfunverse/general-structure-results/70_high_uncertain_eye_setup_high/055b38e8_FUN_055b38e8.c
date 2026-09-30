/*
FUNCTION_NAME: FUN_055b38e8
ENTRY_POINT: 055b38e8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_055b38e8(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7,uint param_8,byte param_9)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
                    /* try { // try from 055b38f0 to 056b38ff has its CatchHandler @ 055b3ce0 */
                    /* try { // try from 055b3908 to 056b390b has its CatchHandler @ 055b3d30 */
                    /* try { // try from 055b390c to 056b3a87 has its CatchHandler @ 055b34b0 */
  if ((DAT_066d17c1 & 1) == 0) {
    FUN_02b3c81c(OVRPlugin_OVRP_1_7_0_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TypeInfo);
    DAT_066d17c1 = 1;
  }
  if ((param_8 & 1) == 0) {
    uVar3 = FUN_055b1724(param_1,param_6,param_7,param_2);
    System_Net_ServicePointScheduler__OnConnectionCreated(param_1,uVar3,0);
    return;
  }
  if ((param_9 & 1) == 0) {
    if (param_7 != 0) {
      uVar3 = *(undefined8 *)(param_7 + 0x10);
      uVar4 = *(undefined8 *)OVRPlugin_OVRP_1_7_0_TypeInfo;
      if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar4 = FUN_04d8a7b0(uVar4,0);
                    /* try { // try from 055b3a88 to 056b3aaf has its CatchHandler @ 055b3d38 */
      uVar2 = FUN_04d938a0(uVar3,uVar4,0);
      if ((uVar2 & 1) == 0) {
                    /* try { // try from 055b3b4c to 056b3b57 has its CatchHandler @ 055b3cfc */
        uVar3 = FUN_055b1724(param_1,param_6,param_7,param_2);
                    /* try { // try from 055b3b64 to 056b3b6b has its CatchHandler @ 055b3d0c */
        FUN_055ac81c(param_1,param_3,param_4,uVar3,param_5,0);
        return;
      }
      if (param_2 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)
                           UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TypeInfo
                         + 0x130);
        if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TypeInfo
           )) goto LAB_055b3b98;
      }
                    /* try { // try from 055b3aec to 056b3b17 has its CatchHandler @ 055b3d34 */
      FUN_055ac618(param_1,param_3,param_4,param_2,param_5,0);
      return;
    }
  }
  else if (param_7 != 0) {
    uVar3 = *(undefined8 *)(param_7 + 0x10);
    uVar4 = *(undefined8 *)OVRPlugin_OVRP_1_7_0_TypeInfo;
    if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar4 = FUN_04d8a7b0(uVar4,0);
    uVar2 = FUN_04d938a0(uVar3,uVar4,0);
    if ((uVar2 & 1) == 0) {
      uVar3 = FUN_055b1724(param_1,param_6,param_7,param_2);
      FUN_055acf04(param_1,param_3,param_4,uVar3,param_5,0);
      return;
    }
    if (param_2 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)
                         UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TypeInfo
                       + 0x130);
      if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TypeInfo))
      {
LAB_055b3b98:
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(param_2);
      }
    }
    FUN_055acd98(param_1,param_3,param_4,param_2,param_5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


