/*
FUNCTION_NAME: OVREyeGaze$$.ctor
ENTRY_POINT: 0198802c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze___ctor(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  puVar1 = StringLiteral_879;
  if (1 < *(uint *)(unaff_x20 + 0x18)) {
    *(undefined4 *)(unaff_x20 + 0x24) = param_1;
    uVar2 = FUN_0267bd34(*(undefined8 *)puVar1,0);
    puVar1 = Method_DG_Tweening_Plugins_Core_ABSTweenPlugin<Vector2,_Vector2,_VectorOptions>__ctor__
    ;
    if (2 < *(uint *)(unaff_x20 + 0x18)) {
      *(undefined4 *)(unaff_x20 + 0x28) = uVar2;
      uVar2 = FUN_0267bd34(*(undefined8 *)puVar1,0);
      puVar1 = Method_System_Collections_Generic_Dictionary<Type,_IActiveStateModel>_set_Item__;
      if (3 < *(uint *)(unaff_x20 + 0x18)) {
        *(undefined4 *)(unaff_x20 + 0x2c) = uVar2;
        uVar2 = FUN_0267bd34(*(undefined8 *)puVar1,0);
        puVar1 = StringLiteral_9940;
        if (4 < *(uint *)(unaff_x20 + 0x18)) {
          *(undefined4 *)(unaff_x20 + 0x30) = uVar2;
          *(long *)(unaff_x19 + 0x50) = unaff_x20;
          uVar2 = FUN_0267bd34(*(undefined8 *)puVar1,0);
          *(undefined4 *)(unaff_x19 + 0x58) = uVar2;
          thunk_FUN_0268a01c();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


