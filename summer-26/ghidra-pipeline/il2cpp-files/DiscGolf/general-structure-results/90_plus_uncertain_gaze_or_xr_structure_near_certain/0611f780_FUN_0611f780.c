/*
FUNCTION_NAME: FUN_0611f780
ENTRY_POINT: 0611f780
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 113
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0611f780(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = Method_UnityEngine_GameObject_GetComponent<NetworkObject>__;
                    /* try { // try from 0611f7b4 to 0621f7e3 has its CatchHandler @ 0611f600 */
  if ((DAT_06dc667c & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_GameObject_GetComponent<NetworkObject>__);
    FUN_02d965b8(PTR_DAT_069fb9d8);
    FUN_02d965b8(Method_UnityEngine_GameObject_GetComponent<OVRManager>__);
    FUN_02d965b8(Method_UnityEngine_GameObject_GetComponent<ParentObject>__);
    FUN_02d965b8(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BounceOutLerp_0000034B_PostfixBurstDelegate>__
                );
    FUN_02d965b8(Method_UnityEngine_GameObject_GetComponent<Player>__);
    FUN_02d965b8(Method_UnityEngine_GameObject_GetComponent<OculusRestarter>__);
    DAT_06dc667c = 1;
  }
  puVar1 = PTR_DAT_069fb9d8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_0552aca4(param_1,0);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  LeanTween__value((undefined8 *)(param_1 + 0x10),param_2);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  LeanTween__value((undefined8 *)(param_1 + 0x18),param_3);
  *(undefined8 *)(param_1 + 0x20) = param_4;
  LeanTween__value((undefined8 *)(param_1 + 0x20),param_4);
  *(undefined8 *)(param_1 + 0x28) = param_5;
  LeanTween__value((undefined8 *)(param_1 + 0x28),param_5);
  lVar3 = FUN_02d966a4(*(undefined8 *)puVar1,9);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) =
           *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<OVRManager>__;
      LeanTween__value((undefined8 *)(lVar3 + 0x20));
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar3 + 0x28) = param_3;
        LeanTween__value((undefined8 *)(lVar3 + 0x28),param_3);
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) =
               *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<OculusRestarter>__;
          LeanTween__value((undefined8 *)(lVar3 + 0x30));
          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar3 + 0x38) = param_2;
            LeanTween__value((undefined8 *)(lVar3 + 0x38),param_2);
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) =
                   *(undefined8 *)
                    Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BounceOutLerp_0000034B_PostfixBurstDelegate>__
              ;
              LeanTween__value((undefined8 *)(lVar3 + 0x40));
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x48) = param_4;
                LeanTween__value((undefined8 *)(lVar3 + 0x48),param_4);
                if (6 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x50) =
                       *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<Player>__;
                  LeanTween__value((undefined8 *)(lVar3 + 0x50));
                  if ((*(uint *)(lVar3 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar3 + 0x58) = param_5;
                    LeanTween__value((undefined8 *)(lVar3 + 0x58),param_5);
                    if (8 < *(uint *)(lVar3 + 0x18)) {
                      *(undefined8 *)(lVar3 + 0x60) =
                           *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<ParentObject>__
                      ;
                      LeanTween__value();
                      uVar4 = FUN_0536dde4(lVar3,0);
                      *(undefined8 *)(param_1 + 0x30) = uVar4;
                      LeanTween__value((undefined8 *)(param_1 + 0x30),uVar4);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


