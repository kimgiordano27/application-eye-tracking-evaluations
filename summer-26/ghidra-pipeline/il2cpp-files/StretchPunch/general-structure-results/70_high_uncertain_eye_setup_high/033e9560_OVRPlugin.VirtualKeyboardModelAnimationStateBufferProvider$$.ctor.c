/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateBufferProvider$$.ctor
ENTRY_POINT: 033e9560
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider___ctor
               (ulong param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x21;
  long *plVar11;
  int iVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  
  if ((param_1 & 1) == 0) {
    FUN_01d7d918(StringLiteral_9102);
    FUN_01d7d918(StringLiteral_9104);
    FUN_01d7d918(StringLiteral_9107);
    FUN_01d7d918(StringLiteral_9108);
    FUN_01d7d918(StringLiteral_9110);
    FUN_01d7d918(StringLiteral_9111);
    FUN_01d7d918(StringLiteral_1723);
    FUN_01d7d918(StringLiteral_9113);
    FUN_01d7d918(StringLiteral_1372);
    *(undefined1 *)(unaff_x21 + 0xb02) = 1;
  }
  puVar3 = StringLiteral_9113;
  puVar1 = StringLiteral_1723;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = (long *)0x0;
  plVar11 = *(long **)(param_2 + 0x10);
  if (plVar11 != (long *)0x0) {
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)StringLiteral_9113) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_033e964c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_01dde8fc(plVar11,*(long *)StringLiteral_9113,0);
LAB_033e964c:
    uVar6 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    plVar11 = (long *)thunk_FUN_01de27b8(*(undefined8 *)puVar1);
    FUN_03417794(plVar11,uVar6,0);
    puVar2 = StringLiteral_9104;
    puVar1 = StringLiteral_9102;
    if (*(long *)(param_2 + 0x20) != 0) {
      FUN_0319996c(&stack0x00000008,*(long *)(param_2 + 0x20),*(undefined8 *)StringLiteral_9108);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
      while (uVar9 = FUN_02c52b88(&stack0x00000020,*(undefined8 *)puVar2),
            plVar4 = in_stack_00000030, (uVar9 & 1) != 0) {
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        lVar7 = FUN_03419818(plVar11,0x2b,0);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_033e9730;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01dde8fc(plVar4,*(long *)puVar3,0);
LAB_033e9730:
        uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70(uVar6,uVar6);
        }
        FUN_03418f00(lVar7,uVar6,0);
      }
      FUN_02c52b84(&stack0x00000020,*(undefined8 *)puVar1);
    }
    puVar1 = StringLiteral_1372;
    if (*(long *)(param_2 + 0x28) == 0) {
LAB_033e9880:
      if ((param_3 >> 1 & 1) == 0) {
        FUN_033e99c8(param_2,plVar11);
      }
      if ((*(long *)(param_2 + 0x18) != 0 & param_3) == 0) {
        if (plVar11 != (long *)0x0) goto LAB_033e98d0;
      }
      else if ((plVar11 != (long *)0x0) &&
              (lVar7 = FUN_03418f00(plVar11,*(undefined8 *)puVar1,0), lVar7 != 0)) {
        FUN_03418f00(lVar7,*(undefined8 *)(param_2 + 0x18),0);
LAB_033e98d0:
        (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
        return;
      }
    }
    else if (plVar11 != (long *)0x0) {
      FUN_03419818(plVar11,0x5b,0);
      puVar3 = StringLiteral_9111;
      lVar7 = *(long *)(param_2 + 0x28);
      if (lVar7 != 0) {
        iVar12 = 0;
        do {
          if (*(int *)(lVar7 + 0x18) <= iVar12) {
            FUN_03419818(plVar11,0x5d,0);
            goto LAB_033e9880;
          }
          if (iVar12 != 0) {
            FUN_03418f00(plVar11,*(undefined8 *)puVar1,0);
            lVar7 = *(long *)(param_2 + 0x28);
            if (lVar7 == 0) break;
          }
          lVar7 = FUN_03198ca0(lVar7,iVar12,*(undefined8 *)puVar3);
          if (lVar7 == 0) break;
          if (*(long *)(lVar7 + 0x18) == 0) {
            if ((*(long *)(param_2 + 0x28) == 0) ||
               (lVar7 = FUN_03198ca0(*(long *)(param_2 + 0x28),iVar12,*(undefined8 *)puVar3),
               lVar7 == 0)) break;
            uVar6 = FUN_033e9984();
            FUN_03418f00(plVar11,uVar6,0);
          }
          else {
            lVar7 = FUN_03419818(plVar11,0x5b,0);
            if ((((*(long *)(param_2 + 0x28) == 0) ||
                 (lVar8 = FUN_03198ca0(*(long *)(param_2 + 0x28),iVar12,*(undefined8 *)puVar3),
                 lVar8 == 0)) || (uVar6 = FUN_033e9984(), lVar7 == 0)) ||
               (lVar7 = FUN_03418f00(lVar7,uVar6,0), lVar7 == 0)) break;
            FUN_03419818(lVar7,0x5d,0);
          }
          lVar7 = *(long *)(param_2 + 0x28);
          iVar12 = iVar12 + 1;
          if (lVar7 == 0) break;
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


