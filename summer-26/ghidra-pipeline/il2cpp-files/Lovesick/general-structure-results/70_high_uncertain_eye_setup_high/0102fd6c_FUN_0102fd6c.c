/*
FUNCTION_NAME: FUN_0102fd6c
ENTRY_POINT: 0102fd6c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0102fd6c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long local_38;
  
  if ((DAT_03775f25 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<Spectrum_Point>_MoveNext__)
    ;
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_84_0_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstanceMethodCaller<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_543);
    DAT_03775f25 = 1;
  }
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((char)param_1[0x11] == '\0') {
    return;
  }
  if ((char)param_1[5] != '\0') {
    return;
  }
  if (param_2 == 0) goto LAB_01030014;
  uVar2 = FUN_026f2aa0(param_2,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar1);
  }
  uVar3 = FUN_0268b4e0(uVar2,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  lVar4 = FUN_026f2bb4(param_2,0);
  if (lVar4 == 0) goto LAB_01030014;
  FUN_010e58e8(lVar4,&local_38,
               *(undefined8 *)
                Method_Sirenix_Serialization_Utilities_EmitUtilities_CreateWeakInstanceMethodCaller<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__
              );
  lVar4 = local_38;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_0268b4e0(lVar4,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  lVar4 = FUN_026f2aa0(param_2,0);
  if (lVar4 == 0) goto LAB_01030014;
  FUN_010c2e94(lVar4,&local_38,
               *(undefined8 *)
                Method_System_Collections_Generic_List_Enumerator<Spectrum_Point>_MoveNext__);
  lVar4 = local_38;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_0268b5e4(lVar4,0);
  if ((uVar3 & 1) == 0) {
LAB_0102fed4:
    uVar2 = FUN_026f2aa0(param_2,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar1);
    }
    uVar3 = FUN_0268b5e4(uVar2,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    lVar5 = FUN_026f2aa0(param_2,0);
    if (lVar5 == 0) goto LAB_01030014;
    FUN_010c2c5c(lVar5,&local_38,*(undefined8 *)OVRPlugin_OVRP_1_84_0_TypeInfo);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar3 = FUN_0268b5e4(local_38,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
  }
  else {
    if (lVar4 == 0) goto LAB_01030014;
    if (*(char *)(lVar4 + 0xfd) == '\0') goto LAB_0102fed4;
  }
  *(undefined1 *)(param_1 + 5) = 1;
  if (param_1[7] != 0) {
    *(undefined1 *)(param_1[7] + 0x30) = 0;
    puVar1 = Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__;
    if (param_1[3] != 0) {
      FUN_013e0100(param_1[3],param_1,lVar4,*(undefined8 *)StringLiteral_543);
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_03774e19 == '\0') {
      thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
      DAT_03774e19 = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *(long *)puVar1;
    }
    if ((**(long **)(lVar4 + 0xb8) != 0) &&
       (lVar4 = *(long *)(**(long **)(lVar4 + 0xb8) + 0xc0), lVar4 != 0)) {
      FUN_00f054e4(lVar4,0);
      (**(code **)(*param_1 + 0x288))(param_1,*(undefined8 *)(*param_1 + 0x290));
      return;
    }
  }
LAB_01030014:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


