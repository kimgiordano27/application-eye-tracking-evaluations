/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcActivationMode
ENTRY_POINT: 01daa548
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01daa78c) */
/* WARNING: Removing unreachable block (ram,0x01daa794) */

byte OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcActivationMode(void)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int in_w8;
  long unaff_x19;
  int unaff_w21;
  int iVar6;
  long *unaff_x24;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000038;
  
  while( true ) {
    if (in_w8 == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01da8120(&stack0x00000018);
    iVar6 = *(int *)(unaff_x19 + 0x10);
    thunk_FUN_00ffe618();
    if (iVar6 != 0) break;
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar4 = FUN_01da8220(&stack0x00000018);
    if ((uVar4 & 1) != 0) break;
    in_w8 = *(int *)(*unaff_x24 + 0xe0);
  }
  FUN_01da75d8(*(undefined8 *)(unaff_x19 + 0x20),(long)&stack0x00000038 + 4);
  if (in_stack_00000038._4_1_ != '\0') {
    iVar6 = *(int *)(unaff_x19 + 0x18);
    thunk_FUN_00ffe618();
    thunk_FUN_00ffe618();
    *(int *)(unaff_x19 + 0x18) = iVar6 + 1;
  }
  if (*(long *)(unaff_x19 + 0x30) == 0) {
    iVar6 = *(int *)(unaff_x19 + 0x10);
    thunk_FUN_00ffe618();
    if (iVar6 == 0) {
      if (unaff_w21 == 0) {
        lVar5 = 0;
        bVar2 = false;
        iVar6 = 0xf;
        goto LAB_01daa654;
      }
      uVar3 = FUN_01daac98();
      uVar3 = uVar3 & 1;
    }
    else {
      uVar3 = 0;
    }
    iVar6 = *(int *)(unaff_x19 + 0x10);
    thunk_FUN_00ffe618();
    if (0 < iVar6) {
      iVar6 = *(int *)(unaff_x19 + 0x10);
      thunk_FUN_00ffe618();
      thunk_FUN_00ffe618();
      uVar3 = 1;
      *(int *)(unaff_x19 + 0x10) = iVar6 + -1;
    }
    lVar5 = *(long *)(unaff_x19 + 0x28);
    thunk_FUN_00ffe618();
    if ((lVar5 != 0) && (iVar6 = *(int *)(unaff_x19 + 0x10), thunk_FUN_00ffe618(), iVar6 == 0)) {
      lVar5 = *(long *)(unaff_x19 + 0x28);
      thunk_FUN_00ffe618();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      FUN_01daad64(lVar5);
    }
    bVar2 = uVar3 != 0;
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_01daa974();
    bVar2 = false;
  }
  iVar6 = 0xc;
LAB_01daa654:
  if (in_stack_00000038._4_1_ != '\0') {
    iVar1 = *(int *)(unaff_x19 + 0x18);
    thunk_FUN_00ffe618();
    thunk_FUN_00ffe618();
    *(int *)(unaff_x19 + 0x18) = iVar1 + -1;
    FUN_0102a860(*(undefined8 *)(unaff_x19 + 0x20));
  }
  FUN_01da86bc(&stack0x00000020);
  if ((iVar6 == 0xc) || (iVar6 == 0)) {
    if (lVar5 != 0) {
      in_stack_00000010 = FUN_01a4ebc0(lVar5,*(undefined8 *)PTR_DAT_0235a088);
      bVar2 = FUN_01a45bc0(&stack0x00000010,*(undefined8 *)PTR_DAT_0235a080);
    }
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}


