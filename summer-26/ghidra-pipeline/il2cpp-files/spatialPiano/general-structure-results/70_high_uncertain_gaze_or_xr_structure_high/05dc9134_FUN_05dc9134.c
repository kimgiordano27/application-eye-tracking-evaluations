/*
FUNCTION_NAME: FUN_05dc9134
ENTRY_POINT: 05dc9134
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void FUN_05dc9134(long param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                 undefined8 param_5)

{
  long *plVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 local_4c [4];
  undefined8 local_48;
  
  puVar2 = Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_CheckNotUsedWhenActive__;
  local_48 = param_2;
  if ((DAT_06bc3c20 & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_CheckNotUsedWhenActive__
                );
    FUN_02f08768(PTR_DAT_067c97a8);
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
    DAT_06bc3c20 = 1;
  }
  lVar6 = *(long *)puVar2;
  local_4c[0] = 0;
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar6 = *(long *)puVar2;
  }
  FUN_05c5cb44(local_4c,**(undefined8 **)(lVar6 + 0xb8),0);
  local_90 = 0;
  puStack_88 = local_4c;
  if (*(long *)(param_1 + 0x228) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar6 = Unity_XR_CoreUtils_XROrigin__RepeatInitializeCamera(*(long *)(param_1 + 0x228),0);
  puVar2 = PTR_DAT_067c97a8;
  if (lVar6 == 0) {
LAB_05dc92c8:
    if (*(long *)(param_1 + 0x228) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar6 = FUN_05e05b6c(*(long *)(param_1 + 0x228),param_4,0);
    *(long *)(param_1 + 0x230) = lVar6;
    *(long *)(param_1 + 0x118) = lVar6;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uStack_168 = *(undefined8 *)(lVar6 + 0x30);
    local_170 = *(undefined8 *)(lVar6 + 0x28);
    uStack_158 = *(undefined8 *)(lVar6 + 0x40);
    uStack_160 = *(undefined8 *)(lVar6 + 0x38);
    local_150 = *(undefined8 *)(lVar6 + 0x48);
    FUN_0611f5d0(param_4,*(undefined8 *)
                          Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_CheckNotUsedWhenExecuting__
                 ,&local_170,0);
    lVar6 = *(long *)(param_1 + 0x230);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uStack_198 = *(undefined8 *)(lVar6 + 0x30);
    local_1a0 = *(undefined8 *)(lVar6 + 0x28);
    uStack_188 = *(undefined8 *)(lVar6 + 0x40);
    uStack_190 = *(undefined8 *)(lVar6 + 0x38);
    local_180 = *(undefined8 *)(lVar6 + 0x48);
    FUN_0611f5d0(param_4,*(undefined8 *)
                          Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddUnsafePass<ScreenSpaceAmbientOcclusionPass_SSAOPassData>__
                 ,&local_1a0,0);
  }
  else {
    if (*(long *)(param_1 + 0x228) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar6 = Unity_XR_CoreUtils_XROrigin__RepeatInitializeCamera(*(long *)(param_1 + 0x228),0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar8 = *(long *)puVar2;
    uStack_b8 = *(undefined8 *)(lVar6 + 0x30);
    local_c0 = *(undefined8 *)(lVar6 + 0x28);
    uStack_a8 = *(undefined8 *)(lVar6 + 0x40);
    uStack_b0 = *(undefined8 *)(lVar6 + 0x38);
    local_a0 = *(undefined8 *)(lVar6 + 0x48);
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar8);
    }
    FUN_0610d14c(&local_e8,2,0);
    local_120 = local_c8;
    uStack_138 = uStack_e0;
    local_140 = local_e8;
    uStack_128 = uStack_d0;
    uStack_130 = uStack_d8;
    local_f0 = local_a0;
    uStack_108 = uStack_b8;
    local_110 = local_c0;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uVar7 = FUN_0610d678(&local_110,&local_140,0);
    if ((uVar7 & 1) != 0) goto LAB_05dc92c8;
  }
  lVar6 = *(long *)(param_1 + 0x248);
  if (lVar6 != 0) {
    uStack_b8 = *(undefined8 *)(lVar6 + 0x30);
    local_c0 = *(undefined8 *)(lVar6 + 0x28);
    uStack_a8 = *(undefined8 *)(lVar6 + 0x40);
    uStack_b0 = *(undefined8 *)(lVar6 + 0x38);
    local_a0 = *(undefined8 *)(lVar6 + 0x48);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_0610d14c(&local_e8,2,0);
    local_1e0 = local_c8;
    uStack_1f8 = uStack_e0;
    local_200 = local_e8;
    uStack_1e8 = uStack_d0;
    uStack_1f0 = uStack_d8;
    local_1b0 = local_a0;
    uStack_1c8 = uStack_b8;
    local_1d0 = local_c0;
    uStack_1b8 = uStack_a8;
    uStack_1c0 = uStack_b0;
    uVar7 = FUN_0610d678(&local_1d0,&local_200,0);
    if ((uVar7 & 1) == 0) goto LAB_05dc95dc;
  }
  uStack_78 = param_3[1];
  local_80 = *param_3;
  uStack_68 = param_3[3];
  local_70 = param_3[2];
  uStack_58 = param_3[5];
  local_60 = param_3[4];
  local_50 = *(undefined4 *)(param_3 + 6);
  FUN_060d7044(&local_80,0,0);
  FUN_060d7060(&local_80,0,0);
  FUN_060d70b8(&local_80,0,0);
  puVar2 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  if ((1 < (int)uStack_78) && (iVar4 = FUN_060fb470(0), iVar4 != 0)) {
    uVar7 = FUN_05dc5d90(param_1,param_5);
    if ((uVar7 & 1) == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar7 = FUN_05dadd80(0);
      if ((uVar7 & 1) == 0) goto LAB_05dc9468;
      bVar3 = *(int *)(param_1 + 0x2b0) != 1;
    }
    else {
LAB_05dc9468:
      bVar3 = true;
    }
    FUN_060d70b8(&local_80,bVar3,0);
  }
  if (*(int *)(*(long *)Method_System_Data_NewDiffgramGen_GenerateColumn__ + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  iVar4 = FUN_060fb038(0);
  if (iVar4 == 0xb) {
    FUN_060d70b8(&local_80,0,0);
  }
  FUN_060d69f4(&local_80,0,0);
  uVar5 = FUN_05dc41e8(param_1);
  uStack_68 = CONCAT44(uVar5,(undefined4)uStack_68);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  plVar1 = (long *)(param_1 + 0x248);
  FUN_05daf224(0,plVar1,&local_80,0,1,1,
               *(undefined8 *)
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_CheckNotUsedWhenRecordingGraph__
               ,0);
  iVar4 = FUN_060fb038(0);
  if (iVar4 == 2) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05daf224(0,(long *)(param_1 + 0x250),&local_80,0,1,1,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_CheckNotUsedWhenRecordPassOrExecute__
                 ,0);
    if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar6 = *(long *)(param_1 + 0x250);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uStack_228 = *(undefined8 *)(lVar6 + 0x30);
    local_230 = *(undefined8 *)(lVar6 + 0x28);
    uStack_218 = *(undefined8 *)(lVar6 + 0x40);
    uStack_220 = *(undefined8 *)(lVar6 + 0x38);
    local_210 = *(undefined8 *)(lVar6 + 0x48);
    FUN_0611f5d0(param_4,*(undefined8 *)(*plVar1 + 0x58),&local_230,0);
  }
  else {
    lVar6 = *plVar1;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uStack_258 = *(undefined8 *)(lVar6 + 0x30);
    local_260 = *(undefined8 *)(lVar6 + 0x28);
    uStack_248 = *(undefined8 *)(lVar6 + 0x40);
    uStack_250 = *(undefined8 *)(lVar6 + 0x38);
    local_240 = *(undefined8 *)(lVar6 + 0x48);
    FUN_0611f5d0(param_4,*(undefined8 *)(lVar6 + 0x58),&local_260,0);
  }
  *(undefined4 *)((long)param_3 + 0x1c) = uStack_68._4_4_;
LAB_05dc95dc:
  FUN_05c5cb50(local_4c,0);
  if (*(int *)(*(long *)PTR_DAT_067cbf10 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_06129b08(&local_48,param_4,0);
  if (param_4 != 0) {
    FUN_06113868(param_4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


