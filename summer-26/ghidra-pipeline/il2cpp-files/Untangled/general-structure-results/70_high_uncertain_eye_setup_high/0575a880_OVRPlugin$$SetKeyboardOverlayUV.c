/*
FUNCTION_NAME: OVRPlugin$$SetKeyboardOverlayUV
ENTRY_POINT: 0575a880
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetKeyboardOverlayUV(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *in_x9;
  long *unaff_x19;
  undefined8 unaff_x21;
  long unaff_x22;
  ulong uVar4;
  long unaff_x23;
  long lVar5;
  undefined8 uVar6;
  undefined8 *unaff_x27;
  
  (*in_x9)(param_2,param_3,*(undefined8 *)(param_1 + 0x6a0));
  if ((*(long *)(unaff_x23 + 0x20) == 0) || (*(long *)(*(long *)(unaff_x23 + 0x20) + 0x18) == 0)) {
LAB_0575a9c0:
                    /* WARNING: Could not recover jumptable at 0x0575a9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x588))();
    return;
  }
  lVar5 = *(long *)(unaff_x23 + 0x28);
  lVar1 = FUN_02f07f14(*unaff_x27,1);
  if (lVar1 != 0) {
    lVar2 = thunk_FUN_02ef170c();
    if (lVar2 == 0) {
      uVar6 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar6,0);
    }
    if (*(int *)(lVar1 + 0x18) == 0) {
LAB_0575a9f0:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    *(undefined8 *)(lVar1 + 0x20) = unaff_x21;
    thunk_FUN_02f411dc();
    if (lVar5 != 0) {
      lVar1 = FUN_056e4c2c(lVar5,lVar1,0);
      if (lVar1 == 0) {
        lVar5 = 0;
      }
      else {
        uVar6 = *unaff_x27;
        lVar5 = thunk_FUN_02ef170c(lVar1,uVar6);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f08440(lVar1,uVar6);
        }
      }
      if (unaff_x22 != 0) {
        FUN_056fd0d8();
      }
      (**(code **)(*unaff_x19 + 0x5d8))();
      (**(code **)(*unaff_x19 + 0x598))();
      if (lVar5 != 0) {
        if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
          uVar4 = 0;
          uVar3 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
          do {
            if (uVar3 <= uVar4) goto LAB_0575a9f0;
            FUN_0569d504();
            uVar3 = (ulong)*(uint *)(lVar5 + 0x18);
            uVar4 = uVar4 + 1;
          } while ((long)uVar4 < (long)(int)*(uint *)(lVar5 + 0x18));
        }
        (**(code **)(*unaff_x19 + 0x5a8))();
        goto LAB_0575a9c0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


