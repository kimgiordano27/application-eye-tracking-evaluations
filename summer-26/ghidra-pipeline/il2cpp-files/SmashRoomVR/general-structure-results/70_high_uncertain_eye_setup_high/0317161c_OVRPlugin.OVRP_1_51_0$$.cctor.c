/*
FUNCTION_NAME: OVRPlugin.OVRP_1_51_0$$.cctor
ENTRY_POINT: 0317161c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_51_0___cctor
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,int *param_6)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x22;
  undefined4 uStack000000000000002c;
  
  puVar3 = StringLiteral_13715;
  if ((*(byte *)(unaff_x22 + 0xf3) & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13715);
    *(undefined1 *)(unaff_x22 + 0xf3) = 1;
  }
  iVar1 = *param_6;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar4 = *(long *)(param_5 + 0x140);
  if (lVar4 != 0) {
    uVar2 = iVar1 - 2;
    if (uVar2 < *(uint *)(lVar4 + 0x18)) {
      lVar4 = lVar4 + (long)(int)uVar2 * 0x10;
      *(undefined4 *)(lVar4 + 0x20) = param_1;
      *(undefined4 *)(lVar4 + 0x24) = param_2;
      *(undefined4 *)(lVar4 + 0x28) = param_3;
      *(undefined4 *)(lVar4 + 0x2c) = param_4;
      lVar4 = *(long *)(param_5 + 0xd0);
      if (lVar4 == 0) goto LAB_031716e4;
      if (uVar2 < *(uint *)(lVar4 + 0x18)) {
        *(undefined4 *)(lVar4 + (long)(int)uVar2 * 4 + 0x20) = 0x3f800000;
        uStack000000000000002c = 2;
        FUN_031716ec(param_5,uVar2,&stack0x0000002c,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
LAB_031716e4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


