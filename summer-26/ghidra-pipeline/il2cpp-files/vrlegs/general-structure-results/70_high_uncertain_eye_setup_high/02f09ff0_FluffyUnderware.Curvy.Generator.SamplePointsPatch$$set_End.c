/*
FUNCTION_NAME: FluffyUnderware.Curvy.Generator.SamplePointsPatch$$set_End
ENTRY_POINT: 02f09ff0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f0a13c) */

void FluffyUnderware_Curvy_Generator_SamplePointsPatch__set_End(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  int in_w9;
  long lVar4;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  if (unaff_w21 < in_w9) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01a58e78(param_1);
      unaff_x22 = **(long **)(*unaff_x23 + 0xb8);
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    lVar4 = *(long *)PTR_DAT_03d22268;
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    uVar3 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 200));
    if ((uVar3 & 1) == 0) {
      *(undefined4 *)(unaff_x22 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(unaff_x22 + 0x18);
      *(undefined4 *)(unaff_x22 + 0x18) = 0;
      if (0 < iVar1) {
        FUN_02793a34(*(undefined8 *)(unaff_x22 + 0x10),0,iVar1,0);
      }
    }
    if (**(long **)(*unaff_x23 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02216540();
    if (**(long **)(*unaff_x23 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02219654(**(long **)(*unaff_x23 + 0xb8),*(undefined8 *)PTR_DAT_03d22270);
  }
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar2 = FUN_027a9460(2,0);
  lVar4 = *unaff_x23;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar4 = *unaff_x23;
  }
  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 8) = uVar2;
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


