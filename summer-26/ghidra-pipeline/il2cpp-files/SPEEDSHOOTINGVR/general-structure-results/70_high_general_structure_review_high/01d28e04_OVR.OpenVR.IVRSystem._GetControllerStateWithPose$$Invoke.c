/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$Invoke
ENTRY_POINT: 01d28e04
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetControllerStateWithPose__Invoke(void)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  short unaff_w23;
  short unaff_w24;
  short unaff_w25;
  uint unaff_w26;
  int unaff_w27;
  int unaff_w28;
  uint unaff_w29;
  int iStack000000000000000c;
  
code_r0x01d28e04:
  do {
    uVar2 = FUN_01c49538();
    if (0x7f < uVar2) {
LAB_01d28e4c:
      iStack000000000000000c = unaff_w19 + unaff_w21;
      uVar4 = thunk_FUN_010303a8(PTR_DAT_0234bb30);
      uVar4 = thunk_FUN_0103fd0c(uVar4,&stack0x0000000c);
      uVar5 = thunk_FUN_010303a8(PTR_DAT_023574c8);
      uVar4 = FUN_01c444f4(uVar5,uVar4,0);
      thunk_FUN_010303a8(PTR_DAT_0234bcd0);
      uVar5 = thunk_FUN_010400dc();
      FUN_01c65ad0(uVar5,uVar4,0);
      uVar4 = thunk_FUN_010303a8(PTR_DAT_023574d0);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar5,uVar4);
    }
    while( true ) {
      unaff_w21 = unaff_w21 + 1;
      if (*(int *)(unaff_x20 + 0x10) <= unaff_w21) {
        return;
      }
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      iVar3 = FUN_01c6c1d0();
      if (iVar3 == 0xb) goto code_r0x01d28e04;
      if (iVar3 == 0xe) break;
      if (((((iVar3 - 0x10U < 2) || (uVar2 = FUN_01c49538(), (ushort)(uVar2 + unaff_w25) < 6)) ||
           ((ushort)(uVar2 + unaff_w24) < 5)) ||
          (((ushort)(uVar2 + unaff_w23) < 0xc || ((ushort)(uVar2 + 7) < 6)))) ||
         ((ushort)(uVar2 + 0x221) < 0x11)) goto LAB_01d28e4c;
      if (unaff_w26 < uVar2) {
        if ((unaff_w27 + (uint)uVar2 < 0x1b) &&
           ((unaff_w28 << (ulong)(unaff_w27 + (uint)uVar2 & 0x1f) & unaff_w29) != 0))
        goto LAB_01d28e4c;
      }
      else if ((uVar2 - 0x340 < 2) || (uVar2 == unaff_w26)) goto LAB_01d28e4c;
    }
    sVar1 = FUN_01c49538();
    if (sVar1 == 0) goto LAB_01d28e4c;
  } while( true );
}


