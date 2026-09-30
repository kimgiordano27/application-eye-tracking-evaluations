/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.Dispatcher$$FlushBufferToService
ENTRY_POINT: 076b7e50
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Analytics_Internal_Dispatcher__FlushBufferToService(long param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  undefined8 *unaff_x23;
  
  do {
    if (*(int *)(param_1 + 0x18) <= unaff_w21) {
LAB_076b7e98:
      FUN_04de937c(param_1,unaff_w21);
      return;
    }
    if (unaff_x19 == 0) goto LAB_076b7e90;
    iVar1 = *(int *)(unaff_x19 + 0x24);
    lVar2 = FUN_04de82e0(param_1,unaff_w21,*unaff_x23);
    if (lVar2 == 0) goto LAB_076b7e90;
    param_1 = *unaff_x20;
    if (*(int *)(lVar2 + 0x24) <= iVar1) {
      if (param_1 != 0) goto LAB_076b7e98;
      goto LAB_076b7e90;
    }
    unaff_w21 = unaff_w21 + 1;
    if (param_1 == 0) {
LAB_076b7e90:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 076b7e90 to 077b7e9b has its CatchHandler @ 076b8154 */
      FUN_03a8a9c0();
    }
  } while( true );
}


