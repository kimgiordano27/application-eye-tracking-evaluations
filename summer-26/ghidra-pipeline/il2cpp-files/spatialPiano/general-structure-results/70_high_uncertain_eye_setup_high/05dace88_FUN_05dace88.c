/*
FUNCTION_NAME: FUN_05dace88
ENTRY_POINT: 05dace88
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05dace88(long param_1,undefined8 *param_2,void *param_3,undefined8 *param_4,void *param_5,
                 undefined1 (*param_6) [12])

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 auVar9 [12];
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined1 auStack_458 [200];
  undefined1 auStack_390 [200];
  undefined1 auStack_2c8 [252];
  undefined1 local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined1 auStack_198 [304];
  long local_68;
  
  puVar4 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
  ;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((DAT_06bc3b31 & 1) == 0) {
    FUN_02f08768(Method_UnityEngine_UIElements_ReadOnlyHierarchyViewModelList_get_IsSynchronized__);
    FUN_02f08768(Method_UnityEngine_UIElements_ReadOnlyHierarchyViewModelList_get_SyncRoot__);
    FUN_02f08768(Method_UnityEngine_UIElements_ReadOnlyHierarchyViewModelList_Remove__);
    FUN_02f08768(Method_UnityEngine_UIElements_ReadOnlyHierarchyViewModelList_RemoveAt__);
    FUN_02f08768(Method_OVRAnchor_TryGetComponent<OVRStorable>__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_System_Xml_Schema_Parser_LoadEntityReferenceInAttribute__);
    DAT_06bc3b31 = 1;
  }
  local_468 = 0;
  uStack_460 = 0;
  local_478 = 0;
  uStack_470 = 0;
  memset(auStack_198,0,0x130);
  memset(auStack_2c8,0,0x130);
  lVar8 = *(long *)puVar4;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar8 = *(long *)puVar4;
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x90);
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) == 0) {
LAB_05dad158:
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      goto LAB_05dad16c;
    }
    *(undefined4 *)(lVar8 + 0x20) =
         **(undefined4 **)
           (*(long *)Method_System_Xml_Schema_Parser_LoadEntityReferenceInAttribute__ + 0xb8);
    puVar7 = Method_UnityEngine_UIElements_ReadOnlyHierarchyViewModelList_get_SyncRoot__;
    puVar6 = Method_UnityEngine_UIElements_ReadOnlyHierarchyViewModelList_get_IsSynchronized__;
    puVar5 = Method_OVRAnchor_TryGetComponent<OVRStorable>__;
    lVar8 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x98);
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_05dad158;
      memmove((void *)(lVar8 + 0x20),param_5,0x6c);
      FUN_03d44c04(&local_468,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x90),2,
                   *(undefined8 *)puVar7);
      FUN_03d3d404(&local_478,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x98),2,
                   *(undefined8 *)puVar6);
      uVar1 = *param_2;
      uVar2 = param_2[1];
      memcpy(auStack_390,param_3,200);
      uStack_498 = param_4[1];
      local_4a0 = *param_4;
      uStack_488 = param_4[3];
      uStack_490 = param_4[2];
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      memcpy(auStack_458,auStack_390,200);
      uStack_4b8 = uStack_498;
      local_4c0 = local_4a0;
      uStack_4a8 = uStack_488;
      uStack_4b0 = uStack_490;
      FUN_061276f4(auStack_2c8,uVar1,uVar2,auStack_458,&local_4c0,0);
      local_4d8 = 0;
      uStack_4d0 = 0;
      local_4c8 = 0;
      FUN_03e0fd60(&local_4d8,local_468,uStack_460,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_ReadOnlyHierarchyViewModelList_Remove__);
      local_4f0 = 0;
      uStack_4e8 = 0;
      uStack_1c0 = uStack_4d0;
      local_1c8 = local_4d8;
      local_1b8 = local_4c8;
      local_4e0 = 0;
      FUN_03e0f940(&local_4f0,local_478,uStack_470,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_ReadOnlyHierarchyViewModelList_RemoveAt__);
      uStack_1a8 = uStack_4e8;
      local_1b0 = local_4f0;
      local_1a0 = local_4e0;
      local_1cc = 0;
      memcpy(auStack_198,auStack_2c8,0x130);
      if (param_1 != 0) {
        auVar9 = FUN_05cc687c(param_1,auStack_198,0);
        *param_6 = auVar9;
        if (*(long *)(lVar3 + 0x28) == local_68) {
          return;
        }
        goto LAB_05dad16c;
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
LAB_05dad16c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


