/*
FUNCTION_NAME: OVRPlugin$$EraseSpace
ENTRY_POINT: 0567e7e4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0567e870) */
/* WARNING: Removing unreachable block (ram,0x0567e98c) */

void OVRPlugin__EraseSpace
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *unaff_x19;
  long lVar6;
  long *plVar7;
  uint unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  int unaff_w25;
  undefined4 uVar8;
  undefined8 uVar9;
  long in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000040;
  
  while( true ) {
    if ((param_4 & 1) != 0) {
      FUN_0567e45c(unaff_x21);
      lVar4 = *unaff_x19;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar4 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      uVar9 = *(undefined8 *)(unaff_x21 + 0x38);
      uVar2 = *(undefined8 *)(unaff_x21 + 0x30);
      lVar4 = lVar4 + (long)(int)unaff_w20 * (long)unaff_w25;
      *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(unaff_x21 + 0x40);
      *(undefined8 *)(lVar4 + 0x28) = uVar9;
      *(undefined8 *)(lVar4 + 0x20) = uVar2;
      lVar4 = *unaff_x19;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar8 = FUN_0567df40(unaff_x21);
      if (*(uint *)(lVar4 + 0x18) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar4 = lVar4 + (long)(int)unaff_w20 * (long)unaff_w25;
      unaff_w20 = unaff_w20 + 1;
      *(undefined4 *)(lVar4 + 0x24) = uVar8;
      *(undefined4 *)(lVar4 + 0x28) = param_2;
      *(undefined4 *)(lVar4 + 0x2c) = param_3;
    }
    uVar1 = FUN_05156804(&stack0x00000030,*unaff_x24);
    unaff_x21 = in_stack_00000040;
    if ((uVar1 & 1) == 0) break;
    if (in_stack_00000040 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(long *)(in_stack_00000040 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    param_4 = FUN_0635ff10(*(long *)(in_stack_00000040 + 0x28),0);
  }
  FUN_05156800(&stack0x00000030,*unaff_x23);
  if (0 < (int)unaff_w20) {
    lVar4 = *unaff_x19;
    if (lVar4 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      if (*(int *)(lVar4 + 0x18) != 0) {
        lVar6 = lVar4 + 0x20;
      }
    }
    if (*(int *)(*unaff_x22 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar2 = FUN_05646ae8(lVar6,unaff_w20,0);
    FUN_05696b6c(uVar2,*(undefined8 *)System_Collections_Generic_List<KeyValuePair>_TypeInfo,
                 *(undefined8 *)System_Collections_Generic_List<TrialOffer>_TypeInfo,
                 *(undefined8 *)System_Collections_Generic_IEnumerable<ServicePoint>_TypeInfo,0,0);
  }
  plVar7 = (long *)*in_stack_00000028;
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0567e94c;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_02dd004c(plVar7,*(long *)PTR_DAT_069fbff0,0);
LAB_0567e94c:
    (*(code *)*puVar3)(plVar7,puVar3[1]);
  }
  if (in_stack_00000020 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


