/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraFov
ENTRY_POINT: 05670140
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x056704b4) */
/* WARNING: Removing unreachable block (ram,0x056704ac) */
/* WARNING: Removing unreachable block (ram,0x056704a0) */
/* WARNING: Removing unreachable block (ram,0x056704a8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRPlugin__GetUseOverriddenExternalCameraFov(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  uint *unaff_x19;
  long unaff_x20;
  char cVar11;
  uint unaff_w22;
  uint unaff_w23;
  long *unaff_x24;
  long *unaff_x26;
  uint uVar12;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  long *in_stack_00000058;
  long *in_stack_00000068;
  
  thunk_FUN_02df485c();
  puVar1 = PTR_DAT_069fbff0;
  in_stack_00000068 = (long *)FUN_0564de84(5,0);
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  in_stack_00000058 = (long *)FUN_0564de84(6,0);
  if (*unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_04010c90(*unaff_x24,*(undefined8 *)System_Collections_Generic_List<InstanceHandle>_TypeInfo);
  puVar3 = System_Collections_Generic_List<InspectedMember>_TypeInfo;
  puVar2 = System_Collections_Generic_List<InspectedHandle>_TypeInfo;
  uVar12 = 0;
  in_stack_00000048 = in_stack_00000008;
  in_stack_00000040 = in_stack_00000000;
  in_stack_00000050 = in_stack_00000010;
  while (uVar5 = FUN_05156804(&stack0x00000040,*(undefined8 *)puVar3), (uVar5 & 1) != 0) {
    if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    plVar6 = *(long **)(in_stack_00000050 + 0x28);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar4 = (**(code **)(*plVar6 + 0x228))
                      (plVar6,unaff_w22 & 1,unaff_w23 & 1,*(undefined4 *)(unaff_x20 + 0xc0),
                       *(undefined4 *)(in_stack_00000050 + 0x18),*(undefined8 *)(*plVar6 + 0x230));
    uVar12 = uVar12 | uVar4 ^ 1;
  }
  FUN_05156800(&stack0x00000040,*(undefined8 *)puVar2);
  plVar6 = in_stack_00000058;
  if (in_stack_00000058 != (long *)0x0) {
    lVar8 = *in_stack_00000058;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05670294;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(in_stack_00000058,*(long *)puVar1,0);
LAB_05670294:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  if ((unaff_w22 & 1) != 0) {
    FUN_05670608();
    if ((*(char *)(unaff_x20 + 0x10e) == '\0') && (*(char *)(unaff_x20 + 0x10f) == '\0')) {
      cVar11 = *(char *)(unaff_x20 + 0x110);
    }
    else {
      cVar11 = '\x01';
    }
    if (*(long *)(unaff_x20 + 0x198) == 0) {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      plVar6 = (long *)FUN_0564de84(0xd,0);
      if ((cVar11 == '\0' && (uVar12 & 1) == 0) || (*(long *)(unaff_x20 + 0x198) != 0)) {
        lVar8 = *(long *)(unaff_x20 + 0xb8);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
          uVar5 = 0;
          uVar9 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
          do {
            if (uVar9 <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            FUN_056708a0();
            uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
            uVar5 = uVar5 + 1;
          } while ((long)uVar5 < (long)(int)*(uint *)(lVar8 + 0x18));
        }
      }
      else if (*unaff_x19 != 0) {
        uVar12 = 0;
        do {
          FUN_056708a0();
          uVar12 = uVar12 + 1;
        } while (uVar12 < *unaff_x19);
      }
      if (plVar6 != (long *)0x0) {
        lVar8 = *plVar6;
        uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto FUN_056703f8;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_02dd004c(plVar6,*(long *)puVar1,0);
FUN_056703f8:
        (*(code *)*puVar7)(plVar6,puVar7[1]);
      }
    }
  }
  plVar6 = in_stack_00000068;
  if (in_stack_00000068 != (long *)0x0) {
    lVar8 = *in_stack_00000068;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05670460;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(in_stack_00000068,*(long *)puVar1,0);
LAB_05670460:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  return;
}


