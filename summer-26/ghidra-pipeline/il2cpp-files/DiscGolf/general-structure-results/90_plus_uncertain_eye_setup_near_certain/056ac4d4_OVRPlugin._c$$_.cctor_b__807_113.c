/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__807_113
ENTRY_POINT: 056ac4d4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x056ac59c) */

void OVRPlugin_<>c__<_cctor>b__807_113(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *in_stack_00000010;
  long *in_stack_00000018;
  long in_stack_00000028;
  
  FUN_02d965b8();
  *(undefined1 *)(unaff_x20 + 0xa95) = 1;
  puVar1 = PTR_DAT_06a0d500;
  in_stack_00000010 = (long *)0x0;
  in_stack_00000018 = (long *)0x0;
  if (unaff_x19 == 0) goto LAB_056ac664;
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    lVar2 = *(long *)PTR_DAT_06a0d500;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_056ac664;
    uVar3 = FUN_04ff3544(**(long **)(lVar2 + 0xb8),*(undefined8 *)(unaff_x19 + 0x18),
                         &stack0x00000018,
                         *(undefined8 *)Yapp_Interpolate_ToVector3<Vector3>_TypeInfo);
    if ((uVar3 & 1) != 0) {
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      (**(code **)(*in_stack_00000018 + 0x178))();
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar2 = *(long *)puVar1;
      }
      if ((in_stack_00000028 != 0) && (**(long **)(lVar2 + 0xb8) != 0)) {
        FUN_04ff2f1c(**(long **)(lVar2 + 0xb8),*(undefined8 *)(in_stack_00000028 + 0x18),
                     *(undefined8 *)Yapp_Interpolate_ToVector3<ControlPoint>_TypeInfo);
        return;
      }
      goto LAB_056ac664;
    }
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 == 0) {
LAB_056ac664:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar3 = FUN_04fd7a18(lVar2,*(undefined4 *)(unaff_x19 + 0x10),&stack0x00000010,
                       *(undefined8 *)Yapp_Interpolate_ToVector3<Transform>_TypeInfo);
  if ((uVar3 & 1) == 0) {
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar2 = *(long *)puVar1;
    }
    lVar4 = *(long *)(lVar2 + 0xb8);
    if ((*(char *)(lVar4 + 0x10) == '\0') && (*(int *)(unaff_x19 + 0x10) == 0x773889f6)) {
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
      }
      *(long *)(lVar4 + 0x18) = unaff_x19;
      LeanTween__value((long *)(lVar4 + 0x18));
    }
  }
  else {
    if (in_stack_00000010 == (long *)0x0) goto LAB_056ac664;
    (**(code **)(*in_stack_00000010 + 0x178))();
  }
  return;
}


