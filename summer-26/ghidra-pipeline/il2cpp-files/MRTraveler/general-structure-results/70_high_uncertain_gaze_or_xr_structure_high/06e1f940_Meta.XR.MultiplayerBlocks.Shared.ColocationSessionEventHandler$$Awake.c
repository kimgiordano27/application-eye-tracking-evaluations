/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$Awake
ENTRY_POINT: 06e1f940
PROGRAM: MRTraveler-libil2cpp.so
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
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *unaff_x19;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_03d91ca0(param_1);
  }
  puVar1 = (undefined8 *)__cxa_begin_catch(param_1);
  uVar2 = thunk_FUN_03ce5214(PTR_DAT_08e695a0);
  uVar3 = thunk_FUN_03ce0d60(uVar2,*(undefined8 *)*puVar1);
  if ((uVar3 & 1) != 0) {
    uVar2 = *puVar1;
    __cxa_end_catch();
    *unaff_x19 = 0xfffffffe;
    lVar4 = thunk_FUN_03ce5214(PTR_DAT_08e780e8);
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e782f0);
    FUN_063c7860(unaff_x19 + 2,uVar2,uVar5);
    return;
  }
  puVar6 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar6 = *puVar1;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar6,&PTR_PTR_088de0a8,0);
}


