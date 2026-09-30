/*
FUNCTION_NAME: FUN_014c45d4
ENTRY_POINT: 014c45d4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_014c45d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  
  puVar1 = Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_op_Implicit__;
  if ((DAT_03776e3c & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Events_InvokableCall<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>_Invoke__
                      );
    thunk_FUN_00d48444(Method_System_IO_BinaryReader_ReadString__);
    thunk_FUN_00d48444(StringLiteral_9275);
    thunk_FUN_00d48444(Method_OVRNativeList<OVRPlugin_DynamicObjectClass>_op_Implicit__);
    DAT_03776e3c = 1;
  }
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    FUN_017b46ec(lVar2,0);
    *(long *)(lVar2 + 0x10) = param_1;
    *(undefined8 *)(lVar2 + 0x18) = param_2;
    FUN_014c4904();
    plVar7 = *(long **)(param_1 + 0x18);
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar8 = *(undefined8 *)(lVar2 + 0x18);
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              *(long *)
               Method_UnityEngine_Events_InvokableCall<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>_Invoke__
             ) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_014c46c4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_00d59724(plVar7,*(long *)
                                    Method_UnityEngine_Events_InvokableCall<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>_Invoke__
                            ,1);
LAB_014c46c4:
                    /* WARNING: Could not recover jumptable at 0x014c46dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar7,uVar8,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


