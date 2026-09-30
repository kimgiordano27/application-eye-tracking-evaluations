/*
FUNCTION_NAME: QFSW.QC.Containers.ArraySingle.<GetEnumerator>d__6<__Il2CppFullySharedGenericType>$$System.IDisposable.Dispose
ENTRY_POINT: 01f3e20c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01f3e40c) */

long * QFSW_QC_Containers_ArraySingle_<GetEnumerator>d__6<__Il2CppFullySharedGenericType>__System_IDisposable_Dispose
                 (long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  char local_34 [4];
  long *local_28;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd7628);
    FUN_01ab69ac(PTR_DAT_03cd7990);
    FUN_01ab69ac(PTR_DAT_03cd7630);
    FUN_01ab69ac(PTR_DAT_03cd7998);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_01a47054(param_2);
    }
  }
  local_28 = (long *)0x0;
  plVar5 = (long *)(param_1 + 0x10);
  lVar4 = *plVar5;
  if (lVar4 == 0) {
    uVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cd7998);
    FUN_0219a4f0(uVar2,*(undefined8 *)PTR_DAT_03cd7990);
    FUN_01aa50f0(plVar5,uVar2,0);
    lVar4 = *plVar5;
  }
  local_34[0] = '\0';
  FUN_027e0bd8(lVar4,local_34,0);
  puVar1 = PTR_DAT_03cbe5e8;
  uVar2 = **(undefined8 **)(param_2 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar2 = FUN_0277b678(uVar2,0);
  if (lVar4 != 0) {
    uVar3 = FUN_0219f8b8(lVar4,uVar2,&local_28,*(undefined8 *)PTR_DAT_03cd7628);
    if ((uVar3 & 1) == 0) {
      uVar2 = **(undefined8 **)(param_2 + 0x38);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar2 = FUN_0277b678(uVar2,0);
      if ((*(byte *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x135) & 1) == 0) {
        FUN_01a46ff8();
      }
      plVar5 = (long *)thunk_FUN_01a89e68();
      FUN_02076e68(plVar5,*(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10));
      local_28 = plVar5;
      FUN_0219b83c(lVar4,uVar2,plVar5,*(undefined8 *)PTR_DAT_03cd7630);
    }
    if (local_34[0] != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(lVar4,0);
    }
    plVar5 = local_28;
    lVar4 = *(long *)(*(long *)(param_2 + 0x38) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01a46ff8();
    }
    if (plVar5 != (long *)0x0) {
      if (*(byte *)(lVar4 + 0x130) <= *(byte *)(*plVar5 + 0x130)) {
        if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) == lVar4)
        {
          return plVar5;
        }
        return (long *)0x0;
      }
    }
    return (long *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c(uVar2,uVar2);
}


