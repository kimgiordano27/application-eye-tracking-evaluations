/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfigBase$$OnDestroy
ENTRY_POINT: 056177e4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05617a48) */
/* WARNING: Removing unreachable block (ram,0x05617a3c) */

void Meta_XR_ImmersiveDebugger_CustomIntegrationConfigBase__OnDestroy
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long in_x10;
  uint in_w11;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar5;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000050;
  
  while( true ) {
    if ((uint)in_x10 < in_w11) {
      *(uint *)(unaff_x20 + 0x18) = (uint)in_x10 + 1;
      *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = param_3;
      thunk_FUN_0333a630();
    }
    else {
      FUN_041e2c78();
    }
    uVar1 = FUN_04625918(&stack0x00000040,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x110));
    if ((uVar1 & 1) == 0) {
      System_Collections_Generic_ObjectEqualityComparer<TextField_CursorBlinkAnimation>__IndexOf
                (&stack0x00000040,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x118));
      lVar2 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x130);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_032934b8();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      lVar2 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x130);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_032934b8();
      }
      if (*(long *)(*(long *)(lVar2 + 0xb8) + 8) == 0) {
        lVar2 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x130);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_032934b8();
        }
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        lVar4 = *(long *)(*unaff_x19 + 0xc0);
        lVar2 = *(long *)(lVar4 + 0x130);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_032934b8();
          lVar4 = *(long *)(*unaff_x19 + 0xc0);
        }
        lVar4 = *(long *)(lVar4 + 0x128);
        uVar5 = **(undefined8 **)(lVar2 + 0xb8);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_032934b8(lVar4);
        }
        uVar3 = thunk_FUN_032a56a0(lVar4);
        FUN_04eb489c(uVar3,uVar5,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x138),
                     *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x140));
        lVar4 = *(long *)(*unaff_x19 + 0xc0);
        lVar2 = *(long *)(lVar4 + 0x130);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_032934b8();
          lVar4 = *(long *)(*unaff_x19 + 0xc0);
        }
        *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8) = uVar3;
        lVar2 = *(long *)(lVar4 + 0x130);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_032934b8();
        }
        thunk_FUN_0333a630(*(long *)(lVar2 + 0xb8) + 8,uVar3);
      }
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      System_Collections_Generic_List<HandGrabUtils_HandGrabInteractableData>__System_Collections_ICollection_get_IsSynchronized
                ();
      FUN_041e3694();
      in_stack_00000028 = in_stack_00000008;
      in_stack_00000020 = in_stack_00000000;
      in_stack_00000030 = in_stack_00000010;
      while( true ) {
        uVar1 = FUN_052d44b4(&stack0x00000020,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x178))
        ;
        if ((uVar1 & 1) == 0) {
          FUN_052d44b0(&stack0x00000020,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x180));
          lVar2 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0xd8);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_032934b8();
          }
          if (*(int *)(lVar2 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          FUN_03fdd5fc();
          return;
        }
        if (unaff_x21 == 0) break;
        FUN_04c11388();
      }
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    param_1 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (param_1 == 0) break;
    in_x10 = (long)*(int *)(unaff_x20 + 0x18);
    in_w11 = *(uint *)(param_1 + 0x18);
    param_3 = in_stack_00000050;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


