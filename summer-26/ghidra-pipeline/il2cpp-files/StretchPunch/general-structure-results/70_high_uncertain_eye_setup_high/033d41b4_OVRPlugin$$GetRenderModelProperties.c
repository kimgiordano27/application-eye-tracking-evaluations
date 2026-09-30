/*
FUNCTION_NAME: OVRPlugin$$GetRenderModelProperties
ENTRY_POINT: 033d41b4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetRenderModelProperties(void)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  uint in_w8;
  long *plVar8;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x26;
  ulong uVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  puVar2 = StringLiteral_5452;
  if (0 < (int)in_w8) {
    uVar9 = 0;
    do {
      if (in_w8 <= uVar9) goto LAB_033d43a8;
      plVar8 = *(long **)(unaff_x21 + 0x20 + uVar9 * 8);
      if (plVar8 == (long *)0x0) {
LAB_033d4200:
        plVar8 = (long *)0x0;
      }
      else {
        bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
        if (*(byte *)(*plVar8 + 0x130) < bVar1) goto LAB_033d4200;
        if (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2) {
          plVar8 = (long *)0x0;
        }
      }
      uVar3 = FUN_03306e64(plVar8,0,0);
      puVar6 = StringLiteral_9017;
      if ((uVar3 & 1) != 0) {
LAB_033d43cc:
        uVar5 = thunk_FUN_01dd295c(puVar6);
        uVar5 = FUN_033d6e4c(uVar5,0);
        thunk_FUN_01dd295c(StringLiteral_1149);
        uVar7 = thunk_FUN_01de27b8();
        FUN_0328dba4(uVar7,uVar5,0);
LAB_033d4444:
        uVar5 = thunk_FUN_01dd295c(StringLiteral_9022);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar7,uVar5);
      }
      if (plVar8 == (long *)0x0) goto LAB_033d439c;
      uVar3 = FUN_03306dbc(plVar8,0);
      puVar6 = StringLiteral_9018;
      if ((uVar3 & 1) != 0) goto LAB_033d43cc;
      plVar4 = (long *)FUN_03314124(plVar8,0);
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*unaff_x26);
      }
      if (plVar4 != unaff_x23) {
        uVar5 = FUN_03314124(plVar8,0);
        if (unaff_x23 == (long *)0x0) goto LAB_033d439c;
        uVar3 = (**(code **)(*unaff_x23 + 0x278))
                          (unaff_x23,uVar5,*(undefined8 *)(*unaff_x23 + 0x280));
        puVar6 = StringLiteral_9020;
        if ((uVar3 & 1) != 0) goto LAB_033d429c;
LAB_033d4414:
        uVar5 = thunk_FUN_01dd295c(puVar6);
        uVar5 = FUN_033d6e4c(uVar5,0);
        thunk_FUN_01dd295c(StringLiteral_1530);
        uVar7 = thunk_FUN_01de27b8();
        FUN_033b3eb0(uVar7,uVar5,0);
        goto LAB_033d4444;
      }
LAB_033d429c:
      unaff_x23 = (long *)(**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
      if (unaff_x23 == (long *)0x0) {
LAB_033d439c:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      bVar1 = *(byte *)(*unaff_x26 + 0x130);
      if ((*(byte *)(*unaff_x23 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x26)) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7df0c(unaff_x23);
      }
      uVar3 = FUN_033ac7d8(unaff_x23,0);
      puVar6 = StringLiteral_9019;
      if ((uVar3 & 1) != 0) goto LAB_033d43cc;
      if (((long)uVar9 < (long)(*(int *)(unaff_x21 + 0x18) + -1)) &&
         (uVar3 = FUN_033ac570(unaff_x23,0), puVar6 = StringLiteral_9021, (uVar3 & 1) == 0))
      goto LAB_033d4414;
      uVar5 = (**(code **)(*plVar8 + 0x2c8))(plVar8,*(undefined8 *)(*plVar8 + 0x2d0));
      if (unaff_x22 == 0) goto LAB_033d439c;
      if (*(uint *)(unaff_x22 + 0x18) <= uVar9) {
LAB_033d43a8:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      *(undefined8 *)(unaff_x22 + 0x20 + uVar9 * 8) = uVar5;
      in_w8 = *(uint *)(unaff_x21 + 0x18);
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)(int)in_w8);
  }
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  FUN_01d7a298(&stack0x00000008);
  unaff_x24[2] = in_stack_00000018;
  unaff_x24[1] = in_stack_00000010;
  *unaff_x24 = in_stack_00000008;
  return;
}


