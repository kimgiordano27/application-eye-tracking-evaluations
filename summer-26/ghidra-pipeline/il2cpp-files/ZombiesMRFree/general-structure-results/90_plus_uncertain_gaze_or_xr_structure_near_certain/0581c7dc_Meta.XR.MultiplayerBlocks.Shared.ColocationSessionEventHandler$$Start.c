/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$Start
ENTRY_POINT: 0581c7dc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__Start
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6,uint param_7)

{
  long lVar1;
  ulong uVar2;
  int unaff_w21;
  undefined8 in_stack_00000008;
  
  if (unaff_w21 <= (int)param_7) {
    if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    do {
      if (*(uint *)(param_6 + 0x18) <= param_7) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      in_stack_00000008._4_4_ = *(undefined4 *)(param_6 + (long)(int)param_7 * 0x10 + 0x20);
      uVar2 = FUN_05b01824(param_1,(long)&stack0x00000008 + 4,0);
      if ((uVar2 & 1) != 0) {
        lVar1 = param_6 + (long)(int)param_7 * 0x10;
        in_stack_00000008._4_4_ = *(undefined4 *)(lVar1 + 0x24);
        uVar2 = FUN_05b01824(param_2,(long)&stack0x00000008 + 4,0);
        if ((uVar2 & 1) != 0) {
          in_stack_00000008._4_4_ = *(undefined4 *)(lVar1 + 0x28);
          uVar2 = FUN_05b01824(param_3,(long)&stack0x00000008 + 4,0);
          if ((uVar2 & 1) != 0) {
            in_stack_00000008._4_4_ = *(undefined4 *)(param_6 + (long)(int)param_7 * 0x10 + 0x2c);
            uVar2 = FUN_05b01824(param_4,(long)&stack0x00000008 + 4,0);
            if ((uVar2 & 1) != 0) {
              return param_7;
            }
          }
        }
      }
      param_7 = param_7 - 1;
    } while (unaff_w21 <= (int)param_7);
  }
  return 0xffffffff;
}


