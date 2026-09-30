/*
FUNCTION_NAME: UnityEngine.UIElements.TextureId$$.ctor
ENTRY_POINT: 07e686d8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_UIElements_TextureId___ctor(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  long unaff_x22;
  long unaff_x27;
  undefined8 uVar7;
  undefined8 *unaff_x28;
  int unaff_w29;
  undefined4 uVar8;
  void *in_stack_00000010;
  int in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined1 *in_stack_00000028;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined8 uStack00000000000000a8;
  ulong in_stack_00000148;
  
  uStack00000000000000a8 = param_1;
  lVar3 = FUN_07e13e44();
  puVar1 = OVRPlugin_OVRP_0_1_2_TypeInfo;
  if (lVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(lVar3 + 0x1f0);
  }
  uVar6 = unaff_x27 * 0x18d ^ (long)iVar2;
  if (unaff_w29 < 1) {
    uVar6 = uVar6 * 0x18d ^ (long)in_stack_00000018;
  }
  else {
    if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_07e689a0;
    iVar2 = FUN_07e32284(*(long *)(unaff_x20 + 0x10),0);
    uVar6 = uVar6 * 0x18d ^ (long)iVar2;
    if (in_stack_00000018 != iVar2) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      uVar4 = FUN_07e666e0(iVar2,&stack0x000000a0);
      if ((uVar4 & 1) == 0) {
        uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
        uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                                    UnityEngine_UIElements_ResolvedStyleAccessPropertyBag_AlignContentProperty_TypeInfo
                                  );
        FUN_07e32068(uVar5,uVar7,0);
        in_stack_000000a0 = uVar5;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07e66770(iVar2,uVar5);
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
      uVar4 = FUN_07e665a0(uVar6,&stack0x00000110);
      if ((uVar4 & 1) == 0) {
        if (lVar3 == 0) {
          if (*(int *)(*(long *)OVRPlugin_OverlayShape_TypeInfo + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar5 = FUN_07ea20f8(0);
        }
        else {
          FUN_07dfdfd8(lVar3,0);
          uVar5 = FUN_07dfdfd8(lVar3,0);
        }
        FUN_07f6ecc4(&stack0x00000020,uVar5,0);
        memcpy(&stack0x00000110,&stack0x00000020,0x50);
        in_stack_00000148 = uVar6;
        uVar8 = FUN_07e051cc();
        FUN_04e4ce2c(&stack0x00000070);
        in_stack_00000020 = 0;
        in_stack_00000028 = &stack0x00000070;
        while (uVar4 = FUN_061cfaf0(&stack0x00000070,*unaff_x28), (uVar4 & 1) != 0) {
          if (*(long *)(unaff_x20 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          if (*(long *)(unaff_x20 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c0();
          }
          FUN_07eaead8(uVar8,*(long *)(unaff_x20 + 0x40),in_stack_00000080,in_stack_00000090,
                       *(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 0x18),0);
          FUN_07f6f240(&stack0x00000110,*(undefined8 *)(unaff_x20 + 0x40),uVar5,0);
        }
        FUN_061cfaec(&stack0x00000070,
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<List<Relationship>>>_Start<RelationshipsApiClient_<GetRelationshipsAsync>d__9>__
                    );
        FUN_07f69fa8(&stack0x00000110,uVar5,0);
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


