/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerPoint
ENTRY_POINT: 074078e4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerPoint(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
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
  
  if (unaff_x20 != (long *)0x0) {
    lVar3 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_07407938;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_03cf1348();
LAB_07407938:
    uVar5 = (*(code *)*puVar1)();
    if ((uVar5 & 1) == 0) {
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_085deedc(*(long *)(unaff_x19 + 0x30),0,0);
        return;
      }
    }
    else if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_085deedc(*(long *)(unaff_x19 + 0x30),1,0);
      if ((*(long *)(unaff_x19 + 0x30) != 0) &&
         (lVar3 = FUN_085dee20(*(long *)(unaff_x19 + 0x30),0), lVar3 != 0)) {
        FUN_085eb238(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,lVar3,0);
        if ((*(long *)(unaff_x19 + 0x30) != 0) &&
           (lVar3 = FUN_085dee20(*(long *)(unaff_x19 + 0x30),0), lVar3 != 0)) {
          FUN_085eb410(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                       in_stack_00000018,lVar3,0);
          if ((*(long *)(unaff_x19 + 0x30) != 0) &&
             (lVar3 = FUN_085dee20(*(long *)(unaff_x19 + 0x30),0), lVar3 != 0)) {
            uVar2 = FUN_085eb090(lVar3,0);
            if (*(int *)(*(long *)PTR_DAT_08e68f00 + 0xe0) == 0) {
              thunk_FUN_03cd7500(*(long *)PTR_DAT_08e68f00);
            }
            uVar5 = FUN_085decd4(uVar2,0,0);
            fVar8 = 1.0;
            if ((uVar5 & 1) != 0) {
              if (((*(long *)(unaff_x19 + 0x30) == 0) ||
                  (lVar3 = FUN_085dee20(*(long *)(unaff_x19 + 0x30),0), lVar3 == 0)) ||
                 (lVar3 = FUN_085eb090(lVar3,0), lVar3 == 0)) goto LAB_07407b28;
              fVar8 = (float)FUN_085ecd7c(lVar3,0);
            }
            if (*(long *)(unaff_x19 + 0x30) != 0) {
              lVar3 = FUN_085dee20(*(long *)(unaff_x19 + 0x30),0);
              plVar7 = *(long **)(unaff_x19 + 0x28);
              if (plVar7 != (long *)0x0) {
                lVar4 = *plVar7;
                uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                if (uVar5 != 0) {
                  piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar6 + -2) == *unaff_x21) {
                      puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                      goto LAB_07407abc;
                    }
                    uVar5 = uVar5 - 1;
                    piVar6 = piVar6 + 4;
                  } while (uVar5 != 0);
                }
                puVar1 = (undefined8 *)FUN_03cf1348(plVar7,*unaff_x21,1);
LAB_07407abc:
                fVar9 = (float)(*(code *)*puVar1)(plVar7,puVar1[1]);
                if (DAT_0940fff0 == '\0') {
                  FUN_03c8f898(PTR_DAT_08e68e18);
                  DAT_0940fff0 = '\x01';
                }
                if (lVar3 != 0) {
                  fVar9 = fVar9 / fVar8;
                  lVar4 = *(long *)(*(long *)PTR_DAT_08e68e18 + 0xb8);
                  FUN_085eb934(fVar9 * *(float *)(lVar4 + 0xc),fVar9 * *(float *)(lVar4 + 0x10),
                               fVar9 * *(float *)(lVar4 + 0x14),lVar3,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_07407b28:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


