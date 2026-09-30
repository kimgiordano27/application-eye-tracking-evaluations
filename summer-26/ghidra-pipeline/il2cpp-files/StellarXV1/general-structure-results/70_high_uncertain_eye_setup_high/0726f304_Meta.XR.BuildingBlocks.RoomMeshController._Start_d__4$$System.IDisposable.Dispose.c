/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<Start>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 0726f304
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController_<Start>d__4__System_IDisposable_Dispose
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  *(undefined8 *)(param_2 + 0x28) = param_4;
  *(undefined8 *)(param_2 + 0x10) = param_1;
  *(undefined8 *)(param_2 + 0x20) = param_3;
  thunk_FUN_040ec700();
  cVar1 = *(char *)(unaff_x20 + 0x52);
  *(long *)(unaff_x19 + 0x40) = unaff_x19;
  uVar2 = FUN_0407768c();
  if ((uVar2 & 1) == 0) {
    if (cVar1 != '\x01') {
      if (unaff_x21 == 0) {
        uVar4 = thunk_FUN_040c22ac(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar4,0);
      }
      goto LAB_0726f378;
    }
    if (*(char *)(unaff_x19 + 0x70) == '\0') {
      pcVar5 = FUN_03ca1bf0;
    }
    else {
      uVar2 = thunk_FUN_040c907c();
      uVar3 = FUN_04077c08();
      if ((uVar2 & 1) == 0) {
        if ((uVar3 & 1) == 0) {
          pcVar5 = FUN_03ca1c24;
        }
        else {
          pcVar5 = FUN_03ca1c50;
        }
      }
      else if ((uVar3 & 1) == 0) {
        pcVar5 = FUN_03ca1cdc;
      }
      else {
        pcVar5 = FUN_03ca1d28;
      }
    }
  }
  else {
    if (cVar1 != '\x02') {
LAB_0726f378:
      *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
      *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x20);
      goto LAB_0726f3c0;
    }
    pcVar5 = FUN_03ca1c10;
  }
  *(code **)(unaff_x19 + 0x18) = pcVar5;
LAB_0726f3c0:
  *(code **)(unaff_x19 + 0x38) = FUN_03ca1b98;
  return;
}


