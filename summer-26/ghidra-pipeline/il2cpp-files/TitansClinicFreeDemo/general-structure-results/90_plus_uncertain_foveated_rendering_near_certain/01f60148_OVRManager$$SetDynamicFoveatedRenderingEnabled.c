/*
FUNCTION_NAME: OVRManager$$SetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 01f60148
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 103
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


bool OVRManager__SetDynamicFoveatedRenderingEnabled(void)

{
  int iVar1;
  ushort uVar2;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  undefined1 unaff_w26;
  int unaff_w27;
  int unaff_w28;
  long unaff_x29;
  undefined8 in_stack_00000008;
  int *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while (*(uint *)(unaff_x21 + 2) < *(uint *)(unaff_x21 + 1)) {
    unaff_w27 = unaff_w27 + 1;
    unaff_w28 = (uint)*(ushort *)(*unaff_x21 + (long)(int)*(uint *)(unaff_x21 + 2) * 2) +
                unaff_w28 * unaff_w25 + -0x30;
    if (unaff_w22 == unaff_w27) goto LAB_01f60188;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    if (*(char *)(unaff_x29 + 0xcd5) == '\0') {
      thunk_FUN_01279b34();
      thunk_FUN_01279b34();
      *(undefined1 *)(unaff_x29 + 0xcd5) = unaff_w26;
    }
    iVar1 = (int)unaff_x21[2] + 1;
    *(int *)(unaff_x21 + 2) = iVar1;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    if ((*(byte *)(unaff_x20 + 0xcb5) & 1) == 0) {
      thunk_FUN_01279b34(PTR_DAT_027b9de8);
      *(undefined1 *)(unaff_x20 + 0xcb5) = unaff_w26;
    }
    if ((int)*(uint *)(unaff_x21 + 1) <= iVar1) {
LAB_01f6017c:
      *(int *)(unaff_x21 + 2) = (int)unaff_x21[2] + -1;
      unaff_w22 = unaff_w27;
LAB_01f60188:
      *in_stack_00000010 = unaff_w28;
      if (unaff_w22 < in_stack_00000018._4_4_) {
        *(undefined4 *)(unaff_x21 + 2) = in_stack_00000008._4_4_;
      }
      return in_stack_00000018._4_4_ <= unaff_w22;
    }
    if (*(uint *)(unaff_x21 + 1) <= *(uint *)(unaff_x21 + 2)) break;
    uVar2 = *(ushort *)(*unaff_x21 + (long)(int)*(uint *)(unaff_x21 + 2) * 2);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    if (9 < uVar2 - 0x30) goto LAB_01f6017c;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


