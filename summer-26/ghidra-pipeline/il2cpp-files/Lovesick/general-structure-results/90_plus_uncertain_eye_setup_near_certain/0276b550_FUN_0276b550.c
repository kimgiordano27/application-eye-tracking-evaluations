/*
FUNCTION_NAME: FUN_0276b550
ENTRY_POINT: 0276b550
PROGRAM: Lovesick-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0276b550(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovund_s64__;
  if ((DAT_037885a3 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_ValueCollection<XmlQualifiedName,_SchemaAttDef>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__);
    thunk_FUN_00d48444(StringLiteral_14230);
    thunk_FUN_00d48444(PTR_DAT_033f23b8);
    thunk_FUN_00d48444(System_Collections_Generic_List<IColliderWorldImpl>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_4211);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_HashSet<__Il2CppFullySharedGenericType>_RemoveWhere__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqmovund_s64__);
    thunk_FUN_00d48444(System_Collections_Generic_List<IContextProperty>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_2630);
    thunk_FUN_00d48444(Method_System_Nullable<PreserveReferencesHandling>_GetValueOrDefault__);
    thunk_FUN_00d48444(
                      Method_RCG_Lovesick_InteractiveObjects_GrabbableObject_<>c_<set_lastPlacePoint>b__7_0__
                      );
    DAT_037885a3 = 1;
  }
  lVar2 = FUN_027a82d8(param_1,0);
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if ((lVar3 != 0) &&
     (FUN_012c5834(lVar3,param_1,
                   *(undefined8 *)
                    Method_System_Nullable<PreserveReferencesHandling>_GetValueOrDefault__,0),
     puVar1 = StringLiteral_4211, lVar2 != 0)) {
    FUN_010bfd58(lVar2,lVar3,0,*(undefined8 *)StringLiteral_14230);
    lVar2 = FUN_027a82d8(param_1,0);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar3 != 0) &&
       (FUN_012c5834(lVar3,param_1,
                     *(undefined8 *)
                      Method_RCG_Lovesick_InteractiveObjects_GrabbableObject_<>c_<set_lastPlacePoint>b__7_0__
                     ,0), puVar1 = System_Collections_Generic_List<IColliderWorldImpl>_TypeInfo,
       lVar2 != 0)) {
      FUN_010bfd58(lVar2,lVar3,0,*(undefined8 *)PTR_DAT_033f23b8);
      lVar2 = FUN_027a82d8(param_1,0);
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if ((lVar3 != 0) &&
         (FUN_012c5834(lVar3,param_1,*(undefined8 *)StringLiteral_2630,0),
         puVar1 = 
         Method_System_Collections_Generic_HashSet<__Il2CppFullySharedGenericType>_RemoveWhere__,
         lVar2 != 0)) {
        FUN_010bfd58(lVar2,lVar3,0,
                     *(undefined8 *)Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>__ctor__
                    );
        lVar2 = FUN_027a82d8(param_1,0);
        lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if ((lVar3 != 0) &&
           (FUN_012c5834(lVar3,param_1,
                         *(undefined8 *)System_Collections_Generic_List<IContextProperty>_TypeInfo,0
                        ), lVar2 != 0)) {
          FUN_010bfd58(lVar2,lVar3,0,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_ValueCollection<XmlQualifiedName,_SchemaAttDef>_GetEnumerator__
                      );
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


