/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__807_115
ENTRY_POINT: 056ac5b4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__807_115(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long *in_stack_00000010;
  
  lVar1 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 8);
  if (lVar1 != 0) {
    uVar2 = FUN_04fd7a18(lVar1,*(undefined4 *)(unaff_x19 + 0x10),&stack0x00000010,
                         *(undefined8 *)Yapp_Interpolate_ToVector3<Transform>_TypeInfo);
    if ((uVar2 & 1) == 0) {
      lVar1 = *unaff_x20;
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar1 = *unaff_x20;
      }
      lVar3 = *(long *)(lVar1 + 0xb8);
      if ((*(char *)(lVar3 + 0x10) == '\0') && (*(int *)(unaff_x19 + 0x10) == 0x773889f6)) {
        if (*(int *)(lVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar3 = *(long *)(*unaff_x20 + 0xb8);
        }
        *(long *)(lVar3 + 0x18) = unaff_x19;
        LeanTween__value((long *)(lVar3 + 0x18));
      }
    }
    else {
      if (in_stack_00000010 == (long *)0x0) goto LAB_056ac664;
      (**(code **)(*in_stack_00000010 + 0x178))();
    }
    return;
  }
LAB_056ac664:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


