/*
FUNCTION_NAME: FUN_058dc9e8
ENTRY_POINT: 058dc9e8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_058dc9e8(long param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5,
                 long param_6)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar3 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<SnapTurnProvider>__ctor__
  ;
  puVar2 = Method_Unity_Properties_Property<Vector3,_float>__ctor__;
                    /* try { // try from 058dc9e8 to 059dca3b has its CatchHandler @ 058dc7cc */
  local_50 = param_3;
  uStack_48 = param_4;
  if ((DAT_066d33ab & 1) == 0) {
    FUN_02b3c81c(Method_Oculus_Platform_Request<ChallengeEntryList>__ctor__);
                    /* try { // try from 058dca3c to 059dca43 has its CatchHandler @ 058dcfc0 */
    FUN_02b3c81c(Method_UnityEngine_Playables_ScriptPlayable<ParticleControlPlayable>_op_Implicit__)
    ;
                    /* try { // try from 058dca4c to 059dca53 has its CatchHandler @ 058dcf6c */
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<ContinuousTurnProvider>_add_providerStepped__
                );
    FUN_02b3c81c(Method_Unity_Properties_Property<Vector3,_float>__ctor__);
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<SnapTurnProvider>__ctor__
                );
                    /* try { // try from 058dca68 to 059dca6b has its CatchHandler @ 058dcf58 */
    DAT_066d33ab = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  FUN_058dc3c4(param_1,param_2);
                    /* try { // try from 058dca84 to 059dca87 has its CatchHandler @ 058dcf48 */
  OVRTask<OVRResult<ulong,_Int32Enum>>__get_IsCompleted(&local_60,param_2,3,0,*(undefined8 *)puVar3)
  ;
                    /* try { // try from 058dcaa0 to 059dcaa3 has its CatchHandler @ 058dcf4c */
  auVar5 = FUN_03a1c478(&local_50,0,param_2,*(undefined8 *)puVar2);
  if (param_6 != 0) {
                    /* try { // try from 058dcabc to 059dcabf has its CatchHandler @ 058dcf14 */
    FUN_058d5048(param_6,auVar5._0_8_,auVar5._8_8_,local_60,uStack_58);
    puVar2 = Method_UnityEngine_Playables_ScriptPlayable<ParticleControlPlayable>_op_Implicit__;
    if (*(long *)(param_1 + 0x270) != 0) {
                    /* try { // try from 058dcae0 to 059dcae3 has its CatchHandler @ 058dcf04 */
      FUN_031747b8(*(long *)(param_1 + 0x270),local_60,uStack_58,0,0,param_2,
                   *(undefined8 *)Method_Oculus_Platform_Request<ChallengeEntryList>__ctor__);
                    /* try { // try from 058dcafc to 059dcaff has its CatchHandler @ 058dcef4 */
      lVar4 = *(long *)(param_1 + 0x248);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      if (lVar4 != 0) {
                    /* try { // try from 058dcb18 to 059dcb1b has its CatchHandler @ 058dcef8 */
        FUN_05c95d70(lVar4,**(undefined4 **)(*(long *)puVar2 + 0xb8),param_2,0);
                    /* try { // try from 058dcb30 to 059dcb3f has its CatchHandler @ 058dcf08 */
        if (*(long *)(param_1 + 0x248) != 0) {
          FUN_05c95d70(*(long *)(param_1 + 0x248),
                       *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4),
                       *(undefined4 *)(param_5 + 0x14),0);
                    /* try { // try from 058dcb50 to 059dcb53 has its CatchHandler @ 058dceec */
          if (*(long *)(param_1 + 0x248) != 0) {
                    /* try { // try from 058dcb6c to 059dcb6f has its CatchHandler @ 058dced8 */
            FUN_05c95d70(*(long *)(param_1 + 0x248),
                         *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8),
                         *(undefined4 *)(param_5 + 0x20),0);
            if (*(long *)(param_1 + 0x248) != 0) {
                    /* try { // try from 058dcb80 to 059dcb83 has its CatchHandler @ 058dcef0 */
                    /* try { // try from 058dcb84 to 059dcb8f has its CatchHandler @ 058dcf28 */
              FUN_05c95d70(*(long *)(param_1 + 0x248),
                           *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc),
                           *(undefined4 *)(param_5 + 0x2c),0);
                    /* try { // try from 058dcb90 to 059dcb9b has its CatchHandler @ 058dcf18 */
              if (*(long *)(param_1 + 0x248) != 0) {
                FUN_05c95d70(*(long *)(param_1 + 0x248),
                             *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10),
                             *(undefined4 *)(param_5 + 0x38),0);
                    /* try { // try from 058dcbb0 to 059dcbb3 has its CatchHandler @ 058dcedc */
                if (*(long *)(param_1 + 0x248) != 0) {
                  thunk_FUN_05c96218(*(long *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x260),
                                     *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x1c),
                                     *(undefined8 *)(param_1 + 0x270),0);
                    /* try { // try from 058dcbd8 to 059dcbdb has its CatchHandler @ 058dcf1c */
                  if (*(long *)(param_1 + 0x248) != 0) {
                    /* try { // try from 058dcbf4 to 059dcbf7 has its CatchHandler @ 058dcee8 */
                    thunk_FUN_05c96364(*(long *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x260),
                                       *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x24),
                                       *(undefined8 *)(param_6 + 0x48),0);
                    puVar2 = 
                    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<ContinuousTurnProvider>_add_providerStepped__
                    ;
                    /* try { // try from 058dcbfc to 059dcc0b has its CatchHandler @ 058dcf10 */
                    if (*(long *)(param_1 + 0x248) != 0) {
                    /* try { // try from 058dcc0c to 059dcccb has its CatchHandler @ 058dc7cc */
                      iVar1 = param_2 + 0x7e;
                      if (-1 < param_2 + 0x3f) {
                        iVar1 = param_2 + 0x3f;
                      }
                      FUN_05c96624(*(long *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x260),
                                   iVar1 >> 6,1,1,0);
                      FUN_03a11e34(&local_60,*(undefined8 *)puVar2);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


