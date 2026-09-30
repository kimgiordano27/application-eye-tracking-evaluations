/*
FUNCTION_NAME: UnityEngine.Rendering.ShadowDrawingSettings$$Equals
ENTRY_POINT: 05bca474
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 UnityEngine_Rendering_ShadowDrawingSettings__Equals(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x22;
  undefined4 uStack0000000000000018;
  
  uStack0000000000000018 = 0;
  uStack0000000000000018 = FUN_05bca650();
  lVar2 = FUN_02b3c908(*unaff_x22,8);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(lVar2 + 0x20) =
         *(undefined8 *)
          Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x20));
    uVar3 = FUN_04d78c14(&stack0x0000001c,0);
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar2 + 0x28) = uVar3;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x28),uVar3);
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) =
             *(undefined8 *)
              Method_System_Runtime_InteropServices_Marshal_PtrToStructure<UnityTls_unitytls_interface_struct>__
        ;
        thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x30));
        uVar3 = FUN_04db1580();
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar2 + 0x38) = uVar3;
          thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x38),uVar3);
          if (4 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x40) =
                 *(undefined8 *)
                  Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_Mesh>__;
            thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x40));
            uVar3 = FUN_04d98020();
            if (5 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x48) = uVar3;
              thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x48),uVar3);
              if (6 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x50) =
                     *(undefined8 *)
                      Method_System_Runtime_InteropServices_Marshal_PtrToStructure<Vector3>__;
                thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x50));
                uVar3 = FUN_04d78c14(&stack0x00000018,0);
                puVar1 = Method_Newtonsoft_Json_JsonWriter_get_WriteState__;
                if ((*(uint *)(lVar2 + 0x18) & 0xfffffff8) != 0) {
                  *(undefined8 *)(lVar2 + 0x58) = uVar3;
                  thunk_FUN_02bb0e9c();
                  uVar3 = FUN_04c0ac30(lVar2,0);
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44(*(long *)puVar1);
                  }
                  FUN_05bc8818(uVar3);
                  return uStack0000000000000018;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


