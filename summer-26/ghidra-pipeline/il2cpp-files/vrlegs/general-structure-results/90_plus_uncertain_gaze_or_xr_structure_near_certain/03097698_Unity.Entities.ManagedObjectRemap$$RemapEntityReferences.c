/*
FUNCTION_NAME: Unity.Entities.ManagedObjectRemap$$RemapEntityReferences
ENTRY_POINT: 03097698
PROGRAM: vrlegs-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_Entities_ManagedObjectRemap__RemapEntityReferences
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 auVar8 [12];
  
  auVar8 = FUN_01f7f7e8(param_2,param_3,*param_1);
  if (auVar8._8_4_ != unaff_w20) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
    uVar6 = thunk_FUN_01a89e68();
    uVar2 = thunk_FUN_01a6ca08(System_Xml_Serialization_XmlSchemaProviderAttribute_var);
    FUN_027a794c(uVar6,uVar2,0);
    uVar2 = thunk_FUN_01a6ca08(
                              Unity_Physics_Systems_PhysicsSimulationPickerSystem___codegen__OnUpdate_00000B70_PostfixBurstDelegate_var
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar6,uVar2);
  }
  if (*(long *)(unaff_x21 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  lVar1 = FUN_01fb41c8(*(long *)(unaff_x21 + 0x30),unaff_w20,
                       *(undefined8 *)OVRPlugin_SpaceQueryResult_var);
  if (0 < (int)unaff_w20) {
    uVar3 = (ulong)unaff_w20;
    puVar4 = (undefined4 *)(auVar8._0_8_ + 8);
    puVar5 = (undefined4 *)(lVar1 + 8);
    do {
      uVar6 = *(undefined8 *)(puVar4 + -2);
      uVar7 = *puVar4;
      puVar5[1] = 0x3f800000;
      uVar3 = uVar3 - 1;
      *(undefined8 *)(puVar5 + -2) = uVar6;
      *puVar5 = uVar7;
      puVar4 = puVar4 + 3;
      puVar5 = puVar5 + 4;
    } while (uVar3 != 0);
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  FUN_02241190();
  return;
}


