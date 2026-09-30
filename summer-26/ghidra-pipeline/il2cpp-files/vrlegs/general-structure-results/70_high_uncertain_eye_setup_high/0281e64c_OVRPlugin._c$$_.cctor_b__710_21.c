/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__710_21
ENTRY_POINT: 0281e64c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__710_21(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  *(undefined8 *)(param_1 + 0x10) = unaff_x21;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  *(undefined4 *)(unaff_x20 + 0x18) = 0xc;
  lVar5 = thunk_FUN_01a89d6c();
  if (lVar5 != 0) {
                    /* try { // try from 0281e67c to 0291e6c3 has its CatchHandler @ 0281e748 */
    if (9 < *(uint *)(unaff_x19 + 3)) {
      unaff_x19[0xd] = unaff_x20;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar6 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5288,0);
      lVar5 = thunk_FUN_01a89e68(*unaff_x24);
      FUN_027b3d9c(lVar5,0);
      *(undefined8 *)(lVar5 + 0x10) = uVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(lVar5 + 0x10),uVar6);
      *(undefined4 *)(lVar5 + 0x18) = 0x10;
      lVar7 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
      if (lVar7 == 0) goto LAB_0281eb40;
      if (10 < *(uint *)(unaff_x19 + 3)) {
        unaff_x19[0xe] = lVar5;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xe,lVar5);
        uVar6 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5250,0);
        lVar5 = thunk_FUN_01a89e68(*unaff_x24);
        FUN_027b3d9c(lVar5,0);
        *(undefined8 *)(lVar5 + 0x10) = uVar6;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(lVar5 + 0x10),uVar6);
        *(undefined4 *)(lVar5 + 0x18) = 0x12;
        lVar7 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
        if (lVar7 == 0) goto LAB_0281eb40;
        if (0xb < *(uint *)(unaff_x19 + 3)) {
          unaff_x19[0xf] = lVar5;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0xf,lVar5);
          uVar6 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cd7f80,0);
          lVar5 = thunk_FUN_01a89e68(*unaff_x24);
          FUN_027b3d9c(lVar5,0);
          *(undefined8 *)(lVar5 + 0x10) = uVar6;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                    ((undefined8 *)(lVar5 + 0x10),uVar6);
          *(undefined4 *)(lVar5 + 0x18) = 0x14;
          lVar7 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
          if (lVar7 == 0) goto LAB_0281eb40;
          if (0xc < *(uint *)(unaff_x19 + 3)) {
            unaff_x19[0x10] = lVar5;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      (unaff_x19 + 0x10,lVar5);
            uVar6 = FUN_0277b678(*unaff_x29,0);
            lVar5 = thunk_FUN_01a89e68(*unaff_x24);
            FUN_027b3d9c(lVar5,0);
            *(undefined8 *)(lVar5 + 0x10) = uVar6;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(lVar5 + 0x10),uVar6);
            *(undefined4 *)(lVar5 + 0x18) = 0x16;
            lVar7 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
            if (lVar7 == 0) goto LAB_0281eb40;
            if (0xd < *(uint *)(unaff_x19 + 3)) {
              unaff_x19[0x11] = lVar5;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        (unaff_x19 + 0x11,lVar5);
              uVar6 = FUN_0277b678(*unaff_x28,0);
              lVar5 = thunk_FUN_01a89e68(*unaff_x24);
              FUN_027b3d9c(lVar5,0);
              *(undefined8 *)(lVar5 + 0x10) = uVar6;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                        ((undefined8 *)(lVar5 + 0x10),uVar6);
              *(undefined4 *)(lVar5 + 0x18) = 0x18;
              lVar7 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
              if (lVar7 == 0) goto LAB_0281eb40;
              if (0xe < *(uint *)(unaff_x19 + 3)) {
                unaff_x19[0x12] = lVar5;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          (unaff_x19 + 0x12,lVar5);
                uVar6 = FUN_0277b678(*unaff_x26,0);
                lVar5 = thunk_FUN_01a89e68(*unaff_x24);
                FUN_027b3d9c(lVar5,0);
                *(undefined8 *)(lVar5 + 0x10) = uVar6;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                          ((undefined8 *)(lVar5 + 0x10),uVar6);
                *(undefined4 *)(lVar5 + 0x18) = 0x1e;
                lVar7 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                if (lVar7 == 0) goto LAB_0281eb40;
                if (0xf < *(uint *)(unaff_x19 + 3)) {
                  unaff_x19[0x13] = lVar5;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            (unaff_x19 + 0x13,lVar5);
                  uVar6 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5228,0);
                  lVar5 = thunk_FUN_01a89e68(*unaff_x24);
                  FUN_027b3d9c(lVar5,0);
                  *(undefined8 *)(lVar5 + 0x10) = uVar6;
                  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                            ((undefined8 *)(lVar5 + 0x10),uVar6);
                  *(undefined4 *)(lVar5 + 0x18) = 0x1a;
                  lVar7 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                  if (lVar7 == 0) goto LAB_0281eb40;
                  if (0x10 < *(uint *)(unaff_x19 + 3)) {
                    unaff_x19[0x14] = lVar5;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              (unaff_x19 + 0x14,lVar5);
                    uVar6 = FUN_0277b678(*unaff_x23,0);
                    lVar5 = thunk_FUN_01a89e68(*unaff_x24);
                    FUN_027b3d9c(lVar5,0);
                    *(undefined8 *)(lVar5 + 0x10) = uVar6;
                    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                              ((undefined8 *)(lVar5 + 0x10),uVar6);
                    *(undefined4 *)(lVar5 + 0x18) = 0;
                    lVar7 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                    if (lVar7 == 0) goto LAB_0281eb40;
                    if (0x11 < *(uint *)(unaff_x19 + 3)) {
                      unaff_x19[0x15] = lVar5;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                (unaff_x19 + 0x15,lVar5);
                      uVar6 = FUN_0277b678(*(undefined8 *)PTR_DAT_03cc5270,0);
                      lVar5 = thunk_FUN_01a89e68(*unaff_x24);
                      FUN_027b3d9c(lVar5,0);
                      *(undefined8 *)(lVar5 + 0x10) = uVar6;
                      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                ((undefined8 *)(lVar5 + 0x10),uVar6);
                      *(undefined4 *)(lVar5 + 0x18) = 0x27;
                      lVar7 = thunk_FUN_01a89d6c(lVar5,*(undefined8 *)(*unaff_x19 + 0x40));
                      puVar4 = PTR_DAT_03cfe768;
                      puVar3 = PTR_DAT_03cfe760;
                      puVar2 = PTR_DAT_03cfe6e0;
                      puVar1 = PTR_DAT_03cfe6d0;
                      if (lVar7 == 0) goto LAB_0281eb40;
                      if (0x12 < *(uint *)(unaff_x19 + 3)) {
                        unaff_x19[0x16] = lVar5;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (unaff_x19 + 0x16,lVar5);
                        *(long **)(*(long *)(*unaff_x27 + 0xb8) + 8) = unaff_x19;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                        uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar2);
                        FUN_021de1ac(uVar6,0,*(undefined8 *)puVar1,0);
                        uVar8 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
                        FUN_020aff34(uVar8,uVar6,*(undefined8 *)puVar3);
                        puVar9 = (undefined8 *)(*(long *)(*unaff_x27 + 0xb8) + 0x10);
                        *puVar9 = uVar8;
                        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                                  (puVar9,uVar8);
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
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
LAB_0281eb40:
  uVar6 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar6,0);
}


