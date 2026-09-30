/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$.cctor
ENTRY_POINT: 0281d6a4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVRPlugin_OVRP_1_92_0___cctor(undefined8 param_1,uint param_2,undefined8 param_3,int *param_4)

{
  ushort uVar1;
  int in_w8;
  long in_x9;
  long in_x10;
  uint in_w11;
  long in_x12;
  uint in_w13;
  bool bVar2;
  int iVar3;
  
  bVar2 = true;
  do {
    in_w13 = in_w13 - 4;
    if (in_w11 <= param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    uVar1 = *(ushort *)(in_x12 + in_x9 * 2);
    if (uVar1 - 0x30 < 10) {
      iVar3 = -0x30;
    }
    else if (uVar1 - 0x41 < 6) {
      iVar3 = -0x37;
    }
    else {
      if (5 < uVar1 - 0x61) {
        *param_4 = 0;
        break;
      }
      iVar3 = -0x57;
    }
    in_x9 = in_x9 + 1;
    in_w8 = (iVar3 + (uint)uVar1 << (ulong)(in_w13 & 0x1c)) + in_w8;
    bVar2 = in_x9 < in_x10;
    param_2 = param_2 + 1;
    *param_4 = in_w8;
  } while (in_x10 != in_x9);
  return ~bVar2 & 1;
}


