/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel.<>c__DisplayClass25_0$$<GetCategoryButton>b__0
ENTRY_POINT: 01449e08
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel_<>c__DisplayClass25_0__<GetCategoryButton>b__0
               (ulong param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar8;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_GameMenu_<>c_<Hide>b__63_0__);
    thunk_FUN_00d48444(Method_Autohand_Hand_<OnEnable>b__76_2__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<OVRSceneManager_<<LoadSceneModel>g__AwaitTask_40_0>d>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<ICanvasElement,_int>__ctor__);
    thunk_FUN_00d48444(StringLiteral_3002);
    *(undefined1 *)(unaff_x21 + 0xa4b) = 1;
  }
  if ((unaff_x20 == 0) ||
     (lVar5 = FUN_02666a34(), puVar4 = StringLiteral_302,
     puVar2 = Method_Autohand_Hand_<OnEnable>b__76_2__, lVar5 == 0)) goto LAB_0144a004;
  uVar6 = FUN_0268b6ac(lVar5,0);
  plVar7 = (long *)FUN_0144a058(param_2,uVar6);
  *(long **)(param_2 + 0x28) = plVar7;
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (plVar7 == (long *)0x0) goto LAB_0144a004;
    FUN_0146997c(plVar7,0);
    *(long **)(param_2 + 0x28) = plVar7;
LAB_01449f28:
    lVar5 = *(long *)puVar2;
    bVar1 = *(byte *)(lVar5 + 300);
    if (((bVar1 <= *(byte *)(*plVar7 + 300)) &&
        (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) == lVar5)) &&
       (0 < *(int *)(param_2 + 0x20))) {
      lVar5 = FUN_02666a34();
      puVar3 = 
      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<OVRSceneManager_<<LoadSceneModel>g__AwaitTask_40_0>d>__
      ;
      puVar2 = Method_System_Collections_Generic_Dictionary<ICanvasElement,_int>__ctor__;
      if (lVar5 == 0) goto LAB_0144a004;
      uVar6 = FUN_0268b6ac(lVar5,0);
      uVar6 = FUN_01600424(*(undefined8 *)puVar2,uVar6,*(undefined8 *)puVar3,0);
      lVar5 = *(long *)puVar4;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar5);
      }
      FUN_02661754(uVar6,0);
      plVar7 = *(long **)(param_2 + 0x28);
    }
  }
  else {
    if (*(int *)(param_2 + 0x20) < 4) goto LAB_01449f28;
    uVar8 = *(undefined8 *)StringLiteral_3002;
    uVar6 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    uVar6 = FUN_015f5b28(uVar8,uVar6,0);
    lVar5 = *(long *)puVar4;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
    }
    FUN_02660dac(uVar6,0);
    plVar7 = *(long **)(param_2 + 0x28);
    if (plVar7 != (long *)0x0) goto LAB_01449f28;
  }
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)Method_GameMenu_<>c_<Hide>b__63_0__);
  if (lVar5 != 0) {
    FUN_017b46ec(lVar5,0);
    *(long *)(lVar5 + 0x10) = param_2;
    *(long **)(lVar5 + 0x18) = plVar7;
    *(long *)(param_2 + 0x40) = lVar5;
    return;
  }
LAB_0144a004:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


