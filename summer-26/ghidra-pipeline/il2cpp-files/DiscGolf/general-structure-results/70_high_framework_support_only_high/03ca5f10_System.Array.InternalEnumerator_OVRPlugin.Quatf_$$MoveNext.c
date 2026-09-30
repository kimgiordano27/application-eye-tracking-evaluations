/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Quatf>$$MoveNext
ENTRY_POINT: 03ca5f10
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Quatf>__MoveNext
               (undefined8 param_1,int param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  int in_w8;
  int *unaff_x19;
  long lVar3;
  int iStack0000000000000008;
  int iStack000000000000000c;
  
  if (param_2 == 0) {
    if (in_w8 == 2) {
      lVar3 = *(long *)(unaff_x19 + 2);
      if (lVar3 == 0) {
LAB_03ca6024:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(int *)(lVar3 + 0x18) == 0) {
LAB_03ca6028:
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      unaff_x19[1] = *(int *)(lVar3 + 0x20);
      *(undefined4 *)(lVar3 + 0x20) = 0;
      goto LAB_03ca5f50;
    }
    iStack000000000000000c = in_w8 + -1;
    if (iStack000000000000000c == 0) {
      unaff_x19[1] = 0;
      goto LAB_03ca5f50;
    }
    lVar3 = *(long *)(unaff_x19 + 2);
    if (lVar3 == 0) goto LAB_03ca6024;
    if (*(int *)(lVar3 + 0x18) == 0) goto LAB_03ca6028;
    lVar1 = *(long *)(param_3 + 0x20);
    unaff_x19[1] = *(int *)(lVar3 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02dcfd18();
    }
    lVar1 = *(long *)(lVar1 + 0xc0);
    puVar2 = (undefined8 *)((long)&stack0x00000008 + 4);
    param_2 = 0;
  }
  else {
    lVar1 = *(long *)(param_3 + 0x20);
    lVar3 = *(long *)(unaff_x19 + 2);
    iStack0000000000000008 = in_w8 + -1;
    param_2 = param_2 + -1;
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02dcfd18();
    }
    lVar1 = *(long *)(lVar1 + 0xc0);
    puVar2 = (undefined8 *)&stack0x00000008;
  }
  FUN_0352f3b0(lVar3,puVar2,param_2,*(undefined8 *)(lVar1 + 0xc0));
LAB_03ca5f50:
  *unaff_x19 = *unaff_x19 + -1;
  return;
}


