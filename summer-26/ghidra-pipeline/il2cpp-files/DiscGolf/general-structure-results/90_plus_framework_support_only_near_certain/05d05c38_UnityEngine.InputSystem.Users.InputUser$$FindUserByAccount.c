/*
FUNCTION_NAME: UnityEngine.InputSystem.Users.InputUser$$FindUserByAccount
ENTRY_POINT: 05d05c38
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_InputSystem_Users_InputUser__FindUserByAccount
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0xf8) = param_2;
  LeanTween__value((undefined8 *)(unaff_x20 + 0xf8));
  if (0x1c < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)OVRPlugin_OVRP_1_128_0_TypeInfo;
    LeanTween__value(unaff_x19 + 0x100);
    if (0x1d < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x108) =
           *(undefined8 *)UnityWebSocketSharp_PayloadData_<GetEnumerator>d__25_TypeInfo;
      LeanTween__value(unaff_x19 + 0x108);
      if (0x1e < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x110) =
             *(undefined8 *)
              Assets_Scripts_PlayerBehavior_<<CatchCam>g__StartTeleportTimer_29_0>d_TypeInfo;
        LeanTween__value(unaff_x19 + 0x110);
        if ((*(uint *)(unaff_x19 + 0x18) & 0xffffffe0) != 0) {
          *(undefined8 *)(unaff_x19 + 0x118) =
               *(undefined8 *)
                Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass6_0_TypeInfo;
          LeanTween__value(unaff_x19 + 0x118);
          if (0x20 < *(uint *)(unaff_x19 + 0x18)) {
            *(undefined8 *)(unaff_x19 + 0x120) =
                 *(undefined8 *)PauseMenuController_<UpdateSceneSelection>d__34_TypeInfo;
            LeanTween__value(unaff_x19 + 0x120);
            if (0x21 < *(uint *)(unaff_x19 + 0x18)) {
              *(undefined8 *)(unaff_x19 + 0x128) =
                   *(undefined8 *)
                    UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass12_0_TypeInfo
              ;
              LeanTween__value(unaff_x19 + 0x128);
              if (0x22 < *(uint *)(unaff_x19 + 0x18)) {
                *(undefined8 *)(unaff_x19 + 0x130) =
                     *(undefined8 *)System_ParameterizedStrings_LowLevelStack_TypeInfo;
                LeanTween__value(unaff_x19 + 0x130);
                if (0x23 < *(uint *)(unaff_x19 + 0x18)) {
                  *(undefined8 *)(unaff_x19 + 0x138) =
                       *(undefined8 *)
                        Assets_Scripts_PlayerBehavior_<StartNextPlayersTurnInSeconds>d__31_TypeInfo;
                  LeanTween__value(unaff_x19 + 0x138);
                  if (0x24 < *(uint *)(unaff_x19 + 0x18)) {
                    *(undefined8 *)(unaff_x19 + 0x140) =
                         *(undefined8 *)Mono_Security_Cryptography_PKCS8_PrivateKeyInfo_TypeInfo;
                    LeanTween__value(unaff_x19 + 0x140);
                    if (0x25 < *(uint *)(unaff_x19 + 0x18)) {
                      *(undefined8 *)(unaff_x19 + 0x148) =
                           *(undefined8 *)
                            Unity_Services_CloudSave_Internal_PlayerDataService_<>c__DisplayClass9_0_TypeInfo
                      ;
                      LeanTween__value(unaff_x19 + 0x148);
                      if (0x26 < *(uint *)(unaff_x19 + 0x18)) {
                        *(undefined8 *)(unaff_x19 + 0x150) =
                             *(undefined8 *)Method_System_Collections_Generic_HashSet<uint>__ctor__;
                        LeanTween__value(unaff_x19 + 0x150);
                        if (0x27 < *(uint *)(unaff_x19 + 0x18)) {
                          *(undefined8 *)(unaff_x19 + 0x158) =
                               *(undefined8 *)
                                Method_System_Collections_Generic_HashSet<Type>_Remove__;
                          LeanTween__value(unaff_x19 + 0x158);
                          puVar1 = Method_System_Collections_Generic_HashSet<Guid>_Add__;
                          if (0x28 < *(uint *)(unaff_x19 + 0x18)) {
                            *(undefined8 *)(unaff_x19 + 0x160) =
                                 *(undefined8 *)System_IO_Path_<>c_TypeInfo;
                            LeanTween__value(unaff_x19 + 0x160);
                            **(long **)(*(long *)puVar1 + 0xb8) = unaff_x19;
                            LeanTween__value(*(undefined8 *)(*(long *)puVar1 + 0xb8));
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
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


