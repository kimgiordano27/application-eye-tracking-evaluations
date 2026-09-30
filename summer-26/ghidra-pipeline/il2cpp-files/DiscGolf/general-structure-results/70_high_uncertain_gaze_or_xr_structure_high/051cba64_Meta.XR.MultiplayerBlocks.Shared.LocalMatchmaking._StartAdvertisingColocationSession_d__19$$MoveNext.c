/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartAdvertisingColocationSession>d__19$$MoveNext
ENTRY_POINT: 051cba64
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartAdvertisingColocationSession>d__19__MoveNext
               (long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  
  uVar1 = thunk_FUN_02dfd288(param_1 + 0x338);
  uVar2 = thunk_FUN_02df8d3c(uVar1,*(undefined8 *)*unaff_x20);
  if ((uVar2 & 1) != 0) {
    uVar1 = *unaff_x20;
    __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(uVar1);
  }
  uVar1 = thunk_FUN_02dfd288(&DAT_06b32910);
  uVar2 = thunk_FUN_02df8d3c(uVar1,*(undefined8 *)*unaff_x20);
  if ((uVar2 & 1) != 0) {
    uVar5 = *unaff_x20;
    __cxa_end_catch();
    thunk_FUN_02dfd288(&DAT_06b34e30);
    uVar1 = thunk_FUN_02dd3144();
    uVar3 = thunk_FUN_02dfd288(&DAT_06b90130);
    FUN_054e802c(uVar1,uVar3,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar1);
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = *unaff_x20;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&PTR_PTR_066567d8,0);
}


