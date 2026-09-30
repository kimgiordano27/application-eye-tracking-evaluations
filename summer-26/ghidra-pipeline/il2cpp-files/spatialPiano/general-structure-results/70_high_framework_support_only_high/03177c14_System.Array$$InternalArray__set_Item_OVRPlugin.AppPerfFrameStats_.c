/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.AppPerfFrameStats>
ENTRY_POINT: 03177c14
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__set_Item<OVRPlugin_AppPerfFrameStats>
          (long param_1,long param_2,long param_3,long param_4,undefined8 param_5,undefined4 param_6
          )

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  ulong in_stack_00000008;
  undefined *puVar5;
  
  if (param_1 == 0) {
    FUN_02f08768(&DAT_068f2018);
    if (*(long *)(unaff_x19 + 0x38) == 0) {
      FUN_02f41ef8();
    }
  }
  in_stack_00000008 = 0;
  if (param_3 == 0) {
    thunk_FUN_02f6ef30(&DAT_068ea500);
    uVar3 = thunk_FUN_02f45270();
    puVar5 = &DAT_0695c038;
  }
  else {
    if (param_4 != 0) {
      if (*(int *)(DAT_068f2018 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_0514d7e0(param_6,(long)&stack0x00000008 + 4,&stack0x00000008,0);
      uVar1 = in_stack_00000008;
      uVar2 = in_stack_00000008._4_4_;
      if ((*(ushort *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 8) + 0x135) & 1) == 0) {
        FUN_02f41e9c();
      }
      uVar3 = thunk_FUN_02f45270();
      FUN_04725598(uVar3,param_2,param_3,0,uVar2,uVar1 & 0xffffffff,
                   *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10));
      if (param_2 != 0) {
        FUN_0514d9b4(param_2,uVar3,param_4,param_5,param_6,0);
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    thunk_FUN_02f6ef30(&DAT_068ea500);
    uVar3 = thunk_FUN_02f45270();
    puVar5 = &DAT_06961520;
  }
  uVar4 = thunk_FUN_02f6ef30(puVar5);
  FUN_0504ee1c(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar3);
}


