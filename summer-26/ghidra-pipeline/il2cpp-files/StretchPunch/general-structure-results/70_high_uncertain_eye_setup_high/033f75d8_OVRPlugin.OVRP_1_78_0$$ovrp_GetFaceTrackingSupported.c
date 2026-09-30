/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFaceTrackingSupported
ENTRY_POINT: 033f75d8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_7;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033f7928) */
/* WARNING: Removing unreachable block (ram,0x033f7930) */

byte OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingSupported(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x19;
  int unaff_w21;
  long unaff_x22;
  int iVar11;
  undefined8 uVar12;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  char cStack000000000000003c;
  
  FUN_01d7d918();
  *(undefined1 *)(unaff_x22 + 0xbcf) = 1;
  cStack000000000000003c = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  in_stack_00000010 = 0;
  FUN_033f7a94();
  puVar2 = StringLiteral_1718;
  if (unaff_w21 < -1) {
    uVar12 = thunk_FUN_01dd295c(
                               Field_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_m_ActionMap
                               );
    uVar12 = thunk_FUN_01de23e8(uVar12,&stack0x0000000c);
    thunk_FUN_01dd295c(StringLiteral_6721);
    FUN_01a94a5c();
    thunk_FUN_01dd295c(StringLiteral_9426);
    uVar8 = FUN_033f7560();
    thunk_FUN_01dd295c(StringLiteral_1122);
    uVar9 = thunk_FUN_01de27b8();
    uVar10 = thunk_FUN_01dd295c(StringLiteral_9427);
    FUN_0328bd40(uVar9,uVar10,uVar12,uVar8,0);
    uVar12 = thunk_FUN_01dd295c(StringLiteral_9428);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar9,uVar12);
  }
  if (*(int *)(*(long *)StringLiteral_1718 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033f3e58(&stack0x00000048);
  if (unaff_w21 == 0) {
    iVar11 = *(int *)(unaff_x19 + 0x10);
    thunk_FUN_01da0934();
    if (iVar11 != 0) goto LAB_033f7658;
  }
  else {
    if (0 < unaff_w21) {
      thunk_FUN_01dc9540(0);
    }
LAB_033f7658:
    puVar3 = StringLiteral_6721;
    cStack000000000000003c = '\0';
    lVar6 = *(long *)StringLiteral_6721;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar6 = *(long *)puVar3;
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30(*(long *)puVar2);
    }
    puVar2 = StringLiteral_2260;
    FUN_033f3848(&stack0x00000020,&stack0x00000048,uVar12);
    in_stack_00000018 = 0;
    while (iVar11 = *(int *)(unaff_x19 + 0x10), thunk_FUN_01da0934(), iVar11 == 0) {
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      uVar7 = FUN_033f54e0(&stack0x00000018);
      if ((uVar7 & 1) != 0) break;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      FUN_033f53e0(&stack0x00000018);
    }
    FUN_033f4894(*(undefined8 *)(unaff_x19 + 0x20),&stack0x0000003c);
    if (cStack000000000000003c != '\0') {
      iVar11 = *(int *)(unaff_x19 + 0x18);
      thunk_FUN_01da0934();
      thunk_FUN_01da0934();
      *(int *)(unaff_x19 + 0x18) = iVar11 + 1;
    }
    if (*(long *)(unaff_x19 + 0x30) == 0) {
      iVar11 = *(int *)(unaff_x19 + 0x10);
      thunk_FUN_01da0934();
      if (iVar11 != 0) {
        uVar5 = 0;
LAB_033f7780:
        iVar11 = *(int *)(unaff_x19 + 0x10);
        thunk_FUN_01da0934();
        if (0 < iVar11) {
          iVar11 = *(int *)(unaff_x19 + 0x10);
          thunk_FUN_01da0934();
          thunk_FUN_01da0934();
          uVar5 = 1;
          *(int *)(unaff_x19 + 0x10) = iVar11 + -1;
        }
        lVar6 = *(long *)(unaff_x19 + 0x28);
        thunk_FUN_01da0934();
        if ((lVar6 != 0) && (iVar11 = *(int *)(unaff_x19 + 0x10), thunk_FUN_01da0934(), iVar11 == 0)
           ) {
          lVar6 = *(long *)(unaff_x19 + 0x28);
          thunk_FUN_01da0934();
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          FUN_033f7f00(lVar6);
        }
        bVar4 = uVar5 != 0;
        lVar6 = 0;
        goto LAB_033f77ec;
      }
      if (unaff_w21 != 0) {
        uVar5 = FUN_033f7e34();
        uVar5 = uVar5 & 1;
        goto LAB_033f7780;
      }
      lVar6 = 0;
      bVar4 = false;
      iVar11 = 0xf;
    }
    else {
      lVar6 = FUN_033f7b10();
      bVar4 = false;
LAB_033f77ec:
      iVar11 = 0xc;
    }
    if (cStack000000000000003c != '\0') {
      iVar1 = *(int *)(unaff_x19 + 0x18);
      thunk_FUN_01da0934();
      thunk_FUN_01da0934();
      *(int *)(unaff_x19 + 0x18) = iVar1 + -1;
      FUN_01dccd6c(*(undefined8 *)(unaff_x19 + 0x20));
    }
    FUN_033f597c(&stack0x00000020);
    if ((iVar11 == 0xc) || (iVar11 == 0)) {
      if (lVar6 != 0) {
        in_stack_00000010 = FUN_026c5398(lVar6,*(undefined8 *)StringLiteral_9425);
        bVar4 = FUN_026b841c(&stack0x00000010,*(undefined8 *)StringLiteral_9424);
      }
      goto LAB_033f7868;
    }
  }
  bVar4 = 0;
LAB_033f7868:
  return bVar4 & 1;
}


