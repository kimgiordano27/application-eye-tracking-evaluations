/*
FUNCTION_NAME: FUN_05e01004
ENTRY_POINT: 05e01004
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;ray_or_cast_sink_hits_4;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05e01004(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_434 [108];
  undefined1 auStack_3c8 [108];
  undefined1 auStack_35c [108];
  undefined1 auStack_2f0 [108];
  undefined1 auStack_284 [108];
  undefined8 local_218;
  undefined4 local_210;
  undefined1 auStack_1ac [108];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  
  puVar2 = Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__;
  if ((DAT_06bc3de3 & 1) == 0) {
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
                );
    FUN_02f08768(
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<XROcclusionMeshPass_PassData>__
                );
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<RaycastHit2D>__);
    FUN_02f08768(Method_System_Reflection_SignatureType_GetConstructors__);
    FUN_02f08768(Method_System_Data_DataTableCollection_BaseAdd__);
    FUN_02f08768(Method_System_Data_RecordManager_set_MinimumCapacity__);
    FUN_02f08768(Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<InputDevice>__);
    FUN_02f08768(Method_Unity_AppUI_UI_RectField_OnHFieldChanged__);
    FUN_02f08768(Method_System_Reflection_SignatureType_GetCustomAttributes__);
    DAT_06bc3de3 = 1;
  }
  puVar5 = Method_System_Reflection_SignatureType_GetCustomAttributes__;
  puVar4 = Method_System_Reflection_SignatureType_GetConstructors__;
  puVar3 = Method_UnityEngine_NoAllocHelpers_ExtractArrayFromList<RaycastHit2D>__;
  puVar1 = Method_System_Data_DataTableCollection_BaseAdd__;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_05d4c964(param_1,0);
  uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
  FUN_05c5c73c(uVar7,*(undefined8 *)puVar5,0);
  FUN_05d4cbd0(param_1,uVar7,0);
  uVar7 = *(undefined8 *)puVar4;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  uVar7 = thunk_FUN_02f45270(uVar7);
  FUN_05e02b4c(uVar7,0);
  uVar9 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x150) = uVar7;
  *(undefined8 *)(param_1 + 0xb8) = param_8;
  local_210 = 0;
  local_218 = 0;
  FUN_03e20d34(&local_218,param_3,uVar9);
  uVar6 = FUN_060f1c84(param_4,0);
  uStack_128 = 0;
  local_130 = 0;
  uStack_138 = 0;
  local_140 = 0;
  FUN_06124964(&local_140,local_218,local_210,uVar6,0xffffffff,0,0);
  *(undefined8 *)(param_1 + 200) = uStack_138;
  *(undefined8 *)(param_1 + 0xc0) = local_140;
  *(undefined8 *)(param_1 + 0xd8) = uStack_128;
  *(undefined8 *)(param_1 + 0xd0) = local_130;
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_74 = 0;
  uStack_80 = 0;
  FUN_06127030(&local_d0,0,0);
  memcpy((void *)(param_1 + 0xe0),&local_d0,0x6c);
  FUN_06127190(param_1 + 0xe0,param_5,param_6,0);
  FUN_061271a4(param_1 + 0xe0,param_7,0);
  FUN_061271b4(param_1 + 0xe0,8,0);
  puVar2 = 
  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<XROcclusionMeshPass_PassData>__
  ;
  lVar8 = *(long *)
           Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<XROcclusionMeshPass_PassData>__
  ;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar8 = *(long *)puVar2;
  }
  if (*(long *)(*(long *)(lVar8 + 0xb8) + 0x20) == 0) {
    lVar8 = FUN_02f0880c(*(undefined8 *)Method_Unity_AppUI_UI_RectField_OnHFieldChanged__,5);
    lVar10 = *(long *)puVar2;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_02f6670c(lVar10);
      lVar10 = *(long *)puVar2;
    }
    lVar10 = *(long *)(lVar10 + 0xb8);
    *(long *)(lVar10 + 0x20) = lVar8;
    if (lVar8 == 0) goto LAB_05e01528;
    if (*(int *)(lVar8 + 0x18) == 0) goto LAB_05e01524;
    *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)(lVar10 + 8);
    lVar8 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    if (lVar8 == 0) goto LAB_05e01528;
    if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) == 0) goto LAB_05e01524;
    *(undefined4 *)(lVar8 + 0x24) = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc);
    lVar8 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    if (lVar8 == 0) goto LAB_05e01528;
    if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_05e01524;
    *(undefined4 *)(lVar8 + 0x28) = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    lVar8 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    if (lVar8 == 0) goto LAB_05e01528;
    if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) == 0) goto LAB_05e01524;
    *(undefined4 *)(lVar8 + 0x2c) = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x14);
    lVar8 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    if (lVar8 == 0) goto LAB_05e01528;
    if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_05e01524;
    *(undefined4 *)(lVar8 + 0x30) = 0;
    lVar8 = *(long *)puVar2;
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar8 = *(long *)puVar2;
  }
  if (*(long *)(*(long *)(lVar8 + 0xb8) + 0x28) != 0) {
    return;
  }
  lVar8 = FUN_02f0880c(*(undefined8 *)Method_System_Data_RecordManager_set_MinimumCapacity__,5);
  lVar10 = *(long *)puVar2;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_02f6670c(lVar10);
    lVar10 = *(long *)puVar2;
  }
  *(long *)(*(long *)(lVar10 + 0xb8) + 0x28) = lVar8;
  memcpy(&local_d0,(void *)(param_1 + 0xe0),0x6c);
  if (*(int *)(*(long *)
                Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddRasterRenderPass<PostProcessPass_UberPostPassData>__
              + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  memcpy(auStack_1ac,&local_d0,0x6c);
  FUN_05de5fc4(&local_140,auStack_1ac,0x60,0x20,0);
  if (lVar8 == 0) {
LAB_05e01528:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(int *)(lVar8 + 0x18) != 0) {
    memmove((void *)(lVar8 + 0x20),&local_140,0x6c);
    lVar8 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    memcpy(auStack_284,(void *)(param_1 + 0xe0),0x6c);
    FUN_05de5fc4(&local_218,auStack_284,0x60,0x40,0);
    if (lVar8 == 0) goto LAB_05e01528;
    if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
      memmove((void *)(lVar8 + 0x8c),&local_218,0x6c);
      lVar8 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
      memcpy(auStack_35c,(void *)(param_1 + 0xe0),0x6c);
      FUN_05de5fc4(auStack_2f0,auStack_35c,0x60,0,0);
      if (lVar8 == 0) goto LAB_05e01528;
      if (2 < *(uint *)(lVar8 + 0x18)) {
        memmove((void *)(lVar8 + 0xf8),auStack_2f0,0x6c);
        lVar8 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
        memcpy(auStack_434,(void *)(param_1 + 0xe0),0x6c);
        FUN_05de5fc4(auStack_3c8,auStack_434,0x60,0,0);
        if (lVar8 == 0) goto LAB_05e01528;
        if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) != 0) {
          memmove((void *)(lVar8 + 0x164),auStack_3c8,0x6c);
          lVar8 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
          if (lVar8 == 0) goto LAB_05e01528;
          if ((*(uint *)(lVar8 + 0x18) != 0) && (4 < *(uint *)(lVar8 + 0x18))) {
            memcpy((void *)(lVar8 + 0x1d0),(void *)(lVar8 + 0x20),0x6c);
            return;
          }
        }
      }
    }
  }
LAB_05e01524:
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


