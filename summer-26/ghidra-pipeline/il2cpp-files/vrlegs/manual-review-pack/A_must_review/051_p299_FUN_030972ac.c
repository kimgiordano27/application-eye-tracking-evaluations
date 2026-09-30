/*
FUNCTION_NAME: FUN_030972ac
ENTRY_POINT: 030972ac
PROGRAM: vrlegs-libil2cpp.so
SCORE: 168
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_5
*/


void FUN_030972ac(undefined8 *param_1,long param_2,long param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ushort *puVar9;
  float *pfVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  ushort uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [12];
  undefined1 local_40 [16];
  
  uVar11 = (ulong)param_4;
  if ((DAT_0412b52b & 1) == 0) {
    FUN_01ab69ac(Unity_Transforms_ParentSystem___codegen__OnUpdate_0000000F_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(UnityEngine_InputSystem_Composites_Vector2Composite_var);
    FUN_01ab69ac(PTR_DAT_03cd8108);
    FUN_01ab69ac(OVRPlugin_SpaceQueryResult_var);
    FUN_01ab69ac(OVRPlugin_Vector3f_var);
    DAT_0412b52b = 1;
  }
  uVar6 = FUN_03096f6c(param_2);
  if ((uVar6 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    if ((((param_3 == 0) || (*(long *)(param_3 + 0x28) == 0)) || (param_2 == 0)) ||
       (((*(long *)(param_2 + 0x18) == 0 ||
         (lVar7 = *(long *)(*(long *)(param_3 + 0x28) + 0x28), lVar7 == 0)) ||
        (FUN_02215a88(lVar7,*(undefined4 *)(*(long *)(param_2 + 0x18) + 0x24),local_40,
                      *(undefined8 *)PTR_DAT_03cd8108), local_40._0_8_ == 0)))) {
LAB_03097500:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar5 = FUN_03057570(local_40._0_8_,0);
    if (iVar5 == 4) {
      if (*(long *)(param_2 + 0x18) == 0) goto LAB_03097500;
      auVar16 = FUN_01f7f7e8(param_3,*(undefined4 *)(*(long *)(param_2 + 0x18) + 0x24),
                             *(undefined8 *)UnityEngine_InputSystem_Composites_Vector2Composite_var)
      ;
      puVar12 = auVar16._0_8_;
      if (auVar16._8_4_ != param_4) goto LAB_03097504;
      if (*(long *)(param_3 + 0x30) == 0) goto LAB_03097500;
      local_40 = FUN_01fb41c8(*(long *)(param_3 + 0x30),uVar11,
                              *(undefined8 *)OVRPlugin_SpaceQueryResult_var);
      pfVar10 = local_40._0_8_;
      if (0 < (int)param_4) {
        do {
          uVar15 = *puVar12;
          uVar11 = uVar11 - 1;
          auVar13._2_2_ = 0;
          auVar13._0_2_ = (ushort)uVar15;
          auVar13._4_2_ = (short)((ulong)uVar15 >> 0x10);
          auVar13._6_2_ = 0;
          auVar13._8_2_ = (short)((ulong)uVar15 >> 0x20);
          auVar13._10_2_ = 0;
          auVar13._12_2_ = (short)((ulong)uVar15 >> 0x30);
          auVar13._14_2_ = 0;
          auVar13 = NEON_ucvtf(auVar13,4);
          pfVar10[2] = auVar13._8_4_ / 65535.0;
          pfVar10[3] = auVar13._12_4_ / 65535.0;
          *pfVar10 = auVar13._0_4_ / 65535.0;
          pfVar10[1] = auVar13._4_4_ / 65535.0;
          pfVar10 = pfVar10 + 4;
          puVar12 = puVar12 + 1;
        } while (uVar11 != 0);
      }
    }
    else {
      if (iVar5 != 3) {
        FUN_018748a8(local_40._0_8_);
        uVar8 = *(undefined8 *)(local_40._0_8_ + 0x20);
        uVar15 = thunk_FUN_01a6ca08(
                                   Unity_Transforms_ParentSystem___codegen__OnCreate_0000000E_PostfixBurstDelegate_var
                                   );
        uVar15 = FUN_025b1328(uVar15,uVar8,0);
        thunk_FUN_01a6ca08(PTR_DAT_03cc74c8);
        uVar8 = thunk_FUN_01a89e68();
        FUN_0276e9b0(uVar8,uVar15,0);
        uVar15 = thunk_FUN_01a6ca08(
                                   Unity_Physics_Systems_PhysicsSimulationPickerSystem___codegen__OnCreate_00000B6F_PostfixBurstDelegate_var
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar8,uVar15);
      }
      if (*(long *)(param_2 + 0x18) == 0) goto LAB_03097500;
      auVar16 = FUN_01f7f7e8(param_3,*(undefined4 *)(*(long *)(param_2 + 0x18) + 0x24),
                             *(undefined8 *)
                              Unity_Transforms_ParentSystem___codegen__OnUpdate_0000000F_PostfixBurstDelegate_var
                            );
      if (auVar16._8_4_ != param_4) {
LAB_03097504:
        thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
        uVar15 = thunk_FUN_01a89e68();
        uVar8 = thunk_FUN_01a6ca08(System_Xml_Serialization_XmlSchemaProviderAttribute_var);
        FUN_027a794c(uVar15,uVar8,0);
        uVar8 = thunk_FUN_01a6ca08(
                                  Unity_Physics_Systems_PhysicsSimulationPickerSystem___codegen__OnCreate_00000B6F_PostfixBurstDelegate_var
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar15,uVar8);
      }
      if (*(long *)(param_3 + 0x30) == 0) goto LAB_03097500;
      local_40 = FUN_01fb41c8(*(long *)(param_3 + 0x30),uVar11,
                              *(undefined8 *)OVRPlugin_SpaceQueryResult_var);
      fVar4 = DAT_00d38b94;
      if (0 < (int)param_4) {
        uVar11 = (ulong)param_4;
        puVar9 = (ushort *)(auVar16._0_8_ + 4);
        pfVar10 = (float *)(local_40._0_8_ + 8);
        do {
          uVar1 = puVar9[-2];
          uVar2 = puVar9[-1];
          uVar14 = *puVar9;
          pfVar10[1] = 1.0;
          fVar3 = (float)NEON_ucvtf((uint)uVar14);
          uVar15 = NEON_ucvtf((ulong)CONCAT24(uVar2,(uint)uVar1),4);
          *pfVar10 = fVar3 / fVar4;
          puVar9 = puVar9 + 3;
          uVar11 = uVar11 - 1;
          *(ulong *)(pfVar10 + -2) =
               CONCAT44((float)((ulong)uVar15 >> 0x20) / 65535.0,(float)uVar15 / 65535.0);
          pfVar10 = pfVar10 + 4;
        } while (uVar11 != 0);
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    uVar15 = *(undefined8 *)OVRPlugin_Vector3f_var;
    param_1[2] = 0;
    FUN_02241190(param_1,local_40,uVar15);
  }
  return;
}


