/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.AppPerfFrameStats>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 0566e78c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_Array_InternalEnumerator<OVRPlugin_AppPerfFrameStats>__System_Collections_IEnumerator_Reset
               (undefined8 param_1,int param_2,long param_3)

{
  uint uVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int in_w8;
  int *unaff_x19;
  undefined8 uVar5;
  int iStack000000000000000c;
  
  if (in_ZR || in_NG != in_OV) {
    thunk_FUN_03d1e194(PTR_DAT_091ab0b0);
    uVar5 = thunk_FUN_03d2ef40();
    uVar4 = thunk_FUN_03d1e194(PTR_DAT_091b4480);
    FUN_070ccddc(uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar5,param_3);
  }
  iStack000000000000000c = in_w8 + -1;
  if (param_2 == 0) {
    uVar1 = in_w8 - 2;
    if (1 < in_w8) {
      lVar2 = *(long *)(unaff_x19 + 6);
      if (lVar2 != 0) {
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          lVar2 = lVar2 + (long)(int)uVar1 * 0x10;
          uVar5 = *(undefined8 *)(lVar2 + 0x20);
          *(undefined8 *)(unaff_x19 + 4) = *(undefined8 *)(lVar2 + 0x28);
          *(undefined8 *)(unaff_x19 + 2) = uVar5;
          thunk_FUN_03d1023c(unaff_x19 + 2,0);
          lVar2 = *(long *)(unaff_x19 + 6);
          if (lVar2 == 0)
          goto System_Array_InternalEnumerator<OVRPlugin_BodyJointLocation>__get_Current;
          if (uVar1 < *(uint *)(lVar2 + 0x18)) {
            lVar2 = lVar2 + (long)(int)uVar1 * 0x10;
            puVar3 = (undefined8 *)(lVar2 + 0x20);
            *puVar3 = 0;
            *(undefined8 *)(lVar2 + 0x28) = 0;
            thunk_FUN_03d1023c(puVar3,0);
            goto LAB_0566e83c;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
System_Array_InternalEnumerator<OVRPlugin_BodyJointLocation>__get_Current:
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    unaff_x19[2] = 0;
    unaff_x19[3] = 0;
    unaff_x19[4] = 0;
    unaff_x19[5] = 0;
  }
  else {
    lVar2 = *(long *)(param_3 + 0x20);
    uVar5 = *(undefined8 *)(unaff_x19 + 6);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    FUN_04e422b4(uVar5,&stack0x0000000c,param_2 + -1,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 200))
    ;
  }
LAB_0566e83c:
  *unaff_x19 = *unaff_x19 + -1;
  return;
}


