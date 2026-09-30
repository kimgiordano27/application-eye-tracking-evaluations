/*
FUNCTION_NAME: Oculus.Platform.Models.NetSyncSetSessionPropertyResult$$.ctor
ENTRY_POINT: 05121b78
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_14;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Oculus_Platform_Models_NetSyncSetSessionPropertyResult___ctor
               (long param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  uint uVar1;
  float fVar2;
  undefined *puVar3;
  undefined8 uVar4;
  float fVar5;
  bool in_ZR;
  bool in_CY;
  int iVar6;
  long lVar7;
  long lVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x24;
  long *unaff_x25;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 in_stack_00000030;
  float in_stack_00000038;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float in_stack_00000058;
  
  if (in_CY && !in_ZR) {
    lVar7 = *(long *)(param_1 + unaff_x24 * 8 + 0x20);
    if (lVar7 != 0) {
      lVar7 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar7,0);
      lVar8 = *(long *)(unaff_x20 + 0x48);
      if (lVar8 != 0) {
        if (*(uint *)(lVar8 + 0x18) <= unaff_w19) goto LAB_05121e40;
        lVar8 = *(long *)(lVar8 + unaff_x24 * 8 + 0x20);
        if (((lVar8 != 0) &&
            (lVar8 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar8,0),
            lVar8 != 0)) && (fVar10 = (float)FUN_05f01910(lVar8,0), lVar7 != 0)) {
          fVar16 = (param_4 + param_4) - in_stack_00000058;
          uVar14 = (ulong)(uint)((param_3 + param_3) - fStack0000000000000054);
          FUN_05f03250((fVar10 + fVar10) - fStack0000000000000050,uVar14,fVar16,lVar7,0);
          lVar7 = *(long *)(unaff_x20 + 0x30);
          if (lVar7 != 0) {
            if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_05121e40;
            lVar7 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
            if (lVar7 != 0) {
              lVar7 = FUN_03393888(lVar7,*(undefined8 *)PTR_DAT_06606190);
              if (DAT_06a67148 == '\0') {
                AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
                DAT_06a67148 = '\x01';
              }
              puVar3 = PTR_DAT_065c9850;
              fVar2 = DAT_013de0d4;
              fVar10 = DAT_013ddafc;
              if (lVar7 != 0) {
                uVar1 = *(uint *)(lVar7 + 0x18);
                fVar18 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_065c9850 + 0xb8) + 1);
                uVar17 = **(undefined8 **)(*(long *)PTR_DAT_065c9850 + 0xb8);
                if (0 < (int)uVar1) {
                  uVar9 = 0;
                  do {
                    fVar12 = (float)uVar14;
                    if (uVar1 <= uVar9) goto LAB_05121e40;
                    lVar8 = *(long *)(lVar7 + (long)(int)uVar9 * 8 + 0x20);
                    if (lVar8 == 0) goto LAB_05121e3c;
                    FUN_051dc19c(lVar8,&stack0x00000030,0);
                    iVar6 = FUN_051db344(lVar8,0);
                    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
                      thunk_FUN_02cd038c(*unaff_x25);
                    }
                    fVar11 = (float)FUN_05f001cc(&stack0x00000030,0);
                    fVar5 = in_stack_00000038;
                    uVar4 = in_stack_00000030;
                    if (iVar6 != 0) {
                      fVar11 = -fVar11;
                      fVar12 = -fVar12;
                      fVar16 = -fVar16;
                    }
                    if (DAT_06a67312 == '\0') {
                      AkMIDIEventCallbackInfo__get_byProgramNum(puVar3);
                      DAT_06a67312 = '\x01';
                    }
                    fVar13 = fVar16 * fVar10;
                    lVar8 = *(long *)(*(long *)puVar3 + 0xb8);
                    uVar9 = uVar9 + 1;
                    uVar15 = *(undefined8 *)(lVar8 + 0x18);
                    uVar1 = *(uint *)(lVar7 + 0x18);
                    fVar16 = *(float *)(lVar8 + 0x20) * fVar2;
                    fVar11 = (float)uVar4 + fVar11 * 0.15 + (float)uVar15 * 0.02;
                    fVar12 = (float)((ulong)uVar4 >> 0x20) + fVar12 * 0.15 +
                             (float)((ulong)uVar15 >> 0x20) * 0.02;
                    uVar14 = CONCAT44(fVar12,fVar11);
                    uVar17 = CONCAT44((float)((ulong)uVar17 >> 0x20) + fVar12,(float)uVar17 + fVar11
                                     );
                    fVar18 = fVar18 + fVar13 + fVar5 + fVar16;
                  } while ((int)uVar9 < (int)uVar1);
                }
                lVar8 = *(long *)(unaff_x20 + 0x48);
                if (lVar8 != 0) {
                  if (*(uint *)(lVar8 + 0x18) <= unaff_w19) goto LAB_05121e40;
                  lVar8 = *(long *)(lVar8 + unaff_x24 * 8 + 0x20);
                  if ((lVar8 != 0) &&
                     (lVar8 = UnityEngine_UIElements_VisualTreeStyleUpdater__set_disposed(lVar8,0),
                     lVar8 != 0)) {
                    fVar10 = (float)*(int *)(lVar7 + 0x18);
                    fVar16 = (float)((ulong)uVar17 >> 0x20) / fVar10;
                    FUN_05f019b0(CONCAT44(fVar16,(float)uVar17 / fVar10),fVar16,fVar18 / fVar10,
                                 lVar8,0);
                    lVar7 = *(long *)(unaff_x20 + 0x48);
                    if (lVar7 != 0) {
                      if (*(uint *)(lVar7 + 0x18) <= unaff_w19) goto LAB_05121e40;
                      lVar7 = *(long *)(lVar7 + unaff_x24 * 8 + 0x20);
                      if ((lVar7 != 0) && (lVar7 = FUN_05ef6d5c(lVar7,0), lVar7 != 0)) {
                        FUN_05ef60b0(lVar7,1,0);
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
LAB_05121e3c:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
LAB_05121e40:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


