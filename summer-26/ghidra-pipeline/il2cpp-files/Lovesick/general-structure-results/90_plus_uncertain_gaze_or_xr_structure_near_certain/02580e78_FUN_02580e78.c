/*
FUNCTION_NAME: FUN_02580e78
ENTRY_POINT: 02580e78
PROGRAM: Lovesick-libil2cpp.so
SCORE: 117
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_02580e78(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  
  puVar1 = System_Collections_Generic_List<fsData>_TypeInfo;
  if ((DAT_03782ec6 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<fsData>_TypeInfo);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_80__);
    thunk_FUN_00d48444(StringLiteral_1914);
    thunk_FUN_00d48444(StringLiteral_9671);
    thunk_FUN_00d48444(Method_System_Net_CookieContainer_GetCookieHeader__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_flushedCount__
                      );
    DAT_03782ec6 = 1;
  }
  lVar2 = thunk_FUN_00d6225c(param_2,*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    *(int *)(param_1 + 0x280) = *(int *)(param_1 + 0x280) + 1;
  }
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_80__;
  if (param_2 != (long *)0x0) {
    lVar2 = *param_2;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)Method_OVRPlugin_<>c_<_cctor>b__796_80__) {
          puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto UnityEngine_GL__GLClear;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_00d59724(param_2,*(long *)Method_OVRPlugin_<>c_<_cctor>b__796_80__,1)
    ;
UnityEngine_GL__GLClear:
    (*(code *)*puVar3)(param_2,param_1,puVar3[1]);
    lVar2 = FUN_0257aad8(param_1);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) == 0) {
        return;
      }
      lVar2 = *param_2;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_02580fec;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar1,2);
LAB_02580fec:
      (*(code *)*puVar3)(param_2,param_1,puVar3[1]);
      lVar2 = *(long *)(param_1 + 0x268);
      if (lVar2 == 0) {
        lVar2 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_flushedCount__
                                  );
        if (lVar2 == 0) goto UnityEngine_GL__Viewport;
        FUN_01320e50(lVar2,*(undefined8 *)StringLiteral_9671);
        *(long *)(param_1 + 0x268) = lVar2;
      }
      FUN_00cc3e84(lVar2,param_2,*(undefined8 *)StringLiteral_1914);
      return;
    }
  }
UnityEngine_GL__Viewport:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


