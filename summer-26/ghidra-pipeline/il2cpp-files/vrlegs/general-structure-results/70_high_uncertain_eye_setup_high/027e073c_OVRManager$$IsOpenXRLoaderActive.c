/*
FUNCTION_NAME: OVRManager$$IsOpenXRLoaderActive
ENTRY_POINT: 027e073c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRManager__IsOpenXRLoaderActive(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  uint unaff_w22;
  long lVar5;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  in_stack_00000008 = FUN_027e08b8(&stack0x00000018);
  uVar2 = FUN_0263f694(&stack0x00000008,0);
  lVar5 = 0;
  if ((uVar2 & 1) != 0) {
    in_stack_00000008 = FUN_027e08b8(&stack0x00000018);
    lVar5 = FUN_0263f6a8(&stack0x00000008,0);
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x38);
  lVar1 = *(long *)(unaff_x20 + 0x40);
  if ((unaff_w22 >> 1 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
      uVar3 = uVar2;
      if (lVar1 != 0) goto LAB_027e07e4;
    }
    else {
      uVar3 = FUN_0262fe20(lVar5,0);
      if ((lVar1 != 0) || (uVar2 != 0)) goto LAB_027e07e4;
      uVar3 = uVar3 & 1;
    }
    if (uVar3 == 0) {
      lVar5 = *unaff_x24;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *unaff_x24;
      }
      return **(long **)(lVar5 + 0xb8);
    }
  }
LAB_027e07e4:
  lVar4 = thunk_FUN_01a89e68(*unaff_x24);
  FUN_027b3d9c(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(lVar4 + 0x10),0);
    *(long *)(lVar4 + 0x20) = lVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists((long *)(lVar4 + 0x20),lVar5);
    *(ulong *)(lVar4 + 0x38) = uVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists((ulong *)(lVar4 + 0x38),uVar2)
    ;
    *(long *)(lVar4 + 0x40) = lVar1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists((long *)(lVar4 + 0x40),lVar1);
    *(uint *)(lVar4 + 0x30) = *(uint *)(lVar4 + 0x30) | 1;
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


