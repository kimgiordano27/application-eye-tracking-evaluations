/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<Vector3>$$BeginInvoke
ENTRY_POINT: 050808b0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>__BeginInvoke
               (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  undefined4 uStack000000000000000c;
  
  uVar1 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(param_1 + 0x20,0);
  uVar2 = FUN_05e19a88(param_2,uVar1,0);
  if ((uVar2 & 1) != 0) {
    FUN_05c8ecac(0,*unaff_x19,0,*(undefined4 *)(unaff_x19 + 1),0);
    return;
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0322bef4();
  }
  uVar1 = *(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x48);
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)(unaff_x22 + 0xe0));
  }
  plVar4 = (long *)Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar1,0);
  if (plVar4 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    uStack000000000000000c = *(undefined4 *)(unaff_x19 + 1);
    uVar5 = thunk_FUN_0322ed78(*(undefined8 *)(unaff_x22 + 0x48),&stack0x0000000c);
    FUN_05c89614(*(undefined8 *)PTR_DAT_075d9df8,uVar1,uVar5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


