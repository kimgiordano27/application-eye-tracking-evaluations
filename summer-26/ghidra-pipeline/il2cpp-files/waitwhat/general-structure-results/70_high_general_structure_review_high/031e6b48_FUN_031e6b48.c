/*
FUNCTION_NAME: FUN_031e6b48
ENTRY_POINT: 031e6b48
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_031e6b48(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  long local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_18;
  
  FUN_03189ef0(auStack_40,&DAT_07562b98);
  DAT_07562c50 = DAT_07562c50 + -1;
  if (0 < DAT_07562c50) goto LAB_031e6cac;
  lVar1 = FUN_031e8ff4(DAT_075629a0,"ProcessExit");
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_031d4fac();
    lVar4 = *plVar2;
    FUN_031e500c(*(undefined8 *)(lVar1 + 8),&local_28,lVar4 + *(int *)(lVar1 + 0x18),1);
    if (local_28 != (undefined8 *)0x0) {
      local_38 = lVar4;
      lVar1 = thunk_FUN_031df340(DAT_07562890,"System","EventArgs");
      if (lVar1 == 0) {
LAB_031e6c18:
        local_18 = 0;
      }
      else {
        FUN_031e8d74(lVar1);
        lVar1 = FUN_031e8ff4(lVar1,"Empty");
        if (lVar1 == 0) goto LAB_031e6c18;
        FUN_031e56cc(lVar1,&local_18,0);
      }
      local_30 = local_18;
      uVar3 = FUN_031e926c(*local_28,"Invoke",0xffffffff);
      FUN_031e6ef8(uVar3,local_28,&local_38,&local_18);
    }
  }
  DAT_07562c60 = 1;
  FUN_03191584();
  FUN_031ac3b0();
  FUN_031d92f8();
  FUN_031d27ac();
  thunk_FUN_03188a98();
  FUN_031c1698();
  FUN_0318aed4();
  FUN_031d8d90();
  FUN_031b1d84();
  Best_HTTP_Request_Settings_TimeoutSettings__get_ProcessingStarted();
  thunk_FUN_03234228();
  DG_Tweening_DOTweenModulePhysics2D_<>c__DisplayClass4_0__<DOJump>b__0();
  FUN_031dfe3c();
  FUN_031d2650();
  FUN_031cff5c();
  FUN_03188a98();
  FUN_03188a98();
  FUN_031d2c10();
  FUN_031d816c();
  FUN_03188a98();
  FUN_0318f848();
  FUN_031e8868();
LAB_031e6cac:
  FUN_03189f7c(auStack_40);
  return;
}


