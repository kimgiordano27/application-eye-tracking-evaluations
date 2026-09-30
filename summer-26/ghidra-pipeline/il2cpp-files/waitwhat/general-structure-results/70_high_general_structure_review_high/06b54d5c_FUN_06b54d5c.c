/*
FUNCTION_NAME: FUN_06b54d5c
ENTRY_POINT: 06b54d5c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_3
*/


void FUN_06b54d5c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  if ((DAT_0755fefb & 1) == 0) {
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary_Enumerator<HostKey,_HostVariant>_Dispose__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary_Enumerator<HostKey,_HostVariant>_MoveNext__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary_Enumerator<HostKey,_HostVariant>_get_Current__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_Dispose__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_MoveNext__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_MoveNext__
                );
    DAT_0755fefb = 1;
  }
  puVar1 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_MoveNext__
  ;
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar2 = *(long *)
             Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_MoveNext__
    ;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x28);
    if (lVar2 == 0) goto LAB_06b54eb0;
    FUN_03a43984(lVar2,*(undefined8 *)(param_1 + 0x20),
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_Dispose__
                );
    lVar2 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38);
    if (lVar2 == 0) goto LAB_06b54eb0;
    FUN_03a43984(lVar2,*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_Enumerator<HostKey,_HostVariant>_get_Current__
                );
    lVar2 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40);
    if (lVar2 == 0) goto LAB_06b54eb0;
    FUN_03a43984(lVar2,*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_Enumerator<HostKey,_HostVariant>_Dispose__
                );
    lVar2 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
    if (lVar2 == 0) goto LAB_06b54eb0;
    FUN_03a43984(lVar2,*(undefined8 *)(param_1 + 0x28),
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<HumanBodyBones,_OVRUnityHumanoidSkeletonRetargeter_OVRSkeletonMetadata_BoneData>_MoveNext__
                );
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
  if (lVar2 != 0) {
    FUN_03a43984(lVar2,param_1,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary_Enumerator<HostKey,_HostVariant>_MoveNext__
                );
    return;
  }
LAB_06b54eb0:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


