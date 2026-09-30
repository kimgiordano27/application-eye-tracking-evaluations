/*
FUNCTION_NAME: Unity.Entities.ChunkIterationUtility.SetEnabledBitsOnAllChunks_00000A4B$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 0308bae8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Entities_ChunkIterationUtility_SetEnabledBitsOnAllChunks_00000A4B_PostfixBurstDelegate__Invoke
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long lVar4;
  
  FUN_02793a34(param_1,0,param_3,0);
  lVar4 = *(long *)(unaff_x19 + 0x68);
  if (lVar4 != 0) {
    lVar3 = *(long *)System_Xml_Linq_XContainer_var;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    uVar2 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 200));
    if ((uVar2 & 1) == 0) {
      *(undefined4 *)(lVar4 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar4 + 0x18);
      *(undefined4 *)(lVar4 + 0x18) = 0;
      if (0 < iVar1) {
        FUN_02793a34(*(undefined8 *)(lVar4 + 0x10),0,iVar1,0);
      }
    }
    *(undefined8 *)(unaff_x19 + 0x78) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(unaff_x19 + 0x78),0);
    *(undefined1 *)(unaff_x19 + 0x70) = 0;
    *(undefined1 *)(unaff_x19 + 0x80) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


