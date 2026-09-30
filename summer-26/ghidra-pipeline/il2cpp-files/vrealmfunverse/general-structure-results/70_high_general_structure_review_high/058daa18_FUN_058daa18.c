/*
FUNCTION_NAME: FUN_058daa18
ENTRY_POINT: 058daa18
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_058daa18(long *param_1,undefined4 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
  puVar6 = 
  Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_ResolvedEnumProperty<Wrap>__ctor__;
  puVar2 = Method_Oculus_Platform_Request<UserCapabilityList>__ctor__;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_066d3398 & 1) == 0) {
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_ResolvedEnumProperty<FlexDirection>__ctor__
                );
    FUN_02b3c81c(
                Method_UnityEngine_Animations_Rigging_RigConstraint<MultiRotationConstraintJob,_MultiRotationConstraintData,_MultiRotationConstraintJobBinder<MultiRotationConstraintData>>__ctor__
                );
    FUN_02b3c81c(
                Method_UnityEngine_Animations_Rigging_RigConstraint<ChainIKConstraintJob,_ChainIKConstraintData,_ChainIKConstraintJobBinder<ChainIKConstraintData>>_OnValidate__
                );
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_ResolvedEnumProperty<TextOverflowPosition>__ctor__
                );
    FUN_02b3c81c(
                Method_UnityEngine_Animations_Rigging_RigConstraint<MultiRotationConstraintJob,_MultiRotationConstraintData,_MultiRotationConstraintJobBinder<MultiRotationConstraintData>>_OnValidate__
                );
    FUN_02b3c81c(
                Method_UnityEngine_Animations_Rigging_RigConstraint<OverrideTransformJob,_OverrideTransformData,_OverrideTransformJobBinder<OverrideTransformData>>__ctor__
                );
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_ResolvedEnumProperty<WhiteSpace>__ctor__
                );
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_ResolvedEnumProperty<Wrap>__ctor__
                );
    FUN_02b3c81c(
                Method_UnityEngine_Animations_Rigging_RigConstraint<OverrideTransformJob,_OverrideTransformData,_OverrideTransformJobBinder<OverrideTransformData>>_OnValidate__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<AnchorPrefabSpawner_AnchorPrefabGroup>_GetEnumerator__
                );
    FUN_02b3c81c(Method_Oculus_Platform_Request<UserCapabilityList>__ctor__);
    DAT_066d3398 = 1;
  }
  puVar9 = 
  Method_UnityEngine_Animations_Rigging_RigConstraint<OverrideTransformJob,_OverrideTransformData,_OverrideTransformJobBinder<OverrideTransformData>>_OnValidate__
  ;
  puVar8 = 
  Method_UnityEngine_Animations_Rigging_RigConstraint<MultiRotationConstraintJob,_MultiRotationConstraintData,_MultiRotationConstraintJobBinder<MultiRotationConstraintData>>_OnValidate__
  ;
  puVar7 = 
  Method_UnityEngine_Animations_Rigging_RigConstraint<MultiRotationConstraintJob,_MultiRotationConstraintData,_MultiRotationConstraintJobBinder<MultiRotationConstraintData>>__ctor__
  ;
  puVar5 = 
  Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_ResolvedEnumProperty<WhiteSpace>__ctor__
  ;
  puVar4 = 
  Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_ResolvedEnumProperty<TextOverflowPosition>__ctor__
  ;
  puVar3 = 
  Method_UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_ResolvedEnumProperty<FlexDirection>__ctor__
  ;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_b4 = 0;
  FUN_030ee81c(param_1 + 3,param_2,*(undefined8 *)puVar6);
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar10 = *(long *)puVar2;
  }
  FUN_030edd98(param_1 + 3,*(undefined8 *)(lVar10 + 0xb8),*(undefined4 *)(*param_1 + 4),0xffffffff,
               *(undefined8 *)puVar3);
  FUN_030ee604(param_1 + 5,param_2,*(undefined8 *)puVar5);
  FUN_030ee93c(param_1 + 7,param_2,*(undefined8 *)puVar9);
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  FUN_030ede20(param_1 + 7,&local_b0,*(undefined4 *)(*param_1 + 4),0xffffffff,*(undefined8 *)puVar7)
  ;
  FUN_030ee604(param_1 + 9,param_2,*(undefined8 *)puVar5);
  FUN_030ee078(param_1 + 0xb,param_2,*(undefined8 *)puVar4);
  FUN_030ee2a4(param_1 + 0xd,param_2,*(undefined8 *)puVar8);
  FUN_030ee9cc(param_1 + 0xf,param_2,
               *(undefined8 *)
                Method_System_Collections_Generic_List<AnchorPrefabSpawner_AnchorPrefabGroup>_GetEnumerator__
              );
  local_b4 = 0xffffffff;
  FUN_030edeb4(param_1 + 0xf,&local_b4,*(undefined4 *)(*param_1 + 4),0xffffffff,
               *(undefined8 *)
                Method_UnityEngine_Animations_Rigging_RigConstraint<ChainIKConstraintJob,_ChainIKConstraintData,_ChainIKConstraintJobBinder<ChainIKConstraintData>>_OnValidate__
              );
  FUN_030ee454(param_1 + 0x11,param_2,
               *(undefined8 *)
                Method_UnityEngine_Animations_Rigging_RigConstraint<OverrideTransformJob,_OverrideTransformData,_OverrideTransformJobBinder<OverrideTransformData>>__ctor__
              );
  FUN_030ee604(param_1 + 0x13,param_2,*(undefined8 *)puVar5);
  FUN_030ee604(param_1 + 0x15,param_2,*(undefined8 *)puVar5);
  *(undefined4 *)(*param_1 + 4) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


