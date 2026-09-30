/*
FUNCTION_NAME: FUN_0568da4c
ENTRY_POINT: 0568da4c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_0568da4c(long param_1,undefined4 param_2,long *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long local_48;
  long local_38;
  
  if ((DAT_06dbc789 & 1) == 0) {
    FUN_02d965b8(System_Buffers_MemoryPool<IntPtr>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo);
    FUN_02d965b8(
                System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
                );
    FUN_02d965b8(Newtonsoft_Json_Utilities_MethodCall<object,_object>_TypeInfo);
    DAT_06dbc789 = 1;
  }
  local_38 = 0;
  local_48 = 0;
  if (*(long *)(param_1 + 0x1f8) == 0) goto LAB_0568dc8c;
  uVar3 = FUN_04dfa0cc(*(long *)(param_1 + 0x1f8),param_2,&local_38,
                       *(undefined8 *)
                        System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
                      );
  if ((uVar3 & 1) == 0) {
    return 1;
  }
  if (local_38 == 0) goto LAB_0568dc8c;
  if (((*(long *)(local_38 + 0x28) == 0) || (*(long *)(*(long *)(local_38 + 0x28) + 0x20) == 0)) &&
     ((*(long *)(local_38 + 0x30) == 0 || (*(long *)(*(long *)(local_38 + 0x30) + 0x20) == 0)))) {
    FUN_05687c54(param_1,&local_38,*param_3,*param_4);
    local_48 = 0;
    if (local_38 == 0) goto LAB_0568dc8c;
  }
  local_48 = 0;
  if (*(char *)(local_38 + 0x3f) == '\0') {
LAB_0568dbe8:
    FUN_0568c398(param_1,local_38);
    FUN_0568c42c(param_1,local_38);
    FUN_056882a8(param_1,param_3,param_4,local_38);
    if (local_38 != 0) {
      if ((*(char *)(local_38 + 0x3f) == '\0') || (local_48 == 0)) {
        return 1;
      }
      if (*(long *)(local_48 + 0x10) != 0) {
        FUN_056a6fc8(*(long *)(local_48 + 0x10),*param_3,0);
        lVar4 = local_48;
        uVar2 = FUN_0634adf0(0);
        if (lVar4 != 0) {
          *(undefined4 *)(lVar4 + 0x18) = uVar2;
          return 1;
        }
      }
    }
  }
  else {
    if (*(long *)(param_1 + 0x200) == 0) goto LAB_0568dc8c;
    uVar3 = FUN_04dfa0cc(*(long *)(param_1 + 0x200),param_2,&local_48,
                         *(undefined8 *)
                          System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo);
    if ((uVar3 & 1) == 0) {
      lVar5 = *param_3;
      lVar4 = thunk_FUN_02dd3144(*(undefined8 *)System_Buffers_MemoryPool<IntPtr>_TypeInfo);
      FUN_0568dcc8(lVar4,lVar5);
      local_48 = lVar4;
      if (*(long *)(param_1 + 0x200) == 0) goto LAB_0568dc8c;
      FUN_04df85dc(*(long *)(param_1 + 0x200),param_2,lVar4,
                   *(undefined8 *)Newtonsoft_Json_Utilities_MethodCall<object,_object>_TypeInfo);
    }
    if ((local_38 == 0) || (lVar4 = *(long *)(local_38 + 0x78), lVar4 == 0)) goto LAB_0568dc8c;
    uVar3 = (**(code **)(lVar4 + 0x18))
                      (*(undefined8 *)(lVar4 + 0x40),*(undefined4 *)(local_38 + 0x38),
                       *(undefined8 *)(lVar4 + 0x28));
    if ((uVar3 & 1) == 0) {
      if (local_48 == 0) goto LAB_0568dc8c;
    }
    else {
      iVar1 = FUN_0634adf0(0);
      if (local_48 == 0) goto LAB_0568dc8c;
      if (iVar1 != *(int *)(local_48 + 0x18)) goto LAB_0568dbe8;
    }
    if (*param_3 != 0) {
      FUN_056a6fc8(*param_3,*(undefined8 *)(local_48 + 0x10),0);
      return 1;
    }
  }
LAB_0568dc8c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


