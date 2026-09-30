/*
FUNCTION_NAME: FUN_027b0468
ENTRY_POINT: 027b0468
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_027b0468(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar4 = StringLiteral_2196;
  if ((DAT_037887e8 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Convert_ThrowInt64OverflowException__);
    thunk_FUN_00d48444(Method_System_Xml_Schema_ParticleContentValidator_CompleteValidation__);
    thunk_FUN_00d48444(UnityEngine_Rendering_PowerOfTwoTextureAtlas_<>c_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<MemberInfo,_UnitySerializationUtility_CachedSerializationBackendResult>__ctor__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vhaddq_s16__);
    thunk_FUN_00d48444(StringLiteral_2196);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
                      );
    DAT_037887e8 = 1;
  }
  lVar5 = *(long *)puVar4;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar5 = *(long *)puVar4;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar5 != 0) {
    lVar7 = *(long *)Method_System_Xml_Schema_ParticleContentValidator_CompleteValidation__;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    puVar2 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_ComponentLocatorUtility<ARSessionOrigin>_TryFindComponent__
    ;
    uVar6 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 200));
    if ((uVar6 & 1) == 0) {
      *(undefined4 *)(lVar5 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar5 + 0x18);
      *(undefined4 *)(lVar5 + 0x18) = 0;
      if (0 < iVar1) {
        FUN_0179519c(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
      }
    }
    puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vhaddq_s16__;
    uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_027a78c0(uVar8,0);
    lVar5 = *(long *)puVar3;
    lVar7 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *(long *)puVar3;
    }
    puVar2 = Method_System_Convert_ThrowInt64OverflowException__;
    lVar9 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar9 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *(long *)puVar3;
      }
      uVar8 = **(undefined8 **)(lVar5 + 0xb8);
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar9 == 0) goto LAB_027b0658;
      FUN_01267c10(lVar9,uVar8,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<MemberInfo,_UnitySerializationUtility_CachedSerializationBackendResult>__ctor__
                   ,0);
      *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) = lVar9;
    }
    if (lVar7 != 0) {
      FUN_0132508c(lVar7,lVar9,
                   *(undefined8 *)UnityEngine_Rendering_PowerOfTwoTextureAtlas_<>c_TypeInfo);
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar5 = *(long *)puVar4;
      }
      *(undefined1 *)(*(long *)(lVar5 + 0xb8) + 0x18) = 0;
      return;
    }
  }
LAB_027b0658:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


