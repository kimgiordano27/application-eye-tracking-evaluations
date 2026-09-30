/*
FUNCTION_NAME: UnityEngine.InputSystem.InputActionReference$$SetInternal
ENTRY_POINT: 03a2e7f4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


undefined8 UnityEngine_InputSystem_InputActionReference__SetInternal(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  int unaff_w23;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
                    /* try { // try from 03a2e7f4 to 03b2e807 has its CatchHandler @ 03a2ee64 */
  if (unaff_w23 == 0) {
    uVar2 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_6282);
                    /* try { // try from 03a2e810 to 03b2e833 has its CatchHandler @ 03a2ee4c */
    FUN_039f1620(uVar2,in_stack_00000040,1,0);
    FUN_03a2dbac();
                    /* try { // try from 03a2e834 to 03b2e84b has its CatchHandler @ 03a2ee34 */
    *(undefined1 *)(unaff_x19 + 0x28) = 1;
    *(undefined4 *)(unaff_x19 + 0x2c) = in_stack_00000048;
    if (*(char *)(unaff_x20 + 0x69) != '\0') {
                    /* try { // try from 03a2e84c to 03b2e86f has its CatchHandler @ 03a2edec */
      if (*(int *)(*(long *)Method_OVRTask_FromGuid<bool>__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      thunk_FUN_01ef4060(in_stack_00000038,&stack0x0000008c,0);
                    /* try { // try from 03a2e870 to 03b2e897 has its CatchHandler @ 03a2ee9c */
      lVar5 = *(long *)(unaff_x20 + 0xa8);
      if (lVar5 == 0) {
        lVar5 = FUN_0342809c(0);
      }
      uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__
                                );
                    /* try { // try from 03a2e8a8 to 03b2e8af has its CatchHandler @ 03a2ee78 */
      FUN_034de63c(uVar2,in_stack_00000030,2,1,0x2000,0);
      plVar3 = (long *)thunk_FUN_01f117cc(*(undefined8 *)Method_OVREyeGaze_OnPermissionGranted__);
                    /* try { // try from 03a2e8cc to 03b2e8cf has its CatchHandler @ 03a2ee48 */
                    /* try { // try from 03a2e8d0 to 03b2e8f7 has its CatchHandler @ 03a2ee24 */
      FUN_034ccf84(plVar3,uVar2,lVar5,0);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar3 + 0x288))(plVar3,1,*(undefined8 *)(*plVar3 + 0x290));
      *(long *)(unaff_x19 + 0xb8) = (long)plVar3;
                    /* try { // try from 03a2e8fc to 03b2e907 has its CatchHandler @ 03a2edf4 */
      thunk_FUN_01f51358((long *)(unaff_x19 + 0xb8),plVar3);
    }
    if (*(char *)(unaff_x20 + 0x6a) != '\0') {
      if (*(int *)(*(long *)Method_OVRTask_FromGuid<bool>__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
                    /* try { // try from 03a2e930 to 03b2e937 has its CatchHandler @ 03a2edd8 */
      thunk_FUN_01ef4060(in_stack_00000020,&stack0x0000008c,0);
      puVar1 = Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__;
      lVar5 = *(long *)(unaff_x20 + 0x70);
      if (lVar5 == 0) {
        if (*(int *)(*(long *)Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__ + 0xe0
                    ) == 0) {
                    /* try { // try from 03a2e954 to 03b2e957 has its CatchHandler @ 03a2ee60 */
          thunk_FUN_01ee6d7c();
        }
                    /* try { // try from 03a2e958 to 03b2e97f has its CatchHandler @ 03a2ee40 */
        if (DAT_0483360a == '\0') {
          thunk_FUN_01efb3a4(Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__);
          DAT_0483360a = '\x01';
        }
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar5 = *(long *)puVar1;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
      }
      uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__
                                );
      FUN_034de63c(uVar2,in_stack_00000028,1,1,0x2000,0);
      uVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<sbyte>__
                                );
      FUN_034cb174(uVar4,uVar2,lVar5,1,0);
      *(undefined8 *)(unaff_x19 + 0xb0) = uVar4;
      thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0xb0),uVar4);
    }
    if (*(char *)(unaff_x20 + 0x6b) != '\0') {
      if (*(int *)(*(long *)Method_OVRTask_FromGuid<bool>__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      thunk_FUN_01ef4060(in_stack_00000010,&stack0x0000008c,0);
      puVar1 = Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__;
      lVar5 = *(long *)(unaff_x20 + 0x78);
      if (lVar5 == 0) {
        if (*(int *)(*(long *)Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__ + 0xe0
                    ) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (DAT_0483360a == '\0') {
          thunk_FUN_01efb3a4(Method_Sirenix_Serialization_WeakPrimitiveArrayFormatter_Read__);
          DAT_0483360a = '\x01';
        }
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar5 = *(long *)puVar1;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x28);
      }
      uVar2 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__
                                );
      FUN_034de63c(uVar2,in_stack_00000018,1,1,0x2000,0);
      uVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<sbyte>__
                                );
      FUN_034cb174(uVar4,uVar2,lVar5,1,0);
      *(undefined8 *)(unaff_x19 + 0xc0) = uVar4;
      thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0xc0),uVar4);
    }
  }
  return 1;
}


