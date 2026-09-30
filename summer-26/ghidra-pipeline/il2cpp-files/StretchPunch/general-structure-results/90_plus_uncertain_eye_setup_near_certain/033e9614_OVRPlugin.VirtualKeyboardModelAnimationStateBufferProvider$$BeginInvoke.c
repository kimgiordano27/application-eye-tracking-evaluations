/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateBufferProvider$$BeginInvoke
ENTRY_POINT: 033e9614
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider__BeginInvoke
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long in_x9;
  long in_x10;
  int *piVar10;
  long unaff_x19;
  uint unaff_w20;
  int iVar11;
  undefined8 *unaff_x22;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  piVar10 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar10 + -2) == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_033e964c;
    }
    in_x9 = in_x9 + -1;
    piVar10 = piVar10 + 4;
  } while (in_x9 != 0);
  puVar4 = (undefined8 *)FUN_01dde8fc();
LAB_033e964c:
  uVar5 = (*(code *)*puVar4)();
  plVar6 = (long *)thunk_FUN_01de27b8(*unaff_x22);
  FUN_03417794(plVar6,uVar5,0);
  puVar2 = StringLiteral_9104;
  puVar1 = StringLiteral_9102;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_0319996c(&stack0x00000008,*(long *)(unaff_x19 + 0x20),*(undefined8 *)StringLiteral_9108);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar7 = FUN_02c52b88(&stack0x00000020,*(undefined8 *)puVar2), plVar3 = in_stack_00000030,
          (uVar7 & 1) != 0) {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar8 = FUN_03419818(plVar6,0x2b,0);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar9 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x25) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_033e9730;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_01dde8fc(plVar3,*unaff_x25,0);
LAB_033e9730:
      uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70(uVar5,uVar5);
      }
      FUN_03418f00(lVar8,uVar5,0);
    }
    FUN_02c52b84(&stack0x00000020,*(undefined8 *)puVar1);
  }
  puVar1 = StringLiteral_1372;
  if (*(long *)(unaff_x19 + 0x28) == 0) {
LAB_033e9880:
    if ((unaff_w20 >> 1 & 1) == 0) {
      FUN_033e99c8();
    }
    if ((*(long *)(unaff_x19 + 0x18) != 0 & unaff_w20) == 0) {
      if (plVar6 != (long *)0x0) goto LAB_033e98d0;
    }
    else if ((plVar6 != (long *)0x0) &&
            (lVar8 = FUN_03418f00(plVar6,*(undefined8 *)puVar1,0), lVar8 != 0)) {
      FUN_03418f00(lVar8,*(undefined8 *)(unaff_x19 + 0x18),0);
LAB_033e98d0:
      (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      return;
    }
  }
  else if (plVar6 != (long *)0x0) {
    FUN_03419818(plVar6,0x5b,0);
    puVar2 = StringLiteral_9111;
    lVar8 = *(long *)(unaff_x19 + 0x28);
    if (lVar8 != 0) {
      iVar11 = 0;
      do {
        if (*(int *)(lVar8 + 0x18) <= iVar11) {
          FUN_03419818(plVar6,0x5d,0);
          goto LAB_033e9880;
        }
        if (iVar11 != 0) {
          FUN_03418f00(plVar6,*(undefined8 *)puVar1,0);
          lVar8 = *(long *)(unaff_x19 + 0x28);
          if (lVar8 == 0) break;
        }
        lVar8 = FUN_03198ca0(lVar8,iVar11,*(undefined8 *)puVar2);
        if (lVar8 == 0) break;
        if (*(long *)(lVar8 + 0x18) == 0) {
          if ((*(long *)(unaff_x19 + 0x28) == 0) ||
             (lVar8 = FUN_03198ca0(*(long *)(unaff_x19 + 0x28),iVar11,*(undefined8 *)puVar2),
             lVar8 == 0)) break;
          uVar5 = FUN_033e9984();
          FUN_03418f00(plVar6,uVar5,0);
        }
        else {
          lVar8 = FUN_03419818(plVar6,0x5b,0);
          if ((((*(long *)(unaff_x19 + 0x28) == 0) ||
               (lVar9 = FUN_03198ca0(*(long *)(unaff_x19 + 0x28),iVar11,*(undefined8 *)puVar2),
               lVar9 == 0)) || (uVar5 = FUN_033e9984(), lVar8 == 0)) ||
             (lVar8 = FUN_03418f00(lVar8,uVar5,0), lVar8 == 0)) break;
          FUN_03419818(lVar8,0x5d,0);
        }
        lVar8 = *(long *)(unaff_x19 + 0x28);
        iVar11 = iVar11 + 1;
        if (lVar8 == 0) break;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


