/*
FUNCTION_NAME: Fusion.Photon.Realtime.CustomTypesUnity$$SerializeVector2
ENTRY_POINT: 01c1cee0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Fusion_Photon_Realtime_CustomTypesUnity__SerializeVector2(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 *puVar7;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  puVar7 = *(undefined8 **)(unaff_x23 + 0x608);
  *(undefined8 *)(unaff_x20 + 0x20) = unaff_x22;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar2 = thunk_FUN_01a89e68(*unaff_x26);
  FUN_036cfaa0(lVar2,*puVar7);
  if (lVar2 != 0) {
    lVar3 = FUN_036cf428(lVar2,0);
    if ((*unaff_x21 != 0) && (uVar4 = FUN_036cf428(*unaff_x21,0), lVar3 != 0)) {
      FUN_036dd6d0(lVar3,uVar4,0);
      plVar5 = (long *)FUN_036cf428(lVar2,0);
      if (plVar5 == (long *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c1cf88 with catch @ 01c1cf98
                        */
        *(undefined8 *)(unaff_x19 + 0x28) = 0;
      }
      else {
        lVar3 = *(long *)PTR_DAT_03cc0828;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c1cf8c with catch @ 01c1cf7c
                        */
                    /* try { // try from 01c1cf88 to 01d1cf8b has its CatchHandler @ 01c1cf98 */
        if ((*plVar5 != lVar3) || (*(long **)(unaff_x19 + 0x28) = plVar5, *plVar5 != lVar3)) {
                    /* try { // try from 01c1cf8c to 01d1cf9b has its CatchHandler @ 01c1cf7c */
                    /* WARNING: Subroutine does not return */
          FUN_01ab6ee0(plVar5);
        }
      }
      puVar1 = PTR_DAT_03cc3600;
                    /* try { // try from 01c1cf9c to 01d1cf9f has its CatchHandler @ 01c1cfa8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c1cf9c with catch @ 01c1cfa8
                        */
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((long *)(unaff_x19 + 0x28),plVar5);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c1cfc4 with catch @ 01c1cfb4
                        */
      FUN_01f7e2fc(lVar2,*(undefined8 *)puVar1);
                    /* try { // try from 01c1cfc0 to 01d1cfc3 has its CatchHandler @ 01c1cfd0 */
                    /* try { // try from 01c1cfc4 to 01d1cfd3 has its CatchHandler @ 01c1cfb4 */
      plVar5 = (long *)FUN_01ab6a94(*unaff_x25,1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c1cfc0 with catch @ 01c1cfd0
                        */
                    /* try { // try from 01c1cfd4 to 01d1cfd7 has its CatchHandler @ 01c1cfe0 */
      lVar2 = FUN_0277b678(*unaff_x24,0);
      if (plVar5 != (long *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01c1cfd4 with catch @ 01c1cfe0
                        */
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_01a89d6c(lVar2,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0)) {
          uVar4 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
          FUN_01ab6b14(uVar4,0);
        }
        puVar1 = PTR_DAT_03cc3610;
        if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        plVar5[4] = lVar2;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5 + 4,lVar2);
        lVar2 = thunk_FUN_01a89e68(*unaff_x26);
        FUN_036cfaa0(lVar2,*(undefined8 *)puVar1,plVar5,0);
        if (lVar2 != 0) {
          lVar3 = FUN_036cf428(lVar2,0);
          lVar6 = *(long *)(unaff_x19 + 0x28);
          if ((lVar6 != 0) && (uVar4 = FUN_036cbb80(lVar6,0), puVar1 = PTR_DAT_03cc35f8, lVar3 != 0)
             ) {
            FUN_036dd6d0(lVar3,uVar4,0);
            uVar4 = FUN_01f7e2fc(lVar2,*(undefined8 *)puVar1);
            *(undefined8 *)(unaff_x19 + 0x30) = uVar4;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(unaff_x19 + 0x30),uVar4);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


