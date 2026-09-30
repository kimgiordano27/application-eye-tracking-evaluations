/*
FUNCTION_NAME: FUN_07ec0350
ENTRY_POINT: 07ec0350
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_07ec0350(float param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  
  if ((DAT_0899aca4 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08493c18);
    FUN_03a8a718(PTR_DAT_08486c60);
    DAT_0899aca4 = 1;
  }
  puVar1 = PTR_DAT_08486c60;
  if (param_1 < 0.0) {
    thunk_FUN_03af1434(PTR_DAT_08491280);
    uVar3 = thunk_FUN_03ac74bc();
    uVar4 = thunk_FUN_03af1434(
                              Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__
                              );
    uVar5 = thunk_FUN_03af1434(Method_UnityEngine_UIElements_BaseField<Vector2>_StartEditing__);
    System_Threading_CancellationToken__get_IsCancellationRequested(uVar3,uVar4,uVar5,0);
    uVar4 = thunk_FUN_03af1434(Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar3,uVar4);
  }
  fVar6 = *(float *)(param_2 + 0x33c);
  *(undefined1 *)(param_2 + 0x340) = 1;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  if (1.4013e-45 < ABS(fVar6 - param_1)) {
    *(float *)(param_2 + 0x33c) = param_1;
    FUN_07ebd704(param_2);
    puVar1 = PTR_DAT_08493c18;
    lVar2 = *(long *)PTR_DAT_08493c18;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar2 = *(long *)puVar1;
    }
    FUN_07f32f5c(param_2,*(long *)(lVar2 + 0xb8) + 0x688,0);
    return;
  }
  return;
}


