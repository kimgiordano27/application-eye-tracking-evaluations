/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateBufferProvider$$EndInvoke
ENTRY_POINT: 033e96b0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider__EndInvoke(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  int iVar9;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *plStack0000000000000030;
  
  plStack0000000000000030 = param_1;
  while (uVar3 = FUN_02c52b88(&stack0x00000020,*unaff_x26), plVar2 = plStack0000000000000030,
        (uVar3 & 1) != 0) {
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar4 = FUN_03419818();
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar7 = *plVar2;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_033e9730;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_01dde8fc(plVar2,*unaff_x25,0);
LAB_033e9730:
    uVar6 = (*(code *)*puVar5)(plVar2,puVar5[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70(uVar6,uVar6);
    }
    FUN_03418f00(lVar4,uVar6,0);
  }
  FUN_02c52b84(&stack0x00000020,*unaff_x24);
  if (*(long *)(unaff_x19 + 0x28) == 0) {
LAB_033e9880:
    if ((unaff_w20 >> 1 & 1) == 0) {
      FUN_033e99c8();
    }
    if ((*(long *)(unaff_x19 + 0x18) != 0 & unaff_w20) == 0) {
      if (unaff_x21 != (long *)0x0) goto LAB_033e98d0;
    }
    else if ((unaff_x21 != (long *)0x0) && (lVar4 = FUN_03418f00(), lVar4 != 0)) {
      FUN_03418f00(lVar4,*(undefined8 *)(unaff_x19 + 0x18),0);
LAB_033e98d0:
      (**(code **)(*unaff_x21 + 0x168))();
      return;
    }
  }
  else if (unaff_x21 != (long *)0x0) {
    FUN_03419818();
    puVar1 = StringLiteral_9111;
    lVar4 = *(long *)(unaff_x19 + 0x28);
    if (lVar4 != 0) {
      iVar9 = 0;
      do {
        if (*(int *)(lVar4 + 0x18) <= iVar9) {
          FUN_03419818();
          goto LAB_033e9880;
        }
        if (iVar9 != 0) {
          FUN_03418f00();
          lVar4 = *(long *)(unaff_x19 + 0x28);
          if (lVar4 == 0) break;
        }
        lVar4 = FUN_03198ca0(lVar4,iVar9,*(undefined8 *)puVar1);
        if (lVar4 == 0) break;
        if (*(long *)(lVar4 + 0x18) == 0) {
          if ((*(long *)(unaff_x19 + 0x28) == 0) ||
             (lVar4 = FUN_03198ca0(*(long *)(unaff_x19 + 0x28),iVar9,*(undefined8 *)puVar1),
             lVar4 == 0)) break;
          FUN_033e9984();
          FUN_03418f00();
        }
        else {
          lVar4 = FUN_03419818();
          if ((((*(long *)(unaff_x19 + 0x28) == 0) ||
               (lVar7 = FUN_03198ca0(*(long *)(unaff_x19 + 0x28),iVar9,*(undefined8 *)puVar1),
               lVar7 == 0)) || (uVar6 = FUN_033e9984(), lVar4 == 0)) ||
             (lVar4 = FUN_03418f00(lVar4,uVar6,0), lVar4 == 0)) break;
          FUN_03419818(lVar4,0x5d,0);
        }
        lVar4 = *(long *)(unaff_x19 + 0x28);
        iVar9 = iVar9 + 1;
        if (lVar4 == 0) break;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


