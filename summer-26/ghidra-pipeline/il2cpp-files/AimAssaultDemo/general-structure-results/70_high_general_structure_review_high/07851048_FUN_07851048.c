/*
FUNCTION_NAME: FUN_07851048
ENTRY_POINT: 07851048
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void FUN_07851048(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_228 [152];
  undefined1 auStack_190 [152];
  undefined1 auStack_f8 [152];
  int local_54;
  
  puVar3 = PTR_DAT_07d95b20;
  if ((DAT_0827261a & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d95b20);
    FUN_0373b518(System_Collections_Generic_Dictionary<ulong,_NetworkObject>_TypeInfo);
    FUN_0373b518(
                Method_Unity_Properties_ContainerPropertyBag<BackgroundPosition>_AddProperty<Length>__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_fsData>_Dispose__
                );
    FUN_0373b518(PTR_DAT_07d86c58);
    FUN_0373b518(PTR_DAT_07dd6df0);
    FUN_0373b518(PTR_DAT_07d86c48);
    FUN_0373b518(Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<TriangulationPoint>_set_Item__);
    FUN_0373b518(
                Method_System_Collections_Generic_HashSet_Enumerator<ParameterExpression>_get_Current__
                );
    FUN_0373b518(PTR_DAT_07d97e68);
    FUN_0373b518(PTR_DAT_07da1cb8);
    FUN_0373b518(
                Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<LoadAudit>_Clear__
                );
    FUN_0373b518(
                Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<LoadAudit>_get_Item__
                );
    FUN_0373b518(
                UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<FocusExitEventArgs>_TypeInfo
                );
    FUN_0373b518(
                Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>_Add__
                );
    DAT_0827261a = 1;
  }
  puVar6 = 
  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<NativePassAttachment>_Add__
  ;
  puVar5 = 
  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<LoadAudit>_get_Item__
  ;
  puVar4 = 
  Method_UnityEngine_Rendering_RenderGraphModule_NativeRenderPassCompiler_FixedAttachmentArray<LoadAudit>_Clear__
  ;
  puVar11 = 
  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_fsData>_Dispose__;
  puVar9 = Method_Unity_Properties_ContainerPropertyBag<BackgroundPosition>_AddProperty<Length>__;
  local_54 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  puVar12 = Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<TriangulationPoint>_set_Item__;
  puVar10 = Method_System_Collections_Generic_HashSet_Enumerator<ParameterExpression>_get_Current__;
  puVar8 = 
  UnityEngine_XR_Interaction_Toolkit_Utilities_Pooling_LinkedPool<FocusExitEventArgs>_TypeInfo;
  puVar7 = System_Collections_Generic_Dictionary<ulong,_NetworkObject>_TypeInfo;
  puVar3 = PTR_DAT_07d97e68;
  FUN_07769d80(auStack_190,*(undefined8 *)puVar5,0);
  memcpy(auStack_f8,auStack_190,0x98);
  memcpy(*(void **)(*(long *)puVar11 + 0xb8),auStack_f8,0x98);
  thunk_FUN_037aeb94(*(long *)(*(long *)puVar11 + 0xb8) + 8,0);
  FUN_07769d80(auStack_228,*(undefined8 *)puVar4,0);
  memcpy(auStack_190,auStack_228,0x98);
  lVar17 = *(long *)puVar11;
  memcpy((void *)(*(long *)(lVar17 + 0xb8) + 0x98),auStack_190,0x98);
  thunk_FUN_037aeb94(*(long *)(lVar17 + 0xb8) + 0xa0,0);
  lVar17 = *(long *)(*(long *)puVar11 + 0xb8);
  *(undefined8 *)(lVar17 + 0x130) = *(undefined8 *)puVar6;
  thunk_FUN_037aeb94(lVar17 + 0x130);
  lVar17 = *(long *)puVar9;
  if (*(int *)(lVar17 + 0xe4) == 0) {
    thunk_FUN_03798b70();
    lVar17 = *(long *)puVar9;
  }
  uVar13 = FUN_060c1bcc(*(undefined8 *)(*(long *)(lVar17 + 0xb8) + 0x1c8),*(undefined8 *)puVar3,
                        *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x130),
                        *(undefined8 *)puVar10,0);
  lVar17 = *(long *)(*(long *)puVar11 + 0xb8);
  *(undefined8 *)(lVar17 + 0x138) = uVar13;
  thunk_FUN_037aeb94(lVar17 + 0x138);
  uVar13 = FUN_0754d124(*(undefined8 *)puVar8,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x148) = uVar13;
  uVar13 = FUN_0754d124(*(undefined8 *)puVar12,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x150) = uVar13;
  lVar17 = thunk_FUN_037788cc(*(undefined8 *)puVar7);
  FUN_075fed98(lVar17,0);
  if (lVar17 != 0) {
    FUN_075fe4f0(lVar17,8,0);
    lVar15 = *(long *)(*(long *)puVar11 + 0xb8);
    *(long *)(lVar15 + 0x158) = lVar17;
    thunk_FUN_037aeb94(lVar15 + 0x158,lVar17);
    lVar17 = thunk_FUN_037788cc(*(undefined8 *)puVar7);
    FUN_075fed98(lVar17,0);
    if (lVar17 != 0) {
      FUN_075fe4f0(lVar17,8,0);
      lVar15 = *(long *)(*(long *)puVar11 + 0xb8);
      *(long *)(lVar15 + 0x160) = lVar17;
      thunk_FUN_037aeb94(lVar15 + 0x160,lVar17);
      lVar17 = thunk_FUN_037788cc(*(undefined8 *)puVar7);
      FUN_075fed98(lVar17,0);
      puVar6 = PTR_DAT_07dd6df0;
      puVar5 = PTR_DAT_07da1cb8;
      puVar4 = PTR_DAT_07d86c58;
      puVar3 = PTR_DAT_07d86c48;
      if (lVar17 != 0) {
        FUN_075fe4f0(lVar17,8,0);
        lVar15 = *(long *)(*(long *)puVar11 + 0xb8);
        *(long *)(lVar15 + 0x168) = lVar17;
        thunk_FUN_037aeb94(lVar15 + 0x168,lVar17);
        iVar1 = *(int *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x208);
        uVar13 = thunk_FUN_037788cc(*(undefined8 *)puVar3);
        FUN_049ce730(uVar13,iVar1 + 1,*(undefined8 *)puVar6);
        lVar17 = *(long *)(*(long *)puVar11 + 0xb8);
        *(undefined8 *)(lVar17 + 0x140) = uVar13;
        thunk_FUN_037aeb94(lVar17 + 0x140,uVar13);
        local_54 = 0;
        while( true ) {
          iVar1 = local_54;
          lVar17 = *(long *)puVar9;
          if (*(int *)(lVar17 + 0xe4) == 0) {
            thunk_FUN_03798b70();
            lVar17 = *(long *)puVar9;
          }
          uVar13 = *(undefined8 *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x138);
          lVar15 = *(long *)(*(long *)(*(long *)puVar11 + 0xb8) + 0x140);
          if (*(int *)(*(long *)(lVar17 + 0xb8) + 0x208) < iVar1) break;
          uVar14 = FUN_06240534(&local_54,0);
          uVar13 = System_Convert__ToInt32(uVar13,uVar14,0);
          if (lVar15 == 0) goto LAB_07851540;
          lVar17 = *(long *)(lVar15 + 0x10);
          lVar16 = *(long *)puVar4;
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          if (lVar17 == 0) goto LAB_07851540;
          uVar2 = *(uint *)(lVar15 + 0x18);
          if (uVar2 < *(uint *)(lVar17 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = uVar13;
            thunk_FUN_037aeb94();
          }
          else {
            FUN_049ceef4(lVar15,uVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          local_54 = local_54 + 1;
        }
        uVar13 = System_Convert__ToInt32(uVar13,*(undefined8 *)puVar5,0);
        if (lVar15 != 0) {
          lVar17 = *(long *)(lVar15 + 0x10);
          lVar16 = *(long *)puVar4;
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          if (lVar17 != 0) {
            uVar2 = *(uint *)(lVar15 + 0x18);
            if (uVar2 < *(uint *)(lVar17 + 0x18)) {
              *(uint *)(lVar15 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar17 + (long)(int)uVar2 * 8 + 0x20) = uVar13;
              thunk_FUN_037aeb94();
            }
            else {
              FUN_049ceef4(lVar15,uVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
            return;
          }
        }
      }
    }
  }
LAB_07851540:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


