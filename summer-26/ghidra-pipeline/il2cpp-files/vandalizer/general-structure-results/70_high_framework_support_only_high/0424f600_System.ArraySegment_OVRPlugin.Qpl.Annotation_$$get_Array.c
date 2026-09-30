/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.Qpl.Annotation>$$get_Array
ENTRY_POINT: 0424f600
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_ArraySegment<OVRPlugin_Qpl_Annotation>__get_Array(void)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  lVar6 = *unaff_x19;
  if (lVar6 == 0) {
    Oculus_Interaction_TransformExtensions_<>c__DisplayClass3_0___ctor(0x32,0);
    lVar6 = *unaff_x19;
  }
  uVar5 = unaff_x21[2];
  uVar8 = unaff_x21[1];
  uVar7 = *unaff_x21;
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar2 = unaff_x19[1];
  uVar1 = *(undefined4 *)((long)unaff_x19 + 0xc);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0322bef4();
  }
  in_stack_00000020 = uVar7;
  in_stack_00000028 = uVar8;
  in_stack_00000030 = uVar5;
  iVar3 = FUN_0401e69c(lVar6,&stack0x00000020,(int)lVar2,uVar1,
                       *(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x50));
  if (iVar3 < 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = iVar3 - (int)unaff_x19[1];
  }
  return iVar3;
}


