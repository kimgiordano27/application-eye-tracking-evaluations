/*
FUNCTION_NAME: Meta.WitAi.WitRuntimeRequestConfiguration$$GetConfigData
ENTRY_POINT: 013ddc34
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Meta_WitAi_WitRuntimeRequestConfiguration__GetConfigData(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long lVar4;
  
  FUN_00afcdb0();
  lVar4 = *(long *)(unaff_x19 + 8);
  if (lVar4 != 0) {
    lVar3 = *(long *)System_Collections_Generic_IList<ValueTuple<ComputeBuffer,_int>>_TypeInfo;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    uVar2 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 200));
    if ((uVar2 & 1) == 0) {
      *(undefined4 *)(lVar4 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar4 + 0x18);
      *(undefined4 *)(lVar4 + 0x18) = 0;
      if (0 < iVar1) {
        FUN_0179519c(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
      }
    }
    *(undefined4 *)(unaff_x19 + 0x24) = 0;
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


