/*
FUNCTION_NAME: OVRPlugin$$get_latency
ENTRY_POINT: 05743914
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_5
*/


long OVRPlugin__get_latency(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  FUN_02f07e70(*(undefined8 *)(param_1 + 0x150));
  FUN_02f07e70(PTR_DAT_06d37b60);
  FUN_02f07e70(PTR_DAT_06d4dbe0);
  *(undefined1 *)(unaff_x21 + 0x99f) = 1;
  FUN_056f1adc();
  if (unaff_x20 == (long *)0x0) goto OVRPlugin__set_eyeDepth;
  iVar1 = (**(code **)(*unaff_x20 + 0x238))();
  if (iVar1 == 0) {
    if ((unaff_x19 != 0) && (*(int *)(unaff_x19 + 0x10) == 0)) goto LAB_05743a4c;
    uVar4 = (**(code **)(*unaff_x20 + 0x288))();
    if ((uVar4 & 1) != 0) goto LAB_057439b8;
LAB_05743a5c:
    thunk_FUN_02f239f0(PTR_DAT_06d590b0);
LAB_05743a68:
    uVar5 = FUN_05695e04();
    uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d590b8);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar5,uVar6);
  }
  iVar1 = (**(code **)(*unaff_x20 + 0x238))();
  if (((unaff_x19 != 0) && (iVar1 == 5)) && (*(int *)(unaff_x19 + 0x10) == 0)) {
LAB_05743a4c:
    uVar4 = FUN_056991b0();
    if ((uVar4 & 1) == 0) goto LAB_05743a5c;
  }
LAB_057439b8:
  uVar5 = thunk_FUN_02ef170c();
  uVar2 = (**(code **)(*unaff_x20 + 0x238))();
  switch(uVar2) {
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
    plVar7 = (long *)(**(code **)(*unaff_x20 + 0x248))();
    if (plVar7 == (long *)0x0) goto OVRPlugin__set_eyeDepth;
    uVar6 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    lVar3 = FUN_05747b08(uVar6,0);
    break;
  default:
    thunk_FUN_02f239f0(PTR_DAT_06d06338);
    FUN_02a55ad4();
    uVar5 = FUN_055b5920(0);
    FUN_02a551a0();
    in_stack_00000008._4_4_ = (**(code **)(*unaff_x20 + 0x238))();
    uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d55320);
    uVar6 = thunk_FUN_02ef1438(uVar6,(long)&stack0x00000008 + 4);
    uVar8 = thunk_FUN_02f239f0(PTR_DAT_06d590c0);
    FUN_056f1630(uVar8,uVar5,uVar6,0);
    goto LAB_05743a68;
  case 7:
  case 8:
  case 9:
  case 10:
  case 0x10:
  case 0x11:
    uVar6 = (**(code **)(*unaff_x20 + 0x248))();
    lVar3 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d37b60);
    FUN_057497d8(lVar3,uVar6,0);
    break;
  case 0xb:
    lVar3 = FUN_057478d0(0);
    break;
  case 0xc:
    lVar3 = FUN_05747a00(0);
  }
  if (lVar3 != 0) {
    FUN_0572c2dc(lVar3,uVar5);
    return lVar3;
  }
OVRPlugin__set_eyeDepth:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


