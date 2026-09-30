/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$<GetClosestSeatPoseDebugger>b__56_0
ENTRY_POINT: 06df54c8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long * Meta_XR_MRUtilityKit_SceneDebugger__<GetClosestSeatPoseDebugger>b__56_0
                 (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x19;
  
  puVar1 = PTR_DAT_08e91108;
  if ((*(byte *)(unaff_x19 + 0xe54) & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e91108);
    FUN_03c8f898(PTR_DAT_08e80aa0);
    FUN_03c8f898(PTR_DAT_08e91e58);
    *(undefined1 *)(unaff_x19 + 0xe54) = 1;
  }
  plVar2 = (long *)thunk_FUN_03cf5234(*(undefined8 *)puVar1);
  FUN_06e13f44(plVar2,0);
  plVar3 = (long *)thunk_FUN_03cf5234(*(undefined8 *)puVar1);
  FUN_06e13f44(plVar3,0);
  plVar4 = (long *)thunk_FUN_03cf5234(*(undefined8 *)puVar1);
  FUN_06e13f44(plVar4,0);
  uVar5 = FUN_06e1373c(param_1,0);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x1b8))
              (plVar4,*(undefined8 *)PTR_DAT_08e91e58,uVar5,*(undefined8 *)(*plVar4 + 0x1c0));
    uVar5 = FUN_06df566c(param_2);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x1b8))(plVar3,uVar5,plVar4,*(undefined8 *)(*plVar3 + 0x1c0));
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x1b8))
                  (plVar2,*(undefined8 *)PTR_DAT_08e80aa0,plVar3,*(undefined8 *)(*plVar2 + 0x1c0));
        return plVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


