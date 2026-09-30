/*
FUNCTION_NAME: OVRPlugin.OVRP_1_21_0$$ovrp_GetGPUUtilLevel
ENTRY_POINT: 01db47d4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db4b78) */
/* WARNING: Removing unreachable block (ram,0x01db4b70) */
/* WARNING: Removing unreachable block (ram,0x01db49b4) */

void OVRPlugin_OVRP_1_21_0__ovrp_GetGPUUtilLevel(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 in_stack_00000018;
  char in_stack_00000028;
  char cStack000000000000002c;
  
  FUN_00fdc2e4(*(undefined8 *)(param_1 + 0x570));
  FUN_00fdc2e4(PTR_DAT_0234c6a8);
  FUN_00fdc2e4(PTR_DAT_0235a528);
  FUN_00fdc2e4(PTR_DAT_0235a278);
  *(undefined1 *)(unaff_x20 + 0xa08) = 1;
  in_stack_00000028 = '\0';
  cStack000000000000002c = '\0';
  if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar5 = FUN_01db3820();
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  FUN_01cb9690(lVar5,&stack0x0000002c,0);
  plVar6 = (long *)FUN_00fdc388(*(undefined8 *)PTR_DAT_0235a528,2);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar5 = *(long *)(unaff_x19 + 0x18);
  if ((lVar5 != 0) &&
     (lVar7 = thunk_FUN_0103ffe0(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
    uVar9 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar9,0);
  }
  if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc53c();
  }
  plVar6[4] = lVar5;
  thunk_FUN_0106e12c(plVar6 + 4,lVar5);
  lVar5 = *(long *)(unaff_x19 + 0x38);
  if ((lVar5 != 0) &&
     (lVar7 = thunk_FUN_0103ffe0(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
    uVar9 = thunk_FUN_01058ef0();
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar9,0);
  }
  if (*(uint *)(plVar6 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc53c();
  }
  plVar6[5] = lVar5;
  thunk_FUN_0106e12c(plVar6 + 5,lVar5);
  puVar3 = PTR_DAT_0235a278;
  puVar2 = PTR_DAT_0234c6a8;
  puVar1 = PTR_DAT_0234bd30;
  while( true ) {
    uVar9 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    iVar4 = FUN_01db44f4(plVar6,uVar9,0);
    if (*(char *)(unaff_x19 + 0x4d) != '\0') break;
    in_stack_00000028 = '\0';
    FUN_01da75d8();
    *(int *)(unaff_x19 + 0x48) = *(int *)(unaff_x19 + 0x48) + 1;
    if (in_stack_00000028 != '\0') {
      FUN_0102a860();
    }
    uVar9 = thunk_FUN_010400dc(*(undefined8 *)puVar2);
    FUN_01daf23c();
    in_stack_00000018._4_1_ = iVar4 == 0x102;
    uVar8 = thunk_FUN_0103fd0c(*(undefined8 *)puVar1,(long)&stack0x00000018 + 4);
    FUN_01daf344(uVar9,uVar8);
    if ((*(char *)(unaff_x19 + 0x4d) != '\0') || (*(char *)(unaff_x19 + 0x4c) != '\0')) break;
  }
  in_stack_00000028 = '\0';
  FUN_01da75d8();
  *(undefined1 *)(unaff_x19 + 0x4d) = 1;
  if ((*(int *)(unaff_x19 + 0x48) == 0) && (plVar6 = (long *)(unaff_x19 + 0x30), *plVar6 != 0)) {
    FUN_01db3820();
    FUN_01dad828();
    *plVar6 = 0;
    thunk_FUN_0106e12c(plVar6,0);
  }
  if (in_stack_00000028 != '\0') {
    FUN_0102a860();
  }
  if (cStack000000000000002c != '\0') {
    if ((*(long *)(unaff_x19 + 0x18) == 0) || (lVar5 = FUN_01db3820(), lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_01cb97fc(lVar5,0);
  }
  return;
}


