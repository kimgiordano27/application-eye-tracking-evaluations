/*
FUNCTION_NAME: OVRPlugin.Media$$GetMrcActivationMode
ENTRY_POINT: 01daa47c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01daa78c) */
/* WARNING: Removing unreachable block (ram,0x01daa794) */

byte OVRPlugin_Media__GetMrcActivationMode(void)

{
  int iVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x19;
  int unaff_w21;
  int iVar7;
  long *unaff_x23;
  undefined8 uVar8;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  char cStack000000000000003c;
  
  thunk_FUN_01022c14();
  FUN_01da6b04(&stack0x00000048);
  if (unaff_w21 == 0) {
    iVar7 = *(int *)(unaff_x19 + 0x10);
    thunk_FUN_00ffe618();
    if (iVar7 != 0) goto LAB_01daa4bc;
  }
  else {
    if (0 < unaff_w21) {
      thunk_FUN_01027034(0);
    }
LAB_01daa4bc:
    puVar2 = PTR_DAT_02354ee8;
    cStack000000000000003c = '\0';
    lVar5 = *(long *)PTR_DAT_02354ee8;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar5 = *(long *)puVar2;
    }
    uVar8 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01022c14(*unaff_x23);
    }
    puVar2 = PTR_DAT_023578f8;
    FUN_01da63c8(&stack0x00000020,&stack0x00000048,uVar8);
    in_stack_00000018 = 0;
    while (iVar7 = *(int *)(unaff_x19 + 0x10), thunk_FUN_00ffe618(), iVar7 == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      uVar6 = FUN_01da8220(&stack0x00000018);
      if ((uVar6 & 1) != 0) break;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      FUN_01da8120(&stack0x00000018);
    }
    FUN_01da75d8(*(undefined8 *)(unaff_x19 + 0x20),&stack0x0000003c);
    if (cStack000000000000003c != '\0') {
      iVar7 = *(int *)(unaff_x19 + 0x18);
      thunk_FUN_00ffe618();
      thunk_FUN_00ffe618();
      *(int *)(unaff_x19 + 0x18) = iVar7 + 1;
    }
    if (*(long *)(unaff_x19 + 0x30) == 0) {
      iVar7 = *(int *)(unaff_x19 + 0x10);
      thunk_FUN_00ffe618();
      if (iVar7 != 0) {
        uVar4 = 0;
LAB_01daa5e4:
        iVar7 = *(int *)(unaff_x19 + 0x10);
        thunk_FUN_00ffe618();
        if (0 < iVar7) {
          iVar7 = *(int *)(unaff_x19 + 0x10);
          thunk_FUN_00ffe618();
          thunk_FUN_00ffe618();
          uVar4 = 1;
          *(int *)(unaff_x19 + 0x10) = iVar7 + -1;
        }
        lVar5 = *(long *)(unaff_x19 + 0x28);
        thunk_FUN_00ffe618();
        if ((lVar5 != 0) && (iVar7 = *(int *)(unaff_x19 + 0x10), thunk_FUN_00ffe618(), iVar7 == 0))
        {
          lVar5 = *(long *)(unaff_x19 + 0x28);
          thunk_FUN_00ffe618();
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc534();
          }
          FUN_01daad64(lVar5);
        }
        bVar3 = uVar4 != 0;
        lVar5 = 0;
        goto LAB_01daa650;
      }
      if (unaff_w21 != 0) {
        uVar4 = FUN_01daac98();
        uVar4 = uVar4 & 1;
        goto LAB_01daa5e4;
      }
      lVar5 = 0;
      bVar3 = false;
      iVar7 = 0xf;
    }
    else {
      lVar5 = FUN_01daa974();
      bVar3 = false;
LAB_01daa650:
      iVar7 = 0xc;
    }
    if (cStack000000000000003c != '\0') {
      iVar1 = *(int *)(unaff_x19 + 0x18);
      thunk_FUN_00ffe618();
      thunk_FUN_00ffe618();
      *(int *)(unaff_x19 + 0x18) = iVar1 + -1;
      FUN_0102a860(*(undefined8 *)(unaff_x19 + 0x20));
    }
    FUN_01da86bc(&stack0x00000020);
    if ((iVar7 == 0xc) || (iVar7 == 0)) {
      if (lVar5 != 0) {
        in_stack_00000010 = FUN_01a4ebc0(lVar5,*(undefined8 *)PTR_DAT_0235a088);
        bVar3 = FUN_01a45bc0(&stack0x00000010,*(undefined8 *)PTR_DAT_0235a080);
      }
      goto LAB_01daa6cc;
    }
  }
  bVar3 = 0;
LAB_01daa6cc:
  return bVar3 & 1;
}


