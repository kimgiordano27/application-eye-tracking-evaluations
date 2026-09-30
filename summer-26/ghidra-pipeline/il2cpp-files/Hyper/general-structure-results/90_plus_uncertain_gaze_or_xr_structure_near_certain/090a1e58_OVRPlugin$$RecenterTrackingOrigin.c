/*
FUNCTION_NAME: OVRPlugin$$RecenterTrackingOrigin
ENTRY_POINT: 090a1e58
PROGRAM: Hyper-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin__RecenterTrackingOrigin(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  long unaff_x23;
  long *plVar6;
  
  puVar1 = PTR_DAT_0ac0ab60;
  plVar6 = *(long **)(unaff_x23 + 0xe98);
  if ((*(byte *)(unaff_x22 + 0x280) & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac78bb0);
    FUN_04947ee4(PTR_DAT_0ac76660);
    FUN_04947ee4(PTR_DAT_0ac78ea0);
    FUN_04947ee4(PTR_DAT_0ac0ab60);
    FUN_04947ee4(PTR_DAT_0ac78d28);
    FUN_04947ee4(PTR_DAT_0ac78e98);
    *(undefined1 *)(unaff_x22 + 0x280) = 1;
  }
  lVar4 = *plVar6;
  if (param_2 != 0) {
    lVar4 = param_2;
  }
  lVar3 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
  FUN_0a17c2c0(lVar3,lVar4,0);
  if ((lVar3 != 0) && (lVar4 = FUN_0a17b7e4(lVar3,0), puVar1 = PTR_DAT_0ac78ea0, lVar4 != 0)) {
    FUN_0a18ac70(lVar4,param_1,0,0);
    FUN_0a17ba14(lVar3,0,0);
    lVar4 = FUN_05bde8d8(lVar3,*(undefined8 *)puVar1);
    if ((param_1 != 0) &&
       (uVar5 = FUN_05b00274(param_1,*(undefined8 *)PTR_DAT_0ac76660), puVar2 = PTR_DAT_0ac78d28,
       puVar1 = PTR_DAT_0ac78bb0, lVar4 != 0)) {
      *(undefined8 *)(lVar4 + 200) = uVar5;
      thunk_FUN_049ee3d8();
      uVar5 = FUN_05b00274(param_1,*(undefined8 *)puVar1);
      FUN_0717c458(lVar4,uVar5,*(undefined8 *)puVar2);
      FUN_0a17ba14(lVar3,1,0);
      return lVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


