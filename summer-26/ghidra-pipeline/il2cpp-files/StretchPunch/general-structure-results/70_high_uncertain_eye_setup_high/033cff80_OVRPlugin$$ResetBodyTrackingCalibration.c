/*
FUNCTION_NAME: OVRPlugin$$ResetBodyTrackingCalibration
ENTRY_POINT: 033cff80
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__ResetBodyTrackingCalibration(void)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint in_w8;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  long lVar9;
  uint unaff_w22;
  long lVar10;
  long *unaff_x25;
  int unaff_w26;
  long lVar11;
  long unaff_x28;
  long in_stack_00000058;
  
  do {
    if (*(uint *)(unaff_x28 + 0x18) <= in_w8) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    lVar11 = (long)(int)in_w8;
    lVar10 = *(long *)(unaff_x28 + lVar11 * 8 + 0x20);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar9 = *unaff_x25;
    lVar3 = thunk_FUN_01de26bc(lVar10,lVar9);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(lVar10,lVar9);
    }
    lVar3 = *unaff_x25;
    plVar4 = (long *)thunk_FUN_01de26bc(lVar10,lVar3);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(lVar10,lVar3);
    }
    lVar10 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar8 + 7) * 0x10 + 0x138);
          goto LAB_033d0018;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01dde8fc(plVar4,lVar3,7);
LAB_033d0018:
    uVar2 = (*(code *)*puVar5)(plVar4,0,puVar5[1]);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(uint *)(unaff_x20 + 0x18) <= in_w8) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    in_w8 = in_w8 + 1;
    *(undefined4 *)(unaff_x20 + lVar11 * 4 + 0x20) = uVar2;
    if (in_w8 == unaff_w22) {
      plVar4 = (long *)(**(code **)(*unaff_x19 + 0x2d8))();
      if (plVar4 == (long *)0x0) {
        if (unaff_w26 != 0) goto LAB_033d0900;
      }
      else {
        bVar1 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
        if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
            *(long *)StringLiteral_1183)) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7df0c();
        }
        if (unaff_w26 != 0) {
          uVar6 = thunk_FUN_01dff4ec();
          return uVar6;
        }
      }
      if (in_stack_00000058 != 0) {
        if (*(uint *)(in_stack_00000058 + 0x18) <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (plVar4 != (long *)0x0) {
          thunk_FUN_01dff68c(plVar4,*(undefined8 *)
                                     (in_stack_00000058 + (long)(int)unaff_w22 * 8 + 0x20));
          return 0;
        }
      }
LAB_033d0900:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    unaff_x28 = in_stack_00000058;
    if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
  } while( true );
}


