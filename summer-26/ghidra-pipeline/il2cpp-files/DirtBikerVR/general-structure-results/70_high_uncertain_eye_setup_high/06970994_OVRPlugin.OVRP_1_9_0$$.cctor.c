/*
FUNCTION_NAME: OVRPlugin.OVRP_1_9_0$$.cctor
ENTRY_POINT: 06970994
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


void OVRPlugin_OVRP_1_9_0___cctor(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
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
  
  do {
    if (*(int *)(param_1 + 0x18) == 2) {
      uVar2 = FUN_0674e2a4((long)&stack0x00000008 + 4,0);
      FUN_065c0764(*unaff_x26,uVar2,0);
      FUN_0697110c();
      lVar3 = FUN_0694d3e8(unaff_x21,0);
      if (lVar3 == 0) goto LAB_06970bbc;
      FUN_06971364();
      uVar2 = FUN_0674e2a4((long)&stack0x00000008 + 4,0);
      FUN_065c0764(*unaff_x27,uVar2,0);
      FUN_0697110c();
      lVar3 = FUN_0694d460(unaff_x21,0);
      if (lVar3 == 0) goto LAB_06970bbc;
LAB_06970a80:
      FUN_06971364();
    }
    else if (*(int *)(param_1 + 0x18) == 1) {
      uVar2 = FUN_0674e2a4((long)&stack0x00000008 + 4,0);
      FUN_065c0764(*unaff_x28,uVar2,0);
      FUN_0697110c();
      if ((*(long *)(unaff_x21 + 0x48) != 0) &&
         (lVar3 = FUN_04de82e0(*(long *)(unaff_x21 + 0x48),0,*unaff_x29), lVar3 != 0))
      goto LAB_06970a80;
      goto LAB_06970bbc;
    }
    in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
    if ((*(long *)(unaff_x20 + 0xe8) == 0) ||
       (lVar3 = *(long *)(*(long *)(unaff_x20 + 0xe8) + 0x50), lVar3 == 0)) goto LAB_06970bbc;
    if (*(int *)(lVar3 + 0x18) <= in_stack_00000008._4_4_) {
      FUN_0697110c();
      FUN_06971364();
      FUN_0697110c();
      FUN_06971364();
      FUN_0697110c();
      puVar1 = PTR_DAT_084b5da8;
      plVar4 = *(long **)(unaff_x20 + 0xe0);
      if (plVar4 != (long *)0x0) {
        iVar5 = 0;
        break;
      }
      goto LAB_06970bbc;
    }
    unaff_x21 = FUN_04de82e0(lVar3,in_stack_00000008._4_4_,*unaff_x24);
    uVar2 = FUN_0674e2a4((long)&stack0x00000008 + 4,0);
    FUN_065c0764(*unaff_x25,uVar2,0);
    FUN_0697110c();
    FUN_06971364();
    if ((unaff_x21 == 0) || (param_1 = *(long *)(unaff_x21 + 0x48), param_1 == 0))
    goto LAB_06970bbc;
  } while( true );
LAB_06970b08:
  lVar3 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
  if (lVar3 == 0) {
LAB_06970bbc:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(int *)(lVar3 + 0x18) <= iVar5) {
    return;
  }
  plVar4 = *(long **)(unaff_x20 + 0xe0);
  if ((((plVar4 == (long *)0x0) ||
       (lVar3 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240)), lVar3 == 0)
       ) || (lVar3 = FUN_04de82e0(lVar3,iVar5,*(undefined8 *)puVar1), lVar3 == 0)) ||
     (plVar4 = (long *)thunk_FUN_03a9a6e8(lVar3,0), plVar4 == (long *)0x0)) goto LAB_06970bbc;
  (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
  FUN_0697110c();
  plVar4 = *(long **)(unaff_x20 + 0xe0);
  if ((plVar4 == (long *)0x0) ||
     (lVar3 = (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240)), lVar3 == 0))
  goto LAB_06970bbc;
  FUN_04de82e0(lVar3,iVar5,*(undefined8 *)puVar1);
  FUN_06971364();
  plVar4 = *(long **)(unaff_x20 + 0xe0);
  iVar5 = iVar5 + 1;
  if (plVar4 == (long *)0x0) goto LAB_06970bbc;
  goto LAB_06970b08;
}


