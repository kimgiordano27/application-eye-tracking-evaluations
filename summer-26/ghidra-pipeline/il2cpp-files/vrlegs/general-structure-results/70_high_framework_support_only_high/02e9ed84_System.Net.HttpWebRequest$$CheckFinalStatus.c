/*
FUNCTION_NAME: System.Net.HttpWebRequest$$CheckFinalStatus
ENTRY_POINT: 02e9ed84
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02e9ef4c) */

void System_Net_HttpWebRequest__CheckFinalStatus(uint param_1)

{
  long lVar1;
  undefined8 *puVar2;
  uint in_w8;
  ulong in_x9;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar3;
  char cStack0000000000000024;
  ulong uStack0000000000000028;
  
  if ((in_w8 & 0x20000000) != 0 && (param_1 & 0x21) != 0) {
    param_1 = param_1 & 0x10;
  }
  uStack0000000000000028 = in_x9;
  if (((param_1 & 0x11) != 1) && (uStack0000000000000028 = in_x9 | 0x100, (in_w8 >> 0x13 & 1) == 0))
  {
    if (*(int *)(*(long *)PTR_DAT_03d1f440 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    lVar1 = FUN_02ee7264();
    if (lVar1 != 0) {
      unaff_x20 = FUN_025c65fc(0,lVar1,0,0,0);
    }
  }
  if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  puVar2 = (undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10);
  *puVar2 = unaff_x20;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar2,unaff_x20);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x38);
  cStack0000000000000024 = '\0';
  FUN_027e0bd8(uVar3,&stack0x00000024,0);
  *(ulong *)(unaff_x19 + 0x30) = uStack0000000000000028 | *(ulong *)(unaff_x19 + 0x30);
  if (cStack0000000000000024 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
  }
  return;
}


