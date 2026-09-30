/*
FUNCTION_NAME: UnityEngine.InputSystem.Utilities.TypeTable$$get_names
ENTRY_POINT: 059affd0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 160
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


void UnityEngine_InputSystem_Utilities_TypeTable__get_names(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *unaff_x19;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  if ((param_1 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cd868);
    FUN_02f08768(PTR_DAT_067cd870);
    FUN_02f08768(PTR_DAT_067cd878);
    FUN_02f08768(Method_Unity_Collections_NativeArray<BatchMaterialID>_Dispose__);
    FUN_02f08768(Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_get_Count__)
    ;
    FUN_02f08768(PTR_DAT_067cd880);
    FUN_02f08768(Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_Clear__);
    FUN_02f08768(PTR_DAT_067cd888);
    FUN_02f08768(PTR_DAT_067cd890);
    FUN_02f08768(Method_UnityEngine_UIElements_MouseEventBase<WheelEvent>_set_mousePosition__);
    FUN_02f08768(
                Method_UnityEngine_UIElements_MouseEventBase<WheelEvent>_set_recomputeTopElementUnderMouse__
                );
    FUN_02f08768(Method_OVRMeshJobs_NativeArrayHelper<short>__ctor__);
    FUN_02f08768(Method_Unity_Collections_NativeArray<BatchMaterialID>_op_Implicit__);
    FUN_02f08768(Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__);
    FUN_02f08768(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__ctor__);
    FUN_02f08768(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>_Dispose__);
    *(undefined1 *)(unaff_x20 + 0xbf8) = 1;
  }
  puVar2 = PTR_DAT_067cd870;
  puVar1 = PTR_DAT_067cd868;
  uVar6 = *unaff_x19;
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar6 = FUN_050e4454(uVar6,0);
  lVar4 = FUN_02f0880c(*(undefined8 *)puVar2,6);
  lVar7 = *(long *)puVar1;
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    FUN_02f41ef8(lVar7);
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02f41e9c();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  puVar3 = Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_get_Count__;
  puVar2 = Method_System_Collections_Generic_List<OVRSpatialAnchor_UnboundAnchor>_Clear__;
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_02f41e9c();
  }
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  UnityEngine_UIElements_Panel__GetUpdater
            (&stack0x000000a0,*(undefined8 *)puVar2,*(undefined8 *)puVar3,0,
             **(undefined8 **)(lVar5 + 0xb8),0);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar4 + 0x20) = in_stack_000000a0;
      *(undefined8 *)(lVar4 + 0x38) = in_stack_000000b8;
      *(undefined8 *)(lVar4 + 0x30) = in_stack_000000b0;
      lVar7 = *(long *)puVar1;
      lVar5 = *(long *)(lVar7 + 0x38);
      if (lVar5 == 0) {
        FUN_02f41ef8(lVar7);
        lVar5 = *(long *)(lVar7 + 0x38);
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02f41e9c();
      }
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      puVar3 = Method_OVRMeshJobs_NativeArrayHelper<short>_Dispose__;
      puVar2 = PTR_DAT_067cd880;
      lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02f41e9c();
      }
      in_stack_00000088 = 0;
      in_stack_00000080 = 0;
      in_stack_00000098 = 0;
      in_stack_00000090 = 0;
      UnityEngine_UIElements_Panel__GetUpdater
                (&stack0x00000080,*(undefined8 *)puVar3,*(undefined8 *)puVar2,0,
                 **(undefined8 **)(lVar5 + 0xb8),0);
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar4 + 0x48) = in_stack_00000088;
        *(undefined8 *)(lVar4 + 0x40) = in_stack_00000080;
        *(undefined8 *)(lVar4 + 0x58) = in_stack_00000098;
        *(undefined8 *)(lVar4 + 0x50) = in_stack_00000090;
        lVar7 = *(long *)puVar1;
        lVar5 = *(long *)(lVar7 + 0x38);
        if (lVar5 == 0) {
          FUN_02f41ef8(lVar7);
          lVar5 = *(long *)(lVar7 + 0x38);
        }
        lVar5 = *(long *)(lVar5 + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02f41e9c();
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        puVar3 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>_Dispose__;
        puVar2 = PTR_DAT_067cd890;
        lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_02f41e9c();
        }
        in_stack_00000068 = 0;
        in_stack_00000060 = 0;
        in_stack_00000078 = 0;
        in_stack_00000070 = 0;
        UnityEngine_UIElements_Panel__GetUpdater
                  (&stack0x00000060,*(undefined8 *)puVar3,*(undefined8 *)puVar2,0,
                   **(undefined8 **)(lVar5 + 0xb8),0);
        if (2 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x68) = in_stack_00000068;
          *(undefined8 *)(lVar4 + 0x60) = in_stack_00000060;
          *(undefined8 *)(lVar4 + 0x78) = in_stack_00000078;
          *(undefined8 *)(lVar4 + 0x70) = in_stack_00000070;
          lVar7 = *(long *)puVar1;
          lVar5 = *(long *)(lVar7 + 0x38);
          if (lVar5 == 0) {
            FUN_02f41ef8(lVar7);
            lVar5 = *(long *)(lVar7 + 0x38);
          }
          lVar5 = *(long *)(lVar5 + 0x10);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02f41e9c();
          }
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          puVar3 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__ctor__;
          puVar2 = 
          Method_UnityEngine_UIElements_MouseEventBase<WheelEvent>_set_recomputeTopElementUnderMouse__
          ;
          lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_02f41e9c();
          }
          in_stack_00000048 = 0;
          in_stack_00000040 = 0;
          in_stack_00000058 = 0;
          in_stack_00000050 = 0;
          UnityEngine_UIElements_Panel__GetUpdater
                    (&stack0x00000040,*(undefined8 *)puVar3,*(undefined8 *)puVar2,0,
                     **(undefined8 **)(lVar5 + 0xb8),0);
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar4 + 0x88) = in_stack_00000048;
            *(undefined8 *)(lVar4 + 0x80) = in_stack_00000040;
            *(undefined8 *)(lVar4 + 0x98) = in_stack_00000058;
            *(undefined8 *)(lVar4 + 0x90) = in_stack_00000050;
            lVar7 = *(long *)puVar1;
            lVar5 = *(long *)(lVar7 + 0x38);
            if (lVar5 == 0) {
              FUN_02f41ef8(lVar7);
              lVar5 = *(long *)(lVar7 + 0x38);
            }
            lVar5 = *(long *)(lVar5 + 0x10);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_02f41e9c();
            }
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02f6670c();
            }
            puVar3 = Method_OVRMeshJobs_NativeArrayHelper<short>__ctor__;
            puVar2 = Method_UnityEngine_UIElements_MouseEventBase<WheelEvent>_set_mousePosition__;
            lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_02f41e9c();
            }
            in_stack_00000028 = 0;
            in_stack_00000020 = 0;
            in_stack_00000038 = 0;
            in_stack_00000030 = 0;
            UnityEngine_UIElements_Panel__GetUpdater
                      (&stack0x00000020,*(undefined8 *)puVar2,*(undefined8 *)puVar3,0,
                       **(undefined8 **)(lVar5 + 0xb8),0);
            if (4 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0xa8) = in_stack_00000028;
              *(undefined8 *)(lVar4 + 0xa0) = in_stack_00000020;
              *(undefined8 *)(lVar4 + 0xb8) = in_stack_00000038;
              *(undefined8 *)(lVar4 + 0xb0) = in_stack_00000030;
              lVar7 = *(long *)puVar1;
              lVar5 = *(long *)(lVar7 + 0x38);
              if (lVar5 == 0) {
                FUN_02f41ef8(lVar7);
                lVar5 = *(long *)(lVar7 + 0x38);
              }
              lVar5 = *(long *)(lVar5 + 0x10);
              if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_02f41e9c();
              }
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              if ((*(ushort *)(*(long *)(*(long *)(lVar7 + 0x38) + 0x10) + 0x135) & 1) == 0) {
                FUN_02f41e9c();
              }
              UnityEngine_UIElements_Panel__GetUpdater();
              puVar1 = PTR_DAT_067cd878;
              if (5 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 200) = 0;
                *(undefined8 *)(lVar4 + 0xc0) = 0;
                *(undefined8 *)(lVar4 + 0xd8) = 0;
                *(undefined8 *)(lVar4 + 0xd0) = 0;
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                FUN_0628cda4(uVar6,lVar4,0);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


