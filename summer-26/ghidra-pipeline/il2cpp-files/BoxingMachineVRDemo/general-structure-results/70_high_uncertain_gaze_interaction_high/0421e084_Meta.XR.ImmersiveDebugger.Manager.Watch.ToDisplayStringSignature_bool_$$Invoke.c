/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<bool>$$Invoke
ENTRY_POINT: 0421e084
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_gaze_interaction_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


uint Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<bool>__Invoke(void)

{
  uint uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_02d6084c(PTR_DAT_0675e2d8);
  *(undefined1 *)(unaff_x21 + 0x2f4) = 1;
  if ((unaff_x20 != (long *)0x0) && (*unaff_x20 == *(long *)PTR_DAT_0675e2d8)) {
    puVar2 = (undefined4 *)thunk_FUN_02d9d688();
    uVar6 = puVar2[1];
    uVar5 = puVar2[2];
    uVar4 = puVar2[3];
    uVar3 = Newtonsoft_Json_Serialization_TraceJsonReader__Newtonsoft_Json_IJsonLineInfo_get_LinePosition
                      (*puVar2,unaff_x19 + 0x18,0);
    if (((uVar3 & 1) != 0) &&
       ((uVar3 = Newtonsoft_Json_Serialization_TraceJsonReader__Newtonsoft_Json_IJsonLineInfo_get_LinePosition
                           (uVar6,unaff_x19 + 0x1c,0), (uVar3 & 1) != 0 &&
        (uVar3 = Newtonsoft_Json_Serialization_TraceJsonReader__Newtonsoft_Json_IJsonLineInfo_get_LinePosition
                           (uVar5,unaff_x19 + 0x20,0), (uVar3 & 1) != 0)))) {
      uVar1 = Newtonsoft_Json_Serialization_TraceJsonReader__Newtonsoft_Json_IJsonLineInfo_get_LinePosition
                        (uVar4,unaff_x19 + 0x24,0);
      goto LAB_0421e114;
    }
  }
  uVar1 = 0;
LAB_0421e114:
  return uVar1 & 1;
}


