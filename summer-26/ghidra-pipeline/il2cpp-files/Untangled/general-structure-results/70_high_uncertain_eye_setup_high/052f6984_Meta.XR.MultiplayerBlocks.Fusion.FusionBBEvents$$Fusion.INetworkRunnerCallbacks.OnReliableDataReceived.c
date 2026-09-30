/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.FusionBBEvents$$Fusion.INetworkRunnerCallbacks.OnReliableDataReceived
ENTRY_POINT: 052f6984
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Fusion_FusionBBEvents__Fusion_INetworkRunnerCallbacks_OnReliableDataReceived
               (long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  long unaff_x19;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  float fVar7;
  undefined8 unaff_d8;
  float fVar8;
  undefined8 unaff_d9;
  undefined8 uVar9;
  float fVar10;
  undefined8 unaff_d10;
  undefined4 uVar11;
  undefined8 unaff_d11;
  undefined8 uVar12;
  float unaff_s13;
  
  fVar7 = (float)((ulong)unaff_d11 >> 0x20);
  uVar11 = *(undefined4 *)(param_1 + 0xe08);
                    /* try { // try from 052f699c to 053f69c3 has its CatchHandler @ 052f69d8 */
  FUN_0529a2b8(SQRT(fVar7 * fVar7 + unaff_s13 * unaff_s13 + (float)unaff_d11 * (float)unaff_d11),0,
               uVar11);
  lVar1 = FUN_066c67ec();
  if (lVar1 != 0) {
                    /* try { // try from 052f69c4 to 053f69cf has its CatchHandler @ 052f66a8 */
    lVar1 = FUN_03a862a4(lVar1,*unaff_x23);
                    /* try { // try from 052f69d0 to 053f69d7 has its CatchHandler @ 052f69d8 */
    plVar5 = (long *)(unaff_x19 + 0xa0);
    *plVar5 = lVar1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 052f699c with catch @ 052f69d8
                       catch(type#2 @ 00000000) { ... } // from try @ 052f69d0 with catch @ 052f69d8
                        */
    thunk_FUN_02f411dc(plVar5,lVar1);
    if (*plVar5 != 0) {
      FUN_06743fdc(*plVar5,*(undefined8 *)(unaff_x19 + 0x28),0);
      if (*(long *)(unaff_x19 + 0xa0) != 0) {
        FUN_06744404(*(long *)(unaff_x19 + 0xa0),0,0);
        lVar1 = *plVar5;
        if (*(char *)(unaff_x22 + 0xbf5) == '\0') {
          FUN_02f07e70(PTR_DAT_06d02c10);
          *(undefined1 *)(unaff_x22 + 0xbf5) = 1;
        }
        if (lVar1 != 0) {
          puVar4 = *(undefined4 **)(*unaff_x24 + 0xb8);
          FUN_067441f8(*puVar4,puVar4[1],puVar4[2],lVar1,0);
          uVar6 = *(undefined8 *)(unaff_x19 + 0x28);
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          uVar2 = FUN_066cd30c(uVar6,0);
          lVar1 = *plVar5;
          if ((uVar2 & 1) != 0) {
            if ((*(long *)(unaff_x19 + 0x28) == 0) ||
               (lVar3 = FUN_066c67b0(*(long *)(unaff_x19 + 0x28),0), lVar3 == 0)) goto LAB_052f6bd4;
            unaff_d8 = FUN_066d6014(lVar3,0);
          }
          if (lVar1 != 0) {
            FUN_06744330(unaff_d8,unaff_d9,unaff_d10,lVar1,0);
            FUN_0528b808(*plVar5,0);
            FUN_0528b820(*plVar5,0);
            FUN_0528b868(*plVar5,0);
            if (*plVar5 != 0) {
              FUN_067440c0(*(undefined4 *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x8c),
                           *(undefined4 *)(unaff_x19 + 0x90),*plVar5,0);
              if (*(long *)(unaff_x19 + 0x98) != 0) {
                lVar1 = *(long *)(unaff_x19 + 0xa0);
                FUN_06744020(*(long *)(unaff_x19 + 0x98),0);
                FUN_0528b5b0(0);
                if (lVar1 != 0) {
                  FUN_06745500(lVar1,0);
                  FUN_0528b7f0(*(undefined8 *)(unaff_x19 + 0xa0),0);
                  uVar6 = *(undefined8 *)(unaff_x19 + 0xa0);
                  fVar7 = *(float *)(unaff_x19 + 0x50);
                  uVar9 = *(undefined8 *)(unaff_x19 + 0x54);
                  fVar10 = *(float *)(unaff_x19 + 0x5c);
                  uVar12 = *(undefined8 *)(unaff_x19 + 0x60);
                  if (*(char *)(unaff_x26 + 0xc5f) == '\0') {
                    FUN_02f07e70(PTR_DAT_06d03010);
                    *(undefined1 *)(unaff_x26 + 0xc5f) = 1;
                  }
                  fVar7 = fVar7 - fVar10;
                  fVar10 = (float)uVar9 - (float)uVar12;
                  fVar8 = (float)((ulong)uVar9 >> 0x20) - (float)((ulong)uVar12 >> 0x20);
                  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
                    thunk_FUN_02f12b58();
                  }
                  FUN_0529a2b8(SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar10 * fVar10),0,uVar11,uVar6,
                               0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_052f6bd4:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


