/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.Telemetry$$AddSceneInfo
ENTRY_POINT: 01b0b734
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_BuildingBlocks_Telemetry__AddSceneInfo(undefined8 param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  undefined2 *unaff_x26;
  undefined2 *puVar5;
  undefined8 in_stack_00000008;
  
  do {
    lVar2 = thunk_FUN_0103fd0c(param_1,param_2);
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_0103ffe0(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
      uVar4 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar4,0);
    }
    if (*(uint *)(unaff_x22 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    unaff_x22[(long)(int)unaff_w19 + 4] = lVar2;
    thunk_FUN_0106e12c(unaff_x22 + (long)(int)unaff_w19 + 4,lVar2);
    unaff_w19 = unaff_w19 + 1;
    puVar5 = unaff_x26;
    do {
      unaff_x25 = unaff_x25 + 1;
      unaff_x26 = puVar5 + 8;
      if (unaff_x23 == unaff_x25) {
                    /* try { // try from 01b0b788 to 01c0b7ef has its CatchHandler @ 01b0b8ac */
        return;
      }
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      piVar1 = (int *)(puVar5 + 2);
      puVar5 = unaff_x26;
    } while (*piVar1 < 0);
    in_stack_00000008._4_2_ = *unaff_x26;
    param_1 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40);
    param_2 = (long)&stack0x00000008 + 4;
  } while( true );
}


