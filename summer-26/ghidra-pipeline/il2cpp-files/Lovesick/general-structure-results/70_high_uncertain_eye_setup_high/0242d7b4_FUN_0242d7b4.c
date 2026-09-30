/*
FUNCTION_NAME: FUN_0242d7b4
ENTRY_POINT: 0242d7b4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0242d7b4(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_03782395 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033f43d8);
    thunk_FUN_00d48444(UnityEngine_InputSystem_Mouse_var);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<Volume>_Dispose__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_86__);
    thunk_FUN_00d48444(StringLiteral_5238);
    thunk_FUN_00d48444(
                      Method_DigitalOpus_MB_Core_PriorityQueue<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>_Peek__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__);
    DAT_03782395 = 1;
  }
  puVar3 = 
  Method_DigitalOpus_MB_Core_PriorityQueue<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>_Peek__
  ;
  puVar2 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
  puVar1 = Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__;
  if (*(int *)(param_1 + 0x10) < param_2) {
    if (0 < *(int *)(param_1 + 0x10)) {
      FUN_0242d9a8(param_1);
    }
    uVar5 = FUN_00da4fb8(*(undefined8 *)puVar3,param_2);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    uVar5 = FUN_00da4fb8(*(undefined8 *)puVar1,param_2);
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    uVar5 = FUN_00da4fb8(*(undefined8 *)puVar2,param_2);
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    FUN_0242d33c(param_1 + 0x30,param_2);
    puVar2 = UnityEngine_InputSystem_Mouse_var;
    puVar1 = PTR_DAT_033f43d8;
    if (*(char *)(param_1 + 0x14) != '\0') {
      if (*(int *)(*(long *)StringLiteral_5238 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar4 = FUN_0111d1d4(*(undefined8 *)puVar2);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar2 = Method_OVRPlugin_<>c_<_cctor>b__796_86__;
      if (lVar6 == 0) {
LAB_0242d9a4:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0269b8c8(lVar6,param_2,uVar4,0);
      *(long *)(param_1 + 0x38) = lVar6;
      uVar4 = FUN_0111d1d4(*(undefined8 *)puVar2);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar2 = Method_System_Collections_Generic_List_Enumerator<Volume>_Dispose__;
      if (lVar6 == 0) goto LAB_0242d9a4;
      FUN_0269b8c8(lVar6,param_2,uVar4,0);
      *(long *)(param_1 + 0x40) = lVar6;
      uVar4 = FUN_0111d1d4(*(undefined8 *)puVar2);
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar6 == 0) goto LAB_0242d9a4;
      FUN_0269b8c8(lVar6,param_2,uVar4,0);
      *(long *)(param_1 + 0x48) = lVar6;
    }
    *(int *)(param_1 + 0x10) = param_2;
  }
  return;
}


