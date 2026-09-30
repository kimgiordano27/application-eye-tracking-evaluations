/*
FUNCTION_NAME: FUN_00fa9848
ENTRY_POINT: 00fa9848
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_00fa9848(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long local_28;
  
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vsqadd_u32__;
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_037759db & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Management_XRLoaderHelper_StartSubsystem<XRDisplaySubsystem>__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vsqadd_u32__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_Meta_WitAi_UnityEventExtensions_SetListener<WitRequestOptions>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Vector2>_Clear__);
    DAT_037759db = 1;
  }
  FUN_010c2c5c(param_1,&local_28,*(undefined8 *)puVar2);
  lVar4 = local_28;
  *(long *)(param_1 + 0x50) = local_28;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_0268b5e4(lVar4,0);
  if ((uVar3 & 1) == 0) {
    FUN_010c2c5c(param_1,&local_28,
                 *(undefined8 *)
                  Method_UnityEngine_XR_Management_XRLoaderHelper_StartSubsystem<XRDisplaySubsystem>__
                );
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar3 = FUN_0268b5e4(local_28,0);
    if ((uVar3 & 1) != 0) {
      if (local_28 == 0) goto LAB_00fa99b4;
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(local_28 + 0x18);
    }
  }
  puVar1 = Method_Meta_WitAi_UnityEventExtensions_SetListener<WitRequestOptions>__;
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_Meta_WitAi_UnityEventExtensions_SetListener<WitRequestOptions>__
                            );
  if (lVar4 != 0) {
    FUN_00fa99b8(lVar4,param_1,
                 *(undefined8 *)Method_System_Collections_Generic_List<Vector2>_Clear__);
    plVar5 = (long *)FUN_017b76bc(uVar6,lVar4,0);
    if (plVar5 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x48) = 0;
      return;
    }
    lVar4 = *(long *)puVar1;
    if ((*plVar5 == lVar4) && (*(long **)(param_1 + 0x48) = plVar5, *plVar5 == lVar4)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da544c();
  }
LAB_00fa99b4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


