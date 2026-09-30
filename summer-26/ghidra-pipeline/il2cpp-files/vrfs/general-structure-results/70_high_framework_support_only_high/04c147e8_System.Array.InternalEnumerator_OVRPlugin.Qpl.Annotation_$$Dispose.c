/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation>$$Dispose
ENTRY_POINT: 04c147e8
PROGRAM: vrfs-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation>__Dispose
               (void *param_1,long *param_2,long param_3)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  lVar6 = *param_2;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  iVar3 = FUN_031d2bdc(lVar6,0);
  lVar5 = *(long *)(param_3 + 0x20);
  uVar1 = *(uint *)(param_2 + 1);
  uVar2 = *(ushort *)(lVar5 + 0x132);
  lVar4 = lVar5;
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_015c2790(lVar5);
    uVar2 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x132);
    lVar4 = *(long *)(param_3 + 0x20);
  }
  pcVar7 = *(code **)(**(long **)(lVar5 + 0xc0) + 8);
  if ((uVar2 & 1) == 0) {
    lVar4 = FUN_015c2790(lVar4);
  }
  (*pcVar7)(lVar6,iVar3 + ~uVar1,**(undefined8 **)(lVar4 + 0xc0));
  memcpy(param_1,&stack0x00000000,0x60);
  return;
}


