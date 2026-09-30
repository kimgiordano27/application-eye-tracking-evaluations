/*
FUNCTION_NAME: SharedDeoVR.Generated.V1Services.ScriptFileStreamingRoute.Request$$.ctor
ENTRY_POINT: 093ecb38
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool SharedDeoVR_Generated_V1Services_ScriptFileStreamingRoute_Request___ctor
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  code *in_x9;
  long unaff_x19;
  long *unaff_x20;
  
  uVar2 = (*in_x9)(param_2,param_3,*(undefined8 *)(param_1 + 0x2b0));
  if ((uVar2 & 1) == 0) {
    if (unaff_x20 == (long *)0x0) goto LAB_093ecbe8;
    uVar4 = (**(code **)(*unaff_x20 + 0x2e8))();
    uVar2 = thunk_FUN_08bd7c8c(uVar4,*(undefined8 *)PTR_DAT_0ac8ada8,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = (**(code **)(*unaff_x20 + 0x2f8))();
      plVar5 = (long *)thunk_FUN_04956588();
      if (plVar5 == (long *)0x0) goto LAB_093ecbe8;
      lVar6 = (**(code **)(*plVar5 + 0x2f8))(plVar5,*(undefined8 *)(*plVar5 + 0x300));
      if (lVar3 == lVar6) goto LAB_093ecb44;
    }
    bVar1 = false;
  }
  else {
LAB_093ecb44:
    if (*(long *)(unaff_x19 + 0x90) == 0) {
LAB_093ecbe8:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar3 = FUN_093d3194();
    bVar1 = lVar3 != 0;
  }
  return bVar1;
}


