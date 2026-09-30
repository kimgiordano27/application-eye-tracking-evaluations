/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcAudioSampleRate
ENTRY_POINT: 0749f530
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SetMrcAudioSampleRate(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long in_x9;
  int *in_x10;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long *unaff_x21;
  float fVar8;
  float fVar9;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  do {
    in_x9 = in_x9 + -1;
    piVar6 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar1 = (undefined8 *)FUN_03d8f370();
      goto LAB_0749f55c;
    }
    plVar7 = (long *)(in_x10 + 2);
    in_x10 = piVar6;
  } while (*plVar7 != param_3);
  puVar1 = (undefined8 *)(param_1 + (long)(*piVar6 + 4) * 0x10 + 0x138);
LAB_0749f55c:
  uVar2 = (*(code *)*puVar1)();
  if ((uVar2 & 1) == 0) {
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_08a50fa8(*(long *)(unaff_x19 + 0x30),0,0);
      return;
    }
  }
  else if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_08a50fa8(*(long *)(unaff_x19 + 0x30),1,0);
    if ((*(long *)(unaff_x19 + 0x30) != 0) &&
       (lVar3 = FUN_08a50e6c(*(long *)(unaff_x19 + 0x30),0), lVar3 != 0)) {
      FUN_08a5d494(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar3,0);
      if ((*(long *)(unaff_x19 + 0x30) != 0) &&
         (lVar3 = FUN_08a50e6c(*(long *)(unaff_x19 + 0x30),0), lVar3 != 0)) {
        FUN_08a5d814(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                     in_stack_00000018,lVar3,0);
        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
           (lVar3 = FUN_08a50e6c(*(long *)(unaff_x19 + 0x30),0), lVar3 != 0)) {
          uVar4 = FUN_08a5d2e4(lVar3,0);
          if (*(int *)(*(long *)PTR_DAT_091a0c40 + 0xe0) == 0) {
            thunk_FUN_03db619c(*(long *)PTR_DAT_091a0c40);
          }
          uVar2 = FUN_08a508b0(uVar4,0,0);
          fVar8 = 1.0;
          if ((uVar2 & 1) != 0) {
            if (((*(long *)(unaff_x19 + 0x30) == 0) ||
                (lVar3 = FUN_08a50e6c(*(long *)(unaff_x19 + 0x30),0), lVar3 == 0)) ||
               (lVar3 = FUN_08a5d2e4(lVar3,0), lVar3 == 0)) goto LAB_0749f74c;
            fVar8 = (float)FUN_08a6021c(lVar3,0);
          }
          if (*(long *)(unaff_x19 + 0x30) != 0) {
            lVar3 = FUN_08a50e6c(*(long *)(unaff_x19 + 0x30),0);
            plVar7 = *(long **)(unaff_x19 + 0x28);
            if (plVar7 != (long *)0x0) {
              lVar5 = *plVar7;
              uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar2 != 0) {
                piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == *unaff_x21) {
                    puVar1 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                    goto LAB_0749f6e0;
                  }
                  uVar2 = uVar2 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar2 != 0);
              }
              puVar1 = (undefined8 *)FUN_03d8f370(plVar7,*unaff_x21,1);
LAB_0749f6e0:
              fVar9 = (float)(*(code *)*puVar1)(plVar7,puVar1[1]);
              if (DAT_098362cb == '\0') {
                FUN_03d2d2b0(PTR_DAT_091a0f88);
                DAT_098362cb = '\x01';
              }
              if (lVar3 != 0) {
                fVar9 = fVar9 / fVar8;
                lVar5 = *(long *)(*(long *)PTR_DAT_091a0f88 + 0xb8);
                FUN_08a5debc(fVar9 * *(float *)(lVar5 + 0xc),fVar9 * *(float *)(lVar5 + 0x10),
                             fVar9 * *(float *)(lVar5 + 0x14),lVar3,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0749f74c:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


