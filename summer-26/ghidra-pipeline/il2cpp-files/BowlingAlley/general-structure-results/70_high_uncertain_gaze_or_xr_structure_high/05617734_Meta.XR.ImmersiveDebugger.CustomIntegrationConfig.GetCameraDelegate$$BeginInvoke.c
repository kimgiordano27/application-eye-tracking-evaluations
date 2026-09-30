/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig.GetCameraDelegate$$BeginInvoke
ENTRY_POINT: 05617734
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;functionality_possible_biometrics_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05617a48) */
/* WARNING: Removing unreachable block (ram,0x05617a3c) */

void Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetCameraDelegate__BeginInvoke(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong in_x9;
  long lVar6;
  long *unaff_x19;
  long unaff_x21;
  undefined8 uVar7;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  if ((in_x9 & 1) == 0) {
    param_1 = FUN_032934b8(param_1);
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(param_1);
  }
  lVar2 = FUN_03fdd288(*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xd0));
  FUN_04625908();
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  while( true ) {
    uVar3 = FUN_04625918(&stack0x00000040,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x110));
    if ((uVar3 & 1) == 0) {
      System_Collections_Generic_ObjectEqualityComparer<TextField_CursorBlinkAnimation>__IndexOf
                (&stack0x00000040,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x118));
      lVar4 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x130);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_032934b8();
      }
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      lVar4 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x130);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_032934b8();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar4 == 0) {
        lVar4 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x130);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_032934b8();
        }
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        lVar6 = *(long *)(*unaff_x19 + 0xc0);
        lVar4 = *(long *)(lVar6 + 0x130);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_032934b8();
          lVar6 = *(long *)(*unaff_x19 + 0xc0);
        }
        lVar6 = *(long *)(lVar6 + 0x128);
        uVar7 = **(undefined8 **)(lVar4 + 0xb8);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_032934b8(lVar6);
        }
        lVar4 = thunk_FUN_032a56a0(lVar6);
        FUN_04eb489c(lVar4,uVar7,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x138),
                     *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x140));
        lVar5 = *(long *)(*unaff_x19 + 0xc0);
        lVar6 = *(long *)(lVar5 + 0x130);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_032934b8();
          lVar5 = *(long *)(*unaff_x19 + 0xc0);
        }
        *(long *)(*(long *)(lVar6 + 0xb8) + 8) = lVar4;
        lVar6 = *(long *)(lVar5 + 0x130);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_032934b8();
        }
        thunk_FUN_0333a630(*(long *)(lVar6 + 0xb8) + 8,lVar4);
      }
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      System_Collections_Generic_List<HandGrabUtils_HandGrabInteractableData>__System_Collections_ICollection_get_IsSynchronized
                (lVar2,lVar4,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x148));
      FUN_041e3694(lVar2,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x150));
      in_stack_00000028 = 0;
      in_stack_00000020 = 0;
      in_stack_00000030 = 0;
      while( true ) {
        uVar3 = FUN_052d44b4(&stack0x00000020,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x178))
        ;
        if ((uVar3 & 1) == 0) {
          FUN_052d44b0(&stack0x00000020,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x180));
          lVar4 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0xd8);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_032934b8();
          }
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          FUN_03fdd5fc(lVar2,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x188));
          return;
        }
        if (unaff_x21 == 0) break;
        FUN_04c11388();
      }
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar4 = *(long *)(lVar2 + 0x10);
    lVar6 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x108);
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar4 == 0) break;
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar2 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000050;
      thunk_FUN_0333a630();
    }
    else {
      FUN_041e2c78(lVar2,in_stack_00000050,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


