/*
FUNCTION_NAME: OVRPlugin.OVRP_1_72_0$$ovrp_GetSpaceBoundary2D
ENTRY_POINT: 06977210
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_72_0__ovrp_GetSpaceBoundary2D(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  undefined8 *puVar8;
  float fVar9;
  
  FUN_03a8a718();
  FUN_03a8a718(PTR_DAT_084b74f0);
  *(undefined1 *)(unaff_x20 + 0x12f) = 1;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    fVar9 = *(float *)(*(long *)(unaff_x19 + 0x20) + 0x28);
    lVar7 = *(long *)(unaff_x19 + 0x30);
    lVar3 = FUN_07c98f88();
    puVar2 = PTR_DAT_084b74e8;
    if (lVar3 != 0) {
      uVar4 = FUN_07cae590(lVar3,*(undefined8 *)PTR_DAT_084b74e8,0);
      if (lVar7 != 0) {
        puVar8 = (undefined8 *)(lVar7 + 0x20);
        *puVar8 = uVar4;
        thunk_FUN_03afed3c(puVar8,uVar4);
        puVar1 = PTR_DAT_08486738;
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x20);
          if (*(int *)(*(long *)PTR_DAT_08486738 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          fVar9 = fVar9 * -0.5;
          uVar5 = FUN_07c9e200(uVar4,0,0);
          if ((uVar5 & 1) != 0) {
            lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487320);
            FUN_07c9d2fc(lVar3,*(undefined8 *)puVar2,0);
            if (lVar3 == 0) goto LAB_06977528;
            lVar7 = FUN_07c9c69c(lVar3,0);
            uVar4 = FUN_07c98f88();
            if (lVar7 == 0) goto LAB_06977528;
            FUN_07cacc78(lVar7,uVar4,0);
            lVar7 = FUN_07c9c69c(lVar3,0);
            if (lVar7 == 0) goto LAB_06977528;
            FUN_07cab7ec(0,fVar9,0,lVar7,0);
            lVar7 = FUN_07c9c69c(lVar3,0);
            if (DAT_08974d8a == '\0') {
              FUN_03a8a718(PTR_DAT_08486860);
              DAT_08974d8a = '\x01';
            }
            if (lVar7 == 0) goto LAB_06977528;
            puVar6 = *(undefined4 **)(*(long *)PTR_DAT_08486860 + 0xb8);
            FUN_07cac71c(*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar7,0);
            lVar7 = *(long *)(unaff_x19 + 0x30);
            uVar4 = FUN_07c9c69c(lVar3,0);
            if (lVar7 == 0) goto LAB_06977528;
            puVar8 = (undefined8 *)(lVar7 + 0x20);
            *puVar8 = uVar4;
            thunk_FUN_03afed3c(puVar8,uVar4);
          }
          lVar7 = *(long *)(unaff_x19 + 0x30);
          lVar3 = FUN_07c98f88();
          puVar2 = PTR_DAT_084b74f0;
          if (lVar3 != 0) {
            uVar4 = FUN_07cae590(lVar3,*(undefined8 *)PTR_DAT_084b74f0,0);
            if (lVar7 != 0) {
              puVar8 = (undefined8 *)(lVar7 + 0x28);
              *puVar8 = uVar4;
              thunk_FUN_03afed3c(puVar8,uVar4);
              if (*(long *)(unaff_x19 + 0x30) != 0) {
                uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x30) + 0x28);
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4();
                }
                uVar5 = FUN_07c9e200(uVar4,0,0);
                if ((uVar5 & 1) == 0) {
                  return;
                }
                lVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08487320);
                FUN_07c9d2fc(lVar3,*(undefined8 *)puVar2,0);
                if (lVar3 != 0) {
                  lVar7 = FUN_07c9c69c(lVar3,0);
                  uVar4 = FUN_07c98f88();
                  if (lVar7 != 0) {
                    FUN_07cacc78(lVar7,uVar4,0);
                    lVar7 = FUN_07c9c69c(lVar3,0);
                    if (lVar7 != 0) {
                      FUN_07cab7ec(0,fVar9,0,lVar7,0);
                      lVar7 = FUN_07c9c69c(lVar3,0);
                      if (DAT_08974d8a == '\0') {
                        FUN_03a8a718(PTR_DAT_08486860);
                        DAT_08974d8a = '\x01';
                      }
                      if (lVar7 != 0) {
                        puVar6 = *(undefined4 **)(*(long *)PTR_DAT_08486860 + 0xb8);
                        FUN_07cac71c(*puVar6,puVar6[1],puVar6[2],puVar6[3],lVar7,0);
                        lVar7 = *(long *)(unaff_x19 + 0x30);
                        uVar4 = FUN_07c9c69c(lVar3,0);
                        if (lVar7 != 0) {
                          puVar8 = (undefined8 *)(lVar7 + 0x28);
                          *puVar8 = uVar4;
                          thunk_FUN_03afed3c(puVar8,uVar4);
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
LAB_06977528:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


