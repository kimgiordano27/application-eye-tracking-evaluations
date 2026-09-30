/*
FUNCTION_NAME: FUN_05dcceb0
ENTRY_POINT: 05dcceb0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05dcceb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,long param_6,long param_7,byte param_8,byte param_9)

{
  bool bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  byte local_c8 [4];
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined1 local_b4;
  undefined2 local_b3;
  undefined1 local_b1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  if ((DAT_06bc3c42 & 1) == 0) {
    FUN_02f08768(Method_System_Resources_NeutralResourcesLanguageAttribute__ctor__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_System_Data_NewDiffgramGen_GenerateColumn__);
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_CheckNotUsedWhenRecordingGraph__
                );
    DAT_06bc3c42 = 1;
  }
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  if ((*(long *)(param_5 + 0x138) != 0) &&
     (lVar10 = FUN_05d4c208(*(long *)(param_5 + 0x138),
                            *(undefined8 *)
                             Method_System_Resources_NeutralResourcesLanguageAttribute__ctor__),
     puVar3 = 
     Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
     , param_7 != 0)) {
    uStack_98 = *(undefined8 *)(param_7 + 0x110);
    local_a0 = *(undefined8 *)(param_7 + 0x108);
    uStack_88 = *(undefined8 *)(param_7 + 0x120);
    local_90 = *(undefined8 *)(param_7 + 0x118);
    local_80 = *(undefined4 *)(param_7 + 0x128);
    uStack_a8 = *(undefined8 *)(param_7 + 0x100);
    local_b0 = *(undefined8 *)(param_7 + 0xf8);
    uVar2 = *(undefined1 *)(param_7 + 0x1e0);
    FUN_060d7044(&local_b0,0,0);
    FUN_060d7060(&local_b0,0,0);
    iVar8 = (int)uStack_a8;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar11 = FUN_05dadd80(0);
    puVar4 = Method_System_Data_NewDiffgramGen_GenerateColumn__;
    if ((uVar11 & 1) == 0) {
      bVar6 = true;
    }
    else {
      if (param_6 == 0) goto LAB_05dcd178;
      bVar6 = *(char *)(param_6 + 0x18) == '\0';
    }
    bVar1 = false;
    if (1 < iVar8) {
      bVar1 = bVar6;
    }
    FUN_060d70b8(&local_b0,bVar1,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    iVar8 = FUN_060fb038(0);
    if (iVar8 == 0xb) {
      FUN_060d70b8(&local_b0,0,0);
    }
    FUN_060d69f4(&local_b0,0,0);
    uVar9 = FUN_05dc41e8(param_5);
    uStack_98 = CONCAT44(uVar9,(undefined4)uStack_98);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)puVar4);
    }
    puVar5 = 
    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_CheckNotUsedWhenRecordingGraph__;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    FUN_05daf224(0,*(long *)(*(long *)puVar4 + 0xb8) + 0x10,&local_b0,0,1,1,*(undefined8 *)puVar5,0)
    ;
    if (param_6 != 0) {
      local_c8[0] = param_8 & 1;
      local_c8[1] = 0;
      local_c8[2] = 0;
      local_c8[3] = 0;
      local_b3 = 0;
      local_b1 = 0;
      local_c4 = param_1;
      uStack_c0 = param_2;
      local_bc = param_3;
      uStack_b8 = param_4;
      local_b4 = uVar2;
      auVar13 = FUN_05cc63e4(param_6,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10),
                             local_c8,0);
      if (lVar10 != 0) {
        FUN_05d6e064(lVar10,auVar13._0_8_,auVar13._8_8_,0);
        lVar12 = *(long *)(param_5 + 0x1b0);
        *(undefined4 *)(lVar10 + 0x18) = 0;
        if (lVar12 != 0) {
          *(byte *)(lVar12 + 0xcc) = param_9 & 1;
          *(int *)(lVar12 + 200) = (int)uStack_a8;
          bVar7 = FUN_060d70ac(&local_b0,0);
          if (*(long *)(param_5 + 0x1b0) != 0) {
            lVar10 = *(long *)(param_5 + 0x1f0);
            bVar7 = (bVar7 ^ 0xff) & 1;
            *(byte *)(*(long *)(param_5 + 0x1b0) + 0xd8) = bVar7;
            if (lVar10 != 0) {
              *(byte *)(lVar10 + 0xd8) = bVar7;
              return;
            }
          }
        }
      }
    }
  }
LAB_05dcd178:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


