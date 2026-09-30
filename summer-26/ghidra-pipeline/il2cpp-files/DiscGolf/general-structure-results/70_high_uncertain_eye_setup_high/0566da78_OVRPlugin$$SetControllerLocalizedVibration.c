/*
FUNCTION_NAME: OVRPlugin$$SetControllerLocalizedVibration
ENTRY_POINT: 0566da78
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetControllerLocalizedVibration(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  long lVar5;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
  *(undefined8 *)(unaff_x19 + 0xf0) = **(undefined8 **)(lVar1 + 0xb8);
  LeanTween__value();
  if (*(long *)(unaff_x19 + 0xe8) != 0) {
    FUN_04df8a2c(&stack0x00000008,*(long *)(unaff_x19 + 0xe8),*unaff_x28);
    in_stack_00000050 = in_stack_00000028;
    in_stack_00000038 = in_stack_00000010;
    in_stack_00000030 = in_stack_00000008;
    in_stack_00000048 = in_stack_00000020;
    in_stack_00000040 = in_stack_00000018;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000030;
    while (uVar2 = FUN_05219894(&stack0x00000030,*unaff_x27), lVar1 = in_stack_00000048,
          (uVar2 & 1) != 0) {
      if (in_stack_00000048 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (0 < (int)*(ulong *)(in_stack_00000048 + 0x18)) {
        uVar2 = 0;
        uVar4 = *(ulong *)(in_stack_00000048 + 0x18) & 0xffffffff;
        lVar5 = in_stack_00000048 + 0x20;
        do {
          if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          lVar3 = *(long *)(lVar5 + uVar2 * 8);
          if (lVar3 != 0) {
            FUN_05679f3c(lVar3,0);
          }
          uVar4 = (ulong)*(uint *)(lVar1 + 0x18);
          uVar2 = uVar2 + 1;
        } while ((long)uVar2 < (long)(int)*(uint *)(lVar1 + 0x18));
      }
    }
    FUN_052199b8(&stack0x00000030,*unaff_x26);
    if (*(long *)(unaff_x19 + 0xe8) != 0) {
      FUN_04df8778(*(long *)(unaff_x19 + 0xe8),*unaff_x25);
      if (*(long *)(unaff_x19 + 0x100) != 0) {
        FUN_04df51a0(*(long *)(unaff_x19 + 0x100),
                     *(undefined8 *)System_Collections_Generic_List<IDataNode>_TypeInfo);
        if (*(long *)(unaff_x19 + 0xf8) != 0) {
          FUN_04e02de0(*(long *)(unaff_x19 + 0xf8),
                       *(undefined8 *)
                        System_Collections_Generic_List<IDebugDisplaySettingsPanelDisposable>_TypeInfo
                      );
          lVar5 = *(long *)System_Collections_Generic_List<IContext>_TypeInfo;
          lVar1 = *(long *)(lVar5 + 0x38);
          if (lVar1 == 0) {
            FUN_02dcfd74(lVar5);
            lVar1 = *(long *)(lVar5 + 0x38);
          }
          lVar1 = *(long *)(lVar1 + 0x10);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_02dcfd18();
          }
          if (*(int *)(lVar1 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          lVar1 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_02dcfd18();
          }
          *(undefined8 *)(unaff_x19 + 0xb8) = **(undefined8 **)(lVar1 + 0xb8);
          LeanTween__value((undefined8 *)(unaff_x19 + 0xb8));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


