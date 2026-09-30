/*
FUNCTION_NAME: FUN_060fcebc
ENTRY_POINT: 060fcebc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_060fcebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  puVar1 = OVRPlugin_OVRP_1_94_0_TypeInfo;
                    /* try { // try from 060fcec0 to 061fcec3 has its CatchHandler @ 060fcedc */
                    /* try { // try from 060fcec4 to 061fcedf has its CatchHandler @ 060fcd18 */
                    /* catch() { ... } // from try @ 060fcec0 with catch @ 060fcedc */
                    /* try { // try from 060fcee0 to 061fcee7 has its CatchHandler @ 060fcef0 */
                    /* try { // try from 060fcee8 to 061fcef3 has its CatchHandler @ 060fcd18 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 060fcee0 with catch @ 060fcef0
                        */
  if ((DAT_06dc6535 & 1) == 0) {
    FUN_02d965b8(OVRPlugin_OVRP_1_95_0_TypeInfo);
    FUN_02d965b8(Method_Unity_Netcode_FastBufferWriter_WriteUnmanagedSafe<Vector4>__);
    FUN_02d965b8(OVRPlugin_OVRP_1_97_0_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_94_0_TypeInfo);
    DAT_06dc6535 = 1;
  }
  puVar4 = Method_Unity_Netcode_FastBufferWriter_WriteUnmanagedSafe<Vector4>__;
  puVar3 = OVRPlugin_OVRP_1_97_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_95_0_TypeInfo;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  uStack_c0 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_040b192c(&local_e8,*(undefined8 *)puVar2);
  uStack_c0 = uStack_e0;
  uStack_c8 = local_e8;
  local_b8 = local_d8;
  LeanTween__value((ulong)&local_d0 | 8,0);
  local_b0 = param_1;
  LeanTween__value(&local_b0,param_1);
  uStack_a8 = param_2;
  LeanTween__value(&uStack_a8,param_2);
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  LeanTween__value(&local_90,param_5);
  uStack_88 = param_6;
  LeanTween__value(&uStack_88,param_6);
  local_80 = param_8;
  LeanTween__value(&local_80,param_8);
  local_78 = param_9;
  LeanTween__value(&local_78,param_9);
  local_d0 = CONCAT44(local_d0._4_4_,0xffffffff);
  FUN_03208664((ulong)&local_d0 | 8,&local_d0,*(undefined8 *)puVar4);
  FUN_040b1940((ulong)&local_d0 | 8,*(undefined8 *)puVar3);
  return;
}


