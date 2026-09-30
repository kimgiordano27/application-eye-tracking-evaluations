/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.UI.TrackedDevicePhysicsRaycaster$$SetEventCamera
ENTRY_POINT: 0611f7d0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 117
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_UI_TrackedDevicePhysicsRaycaster__SetEventCamera(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  
  FUN_02d965b8(Method_UnityEngine_GameObject_GetComponent<OVRManager>__);
  FUN_02d965b8(Method_UnityEngine_GameObject_GetComponent<ParentObject>__);
  FUN_02d965b8(
              Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BounceOutLerp_0000034B_PostfixBurstDelegate>__
              );
  FUN_02d965b8(Method_UnityEngine_GameObject_GetComponent<Player>__);
  FUN_02d965b8(Method_UnityEngine_GameObject_GetComponent<OculusRestarter>__);
  *(undefined1 *)(unaff_x25 + 0x67c) = 1;
  puVar1 = PTR_DAT_069fb9d8;
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_0552aca4();
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x22;
  LeanTween__value();
  *(undefined8 *)(unaff_x19 + 0x18) = unaff_x23;
  LeanTween__value();
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x21;
  LeanTween__value();
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_x20;
  LeanTween__value();
  lVar2 = FUN_02d966a4(*(undefined8 *)puVar1,9);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) =
           *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<OVRManager>__;
      LeanTween__value((undefined8 *)(lVar2 + 0x20));
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar2 + 0x28) = unaff_x23;
        LeanTween__value((undefined8 *)(lVar2 + 0x28));
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) =
               *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<OculusRestarter>__;
          LeanTween__value((undefined8 *)(lVar2 + 0x30));
          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar2 + 0x38) = unaff_x22;
            LeanTween__value((undefined8 *)(lVar2 + 0x38));
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) =
                   *(undefined8 *)
                    Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BounceOutLerp_0000034B_PostfixBurstDelegate>__
              ;
              LeanTween__value((undefined8 *)(lVar2 + 0x40));
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x48) = unaff_x21;
                LeanTween__value((undefined8 *)(lVar2 + 0x48));
                if (6 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x50) =
                       *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<Player>__;
                  LeanTween__value((undefined8 *)(lVar2 + 0x50));
                  if ((*(uint *)(lVar2 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar2 + 0x58) = unaff_x20;
                    LeanTween__value((undefined8 *)(lVar2 + 0x58));
                    if (8 < *(uint *)(lVar2 + 0x18)) {
                      *(undefined8 *)(lVar2 + 0x60) =
                           *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<ParentObject>__
                      ;
                      LeanTween__value();
                      uVar3 = FUN_0536dde4(lVar2,0);
                      *(undefined8 *)(unaff_x19 + 0x30) = uVar3;
                      LeanTween__value((undefined8 *)(unaff_x19 + 0x30),uVar3);
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


