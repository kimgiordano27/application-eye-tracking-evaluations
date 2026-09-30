/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetVersion
ENTRY_POINT: 0339679c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 OVRPlugin_OVRP_1_1_0__ovrp_GetVersion(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long *unaff_x19;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  while (iVar2 = (**(code **)(param_1 + 0x188))(), iVar2 == 5) {
    uVar4 = (**(code **)(*unaff_x19 + 0x1d8))();
    if ((uVar4 & 1) == 0) {
      thunk_FUN_01c273e8(Method_UnityEngine_UIElements_FocusEventBase<BlurEvent>_get_relatedTarget__
                        );
                    /* try { // try from 033967d0 to 0349682f has its CatchHandler @ 033967d0
                       catch() { ... } // from try @ 033967d0 with catch @ 033967d0
                       catch() { ... } // from try @ 03396878 with catch @ 033967d0
                       catch() { ... } // from try @ 03396904 with catch @ 033967d0 */
      goto LAB_03396b18;
    }
    param_1 = *unaff_x19;
  }
  switch(iVar2) {
  case 1:
    uVar6 = FUN_033974a8();
    return uVar6;
  case 2:
    uVar6 = FUN_03397f9c();
    return uVar6;
  case 3:
    plVar5 = (long *)(**(code **)(*unaff_x19 + 0x198))();
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    pcVar9 = *(code **)(*plVar5 + 0x168);
    break;
  default:
    FUN_019b2708();
    uVar3 = (**(code **)(*unaff_x19 + 0x188))();
    in_stack_00000008 = thunk_FUN_01c273e8(PTR_DAT_042308a0);
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000018 = uVar3;
    uVar6 = FUN_03307544(&stack0x00000008,0);
    uVar7 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>_GetEnumerator__
                              );
    FUN_03146988(uVar7,uVar6,0);
LAB_03396b18:
    uVar6 = FUN_0335cdc4();
    uVar7 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>_Remove__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar6,uVar7);
  case 6:
    plVar5 = (long *)(**(code **)(*unaff_x19 + 0x198))();
    uVar6 = thunk_FUN_01c496e0(*(undefined8 *)
                                Method_System_Collections_Generic_HashSet<Action<RenderTargetIdentifier,_CommandBuffer>>_Add__
                              );
    if ((plVar5 != (long *)0x0) && (*plVar5 != *(long *)PTR_DAT_0422fc38)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar5);
    }
    FUN_033b3c58(uVar6,plVar5,0);
    return uVar6;
  case 9:
    plVar5 = (long *)(**(code **)(*unaff_x19 + 0x198))();
    if ((plVar5 != (long *)0x0) && (*plVar5 != *(long *)PTR_DAT_0422fc38)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar5);
    }
    uVar6 = *(undefined8 *)PTR_DAT_0422fb40;
    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_032e04b8(uVar6,0);
    uVar4 = FUN_032e935c();
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar6 = FUN_032556a4(plVar5,0);
      return uVar6;
    }
    uVar4 = OVRPlugin_OVRP_1_8_0__ovrp_GetNodeVelocity2();
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    lVar8 = *(long *)PTR_DAT_042305b0;
    if (*(int *)(lVar8 + 0xe0) != 0) goto LAB_03396828;
    goto LAB_03396824;
  case 0xb:
  case 0xc:
                    /* try { // try from 03396860 to 03496877 has its CatchHandler @ 033968c4 */
                    /* try { // try from 03396878 to 034968db has its CatchHandler @ 033967d0 */
    uVar6 = *(undefined8 *)Method_UnityEngine_AddressableAssets_AssetReferenceT<Texture>__ctor__;
    if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_032e04b8(uVar6,0);
    uVar4 = FUN_032e935c();
    puVar1 = Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    if ((uVar4 & 1) != 0) {
      lVar8 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar8 = *(long *)puVar1;
      }
      return **(undefined8 **)(lVar8 + 0xb8);
    }
  case 7:
  case 8:
  case 10:
  case 0x10:
  case 0x11:
    pcVar9 = *(code **)(*unaff_x19 + 0x198);
  }
  (*pcVar9)();
  lVar8 = *(long *)PTR_DAT_042305b0;
  if (*(int *)(lVar8 + 0xe0) == 0) {
LAB_03396824:
    thunk_FUN_01c1d1e8(lVar8);
  }
LAB_03396828:
  FUN_03295500(0);
  uVar6 = FUN_033985d4();
  return uVar6;
}


