/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnAfterDeserialize
ENTRY_POINT: 052c2258
PROGRAM: Untangled-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__OnAfterDeserialize(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000008;
  
  if ((DAT_071c1064 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d02708);
    FUN_02f07e70(PTR_DAT_06d040b0);
    FUN_02f07e70(PTR_DAT_06d0bc68);
    FUN_02f07e70(PTR_DAT_06d02220);
    FUN_02f07e70(PTR_DAT_06d03120);
    DAT_071c1064 = 1;
  }
  uVar5 = FUN_052c093c(param_1);
  puVar2 = PTR_DAT_06d0bc68;
  puVar1 = PTR_DAT_06d02220;
  if ((uVar5 & 1) == 0) {
    return;
  }
  FUN_052c23d0(param_1);
  FUN_052c1048(param_1);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar6 = FUN_05fa2f44(0);
  FUN_052c23d0(param_1);
  lVar7 = FUN_02f07f14(*(undefined8 *)puVar1,1);
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_06d03120;
    thunk_FUN_02f411dc();
    uVar3 = FUN_066ca0f8(lVar7,0);
    uVar4 = FUN_066ca068(~uVar3,0);
    FUN_052c2430(param_1,uVar4);
    if (lVar6 != 0) {
      FUN_05fa32d8(lVar6,0);
      in_stack_00000008 = FUN_05fa3180(lVar6,0);
      uVar8 = thunk_FUN_02ef1438(*(undefined8 *)PTR_DAT_06d040b0,&stack0x00000008);
      if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
        thunk_FUN_02f12b58(*(long *)PTR_DAT_06d02708);
      }
      FUN_06693690(uVar8,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


