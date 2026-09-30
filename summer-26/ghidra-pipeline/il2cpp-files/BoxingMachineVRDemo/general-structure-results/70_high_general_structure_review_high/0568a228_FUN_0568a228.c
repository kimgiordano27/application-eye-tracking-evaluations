/*
FUNCTION_NAME: FUN_0568a228
ENTRY_POINT: 0568a228
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_0568a228(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = Oculus_Platform_Request<AssetFileDownloadResult>_TypeInfo;
  puVar1 = PTR_DAT_0676fb50;
  if ((DAT_06b7f8c8 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0676fb50);
    FUN_02d6084c(Oculus_Platform_Request<AssetFileDownloadResult>_TypeInfo);
    FUN_02d6084c(
                UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundPosition,_BackgroundPosition>_TypeInfo
                );
    DAT_06b7f8c8 = 1;
  }
  uVar3 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_0567f938(uVar3,0);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x28),uVar3);
  *(undefined4 *)(param_1 + 0x30) = 1;
  uVar3 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  FUN_04fa7cf0(uVar3,0);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  thunk_FUN_02dd37b4((undefined8 *)(param_1 + 0x38),uVar3);
  FUN_0504920c(param_1,0);
  if (param_3 == 0) {
    param_3 = **(long **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8);
    *(long *)(param_1 + 0x10) = param_3;
  }
  else {
    *(long *)(param_1 + 0x10) = param_3;
  }
  thunk_FUN_02dd37b4(param_1 + 0x10,param_3);
  if (param_2 == 0) {
    param_2 = thunk_FUN_02d9d534(*(undefined8 *)
                                  UnityEngine_UIElements_StyleValuePropertyBag<StyleBackgroundPosition,_BackgroundPosition>_TypeInfo
                                );
    FUN_05686904(param_2,0);
  }
  *(long *)(param_1 + 0x18) = param_2;
  thunk_FUN_02dd37b4((long *)(param_1 + 0x18),param_2);
  return;
}


