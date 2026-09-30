/*
FUNCTION_NAME: FUN_06020758
ENTRY_POINT: 06020758
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4
*/


void FUN_06020758(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__2__;
  puVar2 = Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__1__;
  puVar1 = PTR_DAT_067c9320;
  if ((DAT_06bc53b9 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9320);
    FUN_02f08768(Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__1__
                );
    FUN_02f08768(Method_OVRSceneModelLoader_<>c__DisplayClass9_0_<RequestScenePermissionAsync>b__2__
                );
    DAT_06bc53b9 = 1;
  }
  uVar4 = FUN_02f0880c(*(undefined8 *)puVar1,0x234);
  FUN_05009b54(uVar4,*(undefined8 *)puVar2,0);
  uVar5 = FUN_02f0880c(*(undefined8 *)puVar1,0x1ab);
  FUN_05009b54(uVar5,*(undefined8 *)puVar3,0);
  *param_1 = uVar4;
  param_1[1] = uVar5;
  uVar4 = DAT_011b1a58;
  param_1[3] = 0;
  param_1[2] = uVar4;
  return;
}


