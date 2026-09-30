/*
FUNCTION_NAME: OVRManager$$SetOpenVRLocalPose
ENTRY_POINT: 01d69bcc
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRManager__SetOpenVRLocalPose(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  
  FUN_00fdc2e4();
  FUN_00fdc2e4(PTR_DAT_023588e8);
  FUN_00fdc2e4(PTR_DAT_023588f0);
  FUN_00fdc2e4(PTR_DAT_023588f8);
  *(undefined1 *)(unaff_x20 + 0x728) = 1;
  plVar6 = (long *)(unaff_x19 + 0x28);
  lVar1 = *plVar6;
  if (lVar1 == 0) {
    puVar4 = (undefined8 *)PTR_DAT_023588d0;
    switch(*(undefined4 *)(unaff_x19 + 0x18)) {
    case 0:
      puVar4 = (undefined8 *)PTR_DAT_023588f8;
      break;
    case 1:
      lVar1 = *(long *)(unaff_x19 + 0x10);
      if (lVar1 == 0) goto LAB_01d69d40;
      puVar4 = (undefined8 *)PTR_DAT_023588f0;
      if ((*(int *)(lVar1 + 0x10) < 5) &&
         ((*(int *)(lVar1 + 0x10) != 4 || (*(int *)(lVar1 + 0x14) < 1)))) {
        puVar4 = (undefined8 *)PTR_DAT_023588d8;
      }
      break;
    case 3:
      puVar4 = (undefined8 *)PTR_DAT_023588c8;
      break;
    case 4:
      puVar4 = (undefined8 *)PTR_DAT_023588e8;
      break;
    case 5:
      puVar4 = (undefined8 *)PTR_DAT_023588e0;
      break;
    case 6:
      puVar4 = (undefined8 *)PTR_DAT_023588c0;
    }
    uVar7 = *puVar4;
    uVar2 = FUN_01c42558(*(undefined8 *)(unaff_x19 + 0x20),0);
    plVar5 = *(long **)(unaff_x19 + 0x10);
    if (plVar5 == (long *)0x0) {
LAB_01d69d40:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if ((uVar2 & 1) == 0) {
      uVar3 = FUN_01d6774c(plVar5,3);
      lVar1 = FUN_01c51498(uVar7,uVar3,*(undefined8 *)PTR_DAT_0234d510,
                           *(undefined8 *)(unaff_x19 + 0x20),0);
    }
    else {
      uVar3 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      lVar1 = FUN_01c45a74(uVar7,uVar3,0);
    }
    *plVar6 = lVar1;
    thunk_FUN_0106e12c(plVar6,lVar1);
    lVar1 = *plVar6;
  }
  return lVar1;
}


