/*
FUNCTION_NAME: UnityEngine.UIElements.UIRRepaintUpdater$$OnPanelAtlasChanged
ENTRY_POINT: 07e68650
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_UIElements_UIRRepaintUpdater__OnPanelAtlasChanged(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x27;
  undefined8 uVar9;
  undefined8 *unaff_x28;
  int unaff_w29;
  undefined4 uVar10;
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
    iVar4 = *(int *)(unaff_x25 + 0x40);
    iVar2 = FUN_07e2cafc(unaff_x25,0);
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    iVar3 = FUN_07e2e4b4(unaff_x24,0);
    unaff_x27 = ((unaff_x27 * unaff_x19 ^ (long)iVar3) * unaff_x19 ^ (long)iVar4) * unaff_x19 ^
                (long)iVar2;
    if (*(long *)(unaff_x25 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (0 < *(int *)(*(long *)(unaff_x25 + 0x28) + 0x1c)) {
      FUN_07e68e2c();
    }
    uVar5 = FUN_061cfaf0(&stack0x000000b0,*unaff_x28);
    if ((uVar5 & 1) == 0) break;
    unaff_x24 = in_stack_000000c0;
    unaff_x25 = in_stack_000000d0;
    if (in_stack_000000d0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  FUN_061cfaec(&stack0x000000b0,
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<List<Relationship>>>_Start<RelationshipsApiClient_<GetRelationshipsAsync>d__9>__
              );
  in_stack_000000a8 = *(undefined8 *)(unaff_x22 + 0x268);
  lVar6 = FUN_07e13e44(&stack0x000000a8,0);
  puVar1 = OVRPlugin_OVRP_0_1_2_TypeInfo;
  if (lVar6 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(lVar6 + 0x1f0);
  }
  uVar5 = unaff_x27 * 0x18d ^ (long)iVar4;
  if (unaff_w29 < 1) {
    uVar5 = uVar5 * 0x18d ^ (long)in_stack_00000018;
  }
  else {
    if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_07e689a0;
    iVar4 = FUN_07e32284(*(long *)(unaff_x20 + 0x10),0);
    uVar5 = uVar5 * 0x18d ^ (long)iVar4;
    if (in_stack_00000018 != iVar4) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar7 = FUN_07e666e0(iVar4,&stack0x000000a0);
      if ((uVar7 & 1) == 0) {
        uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
        uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AlignContentProperty_TypeInfo
                                  );
        FUN_07e32068(uVar8,uVar9,0);
        in_stack_000000a0 = uVar8;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07e66770(iVar4,uVar8);
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
      uVar7 = FUN_07e665a0(uVar5,&stack0x00000110);
      if ((uVar7 & 1) == 0) {
        if (lVar6 == 0) {
          if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar8 = FUN_07ea20f8(0);
        }
        else {
          FUN_07dfdfd8(lVar6,0);
          uVar8 = FUN_07dfdfd8(lVar6,0);
        }
        FUN_07f6ecc4(&stack0x00000020,uVar8,0);
        memcpy(&stack0x00000110,&stack0x00000020,0x50);
        in_stack_00000148 = uVar5;
        uVar10 = FUN_07e051cc();
        FUN_04e4ce2c(&stack0x00000070);
        in_stack_00000020 = 0;
        in_stack_00000028 = &stack0x00000070;
        while (uVar7 = FUN_061cfaf0(&stack0x00000070,*unaff_x28), (uVar7 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_07eaead8(uVar10,*(long *)(unaff_x20 + 0x40),in_stack_00000080,in_stack_00000090,
                       *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x18),0);
          FUN_07f6f240(&stack0x00000110,*(undefined8 *)(unaff_x20 + 0x40),uVar8,0);
        }
        FUN_061cfaec(&stack0x00000070,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<List<Relationship>>>_Start<RelationshipsApiClient_<GetRelationshipsAsync>d__9>__
                    );
        FUN_07f69fa8(&stack0x00000110,uVar8,0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07e66630(uVar5,&stack0x00000110);
      }
      memcpy(in_stack_00000010,&stack0x00000110,0x50);
      return;
    }
  }
LAB_07e689a0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


