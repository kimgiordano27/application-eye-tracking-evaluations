/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Bone>$$Dispose
ENTRY_POINT: 024cb0c4
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Bone>__Dispose
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long in_x9;
  int *in_x10;
  long unaff_x19;
  long *unaff_x20;
  
  do {
    if ((bool)in_ZR) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_024cb100:
      iVar1 = (*(code *)*puVar2)();
      if (iVar1 == 0) {
        FUN_024ca184();
        return;
      }
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      if (((*(byte *)(lVar3 + 0x130) <= *(byte *)(*unaff_x20 + 0x130)) &&
          (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) ==
           lVar3)) && (uVar4 = FUN_024cea64(), (uVar4 & 1) != 0)) {
        FUN_024cd2c4();
        return;
      }
      FUN_024cd380();
      return;
    }
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_0185dba8();
      goto LAB_024cb100;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  } while( true );
}


