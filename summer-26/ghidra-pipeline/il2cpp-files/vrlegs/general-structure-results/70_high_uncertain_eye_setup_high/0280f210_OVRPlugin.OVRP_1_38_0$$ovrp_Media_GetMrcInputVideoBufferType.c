/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcInputVideoBufferType
ENTRY_POINT: 0280f210
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcInputVideoBufferType(long param_1)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  
  lVar7 = *(long *)(param_1 + 0x80);
  if (lVar7 != 0) {
    uVar1 = *(uint *)(param_1 + 0x8c);
    uVar8 = uVar1;
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      do {
        sVar2 = *(short *)(lVar7 + (long)(int)uVar8 * 2 + 0x20);
        if (sVar2 == 0) {
          if (*(uint *)(param_1 + 0x88) != uVar8) {
            FUN_0282f654();
            *(undefined8 *)(param_1 + 0xb8) = 0;
            *(undefined8 *)(param_1 + 0xb0) = 0;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0xb0,0);
            return;
          }
          iVar3 = OVRPassthroughLayer_InterpolatedColorLutHandler__get_LutTarget(param_1,1,0);
          if (iVar3 == 0) {
            uVar5 = thunk_FUN_01a6ca08(PTR_DAT_03cfe228);
            uVar5 = FUN_02803d2c(param_1,uVar5);
            uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cfe230);
                    /* WARNING: Subroutine does not return */
            FUN_01ab6b14(uVar5,uVar6);
          }
        }
        else {
          uVar4 = FUN_0280f304(param_1,sVar2,uVar1);
          if ((uVar4 & 1) != 0) {
            return;
          }
        }
        lVar7 = *(long *)(param_1 + 0x80);
        if (lVar7 == 0) goto LAB_0280f2cc;
        uVar8 = *(uint *)(param_1 + 0x8c);
      } while (*(uint *)(param_1 + 0x8c) < *(uint *)(lVar7 + 0x18));
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
LAB_0280f2cc:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


