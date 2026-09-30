/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController$$get_enableTouchscreenGestureInputController
ENTRY_POINT: 06b6573c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


undefined4
UnityEngine_XR_Interaction_Toolkit_XRScreenSpaceController__get_enableTouchscreenGestureInputController
          (void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *unaff_x19;
  int unaff_w20;
  undefined4 uVar9;
  int unaff_w23;
  long *unaff_x27;
  long in_stack_00000028;
  undefined8 in_stack_000002a0;
  
  uVar2 = FUN_05c7e0d4();
  lVar3 = FUN_03f2bfc8(uVar2,*(undefined8 *)
                              UnityEngine_XR_ARFoundation_ARSessionStateChangedEventArgs_var);
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = FUN_06e5ba28(lVar3,0,0);
  if ((uVar4 & 1) == 0) {
    FUN_06b22964(lVar3,0);
    if (unaff_w20 == 0 && unaff_w23 == 0) {
      if (lVar3 == 0) {
LAB_06b660ac:
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      *(undefined8 *)(in_stack_00000028 + 0x118) = *(undefined8 *)(lVar3 + 0x88);
      thunk_FUN_0329bf60(in_stack_00000028 + 0x118);
      lVar5 = *unaff_x27;
      uVar2 = *(undefined8 *)(in_stack_00000028 + 0x118);
      if (*(int *)(lVar5 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar5 = *unaff_x27;
      }
      uVar1 = FUN_06b23334(uVar2,lVar3,*(long *)(lVar5 + 0xb8),
                           *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8),0);
      *(uint *)(in_stack_00000028 + 0x120) = uVar1;
      lVar5 = **(long **)(*unaff_x27 + 0xb8);
      if (lVar5 == 0) goto LAB_06b660ac;
      if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_06b66050;
      uVar2 = *(undefined8 *)System_Action_var;
      plVar7 = *(long **)(*unaff_x27 + 0xb8) + 2;
    }
    else {
      if (unaff_w23 != 0x313400cb) goto LAB_06b661f4;
      uVar4 = FUN_06b230d4(unaff_w20,&stack0x000002a0,0);
      if ((uVar4 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_07635df0 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        uVar2 = FUN_06b81888(0);
        lVar5 = *unaff_x27;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(lVar5);
          lVar5 = *unaff_x27;
        }
        lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x90);
        if (lVar8 == 0) goto LAB_06b660ac;
        if (*(uint *)(lVar8 + 0x18) < 2) {
LAB_06b66050:
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        uVar6 = FUN_05c8ecbc(0,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x88),
                             *(undefined4 *)(lVar8 + 0x44),*(undefined4 *)(lVar8 + 0x48),0);
        uVar2 = FUN_05c7e0d4(uVar2,uVar6,0);
        uVar2 = FUN_03f2bfc8(uVar2,*(undefined8 *)
                                    UnityEngine_XR_ARFoundation_ARRaycastUpdatedEventArgs_var);
        if (*(int *)(*unaff_x19 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*unaff_x19);
        }
        uVar4 = FUN_06e5ba28(uVar2,0,0);
        if ((uVar4 & 1) != 0) goto LAB_06b661f4;
        FUN_06b22c98(unaff_w20,uVar2,0);
        *(undefined8 *)(in_stack_00000028 + 0x118) = uVar2;
        thunk_FUN_0329bf60(in_stack_00000028 + 0x118);
        lVar5 = *unaff_x27;
        uVar2 = *(undefined8 *)(in_stack_00000028 + 0x118);
        if (*(int *)(lVar5 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar5 = *unaff_x27;
        }
        uVar1 = FUN_06b23334(uVar2,lVar3,*(long *)(lVar5 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8),0);
        *(uint *)(in_stack_00000028 + 0x120) = uVar1;
        lVar5 = **(long **)(*unaff_x27 + 0xb8);
        if (lVar5 == 0) goto LAB_06b660ac;
        if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_06b66050;
        uVar2 = *(undefined8 *)System_Action_var;
        plVar7 = *(long **)(*unaff_x27 + 0xb8) + 2;
      }
      else {
        *(undefined8 *)(in_stack_00000028 + 0x118) = in_stack_000002a0;
        thunk_FUN_0329bf60(in_stack_00000028 + 0x118);
        lVar5 = *unaff_x27;
        uVar2 = *(undefined8 *)(in_stack_00000028 + 0x118);
        if (*(int *)(lVar5 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
          lVar5 = *unaff_x27;
        }
        uVar1 = FUN_06b23334(uVar2,lVar3,*(long *)(lVar5 + 0xb8),
                             *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8),0);
        *(uint *)(in_stack_00000028 + 0x120) = uVar1;
        lVar5 = **(long **)(*unaff_x27 + 0xb8);
        if (lVar5 == 0) goto LAB_06b660ac;
        if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_06b66050;
        uVar2 = *(undefined8 *)System_Action_var;
        plVar7 = *(long **)(*unaff_x27 + 0xb8) + 2;
      }
    }
    FUN_050ad840(plVar7,&stack0x000002c0,uVar2);
    *(long *)(in_stack_00000028 + 0x100) = lVar3;
    thunk_FUN_0329bf60(in_stack_00000028 + 0x100);
    uVar9 = 1;
  }
  else {
LAB_06b661f4:
    uVar9 = 0;
  }
  return uVar9;
}


