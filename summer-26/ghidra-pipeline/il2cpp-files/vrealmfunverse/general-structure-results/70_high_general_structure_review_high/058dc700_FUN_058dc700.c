/*
FUNCTION_NAME: FUN_058dc700
ENTRY_POINT: 058dc700
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_058dc700(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,long param_10
                 )

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar3 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<SnapTurnProvider>__ctor__
  ;
  puVar2 = Method_Unity_Properties_Property<Vector3,_float>__ctor__;
  local_70 = param_3;
  uStack_68 = param_4;
  if ((DAT_066d33aa & 1) == 0) {
    FUN_02b3c81c(Method_Oculus_Platform_Request<ChallengeEntryList>__ctor__);
    FUN_02b3c81c(Method_UnityEngine_Playables_ScriptPlayable<ParticleControlPlayable>_GetBehaviour__
                );
    FUN_02b3c81c(Method_UnityEngine_Playables_ScriptPlayable<ParticleControlPlayable>_get_Null__);
    FUN_02b3c81c(Method_UnityEngine_Playables_ScriptPlayable<ParticleControlPlayable>_op_Implicit__)
    ;
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<ContinuousTurnProvider>_add_providerStepped__
                );
    FUN_02b3c81c(Method_Unity_Properties_Property<Vector3,_float>__ctor__);
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<SnapTurnProvider>__ctor__
                );
    DAT_066d33aa = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  FUN_058dc248(param_1,param_2);
                    /* try { // try from 058dc7cc to 059dc8fb has its CatchHandler @ 058dc7cc
                       catch() { ... } // from try @ 058dc7cc with catch @ 058dc7cc
                       catch() { ... } // from try @ 058dc9e8 with catch @ 058dc7cc
                       catch() { ... } // from try @ 058dcc0c with catch @ 058dc7cc
                       catch() { ... } // from try @ 058dcdc8 with catch @ 058dc7cc
                       catch() { ... } // from try @ 058dcf90 with catch @ 058dc7cc
                       catch() { ... } // from try @ 058dcfbc with catch @ 058dc7cc
                       catch() { ... } // from try @ 058dcfe0 with catch @ 058dc7cc
                       catch() { ... } // from try @ 058dd00c with catch @ 058dc7cc */
  OVRTask<OVRResult<ulong,_Int32Enum>>__get_IsCompleted(&local_80,param_2,3,0,*(undefined8 *)puVar3)
  ;
  auVar5 = FUN_03a1c478(&local_70,0,param_2,*(undefined8 *)puVar2);
  if (param_10 != 0) {
    FUN_058d5048(param_10,auVar5._0_8_,auVar5._8_8_,local_80,uStack_78);
    if (*(long *)(param_1 + 0x270) != 0) {
      FUN_031747b8(*(long *)(param_1 + 0x270),local_80,uStack_78,0,0,param_2,
                   *(undefined8 *)Method_Oculus_Platform_Request<ChallengeEntryList>__ctor__);
      if (*(long *)(param_1 + 0x278) != 0) {
        FUN_03174a30(*(long *)(param_1 + 0x278),param_5,param_6,0,0,param_2,
                     *(undefined8 *)
                      Method_UnityEngine_Playables_ScriptPlayable<ParticleControlPlayable>_GetBehaviour__
                    );
        puVar2 = Method_UnityEngine_Playables_ScriptPlayable<ParticleControlPlayable>_op_Implicit__;
        if (*(long *)(param_1 + 0x280) != 0) {
          FUN_03174de4(*(long *)(param_1 + 0x280),param_7,param_8,0,0,param_2,
                       *(undefined8 *)
                        Method_UnityEngine_Playables_ScriptPlayable<ParticleControlPlayable>_get_Null__
                      );
          lVar4 = *(long *)(param_1 + 0x248);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (lVar4 != 0) {
            FUN_05c95d70(lVar4,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28),param_2,0);
            if (*(long *)(param_1 + 0x248) != 0) {
              FUN_05c95d70(*(long *)(param_1 + 0x248),
                           *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x2c),
                           *(undefined4 *)(param_9 + 0x44),0);
              if (*(long *)(param_1 + 0x248) != 0) {
                    /* try { // try from 058dc8fc to 059dc903 has its CatchHandler @ 058dcf70 */
                    /* try { // try from 058dc90c to 059dc913 has its CatchHandler @ 058dcf60 */
                thunk_FUN_05c96218(*(long *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x264),
                                   *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38),
                                   *(undefined8 *)(param_1 + 0x270),0);
                if (*(long *)(param_1 + 0x248) != 0) {
                    /* try { // try from 058dc928 to 059dc92b has its CatchHandler @ 058dcf54 */
                  thunk_FUN_05c96218(*(long *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x264),
                                     *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30),
                                     *(undefined8 *)(param_1 + 0x278),0);
                  if (*(long *)(param_1 + 0x248) != 0) {
                    /* try { // try from 058dc944 to 059dc947 has its CatchHandler @ 058dcf40 */
                    thunk_FUN_05c96218(*(long *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x264),
                                       *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x34),
                                       *(undefined8 *)(param_1 + 0x280),0);
                    if (*(long *)(param_1 + 0x248) != 0) {
                    /* try { // try from 058dc964 to 059dc967 has its CatchHandler @ 058dcf44 */
                      thunk_FUN_05c96364(*(long *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x264)
                                         ,*(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x3c),
                                         *(undefined8 *)(param_10 + 0x48),0);
                      puVar2 = 
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<ContinuousTurnProvider>_add_providerStepped__
                      ;
                    /* try { // try from 058dc980 to 059dc983 has its CatchHandler @ 058dcf3c */
                      if (*(long *)(param_1 + 0x248) != 0) {
                    /* try { // try from 058dc99c to 059dc99f has its CatchHandler @ 058dcefc */
                        iVar1 = param_2 + 0x7e;
                        if (-1 < param_2 + 0x3f) {
                          iVar1 = param_2 + 0x3f;
                        }
                        FUN_05c96624(*(long *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x264),
                                     iVar1 >> 6,1,1,0);
                    /* try { // try from 058dc9b8 to 059dc9bb has its CatchHandler @ 058dcee0 */
                        FUN_03a11e34(&local_80,*(undefined8 *)puVar2);
                    /* try { // try from 058dc9d0 to 059dc9d3 has its CatchHandler @ 058dcf00 */
                    /* try { // try from 058dc9dc to 059dc9e7 has its CatchHandler @ 058dcf34 */
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


