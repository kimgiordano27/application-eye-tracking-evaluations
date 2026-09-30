/*
FUNCTION_NAME: OVRPlugin.OVRP_1_87_0$$ovrp_AreControllerDrivenHandPosesNatural
ENTRY_POINT: 06979dc8
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


void OVRPlugin_OVRP_1_87_0__ovrp_AreControllerDrivenHandPosesNatural(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  float fVar5;
  float unaff_s8;
  undefined8 in_stack_00000008;
  float in_stack_00000028;
  float fStack000000000000002c;
  
  fStack000000000000002c = *(float *)(param_1 + 0x24);
  lVar2 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x23 + 0x78));
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_03ac73c0(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0)) {
LAB_06979fd4:
    uVar4 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar4,0);
  }
  if ((*(uint *)(unaff_x21 + 3) & 0xfffffffe) != 0) {
    unaff_x21[5] = lVar2;
    thunk_FUN_03afed3c(unaff_x21 + 5,lVar2);
    in_stack_00000028 = unaff_s8;
    lVar2 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x23 + 0x78),&stack0x00000028);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_03ac73c0(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0))
    goto LAB_06979fd4;
    if (2 < *(uint *)(unaff_x21 + 3)) {
      unaff_x21[6] = lVar2;
      thunk_FUN_03afed3c(unaff_x21 + 6,lVar2);
      in_stack_00000008._4_4_ = unaff_s8 * 3.0;
      lVar2 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x23 + 0x78),(long)&stack0x00000008 + 4);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_03ac73c0(lVar2,*(undefined8 *)(*unaff_x21 + 0x40)), lVar3 == 0))
      goto LAB_06979fd4;
      if ((*(uint *)(unaff_x21 + 3) & 0xfffffffc) != 0) {
        unaff_x21[7] = lVar2;
        thunk_FUN_03afed3c(unaff_x21 + 7,lVar2);
        uVar4 = FUN_065ce7dc(*(undefined8 *)PTR_DAT_084b7568);
        uVar4 = FUN_065c0764(uVar4,*(undefined8 *)PTR_DAT_084b7530,0);
        if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
          thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
        }
        FUN_07c4adbc(uVar4,0);
        fVar5 = (float)FUN_07ca88b8(0);
        puVar1 = PTR_DAT_08486760;
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          fStack000000000000002c = *(float *)(*(long *)(unaff_x19 + 0x20) + 0x28);
          if (fStack000000000000002c < fVar5) {
            thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x78),&stack0x0000002c);
            in_stack_00000028 = fVar5;
            thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x78),&stack0x00000028);
            uVar4 = FUN_065ce798(*(undefined8 *)PTR_DAT_084b7578);
            uVar4 = FUN_065c0764(uVar4,*(undefined8 *)PTR_DAT_084b7560,0);
            if (*(int *)(*(long *)PTR_DAT_08486be8 + 0xe4) == 0) {
              thunk_FUN_03ae8be4(*(long *)PTR_DAT_08486be8);
            }
            FUN_07c4adbc(uVar4,0);
          }
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


