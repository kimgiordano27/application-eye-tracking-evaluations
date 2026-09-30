/*
FUNCTION_NAME: Fusion.Photon.Realtime.CustomTypesUnity$$DeserializeVector3
ENTRY_POINT: 01c1ccbc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Fusion_Photon_Realtime_CustomTypesUnity__DeserializeVector3(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar10;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  FUN_01ab69ac(PTR_DAT_03cc3608);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c1ccb8 with catch @ 01c1ccc8
                        */
  FUN_01ab69ac(PTR_DAT_03cc3610);
                    /* try { // try from 01c1ccd8 to 01d1ccdb has its CatchHandler @ 01c1cce8 */
  *(undefined1 *)(unaff_x21 + 0x670) = 1;
  uVar4 = FUN_01c1c568();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c1ccd8 with catch @ 01c1cce8
                        */
  plVar5 = (long *)FUN_01ab6a94(*unaff_x25,1);
  uVar10 = *unaff_x24;
                    /* try { // try from 01c1cd04 to 01d1cd07 has its CatchHandler @ 01c1cd38 */
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*unaff_x22);
  }
                    /* try { // try from 01c1cd18 to 01d1cd27 has its CatchHandler @ 01c1cd34 */
  lVar6 = FUN_0277b678(uVar10,0);
  if (plVar5 != (long *)0x0) {
                    /* try { // try from 01c1cd28 to 01d1cd33 has its CatchHandler @ 01c1cd38 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c1cd18 with catch @ 01c1cd34
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c1cd04 with catch @ 01c1cd38
                       catch(type#1 @ 00000000) { ... } // from try @ 01c1cd28 with catch @ 01c1cd38
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c1cdfc with catch @ 01c1cd3c
                        */
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_01c1d0b4;
    puVar1 = PTR_DAT_03cbe5c8;
    if ((int)plVar5[3] == 0) goto LAB_01c1d0b0;
    plVar5[4] = lVar6;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 4,lVar6);
    lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
    FUN_036cfaa0(lVar6,uVar4,plVar5,0);
    if (unaff_x19 != 0) {
      plVar5 = (long *)(unaff_x19 + 0x10);
      *plVar5 = lVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5,lVar6);
      lVar7 = *plVar5;
      lVar6 = FUN_036cbbbc();
                    /* try { // try from 01c1cda8 to 01d1cdaf has its CatchHandler @ 01c1ce04 */
      if ((lVar6 != 0) && (uVar3 = FUN_036cf464(lVar6,0), lVar7 != 0)) {
        FUN_036cf4a0(lVar7,uVar3,0);
        if (*plVar5 != 0) {
          FUN_036d46a4(*plVar5,0x3d,0);
          if (*plVar5 != 0) {
                    /* try { // try from 01c1cde0 to 01d1cdef has its CatchHandler @ 01c1ce00 */
            lVar6 = FUN_036cf428(*plVar5,0);
                    /* try { // try from 01c1cdf0 to 01d1cdfb has its CatchHandler @ 01c1ce04 */
                    /* try { // try from 01c1cdfc to 01d1ce07 has its CatchHandler @ 01c1cd3c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c1cde0 with catch @ 01c1ce00
                        */
            if ((*(long *)(unaff_x19 + 0x20) != 0) &&
               (uVar4 = FUN_036cbb80(*(long *)(unaff_x19 + 0x20),0), lVar6 != 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c1cda8 with catch @ 01c1ce04
                       catch(type#1 @ 00000000) { ... } // from try @ 01c1cdf0 with catch @ 01c1ce04
                        */
                    /* try { // try from 01c1ce08 to 01d1ce43 has its CatchHandler @ 01c1ce08
                       catch() { ... } // from try @ 01c1ce08 with catch @ 01c1ce08
                       catch() { ... } // from try @ 01c1ce48 with catch @ 01c1ce08 */
              FUN_036dd6d0(lVar6,uVar4,0);
              if (*plVar5 != 0) {
                lVar6 = FUN_01f7e2fc(*plVar5,*(undefined8 *)PTR_DAT_03cbfe90);
                *(long *)(unaff_x19 + 0x18) = lVar6;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          ((long *)(unaff_x19 + 0x18),lVar6);
                if (lVar6 != 0) {
                    /* try { // try from 01c1ce44 to 01d1ce47 has its CatchHandler @ 01c1ce84 */
                    /* try { // try from 01c1ce48 to 01d1ce97 has its CatchHandler @ 01c1ce08 */
                  FUN_03911838(lVar6,*(undefined4 *)(unaff_x20 + 0x6c),0);
                  FUN_03911d64(lVar6,*(undefined4 *)(unaff_x20 + 0x70),0);
                  FUN_03911c20(*(undefined4 *)(unaff_x20 + 0x74),lVar6,0);
                  if (*(long *)(unaff_x19 + 0x20) != 0) {
                    uVar4 = FUN_01c0519c(*(long *)(unaff_x19 + 0x20),0);
                    /* catch() { ... } // from try @ 01c1ce44 with catch @ 01c1ce84 */
                    FUN_03912370(lVar6,uVar4,0);
                    plVar8 = (long *)FUN_01ab6a94(*unaff_x25,1);
                    /* try { // try from 01c1cea4 to 01d1cea7 has its CatchHandler @ 01c1ceb4 */
                    lVar6 = FUN_0277b678(*unaff_x24,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c1cea4 with catch @ 01c1ceb4
                        */
                    if (plVar8 != (long *)0x0) {
                    /* try { // try from 01c1cec4 to 01d1cec7 has its CatchHandler @ 01c1ced4 */
                      if ((lVar6 != 0) &&
                         (lVar7 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar8 + 0x40)),
                         lVar7 == 0)) {
LAB_01c1d0b4:
                        uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6b14(uVar4,0);
                      }
                      puVar2 = PTR_DAT_03cc3608;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c1cec4 with catch @ 01c1ced4
                        */
                      if ((int)plVar8[3] == 0) {
LAB_01c1d0b0:
                    /* WARNING: Subroutine does not return */
                        FUN_01ab6c44();
                      }
                      plVar8[4] = lVar6;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (plVar8 + 4,lVar6);
                      lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
                      FUN_036cfaa0(lVar6,*(undefined8 *)puVar2,plVar8,0);
                      if (lVar6 != 0) {
                        lVar7 = FUN_036cf428(lVar6,0);
                        if ((*plVar5 != 0) && (uVar4 = FUN_036cf428(*plVar5,0), lVar7 != 0)) {
                          FUN_036dd6d0(lVar7,uVar4,0);
                          plVar5 = (long *)FUN_036cf428(lVar6,0);
                          if (plVar5 == (long *)0x0) {
                            *(undefined8 *)(unaff_x19 + 0x28) = 0;
                          }
                          else {
                            lVar7 = *(long *)PTR_DAT_03cc0828;
                            if ((*plVar5 != lVar7) ||
                               (*(long **)(unaff_x19 + 0x28) = plVar5, *plVar5 != lVar7)) {
                    /* WARNING: Subroutine does not return */
                              FUN_01ab6ee0(plVar5);
                            }
                          }
                          puVar2 = PTR_DAT_03cc3600;
                          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                    ((long *)(unaff_x19 + 0x28),plVar5);
                          FUN_01f7e2fc(lVar6,*(undefined8 *)puVar2);
                          plVar5 = (long *)FUN_01ab6a94(*unaff_x25,1);
                          lVar6 = FUN_0277b678(*unaff_x24,0);
                          if (plVar5 != (long *)0x0) {
                            if ((lVar6 != 0) &&
                               (lVar7 = thunk_FUN_01a89d6c(lVar6,*(undefined8 *)(*plVar5 + 0x40)),
                               lVar7 == 0)) goto LAB_01c1d0b4;
                            puVar2 = PTR_DAT_03cc3610;
                            if ((int)plVar5[3] == 0) goto LAB_01c1d0b0;
                            plVar5[4] = lVar6;
                            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                      (plVar5 + 4,lVar6);
                            lVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar1);
                            FUN_036cfaa0(lVar6,*(undefined8 *)puVar2,plVar5,0);
                            if (lVar6 != 0) {
                              lVar7 = FUN_036cf428(lVar6,0);
                              lVar9 = *(long *)(unaff_x19 + 0x28);
                              if ((lVar9 != 0) &&
                                 (uVar4 = FUN_036cbb80(lVar9,0), puVar1 = PTR_DAT_03cc35f8,
                                 lVar7 != 0)) {
                                FUN_036dd6d0(lVar7,uVar4,0);
                                uVar4 = FUN_01f7e2fc(lVar6,*(undefined8 *)puVar1);
                                *(undefined8 *)(unaff_x19 + 0x30) = uVar4;
                                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                          ((undefined8 *)(unaff_x19 + 0x30),uVar4);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


