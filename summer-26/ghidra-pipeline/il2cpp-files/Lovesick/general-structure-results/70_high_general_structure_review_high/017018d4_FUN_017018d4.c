/*
FUNCTION_NAME: FUN_017018d4
ENTRY_POINT: 017018d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_1;source_validity_pose_sink_structure
*/


long FUN_017018d4(undefined8 param_1,ulong param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  uint local_34;
  
  if ((DAT_0377898f & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(StringLiteral_3538);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>_get_Values__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    DAT_0377898f = 1;
  }
  puVar2 = StringLiteral_3538;
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__;
  if (param_3 < 2) {
    if ((int)param_2 == 0) {
      lVar5 = **(long **)(*(long *)
                           System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                         + 0xb8);
    }
    else {
      if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__ + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar4 = FUN_01701cb4(param_2 & 0xffffffff,param_3 == 1);
      lVar5 = System_Convert__ToInt32(uVar4,0);
      uVar4 = FUN_01120480(param_1,param_2,*(undefined8 *)puVar2);
      if (lVar5 == 0) {
        lVar8 = 0;
      }
      else {
        iVar3 = thunk_FUN_00d402ac(0);
        lVar8 = lVar5 + iVar3;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01701d6c(lVar8,uVar4,0,param_2 & 0xffffffff,param_3 == 1);
    }
    return lVar5;
  }
  local_34 = param_3;
  uVar4 = thunk_FUN_00d48444(
                            Method_System_Collections_Generic_Dictionary<string,_GUIStyle>_set_Item__
                            );
  uVar4 = thunk_FUN_00d61fa0(uVar4,&local_34);
  uVar6 = thunk_FUN_00d48444(Method_System_Text_ASCIIEncoding_GetChars__);
  uVar4 = FUN_015f6780(uVar6,uVar4,0);
  thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
  uVar6 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  uVar7 = thunk_FUN_00d48444(Method_Polenter_Serialization_Advanced_XmlPropertySerializer__ctor__);
  FUN_016ec624(uVar6,uVar4,uVar7);
  uVar4 = thunk_FUN_00d48444(System_Func<Pose,_int,_float>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar6,uVar4);
}


