/*
FUNCTION_NAME: FUN_058dcc58
ENTRY_POINT: 058dcc58
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_058dcc58(long param_1,ulong param_2,int param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,long param_11,long param_12)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar4 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<SnapTurnProvider>__ctor__
  ;
  puVar3 = Method_Unity_Properties_Property<Vector3,_float>__ctor__;
  local_60 = param_4;
  uStack_58 = param_5;
  if ((DAT_066d33ac & 1) == 0) {
    FUN_02b3c81c(Method_Oculus_Platform_Request<ChallengeEntryList>__ctor__);
    FUN_02b3c81c(Method_UnityEngine_Playables_ScriptPlayable<PrefabControlPlayable>_Create__);
    FUN_02b3c81c(Method_UnityEngine_Playables_ScriptPlayable<PrefabControlPlayable>_GetBehaviour__);
                    /* try { // try from 058dcccc to 059dccdf has its CatchHandler @ 058dcf5c */
    FUN_02b3c81c(Method_UnityEngine_Playables_ScriptPlayable<ParticleControlPlayable>_op_Implicit__)
    ;
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<ContinuousTurnProvider>_add_providerStepped__
                );
                    /* try { // try from 058dcce8 to 059dcceb has its CatchHandler @ 058dcf50 */
                    /* try { // try from 058dccec to 059dccef has its CatchHandler @ 058dcf68 */
    FUN_02b3c81c(Method_Unity_Properties_Property<Vector3,_float>__ctor__);
                    /* try { // try from 058dccf0 to 059dccf3 has its CatchHandler @ 058dcf64 */
                    /* try { // try from 058dccf4 to 059dcd0f has its CatchHandler @ 058dcf50 */
    FUN_02b3c81c(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<SnapTurnProvider>__ctor__
                );
    DAT_066d33ac = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
                    /* try { // try from 058dcd10 to 059dcd2b has its CatchHandler @ 058dcf38 */
  FUN_058dc3c4(param_1,param_3);
  lVar5 = 600;
  if ((param_2 & 1) == 0) {
    lVar5 = 0x25c;
  }
                    /* try { // try from 058dcd2c to 059dcd47 has its CatchHandler @ 058dcf0c */
  uVar2 = *(undefined4 *)(param_1 + lVar5);
  OVRTask<OVRResult<ulong,_Int32Enum>>__get_IsCompleted(&local_70,param_3,3,0,*(undefined8 *)puVar4)
  ;
                    /* try { // try from 058dcd48 to 059dcd63 has its CatchHandler @ 058dcee4 */
  auVar6 = FUN_03a1c478(&local_60,0,param_3,*(undefined8 *)puVar3);
  if (param_12 != 0) {
                    /* try { // try from 058dcd64 to 059dcd7f has its CatchHandler @ 058dced4 */
    FUN_058d5048(param_12,auVar6._0_8_,auVar6._8_8_,local_70,uStack_68);
    if (*(long *)(param_1 + 0x270) != 0) {
                    /* try { // try from 058dcd80 to 059dcd8b has its CatchHandler @ 058dced0 */
                    /* try { // try from 058dcd8c to 059dcdc7 has its CatchHandler @ 058dcecc */
      FUN_031747b8(*(long *)(param_1 + 0x270),local_70,uStack_68,0,0,param_3,
                   *(undefined8 *)Method_Oculus_Platform_Request<ChallengeEntryList>__ctor__);
      if (*(long *)(param_1 + 0x288) != 0) {
                    /* try { // try from 058dcdc8 to 059dcf8b has its CatchHandler @ 058dc7cc */
        FUN_03174b6c(*(long *)(param_1 + 0x288),param_6,param_7,0,0,param_3 << (param_2 & 1),
                     *(undefined8 *)
                      Method_UnityEngine_Playables_ScriptPlayable<PrefabControlPlayable>_Create__);
        if (*(char *)(param_1 + 0x298) != '\0') {
          if (*(long *)(param_1 + 0x290) == 0) goto LAB_058dcffc;
          FUN_03175080(*(long *)(param_1 + 0x290),param_9,param_10,0,0,param_3,
                       *(undefined8 *)
                        Method_UnityEngine_Playables_ScriptPlayable<PrefabControlPlayable>_GetBehaviour__
                      );
        }
        puVar3 = Method_UnityEngine_Playables_ScriptPlayable<ParticleControlPlayable>_op_Implicit__;
        lVar5 = *(long *)(param_1 + 0x248);
        if (*(int *)(*(long *)
                      Method_UnityEngine_Playables_ScriptPlayable<ParticleControlPlayable>_op_Implicit__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (lVar5 != 0) {
          FUN_05c95d70(lVar5,**(undefined4 **)(*(long *)puVar3 + 0xb8),param_3,0);
          if (*(long *)(param_1 + 0x248) != 0) {
            FUN_05c95d70(*(long *)(param_1 + 0x248),
                         *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 4),
                         *(undefined4 *)(param_11 + 0x14),0);
            if (*(long *)(param_1 + 0x248) != 0) {
              FUN_05c95d70(*(long *)(param_1 + 0x248),
                           *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8),
                           *(undefined4 *)(param_11 + 0x20),0);
              if (*(long *)(param_1 + 0x248) != 0) {
                FUN_05c95d70(*(long *)(param_1 + 0x248),
                             *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc),
                             *(undefined4 *)(param_11 + 0x2c),0);
                if (*(long *)(param_1 + 0x248) != 0) {
                  FUN_05c95d70(*(long *)(param_1 + 0x248),
                               *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10),
                               *(undefined4 *)(param_11 + 0x38),0);
                  if (*(long *)(param_1 + 0x248) != 0) {
                    /* catch() { ... } // from try @ 058dcd8c with catch @ 058dcecc */
                    /* catch() { ... } // from try @ 058dcd80 with catch @ 058dced0 */
                    /* catch() { ... } // from try @ 058dcd64 with catch @ 058dced4 */
                    /* catch() { ... } // from try @ 058dcb6c with catch @ 058dced8 */
                    /* catch() { ... } // from try @ 058dcbb0 with catch @ 058dcedc */
                    thunk_FUN_05c96218(*(long *)(param_1 + 0x248),uVar2,
                                       *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x1c),
                                       *(undefined8 *)(param_1 + 0x270),0);
                    /* catch() { ... } // from try @ 058dc9b8 with catch @ 058dcee0 */
                    /* catch() { ... } // from try @ 058dcd48 with catch @ 058dcee4 */
                    if (*(long *)(param_1 + 0x248) != 0) {
                    /* catch() { ... } // from try @ 058dcbf4 with catch @ 058dcee8 */
                    /* catch() { ... } // from try @ 058dcb50 with catch @ 058dceec */
                    /* catch() { ... } // from try @ 058dcb80 with catch @ 058dcef0 */
                    /* catch() { ... } // from try @ 058dcafc with catch @ 058dcef4 */
                    /* catch() { ... } // from try @ 058dcb18 with catch @ 058dcef8 */
                    /* catch() { ... } // from try @ 058dc99c with catch @ 058dcefc */
                    /* catch() { ... } // from try @ 058dc9d0 with catch @ 058dcf00 */
                      thunk_FUN_05c96218(*(long *)(param_1 + 0x248),uVar2,
                                         *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18),
                                         *(undefined8 *)(param_1 + 0x288),0);
                    /* catch() { ... } // from try @ 058dcae0 with catch @ 058dcf04 */
                    /* catch() { ... } // from try @ 058dcb30 with catch @ 058dcf08 */
                      if (*(char *)(param_1 + 0x298) != '\0') {
                    /* catch() { ... } // from try @ 058dcd2c with catch @ 058dcf0c */
                    /* catch() { ... } // from try @ 058dcbfc with catch @ 058dcf10 */
                        lVar5 = *(long *)(param_1 + 0x248);
                    /* catch() { ... } // from try @ 058dcabc with catch @ 058dcf14 */
                    /* catch() { ... } // from try @ 058dcb90 with catch @ 058dcf18 */
                        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 058dcbd8 with catch @ 058dcf1c */
                          thunk_FUN_02b9ad44();
                        }
                        if (lVar5 == 0) goto LAB_058dcffc;
                    /* catch() { ... } // from try @ 058dcb84 with catch @ 058dcf28 */
                    /* catch() { ... } // from try @ 058dc9dc with catch @ 058dcf34 */
                    /* catch() { ... } // from try @ 058dcd10 with catch @ 058dcf38 */
                    /* catch() { ... } // from try @ 058dc980 with catch @ 058dcf3c */
                        FUN_05c95d70(lVar5,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x14)
                                     ,*(undefined4 *)(param_11 + 0x50),0);
                    /* catch() { ... } // from try @ 058dc944 with catch @ 058dcf40 */
                    /* catch() { ... } // from try @ 058dc964 with catch @ 058dcf44 */
                        if (*(long *)(param_1 + 0x248) == 0) goto LAB_058dcffc;
                    /* catch() { ... } // from try @ 058dca84 with catch @ 058dcf48 */
                    /* catch() { ... } // from try @ 058dcaa0 with catch @ 058dcf4c */
                    /* catch() { ... } // from try @ 058dcce8 with catch @ 058dcf50
                       catch() { ... } // from try @ 058dccf4 with catch @ 058dcf50 */
                    /* catch() { ... } // from try @ 058dc928 with catch @ 058dcf54 */
                    /* catch() { ... } // from try @ 058dca68 with catch @ 058dcf58 */
                    /* catch() { ... } // from try @ 058dcccc with catch @ 058dcf5c */
                    /* catch() { ... } // from try @ 058dc90c with catch @ 058dcf60 */
                        thunk_FUN_05c96218(*(long *)(param_1 + 0x248),uVar2,
                                           *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20)
                                           ,*(undefined8 *)(param_1 + 0x290),0);
                      }
                    /* catch() { ... } // from try @ 058dccf0 with catch @ 058dcf64 */
                    /* catch() { ... } // from try @ 058dccec with catch @ 058dcf68 */
                      lVar5 = *(long *)(param_1 + 0x248);
                    /* catch() { ... } // from try @ 058dca4c with catch @ 058dcf6c */
                    /* catch() { ... } // from try @ 058dc8fc with catch @ 058dcf70 */
                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                      }
                      if (lVar5 != 0) {
                    /* try { // try from 058dcf8c to 059dcf8f has its CatchHandler @ 058dcfb0 */
                    /* try { // try from 058dcf90 to 059dcfb3 has its CatchHandler @ 058dc7cc */
                        thunk_FUN_05c96364(lVar5,uVar2,
                                           *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x24)
                                           ,*(undefined8 *)(param_12 + 0x48),0);
                        puVar3 = 
                        Method_UnityEngine_XR_Interaction_Toolkit_Utilities_TeleportationMonitor_ProviderMonitor<ContinuousTurnProvider>_add_providerStepped__
                        ;
                        if (*(long *)(param_1 + 0x248) != 0) {
                    /* catch() { ... } // from try @ 058dcf8c with catch @ 058dcfb0 */
                          iVar1 = param_3 + 0x7e;
                    /* try { // try from 058dcfb4 to 059dcfbb has its CatchHandler @ 058dd014 */
                    /* try { // try from 058dcfbc to 059dcfdb has its CatchHandler @ 058dc7cc */
                          if (-1 < param_3 + 0x3f) {
                            iVar1 = param_3 + 0x3f;
                          }
                    /* catch() { ... } // from try @ 058dca3c with catch @ 058dcfc0 */
                          FUN_05c96624(*(long *)(param_1 + 0x248),uVar2,iVar1 >> 6,1,1,0);
                    /* try { // try from 058dcfdc to 059dcfdf has its CatchHandler @ 058dd000 */
                          FUN_03a11e34(&local_70,*(undefined8 *)puVar3);
                    /* try { // try from 058dcfe0 to 059dd003 has its CatchHandler @ 058dc7cc */
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
  }
LAB_058dcffc:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


