/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$Awake
ENTRY_POINT: 051c475c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__Awake
               (undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_02e86b8c(param_1);
  }
  puVar1 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar2 = thunk_FUN_02dfd288(&DAT_06b34960);
  uVar3 = thunk_FUN_02df8d3c(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    __cxa_end_catch();
    thunk_FUN_02dfd288(PTR_DAT_06a20e18,0);
    uVar2 = FUN_0534e494();
    thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
    uVar5 = thunk_FUN_02dd3144();
    FUN_05452924(uVar5,uVar2,0);
    uVar2 = thunk_FUN_02dfd288(PTR_DAT_06a20e20);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar5,uVar2);
  }
  uVar2 = thunk_FUN_02dfd288(&DAT_06b39338);
  uVar3 = thunk_FUN_02df8d3c(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    uVar2 = *puVar1;
    __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
    FUN_02d96858(uVar2);
  }
  uVar2 = thunk_FUN_02dfd288(&DAT_06b32910);
  uVar3 = thunk_FUN_02df8d3c(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    uVar6 = *puVar1;
    __cxa_end_catch();
    thunk_FUN_02dfd288(&DAT_06b34e30);
    uVar2 = thunk_FUN_02dd3144();
    uVar5 = thunk_FUN_02dfd288(&DAT_06b90130);
    FUN_054e802c(uVar2,uVar5,uVar6,0);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar2);
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = *puVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&PTR_PTR_066567d8,0);
}


