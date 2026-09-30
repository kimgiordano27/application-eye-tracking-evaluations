/*
FUNCTION_NAME: Unity.Entities.ManagedComponentStore$$MoveAllSharedComponents_Managed
ENTRY_POINT: 03097324
PROGRAM: vrlegs-libil2cpp.so
SCORE: 148
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_4;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


void Unity_Entities_ManagedComponentStore__MoveAllSharedComponents_Managed(ulong param_1)

{
  ushort uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  undefined8 uVar8;
  ulong uVar9;
  ushort *puVar10;
  undefined8 *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  ushort uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [12];
  long in_stack_00000000;
  
  if ((param_1 & 1) == 0) {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
  }
  else {
    if ((((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x28) == 0)) || (unaff_x22 == 0)) ||
       (((*(long *)(unaff_x22 + 0x18) == 0 ||
         (lVar6 = *(long *)(*(long *)(unaff_x21 + 0x28) + 0x28), lVar6 == 0)) ||
        (FUN_02215a88(lVar6,*(undefined4 *)(*(long *)(unaff_x22 + 0x18) + 0x24)),
        in_stack_00000000 == 0)))) {
LAB_03097500:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar5 = FUN_03057570(in_stack_00000000,0);
    if (iVar5 == 4) {
      if (*(long *)(unaff_x22 + 0x18) == 0) goto LAB_03097500;
      auVar15 = FUN_01f7f7e8();
      if (auVar15._8_4_ != unaff_w20) goto LAB_03097504;
      if (*(long *)(unaff_x21 + 0x30) == 0) goto LAB_03097500;
      pfVar7 = (float *)FUN_01fb41c8(*(long *)(unaff_x21 + 0x30),unaff_w20,
                                     *(undefined8 *)OVRPlugin_SpaceQueryResult_var);
      if (0 < (int)unaff_w20) {
        uVar9 = (ulong)unaff_w20;
        puVar11 = auVar15._0_8_;
        do {
          uVar14 = *puVar11;
          uVar9 = uVar9 - 1;
          auVar12._2_2_ = 0;
          auVar12._0_2_ = (ushort)uVar14;
          auVar12._4_2_ = (short)((ulong)uVar14 >> 0x10);
          auVar12._6_2_ = 0;
          auVar12._8_2_ = (short)((ulong)uVar14 >> 0x20);
          auVar12._10_2_ = 0;
          auVar12._12_2_ = (short)((ulong)uVar14 >> 0x30);
          auVar12._14_2_ = 0;
          auVar12 = NEON_ucvtf(auVar12,4);
          pfVar7[2] = auVar12._8_4_ / 65535.0;
          pfVar7[3] = auVar12._12_4_ / 65535.0;
          *pfVar7 = auVar12._0_4_ / 65535.0;
          pfVar7[1] = auVar12._4_4_ / 65535.0;
          pfVar7 = pfVar7 + 4;
          puVar11 = puVar11 + 1;
        } while (uVar9 != 0);
      }
    }
    else {
      if (iVar5 != 3) {
        FUN_018748a8(in_stack_00000000);
        uVar8 = *(undefined8 *)(in_stack_00000000 + 0x20);
        uVar14 = thunk_FUN_01a6ca08(
                                   Unity_Transforms_ParentSystem___codegen__OnCreate_0000000E_PostfixBurstDelegate_var
                                   );
        uVar14 = FUN_025b1328(uVar14,uVar8,0);
        thunk_FUN_01a6ca08(PTR_DAT_03cc74c8);
        uVar8 = thunk_FUN_01a89e68();
        FUN_0276e9b0(uVar8,uVar14,0);
        uVar14 = thunk_FUN_01a6ca08(
                                   Unity_Physics_Systems_PhysicsSimulationPickerSystem___codegen__OnCreate_00000B6F_PostfixBurstDelegate_var
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar8,uVar14);
      }
      if (*(long *)(unaff_x22 + 0x18) == 0) goto LAB_03097500;
      auVar15 = FUN_01f7f7e8();
      if (auVar15._8_4_ != unaff_w20) {
LAB_03097504:
        thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
        uVar14 = thunk_FUN_01a89e68();
        uVar8 = thunk_FUN_01a6ca08(System_Xml_Serialization_XmlSchemaProviderAttribute_var);
        FUN_027a794c(uVar14,uVar8,0);
        uVar8 = thunk_FUN_01a6ca08(
                                  Unity_Physics_Systems_PhysicsSimulationPickerSystem___codegen__OnCreate_00000B6F_PostfixBurstDelegate_var
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar14,uVar8);
      }
      if (*(long *)(unaff_x21 + 0x30) == 0) goto LAB_03097500;
      lVar6 = FUN_01fb41c8(*(long *)(unaff_x21 + 0x30),unaff_w20,
                           *(undefined8 *)OVRPlugin_SpaceQueryResult_var);
      fVar4 = DAT_00d38b94;
      if (0 < (int)unaff_w20) {
        uVar9 = (ulong)unaff_w20;
        puVar10 = (ushort *)(auVar15._0_8_ + 4);
        pfVar7 = (float *)(lVar6 + 8);
        do {
          uVar1 = puVar10[-2];
          uVar2 = puVar10[-1];
          uVar13 = *puVar10;
          pfVar7[1] = 1.0;
          fVar3 = (float)NEON_ucvtf((uint)uVar13);
          uVar14 = NEON_ucvtf((ulong)CONCAT24(uVar2,(uint)uVar1),4);
          *pfVar7 = fVar3 / fVar4;
          puVar10 = puVar10 + 3;
          uVar9 = uVar9 - 1;
          *(ulong *)(pfVar7 + -2) =
               CONCAT44((float)((ulong)uVar14 >> 0x20) / 65535.0,(float)uVar14 / 65535.0);
          pfVar7 = pfVar7 + 4;
        } while (uVar9 != 0);
      }
    }
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    FUN_02241190();
  }
  return;
}


