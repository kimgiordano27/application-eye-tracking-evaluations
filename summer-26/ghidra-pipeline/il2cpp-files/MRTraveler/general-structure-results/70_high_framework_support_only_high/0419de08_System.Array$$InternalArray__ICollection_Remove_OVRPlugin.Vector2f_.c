/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.Vector2f>
ENTRY_POINT: 0419de08
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_Vector2f>
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
               int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined *puVar4;
  
  if (param_1 == 0) {
    FUN_03cf12a0();
  }
  if (param_2 == 0) {
    thunk_FUN_03ce5214(PTR_DAT_08e80470);
    uVar1 = thunk_FUN_03cf5234();
    uVar2 = thunk_FUN_03ce5214(PTR_DAT_08e80478);
    FUN_0705a2f8(uVar1,uVar2,0);
    goto LAB_0419df20;
  }
  if (param_5 < 0) {
LAB_0419de78:
    thunk_FUN_03ce5214(PTR_DAT_08e6a5d8);
    uVar1 = thunk_FUN_03cf5234();
    uVar2 = thunk_FUN_03ce5214(PTR_DAT_08e80480);
    puVar4 = PTR_DAT_08e80488;
  }
  else {
    if (*(int *)(param_2 + 0x18) < param_5) goto LAB_0419de78;
    if ((-1 < param_6) && (param_6 <= *(int *)(param_2 + 0x18) - param_5)) {
      FUN_041ae8b4(param_2,param_3,param_4,param_5,param_6,
                   *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10));
      return;
    }
    thunk_FUN_03ce5214(PTR_DAT_08e6a5d8);
    uVar1 = thunk_FUN_03cf5234();
    uVar2 = thunk_FUN_03ce5214(PTR_DAT_08e80490);
    puVar4 = PTR_DAT_08e80498;
  }
  uVar3 = thunk_FUN_03ce5214(puVar4);
  FUN_070619b8(uVar1,uVar2,uVar3,0);
LAB_0419df20:
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar1);
}


