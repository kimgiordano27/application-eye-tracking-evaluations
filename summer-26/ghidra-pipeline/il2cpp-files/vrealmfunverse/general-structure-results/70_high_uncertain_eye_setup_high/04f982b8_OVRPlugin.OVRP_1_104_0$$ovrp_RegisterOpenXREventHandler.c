/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_RegisterOpenXREventHandler
ENTRY_POINT: 04f982b8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_104_0__ovrp_RegisterOpenXREventHandler(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
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
  
  if (*(char *)(unaff_x19 + 0x38) == '\0') {
    plVar7 = *(long **)(unaff_x19 + 0x28);
    if (plVar7 == (long *)0x0) goto LAB_04f98508;
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_04f98318;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(plVar7,*unaff_x21,4);
LAB_04f98318:
    uVar5 = (*(code *)*puVar1)(plVar7);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_05c8cb28(*(long *)(unaff_x19 + 0x30),1,0);
        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
           (lVar3 = FUN_05c8c8e0(*(long *)(unaff_x19 + 0x30),0), lVar3 != 0)) {
          FUN_05c9c070(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar3,0)
          ;
          if ((*(long *)(unaff_x19 + 0x30) != 0) &&
             (lVar3 = FUN_05c8c8e0(*(long *)(unaff_x19 + 0x30),0), lVar3 != 0)) {
            FUN_05c9c22c(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                         in_stack_00000018,lVar3,0);
            if ((*(long *)(unaff_x19 + 0x30) != 0) &&
               (lVar3 = FUN_05c8c8e0(*(long *)(unaff_x19 + 0x30),0), lVar3 != 0)) {
              uVar2 = thunk_FUN_05c9c9cc(lVar3,0);
              if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
                thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312520);
              }
              uVar5 = FUN_05c8c45c(uVar2,0,0);
              fVar8 = 1.0;
              if ((uVar5 & 1) != 0) {
                if (((*(long *)(unaff_x19 + 0x30) == 0) ||
                    (lVar3 = FUN_05c8c8e0(*(long *)(unaff_x19 + 0x30),0), lVar3 == 0)) ||
                   (lVar3 = thunk_FUN_05c9c9cc(lVar3,0), lVar3 == 0)) goto LAB_04f98508;
                fVar8 = (float)FUN_05c9e358(lVar3,0);
              }
              if (*(long *)(unaff_x19 + 0x30) != 0) {
                lVar3 = FUN_05c8c8e0(*(long *)(unaff_x19 + 0x30),0);
                plVar7 = *(long **)(unaff_x19 + 0x28);
                if (plVar7 != (long *)0x0) {
                  lVar4 = *plVar7;
                  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                  if (uVar5 != 0) {
                    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar6 + -2) == *unaff_x21) {
                        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                        goto LAB_04f9849c;
                      }
                      uVar5 = uVar5 - 1;
                      piVar6 = piVar6 + 4;
                    } while (uVar5 != 0);
                  }
                  puVar1 = (undefined8 *)FUN_02b7654c(plVar7,*unaff_x21,1);
LAB_04f9849c:
                  fVar9 = (float)(*(code *)*puVar1)(plVar7,puVar1[1]);
                  if (DAT_066c1d98 == '\0') {
                    FUN_02b3c81c(PTR_DAT_06312438);
                    DAT_066c1d98 = '\x01';
                  }
                  if (lVar3 != 0) {
                    fVar9 = fVar9 / fVar8;
                    lVar4 = *(long *)(*(long *)PTR_DAT_06312438 + 0xb8);
                    FUN_05c9c840(fVar9 * *(float *)(lVar4 + 0xc),fVar9 * *(float *)(lVar4 + 0x10),
                                 fVar9 * *(float *)(lVar4 + 0x14),lVar3,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_04f98508;
    }
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_05c8cb28(*(long *)(unaff_x19 + 0x30),0,0);
    return;
  }
LAB_04f98508:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


