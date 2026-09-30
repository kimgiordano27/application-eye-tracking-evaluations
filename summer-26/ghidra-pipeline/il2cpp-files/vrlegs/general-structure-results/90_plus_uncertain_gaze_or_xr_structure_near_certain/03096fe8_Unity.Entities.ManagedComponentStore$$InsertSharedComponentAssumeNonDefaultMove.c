/*
FUNCTION_NAME: Unity.Entities.ManagedComponentStore$$InsertSharedComponentAssumeNonDefaultMove
ENTRY_POINT: 03096fe8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 128
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_Entities_ManagedComponentStore__InsertSharedComponentAssumeNonDefaultMove(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float *pfVar6;
  byte *pbVar7;
  undefined8 *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [12];
  long in_stack_00000000;
  
  FUN_01ab69ac(*(undefined8 *)(param_1 + 0xed8));
  FUN_01ab69ac(OVRPlugin_Vector3f_var);
  *(undefined1 *)(unaff_x23 + 0x52a) = 1;
  uVar2 = FUN_03096f6c();
  if ((uVar2 & 1) == 0) {
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
  }
  else {
    if ((((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x28) == 0)) || (unaff_x22 == 0)) ||
       (((*(long *)(unaff_x22 + 0x18) == 0 ||
         (lVar3 = *(long *)(*(long *)(unaff_x21 + 0x28) + 0x28), lVar3 == 0)) ||
        (FUN_02215a88(lVar3,*(undefined4 *)(*(long *)(unaff_x22 + 0x18) + 0x24)),
        in_stack_00000000 == 0)))) {
LAB_03097200:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar1 = FUN_03057570(in_stack_00000000,0);
    if (iVar1 == 4) {
      if (*(long *)(unaff_x22 + 0x18) == 0) goto LAB_03097200;
      auVar12 = FUN_01f7f7e8();
      if (auVar12._8_4_ != unaff_w20) goto LAB_03097204;
      if (*(long *)(unaff_x21 + 0x30) == 0) goto LAB_03097200;
      lVar3 = FUN_01fb41c8(*(long *)(unaff_x21 + 0x30),unaff_w20,
                           *(undefined8 *)OVRPlugin_SpaceQueryResult_var);
      if (0 < (int)unaff_w20) {
        uVar2 = (ulong)unaff_w20;
        pbVar7 = (byte *)(auVar12._0_8_ + 1);
        pfVar6 = (float *)(lVar3 + 8);
        do {
          fVar8 = (float)NEON_ucvtf((uint)pbVar7[-1]);
          fVar9 = (float)NEON_ucvtf((uint)*pbVar7);
          fVar10 = (float)NEON_ucvtf((uint)pbVar7[1]);
          fVar11 = (float)NEON_ucvtf((uint)pbVar7[2]);
          uVar2 = uVar2 - 1;
          pfVar6[-2] = fVar8 / 255.0;
          pfVar6[-1] = fVar9 / 255.0;
          *pfVar6 = fVar10 / 255.0;
          pfVar6[1] = fVar11 / 255.0;
          pbVar7 = pbVar7 + 4;
          pfVar6 = pfVar6 + 4;
        } while (uVar2 != 0);
      }
    }
    else {
      if (iVar1 != 3) {
        FUN_018748a8(in_stack_00000000);
        uVar5 = *(undefined8 *)(in_stack_00000000 + 0x20);
        uVar4 = thunk_FUN_01a6ca08(
                                  Unity_Transforms_ParentSystem___codegen__OnCreate_0000000E_PostfixBurstDelegate_var
                                  );
        uVar4 = FUN_025b1328(uVar4,uVar5,0);
        thunk_FUN_01a6ca08(PTR_DAT_03cc74c8);
        uVar5 = thunk_FUN_01a89e68();
        FUN_0276e9b0(uVar5,uVar4,0);
        uVar4 = thunk_FUN_01a6ca08(OVRPlugin_VirtualKeyboardModelAnimationState_var);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar5,uVar4);
      }
      if (*(long *)(unaff_x22 + 0x18) == 0) goto LAB_03097200;
      auVar12 = FUN_01f7f7e8();
      if (auVar12._8_4_ != unaff_w20) {
LAB_03097204:
        thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
        uVar4 = thunk_FUN_01a89e68();
        uVar5 = thunk_FUN_01a6ca08(System_Xml_Serialization_XmlSchemaProviderAttribute_var);
        FUN_027a794c(uVar4,uVar5,0);
        uVar5 = thunk_FUN_01a6ca08(OVRPlugin_VirtualKeyboardModelAnimationState_var);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar4,uVar5);
      }
      if (*(long *)(unaff_x21 + 0x30) == 0) goto LAB_03097200;
      lVar3 = FUN_01fb41c8(*(long *)(unaff_x21 + 0x30),unaff_w20,
                           *(undefined8 *)OVRPlugin_SpaceQueryResult_var);
      if (0 < (int)unaff_w20) {
        uVar2 = (ulong)unaff_w20;
        pbVar7 = (byte *)(auVar12._0_8_ + 1);
        pfVar6 = (float *)(lVar3 + 8);
        do {
          fVar8 = (float)NEON_ucvtf((uint)pbVar7[-1]);
          fVar9 = (float)NEON_ucvtf((uint)*pbVar7);
          fVar10 = (float)NEON_ucvtf((uint)pbVar7[1]);
          pfVar6[1] = 1.0;
          uVar2 = uVar2 - 1;
          pfVar6[-2] = fVar8 / 255.0;
          pfVar6[-1] = fVar9 / 255.0;
          *pfVar6 = fVar10 / 255.0;
          pbVar7 = pbVar7 + 3;
          pfVar6 = pfVar6 + 4;
        } while (uVar2 != 0);
      }
    }
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    unaff_x19[2] = 0;
    FUN_02241190();
  }
  return;
}


