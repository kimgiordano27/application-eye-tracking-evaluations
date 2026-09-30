/*
FUNCTION_NAME: UnityEngine.UIElements.UIRRepaintUpdater$$Dispose
ENTRY_POINT: 07e686a0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_UIElements_UIRRepaintUpdater__Dispose(void)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  ulong unaff_x27;
  undefined8 uVar10;
  undefined8 *unaff_x28;
  int unaff_w29;
  undefined4 uVar11;
  void *in_stack_00000010;
  int in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined1 *in_stack_00000028;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long in_stack_000000c0;
  long in_stack_000000d0;
  ulong in_stack_00000148;
  
  while( true ) {
    if (0 < in_w8) {
      FUN_07e68e2c();
    }
    uVar6 = FUN_061cfaf0(&stack0x000000b0,*unaff_x28);
    lVar2 = in_stack_000000d0;
    lVar7 = in_stack_000000c0;
    if ((uVar6 & 1) == 0) break;
    if (in_stack_000000d0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    iVar5 = *(int *)(in_stack_000000d0 + 0x40);
    iVar3 = FUN_07e2cafc(in_stack_000000d0,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    iVar4 = FUN_07e2e4b4(lVar7,0);
    unaff_x27 = ((unaff_x27 * unaff_x19 ^ (long)iVar4) * unaff_x19 ^ (long)iVar5) * unaff_x19 ^
                (long)iVar3;
    if (*(long *)(lVar2 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_w8 = *(int *)(*(long *)(lVar2 + 0x28) + 0x1c);
  }
                    /* try { // try from 07e686b8 to 07f686bf has its CatchHandler @ 07e69098 */
  FUN_061cfaec(&stack0x000000b0,
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<List<Relationship>>>_Start<RelationshipsApiClient_<GetRelationshipsAsync>d__9>__
              );
  in_stack_000000a8 = *(undefined8 *)(unaff_x22 + 0x268);
  lVar7 = FUN_07e13e44(&stack0x000000a8,0);
  puVar1 = OVRPlugin_OVRP_0_1_2_TypeInfo;
  if (lVar7 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(lVar7 + 0x1f0);
  }
  uVar6 = unaff_x27 * 0x18d ^ (long)iVar5;
  if (unaff_w29 < 1) {
    uVar6 = uVar6 * 0x18d ^ (long)in_stack_00000018;
  }
  else {
    if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_07e689a0;
    iVar5 = FUN_07e32284(*(long *)(unaff_x20 + 0x10),0);
    uVar6 = uVar6 * 0x18d ^ (long)iVar5;
    if (in_stack_00000018 != iVar5) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar8 = FUN_07e666e0(iVar5,&stack0x000000a0);
      if ((uVar8 & 1) == 0) {
        uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
        uVar9 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AlignContentProperty_TypeInfo
                                  );
        FUN_07e32068(uVar9,uVar10,0);
        in_stack_000000a0 = uVar9;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07e66770(iVar5,uVar9);
      }
      if (*(long *)(unaff_x20 + 0x38) == 0) goto LAB_07e689a0;
      *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x18) = in_stack_000000a0;
      thunk_FUN_03afed3c();
    }
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(undefined8 *)(unaff_x22 + 0x1e8) = *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    thunk_FUN_03afed3c(unaff_x22 + 0x1e8);
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      FUN_07e31eb4(*(long *)(unaff_x20 + 0x10),0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar8 = FUN_07e665a0(uVar6,&stack0x00000110);
      if ((uVar8 & 1) == 0) {
        if (lVar7 == 0) {
          if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar9 = FUN_07ea20f8(0);
        }
        else {
          FUN_07dfdfd8(lVar7,0);
          uVar9 = FUN_07dfdfd8(lVar7,0);
        }
        FUN_07f6ecc4(&stack0x00000020,uVar9,0);
        memcpy(&stack0x00000110,&stack0x00000020,0x50);
        in_stack_00000148 = uVar6;
        uVar11 = FUN_07e051cc();
        FUN_04e4ce2c(&stack0x00000070);
        in_stack_00000020 = 0;
        in_stack_00000028 = &stack0x00000070;
        while (uVar8 = FUN_061cfaf0(&stack0x00000070,*unaff_x28), (uVar8 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_07eaead8(uVar11,*(long *)(unaff_x20 + 0x40),in_stack_00000080,in_stack_00000090,
                       *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x18),0);
          FUN_07f6f240(&stack0x00000110,*(undefined8 *)(unaff_x20 + 0x40),uVar9,0);
        }
        FUN_061cfaec(&stack0x00000070,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<List<Relationship>>>_Start<RelationshipsApiClient_<GetRelationshipsAsync>d__9>__
                    );
        FUN_07f69fa8(&stack0x00000110,uVar9,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07e66630(uVar6,&stack0x00000110);
      }
      memcpy(in_stack_00000010,&stack0x00000110,0x50);
      return;
    }
  }
LAB_07e689a0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


