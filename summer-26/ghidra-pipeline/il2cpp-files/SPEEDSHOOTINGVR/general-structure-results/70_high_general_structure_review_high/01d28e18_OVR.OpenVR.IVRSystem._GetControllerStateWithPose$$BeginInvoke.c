/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$BeginInvoke
ENTRY_POINT: 01d28e18
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetControllerStateWithPose__BeginInvoke(void)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint in_w8;
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
  
  while (in_w8 < 0x80) {
    while( true ) {
      unaff_w21 = unaff_w21 + 1;
      if (*(int *)(unaff_x20 + 0x10) <= unaff_w21) {
        return;
      }
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      iVar3 = FUN_01c6c1d0();
      if (iVar3 == 0xb) goto OVR_OpenVR_IVRSystem__GetControllerStateWithPose__Invoke;
      if (iVar3 == 0xe) break;
      if (((((iVar3 - 0x10U < 2) || (uVar1 = FUN_01c49538(), (ushort)(uVar1 + unaff_w25) < 6)) ||
           ((ushort)(uVar1 + unaff_w24) < 5)) ||
          (((ushort)(uVar1 + unaff_w23) < 0xc || ((ushort)(uVar1 + 7) < 6)))) ||
         ((ushort)(uVar1 + 0x221) < 0x11)) goto LAB_01d28e4c;
      if (unaff_w26 < uVar1) {
        if ((unaff_w27 + (uint)uVar1 < 0x1b) &&
           ((unaff_w28 << (ulong)(unaff_w27 + (uint)uVar1 & 0x1f) & unaff_w29) != 0))
        goto LAB_01d28e4c;
      }
      else if ((uVar1 - 0x340 < 2) || (uVar1 == unaff_w26)) goto LAB_01d28e4c;
    }
    sVar2 = FUN_01c49538();
    if (sVar2 == 0) break;
OVR_OpenVR_IVRSystem__GetControllerStateWithPose__Invoke:
    uVar4 = FUN_01c49538();
    in_w8 = uVar4 & 0xffff;
  }
LAB_01d28e4c:
  iStack000000000000000c = unaff_w19 + unaff_w21;
  uVar5 = thunk_FUN_010303a8(PTR_DAT_0234bb30);
  uVar5 = thunk_FUN_0103fd0c(uVar5,&stack0x0000000c);
  uVar6 = thunk_FUN_010303a8(PTR_DAT_023574c8);
  uVar5 = FUN_01c444f4(uVar6,uVar5,0);
  thunk_FUN_010303a8(PTR_DAT_0234bcd0);
  uVar6 = thunk_FUN_010400dc();
  FUN_01c65ad0(uVar6,uVar5,0);
  uVar5 = thunk_FUN_010303a8(PTR_DAT_023574d0);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar6,uVar5);
}


