/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.MutableRuntimeReferenceImageLibrary$$IsTextureFormatSupported
ENTRY_POINT: 05dc9188
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_17;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_ARSubsystems_MutableRuntimeReferenceImageLibrary__IsTextureFormatSupported(void)

{
  long *plVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001d0;
  undefined1 *in_stack_000001d8;
  undefined8 in_stack_000001e0;
  int iStack00000000000001e8;
  
  FUN_02f08768(
              Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
              );
  FUN_02f08768(PTR_DAT_067cbf10);
  FUN_02f08768(Method_System_Data_NewDiffgramGen_GenerateColumn__);
  FUN_02f08768(
              Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_CheckNotUsedWhenExecuting__
              );
  FUN_02f08768(
              Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ScreenSpaceAmbientOcclusionPass_SSAOPassData>__
              );
  FUN_02f08768(
              Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_CheckNotUsedWhenRecordPassOrExecute__
              );
  FUN_02f08768(
              Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_CheckNotUsedWhenRecordingGraph__
              );
  *(undefined1 *)(unaff_x24 + 0xc20) = 1;
  lVar6 = *unaff_x23;
  _iStack00000000000001e8 = 0;
  in_stack_000001e0 = 0;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar6 = *unaff_x23;
  }
  FUN_05c5cb44(&stack0x00000214,**(undefined8 **)(lVar6 + 0xb8),0);
  in_stack_000001d0 = 0;
  in_stack_000001d8 = &stack0x00000214;
  if (*(long *)(unaff_x21 + 0x228) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar6 = Unity_XR_CoreUtils_XROrigin__RepeatInitializeCamera(*(long *)(unaff_x21 + 0x228),0);
  puVar2 = PTR_DAT_067c97a8;
  if (lVar6 == 0) {
LAB_05dc92c8:
    if (*(long *)(unaff_x21 + 0x228) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar6 = FUN_05e05b6c();
    *(long *)(unaff_x21 + 0x230) = lVar6;
    *(long *)(unaff_x21 + 0x118) = lVar6;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    in_stack_000000f8 = *(undefined8 *)(lVar6 + 0x30);
    in_stack_000000f0 = *(undefined8 *)(lVar6 + 0x28);
    in_stack_00000108 = *(undefined8 *)(lVar6 + 0x40);
    in_stack_00000100 = *(undefined8 *)(lVar6 + 0x38);
    in_stack_00000110 = *(undefined8 *)(lVar6 + 0x48);
    FUN_0611f5d0();
    lVar6 = *(long *)(unaff_x21 + 0x230);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    in_stack_000000c8 = *(undefined8 *)(lVar6 + 0x30);
    in_stack_000000c0 = *(undefined8 *)(lVar6 + 0x28);
    in_stack_000000d8 = *(undefined8 *)(lVar6 + 0x40);
    in_stack_000000d0 = *(undefined8 *)(lVar6 + 0x38);
    in_stack_000000e0 = *(undefined8 *)(lVar6 + 0x48);
    FUN_0611f5d0();
  }
  else {
    if (*(long *)(unaff_x21 + 0x228) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar6 = Unity_XR_CoreUtils_XROrigin__RepeatInitializeCamera(*(long *)(unaff_x21 + 0x228),0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar8 = *(long *)puVar2;
    in_stack_000001a8 = *(undefined8 *)(lVar6 + 0x30);
    in_stack_000001a0 = *(undefined8 *)(lVar6 + 0x28);
    in_stack_000001b8 = *(undefined8 *)(lVar6 + 0x40);
    in_stack_000001b0 = *(undefined8 *)(lVar6 + 0x38);
    in_stack_000001c0 = *(undefined8 *)(lVar6 + 0x48);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar8);
    }
    FUN_0610d14c(&stack0x00000178,2,0);
    in_stack_00000140 = in_stack_00000198;
    in_stack_00000128 = in_stack_00000180;
    in_stack_00000120 = in_stack_00000178;
    in_stack_00000138 = in_stack_00000190;
    in_stack_00000130 = in_stack_00000188;
    in_stack_00000170 = in_stack_000001c0;
    in_stack_00000158 = in_stack_000001a8;
    in_stack_00000150 = in_stack_000001a0;
    in_stack_00000168 = in_stack_000001b8;
    in_stack_00000160 = in_stack_000001b0;
    uVar7 = FUN_0610d678(&stack0x00000150,&stack0x00000120,0);
    if ((uVar7 & 1) != 0) goto LAB_05dc92c8;
  }
  lVar6 = *(long *)(unaff_x21 + 0x248);
  if (lVar6 != 0) {
    in_stack_000001a8 = *(undefined8 *)(lVar6 + 0x30);
    in_stack_000001a0 = *(undefined8 *)(lVar6 + 0x28);
    in_stack_000001b8 = *(undefined8 *)(lVar6 + 0x40);
    in_stack_000001b0 = *(undefined8 *)(lVar6 + 0x38);
    in_stack_000001c0 = *(undefined8 *)(lVar6 + 0x48);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_0610d14c(&stack0x00000178,2,0);
    in_stack_00000080 = in_stack_00000198;
    in_stack_00000068 = in_stack_00000180;
    in_stack_00000060 = in_stack_00000178;
    in_stack_00000078 = in_stack_00000190;
    in_stack_00000070 = in_stack_00000188;
    in_stack_000000b0 = in_stack_000001c0;
    in_stack_00000098 = in_stack_000001a8;
    in_stack_00000090 = in_stack_000001a0;
    in_stack_000000a8 = in_stack_000001b8;
    in_stack_000000a0 = in_stack_000001b0;
    uVar7 = FUN_0610d678(&stack0x00000090,&stack0x00000060,0);
    if ((uVar7 & 1) == 0) goto LAB_05dc95dc;
  }
  _iStack00000000000001e8 = unaff_x20[1];
  in_stack_000001e0 = *unaff_x20;
  FUN_060d7044(&stack0x000001e0,0,0);
  FUN_060d7060(&stack0x000001e0,0,0);
  FUN_060d70b8(&stack0x000001e0,0,0);
  puVar2 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  if ((1 < iStack00000000000001e8) && (iVar4 = FUN_060fb470(0), iVar4 != 0)) {
    uVar7 = FUN_05dc5d90();
    if ((uVar7 & 1) == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar7 = FUN_05dadd80(0);
      if ((uVar7 & 1) == 0) goto LAB_05dc9468;
      bVar3 = *(int *)(unaff_x21 + 0x2b0) != 1;
    }
    else {
LAB_05dc9468:
      bVar3 = true;
    }
    FUN_060d70b8(&stack0x000001e0,bVar3,0);
  }
  if (*(int *)(*(long *)Method_System_Data_NewDiffgramGen_GenerateColumn__ + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  iVar4 = FUN_060fb038(0);
  if (iVar4 == 0xb) {
    FUN_060d70b8(&stack0x000001e0,0,0);
  }
  FUN_060d69f4(&stack0x000001e0,0,0);
  uVar5 = FUN_05dc41e8();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  plVar1 = (long *)(unaff_x21 + 0x248);
  FUN_05daf224(0,plVar1,&stack0x000001e0,0,1,1,
               *(undefined8 *)
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_CheckNotUsedWhenRecordingGraph__
               ,0);
  iVar4 = FUN_060fb038(0);
  if (iVar4 == 2) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05daf224(0,(long *)(unaff_x21 + 0x250),&stack0x000001e0,0,1,1,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_CheckNotUsedWhenRecordPassOrExecute__
                 ,0);
    if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (*(long *)(unaff_x21 + 0x250) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_0611f5d0();
  }
  else {
    if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_0611f5d0();
  }
  *(undefined4 *)((long)unaff_x20 + 0x1c) = uVar5;
LAB_05dc95dc:
  FUN_05c5cb50(&stack0x00000214,0);
  if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_06129b08(&stack0x00000218);
  if (unaff_x19 != 0) {
    FUN_06113868();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


