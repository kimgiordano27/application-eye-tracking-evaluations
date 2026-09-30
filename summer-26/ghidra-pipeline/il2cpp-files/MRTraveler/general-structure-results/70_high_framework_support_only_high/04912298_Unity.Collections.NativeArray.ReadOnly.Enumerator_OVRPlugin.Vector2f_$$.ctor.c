/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 04912298
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector2f>___ctor
               (long param_1,long param_2,int param_3,int param_4,undefined8 param_5,
               undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long lVar6;
  
  if (param_1 == 0) {
    FUN_03cf12a0();
  }
  if (param_2 == 0) {
    thunk_FUN_03ce5214(PTR_DAT_08e80470);
    uVar4 = thunk_FUN_03cf5234();
    uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e80478);
    FUN_0705a2f8(uVar4,uVar5,0);
  }
  else if ((param_4 < 0) || (param_3 < 0)) {
    puVar1 = PTR_DAT_08e805f0;
    if (-1 < param_3) {
      puVar1 = PTR_DAT_08e80610;
    }
    uVar5 = thunk_FUN_03ce5214(puVar1);
    thunk_FUN_03ce5214(PTR_DAT_08e6a5d8);
    uVar4 = thunk_FUN_03cf5234();
    uVar3 = thunk_FUN_03ce5214(PTR_DAT_08e80608);
    FUN_070619b8(uVar4,uVar5,uVar3,0);
  }
  else {
    if (param_4 <= *(int *)(param_2 + 0x18) - param_3) {
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03cf1244();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03cf1244();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03cf1244();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03cf1244();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03cf1244();
      }
      if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_051413fc(**(long **)(lVar2 + 0xb8),param_2,param_3,param_4,param_5,param_6,
                   *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x30));
      return;
    }
    thunk_FUN_03ce5214(PTR_DAT_08e76350);
    uVar4 = thunk_FUN_03cf5234();
    uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e80618);
    FUN_07064ba8(uVar4,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar4);
}


