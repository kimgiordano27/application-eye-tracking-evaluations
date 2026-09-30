/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnAppSpaceChange
ENTRY_POINT: 01f93c9c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_UnityOpenXR__OnAppSpaceChange(undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 in_w8;
  long *unaff_x22;
  uint unaff_w23;
  undefined8 *unaff_x26;
  long *unaff_x28;
  uint unaff_w29;
  long in_stack_00000040;
  
  *(undefined4 *)(param_2 + 0x20) = in_w8;
  lVar2 = thunk_FUN_01f894b8();
  if (unaff_x22 == (long *)0x0) goto LAB_01f92644;
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_0124baac(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
    uVar5 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar5,0);
  }
  if (unaff_w23 < *(uint *)(unaff_x22 + 3)) {
    plVar4 = unaff_x22 + (long)(int)unaff_w23 + 4;
    *plVar4 = lVar2;
    thunk_FUN_01286abc(plVar4,lVar2);
    if (unaff_w23 < *(uint *)(unaff_x22 + 3)) {
      lVar2 = *unaff_x28;
      if (lVar2 == 0) {
LAB_01f92644:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      if (unaff_w23 < *(uint *)(lVar2 + 0x18)) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_01f92644;
        bVar1 = *(byte *)(*(long *)PTR_DAT_027b3f80 + 0x130);
        if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_027b3f80
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_01230f60();
        }
        FUN_01f89750(plVar4,*(undefined8 *)(lVar2 + (long)(int)unaff_w23 * 8 + 0x20),0,0);
        *unaff_x28 = (long)unaff_x22;
        thunk_FUN_01286abc();
        if (unaff_w29 < *(uint *)(in_stack_00000040 + 0x18)) {
          return *unaff_x26;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
}


