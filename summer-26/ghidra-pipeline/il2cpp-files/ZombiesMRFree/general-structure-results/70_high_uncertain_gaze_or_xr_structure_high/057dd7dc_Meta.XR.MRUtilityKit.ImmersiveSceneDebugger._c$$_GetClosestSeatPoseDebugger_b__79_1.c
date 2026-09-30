/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger.<>c$$<GetClosestSeatPoseDebugger>b__79_1
ENTRY_POINT: 057dd7dc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<>c__<GetClosestSeatPoseDebugger>b__79_1
               (long *param_1)

{
  uint uVar1;
  long lVar2;
  void *__src;
  long unaff_x20;
  code *pcVar3;
  long *unaff_x21;
  long lVar4;
  long unaff_x22;
  long in_stack_000022e8;
  
  lVar2 = *param_1;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4();
  }
  if ((unaff_x21 == (long *)0x0) || (*unaff_x21 != lVar2)) {
    uVar1 = 0;
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4();
    }
    lVar2 = **(long **)(lVar2 + 0xc0);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4(lVar2);
    }
    if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar2 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884();
    }
    __src = (void *)thunk_FUN_03010960();
    memcpy(&stack0x00001000,__src,0x1000);
    lVar4 = *(long *)(unaff_x20 + 0x20);
    lVar2 = lVar4;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4(lVar4);
      lVar2 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar3 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x148);
    memcpy(&stack0x00000000,&stack0x00001000,0x1000);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      FUN_02feb2c4(lVar2);
    }
    uVar1 = (*pcVar3)();
  }
  if (*(long *)(unaff_x22 + 0x28) != in_stack_000022e8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1 & 1;
}


