/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.FusionBBEvents$$Fusion.INetworkRunnerCallbacks.OnReliableDataProgress
ENTRY_POINT: 052f6a3c
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Fusion_FusionBBEvents__Fusion_INetworkRunnerCallbacks_OnReliableDataProgress
               (undefined4 *param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  float fVar5;
  undefined8 unaff_d8;
  float fVar6;
  undefined8 unaff_d9;
  undefined8 uVar7;
  float fVar8;
  undefined8 unaff_d10;
  undefined8 uVar9;
  
  FUN_067441f8(*param_1,param_1[1],param_1[2]);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(uVar3,0);
  lVar4 = *unaff_x20;
  if ((uVar1 & 1) != 0) {
    if ((*(long *)(unaff_x19 + 0x28) == 0) ||
       (lVar2 = FUN_066c67b0(*(long *)(unaff_x19 + 0x28),0), lVar2 == 0)) goto LAB_052f6bd4;
    unaff_d8 = FUN_066d6014(lVar2,0);
  }
  if (lVar4 != 0) {
    FUN_06744330(unaff_d8,unaff_d9,unaff_d10,lVar4,0);
    FUN_0528b808(*unaff_x20,0);
    FUN_0528b820(*unaff_x20,0);
    FUN_0528b868(*unaff_x20,0);
    if (*unaff_x20 != 0) {
      FUN_067440c0(*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x8c),
                   *(undefined4 *)(unaff_x19 + 0x90),*unaff_x20,0);
      if (*(long *)(unaff_x19 + 0x98) != 0) {
        lVar4 = *(long *)(unaff_x19 + 0xa0);
        FUN_06744020(*(long *)(unaff_x19 + 0x98),0);
        FUN_0528b5b0(0);
        if (lVar4 != 0) {
          FUN_06745500(lVar4,0);
          FUN_0528b7f0(*(undefined8 *)(unaff_x19 + 0xa0),0);
          uVar3 = *(undefined8 *)(unaff_x19 + 0xa0);
          fVar5 = *(float *)(unaff_x19 + 0x50);
          uVar7 = *(undefined8 *)(unaff_x19 + 0x54);
          fVar8 = *(float *)(unaff_x19 + 0x5c);
          uVar9 = *(undefined8 *)(unaff_x19 + 0x60);
          if (*(char *)(unaff_x26 + 0xc5f) == '\0') {
            FUN_02f07e70(PTR_DAT_06d03010);
            *(undefined1 *)(unaff_x26 + 0xc5f) = 1;
          }
          fVar5 = fVar5 - fVar8;
          fVar8 = (float)uVar7 - (float)uVar9;
          fVar6 = (float)((ulong)uVar7 >> 0x20) - (float)((ulong)uVar9 >> 0x20);
          if (*(int *)(*unaff_x27 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          FUN_0529a2b8(SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar8 * fVar8),0,uVar3,0);
          return;
        }
      }
    }
  }
LAB_052f6bd4:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


