/*
FUNCTION_NAME: FUN_05bca3dc
ENTRY_POINT: 05bca3dc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined4 FUN_05bca3dc(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_06313630;
  local_34 = param_1;
  if ((DAT_066d5228 & 1) == 0) {
    FUN_02b3c81c(Method_System_Runtime_InteropServices_Marshal_PtrToStructure<Vector2>__);
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonWriter_get_WriteState__);
    FUN_02b3c81c(PTR_DAT_06313630);
    FUN_02b3c81c(Method_System_Runtime_InteropServices_Marshal_PtrToStructure<Vector3>__);
    FUN_02b3c81c(
                Method_System_Runtime_InteropServices_Marshal_PtrToStructure<UnityTls_unitytls_interface_struct>__
                );
    FUN_02b3c81c(Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__);
    FUN_02b3c81c(Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_Mesh>__);
    DAT_066d5228 = 1;
  }
  local_38 = 0;
  local_38 = FUN_05bca650(param_1,param_2,param_3);
  lVar2 = FUN_02b3c908(*(undefined8 *)puVar1,8);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) =
           *(undefined8 *)
            Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_GUID>__;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x20));
      uVar3 = FUN_04d78c14(&local_34,0);
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar2 + 0x28) = uVar3;
        thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x28),uVar3);
        puVar1 = Method_System_Runtime_InteropServices_Marshal_PtrToStructure<Vector2>__;
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) =
               *(undefined8 *)
                Method_System_Runtime_InteropServices_Marshal_PtrToStructure<UnityTls_unitytls_interface_struct>__
          ;
          thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x30));
          local_50 = *(undefined8 *)puVar1;
          uStack_48 = 0xffffffffffffffff;
          local_40 = param_2;
          uVar3 = FUN_04db1580(&local_50,0);
          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar2 + 0x38) = uVar3;
            thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x38),uVar3);
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) =
                   *(undefined8 *)
                    Method_System_Runtime_InteropServices_Marshal_PtrToStructure<OVRPlugin_Mesh>__;
              thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x40));
              uVar3 = FUN_04d98020(param_3,0);
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x48) = uVar3;
                thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x48),uVar3);
                if (6 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x50) =
                       *(undefined8 *)
                        Method_System_Runtime_InteropServices_Marshal_PtrToStructure<Vector3>__;
                  thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x50));
                  uVar3 = FUN_04d78c14(&local_38,0);
                  puVar1 = Method_Newtonsoft_Json_JsonWriter_get_WriteState__;
                  if ((*(uint *)(lVar2 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar2 + 0x58) = uVar3;
                    thunk_FUN_02bb0e9c();
                    uVar3 = FUN_04c0ac30(lVar2,0);
                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44(*(long *)puVar1);
                    }
                    FUN_05bc8818(uVar3);
                    return local_38;
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
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


