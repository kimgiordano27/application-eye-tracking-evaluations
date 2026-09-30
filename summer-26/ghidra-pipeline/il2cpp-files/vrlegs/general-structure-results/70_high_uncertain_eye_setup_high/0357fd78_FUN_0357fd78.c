/*
FUNCTION_NAME: FUN_0357fd78
ENTRY_POINT: 0357fd78
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined1  [16] FUN_0357fd78(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_03cbdf88;
  if ((DAT_0412e06b & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(OVRPlugin_OVRP_1_31_0_TypeInfo);
    DAT_0412e06b = 1;
  }
  uVar2 = FUN_03597474(0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar1);
  }
  uVar3 = FUN_036d35a8(uVar2,0,0);
  uVar6 = 0;
  uVar2 = 0;
  if ((uVar3 & 1) == 0) {
    if (*(char *)((long)param_1 + 0x3f4) == '\0') {
      uVar6 = (ulong)*(uint *)((long)param_1 + 0x3ec);
      uVar2 = 0;
    }
    else {
      lVar4 = 0x1e4;
      if ((char)param_1[0x47] != '\0') {
        lVar4 = 0x254;
      }
      local_34 = *(undefined4 *)((long)param_1 + lVar4);
      uVar2 = NEON_rev64(param_1[0x4a],4);
      *(undefined8 *)((long)param_1 + 0x23c) = uVar2;
      *(undefined4 *)((long)param_1 + 0x2d4) = 0;
      puVar1 = OVRPlugin_OVRP_1_31_0_TypeInfo;
      fVar7 = *(float *)(param_1 + 0x6b);
      lVar4 = *(long *)OVRPlugin_OVRP_1_31_0_TypeInfo;
      if (fVar7 == 0.0) {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar4 = *(long *)puVar1;
        }
        fVar7 = *(float *)(*(long *)(lVar4 + 0xb8) + 0x15a8);
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *(long *)puVar1;
      }
      uVar3 = (ulong)*(uint *)(*(long *)(lVar4 + 0xb8) + 0x15a8);
      uVar8 = 0;
      *(undefined1 *)((long)param_1 + 0x3f5) = 1;
                    /* try { // try from 0357fe84 to 0367fff7 has its CatchHandler @ 0357fe84
                       catch() { ... } // from try @ 0357fe84 with catch @ 0357fe84
                       catch() { ... } // from try @ 0358011c with catch @ 0357fe84
                       catch() { ... } // from try @ 035801a4 with catch @ 0357fe84
                       catch() { ... } // from try @ 03580214 with catch @ 0357fe84
                       catch() { ... } // from try @ 03580230 with catch @ 0357fe84
                       catch() { ... } // from try @ 03580278 with catch @ 0357fe84 */
      FUN_03580470(param_1);
      *(undefined1 *)((long)param_1 + 0x24c) = 0;
      *(undefined4 *)((long)param_1 + 0x244) = 0;
      do {
        uVar2 = uVar8;
        uVar6 = uVar3;
        uVar8 = uVar2;
        (**(code **)(*param_1 + 0x838))
                  (fVar7,uVar3,param_1,&local_34,(char)param_1[0x47],(char)param_1[0x5b],
                   *(undefined8 *)(*param_1 + 0x840));
        *(int *)((long)param_1 + 0x244) = *(int *)((long)param_1 + 0x244) + 1;
      } while (*(char *)((long)param_1 + 0x24c) == '\0');
      *(undefined1 *)((long)param_1 + 0x3f4) = 0;
    }
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar6;
  return auVar5;
}


