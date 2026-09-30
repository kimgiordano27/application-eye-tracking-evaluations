/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceBoundingBox2D
ENTRY_POINT: 0516ddc4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceBoundingBox2D(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  int unaff_w22;
  uint unaff_w23;
  int unaff_w24;
  int iVar6;
  int unaff_w25;
  undefined8 *unaff_x26;
  int unaff_w27;
  int unaff_w28;
  int unaff_w29;
  
  do {
    if (unaff_x21 == (long *)0x0) {
LAB_0516ded0:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0516ded0 to 0526dee7 has its CatchHandler @ 0516df68 */
      FUN_02d60ae8();
    }
    FUN_04e97938(unaff_x21,*(undefined8 *)(unaff_x19 + 0x90),0,param_1,0);
    iVar6 = 0;
    if ((int)unaff_w23 < unaff_w24) {
      iVar6 = unaff_w29 + ~unaff_w23;
      FUN_05029918(*(undefined8 *)(unaff_x19 + 0x88),unaff_w25,*(undefined8 *)(unaff_x19 + 0x88),0,
                   iVar6,0);
    }
    unaff_w27 = unaff_w22 + unaff_w27;
    if (unaff_w20 <= unaff_w27) {
                    /* WARNING: Could not recover jumptable at 0x0516de40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x21 + 0x168))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x170));
      return;
    }
    plVar3 = *(long **)(unaff_x19 + 0x78);
    if (plVar3 == (long *)0x0) goto LAB_0516ded0;
    iVar1 = unaff_w28 - iVar6;
    if (unaff_w20 - unaff_w27 <= unaff_w28 - iVar6) {
      iVar1 = unaff_w20 - unaff_w27;
    }
    unaff_w22 = (**(code **)(*plVar3 + 0x2b8))
                          (plVar3,*(undefined8 *)(unaff_x19 + 0x88),iVar6,iVar1,
                           *(undefined8 *)(*plVar3 + 0x2c0));
    if (unaff_w22 == 0) {
      thunk_FUN_02dc61f4(PTR_DAT_067742f8);
      uVar4 = thunk_FUN_02d9d534();
      uVar5 = thunk_FUN_02dc61f4(PTR_DAT_06779198);
      FUN_04fb7fb4(uVar4,uVar5,0);
      uVar5 = thunk_FUN_02dc61f4(PTR_DAT_067828c0);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar4,uVar5);
    }
    unaff_w29 = unaff_w22 + iVar6;
    if (unaff_w29 == unaff_w20) {
      plVar3 = (long *)FUN_04ea62a0(0);
      if (plVar3 != (long *)0x0) {
        uVar2 = (**(code **)(*plVar3 + 0x2d8))
                          (plVar3,*(undefined8 *)(unaff_x19 + 0x88),0,unaff_w20,
                           *(undefined8 *)(unaff_x19 + 0x90),0,*(undefined8 *)(*plVar3 + 0x2e0));
        FUN_04e938a4(0,*(undefined8 *)(unaff_x19 + 0x90),0,uVar2,0);
        return;
      }
      goto LAB_0516ded0;
    }
    unaff_w24 = unaff_w29 + -1;
    unaff_w23 = FUN_0516dc30();
    if (unaff_x21 == (long *)0x0) {
      unaff_x21 = (long *)thunk_FUN_02d9d534(*unaff_x26);
      FUN_04e962b8(unaff_x21,unaff_w20,0);
    }
    plVar3 = (long *)FUN_04ea62a0(0);
    if (plVar3 == (long *)0x0) goto LAB_0516ded0;
    unaff_w25 = unaff_w23 + 1;
    param_1 = (**(code **)(*plVar3 + 0x2d8))
                        (plVar3,*(undefined8 *)(unaff_x19 + 0x88),0,unaff_w25,
                         *(undefined8 *)(unaff_x19 + 0x90),0,*(undefined8 *)(*plVar3 + 0x2e0));
  } while( true );
}


