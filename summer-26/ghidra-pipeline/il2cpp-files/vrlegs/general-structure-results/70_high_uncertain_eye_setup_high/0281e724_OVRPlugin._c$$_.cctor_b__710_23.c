/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__710_23
ENTRY_POINT: 0281e724
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__710_23(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *unaff_x19;
  undefined8 unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  lVar5 = thunk_FUN_01a89e68(param_1);
  FUN_027b3d9c(lVar5,0);
  *(undefined8 *)(lVar5 + 0x10) = unaff_x21;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0281e67c with catch @ 0281e748
                        */
  *(undefined4 *)(lVar5 + 0x18) = 0x12;
  lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                    /* try { // try from 0281e760 to 0291e763 has its CatchHandler @ 0281e770 */
  if (lVar6 != 0) {
    if (0xb < *(uint *)(unaff_x19 + 3)) {
                    /* catch() { ... } // from try @ 0281e760 with catch @ 0281e770 */
      unaff_x19[0xf] = lVar5;
                    /* try { // try from 0281e77c to 0291e787 has its CatchHandler @ 0281e79c */
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xf,lVar5);
                    /* try { // try from 0281e788 to 0291e793 has its CatchHandler @ 0281e61c */
      uVar7 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cd7f80,0);
      lVar5 = thunk_FUN_01a89e68(*unaff_x24);
      FUN_027b3d9c(lVar5,0);
      *(undefined8 *)(lVar5 + 0x10) = uVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar5 + 0x10),uVar7);
      *(undefined4 *)(lVar5 + 0x18) = 0x14;
      lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
      if (lVar6 == 0) goto LAB_0281eb40;
      if (0xc < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[0x10] = lVar5;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x10,lVar5);
        uVar7 = FUN_0277b678(*unaff_x29,0);
        lVar5 = thunk_FUN_01a89e68(*unaff_x24);
        FUN_027b3d9c(lVar5,0);
        *(undefined8 *)(lVar5 + 0x10) = uVar7;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar5 + 0x10),uVar7);
        *(undefined4 *)(lVar5 + 0x18) = 0x16;
        lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
        if (lVar6 == 0) goto LAB_0281eb40;
        if (0xd < *(uint *)(unaff_x19 + 3)) {
          unaff_x19[0x11] = lVar5;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x11,lVar5);
          uVar7 = FUN_0277b678(*unaff_x28,0);
          lVar5 = thunk_FUN_01a89e68(*unaff_x24);
          FUN_027b3d9c(lVar5,0);
          *(undefined8 *)(lVar5 + 0x10) = uVar7;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((undefined8 *)(lVar5 + 0x10),uVar7);
          *(undefined4 *)(lVar5 + 0x18) = 0x18;
          lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
          if (lVar6 == 0) goto LAB_0281eb40;
          if (0xe < *(uint *)(unaff_x19 + 3)) {
            unaff_x19[0x12] = lVar5;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (unaff_x19 + 0x12,lVar5);
            uVar7 = FUN_0277b678(*unaff_x26,0);
            lVar5 = thunk_FUN_01a89e68(*unaff_x24);
            FUN_027b3d9c(lVar5,0);
            *(undefined8 *)(lVar5 + 0x10) = uVar7;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(lVar5 + 0x10),uVar7);
            *(undefined4 *)(lVar5 + 0x18) = 0x1e;
            lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
            if (lVar6 == 0) goto LAB_0281eb40;
            if (0xf < *(uint *)(unaff_x19 + 3)) {
              unaff_x19[0x13] = lVar5;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (unaff_x19 + 0x13,lVar5);
              uVar7 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5228,0);
              lVar5 = thunk_FUN_01a89e68(*unaff_x24);
              FUN_027b3d9c(lVar5,0);
              *(undefined8 *)(lVar5 + 0x10) = uVar7;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        ((undefined8 *)(lVar5 + 0x10),uVar7);
              *(undefined4 *)(lVar5 + 0x18) = 0x1a;
              lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
              if (lVar6 == 0) goto LAB_0281eb40;
              if (0x10 < *(uint *)(unaff_x19 + 3)) {
                unaff_x19[0x14] = lVar5;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (unaff_x19 + 0x14,lVar5);
                uVar7 = FUN_0277b678(*unaff_x23,0);
                lVar5 = thunk_FUN_01a89e68(*unaff_x24);
                FUN_027b3d9c(lVar5,0);
                *(undefined8 *)(lVar5 + 0x10) = uVar7;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          ((undefined8 *)(lVar5 + 0x10),uVar7);
                *(undefined4 *)(lVar5 + 0x18) = 0;
                lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                if (lVar6 == 0) goto LAB_0281eb40;
                if (0x11 < *(uint *)(unaff_x19 + 3)) {
                  unaff_x19[0x15] = lVar5;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (unaff_x19 + 0x15,lVar5);
                  uVar7 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5270,0);
                  lVar5 = thunk_FUN_01a89e68(*unaff_x24);
                  FUN_027b3d9c(lVar5,0);
                  *(undefined8 *)(lVar5 + 0x10) = uVar7;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            ((undefined8 *)(lVar5 + 0x10),uVar7);
                  *(undefined4 *)(lVar5 + 0x18) = 0x27;
                  lVar6 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                  puVar4 = PTR_DAT_03cfe768;
                  puVar3 = PTR_DAT_03cfe760;
                  puVar2 = PTR_DAT_03cfe6e0;
                  puVar1 = PTR_DAT_03cfe6d0;
                  if (lVar6 == 0) goto LAB_0281eb40;
                  if (0x12 < *(uint *)(unaff_x19 + 3)) {
                    unaff_x19[0x16] = lVar5;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (unaff_x19 + 0x16,lVar5);
                    *(long **)(*(long *)(*unaff_x27 + 0xb8) + 8) = unaff_x19;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    uVar7 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
                    FUN_021de1ac(uVar7,0,*(undefined8 *)puVar1,0);
                    uVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
                    FUN_020aff34(uVar8,uVar7,*(undefined8 *)puVar3);
                    puVar9 = (undefined8 *)(*(long *)(*unaff_x27 + 0xb8) + 0x10);
                    *puVar9 = uVar8;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar9,uVar8);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
LAB_0281eb40:
  uVar7 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar7,0);
}


