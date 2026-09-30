/*
FUNCTION_NAME: FUN_0525d3f0
ENTRY_POINT: 0525d3f0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0525d3f0(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  ulong uStack_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  ulong local_50;
  long local_48;
  undefined8 local_40;
  long local_38;
  
  if ((DAT_06a523bd & 1) == 0) {
    FUN_02d4dc40(System_Func<InputControlLayout_ControlItem,_bool>_TypeInfo);
    FUN_02d4dc40(Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_TypeInfo);
    FUN_02d4dc40(Unity_XR_CoreUtils_Collections_HashSetList<IXRInteractionGroup>_TypeInfo);
    FUN_02d4dc40(
                System_Collections_Generic_Dictionary<TypeConverterRegistry_ConverterKey,_Delegate>_TypeInfo
                );
    FUN_02d4dc40(System_Func<JsonParser_JsonValue,_string>_TypeInfo);
    FUN_02d4dc40(
                UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_TypeInfo
                );
    FUN_02d4dc40(System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo);
    FUN_02d4dc40(System_Func<OpenXRInteractionFeature_ActionBinding,_IEnumerable<string>>_TypeInfo);
    FUN_02d4dc40(
                UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<RenderGraph_CompiledGraph>>_TypeInfo
                );
    FUN_02d4dc40(
                Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>_TypeInfo
                );
    FUN_02d4dc40(System_Func<OpenXRInteractionFeature_DeviceConfig,_bool>_TypeInfo);
    FUN_02d4dc40(PTR_DAT_06648098);
    FUN_02d4dc40(UnityEngine_Rendering_DynamicArray<IRenderGraphResource>_TypeInfo);
    FUN_02d4dc40(PTR_DAT_066480a8);
    FUN_02d4dc40(PTR_DAT_066480b0);
    DAT_06a523bd = 1;
  }
  local_40 = 0;
  local_38 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  if (*(long *)(param_1 + 0x88) != 0) {
    uVar5 = FUN_047d0100(*(long *)(param_1 + 0x88),param_2,&local_38,
                         *(undefined8 *)
                          Unity_XR_CoreUtils_Collections_HashSetList<IXRInteractionGroup>_TypeInfo);
    if ((uVar5 & 1) == 0) {
      return;
    }
    lVar6 = thunk_FUN_02d8a638(*(undefined8 *)PTR_DAT_066480b0);
    FUN_03610fb4(lVar6,*(undefined8 *)PTR_DAT_066480a8);
    if (local_38 != 0) {
      FUN_0479a870(&local_a0,local_38,
                   *(undefined8 *)System_Func<InputControlLayout_ControlItem,_bool>_TypeInfo);
      puVar3 = System_Func<JsonSerializerInternalReader_CreatorPropertyContext,_bool>_TypeInfo;
      puVar2 = PTR_DAT_06648098;
      puStack_58 = puStack_98;
      local_60 = local_a0;
      local_48 = lStack_88;
      local_50 = uStack_90;
      local_40 = local_80;
      local_a0 = 0;
      puStack_98 = &local_60;
      while (uVar5 = FUN_04a08dd8(&local_60,*(undefined8 *)puVar3), lVar8 = local_48,
            (uVar5 & 1) != 0) {
        if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar7 = *(long *)(local_48 + 0x48);
        uVar4 = (undefined1)local_50;
        uVar5 = local_50 & 0xff;
        if (lVar7 != 0) {
          (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
        }
        FUN_05254740(lVar8);
        if (lVar6 == 0) {
LAB_0525d6a0:
                    /* WARNING: Subroutine does not return */
          FUN_02d4dee8();
        }
        lVar8 = *(long *)(lVar6 + 0x10);
        lVar7 = *(long *)puVar2;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_0525d6a0;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined1 *)(lVar8 + (int)uVar1 + 0x20) = uVar4;
        }
        else {
          FUN_03611844(lVar6,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      FUN_04a08efc(&local_60,*(undefined8 *)System_Func<JsonParser_JsonValue,_string>_TypeInfo);
      if (lVar6 != 0) {
        FUN_036122c4(&local_78,lVar6,
                     *(undefined8 *)
                      UnityEngine_Rendering_DynamicArray<IRenderGraphResource>_TypeInfo);
        puVar3 = Unity_XR_CoreUtils_Collections_HashSetList<IDisposable>_TypeInfo;
        puVar2 = 
        UnityEngine_Rendering_DynamicArray<RenderGraphCompilationCache_HashEntry<CompilerContextData>>_TypeInfo
        ;
        local_a0 = 0;
        puStack_98 = &local_78;
        while( true ) {
          uVar5 = FUN_049b0478(&local_78,*(undefined8 *)puVar2);
          if ((uVar5 & 1) == 0) {
            FUN_049b0474(&local_78,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<TypeConverterRegistry_ConverterKey,_Delegate>_TypeInfo
                        );
            return;
          }
          if (local_38 == 0) break;
          FUN_0479b8e4(local_38,local_68 & 0xff,*(undefined8 *)puVar3);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


