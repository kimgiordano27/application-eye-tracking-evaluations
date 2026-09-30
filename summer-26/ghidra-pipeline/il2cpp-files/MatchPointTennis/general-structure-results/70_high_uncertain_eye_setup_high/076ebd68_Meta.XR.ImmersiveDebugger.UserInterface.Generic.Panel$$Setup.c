/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$Setup
ENTRY_POINT: 076ebd68
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x076ebeac) */
/* WARNING: Removing unreachable block (ram,0x076ebf60) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__Setup
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               long param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  if ((DAT_0a522ea5 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f20648);
    DAT_0a522ea5 = 1;
  }
  puVar1 = PTR_DAT_09f20648;
  fStack0000000000000008 = 0.0;
  fStack000000000000000c = 0.0;
  if (param_6 != 0) {
    uVar4 = *(undefined8 *)(param_5 + 0x100);
    uVar7 = *(undefined4 *)(param_6 + 0x104);
    fVar8 = *(float *)(param_6 + 0x108);
    uVar2 = FUN_09835058(param_6,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)puVar1);
    }
    uVar3 = FUN_0980794c(uVar7,uVar4,uVar2,&stack0x00000008,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(long *)(param_5 + 0x100) != 0) {
      fVar5 = (float)FUN_095390b4(*(long *)(param_5 + 0x100),0);
      if (*(long *)(param_5 + 0x100) != 0) {
        fVar6 = fVar8;
        FUN_095389b0(*(long *)(param_5 + 0x100),0);
        if (*(long *)(param_5 + 0xf8) != 0) {
          uVar3 = FUN_09538a84(*(long *)(param_5 + 0xf8),0);
          if (*(char *)(param_5 + 0x28) != '\0') {
            if (*(char *)(param_5 + 0x29) == '\0') {
              fStack0000000000000008 = fVar5 * param_3 + -64.0 + fStack0000000000000008;
              fVar6 = param_3 - *(float *)(param_5 + 0x2c);
              if (fVar6 < fStack0000000000000008) {
                fStack0000000000000008 = fVar6;
              }
              param_3 = fStack0000000000000008 / param_3;
              uVar3 = 0;
              if (0.0 <= param_3) {
                fVar6 = 1.0;
                uVar3 = (ulong)(uint)param_3;
                if (1.0 < param_3) {
                  uVar3 = 0x3f800000;
                }
              }
            }
            else {
              fVar6 = fVar5 * param_3 + 64.0 + fStack0000000000000008;
              fStack0000000000000008 = fVar6;
              if (fVar6 < *(float *)(param_5 + 0x2c)) {
                fStack0000000000000008 = *(float *)(param_5 + 0x2c);
              }
              if (*(long *)(param_5 + 0xf8) == 0) goto LAB_076ebfa8;
              FUN_09538c10(*(long *)(param_5 + 0xf8),0);
              if (*(long *)(param_5 + 0xf8) == 0) goto LAB_076ebfa8;
              fVar5 = fStack0000000000000008 / param_3;
              if (fStack0000000000000008 / param_3 < 0.0) {
                fVar5 = 0.0;
              }
              FUN_09538cd8(fVar5,*(long *)(param_5 + 0xf8),0);
            }
          }
          if (*(long *)(param_5 + 0xf8) != 0) {
            FUN_09538f28(*(long *)(param_5 + 0xf8),0);
            fStack000000000000000c = fVar8 * param_4 + -36.0 + fStack000000000000000c;
            fVar6 = fVar6 + (param_4 - *(float *)(param_5 + 0x24));
            if (fVar6 < fStack000000000000000c) {
              fStack000000000000000c = fVar6;
            }
            if (*(long *)(param_5 + 0xf8) != 0) {
              fVar8 = fStack000000000000000c / param_4;
              if (fStack000000000000000c / param_4 < 0.0) {
                fVar8 = 0.0;
              }
              FUN_09538b4c(uVar3,fVar8,*(long *)(param_5 + 0xf8),0);
              if (*(long *)(param_5 + 0x1b8) != 0) {
                FUN_076ea470();
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_076ebfa8:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


