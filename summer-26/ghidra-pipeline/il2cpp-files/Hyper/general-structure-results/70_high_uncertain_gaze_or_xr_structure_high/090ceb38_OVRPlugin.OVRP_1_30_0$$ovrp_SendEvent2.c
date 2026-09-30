/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_SendEvent2
ENTRY_POINT: 090ceb38
PROGRAM: Hyper-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


float OVRPlugin_OVRP_1_30_0__ovrp_SendEvent2(long param_1)

{
  long lVar1;
  undefined4 *unaff_x19;
  long *unaff_x20;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  
  uVar8 = *unaff_x19;
  fVar9 = (float)unaff_x19[1];
  fVar10 = (float)unaff_x19[2];
  uVar11 = unaff_x19[3];
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    param_1 = *unaff_x20;
  }
  lVar1 = *(long *)(param_1 + 0xb8);
  fVar2 = (float)FUN_0a16adac(uVar8,fVar9,fVar10,uVar11,*(undefined4 *)(lVar1 + 0x34),
                              *(undefined4 *)(lVar1 + 0x38),*(undefined4 *)(lVar1 + 0x3c),0);
  lVar1 = *(long *)(*unaff_x20 + 0xb8);
  fVar6 = (unaff_s8 * fVar10 + unaff_s10 * fVar2 + unaff_s9 * fVar9) * -2.0;
  fVar9 = fVar9 + unaff_s9 * fVar6;
  fVar10 = fVar10 + unaff_s8 * fVar6;
  fVar4 = (float)unaff_x19[1];
  fVar5 = (float)unaff_x19[2];
  fVar3 = (float)FUN_0a16adac(*unaff_x19,fVar4,fVar5,unaff_x19[3],*(undefined4 *)(lVar1 + 0x40),
                              *(undefined4 *)(lVar1 + 0x44),*(undefined4 *)(lVar1 + 0x48),0);
  fVar7 = (unaff_s8 * fVar5 + unaff_s10 * fVar3 + unaff_s9 * fVar4) * -2.0;
  fVar3 = fVar3 + unaff_s10 * fVar7;
  fVar2 = (float)FUN_0a16ab34(fVar2 + unaff_s10 * fVar6,fVar9,fVar10,fVar3,fVar4 + unaff_s9 * fVar7,
                              fVar5 + unaff_s8 * fVar7,0);
  lVar1 = *(long *)(*unaff_x20 + 0xb8);
  fVar6 = *(float *)(lVar1 + 0x2c);
  fVar7 = *(float *)(lVar1 + 0x30);
  fVar5 = *(float *)(lVar1 + 0x28);
  fVar4 = (float)FUN_0a16a578(*(undefined4 *)(lVar1 + 0x24),fVar5,fVar6,fVar7,0);
  return (fVar9 * fVar6 + fVar3 * fVar4 + fVar2 * fVar7) - fVar10 * fVar5;
}


