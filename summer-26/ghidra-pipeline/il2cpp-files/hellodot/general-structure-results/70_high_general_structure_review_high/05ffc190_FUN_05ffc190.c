/*
FUNCTION_NAME: FUN_05ffc190
ENTRY_POINT: 05ffc190
PROGRAM: hellodot-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4
*/


void FUN_05ffc190(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
                    /* try { // try from 05ffc198 to 060fc1a3 has its CatchHandler @ 05ffc04c */
                    /* try { // try from 05ffc1a4 to 060fc1ab has its CatchHandler @ 05ffc1ac */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05ffc18c with catch @ 05ffc1ac
                       catch(type#2 @ 00000000) { ... } // from try @ 05ffc1a4 with catch @ 05ffc1ac
                        */
  if ((DAT_06a824d3 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(Zenject_MethodProviderUntyped_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Runtime_Remoting_Messaging_MethodResponse_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Runtime_Remoting_Messaging_MethodReturnDictionary_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Platform_Analytics_Telemetry_MetricRecord_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Net_NetworkInformation_MibIPGlobalProperties_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Oculus_Platform_Models_MicrophoneAvailabilityState_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_MidpointRounding_TypeInfo);
                    /* try { // try from 05ffc214 to 060fc287 has its CatchHandler @ 05ffc214
                       catch() { ... } // from try @ 05ffc214 with catch @ 05ffc214
                       catch() { ... } // from try @ 05ffc2e0 with catch @ 05ffc214
                       catch() { ... } // from try @ 05ffc394 with catch @ 05ffc214
                       catch() { ... } // from try @ 05ffc3dc with catch @ 05ffc214 */
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_MinAttribute_TypeInfo);
    DAT_06a824d3 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  auVar10 = ZEXT816(0);
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar7 = FUN_03c6959c(*(long *)(param_1 + 0x18),
                           *(undefined8 *)
                            System_Net_NetworkInformation_MibIPGlobalProperties_TypeInfo),
     puVar5 = UnityEngine_MinAttribute_TypeInfo, puVar4 = System_MidpointRounding_TypeInfo,
     puVar3 = Oculus_Platform_Models_MicrophoneAvailabilityState_TypeInfo,
     puVar2 = System_Runtime_Remoting_Messaging_MethodResponse_TypeInfo,
     puVar1 = Zenject_MethodProviderUntyped_TypeInfo, auVar10._8_8_ = local_90._8_8_,
     auVar10._0_8_ = local_90._0_8_, lVar7 != 0)) {
    System_Collections_Generic_List<JointToTransformReference>__ToArray
              (&local_b0,lVar7,
               *(undefined8 *)Niantic_Platform_Analytics_Telemetry_MetricRecord_TypeInfo);
                    /* try { // try from 05ffc288 to 060fc297 has its CatchHandler @ 05ffc394 */
    uStack_68 = uStack_a8;
    local_70 = local_b0;
    uStack_58 = uStack_98;
    local_60 = uStack_a0;
    while (uVar8 = FUN_047f2924(&local_70,*(undefined8 *)puVar2), (uVar8 & 1) != 0) {
      local_80 = local_60;
      uStack_78 = uStack_58;
      lVar7 = *(long *)(param_1 + 0x28);
                    /* try { // try from 05ffc2b0 to 060fc2b3 has its CatchHandler @ 05ffc39c */
      uVar9 = FUN_0349e304(local_60,uStack_58,*(undefined8 *)puVar4);
      uVar9 = FUN_04f7c4d4(uVar9,0);
      uVar6 = FUN_03c6be30(&local_80,*(undefined8 *)puVar5);
                    /* try { // try from 05ffc2d4 to 060fc2df has its CatchHandler @ 05ffc398 */
      auVar10 = FUN_05ff9fac(uVar9,uVar6);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
                    /* try { // try from 05ffc2e0 to 060fc38b has its CatchHandler @ 05ffc214 */
      FUN_05ffc09c(lVar7,auVar10._0_8_,auVar10._8_8_);
    }
    System_Collections_Generic_EqualityComparer<NativeSlice<ConvertMeshJobData>>__LastIndexOf
              (&local_70,*(undefined8 *)puVar1);
    auVar10._8_8_ = local_90._8_8_;
    auVar10._0_8_ = local_90._0_8_;
    if (*(long *)(param_1 + 0x28) != 0) {
      local_90 = FUN_05ffc108();
      FUN_05ea8af4(local_90,0);
      auVar10 = local_90;
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_03c6972c(*(long *)(param_1 + 0x18),*(undefined8 *)puVar3);
        return;
      }
    }
  }
  local_90 = auVar10;
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


