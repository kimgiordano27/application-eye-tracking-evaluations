/*
FUNCTION_NAME: UnityEngine.Rendering.RenderGraphModule.RenderGraph$$PostRenderPassExecute
ENTRY_POINT: 0340aaa4
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;foveation_rendering;keyword_support
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;strong_foveation_hits_1;eye_or_gaze_keyword_boost_only;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_foveated_rendering
*/


void UnityEngine_Rendering_RenderGraphModule_RenderGraph__PostRenderPassExecute
               (long param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined8 local_140;
  undefined8 *puStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  ulong local_120;
  undefined8 local_118;
  undefined8 *puStack_110;
  ulong local_108;
  undefined8 uStack_100;
  ulong local_f8;
  undefined8 local_f0;
  undefined8 *puStack_e8;
  undefined8 local_e0;
  undefined8 *puStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  ulong local_a0;
  undefined8 local_90;
  undefined8 *puStack_88;
  ulong local_80;
  undefined8 uStack_78;
  ulong local_70;
  
  if ((DAT_03ef58cc & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_Rendering_CommandBufferPool_TypeInfo_03cd29f8);
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<ValueTuple<TextureHandle,_int>>_Dispose___03cd6680
                );
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List_Enumerator<int>_Dispose___03cb7118);
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List_Enumerator<int>_MoveNext___03cb7120);
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<ValueTuple<TextureHandle,_int>>_MoveNext___03cd6688
                );
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List_Enumerator<int>_get_Current___03cb7128);
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List_Enumerator<ValueTuple<TextureHandle,_int>>_get_Current___03cd6690
                );
    FUN_01c5c92c(PTR_Method_System_Collections_Generic_List<int>_GetEnumerator___03cb7130);
    FUN_01c5c92c(
                PTR_Method_System_Collections_Generic_List<ValueTuple<TextureHandle,_int>>_GetEnumerator___03cd6698
                );
    FUN_01c5c92c(PTR_UnityEngine_Rendering_ScriptableRenderContext_TypeInfo_03cd6388);
    FUN_01c5c92c(PTR_UnityEngine_Rendering_RenderGraphModule_TextureHandle_TypeInfo_03cd2968);
    DAT_03ef58cc = 1;
  }
  puVar4 = 
  PTR_Method_System_Collections_Generic_List_Enumerator<ValueTuple<TextureHandle,_int>>_MoveNext___03cd6688
  ;
  puVar3 = PTR_UnityEngine_Rendering_RenderGraphModule_TextureHandle_TypeInfo_03cd2968;
  puVar2 = PTR_Method_System_Collections_Generic_List_Enumerator<int>_MoveNext___03cb7120;
  puVar1 = PTR_Method_System_Collections_Generic_List_Enumerator<int>_Dispose___03cb7118;
  local_70 = 0;
  local_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  if ((param_3 == 0) || (*(long *)(param_3 + 0x98) == 0)) goto LAB_0340ae38;
  System_Collections_Generic_List<ValueTuple<TextureHandle,_int>>__GetEnumerator
            (&local_e0,*(long *)(param_3 + 0x98),
             *(undefined8 *)
              PTR_Method_System_Collections_Generic_List<ValueTuple<TextureHandle,_int>>_GetEnumerator___03cd6698
            );
  local_70 = local_c0;
  puStack_e8 = &local_90;
  puStack_88 = puStack_d8;
  local_90 = local_e0;
  uStack_78 = uStack_c8;
  local_80 = local_d0;
  local_f0 = 0;
  while (uVar6 = System_Collections_Generic_List_Enumerator<ValueTuple<TextureHandle,_int>>__MoveNext
                           (&local_90,*(undefined8 *)puVar4), uVar5 = local_70, uVar9 = uStack_78,
        uVar7 = local_80, (uVar6 & 1) != 0) {
    if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    lVar10 = *(long *)(param_4 + 0x18);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_01cb0d4c();
    }
    UnityEngine_Rendering_RenderGraphModule_TextureHandle__op_Implicit(&local_118,uVar7,uVar9,0);
    puStack_d8 = puStack_110;
    local_e0 = local_118;
    uStack_c8 = uStack_100;
    local_d0 = local_108;
    local_c0 = local_f8;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5cbd4();
    }
    local_120 = local_f8;
    puStack_138 = puStack_110;
    local_140 = local_118;
    uStack_128 = uStack_100;
    uStack_130 = local_108;
    UnityEngine_Rendering_CommandBuffer__SetGlobalTexture(lVar10,uVar5 & 0xffffffff,&local_140,0);
  }
  System_Collections_Generic_List_Enumerator<ValueTuple<TextureHandle,_int>>__Dispose
            (&local_90,
             *(undefined8 *)
              PTR_Method_System_Collections_Generic_List_Enumerator<ValueTuple<TextureHandle,_int>>_Dispose___03cd6680
            );
  puVar3 = PTR_Method_System_Collections_Generic_List<int>_GetEnumerator___03cb7130;
  if (*(char *)(param_2 + 0x3e) == '\0') {
    if (*(char *)(param_2 + 0x3c) != '\0') {
      if (param_4 == 0) goto LAB_0340ae38;
LAB_0340acac:
      uVar9 = *(undefined8 *)(param_4 + 0x18);
      if (*(int *)(*(long *)PTR_UnityEngine_Rendering_ScriptableRenderContext_TypeInfo_03cd6388 +
                  0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      UnityEngine_Rendering_ScriptableRenderContext__ExecuteCommandBufferAsync
                (param_4 + 0x10,uVar9,1,0);
      uVar9 = *(undefined8 *)(param_4 + 0x18);
      if (*(int *)(*(long *)PTR_UnityEngine_Rendering_CommandBufferPool_TypeInfo_03cd29f8 + 0xe4) ==
          0) {
        thunk_FUN_01cb0d4c();
      }
      UnityEngine_Rendering_CommandBufferPool__Release(uVar9,0);
      *(undefined8 *)(param_4 + 0x18) = *(undefined8 *)(param_1 + 0x70);
      thunk_FUN_01cc8040(param_4 + 0x18);
    }
  }
  else {
    if ((param_4 == 0) || (*(long *)(param_4 + 0x18) == 0)) goto LAB_0340ae38;
    auVar11 = UnityEngine_Rendering_CommandBuffer__CreateAsyncGraphicsFence
                        (*(long *)(param_4 + 0x18),0);
    *(undefined1 (*) [16])(param_2 + 0x20) = auVar11;
    if (*(char *)(param_2 + 0x3c) != '\0') goto LAB_0340acac;
  }
  if (*(char *)(param_2 + 0x42) != '\0') {
    if ((param_4 == 0) || (*(long *)(param_4 + 0x18) == 0)) goto LAB_0340ae38;
    UnityEngine_Rendering_CommandBuffer__SetFoveatedRenderingMode(*(long *)(param_4 + 0x18),0,0);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    UnityEngine_Rendering_RenderGraphModule_RenderGraphObjectPool__ReleaseAllTempAlloc
              (*(long *)(param_1 + 0x28),0);
    uVar8 = 0;
    while (lVar10 = *(long *)(param_2 + 0x18), lVar10 != 0) {
      if (*(uint *)(lVar10 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbdc();
      }
      lVar10 = *(long *)(lVar10 + (ulong)uVar8 * 8 + 0x20);
      if (lVar10 == 0) break;
      System_Collections_Generic_List<int>__GetEnumerator(&local_e0,lVar10,*(undefined8 *)puVar3);
      local_b0 = local_e0;
      local_e0 = 0;
      puStack_a8 = puStack_d8;
      local_a0 = local_d0;
      puStack_d8 = &local_b0;
      while (uVar7 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                               (&local_b0,*(undefined8 *)puVar2), (uVar7 & 1) != 0) {
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5cbd4();
        }
        UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry__ReleasePooledResource
                  (*(long *)(param_1 + 0x20),param_4,uVar8,local_a0 & 0xffffffff,0);
      }
      System_Collections_Generic_List_Enumerator<int>__Dispose(&local_b0,*(undefined8 *)puVar1);
      uVar8 = uVar8 + 1;
      if (uVar8 == 3) {
        return;
      }
    }
  }
LAB_0340ae38:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbd4();
}


