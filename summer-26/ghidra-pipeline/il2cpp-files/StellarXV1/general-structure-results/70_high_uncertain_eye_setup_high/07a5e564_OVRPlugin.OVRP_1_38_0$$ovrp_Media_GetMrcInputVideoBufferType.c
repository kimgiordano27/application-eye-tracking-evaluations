/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcInputVideoBufferType
ENTRY_POINT: 07a5e564
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcInputVideoBufferType(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  int in_w8;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x22;
  
                    /* try { // try from 07a5e564 to 07b5e56b has its CatchHandler @ 07a5e574 */
  if (in_w8 == 0) {
    thunk_FUN_040d65a8();
                    /* try { // try from 07a5e56c to 07b5e577 has its CatchHandler @ 07a5df5c */
    param_1 = *unaff_x22;
  }
  puVar4 = *(undefined8 **)(param_1 + 0xb8);
                    /* catch() { ... } // from try @ 07a5e564 with catch @ 07a5e574 */
  lVar5 = puVar4[3];
  if (lVar5 == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar4 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar6 = *puVar4;
    lVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092f0b40);
    FUN_0568c388(lVar5,uVar6,*(undefined8 *)PTR_DAT_092f0b60,0);
    plVar3 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
    *plVar3 = lVar5;
    thunk_FUN_040ec700(plVar3,lVar5);
    param_1 = *unaff_x22;
  }
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    param_1 = *unaff_x22;
  }
  puVar2 = PTR_DAT_092f0b58;
  puVar1 = PTR_DAT_092f0b50;
  puVar4 = *(undefined8 **)(param_1 + 0xb8);
  lVar7 = puVar4[4];
  if (lVar7 == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar4 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar6 = *puVar4;
    lVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092f0b48);
    FUN_05697978(lVar7,uVar6,*(undefined8 *)PTR_DAT_092f0b68,0);
    plVar3 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
    *plVar3 = lVar7;
    thunk_FUN_040ec700(plVar3,lVar7);
  }
  uVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
  FUN_06195eac(uVar6,3,lVar5,lVar7,*(undefined8 *)puVar1);
  return uVar6;
}


