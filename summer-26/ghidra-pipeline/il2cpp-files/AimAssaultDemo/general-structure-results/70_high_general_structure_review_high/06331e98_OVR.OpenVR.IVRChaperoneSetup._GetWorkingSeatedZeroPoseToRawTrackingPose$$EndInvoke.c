/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 06331e98
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__EndInvoke
               (ulong param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  undefined8 *puVar7;
  long unaff_x23;
  long unaff_x24;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)(unaff_x24 + 0x1b8);
  puVar7 = *(undefined8 **)(unaff_x22 + 0x798);
  if ((param_1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d97960);
    FUN_0373b518(PTR_DAT_07d979b0);
    FUN_0373b518(PTR_DAT_07d98798);
    FUN_0373b518(PTR_DAT_07da81b8);
    *(undefined1 *)(unaff_x23 + 0x2d4) = 1;
  }
  FUN_06334e90(param_2,*puVar8,0);
  FUN_06334e90(param_3,*puVar7,0);
  iVar2 = FUN_06335930(param_2,0);
  if (iVar2 == 0x10) {
    if (param_2 == (long *)0x0) goto LAB_06331fec;
    lVar6 = *param_2;
    bVar1 = *(byte *)(*(long *)PTR_DAT_07d979b0 + 0x130);
    if ((bVar1 <= *(byte *)(lVar6 + 0x130)) &&
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_07d979b0)) {
                    /* WARNING: Could not recover jumptable at 0x06331fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 0x318))(param_2,param_3,param_4,0,*(undefined8 *)(lVar6 + 800));
      return;
    }
  }
  else {
    if (iVar2 != 4) {
      thunk_FUN_037a15ac(PTR_DAT_07d88078);
      FUN_031ae340();
      uVar3 = FUN_061d52c8(0);
      FUN_031a5e18(param_2);
      uVar4 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
      uVar5 = thunk_FUN_037a15ac(PTR_DAT_07db4158);
      uVar3 = FUN_063349e4(uVar5,uVar3,uVar4,0);
      thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
      uVar4 = thunk_FUN_037788cc();
      uVar5 = thunk_FUN_037a15ac(PTR_DAT_07da81b8);
      FUN_061a1bb8(uVar4,uVar3,uVar5,0);
      uVar3 = thunk_FUN_037a15ac(PTR_DAT_07db4160);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar4,uVar3);
    }
    if (param_2 == (long *)0x0) {
LAB_06331fec:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    bVar1 = *(byte *)(*(long *)PTR_DAT_07d97960 + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_07d97960))
    {
      FUN_06174704(param_2,param_3,param_4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373bb54(param_2);
}


