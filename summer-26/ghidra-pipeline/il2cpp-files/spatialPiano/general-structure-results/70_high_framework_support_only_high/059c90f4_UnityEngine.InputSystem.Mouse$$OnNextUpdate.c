/*
FUNCTION_NAME: UnityEngine.InputSystem.Mouse$$OnNextUpdate
ENTRY_POINT: 059c90f4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_InputSystem_Mouse__OnNextUpdate(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x19;
  undefined8 uVar8;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x19 + 0x2e0) = unaff_x22;
  FUN_0624193c(param_1,param_2,0);
  FUN_06247510();
  lVar5 = thunk_FUN_02f45270(*unaff_x23);
  FUN_0623f858(lVar5,0);
  if (lVar5 != 0) {
    FUN_0623f468(lVar5,1,0);
    lVar6 = thunk_FUN_02f45270(*unaff_x24);
                    /* try { // try from 059c9148 to 05ac91fb has its CatchHandler @ 059c9148
                       catch() { ... } // from try @ 059c9148 with catch @ 059c9148
                       catch() { ... } // from try @ 059c924c with catch @ 059c9148
                       catch() { ... } // from try @ 059c9310 with catch @ 059c9148
                       catch() { ... } // from try @ 059c9368 with catch @ 059c9148 */
    FUN_05992370(lVar6,0);
    puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ctor__;
    puVar3 = Method_System_Collections_Generic_List<BsonReader_ContainerContext>_Add__;
    puVar2 = Method_System_Collections_Generic_List<BodyPoseData_JointData>_get_Item__;
    puVar1 = PTR_DAT_067d6b88;
    if (lVar6 != 0) {
      FUN_0623f514(lVar6,*(undefined8 *)
                          Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ctor__
                   ,0);
      FUN_03e325ec(lVar6,*(undefined8 *)puVar1,*unaff_x29);
      uVar7 = *(undefined8 *)puVar4;
      *(long *)(unaff_x19 + 0x2e8) = lVar6;
      FUN_0624193c(lVar5,uVar7,0);
      FUN_06247510(lVar5,*(undefined8 *)(unaff_x19 + 0x2e8),0);
      FUN_06247510();
      FUN_06247510();
      in_stack_00000008 = *(undefined8 *)(unaff_x19 + 0x260);
      FUN_0624b7dc(&stack0x00000008);
      FUN_059c9348();
      if (DAT_06bb435f == '\0') {
        FUN_02f08768(PTR_DAT_067c9848);
        DAT_06bb435f = '\x01';
      }
      FUN_059c9418(**(undefined4 **)(*(long *)PTR_DAT_067c9848 + 0xb8),
                   (*(undefined4 **)(*(long *)PTR_DAT_067c9848 + 0xb8))[1]);
      uVar8 = *(undefined8 *)(unaff_x19 + 0x2e0);
      uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
      FUN_04d8cf5c();
      FUN_03487f68(uVar8,uVar7,*(undefined8 *)puVar3);
      uVar8 = *(undefined8 *)(unaff_x19 + 0x2e8);
      uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
      FUN_04d8cf5c();
      FUN_03487f68(uVar8,uVar7,*(undefined8 *)puVar3);
      puVar1 = PTR_DAT_067ccfb0;
      uVar8 = *(undefined8 *)(unaff_x19 + 0x2e0);
      uVar7 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067ccfb0);
      FUN_04d8cf5c();
      puVar2 = PTR_DAT_067ccfb8;
      FUN_034369a8(uVar8,uVar7,*(undefined8 *)PTR_DAT_067ccfb8);
      uVar8 = *(undefined8 *)(unaff_x19 + 0x2e8);
      uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
      FUN_04d8cf5c();
      FUN_034369a8(uVar8,uVar7,*(undefined8 *)puVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


