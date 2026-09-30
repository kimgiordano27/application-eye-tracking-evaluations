/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcFrameSize
ENTRY_POINT: 01dab12c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01dab32c) */

int OVRPlugin_Media__GetMrcFrameSize(ulong param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int in_stack_00000008;
  char cStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_02354ee8);
    *(undefined1 *)(unaff_x19 + 0x99a) = 1;
  }
  cStack000000000000000c = 0;
  FUN_01daa8f8(param_2);
  if (0 < param_3) {
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    cStack000000000000000c = '\0';
    FUN_01da75d8(uVar7,&stack0x0000000c);
    iVar8 = *(int *)(param_2 + 0x10);
    thunk_FUN_00ffe618();
    if (*(int *)(param_2 + 0x14) - iVar8 < param_3) {
      thunk_FUN_010303a8(PTR_DAT_0235a118);
      uVar7 = thunk_FUN_010400dc();
      FUN_01da5f38();
      uVar6 = thunk_FUN_010303a8(PTR_DAT_0235a110);
                    /* WARNING: Subroutine does not return */
      FUN_00fdc400(uVar7,uVar6);
    }
    iVar2 = *(int *)(param_2 + 0x18);
    thunk_FUN_00ffe618();
    param_3 = iVar8 + param_3;
    if ((param_3 == 1) || (iVar2 == 1)) {
      FUN_01dab3f0(*(undefined8 *)(param_2 + 0x20));
    }
    else if (1 < iVar2) {
      FUN_01da7804(*(undefined8 *)(param_2 + 0x20));
    }
    puVar3 = PTR_DAT_02354ee8;
    iVar10 = param_3;
    if (*(long *)(param_2 + 0x30) != 0) {
      iVar1 = param_3;
      if (-1 < param_3 - iVar2) {
        iVar1 = iVar2;
      }
      while ((iVar10 = iVar1, 0 < param_3 - iVar2 &&
             (lVar9 = *(long *)(param_2 + 0x30), iVar10 = param_3, lVar9 != 0))) {
        FUN_01dab020(param_2,lVar9);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        param_3 = param_3 + -1;
        FUN_01dab44c(lVar9,0);
      }
    }
    thunk_FUN_00ffe618();
    lVar9 = *(long *)(param_2 + 0x28);
    *(int *)(param_2 + 0x10) = iVar10;
    thunk_FUN_00ffe618();
    if (((0 < iVar10) && (iVar8 == 0)) && (lVar9 != 0)) {
      lVar9 = *(long *)(param_2 + 0x28);
      thunk_FUN_00ffe618();
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      FUN_01da75f8(lVar9);
      iVar8 = 0;
    }
    if (cStack000000000000000c != '\0') {
      FUN_0102a860(uVar7);
    }
    return iVar8;
  }
  in_stack_00000008 = param_3;
  uVar7 = thunk_FUN_010303a8(PTR_DAT_0234bb30);
  uVar7 = thunk_FUN_0103fd0c(uVar7,&stack0x00000008);
  thunk_FUN_010303a8(PTR_DAT_02354ee8);
  FUN_00e5daf0();
  thunk_FUN_010303a8(PTR_DAT_0235a100);
  uVar6 = FUN_01daa3c4();
  thunk_FUN_010303a8(PTR_DAT_0234be28);
  uVar4 = thunk_FUN_010400dc();
  uVar5 = thunk_FUN_010303a8(PTR_DAT_0235a108);
  FUN_01c63a1c(uVar4,uVar5,uVar7,uVar6,0);
  uVar7 = thunk_FUN_010303a8(PTR_DAT_0235a110);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar4,uVar7);
}


