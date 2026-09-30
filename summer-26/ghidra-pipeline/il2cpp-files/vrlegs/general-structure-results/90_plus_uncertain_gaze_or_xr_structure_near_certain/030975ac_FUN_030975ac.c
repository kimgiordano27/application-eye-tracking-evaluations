/*
FUNCTION_NAME: FUN_030975ac
ENTRY_POINT: 030975ac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 156
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_7;ray_or_cast_sink_hits_4;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_3
*/


void FUN_030975ac(undefined8 *param_1,long param_2,long param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [12];
  undefined1 local_40 [16];
  
  if ((DAT_0412b52c & 1) == 0) {
    FUN_01ab69ac(OVRLocatable_var);
    FUN_01ab69ac(System_Xml_Linq_XNode_var);
    FUN_01ab69ac(PTR_DAT_03cd8108);
    FUN_01ab69ac(OVRPlugin_SpaceQueryResult_var);
    FUN_01ab69ac(OVRPlugin_Vector3f_var);
    DAT_0412b52c = 1;
  }
  uVar2 = FUN_03096f6c(param_2);
  if ((uVar2 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    if ((((param_3 == 0) || (*(long *)(param_3 + 0x28) == 0)) || (param_2 == 0)) ||
       (((*(long *)(param_2 + 0x18) == 0 ||
         (lVar3 = *(long *)(*(long *)(param_3 + 0x28) + 0x28), lVar3 == 0)) ||
        (FUN_02215a88(lVar3,*(undefined4 *)(*(long *)(param_2 + 0x18) + 0x24),local_40,
                      *(undefined8 *)PTR_DAT_03cd8108), local_40._0_8_ == 0)))) {
LAB_0309776c:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar1 = FUN_03057570(local_40._0_8_,0);
    if (iVar1 == 4) {
      if (*(long *)(param_2 + 0x18) == 0) goto LAB_0309776c;
      local_40 = FUN_01f7f7e8(param_3,*(undefined4 *)(*(long *)(param_2 + 0x18) + 0x24),
                              *(undefined8 *)OVRLocatable_var);
      if (local_40._8_4_ != param_4) goto LAB_03097770;
    }
    else {
      if (iVar1 != 3) {
        FUN_018748a8(param_3);
        lVar3 = *(long *)(param_3 + 0x28);
        FUN_018748a8(lVar3);
        uVar4 = *(undefined8 *)(lVar3 + 0x28);
        FUN_018748a8(param_2);
        lVar3 = *(long *)(param_2 + 0x18);
        FUN_018748a8(lVar3);
        uVar8 = *(undefined4 *)(lVar3 + 0x24);
        FUN_018748a8(uVar4);
        uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cd8108);
        lVar3 = FUN_0199976c(uVar4,uVar8,uVar7);
        FUN_018748a8();
        uVar4 = *(undefined8 *)(lVar3 + 0x20);
        uVar7 = thunk_FUN_01a6ca08(
                                  Unity_Transforms_ParentSystem___codegen__OnCreate_0000000E_PostfixBurstDelegate_var
                                  );
        uVar7 = FUN_025b1328(uVar7,uVar4,0);
        thunk_FUN_01a6ca08(PTR_DAT_03cc74c8);
        uVar4 = thunk_FUN_01a89e68();
        FUN_0276e9b0(uVar4,uVar7,0);
        uVar7 = thunk_FUN_01a6ca08(
                                  Unity_Physics_Systems_PhysicsSimulationPickerSystem___codegen__OnUpdate_00000B70_PostfixBurstDelegate_var
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar4,uVar7);
      }
      if (*(long *)(param_2 + 0x18) == 0) goto LAB_0309776c;
      auVar9 = FUN_01f7f7e8(param_3,*(undefined4 *)(*(long *)(param_2 + 0x18) + 0x24),
                            *(undefined8 *)System_Xml_Linq_XNode_var);
      if (auVar9._8_4_ != param_4) {
LAB_03097770:
        thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
        uVar7 = thunk_FUN_01a89e68();
        uVar4 = thunk_FUN_01a6ca08(System_Xml_Serialization_XmlSchemaProviderAttribute_var);
        FUN_027a794c(uVar7,uVar4,0);
        uVar4 = thunk_FUN_01a6ca08(
                                  Unity_Physics_Systems_PhysicsSimulationPickerSystem___codegen__OnUpdate_00000B70_PostfixBurstDelegate_var
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar7,uVar4);
      }
      if (*(long *)(param_3 + 0x30) == 0) goto LAB_0309776c;
      local_40 = FUN_01fb41c8(*(long *)(param_3 + 0x30),param_4,
                              *(undefined8 *)OVRPlugin_SpaceQueryResult_var);
      if (0 < (int)param_4) {
        uVar2 = (ulong)param_4;
        puVar5 = (undefined4 *)(auVar9._0_8_ + 8);
        puVar6 = (undefined4 *)(local_40._0_8_ + 8);
        do {
          uVar7 = *(undefined8 *)(puVar5 + -2);
          uVar8 = *puVar5;
          puVar6[1] = 0x3f800000;
          uVar2 = uVar2 - 1;
          *(undefined8 *)(puVar6 + -2) = uVar7;
          *puVar6 = uVar8;
          puVar5 = puVar5 + 3;
          puVar6 = puVar6 + 4;
        } while (uVar2 != 0);
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    uVar7 = *(undefined8 *)OVRPlugin_Vector3f_var;
    param_1[2] = 0;
    FUN_02241190(param_1,local_40,uVar7);
  }
  return;
}


