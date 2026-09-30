/*
FUNCTION_NAME: OVRPlugin$$set_localDimming
ENTRY_POINT: 01a1ecfc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_localDimming(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  puVar1 = 
  Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
  ;
  lVar2 = *unaff_x22;
  lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar3 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar3 == 0) goto LAB_01a1eda8;
    FUN_012d1810(lVar3,uVar4,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vdup_laneq_u16__,
                 0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8) = lVar3;
  }
  puVar1 = System_Action<byte[],_int,_short>_TypeInfo;
  *(long *)(unaff_x19 + 0x48) = lVar3;
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    FUN_01298da0(lVar2,*(undefined8 *)
                        Method_System_Collections_Generic_List_Enumerator<SimpleMultiObjectBob_Bobject>_Dispose__
                );
    *(long *)(unaff_x19 + 0x50) = lVar2;
    thunk_FUN_0268a01c();
    return;
  }
LAB_01a1eda8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


