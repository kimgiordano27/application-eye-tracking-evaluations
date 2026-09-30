/*
FUNCTION_NAME: FUN_01db02f4
ENTRY_POINT: 01db02f4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01db02f4(undefined8 param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  
  if ((DAT_0377f714 & 1) == 0) {
    thunk_FUN_00d48444(UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo);
    thunk_FUN_00d48444(Method_OVRTask<OVRResult<OVRAnchor_SaveResult>>_GetAwaiter__);
    thunk_FUN_00d48444(StringLiteral_7627);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<InputDevice>_RemoveAt__);
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    DAT_0377f714 = 1;
  }
  puVar3 = StringLiteral_7627;
  if (param_2 != (long *)0x0) {
    if (*(int *)(*(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar4 = (long *)FUN_01ff6bc0(param_2,0);
    lVar6 = *param_2;
    bVar1 = *(byte *)(lVar6 + 300);
    bVar2 = *(byte *)(*(long *)puVar3 + 300);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar3)) {
      bVar2 = *(byte *)(*(long *)Method_System_Collections_Generic_List<InputDevice>_RemoveAt__ +
                       300);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_List<InputDevice>_RemoveAt__)) {
        bVar2 = *(byte *)(*(long *)UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo + 300);
        if ((bVar1 < bVar2) ||
           (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo)) {
          bVar2 = *(byte *)(*(long *)Method_OVRTask<OVRResult<OVRAnchor_SaveResult>>_GetAwaiter__ +
                           300);
          if (bVar1 < bVar2) {
            return;
          }
          if (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)Method_OVRTask<OVRResult<OVRAnchor_SaveResult>>_GetAwaiter__) {
            return;
          }
        }
      }
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    if (0 < (int)plVar4[9]) {
      iVar7 = 0;
      do {
        uVar5 = (**(code **)(*plVar4 + 0x328))(plVar4,iVar7,*(undefined8 *)(*plVar4 + 0x330));
        FUN_01db04a4(param_1,uVar5,param_2,param_3);
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)plVar4[9]);
    }
  }
  return;
}


