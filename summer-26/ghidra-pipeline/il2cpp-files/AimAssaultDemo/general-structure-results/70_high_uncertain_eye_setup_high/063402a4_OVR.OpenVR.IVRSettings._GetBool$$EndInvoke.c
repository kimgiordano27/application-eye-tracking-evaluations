/*
FUNCTION_NAME: OVR.OpenVR.IVRSettings._GetBool$$EndInvoke
ENTRY_POINT: 063402a4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVR_OpenVR_IVRSettings__GetBool__EndInvoke(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  
  FUN_0373b518(*(undefined8 *)(param_1 + 0x808));
  FUN_0373b518(PTR_DAT_07db4810);
  *(undefined1 *)(unaff_x19 + 0x321) = 1;
  uVar3 = thunk_FUN_037788cc(*unaff_x21);
  FUN_06336130();
  **(undefined8 **)(*unaff_x21 + 0xb8) = uVar3;
  thunk_FUN_037aeb94(*(undefined8 *)(*unaff_x21 + 0xb8),uVar3);
  lVar4 = RootMotion_FinalIK_Finger___ctor(*unaff_x20,3);
  if (lVar4 == 0) {
LAB_063406f0:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (*(int *)(lVar4 + 0x18) != 0) {
    *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)PTR_DAT_07db4808;
    thunk_FUN_037aeb94((undefined8 *)(lVar4 + 0x20));
    if (1 < *(uint *)(lVar4 + 0x18)) {
      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)PTR_DAT_07db4810;
      thunk_FUN_037aeb94((undefined8 *)(lVar4 + 0x28));
      puVar2 = PTR_DAT_07db47e0;
      puVar1 = PTR_DAT_07db2198;
      if (2 < *(uint *)(lVar4 + 0x18)) {
        *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)PTR_DAT_07db4800;
        thunk_FUN_037aeb94();
        plVar5 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 8);
        *plVar5 = lVar4;
        thunk_FUN_037aeb94(plVar5,lVar4);
        plVar5 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,10);
        lVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
        FUN_0639e11c(lVar4,0);
        if (plVar5 == (long *)0x0) goto LAB_063406f0;
        if ((lVar4 != 0) &&
           (lVar6 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
LAB_063406e4:
          uVar3 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
          FUN_0373b680(uVar3,0);
        }
        puVar1 = PTR_DAT_07db47e8;
        if ((int)plVar5[3] != 0) {
          plVar5[4] = lVar4;
          thunk_FUN_037aeb94(plVar5 + 4,lVar4);
          lVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
          FUN_0639e678(lVar4,0);
          if ((lVar4 != 0) &&
             (lVar6 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
          goto LAB_063406e4;
          puVar1 = PTR_DAT_07db2190;
          if (1 < *(uint *)(plVar5 + 3)) {
            plVar5[5] = lVar4;
            thunk_FUN_037aeb94(plVar5 + 5,lVar4);
            lVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
            FUN_063ae3dc(lVar4,0);
            if ((lVar4 != 0) &&
               (lVar6 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
            goto LAB_063406e4;
            puVar1 = PTR_DAT_07db47b8;
            if (2 < *(uint *)(plVar5 + 3)) {
              plVar5[6] = lVar4;
              thunk_FUN_037aeb94(plVar5 + 6,lVar4);
              lVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
              FUN_06399fe4(lVar4,0);
              if ((lVar4 != 0) &&
                 (lVar6 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
              goto LAB_063406e4;
              puVar1 = PTR_DAT_07db47c8;
              if (3 < *(uint *)(plVar5 + 3)) {
                plVar5[7] = lVar4;
                thunk_FUN_037aeb94(plVar5 + 7,lVar4);
                lVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
                FUN_0639aae0(lVar4,0);
                if ((lVar4 != 0) &&
                   (lVar6 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
                goto LAB_063406e4;
                puVar1 = PTR_DAT_07db47d0;
                if (4 < *(uint *)(plVar5 + 3)) {
                  plVar5[8] = lVar4;
                  thunk_FUN_037aeb94(plVar5 + 8,lVar4);
                  lVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
                  FUN_0639a788(lVar4,0);
                  if ((lVar4 != 0) &&
                     (lVar6 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)
                     ) goto LAB_063406e4;
                  puVar1 = PTR_DAT_07db47d8;
                  if (5 < *(uint *)(plVar5 + 3)) {
                    plVar5[9] = lVar4;
                    thunk_FUN_037aeb94(plVar5 + 9,lVar4);
                    lVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
                    FUN_0639d6e0(lVar4,0);
                    if ((lVar4 != 0) &&
                       (lVar6 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar5 + 0x40)),
                       lVar6 == 0)) goto LAB_063406e4;
                    puVar1 = PTR_DAT_07db47f0;
                    if (6 < *(uint *)(plVar5 + 3)) {
                      plVar5[10] = lVar4;
                      thunk_FUN_037aeb94(plVar5 + 10,lVar4);
                      lVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
                      FUN_0639fed4(lVar4,0);
                      if ((lVar4 != 0) &&
                         (lVar6 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar5 + 0x40)),
                         lVar6 == 0)) goto LAB_063406e4;
                      puVar1 = PTR_DAT_07db47c0;
                      if (7 < *(uint *)(plVar5 + 3)) {
                        plVar5[0xb] = lVar4;
                        thunk_FUN_037aeb94(plVar5 + 0xb,lVar4);
                        lVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
                        OVRPlugin__SetExternalLayerDynresEnabled(lVar4,0);
                        if ((lVar4 != 0) &&
                           (lVar6 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar5 + 0x40)),
                           lVar6 == 0)) goto LAB_063406e4;
                        puVar1 = PTR_DAT_07db47f8;
                        if (8 < *(uint *)(plVar5 + 3)) {
                          plVar5[0xc] = lVar4;
                          thunk_FUN_037aeb94(plVar5 + 0xc,lVar4);
                          lVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
                          FUN_063a0960(lVar4,0);
                          if ((lVar4 != 0) &&
                             (lVar6 = thunk_FUN_037787d0(lVar4,*(undefined8 *)(*plVar5 + 0x40)),
                             lVar6 == 0)) goto LAB_063406e4;
                          if (9 < *(uint *)(plVar5 + 3)) {
                            plVar5[0xd] = lVar4;
                            thunk_FUN_037aeb94(plVar5 + 0xd,lVar4);
                            plVar7 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
                            *plVar7 = (long)plVar5;
                            thunk_FUN_037aeb94(plVar7,plVar5);
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
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


