/*
FUNCTION_NAME: OVRPlugin.OVRP_1_10_0$$.cctor
ENTRY_POINT: 06970a1c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_10_0___cctor(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x20;
  int iVar5;
  long unaff_x21;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  
code_r0x06970a1c:
  FUN_0697110c();
  lVar2 = FUN_0694d3e8(unaff_x21,0);
  if (lVar2 != 0) {
    FUN_06971364();
    uVar3 = FUN_0674e2a4((long)&stack0x00000008 + 4,0);
    FUN_065c0764(*unaff_x27,uVar3,0);
    FUN_0697110c();
    lVar2 = FUN_0694d460(unaff_x21,0);
    while (lVar2 != 0) {
      FUN_06971364();
      do {
        in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
        if ((*(long *)(unaff_x20 + 0xe8) == 0) ||
           (lVar2 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x50), lVar2 == 0)) goto LAB_06970bbc;
        if (*(int *)(lVar2 + 0x18) <= in_stack_00000008._4_4_) {
          FUN_0697110c();
          FUN_06971364();
          FUN_0697110c();
          FUN_06971364();
          FUN_0697110c();
          puVar1 = PTR_DAT_084b5da8;
          plVar4 = *(long **)(unaff_x20 + 0xe0);
          if (plVar4 == (long *)0x0) goto LAB_06970bbc;
          iVar5 = 0;
          goto LAB_06970b08;
        }
        unaff_x21 = FUN_04de82e0(lVar2,in_stack_00000008._4_4_,*unaff_x24);
        uVar3 = FUN_0674e2a4((long)&stack0x00000008 + 4,0);
        FUN_065c0764(*unaff_x25,uVar3,0);
        FUN_0697110c();
        FUN_06971364();
        if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x48) == 0)) goto LAB_06970bbc;
        iVar5 = *(int *)(*(long *)(unaff_x21 + 0x48) + 0x18);
        if (iVar5 == 2) {
          uVar3 = FUN_0674e2a4((long)&stack0x00000008 + 4,0);
          FUN_065c0764(*unaff_x26,uVar3,0);
          goto code_r0x06970a1c;
        }
      } while (iVar5 != 1);
      uVar3 = FUN_0674e2a4((long)&stack0x00000008 + 4,0);
      FUN_065c0764(*unaff_x28,uVar3,0);
      FUN_0697110c();
      if (*(long *)(unaff_x21 + 0x48) == 0) break;
      lVar2 = FUN_04de82e0(*(long *)(unaff_x21 + 0x48),0,*unaff_x29);
    }
  }
LAB_06970bbc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
LAB_06970b08:
  lVar2 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
  if (lVar2 == 0) goto LAB_06970bbc;
  if (*(int *)(lVar2 + 0x18) <= iVar5) {
    return;
  }
  plVar4 = *(long **)(unaff_x20 + 0xe0);
  if ((((plVar4 == (long *)0x0) ||
       (lVar2 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240)), lVar2 == 0)
       ) || (lVar2 = FUN_04de82e0(lVar2,iVar5,*(undefined8 *)puVar1), lVar2 == 0)) ||
     (plVar4 = (long *)thunk_FUN_03a9a6e8(lVar2,0), plVar4 == (long *)0x0)) goto LAB_06970bbc;
  (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
  FUN_0697110c();
  plVar4 = *(long **)(unaff_x20 + 0xe0);
  if ((plVar4 == (long *)0x0) ||
     (lVar2 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240)), lVar2 == 0))
  goto LAB_06970bbc;
  FUN_04de82e0(lVar2,iVar5,*(undefined8 *)puVar1);
  FUN_06971364();
  plVar4 = *(long **)(unaff_x20 + 0xe0);
  iVar5 = iVar5 + 1;
  if (plVar4 == (long *)0x0) goto LAB_06970bbc;
  goto LAB_06970b08;
}


