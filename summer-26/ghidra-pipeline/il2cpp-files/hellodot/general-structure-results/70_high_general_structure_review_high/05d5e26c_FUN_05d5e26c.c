/*
FUNCTION_NAME: FUN_05d5e26c
ENTRY_POINT: 05d5e26c
PROGRAM: hellodot-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_8
*/


undefined8 FUN_05d5e26c(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  puVar7 = System_Func<BehaviorTreeConfig_Types_TugOfWarConfig>_TypeInfo;
  if ((DAT_06a7aa6b & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Peridot_IPeridotTelemetryPublisher<PeridotHdClientTelemetryOmniProto>_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(UnityEngine_XR_Hands_OpenXR_OpenXRHandProvider_var);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (Niantic_Peridot_IPeridotTelemetryProvider<PeridotWhClientTelemetryOmniProto>_var);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<Task_ContingentProperties>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<UIRAtlasAllocator_AreaNode>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum(System_Func<UIRAtlasAllocator_Row>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<CohortLevelConfig_Types_CosmeticDistribution>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<BehaviorTreeConfig_Types_AnticipateConfig>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<DescriptorProto_Types_ExtensionRange>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<DescriptorProto_Types_ReservedRange>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<EnumDescriptorProto_Types_EnumReservedRange>_TypeInfo);
    AkMIDIEventCallbackInfo__get_byProgramNum
              (System_Func<BehaviorTreeConfig_Types_TugOfWarConfig>_TypeInfo);
    DAT_06a7aa6b = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (*(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10) == 0) {
    lVar9 = FUN_05d5e03c();
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar1 = *(undefined4 *)(lVar9 + 0x18);
    uVar10 = thunk_FUN_02cea894(*(undefined8 *)
                                 System_Func<EnumDescriptorProto_Types_EnumReservedRange>_TypeInfo);
    FUN_03967c6c(uVar10,uVar1,
                 *(undefined8 *)System_Func<DescriptorProto_Types_ExtensionRange>_TypeInfo);
    *(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10) = uVar10;
    FUN_03968dbc(&local_98,lVar9,
                 *(undefined8 *)System_Func<BehaviorTreeConfig_Types_AnticipateConfig>_TypeInfo);
    puVar8 = System_Func<CohortLevelConfig_Types_CosmeticDistribution>_TypeInfo;
    puVar6 = System_Func<UIRAtlasAllocator_AreaNode>_TypeInfo;
    puVar5 = UnityEngine_XR_Hands_OpenXR_OpenXRHandProvider_var;
    puVar4 = Niantic_Peridot_IPeridotTelemetryPublisher<PeridotHdClientTelemetryOmniProto>_var;
    puVar3 = Niantic_Peridot_IPeridotTelemetryProvider<PeridotWhClientTelemetryOmniProto>_var;
    uStack_78 = uStack_90;
    local_80 = local_98;
    local_70 = local_88;
    while (uVar11 = FUN_0481f4e4(&local_80,*(undefined8 *)puVar6), lVar9 = local_70,
          (uVar11 & 1) != 0) {
      lVar12 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
      FUN_04678954(lVar12,*(undefined8 *)puVar4);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar2 = *(uint *)(lVar9 + 0x18);
      if (0 < (int)uVar2) {
        uVar16 = 0;
        do {
          if (uVar2 <= uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c84();
          }
          plVar15 = *(long **)(lVar9 + (long)(int)uVar16 * 8 + 0x20);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          uVar10 = (**(code **)(*plVar15 + 0x2d8))(plVar15,*(undefined8 *)(*plVar15 + 0x2e0));
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c(uVar10,uVar10);
          }
          FUN_04679278(lVar12,uVar10,plVar15,*(undefined8 *)puVar5);
          uVar2 = *(uint *)(lVar9 + 0x18);
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)uVar2);
      }
      lVar9 = *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar13 = *(long *)(lVar9 + 0x10);
      lVar14 = *(long *)puVar8;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      uVar2 = *(uint *)(lVar9 + 0x18);
      if (uVar2 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar2 + 1;
        *(long *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = lVar12;
      }
      else {
        FUN_039683cc(lVar9,lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                    );
      }
    }
    FUN_0481f4e0(&local_80,*(undefined8 *)System_Func<Task_ContingentProperties>_TypeInfo);
  }
  return *(undefined8 *)(*(long *)(*(long *)puVar7 + 0xb8) + 0x10);
}


