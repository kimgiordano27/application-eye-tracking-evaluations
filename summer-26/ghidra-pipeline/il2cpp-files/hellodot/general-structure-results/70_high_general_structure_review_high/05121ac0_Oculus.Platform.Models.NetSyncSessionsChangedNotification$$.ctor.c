/*
FUNCTION_NAME: Oculus.Platform.Models.NetSyncSessionsChangedNotification$$.ctor
ENTRY_POINT: 05121ac0
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_17;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Oculus_Platform_Models_NetSyncSessionsChangedNotification___ctor
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
               undefined8 param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  float fVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint unaff_w19;
  long unaff_x20;
  long lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 in_stack_00000030;
  float in_stack_00000038;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  
  puVar7 = (undefined8 *)FUN_02ce0a7c(param_4,param_5,0);
  uVar8 = (*(code *)*puVar7)();
  fVar20 = in_stack_00000058;
  fVar16 = fStack0000000000000054;
  fVar14 = fStack0000000000000050;
  puVar3 = PTR_DAT_065d62a0;
  if ((uVar8 & 1) == 0) {
    return;
  }
                    /* catch() { ... } // from try @ 051219a0 with catch @ 05121af4 */
                    /* catch() { ... } // from try @ 05121940 with catch @ 05121b00 */
                    /* catch() { ... } // from try @ 05121a80 with catch @ 05121b04 */
  if (*(int *)(*(long *)PTR_DAT_065d62a0 + 0xe0) == 0) {
                    /* catch() { ... } // from try @ 05121960 with catch @ 05121b08 */
    thunk_FUN_02cd038c();
  }
                    /* catch() { ... } // from try @ 05121a78 with catch @ 05121b0c */
                    /* catch() { ... } // from try @ 051218e8 with catch @ 05121b10 */
                    /* catch() { ... } // from try @ 051218cc with catch @ 05121b14 */
  fVar13 = (float)FUN_05f0015c(&stack0x00000050,0);
  lVar9 = *(long *)(unaff_x20 + 0x48);
  if (lVar9 != 0) {
    if (*(uint *)(lVar9 + 0x18) <= unaff_w19) {
LAB_05121e40:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
                    /* try { // try from 05121b2c to 05221b2f has its CatchHandler @ 05121b50 */
    lVar11 = (long)(int)unaff_w19;
                    /* try { // try from 05121b30 to 05221b57 has its CatchHandler @ 0512176c */
    lVar9 = *(long *)(lVar9 + lVar11 * 8 + 0x20);
                    /* catch() { ... } // from try @ 05121b2c with catch @ 05121b50 */
    if ((lVar9 != 0) &&
       (lVar9 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar9,0), lVar9 != 0)) {
                    /* try { // try from 05121b58 to 05221b5f has its CatchHandler @ 05121b74 */
      fVar16 = fVar16 + param_2;
      fVar20 = fVar20 + param_3;
                    /* try { // try from 05121b60 to 05221b6b has its CatchHandler @ 0512176c */
      FUN_05f019b0(fVar14 + fVar13,fVar16,fVar20,lVar9,0);
      lVar9 = *(long *)(unaff_x20 + 0x48);
                    /* try { // try from 05121b6c to 05221b73 has its CatchHandler @ 05121b74 */
      if (lVar9 != 0) {
                    /* catch() { ... } // from try @ 05121a90 with catch @ 05121b74
                       catch() { ... } // from try @ 05121b58 with catch @ 05121b74
                       catch() { ... } // from try @ 05121b6c with catch @ 05121b74 */
        if (*(uint *)(lVar9 + 0x18) <= unaff_w19) goto LAB_05121e40;
        lVar9 = *(long *)(lVar9 + lVar11 * 8 + 0x20);
        if (lVar9 != 0) {
          lVar9 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar9,0);
          lVar10 = *(long *)(unaff_x20 + 0x48);
          if (lVar10 != 0) {
            if (*(uint *)(lVar10 + 0x18) <= unaff_w19) goto LAB_05121e40;
            lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
            if (((lVar10 != 0) &&
                (lVar10 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar10,0),
                lVar10 != 0)) && (fVar14 = (float)FUN_05f01910(lVar10,0), lVar9 != 0)) {
              fVar20 = (fVar20 + fVar20) - in_stack_00000058;
              uVar8 = (ulong)(uint)((fVar16 + fVar16) - fStack0000000000000054);
              FUN_05f03250((fVar14 + fVar14) - fStack0000000000000050,uVar8,fVar20,lVar9,0);
              lVar9 = *(long *)(unaff_x20 + 0x30);
              if (lVar9 != 0) {
                if (*(uint *)(lVar9 + 0x18) <= unaff_w19) goto LAB_05121e40;
                lVar9 = *(long *)(lVar9 + lVar11 * 8 + 0x20);
                if (lVar9 != 0) {
                  lVar9 = FUN_03393888(lVar9,*(undefined8 *)PTR_DAT_06606190);
                  if (DAT_06a67148 == '\0') {
                    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
                    DAT_06a67148 = '\x01';
                  }
                  puVar2 = PTR_DAT_065c9850;
                  fVar16 = DAT_013de0d4;
                  fVar14 = DAT_013ddafc;
                  if (lVar9 != 0) {
                    uVar1 = *(uint *)(lVar9 + 0x18);
                    fVar13 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_065c9850 + 0xb8) + 1);
                    uVar21 = **(undefined8 **)(*(long *)PTR_DAT_065c9850 + 0xb8);
                    if (0 < (int)uVar1) {
                      uVar12 = 0;
                      do {
                        fVar17 = (float)uVar8;
                        if (uVar1 <= uVar12) goto LAB_05121e40;
                        lVar10 = *(long *)(lVar9 + (long)(int)uVar12 * 8 + 0x20);
                        if (lVar10 == 0) goto LAB_05121e3c;
                        FUN_051dc19c(lVar10,&stack0x00000030,0);
                        iVar6 = FUN_051db344(lVar10,0);
                        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                          thunk_FUN_02cd038c(*(long *)puVar3);
                        }
                        fVar15 = (float)FUN_05f001cc(&stack0x00000030,0);
                        fVar5 = in_stack_00000038;
                        uVar4 = in_stack_00000030;
                        if (iVar6 != 0) {
                          fVar15 = -fVar15;
                          fVar17 = -fVar17;
                          fVar20 = -fVar20;
                        }
                        if (DAT_06a67312 == '\0') {
                          AkMIDIEventCallbackInfo__get_byProgramNum(puVar2);
                          DAT_06a67312 = '\x01';
                        }
                        fVar18 = fVar20 * fVar14;
                        lVar10 = *(long *)(*(long *)puVar2 + 0xb8);
                        uVar12 = uVar12 + 1;
                        uVar19 = *(undefined8 *)(lVar10 + 0x18);
                        uVar1 = *(uint *)(lVar9 + 0x18);
                        fVar20 = *(float *)(lVar10 + 0x20) * fVar16;
                        fVar15 = (float)uVar4 + fVar15 * 0.15 + (float)uVar19 * 0.02;
                        fVar17 = (float)((ulong)uVar4 >> 0x20) + fVar17 * 0.15 +
                                 (float)((ulong)uVar19 >> 0x20) * 0.02;
                        uVar8 = CONCAT44(fVar17,fVar15);
                        uVar21 = CONCAT44((float)((ulong)uVar21 >> 0x20) + fVar17,
                                          (float)uVar21 + fVar15);
                        fVar13 = fVar13 + fVar18 + fVar5 + fVar20;
                      } while ((int)uVar12 < (int)uVar1);
                    }
                    lVar10 = *(long *)(unaff_x20 + 0x48);
                    if (lVar10 != 0) {
                      if (*(uint *)(lVar10 + 0x18) <= unaff_w19) goto LAB_05121e40;
                      lVar10 = *(long *)(lVar10 + lVar11 * 8 + 0x20);
                      if ((lVar10 != 0) &&
                         (lVar10 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed
                                             (lVar10,0), lVar10 != 0)) {
                        fVar14 = (float)*(int *)(lVar9 + 0x18);
                        fVar16 = (float)((ulong)uVar21 >> 0x20) / fVar14;
                        FUN_05f019b0(CONCAT44(fVar16,(float)uVar21 / fVar14),fVar16,fVar13 / fVar14,
                                     lVar10,0);
                        lVar9 = *(long *)(unaff_x20 + 0x48);
                        if (lVar9 != 0) {
                          if (*(uint *)(lVar9 + 0x18) <= unaff_w19) goto LAB_05121e40;
                          lVar9 = *(long *)(lVar9 + lVar11 * 8 + 0x20);
                          if ((lVar9 != 0) && (lVar9 = FUN_05ef6d5c(lVar9,0), lVar9 != 0)) {
                            FUN_05ef60b0(lVar9,1,0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_05121e3c:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


