/*
FUNCTION_NAME: OVR.OpenVR.IVRSettings._GetInt32$$Invoke
ENTRY_POINT: 06340384
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_19;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVR_OpenVR_IVRSettings__GetInt32__Invoke(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  
  *(undefined8 *)(*(long *)(param_1 + 0xb8) + 8) = unaff_x19;
  thunk_FUN_037aeb94();
  plVar2 = (long *)RootMotion_FinalIK_Finger___ctor(*unaff_x20,10);
  lVar3 = thunk_FUN_037788cc(*unaff_x22);
  FUN_0639e11c(lVar3,0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_037787d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
LAB_063406e4:
    uVar6 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar6,0);
  }
  puVar1 = PTR_DAT_07db47e8;
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar3;
    thunk_FUN_037aeb94(plVar2 + 4,lVar3);
    lVar3 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
    FUN_0639e678(lVar3,0);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_037787d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_063406e4;
    puVar1 = PTR_DAT_07db2190;
    if (1 < *(uint *)(plVar2 + 3)) {
      plVar2[5] = lVar3;
      thunk_FUN_037aeb94(plVar2 + 5,lVar3);
      lVar3 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
      FUN_063ae3dc(lVar3,0);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_037787d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
      goto LAB_063406e4;
      puVar1 = PTR_DAT_07db47b8;
      if (2 < *(uint *)(plVar2 + 3)) {
        plVar2[6] = lVar3;
        thunk_FUN_037aeb94(plVar2 + 6,lVar3);
        lVar3 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
        FUN_06399fe4(lVar3,0);
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_037787d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
        goto LAB_063406e4;
        puVar1 = PTR_DAT_07db47c8;
        if (3 < *(uint *)(plVar2 + 3)) {
          plVar2[7] = lVar3;
          thunk_FUN_037aeb94(plVar2 + 7,lVar3);
          lVar3 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
          FUN_0639aae0(lVar3,0);
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_037787d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
          goto LAB_063406e4;
          puVar1 = PTR_DAT_07db47d0;
          if (4 < *(uint *)(plVar2 + 3)) {
            plVar2[8] = lVar3;
            thunk_FUN_037aeb94(plVar2 + 8,lVar3);
            lVar3 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
            FUN_0639a788(lVar3,0);
            if ((lVar3 != 0) &&
               (lVar4 = thunk_FUN_037787d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
            goto LAB_063406e4;
            puVar1 = PTR_DAT_07db47d8;
            if (5 < *(uint *)(plVar2 + 3)) {
              plVar2[9] = lVar3;
              thunk_FUN_037aeb94(plVar2 + 9,lVar3);
              lVar3 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
              FUN_0639d6e0(lVar3,0);
              if ((lVar3 != 0) &&
                 (lVar4 = thunk_FUN_037787d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
              goto LAB_063406e4;
              puVar1 = PTR_DAT_07db47f0;
              if (6 < *(uint *)(plVar2 + 3)) {
                plVar2[10] = lVar3;
                thunk_FUN_037aeb94(plVar2 + 10,lVar3);
                lVar3 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
                FUN_0639fed4(lVar3,0);
                if ((lVar3 != 0) &&
                   (lVar4 = thunk_FUN_037787d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
                goto LAB_063406e4;
                puVar1 = PTR_DAT_07db47c0;
                if (7 < *(uint *)(plVar2 + 3)) {
                  plVar2[0xb] = lVar3;
                  thunk_FUN_037aeb94(plVar2 + 0xb,lVar3);
                  lVar3 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
                  OVRPlugin__SetExternalLayerDynresEnabled(lVar3,0);
                  if ((lVar3 != 0) &&
                     (lVar4 = thunk_FUN_037787d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)
                     ) goto LAB_063406e4;
                  puVar1 = PTR_DAT_07db47f8;
                  if (8 < *(uint *)(plVar2 + 3)) {
                    plVar2[0xc] = lVar3;
                    thunk_FUN_037aeb94(plVar2 + 0xc,lVar3);
                    lVar3 = thunk_FUN_037788cc(*(undefined8 *)puVar1);
                    FUN_063a0960(lVar3,0);
                    if ((lVar3 != 0) &&
                       (lVar4 = thunk_FUN_037787d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                       lVar4 == 0)) goto LAB_063406e4;
                    if (9 < *(uint *)(plVar2 + 3)) {
                      plVar2[0xd] = lVar3;
                      thunk_FUN_037aeb94(plVar2 + 0xd,lVar3);
                      plVar5 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
                      *plVar5 = (long)plVar2;
                      thunk_FUN_037aeb94(plVar5,plVar2);
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
  FUN_0373b7bc();
}


