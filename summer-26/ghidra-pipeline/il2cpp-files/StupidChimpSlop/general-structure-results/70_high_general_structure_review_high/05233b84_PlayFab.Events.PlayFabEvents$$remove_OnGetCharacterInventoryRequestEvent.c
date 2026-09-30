/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$remove_OnGetCharacterInventoryRequestEvent
ENTRY_POINT: 05233b84
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void PlayFab_Events_PlayFabEvents__remove_OnGetCharacterInventoryRequestEvent(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  ulong in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined1 uStack0000000000000030;
  
  puVar3 = System_Collections_Generic_Dictionary<XmlQualifiedName,_int>_TypeInfo;
  puVar2 = PTR_DAT_066480b0;
  if ((DAT_06a521ea & 1) == 0) {
    FUN_02d4dc40(
                System_Collections_Generic_Dictionary<TypeConverterRegistry_ConverterKey,_Delegate>_TypeInfo
                );
    FUN_02d4dc40(
                UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_TypeInfo
                );
    FUN_02d4dc40(
                UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<RenderGraph_CompiledGraph>>_TypeInfo
                );
    FUN_02d4dc40(PTR_DAT_06648098);
    FUN_02d4dc40(PTR_DAT_066480a0);
    FUN_02d4dc40(UnityEngine_Rendering_DynamicArray<IRenderGraphResource>_TypeInfo);
    FUN_02d4dc40(PTR_DAT_0665db60);
    FUN_02d4dc40(System_Collections_Generic_Dictionary<XmlQualifiedName,_int>_TypeInfo);
    FUN_02d4dc40(PTR_DAT_066480b0);
                    /* try { // try from 05233c14 to 05333c17 has its CatchHandler @ 05233fc8 */
                    /* try { // try from 05233c18 to 05333c1f has its CatchHandler @ 05233fdc */
    FUN_02d4dc40(PTR_DAT_06647a68);
    DAT_06a521ea = 1;
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = (undefined8 *)0x0;
  _uStack0000000000000030 = 0;
                    /* try { // try from 05233c30 to 05333c53 has its CatchHandler @ 05234088 */
  lVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar2);
  FUN_0361102c(lVar9,0,*(undefined8 *)puVar3);
  puVar7 = 
  UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_TypeInfo
  ;
  puVar6 = 
  System_Collections_Generic_Dictionary<TypeConverterRegistry_ConverterKey,_Delegate>_TypeInfo;
  puVar5 = PTR_DAT_0665db60;
  puVar4 = PTR_DAT_066480a0;
  puVar3 = PTR_DAT_06648098;
  puVar2 = PTR_DAT_06647a68;
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_036122c4(&stack0x00000008,*(long *)(param_1 + 0x30),
                 *(undefined8 *)UnityEngine_Rendering_DynamicArray<IRenderGraphResource>_TypeInfo);
    _uStack0000000000000030 = in_stack_00000018;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000020;
LAB_05233ca8:
    uVar10 = FUN_049b0478(&stack0x00000020,*(undefined8 *)puVar7);
    if ((uVar10 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      uVar8 = uStack0000000000000030;
      uVar15 = _uStack0000000000000030 & 0xff;
      uVar10 = FUN_03611bc4(*(long *)(param_1 + 0x38),uVar15,*(undefined8 *)puVar4);
      if ((uVar10 & 1) == 0) {
        if (lVar9 != 0) {
          lVar13 = *(long *)(lVar9 + 0x10);
          lVar14 = *(long *)puVar3;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar13 != 0) {
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              *(undefined1 *)(lVar13 + (int)uVar1 + 0x20) = uVar8;
            }
            else {
              FUN_03611844(lVar9,uVar15,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_05233ca8;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      goto LAB_05233ca8;
    }
    FUN_049b0474(&stack0x00000020,*(undefined8 *)puVar6);
    if (lVar9 != 0) {
      uVar11 = FUN_036131c4(lVar9,*(undefined8 *)puVar5);
      if (*(long *)(param_1 + 0x38) != 0) {
        uVar12 = FUN_036131c4(*(long *)(param_1 + 0x38),*(undefined8 *)puVar5);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02dabd98(*(long *)puVar2);
        }
        FUN_05226560(uVar11,uVar12,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


