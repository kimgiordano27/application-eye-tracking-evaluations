/*
FUNCTION_NAME: FUN_07035d48
ENTRY_POINT: 07035d48
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_07035d48(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((DAT_07eebde5 & 1) == 0) {
    FUN_03642964(OVRPlugin_OVRP_1_89_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_8_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_90_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_91_0_TypeInfo);
    DAT_07eebde5 = 1;
  }
  if ((param_2 != 0) && (*(long *)(param_2 + 0x98) != 0)) {
    FUN_03f9c5b0(*(long *)(param_2 + 0x98),*(undefined8 *)OVRPlugin_OVRP_1_91_0_TypeInfo);
    if ((*(long *)(param_2 + 0x98) != 0) &&
       (uVar3 = FUN_03f9c2a8(*(long *)(param_2 + 0x98),*(undefined8 *)OVRPlugin_OVRP_1_8_0_TypeInfo)
       , param_1 != 0)) {
      *(undefined8 *)(param_1 + 0x200) = uVar3;
      thunk_FUN_036b7ad0(param_1 + 0x200,uVar3);
      uVar4 = FUN_06fc36ec(param_1,0);
      if ((uVar4 & 1) == 0) {
LAB_07035e34:
        puVar5 = (undefined8 *)FUN_0701b0e0(param_2,0);
        uVar3 = *puVar5;
        uVar7 = puVar5[3];
        uVar6 = puVar5[2];
        *(undefined8 *)(param_1 + 0x218) = puVar5[1];
        *(undefined8 *)(param_1 + 0x210) = uVar3;
        *(undefined8 *)(param_1 + 0x228) = uVar7;
        *(undefined8 *)(param_1 + 0x220) = uVar6;
        uVar2 = *(uint *)(puVar5 + 3);
        uVar1 = (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) - 1;
        if ((int)uVar2 < 1) {
          uVar1 = uVar2 & (int)uVar2 >> 0x1f;
        }
        *(uint *)(puVar5 + 3) = uVar1;
        return;
      }
      if (*(long *)(param_2 + 0x98) != 0) {
        FUN_03f9c5b0(*(long *)(param_2 + 0x98),*(undefined8 *)OVRPlugin_OVRP_1_90_0_TypeInfo);
        if (*(long *)(param_2 + 0x98) != 0) {
          uVar3 = FUN_03f9c2a8(*(long *)(param_2 + 0x98),
                               *(undefined8 *)OVRPlugin_OVRP_1_89_0_TypeInfo);
          *(undefined8 *)(param_1 + 0x208) = uVar3;
          thunk_FUN_036b7ad0(param_1 + 0x208,uVar3);
          goto LAB_07035e34;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


