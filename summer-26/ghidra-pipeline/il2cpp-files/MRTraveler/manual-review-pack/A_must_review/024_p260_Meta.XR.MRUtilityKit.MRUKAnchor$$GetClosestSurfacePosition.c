/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$GetClosestSurfacePosition
ENTRY_POINT: 06de2db8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 151
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__GetClosestSurfacePosition
               (ulong param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long unaff_x21;
  undefined1 auVar8 [12];
  int iStack0000000000000008;
  int iStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e699d0);
    FUN_03c8f898(PTR_DAT_08e69920);
    FUN_03c8f898(PTR_DAT_08e6de38);
    FUN_03c8f898(PTR_DAT_08e91940);
    FUN_03c8f898(PTR_DAT_08e698c0);
    *(undefined1 *)(unaff_x21 + 0xd9b) = 1;
  }
  puVar3 = PTR_DAT_08e6de38;
  puVar1 = PTR_DAT_08e698c0;
  uVar4 = FUN_06f74e14(*param_4,0);
  if ((uVar4 & 1) == 0) {
    uVar5 = FUN_06f7465c(*(undefined8 *)puVar1,*param_4,*(undefined8 *)puVar3,0);
    if (param_3 == 0) goto LAB_06de2f68;
    FUN_06f7c2f0(param_3,uVar5,0);
  }
  puVar2 = PTR_DAT_08e69920;
  if (param_4[10] != 0) {
    auVar8 = FUN_06de0874();
    iVar7 = auVar8._8_4_;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar5 = FUN_0708e304(auVar8._0_8_,0);
    uVar4 = thunk_FUN_06f73d88(uVar5,*param_4,0);
    if ((uVar4 & 1) == 0) {
      uVar6 = FUN_06f7465c(*(undefined8 *)puVar1,*param_4,*(undefined8 *)puVar3,0);
      if (param_3 == 0) goto LAB_06de2f68;
      FUN_06f7c2f0(param_3,uVar6,0);
      if (iVar7 == 0) {
        return;
      }
      iStack0000000000000008 = iVar7;
      uVar6 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e699d0,&stack0x00000008);
      uVar5 = FUN_06f75240(*(undefined8 *)PTR_DAT_08e91940,uVar5,uVar6,0);
    }
    else {
      if (iVar7 == 0) {
        return;
      }
      iStack000000000000000c = iVar7;
      uVar6 = thunk_FUN_03cf4e64(*(undefined8 *)PTR_DAT_08e699d0,(long)&stack0x00000008 + 4);
      uVar5 = FUN_06f75240(*(undefined8 *)PTR_DAT_08e91940,uVar5,uVar6,0);
      if (param_3 == 0) goto LAB_06de2f68;
    }
    FUN_06f7c2f0(param_3,uVar5,0);
    return;
  }
LAB_06de2f68:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


