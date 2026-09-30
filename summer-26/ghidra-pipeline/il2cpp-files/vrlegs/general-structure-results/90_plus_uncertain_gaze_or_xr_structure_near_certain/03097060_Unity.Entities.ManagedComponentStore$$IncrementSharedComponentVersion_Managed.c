/*
FUNCTION_NAME: Unity.Entities.ManagedComponentStore$$IncrementSharedComponentVersion_Managed
ENTRY_POINT: 03097060
PROGRAM: vrlegs-libil2cpp.so
SCORE: 116
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_Entities_ManagedComponentStore__IncrementSharedComponentVersion_Managed(int param_1)

{
  bool in_ZR;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  float *pfVar5;
  byte *pbVar6;
  undefined8 *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [12];
  
  if (in_ZR) {
    if (*(long *)(unaff_x22 + 0x18) != 0) {
      auVar11 = FUN_01f7f7e8();
      if (auVar11._8_4_ != unaff_w20) goto LAB_03097204;
      if (*(long *)(unaff_x21 + 0x30) != 0) {
        lVar1 = FUN_01fb41c8(*(long *)(unaff_x21 + 0x30),unaff_w20,
                             *(undefined8 *)OVRPlugin_SpaceQueryResult_var);
        if (0 < (int)unaff_w20) {
          uVar4 = (ulong)unaff_w20;
          pbVar6 = (byte *)(auVar11._0_8_ + 1);
          pfVar5 = (float *)(lVar1 + 8);
          do {
            fVar7 = (float)NEON_ucvtf((uint)pbVar6[-1]);
            fVar8 = (float)NEON_ucvtf((uint)*pbVar6);
            fVar9 = (float)NEON_ucvtf((uint)pbVar6[1]);
            fVar10 = (float)NEON_ucvtf((uint)pbVar6[2]);
            uVar4 = uVar4 - 1;
            pfVar5[-2] = fVar7 / 255.0;
            pfVar5[-1] = fVar8 / 255.0;
            *pfVar5 = fVar9 / 255.0;
            pfVar5[1] = fVar10 / 255.0;
            pbVar6 = pbVar6 + 4;
            pfVar5 = pfVar5 + 4;
          } while (uVar4 != 0);
        }
        goto LAB_030971c8;
      }
    }
  }
  else {
    if (param_1 != 3) {
      FUN_018748a8();
      uVar3 = *(undefined8 *)(unaff_x23 + 0x20);
      uVar2 = thunk_FUN_01a6ca08(
                                Unity_Transforms_ParentSystem___codegen__OnCreate_0000000E_PostfixBurstDelegate_var
                                );
      uVar2 = FUN_025b1328(uVar2,uVar3,0);
      thunk_FUN_01a6ca08(PTR_DAT_03cc74c8);
      uVar3 = thunk_FUN_01a89e68();
      FUN_0276e9b0(uVar3,uVar2,0);
      uVar2 = thunk_FUN_01a6ca08(OVRPlugin_VirtualKeyboardModelAnimationState_var);
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar3,uVar2);
    }
    if (*(long *)(unaff_x22 + 0x18) != 0) {
      auVar11 = FUN_01f7f7e8();
      if (auVar11._8_4_ != unaff_w20) {
LAB_03097204:
        thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
        uVar2 = thunk_FUN_01a89e68();
        uVar3 = thunk_FUN_01a6ca08(System_Xml_Serialization_XmlSchemaProviderAttribute_var);
        FUN_027a794c(uVar2,uVar3,0);
        uVar3 = thunk_FUN_01a6ca08(OVRPlugin_VirtualKeyboardModelAnimationState_var);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar2,uVar3);
      }
      if (*(long *)(unaff_x21 + 0x30) != 0) {
        lVar1 = FUN_01fb41c8(*(long *)(unaff_x21 + 0x30),unaff_w20,
                             *(undefined8 *)OVRPlugin_SpaceQueryResult_var);
        if (0 < (int)unaff_w20) {
          uVar4 = (ulong)unaff_w20;
          pbVar6 = (byte *)(auVar11._0_8_ + 1);
          pfVar5 = (float *)(lVar1 + 8);
          do {
            fVar7 = (float)NEON_ucvtf((uint)pbVar6[-1]);
            fVar8 = (float)NEON_ucvtf((uint)*pbVar6);
            fVar9 = (float)NEON_ucvtf((uint)pbVar6[1]);
            pfVar5[1] = 1.0;
            uVar4 = uVar4 - 1;
            pfVar5[-2] = fVar7 / 255.0;
            pfVar5[-1] = fVar8 / 255.0;
            *pfVar5 = fVar9 / 255.0;
            pbVar6 = pbVar6 + 3;
            pfVar5 = pfVar5 + 4;
          } while (uVar4 != 0);
        }
LAB_030971c8:
        *unaff_x19 = 0;
        unaff_x19[1] = 0;
        unaff_x19[2] = 0;
        FUN_02241190();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


