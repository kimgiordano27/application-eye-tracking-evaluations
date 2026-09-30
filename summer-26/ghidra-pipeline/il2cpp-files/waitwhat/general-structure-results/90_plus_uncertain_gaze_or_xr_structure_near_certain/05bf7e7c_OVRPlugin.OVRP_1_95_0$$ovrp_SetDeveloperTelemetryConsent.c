/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_SetDeveloperTelemetryConsent
ENTRY_POINT: 05bf7e7c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_95_0__ovrp_SetDeveloperTelemetryConsent(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int in_w8;
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
  
  if (in_w8 == 0) {
    plVar7 = *(long **)(unaff_x19 + 0x28);
    if (plVar7 == (long *)0x0) goto LAB_05bf80c8;
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_05bf7ed8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_031c0d08(plVar7,*unaff_x21,4);
LAB_05bf7ed8:
    uVar5 = (*(code *)*puVar1)(plVar7);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_069d7048(*(long *)(unaff_x19 + 0x30),1,0);
        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
           (lVar3 = FUN_069d6e00(*(long *)(unaff_x19 + 0x30),0), lVar3 != 0)) {
          FUN_069e7098(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar3,0)
          ;
          if ((*(long *)(unaff_x19 + 0x30) != 0) &&
             (lVar3 = FUN_069d6e00(*(long *)(unaff_x19 + 0x30),0), lVar3 != 0)) {
            FUN_069e7254(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                         in_stack_00000018,lVar3,0);
            if ((*(long *)(unaff_x19 + 0x30) != 0) &&
               (lVar3 = FUN_069d6e00(*(long *)(unaff_x19 + 0x30),0), lVar3 != 0)) {
              uVar2 = thunk_FUN_069e7970(lVar3,0);
              if (*(int *)(*(long *)PTR_DAT_070c1b68 + 0xe4) == 0) {
                thunk_FUN_031e5338(*(long *)PTR_DAT_070c1b68);
              }
              uVar5 = FUN_069d69b8(uVar2,0,0);
              fVar8 = 1.0;
              if ((uVar5 & 1) != 0) {
                if (((*(long *)(unaff_x19 + 0x30) == 0) ||
                    (lVar3 = FUN_069d6e00(*(long *)(unaff_x19 + 0x30),0), lVar3 == 0)) ||
                   (lVar3 = thunk_FUN_069e7970(lVar3,0), lVar3 == 0)) goto LAB_05bf80c8;
                fVar8 = (float)FUN_069e9470(lVar3,0);
              }
              if (*(long *)(unaff_x19 + 0x30) != 0) {
                lVar3 = FUN_069d6e00(*(long *)(unaff_x19 + 0x30),0);
                plVar7 = *(long **)(unaff_x19 + 0x28);
                if (plVar7 != (long *)0x0) {
                  lVar4 = *plVar7;
                  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                  if (uVar5 != 0) {
                    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar6 + -2) == *unaff_x21) {
                        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                        goto LAB_05bf805c;
                      }
                      uVar5 = uVar5 - 1;
                      piVar6 = piVar6 + 4;
                    } while (uVar5 != 0);
                  }
                  puVar1 = (undefined8 *)FUN_031c0d08(plVar7,*unaff_x21,1);
LAB_05bf805c:
                  fVar9 = (float)(*(code *)*puVar1)(plVar7,puVar1[1]);
                  if (DAT_075457b6 == '\0') {
                    FUN_03188a78(PTR_DAT_070c1a80);
                    DAT_075457b6 = '\x01';
                  }
                  if (lVar3 != 0) {
                    fVar9 = fVar9 / fVar8;
                    lVar4 = *(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8);
                    FUN_069e77e4(fVar9 * *(float *)(lVar4 + 0xc),fVar9 * *(float *)(lVar4 + 0x10),
                                 fVar9 * *(float *)(lVar4 + 0x14),lVar3,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_05bf80c8;
    }
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_069d7048(*(long *)(unaff_x19 + 0x30),0,0);
    return;
  }
LAB_05bf80c8:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


