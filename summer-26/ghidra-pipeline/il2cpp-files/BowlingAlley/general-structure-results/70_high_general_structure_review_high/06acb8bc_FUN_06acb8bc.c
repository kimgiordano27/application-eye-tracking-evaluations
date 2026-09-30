/*
FUNCTION_NAME: FUN_06acb8bc
ENTRY_POINT: 06acb8bc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_4
*/


void FUN_06acb8bc(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_40;
  
  if ((DAT_076e31cf & 1) == 0) {
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Events_UnityEvent<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>_Invoke__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Events_UnityEvent<OvrAvatarEntity,_CAPI_ovrAvatar2LoadRequestInfo>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Events_UnityEvent<OvrAvatarEntity,_CAPI_ovrAvatar2LoadRequestInfo>_Invoke__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Events_UnityEvent<OvrAvatarEntity,_OvrAvatarManager_Side>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Events_UnityEvent<OvrAvatarEntity,_OvrAvatarManager_Side>_AddListener__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_Events_UnityEvent<OvrAvatarEntity,_OvrAvatarManager_Side>_Invoke__
                      );
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<float,_float>__ctor__);
    thunk_FUN_032e1da0(Method_UnityEngine_Events_UnityEvent<float,_float>_Invoke__);
    thunk_FUN_032e1da0(PTR_DAT_0727ad30);
    DAT_076e31cf = 1;
  }
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_48 = (long *)0x0;
  local_50 = 0;
  if (*param_2 != 0) {
    FUN_050f8c98(*param_2,*(undefined8 *)
                           Method_UnityEngine_Events_UnityEvent<OvrAvatarEntity,_CAPI_ovrAvatar2LoadRequestInfo>__ctor__
                );
    puVar5 = 
    Method_UnityEngine_Events_UnityEvent<OvrAvatarEntity,_OvrAvatarManager_Side>_AddListener__;
    puVar4 = Method_UnityEngine_Events_UnityEvent<OvrAvatarEntity,_OvrAvatarManager_Side>__ctor__;
    puVar3 = 
    Method_UnityEngine_Events_UnityEvent<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>_Invoke__
    ;
    puVar2 = PTR_DAT_0727ad30;
    if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_050f8f40(&local_60,*(long *)(param_1 + 0x88),
                 *(undefined8 *)
                  Method_UnityEngine_Events_UnityEvent<OvrAvatarEntity,_CAPI_ovrAvatar2LoadRequestInfo>_Invoke__
                );
    while (uVar6 = FUN_05391a64(&local_60,*(undefined8 *)puVar5), (uVar6 & 1) != 0) {
      if (local_48 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if ((bVar1 <= *(byte *)(*local_48 + 0x130)) &&
           (*(long *)(*(long *)(*local_48 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar2)) {
          if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          FUN_050f8b10(*param_2,local_50,local_48,*(undefined8 *)puVar3);
        }
      }
    }
    FUN_05391b84(&local_60,*(undefined8 *)puVar4);
  }
  return;
}


