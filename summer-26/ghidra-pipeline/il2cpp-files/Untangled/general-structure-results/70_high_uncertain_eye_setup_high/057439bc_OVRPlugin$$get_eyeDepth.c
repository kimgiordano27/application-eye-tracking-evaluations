/*
FUNCTION_NAME: OVRPlugin$$get_eyeDepth
ENTRY_POINT: 057439bc
PROGRAM: Untangled-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


long OVRPlugin__get_eyeDepth(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x20;
  undefined4 uStack000000000000000c;
  
  uVar2 = thunk_FUN_02ef170c();
  uVar1 = (**(code **)(*unaff_x20 + 0x238))();
  switch(uVar1) {
  case 1:
    lVar3 = FUN_05734bcc();
    return lVar3;
  case 2:
    lVar3 = FUN_057287b0();
    return lVar3;
  case 3:
    lVar3 = FUN_0572c0d8();
    return lVar3;
  case 4:
    lVar3 = FUN_0573874c();
    return lVar3;
  case 5:
    plVar4 = (long *)(**(code **)(*unaff_x20 + 0x248))();
    if (plVar4 == (long *)0x0) goto OVRPlugin__set_eyeDepth;
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
    lVar3 = FUN_05747b08(uVar5,0);
    break;
  default:
    thunk_FUN_02f239f0(PTR_DAT_06d06338);
    FUN_02a55ad4();
    uVar2 = FUN_055b5920(0);
    FUN_02a551a0();
    uStack000000000000000c = (**(code **)(*unaff_x20 + 0x238))();
    uVar5 = thunk_FUN_02f239f0(PTR_DAT_06d55320);
    uVar5 = thunk_FUN_02ef1438(uVar5,&stack0x0000000c);
    uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d590c0);
    FUN_056f1630(uVar6,uVar2,uVar5,0);
    uVar2 = FUN_05695e04();
    uVar5 = thunk_FUN_02f239f0(PTR_DAT_06d590b8);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar2,uVar5);
  case 7:
  case 8:
  case 9:
  case 10:
  case 0x10:
  case 0x11:
    uVar5 = (**(code **)(*unaff_x20 + 0x248))();
    lVar3 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d37b60);
    FUN_057497d8(lVar3,uVar5,0);
    break;
  case 0xb:
    lVar3 = FUN_057478d0(0);
    break;
  case 0xc:
    lVar3 = FUN_05747a00(0);
  }
  if (lVar3 != 0) {
    FUN_0572c2dc(lVar3,uVar2);
    return lVar3;
  }
OVRPlugin__set_eyeDepth:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


