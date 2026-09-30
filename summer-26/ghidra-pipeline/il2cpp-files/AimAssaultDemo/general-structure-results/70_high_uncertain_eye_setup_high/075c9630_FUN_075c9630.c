/*
FUNCTION_NAME: FUN_075c9630
ENTRY_POINT: 075c9630
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_075c9630(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_07d882c0;
  if ((DAT_0826ea78 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d882c0);
    FUN_0373b518(OVRPlugin_Size3f_TypeInfo);
    FUN_0373b518(OVRPlugin_Sizef_TypeInfo);
    DAT_0826ea78 = 1;
  }
  plVar2 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,4);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if ((param_1 != 0) &&
     (lVar3 = thunk_FUN_037787d0(param_1,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
LAB_075c97ac:
    uVar5 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar5,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = param_1;
    thunk_FUN_037aeb94(plVar2 + 4,param_1);
    lVar3 = FUN_06289338(0);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_037787d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_075c97ac;
    puVar1 = OVRPlugin_Sizef_TypeInfo;
    if (1 < *(uint *)(plVar2 + 3)) {
      plVar2[5] = lVar3;
      thunk_FUN_037aeb94(plVar2 + 5,lVar3);
      lVar3 = *(long *)puVar1;
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = thunk_FUN_037787d0(lVar3,*(undefined8 *)(*plVar2 + 0x40));
        if (lVar3 == 0) goto LAB_075c97ac;
        lVar3 = *(long *)puVar1;
      }
      if (2 < *(uint *)(plVar2 + 3)) {
        plVar2[6] = lVar3;
        thunk_FUN_037aeb94();
        if ((param_2 != 0) &&
           (lVar3 = thunk_FUN_037787d0(param_2,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
        goto LAB_075c97ac;
        puVar1 = OVRPlugin_Size3f_TypeInfo;
        if (3 < *(uint *)(plVar2 + 3)) {
          plVar2[7] = param_2;
          thunk_FUN_037aeb94(plVar2 + 7,param_2);
          FUN_076583bc(*(undefined8 *)puVar1,plVar2,0);
          FUN_075c9528();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


