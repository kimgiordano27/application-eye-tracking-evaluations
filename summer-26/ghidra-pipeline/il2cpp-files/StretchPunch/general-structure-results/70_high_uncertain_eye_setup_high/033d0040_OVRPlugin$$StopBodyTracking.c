/*
FUNCTION_NAME: OVRPlugin$$StopBodyTracking
ENTRY_POINT: 033d0040
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


undefined8 OVRPlugin__StopBodyTracking(undefined4 param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint in_w8;
  ulong uVar6;
  long in_x9;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long lVar8;
  uint unaff_w22;
  long lVar9;
  long *unaff_x25;
  int unaff_w26;
  long in_stack_00000058;
  
  for (; *(undefined4 *)(in_x9 + 0x20) = param_1, in_w8 != unaff_w22; in_w8 = in_w8 + 1) {
    if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(uint *)(in_stack_00000058 + 0x18) <= in_w8) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    lVar9 = *(long *)(in_stack_00000058 + (long)(int)in_w8 * 8 + 0x20);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar8 = *unaff_x25;
    lVar2 = thunk_FUN_01de26bc(lVar9,lVar8);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(lVar9,lVar8);
    }
    lVar2 = *unaff_x25;
    plVar3 = (long *)thunk_FUN_01de26bc(lVar9,lVar2);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(lVar9,lVar2);
    }
    lVar9 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar2) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar7 + 7) * 0x10 + 0x138);
          goto LAB_033d0018;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01dde8fc(plVar3,lVar2,7);
LAB_033d0018:
    param_1 = (*(code *)*puVar4)(plVar3,0,puVar4[1]);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if (*(uint *)(unaff_x20 + 0x18) <= in_w8) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    in_x9 = unaff_x20 + (long)(int)in_w8 * 4;
  }
  plVar3 = (long *)(**(code **)(*unaff_x19 + 0x2d8))();
  if (plVar3 == (long *)0x0) {
    if (unaff_w26 != 0) goto LAB_033d0900;
  }
  else {
    bVar1 = *(byte *)(*(long *)StringLiteral_1183 + 0x130);
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)StringLiteral_1183))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c();
    }
    if (unaff_w26 != 0) {
      uVar5 = thunk_FUN_01dff4ec();
      return uVar5;
    }
  }
  if (in_stack_00000058 != 0) {
    if (*(uint *)(in_stack_00000058 + 0x18) <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    if (plVar3 != (long *)0x0) {
      thunk_FUN_01dff68c(plVar3,*(undefined8 *)(in_stack_00000058 + (long)(int)unaff_w22 * 8 + 0x20)
                        );
      return 0;
    }
  }
LAB_033d0900:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


