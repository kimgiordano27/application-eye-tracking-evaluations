/*
FUNCTION_NAME: FUN_06462d78
ENTRY_POINT: 06462d78
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_06462d78(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  
  if ((DAT_06dcce74 & 1) == 0) {
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_InputActionAsset_<GetEnumerator>d__32_System_Collections_IEnumerator_Reset__
                );
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_InputActionAsset_<get_bindings>d__9_System_Collections_IEnumerator_Reset__
                );
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputActionMap_ReadFileJson_ToMaps__);
    FUN_02d965b8(Method_System_Net_HttpWebRequest_<GetResponseFromData>d__244_MoveNext__);
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_InputActionRebindingExtensions_RebindingOperation_ThrowIfRebindInProgress__
                );
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_InputActionRebindingExtensions_<>c__DisplayClass25_0_<GetBindingDisplayString>b__0__
                );
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputAction_CallbackContext_ReadValue<float>__);
    DAT_06dcce74 = 1;
  }
  puVar6 = 
  Method_UnityEngine_InputSystem_InputActionRebindingExtensions_RebindingOperation_ThrowIfRebindInProgress__
  ;
  puVar5 = 
  Method_UnityEngine_InputSystem_InputActionRebindingExtensions_<>c__DisplayClass25_0_<GetBindingDisplayString>b__0__
  ;
  puVar4 = 
  Method_UnityEngine_InputSystem_InputActionAsset_<get_bindings>d__9_System_Collections_IEnumerator_Reset__
  ;
  puVar3 = 
  Method_UnityEngine_InputSystem_InputActionAsset_<GetEnumerator>d__32_System_Collections_IEnumerator_Reset__
  ;
  puVar2 = Method_UnityEngine_InputSystem_InputAction_CallbackContext_ReadValue<float>__;
  puVar1 = Method_System_Net_HttpWebRequest_<GetResponseFromData>d__244_MoveNext__;
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_03c23590(&local_a0,*(long *)(param_1 + 0x48),
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_InputActionRebindingExtensions_<>c__DisplayClass25_0_<GetBindingDisplayString>b__0__
                );
    local_60 = local_90;
    puStack_68 = puStack_98;
    local_70 = local_a0;
    local_a0 = 0;
    puStack_98 = &local_70;
    while (uVar8 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<uint,_uint>__Dispose
                             (&local_70,*(undefined8 *)puVar4), uVar7 = local_60, (uVar8 & 1) != 0)
    {
      lVar9 = FUN_06462678(uVar8,local_60);
      if (lVar9 != 0) {
        if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_03c23c0c(*(long *)(param_1 + 0x40),uVar7,*(undefined8 *)puVar1);
      }
    }
    FUN_05156050(&local_70,*(undefined8 *)puVar3);
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_03c230bc(*(long *)(param_1 + 0x48),*(undefined8 *)puVar6);
      if (*(long *)(param_1 + 0x50) != 0) {
        FUN_03c23590(&local_88,*(long *)(param_1 + 0x50),*(undefined8 *)puVar5);
        local_a0 = 0;
        puStack_98 = &local_88;
        while (uVar8 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<uint,_uint>__Dispose
                                 (&local_88,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
          if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_03c232ec(*(long *)(param_1 + 0x40),local_78,*(undefined8 *)puVar2);
        }
        FUN_05156050(&local_88,*(undefined8 *)puVar3);
        if (*(long *)(param_1 + 0x50) != 0) {
          FUN_03c230bc(*(long *)(param_1 + 0x50),*(undefined8 *)puVar6);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


