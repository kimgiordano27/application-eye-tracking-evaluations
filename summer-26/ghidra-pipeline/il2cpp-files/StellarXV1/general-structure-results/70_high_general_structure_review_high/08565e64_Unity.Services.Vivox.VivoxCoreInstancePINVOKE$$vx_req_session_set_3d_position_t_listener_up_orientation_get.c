/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_3d_position_t_listener_up_orientation_get
ENTRY_POINT: 08565e64
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_3d_position_t_listener_up_orientation_get
               (void)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  long unaff_x20;
  int iVar9;
  
  lVar6 = FUN_0858d130();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar1 = *(undefined4 *)(lVar6 + 0x24);
  plVar7 = (long *)FUN_0858d6a4();
  if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  iVar3 = Unity_Services_Vivox_SWIGTYPE_p_p_vx_req_aux_capture_audio_start___ctor(*plVar7,uVar1,0);
  iVar4 = FUN_089c69dc(0);
  plVar7 = (long *)FUN_0858d6a4();
  if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = FUN_0851b560(*plVar7,uVar1,0);
  puVar2 = PTR_DAT_0932eca0;
  if (*(int *)(*(long *)PTR_DAT_0932eca0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_0844a164(lVar6,0);
  if (unaff_x20 != 0) {
    thunk_FUN_0899751c();
    if (iVar3 == iVar4) {
      FUN_089a5960(0);
    }
    thunk_FUN_0899751c();
    piVar8 = (int *)FUN_0858d700();
    iVar9 = 0x3f800000;
    if (piVar8[6] == 0) {
      iVar9 = piVar8[1];
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    thunk_FUN_089971ec(iVar9);
    thunk_FUN_089971ec(piVar8[4]);
    if (*piVar8 == 4) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if (*(int *)(*(long *)PTR_DAT_0932d570 + 0xe4) == 0) {
        thunk_FUN_040d65a8(*(long *)PTR_DAT_0932d570);
      }
      FUN_085656d8(piVar8);
      FUN_08998914();
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar9 = FUN_089ac10c(*(long *)(lVar6 + 0x18),0);
    if (((iVar9 == 8) || (iVar9 == 0x3b)) || (iVar9 == 0x4a)) {
      if (*(int *)(*(long *)PTR_DAT_0932eca8 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_08995630();
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_0932eca8 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_08995834();
    }
    FUN_0858ca98();
    if (*(int *)(*(long *)PTR_DAT_092b79b8 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_092b79b8);
    }
    FUN_0845f248();
    puVar2 = PTR_DAT_09326db8;
    if (*(int *)(*(long *)PTR_DAT_09326db8 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0845979c();
    if (iVar3 != iVar4) {
      lVar6 = FUN_08994c2c();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_0899385c(lVar6,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0845979c();
      plVar7 = (long *)FUN_0858d6a4();
      lVar6 = *plVar7;
      uVar5 = FUN_089c69dc(0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_0851b5c4(lVar6,uVar1,uVar5,0);
    }
    FUN_0840a284(&stack0x0000002c,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


