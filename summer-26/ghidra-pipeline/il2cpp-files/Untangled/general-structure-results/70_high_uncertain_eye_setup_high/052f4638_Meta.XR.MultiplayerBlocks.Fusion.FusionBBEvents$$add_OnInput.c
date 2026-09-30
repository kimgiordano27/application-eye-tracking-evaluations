/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.FusionBBEvents$$add_OnInput
ENTRY_POINT: 052f4638
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Fusion_FusionBBEvents__add_OnInput(void)

{
  ulong uVar1;
  long lVar2;
  int in_w8;
  undefined4 *puVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x26;
  long *unaff_x27;
  float fVar6;
  undefined8 unaff_d8;
  float fVar7;
  undefined8 unaff_d9;
  undefined8 uVar8;
  float fVar9;
  undefined8 unaff_d10;
  undefined8 uVar10;
  
  lVar4 = *(long *)(unaff_x19 + 0xa0);
  if (in_w8 == 0) {
                    /* try { // try from 052f4640 to 053f4667 has its CatchHandler @ 052f48b4 */
    FUN_02f07e70(PTR_DAT_06d02c10);
    *(undefined1 *)(unaff_x23 + 0xbf5) = 1;
  }
  if (lVar4 != 0) {
    puVar3 = *(undefined4 **)(*unaff_x26 + 0xb8);
    FUN_067441f8(*puVar3,puVar3[1],puVar3[2],lVar4,0);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x28);
                    /* try { // try from 052f4680 to 053f46df has its CatchHandler @ 052f48b8 */
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar1 = FUN_066cd30c(uVar5,0);
    lVar4 = *unaff_x20;
    if ((uVar1 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0x28) == 0) ||
         (lVar2 = FUN_066c67b0(*(long *)(unaff_x19 + 0x28),0), lVar2 == 0)) goto LAB_052f4800;
      unaff_d8 = FUN_066d6014(lVar2,0);
    }
    if (lVar4 != 0) {
      FUN_06744330(unaff_d8,unaff_d9,unaff_d10,lVar4,0);
                    /* try { // try from 052f46f8 to 053f470b has its CatchHandler @ 052f48b0 */
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
            uVar5 = *(undefined8 *)(unaff_x19 + 0xa0);
            fVar6 = *(float *)(unaff_x19 + 0x40);
            uVar8 = *(undefined8 *)(unaff_x19 + 0x44);
            fVar9 = *(float *)(unaff_x19 + 0x4c);
            uVar10 = *(undefined8 *)(unaff_x19 + 0x50);
            if (*(char *)(unaff_x24 + 0xc5f) == '\0') {
              FUN_02f07e70(PTR_DAT_06d03010);
              *(undefined1 *)(unaff_x24 + 0xc5f) = 1;
            }
            fVar6 = fVar6 - fVar9;
            fVar9 = (float)uVar8 - (float)uVar10;
            fVar7 = (float)((ulong)uVar8 >> 0x20) - (float)((ulong)uVar10 >> 0x20);
            if (*(int *)(*unaff_x27 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            FUN_0529a2b8(SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar9 * fVar9),0,uVar5,0);
            return;
          }
        }
      }
    }
  }
LAB_052f4800:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


