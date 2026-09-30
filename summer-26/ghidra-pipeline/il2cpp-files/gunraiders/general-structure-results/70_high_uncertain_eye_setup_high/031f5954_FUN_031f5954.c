/*
FUNCTION_NAME: FUN_031f5954
ENTRY_POINT: 031f5954
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong FUN_031f5954(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong *puVar7;
  ulong local_40;
  undefined1 local_34 [4];
  
  if ((DAT_045326e2 & 1) == 0) {
    FUN_01c5d288(
                VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo
                );
    FUN_01c5d288(PTR_DAT_042367c0);
    FUN_01c5d288(PTR_DAT_04230478);
    FUN_01c5d288(OVRPlugin_OVRP_0_5_0_TypeInfo);
    DAT_045326e2 = 1;
  }
  if (*(long *)(param_1 + 0xb0) == 0) {
    uVar2 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_042367c0);
    FUN_032abb3c(uVar2,5,0);
    *(undefined8 *)(param_1 + 0xb0) = uVar2;
  }
  local_34[0] = 0;
  if ((param_2 != 0) &&
     (lVar3 = FUN_031e8550(param_2,0),
     puVar1 = 
     VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo
     , lVar3 != 0)) {
    if (*(int *)(lVar3 + 0x10) == 0) {
      return 0;
    }
    lVar4 = *(long *)
             VoxelBusters_EssentialKit_WebViewCore_Android_NativeWebkitWebView_<>c__DisplayClass19_0_TypeInfo
    ;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar4 = *(long *)puVar1;
    }
    uVar5 = FUN_0315243c(lVar3,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0xd8),0);
    if ((uVar5 & 1) != 0) {
      return 0;
    }
    plVar6 = *(long **)(param_1 + 0xb0);
    if (plVar6 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar6 + 0x2e8))(plVar6,lVar3,*(undefined8 *)(*plVar6 + 0x2f0));
      if ((uVar5 & 1) == 0) {
        uVar2 = FUN_03146988(*(undefined8 *)OVRPlugin_OVRP_0_5_0_TypeInfo,lVar3,0);
        uVar5 = FUN_031f5890(param_1,uVar2,0,0,local_34);
        plVar6 = *(long **)(param_1 + 0xb0);
        local_40 = uVar5;
        uVar2 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_04230478,&local_40);
        if (plVar6 == (long *)0x0) goto LAB_031f5b5c;
        (**(code **)(*plVar6 + 0x318))(plVar6,lVar3,uVar2,*(undefined8 *)(*plVar6 + 800));
      }
      else {
        plVar6 = *(long **)(param_1 + 0xb0);
        if ((plVar6 == (long *)0x0) ||
           (plVar6 = (long *)(**(code **)(*plVar6 + 0x308))
                                       (plVar6,lVar3,*(undefined8 *)(*plVar6 + 0x310)),
           plVar6 == (long *)0x0)) goto LAB_031f5b5c;
        if (*(long *)(*plVar6 + 0x40) != *(long *)(*(long *)PTR_DAT_04230478 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d748();
        }
        puVar7 = (ulong *)thunk_FUN_01c49834();
        uVar5 = *puVar7;
        local_34[0] = 0;
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        FUN_031f03e4(*(long *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x20),lVar3,
                     uVar5 & 0xffffffff,local_34[0],0);
        return uVar5;
      }
    }
  }
LAB_031f5b5c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


