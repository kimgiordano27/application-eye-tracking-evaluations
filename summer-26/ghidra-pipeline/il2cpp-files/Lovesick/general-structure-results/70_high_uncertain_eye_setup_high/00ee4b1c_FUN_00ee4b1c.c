/*
FUNCTION_NAME: FUN_00ee4b1c
ENTRY_POINT: 00ee4b1c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_00ee4b1c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__;
  if ((DAT_0377534a & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Data_DataRelationCollection_DataTableRelationCollection_EnsureDataSet__
                      );
    thunk_FUN_00d48444(StringLiteral_14079);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Locomotion_TurnerEventBroadcaster_HandleStateChanged__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<IInteractableView>_GetEnumerator__);
    thunk_FUN_00d48444(System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<object,_ReferenceTargetProperty>_Add__
                      );
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_19__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
    thunk_FUN_00d48444(Method_UnityEngine_AndroidJavaObject_CallStatic<AndroidJavaObject>__);
    thunk_FUN_00d48444(StringLiteral_8894);
    DAT_0377534a = 1;
  }
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = Method_System_Data_DataRelationCollection_DataTableRelationCollection_EnsureDataSet__;
  if (lVar4 != 0) {
    FUN_01320e50(lVar4,*(undefined8 *)System_Collections_Generic_List<MedleyBarCustomer>_TypeInfo);
    *(long *)(param_1 + 0x20) = lVar4;
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar3 = StringLiteral_8894;
    puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_19__;
    if (lVar4 != 0) {
      FUN_011c181c(lVar4,param_1,
                   *(undefined8 *)
                    Method_Oculus_Interaction_Locomotion_TurnerEventBroadcaster_HandleStateChanged__
                   ,0);
      FUN_0132e0e8(*(undefined8 *)puVar3,lVar4,*(undefined8 *)puVar2);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar1 = Method_UnityEngine_AndroidJavaObject_CallStatic<AndroidJavaObject>__;
      if (lVar4 != 0) {
        FUN_011c181c(lVar4,param_1,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<IInteractableView>_GetEnumerator__,0);
        FUN_0132e0e8(*(undefined8 *)puVar1,lVar4,*(undefined8 *)puVar2);
        lVar4 = FUN_00ed56f0();
        if ((lVar4 != 0) && (*(long *)(lVar4 + 0x40) != 0)) {
          lVar5 = *(long *)(*(long *)(lVar4 + 0x40) + 0x88);
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_Unity_Burst_Intrinsics_Arm_Neon_vrshlq_u64__);
          if ((lVar4 != 0) &&
             (FUN_026c8404(lVar4,param_1,*(undefined8 *)StringLiteral_14079,0), lVar5 != 0)) {
            FUN_026c84dc(lVar5,lVar4,0);
            lVar4 = FUN_00ed56f0();
            if (((lVar4 != 0) && (*(long *)(lVar4 + 0x40) != 0)) &&
               (lVar4 = FUN_00fdc194(*(long *)(lVar4 + 0x40),0), lVar4 != 0)) {
              *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar4 + 0x10);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


