/*
FUNCTION_NAME: FUN_058da320
ENTRY_POINT: 058da320
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_058da320(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 uVar12;
  long local_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long local_78;
  long lStack_70;
  undefined4 local_64;
  
  puVar7 = 
  Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_ResolvedEnumProperty<Justify>__ctor__
  ;
  puVar4 = Method_Oculus_Platform_Request<UserCapabilityList>__ctor__;
  puVar3 = Method_Unity_Properties_Property<Version,_int>_AddAttribute__;
  puVar1 = PTR_DAT_06321548;
  if ((DAT_066d3396 & 1) == 0) {
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_ResolvedEnumProperty<FlexDirection>__ctor__
                );
    FUN_02b3c81c(
                Method_UnityEngine_Animations_Rigging_RigConstraint<ChainIKConstraintJob,_ChainIKConstraintData,_ChainIKConstraintJobBinder<ChainIKConstraintData>>_OnValidate__
                );
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_ResolvedEnumProperty<FontStyle>__ctor__
                );
    FUN_02b3c81c(Mono_Net_Security_ChainValidationHelper_TypeInfo);
    FUN_02b3c81c(
                Method_UnityEngine_Animations_Rigging_RigConstraint<DampedTransformJob,_DampedTransformData,_DampedTransformJobBinder<DampedTransformData>>__ctor__
                );
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_ResolvedEnumProperty<Justify>__ctor__
                );
    FUN_02b3c81c(
                Method_UnityEngine_Animations_Rigging_RigConstraint<DampedTransformJob,_DampedTransformData,_DampedTransformJobBinder<DampedTransformData>>_OnValidate__
                );
    FUN_02b3c81c(PTR_DAT_06321548);
    FUN_02b3c81c(
                Method_UnityEngine_Animations_Rigging_RigConstraint<MultiAimConstraintJob,_MultiAimConstraintData,_MultiAimConstraintJobBinder<MultiAimConstraintData>>__ctor__
                );
    FUN_02b3c81c(Method_Unity_Properties_Property<Version,_int>_AddAttribute__);
    FUN_02b3c81c(Method_Oculus_Platform_Request<UserCapabilityList>__ctor__);
    DAT_066d3396 = 1;
  }
  puVar9 = 
  Method_UnityEngine_Animations_Rigging_RigConstraint<MultiAimConstraintJob,_MultiAimConstraintData,_MultiAimConstraintJobBinder<MultiAimConstraintData>>__ctor__
  ;
  puVar8 = 
  Method_UnityEngine_Animations_Rigging_RigConstraint<DampedTransformJob,_DampedTransformData,_DampedTransformJobBinder<DampedTransformData>>__ctor__
  ;
  puVar6 = 
  Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_ResolvedEnumProperty<FontStyle>__ctor__
  ;
  puVar5 = 
  Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_ResolvedEnumProperty<FlexDirection>__ctor__
  ;
  puVar2 = Mono_Net_Security_ChainValidationHelper_TypeInfo;
  local_64 = 0;
  local_78 = 0;
  lStack_70 = 0;
  FUN_03a1fa14(&local_78,2,4,1,*(undefined8 *)puVar1);
  param_1[1] = lStack_70;
  *param_1 = local_78;
  *(undefined4 *)(*param_1 + 4) = param_2;
  uVar10 = FUN_056d9778(4,0);
  local_80 = 0;
  FUN_03aaefb8(&local_80,uVar10,*(undefined8 *)puVar3);
  uVar12 = *(undefined8 *)puVar7;
  uVar10 = *(undefined4 *)(*param_1 + 4);
  param_1[2] = local_80;
  local_90 = 0;
  lStack_88 = 0;
  FUN_03a6fbac(&local_90,uVar10,4,0,uVar12);
  lVar11 = *(long *)puVar4;
  param_1[4] = lStack_88;
  param_1[3] = local_90;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar11 = *(long *)puVar4;
  }
  FUN_030edd98(param_1 + 3,*(undefined8 *)(lVar11 + 0xb8),0,0xffffffff,*(undefined8 *)puVar5);
  local_a0 = 0;
  lStack_98 = 0;
  FUN_03a1fa14(&local_a0,*(undefined4 *)(*param_1 + 4),4,1,*(undefined8 *)puVar1);
  uVar12 = *(undefined8 *)puVar8;
  param_1[6] = lStack_98;
  param_1[5] = local_a0;
  local_b0 = 0;
  lStack_a8 = 0;
  FUN_03a71d94(&local_b0,*(undefined4 *)(*param_1 + 4),4,1,uVar12);
  uVar12 = *(undefined8 *)puVar1;
  param_1[8] = lStack_a8;
  param_1[7] = local_b0;
  local_c0 = 0;
  lStack_b8 = 0;
  FUN_03a1fa14(&local_c0,*(undefined4 *)(*param_1 + 4),4,1,uVar12);
  uVar12 = *(undefined8 *)puVar6;
  param_1[10] = lStack_b8;
  param_1[9] = local_c0;
  local_d0 = 0;
  lStack_c8 = 0;
  FUN_039ef560(&local_d0,*(undefined4 *)(*param_1 + 4),4,1,uVar12);
  uVar12 = *(undefined8 *)puVar9;
  param_1[0xc] = lStack_c8;
  param_1[0xb] = local_d0;
  local_e0 = 0;
  lStack_d8 = 0;
  FUN_039fb2cc(&local_e0,*(undefined4 *)(*param_1 + 4),4,1,uVar12);
  uVar12 = *(undefined8 *)puVar2;
  param_1[0xe] = lStack_d8;
  param_1[0xd] = local_e0;
  local_f0 = 0;
  lStack_e8 = 0;
  FUN_03a7b970(&local_f0,*(undefined4 *)(*param_1 + 4),4,1,uVar12);
  puVar3 = 
  Method_UnityEngine_Animations_Rigging_RigConstraint<ChainIKConstraintJob,_ChainIKConstraintData,_ChainIKConstraintJobBinder<ChainIKConstraintData>>_OnValidate__
  ;
  param_1[0x10] = lStack_e8;
  param_1[0xf] = local_f0;
  local_64 = 0xffffffff;
  FUN_030edeb4(param_1 + 0xf,&local_64,0,0xffffffff,*(undefined8 *)puVar3);
  local_100 = 0;
  lStack_f8 = 0;
  FUN_03a0b52c(&local_100,*(undefined4 *)(*param_1 + 4),4,1,
               *(undefined8 *)
                Method_UnityEngine_Animations_Rigging_RigConstraint<DampedTransformJob,_DampedTransformData,_DampedTransformJobBinder<DampedTransformData>>_OnValidate__
              );
  uVar12 = *(undefined8 *)puVar1;
  param_1[0x12] = lStack_f8;
  param_1[0x11] = local_100;
  local_110 = 0;
  lStack_108 = 0;
  FUN_03a1fa14(&local_110,*(undefined4 *)(*param_1 + 4),4,1,uVar12);
  uVar12 = *(undefined8 *)puVar1;
  param_1[0x14] = lStack_108;
  param_1[0x13] = local_110;
  local_120 = 0;
  lStack_118 = 0;
  FUN_03a1fa14(&local_120,*(undefined4 *)(*param_1 + 4),4,1,uVar12);
  param_1[0x16] = lStack_118;
  param_1[0x15] = local_120;
  return;
}


