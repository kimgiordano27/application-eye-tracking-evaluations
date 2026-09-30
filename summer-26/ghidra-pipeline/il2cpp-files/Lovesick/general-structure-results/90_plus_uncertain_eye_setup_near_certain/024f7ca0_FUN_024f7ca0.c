/*
FUNCTION_NAME: FUN_024f7ca0
ENTRY_POINT: 024f7ca0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_17;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_024f7ca0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  
  puVar1 = PTR_DAT_033ea8a0;
  if ((DAT_0378285d & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_115_0_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<RadioButton>_Add__);
    thunk_FUN_00d48444(PTR_DAT_033f2e20);
    thunk_FUN_00d48444(System_Action<InteractorUnregisteredEventArgs>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f1280);
    DAT_0378285d = 1;
  }
  plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,8);
  puVar1 = OVRPlugin_OVRP_1_115_0_TypeInfo;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((*(long *)OVRPlugin_OVRP_1_115_0_TypeInfo != 0) &&
     (lVar4 = thunk_FUN_00d6225c(*(long *)OVRPlugin_OVRP_1_115_0_TypeInfo,
                                 *(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_024f7f08:
    uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,0);
  }
  puVar2 = Method_System_Collections_Generic_List<RadioButton>_Add__;
  if ((int)plVar3[3] != 0) {
    plVar3[4] = *(long *)puVar1;
    lVar4 = FUN_017841b4(param_1,*(undefined8 *)puVar2,0);
    if ((lVar4 != 0) &&
       (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_024f7f08;
    puVar1 = PTR_DAT_033f2e20;
    uVar7 = *(uint *)(plVar3 + 3);
    if (1 < uVar7) {
      plVar3[5] = lVar4;
      lVar4 = *(long *)puVar1;
      if (lVar4 != 0) {
        lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
        if (lVar4 == 0) goto LAB_024f7f08;
        uVar7 = *(uint *)(plVar3 + 3);
      }
      if (2 < uVar7) {
        plVar3[6] = *(long *)puVar1;
        lVar4 = FUN_017841b4(param_1 + 4,*(undefined8 *)puVar2,0);
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
        goto LAB_024f7f08;
        puVar1 = System_Action<InteractorUnregisteredEventArgs>_TypeInfo;
        uVar7 = *(uint *)(plVar3 + 3);
        if (3 < uVar7) {
          plVar3[7] = lVar4;
          lVar4 = *(long *)puVar1;
          if (lVar4 != 0) {
            lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
            if (lVar4 == 0) goto LAB_024f7f08;
            uVar7 = *(uint *)(plVar3 + 3);
          }
          if (4 < uVar7) {
            plVar3[8] = *(long *)puVar1;
            lVar4 = FUN_017841b4(param_1 + 0xc,*(undefined8 *)puVar2,0);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
            goto LAB_024f7f08;
            puVar1 = PTR_DAT_033f1280;
            uVar7 = *(uint *)(plVar3 + 3);
            if (5 < uVar7) {
              plVar3[9] = lVar4;
              lVar4 = *(long *)puVar1;
              if (lVar4 != 0) {
                lVar4 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40));
                if (lVar4 == 0) goto LAB_024f7f08;
                uVar7 = *(uint *)(plVar3 + 3);
              }
              if (6 < uVar7) {
                plVar3[10] = *(long *)puVar1;
                lVar4 = FUN_017841b4(param_1 + 8,*(undefined8 *)puVar2,0);
                if ((lVar4 != 0) &&
                   (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
                goto LAB_024f7f08;
                if (7 < *(uint *)(plVar3 + 3)) {
                  plVar3[0xb] = lVar4;
                  FUN_01600844(plVar3,0);
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
  FUN_00da5194();
}


