/*
FUNCTION_NAME: OVRPlugin$$get_suggestedGpuPerfLevel
ENTRY_POINT: 01a15828
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long OVRPlugin__get_suggestedGpuPerfLevel(ulong param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(unaff_x21 + 0xff0);
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_320B0930454D74130DD5E245B70DA1736A2C1B5E664DD5BB82B490E60F3ECA2A
                      );
    *(undefined1 *)(unaff_x20 + 0x992) = 1;
  }
  lVar2 = thunk_FUN_00d62348(*puVar4);
  uVar1 = _UNK_02945c18;
  uVar3 = _DAT_02945c10;
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = 0xbdcccccd;
    *(undefined8 *)(lVar2 + 0x18) = uVar1;
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
    *(undefined4 *)(lVar2 + 0x2c) = 0x43b40000;
    FUN_017b46ec(lVar2,0);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined8 *)(lVar2 + 0x10) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x1c);
    *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *(undefined8 *)(lVar2 + 0x1c) = uVar3;
    *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


