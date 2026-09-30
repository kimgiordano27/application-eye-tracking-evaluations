/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$.cctor
ENTRY_POINT: 0339aa58
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_21_0___cctor(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long lVar6;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  
  FUN_0339d160();
  if (*(char *)(unaff_x20 + 0x2a) == '\0') {
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar5 = FUN_03295500(0);
    FUN_019b2708();
    uVar4 = thunk_FUN_01c273e8(Method_System_Collections_Generic_HashSet<Guid>__ctor__);
  }
  else {
    lVar6 = *(long *)(unaff_x20 + 0xc0);
    if (lVar6 != 0) {
      plVar1 = (long *)FUN_01c5d2fc(*unaff_x27,2);
      if (plVar1 != (long *)0x0) {
        if ((unaff_x24 != 0) && (lVar2 = thunk_FUN_01c495e4(), lVar2 == 0)) {
LAB_0339ac40:
          uVar4 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar4,0);
        }
        if ((int)plVar1[3] != 0) {
          plVar1[4] = unaff_x24;
          if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_0339ab74;
          lVar2 = thunk_FUN_01c49334(*unaff_x26);
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_01c495e4(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
          goto LAB_0339ac40;
          if (1 < *(uint *)(plVar1 + 3)) {
            plVar1[5] = lVar2;
            uVar4 = (**(code **)(lVar6 + 0x18))
                              (*(undefined8 *)(lVar6 + 0x40),plVar1,*(undefined8 *)(lVar6 + 0x28));
            if (unaff_x22 != 0) {
              FUN_0339c944();
            }
            FUN_0339cd08();
            FUN_0339cf34();
            return uVar4;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
LAB_0339ab74:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    thunk_FUN_01c273e8(PTR_DAT_042305b0);
    FUN_019b5f60();
    uVar5 = FUN_03295500(0);
    uVar4 = thunk_FUN_01c273e8(
                              Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>_GetEnumerator__
                              );
  }
  FUN_0336f2b8(uVar4,uVar5);
  uVar4 = FUN_0335cdc4();
  uVar5 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_HashSet<IDebugDisplaySettingsData>__ctor__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar4,uVar5);
}


