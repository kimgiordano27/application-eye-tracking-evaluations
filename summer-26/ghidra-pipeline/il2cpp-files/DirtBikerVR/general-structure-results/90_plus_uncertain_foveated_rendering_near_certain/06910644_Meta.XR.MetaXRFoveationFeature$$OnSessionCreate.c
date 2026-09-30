/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$OnSessionCreate
ENTRY_POINT: 06910644
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 102
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;strong_foveation_hits_2;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFoveationFeature__OnSessionCreate(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  int in_stack_00000010;
  
  uVar1 = thunk_FUN_03aed0c4(param_2,*param_1);
  if ((uVar1 & 1) != 0) {
    uVar5 = *unaff_x20;
    *(undefined8 *)(&stack0x00000008 + (long)in_stack_00000010 * 8) = uVar5;
    in_stack_00000010 = in_stack_00000010 + 1;
    __cxa_end_catch();
    *unaff_x19 = 0xfffffffe;
    lVar2 = thunk_FUN_03af1434(PTR_DAT_084ad6a0);
                    /* try { // try from 06910680 to 06a10777 has its CatchHandler @ 06910680
                       catch() { ... } // from try @ 06910680 with catch @ 06910680
                       catch() { ... } // from try @ 06910904 with catch @ 06910680
                       catch() { ... } // from try @ 06910b1c with catch @ 06910680
                       catch() { ... } // from try @ 06910be0 with catch @ 06910680
                       catch() { ... } // from try @ 06910c60 with catch @ 06910680 */
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar3 = thunk_FUN_03af1434(PTR_DAT_084ada38);
    FUN_05338d34(unaff_x19 + 2,uVar5,uVar3);
    return;
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar4 = *unaff_x20;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&PTR_PTR_07fde6e8,0);
}


