/*
FUNCTION_NAME: UnityEngine.Input$$get_compositionCursorPos
ENTRY_POINT: 0877490c
PROGRAM: cac-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


undefined4
UnityEngine_Input__get_compositionCursorPos
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,long param_9,
          undefined4 param_10)

{
  long lVar1;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_40 = param_5;
  uStack_3c = param_6;
  local_38 = param_7;
  uStack_34 = param_8;
  local_30 = param_1;
  uStack_2c = param_2;
  local_28 = param_3;
  uStack_24 = param_4;
  if ((DAT_0969d76b & 1) == 0) {
    FUN_03f13384(PTR_DAT_091a2728);
    DAT_0969d76b = 1;
  }
  local_50 = 0;
  local_48 = 0;
  if (param_9 != 0) {
    lVar1 = *(long *)(param_9 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_087f9138(param_9,0);
    }
    if (DAT_0969d7b0 == (code *)0x0) {
      DAT_0969d7b0 = (code *)FUN_03f13348(
                                         "UnityEngine.Avatar::Internal_GetZYPostQ_Injected(System.IntPtr,System.Int32,UnityEngine.Quaternion&,UnityEngine.Quaternion&,UnityEngine.Quaternion&)"
                                         );
    }
    (*DAT_0969d7b0)(lVar1,param_10,&local_30,&local_40,&local_50);
    return (undefined4)local_50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


