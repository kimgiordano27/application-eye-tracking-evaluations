/*
FUNCTION_NAME: OVRManager$$get_cpuLevel
ENTRY_POINT: 057309c4
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRManager__get_cpuLevel(long param_1)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *unaff_x19;
  int unaff_w25;
  
  plVar2 = (long *)(**(code **)(param_1 + 0x248))();
  if ((plVar2 != (long *)0x0) &&
     (uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170)),
     unaff_x19 != (long *)0x0)) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06d57c10 + 0x130);
    if ((*(byte *)(*unaff_x19 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06d57c10)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440();
    }
    lVar4 = FUN_05730b34();
    if (lVar4 != 0) {
      if (unaff_w25 == 1) {
        return 0;
      }
      if (unaff_w25 == 2) {
        thunk_FUN_02f239f0(PTR_DAT_06d06338);
        FUN_02a55ad4();
        uVar6 = FUN_055b5920(0);
        uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d58928);
        FUN_056f1630(uVar7,uVar6,uVar3,0);
        uVar3 = FUN_05695e04();
        uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d58930);
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar3,uVar6);
      }
    }
    lVar5 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d58308);
    FUN_05730cbc(lVar5,uVar3);
    if (lVar5 != 0) {
      FUN_0572c2dc(lVar5);
      if (lVar4 == 0) {
        (**(code **)(*unaff_x19 + 0x6e8))();
      }
      else {
        FUN_05730d64(lVar4,lVar5);
      }
      return lVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


