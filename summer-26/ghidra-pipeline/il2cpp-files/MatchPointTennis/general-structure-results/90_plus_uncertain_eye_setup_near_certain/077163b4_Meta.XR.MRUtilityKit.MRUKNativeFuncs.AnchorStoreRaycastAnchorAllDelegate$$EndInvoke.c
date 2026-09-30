/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastAnchorAllDelegate$$EndInvoke
ENTRY_POINT: 077163b4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastAnchorAllDelegate__EndInvoke
               (long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 300) & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f30b68);
    FUN_04447ba8(PTR_DAT_09f1e540);
    FUN_04447ba8(PTR_DAT_09f30b70);
    FUN_04447ba8(PTR_DAT_09f1e860);
    FUN_04447ba8(PTR_DAT_09f1e858);
    FUN_04447ba8(PTR_DAT_09f1e538);
    FUN_04447ba8(PTR_DAT_09f30b78);
    *(undefined1 *)(unaff_x20 + 300) = 1;
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    plVar3 = (long *)(param_1 + 0x30);
    lVar2 = *plVar3;
    if (lVar2 == 0) {
      lVar2 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1e858);
      FUN_05bad610(lVar2,*(undefined8 *)PTR_DAT_09f1e860);
      *plVar3 = lVar2;
      thunk_FUN_044bb4b4(plVar3,lVar2);
      lVar2 = *plVar3;
    }
    return lVar2;
  }
  lVar2 = FUN_095259a0(param_1,0);
  puVar1 = PTR_DAT_09f1e538;
  if (lVar2 != 0) {
    plVar3 = (long *)FUN_04d7a1ac(lVar2,*(undefined8 *)PTR_DAT_09f30b70);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)puVar1);
    }
    uVar4 = FUN_0952c404(plVar3,0,0);
    if ((uVar4 & 1) != 0) {
      lVar2 = FUN_095259a0(param_1,0);
      if ((lVar2 == 0) || (lVar2 = FUN_0952a094(lVar2,0), lVar2 == 0)) goto LAB_077165f0;
      uVar5 = thunk_FUN_0953ac24(lVar2,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_044a54b4(*(long *)puVar1);
      }
      uVar4 = FUN_09531730(uVar5,0,0);
      if ((uVar4 & 1) != 0) {
        lVar2 = FUN_095259a0(param_1,0);
        if (((lVar2 == 0) || (lVar2 = FUN_0952a094(lVar2,0), lVar2 == 0)) ||
           (lVar2 = thunk_FUN_0953ac24(lVar2,0), lVar2 == 0)) goto LAB_077165f0;
        plVar3 = (long *)FUN_04c6bfdc(lVar2,*(undefined8 *)PTR_DAT_09f30b68);
      }
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar4 = FUN_09531730(plVar3,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_094c33b0(*(undefined8 *)PTR_DAT_09f30b78,0);
      lVar2 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1e858);
      FUN_05bad610(lVar2,*(undefined8 *)PTR_DAT_09f1e860);
      return lVar2;
    }
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x07716544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (**(code **)(*plVar3 + 0x198))(plVar3,*(undefined8 *)(*plVar3 + 0x1a0));
      return lVar2;
    }
  }
LAB_077165f0:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


