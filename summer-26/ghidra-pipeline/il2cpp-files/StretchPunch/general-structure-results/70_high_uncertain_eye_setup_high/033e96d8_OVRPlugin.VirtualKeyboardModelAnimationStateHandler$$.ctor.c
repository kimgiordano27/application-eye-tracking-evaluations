/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateHandler$$.ctor
ENTRY_POINT: 033e96d8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_VirtualKeyboardModelAnimationStateHandler___ctor(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  int iVar8;
  long *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *in_stack_00000030;
  
  do {
    lVar2 = FUN_03419818();
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar5 = *unaff_x23;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_033e9730;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01dde8fc(unaff_x23,*unaff_x25,0);
LAB_033e9730:
    uVar4 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70(uVar4,uVar4);
    }
    FUN_03418f00(lVar2,uVar4,0);
    uVar6 = FUN_02c52b88(&stack0x00000020,*unaff_x26);
    if ((uVar6 & 1) == 0) {
      FUN_02c52b84(&stack0x00000020,*unaff_x24);
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_033e9880;
      if (unaff_x21 == (long *)0x0) goto LAB_033e986c;
      FUN_03419818();
      puVar1 = StringLiteral_9111;
      lVar2 = *(long *)(unaff_x19 + 0x28);
      if (lVar2 == 0) goto LAB_033e986c;
      iVar8 = 0;
      break;
    }
    unaff_x23 = in_stack_00000030;
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
  } while( true );
LAB_033e9798:
  if (*(int *)(lVar2 + 0x18) <= iVar8) {
    FUN_03419818();
LAB_033e9880:
    if ((unaff_w20 >> 1 & 1) == 0) {
      FUN_033e99c8();
    }
    if ((*(long *)(unaff_x19 + 0x18) != 0 & unaff_w20) == 0) {
      if (unaff_x21 != (long *)0x0) goto LAB_033e98d0;
    }
    else if ((unaff_x21 != (long *)0x0) && (lVar2 = FUN_03418f00(), lVar2 != 0)) {
      FUN_03418f00(lVar2,*(undefined8 *)(unaff_x19 + 0x18),0);
LAB_033e98d0:
      (**(code **)(*unaff_x21 + 0x168))();
      return;
    }
LAB_033e986c:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if (iVar8 != 0) {
    FUN_03418f00();
    lVar2 = *(long *)(unaff_x19 + 0x28);
    if (lVar2 == 0) goto LAB_033e986c;
  }
  lVar2 = FUN_03198ca0(lVar2,iVar8,*(undefined8 *)puVar1);
  if (lVar2 == 0) goto LAB_033e986c;
  if (*(long *)(lVar2 + 0x18) == 0) {
    if ((*(long *)(unaff_x19 + 0x28) == 0) ||
       (lVar2 = FUN_03198ca0(*(long *)(unaff_x19 + 0x28),iVar8,*(undefined8 *)puVar1), lVar2 == 0))
    goto LAB_033e986c;
    FUN_033e9984();
    FUN_03418f00();
  }
  else {
    lVar2 = FUN_03419818();
    if ((((*(long *)(unaff_x19 + 0x28) == 0) ||
         (lVar5 = FUN_03198ca0(*(long *)(unaff_x19 + 0x28),iVar8,*(undefined8 *)puVar1), lVar5 == 0)
         ) || (uVar4 = FUN_033e9984(), lVar2 == 0)) ||
       (lVar2 = FUN_03418f00(lVar2,uVar4,0), lVar2 == 0)) goto LAB_033e986c;
    FUN_03419818(lVar2,0x5d,0);
  }
  lVar2 = *(long *)(unaff_x19 + 0x28);
  iVar8 = iVar8 + 1;
  if (lVar2 == 0) goto LAB_033e986c;
  goto LAB_033e9798;
}


