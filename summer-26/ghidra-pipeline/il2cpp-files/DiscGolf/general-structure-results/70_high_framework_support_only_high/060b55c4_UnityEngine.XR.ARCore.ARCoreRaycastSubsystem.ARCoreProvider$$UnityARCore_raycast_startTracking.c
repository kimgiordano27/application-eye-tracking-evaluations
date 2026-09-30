/*
FUNCTION_NAME: UnityEngine.XR.ARCore.ARCoreRaycastSubsystem.ARCoreProvider$$UnityARCore_raycast_startTracking
ENTRY_POINT: 060b55c4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_3;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_XR_ARCore_ARCoreRaycastSubsystem_ARCoreProvider__UnityARCore_raycast_startTracking
               (code *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
                    /* try { // try from 060b55c8 to 061b55fb has its CatchHandler @ 060b54f8 */
  plVar2 = (long *)(*param_1)();
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar5 = *plVar2;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x25) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 4) * 0x10 + 0x138);
        goto LAB_060b5624;
      }
      uVar6 = uVar6 - 1;
                    /* try { // try from 060b55fc to 061b55ff has its CatchHandler @ 060b5608 */
      piVar7 = piVar7 + 4;
                    /* try { // try from 060b5600 to 061b5603 has its CatchHandler @ 060b5604 */
    } while (uVar6 != 0);
  }
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 060b5600 with catch @ 060b5604
                       try { // try from 060b5604 to 061b5627 has its CatchHandler @ 060b54f8 */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 060b55fc with catch @ 060b5608
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 060b55b0 with catch @ 060b560c
                        */
  puVar3 = (undefined8 *)FUN_02dd004c(plVar2,*unaff_x25,4);
LAB_060b5624:
  lVar5 = (*(code *)*puVar3)(plVar2,0,puVar3[1]);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  in_stack_00000018 = FUN_0481d028(lVar5,*(undefined8 *)PTR_DAT_069fccb0);
  uVar6 = FUN_047e6248(&stack0x00000018,*(undefined8 *)PTR_DAT_069fcca0);
  if ((uVar6 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
    LeanTween__value(unaff_x19 + 0x10,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_031f93a8(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    uVar4 = FUN_047e6288(&stack0x00000018,*(undefined8 *)PTR_DAT_069fcc90);
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_060b3248(uVar4,uVar4,&stack0x00000028);
    uVar4 = in_stack_00000028;
    puVar1 = OVRPlugin_SkeletonType_TypeInfo;
    *(undefined8 *)(unaff_x19 + 0xc) = 0;
    *unaff_x19 = 0xfffffffe;
    LeanTween__value(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_040b19d8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar1);
  }
  return;
}


