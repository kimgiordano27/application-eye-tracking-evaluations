/*
FUNCTION_NAME: FUN_059b7360
ENTRY_POINT: 059b7360
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_13;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_059b7360(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 local_50 [16];
  int local_34;
  
                    /* try { // try from 059b7360 to 05ab7363 has its CatchHandler @ 059b736c */
                    /* catch() { ... } // from try @ 059b7360 with catch @ 059b736c */
                    /* try { // try from 059b7370 to 05ab7377 has its CatchHandler @ 059b7380 */
                    /* try { // try from 059b7378 to 05ab7383 has its CatchHandler @ 059b7038 */
  if ((DAT_06dc14c6 & 1) == 0) {
                    /* catch() { ... } // from try @ 059b7370 with catch @ 059b7380 */
    FUN_02d965b8(OVRSceneLoader_<DelayCanvasPosUpdate>d__24_TypeInfo);
    FUN_02d965b8(OVRPlugin_SkeletonType_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_94_0_TypeInfo);
    DAT_06dc14c6 = 1;
  }
  puVar1 = OVRPlugin_OVRP_1_94_0_TypeInfo;
  lVar9 = *(long *)(param_1 + 8);
  local_34 = 0;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = FUN_059b4788(lVar9,0x7fffffff);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    local_50 = FUN_0555c350(lVar4,0,0);
    uVar5 = FUN_05410178(local_50,0);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 10) = local_50;
      LeanTween__value(param_1 + 10,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_031ffab8(param_1 + 2,local_50,param_1,
                   *(undefined8 *)OVRSceneLoader_<DelayCanvasPosUpdate>d__24_TypeInfo);
      return;
    }
  }
  FUN_05410190(local_50,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  plVar6 = *(long **)(lVar9 + 0x10);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar4 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
  if (lVar4 == 0) {
    uVar7 = **(undefined8 **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
    goto LAB_059b7594;
  }
  plVar6 = *(long **)(lVar9 + 0x10);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar7 = (**(code **)(*plVar6 + 0x3b8))(plVar6,*(undefined8 *)(*plVar6 + 0x3c0));
  plVar6 = *(long **)(lVar9 + 0x10);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  iVar3 = (**(code **)(*plVar6 + 0x1e8))(plVar6,*(undefined8 *)(*plVar6 + 0x1f0));
  local_34 = 0;
  if (*(long *)(lVar9 + 0x20) == 0) {
LAB_059b7530:
    plVar6 = (long *)FUN_059b6c68(uVar7,iVar3,&local_34);
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)FUN_0538828c(0);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    }
  }
  else {
    lVar4 = FUN_059b7740();
    if (lVar4 == 0) goto LAB_059b7530;
    if (*(long *)(lVar9 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = FUN_059b7740();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = FUN_059b77a8();
    if (lVar4 == 0) goto LAB_059b7530;
    if (*(long *)(lVar9 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar9 = FUN_059b7740();
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar8 = FUN_059b77a8();
    plVar6 = (long *)FUN_0538a224(uVar8,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar8 = (**(code **)(*plVar6 + 0x198))(plVar6,*(undefined8 *)(*plVar6 + 0x1a0));
    local_34 = FUN_059b6e0c(uVar7,iVar3,uVar8);
  }
  uVar7 = (**(code **)(*plVar6 + 0x378))
                    (plVar6,uVar7,local_34,iVar3 - local_34,*(undefined8 *)(*plVar6 + 0x380));
LAB_059b7594:
  puVar2 = OVRPlugin_SkeletonType_TypeInfo;
  iVar3 = *(int *)(*(long *)puVar1 + 0xe4);
  *param_1 = -2;
  if (iVar3 == 0) {
    thunk_FUN_02df485c();
  }
  FUN_040b19d8(param_1 + 2,uVar7,*(undefined8 *)puVar2);
  return;
}


