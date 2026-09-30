/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRelativePose
ENTRY_POINT: 03681c0c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 151
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_6
*/


undefined1  [16] OVRPlugin__GetTrackingTransformRelativePose(void)

{
  uint uVar1;
  int in_w8;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  float fVar2;
  undefined1 auVar3 [16];
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  
  if (in_w8 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
    *(undefined1 *)(unaff_x21 + 0xe12) = 1;
  }
  if (unaff_w20 < 8) {
    uVar1 = 1 << (ulong)(unaff_w20 & 0x1f);
    if ((uVar1 & 0x3c) != 0) {
      uStack0000000000000014 = *(undefined8 *)(unaff_x19 + 0x30);
      uStack000000000000000c = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0x24) >> 0x20);
      if (*(int *)(unaff_x19 + 0x38) == 0) {
        if (*(int *)(*(long *)
                      Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        auVar3 = FUN_0407bc20();
        return auVar3;
      }
      if (*(int *)(*(long *)
                    Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar2 = (float)FUN_0407bc20();
      goto LAB_03681d00;
    }
    if ((uVar1 & 3) == 0) {
      uStack0000000000000014 = *(undefined8 *)(unaff_x19 + 0x30);
      uStack000000000000000c = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0x24) >> 0x20);
      if (*(int *)(unaff_x19 + 0x38) == 0) {
        if (*(int *)(*(long *)
                      Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__
                    + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        auVar3 = FUN_0407bbb0();
        return auVar3;
      }
      if (*(int *)(*(long *)
                    Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      fVar2 = (float)FUN_0407bbb0();
      goto LAB_03681d00;
    }
  }
  uStack0000000000000014 = *(undefined8 *)(unaff_x19 + 0x30);
  uStack000000000000000c = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0x24) >> 0x20);
  if (*(int *)(unaff_x19 + 0x38) == 0) {
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    auVar3 = FUN_0407bb40();
    return auVar3;
  }
  if (*(int *)(*(long *)
                Method_Unity_VisualScripting_StaticFunctionInvoker<string,_string,_bool>__ctor__ +
              0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  fVar2 = (float)FUN_0407bb40();
LAB_03681d00:
  return ZEXT416((uint)-fVar2);
}


