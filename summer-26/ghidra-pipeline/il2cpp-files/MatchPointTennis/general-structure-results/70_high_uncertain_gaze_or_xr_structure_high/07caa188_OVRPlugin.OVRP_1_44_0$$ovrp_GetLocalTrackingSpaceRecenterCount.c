/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetLocalTrackingSpaceRecenterCount
ENTRY_POINT: 07caa188
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetLocalTrackingSpaceRecenterCount
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long in_x9;
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
  
  piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar6 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(*piVar6 + 2) * 0x10 + 0x138);
      goto LAB_07caa1c8;
    }
    in_x9 = in_x9 + -1;
    piVar6 = piVar6 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_044822ac();
LAB_07caa1c8:
  uVar2 = (*(code *)*puVar1)();
  if (((uVar2 & 1) != 0) && (*(char *)(unaff_x19 + 0x38) == '\0')) {
    plVar7 = *(long **)(unaff_x19 + 0x28);
    if (plVar7 == (long *)0x0) goto LAB_07caa428;
    lVar4 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_07caa238;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_044822ac(plVar7,*unaff_x21,4);
LAB_07caa238:
    uVar2 = (*(code *)*puVar1)(plVar7);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_0952a454(*(long *)(unaff_x19 + 0x30),1,0);
        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
           (lVar4 = FUN_0952a094(*(long *)(unaff_x19 + 0x30),0), lVar4 != 0)) {
          FUN_09539e3c(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar4,0)
          ;
          if ((*(long *)(unaff_x19 + 0x30) != 0) &&
             (lVar4 = FUN_0952a094(*(long *)(unaff_x19 + 0x30),0), lVar4 != 0)) {
            FUN_0953a29c(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                         in_stack_00000018,lVar4,0);
            if ((*(long *)(unaff_x19 + 0x30) != 0) &&
               (lVar4 = FUN_0952a094(*(long *)(unaff_x19 + 0x30),0), lVar4 != 0)) {
              uVar3 = thunk_FUN_0953ac24(lVar4,0);
              if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
                thunk_FUN_044a54b4(*(long *)PTR_DAT_09f1e538);
              }
              uVar2 = FUN_09531730(uVar3,0,0);
              fVar8 = 1.0;
              if ((uVar2 & 1) != 0) {
                if (((*(long *)(unaff_x19 + 0x30) == 0) ||
                    (lVar4 = FUN_0952a094(*(long *)(unaff_x19 + 0x30),0), lVar4 == 0)) ||
                   (lVar4 = thunk_FUN_0953ac24(lVar4,0), lVar4 == 0)) goto LAB_07caa428;
                fVar8 = (float)FUN_0953db60(lVar4,0);
              }
              if (*(long *)(unaff_x19 + 0x30) != 0) {
                lVar4 = FUN_0952a094(*(long *)(unaff_x19 + 0x30),0);
                plVar7 = *(long **)(unaff_x19 + 0x28);
                if (plVar7 != (long *)0x0) {
                  lVar5 = *plVar7;
                  uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
                  if (uVar2 != 0) {
                    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar6 + -2) == *unaff_x21) {
                        puVar1 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                        goto LAB_07caa3bc;
                      }
                      uVar2 = uVar2 - 1;
                      piVar6 = piVar6 + 4;
                    } while (uVar2 != 0);
                  }
                  puVar1 = (undefined8 *)FUN_044822ac(plVar7,*unaff_x21,1);
LAB_07caa3bc:
                  fVar9 = (float)(*(code *)*puVar1)(plVar7,puVar1[1]);
                  if (DAT_0a51bf46 == '\0') {
                    FUN_04447ba8(PTR_DAT_09f1e740);
                    DAT_0a51bf46 = '\x01';
                  }
                  if (lVar4 != 0) {
                    fVar9 = fVar9 / fVar8;
                    lVar5 = *(long *)(*(long *)PTR_DAT_09f1e740 + 0xb8);
                    FUN_0953aa9c(fVar9 * *(float *)(lVar5 + 0xc),fVar9 * *(float *)(lVar5 + 0x10),
                                 fVar9 * *(float *)(lVar5 + 0x14),lVar4,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_07caa428;
    }
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_0952a454(*(long *)(unaff_x19 + 0x30),0,0);
    return;
  }
LAB_07caa428:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


