/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$ovrpi_SetTrackingCalibratedOrigin
ENTRY_POINT: 05d466f8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin_OVRP_1_2_0__ovrpi_SetTrackingCalibratedOrigin
               (ulong param_1,long param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x23;
  undefined8 *puVar4;
  long unaff_x24;
  undefined8 *puVar5;
  long unaff_x25;
  undefined8 *puVar6;
  long unaff_x26;
  undefined4 uStack000000000000000c;
  
  puVar6 = *(undefined8 **)(unaff_x25 + 0xa8);
  puVar5 = *(undefined8 **)(unaff_x24 + 0xe0);
  puVar4 = *(undefined8 **)(unaff_x23 + 0xe20);
  if ((param_1 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06f70a48);
    FUN_02fe925c(PTR_DAT_06f6de20);
    FUN_02fe925c(PTR_DAT_06fb90a8);
    FUN_02fe925c(PTR_DAT_06fb90e0);
    *(undefined1 *)(unaff_x26 + 0xb50) = 1;
  }
  uStack000000000000000c = param_3;
  uVar1 = thunk_FUN_0301043c(*puVar6,&stack0x0000000c);
  uVar1 = FUN_059693f4(*puVar5,uVar1,0);
  lVar2 = thunk_FUN_0301080c(*puVar4);
  FUN_068f8d14(lVar2,uVar1,0);
  if ((lVar2 != 0) && (lVar2 = FUN_03c732ac(lVar2,*(undefined8 *)PTR_DAT_06f70a48), lVar2 != 0)) {
    FUN_06974748(0x3f800000,lVar2,0);
    FUN_06974924(lVar2,1,0);
    UnityEngine_UIElements_Experimental_Easing__InElastic(lVar2,0,0);
    FUN_06974aa4(lVar2,3,0);
    lVar3 = FUN_068f5d7c(lVar2,0);
    if (lVar3 != 0) {
      FUN_06904d10(lVar3,param_4,0,0);
      uVar1 = FUN_068f5d7c(lVar2,0);
      FUN_05cb1b24(uVar1,param_5,0,0);
      FUN_06975558(lVar2,0);
      lVar3 = FUN_068f5db8(lVar2,0);
      if (lVar3 != 0) {
        FUN_068f8b44(lVar3,0,0);
        lVar3 = FUN_068f5db8(lVar2,0);
        if (lVar3 != 0) {
          FUN_068f8b00(lVar3,*(undefined4 *)(param_2 + 0x4c),0);
          return lVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


