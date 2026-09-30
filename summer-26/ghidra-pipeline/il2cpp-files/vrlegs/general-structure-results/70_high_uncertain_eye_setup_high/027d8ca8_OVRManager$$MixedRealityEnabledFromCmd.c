/*
FUNCTION_NAME: OVRManager$$MixedRealityEnabledFromCmd
ENTRY_POINT: 027d8ca8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x027d8fb4) */
/* WARNING: Removing unreachable block (ram,0x027d8f64) */

byte OVRManager__MixedRealityEnabledFromCmd(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x19;
  undefined8 uVar6;
  int unaff_w21;
  int unaff_w22;
  undefined8 uVar7;
  long *unaff_x26;
  byte bVar8;
  char cStack0000000000000014;
  int in_stack_00000030;
  
  iVar2 = FUN_027d85a4();
  puVar1 = PTR_DAT_03cd9c70;
  in_stack_00000030 = 0;
  iVar3 = 0;
  while( true ) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    if (iVar2 <= iVar3) break;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_027d90e4(&stack0x00000030,0x28);
    uVar4 = FUN_027d8448();
    if ((uVar4 & 1) != 0) {
      return 1;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    iVar3 = in_stack_00000030;
    if (99 < in_stack_00000030) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (((uint)(iVar3 * -0x33333333) >> 1 | iVar3 * -0x80000000) < 0x1999999a) {
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_027d7fa0(&stack0x00000038);
      }
    }
  }
  FUN_027d8974();
  puVar1 = PTR_DAT_03cfcbe8;
  lVar5 = *(long *)PTR_DAT_03cfcbe8;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *(long *)puVar1;
  }
  uVar6 = **(undefined8 **)(lVar5 + 0xb8);
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*unaff_x26);
  }
  FUN_027d7a1c(&stack0x00000018,&stack0x00000038,uVar6);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x10);
  thunk_FUN_01a4b338();
  cStack0000000000000014 = '\0';
  FUN_027e0bd8(uVar6,&stack0x00000014,0);
  iVar3 = unaff_w21;
  while( true ) {
    uVar4 = FUN_027d8448();
    if ((uVar4 & 1) != 0) {
      bVar8 = 0;
      iVar2 = 5;
      goto LAB_027d8f18;
    }
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_027d7fa0(&stack0x00000038);
    if (unaff_w21 != -1) {
      iVar3 = thunk_FUN_01a4a380(0);
      bVar8 = 0;
      iVar2 = 0xe;
      if ((iVar3 - unaff_w22 < 0) || (iVar3 = unaff_w21 - (iVar3 - unaff_w22), iVar3 < 1))
      goto LAB_027d8f18;
    }
    FUN_027d8640();
    FUN_027d869c();
    uVar4 = FUN_027d8448();
    if ((uVar4 & 1) != 0) break;
    uVar7 = *(undefined8 *)(unaff_x19 + 0x10);
    thunk_FUN_01a4b338();
    uVar4 = FUN_027e1070(uVar7,iVar3,0);
    iVar2 = 0xb;
    if ((uVar4 & 1) == 0) {
      iVar2 = 0xe;
    }
    FUN_027d8640();
    FUN_027d869c();
    if ((iVar2 != 0xb) && (iVar2 != 0)) {
      bVar8 = 0;
LAB_027d8f18:
      if (cStack0000000000000014 != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar6,0);
      }
      FUN_027d9a54(&stack0x00000018);
      return iVar2 != 0xe | bVar8;
    }
  }
  FUN_027d8640();
  FUN_027d869c();
  bVar8 = 1;
  iVar2 = 0xe;
  goto LAB_027d8f18;
}


