/*
FUNCTION_NAME: FUN_057438e8
ENTRY_POINT: 057438e8
PROGRAM: Untangled-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


long FUN_057438e8(long *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined4 local_24;
  
  puVar1 = PTR_DAT_06d4dbe0;
  if ((DAT_071c399f & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d55150);
    FUN_02f07e70(PTR_DAT_06d37b60);
    FUN_02f07e70(PTR_DAT_06d4dbe0);
    DAT_071c399f = 1;
  }
  FUN_056f1adc(param_1,*(undefined8 *)puVar1,0);
  if (param_1 == (long *)0x0) goto OVRPlugin__set_eyeDepth;
  iVar2 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
  if (iVar2 == 0) {
    if ((param_2 != 0) && (*(int *)(param_2 + 0x10) == 0)) goto LAB_05743a4c;
    uVar5 = (**(code **)(*param_1 + 0x288))(param_1,*(undefined8 *)(*param_1 + 0x290));
    if ((uVar5 & 1) != 0) goto LAB_057439b8;
LAB_05743a5c:
    uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d590b0);
LAB_05743a68:
    uVar6 = FUN_05695e04(param_1,uVar6,0);
    uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d590b8);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar6,uVar7);
  }
  iVar2 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
  if (((param_2 != 0) && (iVar2 == 5)) && (*(int *)(param_2 + 0x10) == 0)) {
LAB_05743a4c:
    uVar5 = FUN_056991b0(param_1,0);
    if ((uVar5 & 1) == 0) goto LAB_05743a5c;
  }
LAB_057439b8:
  uVar6 = thunk_FUN_02ef170c(param_1,*(undefined8 *)PTR_DAT_06d55150);
  uVar3 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
  switch(uVar3) {
  case 1:
    lVar4 = FUN_05734bcc(param_1,param_2);
    return lVar4;
  case 2:
    lVar4 = FUN_057287b0(param_1,param_2,0);
    return lVar4;
  case 3:
    lVar4 = FUN_0572c0d8(param_1,param_2);
    return lVar4;
  case 4:
    lVar4 = FUN_0573874c(param_1,param_2);
    return lVar4;
  case 5:
    plVar8 = (long *)(**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
    if (plVar8 == (long *)0x0) goto OVRPlugin__set_eyeDepth;
    uVar7 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    lVar4 = FUN_05747b08(uVar7,0);
    break;
  default:
    thunk_FUN_02f239f0(PTR_DAT_06d06338);
    FUN_02a55ad4();
    uVar6 = FUN_055b5920(0);
    FUN_02a551a0(param_1);
    local_24 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
    uVar7 = thunk_FUN_02f239f0(PTR_DAT_06d55320);
    uVar7 = thunk_FUN_02ef1438(uVar7,&local_24);
    uVar9 = thunk_FUN_02f239f0(PTR_DAT_06d590c0);
    uVar6 = FUN_056f1630(uVar9,uVar6,uVar7,0);
    goto LAB_05743a68;
  case 7:
  case 8:
  case 9:
  case 10:
  case 0x10:
  case 0x11:
    uVar7 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d37b60);
    FUN_057497d8(lVar4,uVar7,0);
    break;
  case 0xb:
    lVar4 = FUN_057478d0(0);
    break;
  case 0xc:
    lVar4 = FUN_05747a00(0);
  }
  if (lVar4 != 0) {
    FUN_0572c2dc(lVar4,uVar6,param_2);
    return lVar4;
  }
OVRPlugin__set_eyeDepth:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


