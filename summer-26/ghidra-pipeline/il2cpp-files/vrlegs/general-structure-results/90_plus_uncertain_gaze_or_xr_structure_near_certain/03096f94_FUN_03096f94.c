/*
FUNCTION_NAME: FUN_03096f94
ENTRY_POINT: 03096f94
PROGRAM: vrlegs-libil2cpp.so
SCORE: 128
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_9;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1;functionality_possible_biometrics_hits_4
*/


void FUN_03096f94(undefined8 *param_1,long param_2,long param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float *pfVar6;
  byte *pbVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [12];
  undefined1 local_40 [16];
  
  uVar8 = (ulong)param_4;
  if ((DAT_0412b52a & 1) == 0) {
    FUN_01ab69ac(OVRFaceExpressions_FaceExpression_var);
    FUN_01ab69ac(UnityEngine_Vector2_var);
    FUN_01ab69ac(PTR_DAT_03cd8108);
    FUN_01ab69ac(OVRPlugin_SpaceQueryResult_var);
    FUN_01ab69ac(OVRPlugin_Vector3f_var);
    DAT_0412b52a = 1;
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
LAB_03097200:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    iVar1 = FUN_03057570(local_40._0_8_,0);
    if (iVar1 == 4) {
      if (*(long *)(param_2 + 0x18) == 0) goto LAB_03097200;
      auVar13 = FUN_01f7f7e8(param_3,*(undefined4 *)(*(long *)(param_2 + 0x18) + 0x24),
                             *(undefined8 *)UnityEngine_Vector2_var);
      if (auVar13._8_4_ != param_4) goto LAB_03097204;
      if (*(long *)(param_3 + 0x30) == 0) goto LAB_03097200;
      local_40 = FUN_01fb41c8(*(long *)(param_3 + 0x30),uVar8,
                              *(undefined8 *)OVRPlugin_SpaceQueryResult_var);
      if (0 < (int)param_4) {
        pbVar7 = (byte *)(auVar13._0_8_ + 1);
        pfVar6 = (float *)(local_40._0_8_ + 8);
        do {
          fVar9 = (float)NEON_ucvtf((uint)pbVar7[-1]);
          fVar10 = (float)NEON_ucvtf((uint)*pbVar7);
          fVar11 = (float)NEON_ucvtf((uint)pbVar7[1]);
          fVar12 = (float)NEON_ucvtf((uint)pbVar7[2]);
          uVar8 = uVar8 - 1;
          pfVar6[-2] = fVar9 / 255.0;
          pfVar6[-1] = fVar10 / 255.0;
          *pfVar6 = fVar11 / 255.0;
          pfVar6[1] = fVar12 / 255.0;
          pbVar7 = pbVar7 + 4;
          pfVar6 = pfVar6 + 4;
        } while (uVar8 != 0);
      }
    }
    else {
      if (iVar1 != 3) {
        FUN_018748a8(local_40._0_8_);
        uVar4 = *(undefined8 *)(local_40._0_8_ + 0x20);
        uVar5 = thunk_FUN_01a6ca08(
                                  Unity_Transforms_ParentSystem___codegen__OnCreate_0000000E_PostfixBurstDelegate_var
                                  );
        uVar5 = FUN_025b1328(uVar5,uVar4,0);
        thunk_FUN_01a6ca08(PTR_DAT_03cc74c8);
        uVar4 = thunk_FUN_01a89e68();
        FUN_0276e9b0(uVar4,uVar5,0);
        uVar5 = thunk_FUN_01a6ca08(OVRPlugin_VirtualKeyboardModelAnimationState_var);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar4,uVar5);
      }
      if (*(long *)(param_2 + 0x18) == 0) goto LAB_03097200;
      auVar13 = FUN_01f7f7e8(param_3,*(undefined4 *)(*(long *)(param_2 + 0x18) + 0x24),
                             *(undefined8 *)OVRFaceExpressions_FaceExpression_var);
      if (auVar13._8_4_ != param_4) {
LAB_03097204:
        thunk_FUN_01a6ca08(PTR_DAT_03cbdd48);
        uVar5 = thunk_FUN_01a89e68();
        uVar4 = thunk_FUN_01a6ca08(System_Xml_Serialization_XmlSchemaProviderAttribute_var);
        FUN_027a794c(uVar5,uVar4,0);
        uVar4 = thunk_FUN_01a6ca08(OVRPlugin_VirtualKeyboardModelAnimationState_var);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar5,uVar4);
      }
      if (*(long *)(param_3 + 0x30) == 0) goto LAB_03097200;
      local_40 = FUN_01fb41c8(*(long *)(param_3 + 0x30),uVar8,
                              *(undefined8 *)OVRPlugin_SpaceQueryResult_var);
      if (0 < (int)param_4) {
        uVar8 = (ulong)param_4;
        pbVar7 = (byte *)(auVar13._0_8_ + 1);
        pfVar6 = (float *)(local_40._0_8_ + 8);
        do {
          fVar9 = (float)NEON_ucvtf((uint)pbVar7[-1]);
          fVar10 = (float)NEON_ucvtf((uint)*pbVar7);
          fVar11 = (float)NEON_ucvtf((uint)pbVar7[1]);
          pfVar6[1] = 1.0;
          uVar8 = uVar8 - 1;
          pfVar6[-2] = fVar9 / 255.0;
          pfVar6[-1] = fVar10 / 255.0;
          *pfVar6 = fVar11 / 255.0;
          pbVar7 = pbVar7 + 3;
          pfVar6 = pfVar6 + 4;
        } while (uVar8 != 0);
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    uVar5 = *(undefined8 *)OVRPlugin_Vector3f_var;
    param_1[2] = 0;
    FUN_02241190(param_1,local_40,uVar5);
  }
  return;
}


