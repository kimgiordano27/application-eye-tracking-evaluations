/*
FUNCTION_NAME: OVRPlugin$$SetExternalCameraProperties
ENTRY_POINT: 05670588
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x056704b4) */

void OVRPlugin__SetExternalCameraProperties(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  uint *unaff_x19;
  long unaff_x20;
  char cVar7;
  uint uVar8;
  ulong unaff_x22;
  int unaff_w23;
  long *unaff_x25;
  long *unaff_x26;
  byte unaff_w27;
  long in_stack_00000018;
  undefined8 *in_stack_00000020;
  long in_stack_00000028;
  undefined8 *in_stack_00000030;
  long *in_stack_00000038;
  
  FUN_02d014b0();
  if (unaff_w23 == 1) {
    plVar2 = (long *)__cxa_begin_catch();
    in_stack_00000018 = *plVar2;
    __cxa_end_catch();
    plVar2 = (long *)*in_stack_00000020;
    if (plVar2 != (long *)0x0) {
      lVar3 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x25) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_05670294;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_02dd004c(plVar2,*unaff_x25,0);
LAB_05670294:
      (*(code *)*puVar1)(plVar2,puVar1[1]);
    }
    if (in_stack_00000018 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96858();
    }
    if ((unaff_x22 & 1) != 0) {
      FUN_05670608();
      if ((*(char *)(unaff_x20 + 0x10e) == '\0') && (*(char *)(unaff_x20 + 0x10f) == '\0')) {
        cVar7 = *(char *)(unaff_x20 + 0x110);
      }
      else {
        cVar7 = '\x01';
      }
      if (*(long *)(unaff_x20 + 0x198) == 0) {
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        in_stack_00000038 = (long *)FUN_0564de84(0xd,0);
        if ((cVar7 == '\0' && (unaff_w27 & 1) == 0) || (*(long *)(unaff_x20 + 0x198) != 0)) {
          lVar3 = *(long *)(unaff_x20 + 0xb8);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
            uVar5 = 0;
            uVar4 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
            do {
              if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              FUN_056708a0();
              uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
              uVar5 = uVar5 + 1;
            } while ((long)uVar5 < (long)(int)*(uint *)(lVar3 + 0x18));
          }
        }
        else if (*unaff_x19 != 0) {
          uVar8 = 0;
          do {
            FUN_056708a0();
            uVar8 = uVar8 + 1;
          } while (uVar8 < *unaff_x19);
        }
        plVar2 = in_stack_00000038;
        if (in_stack_00000038 != (long *)0x0) {
          lVar3 = *in_stack_00000038;
          uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *unaff_x25) {
                puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
                goto FUN_056703f8;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar1 = (undefined8 *)FUN_02dd004c(in_stack_00000038,*unaff_x25,0);
FUN_056703f8:
          (*(code *)*puVar1)(plVar2,puVar1[1]);
        }
      }
    }
  }
  else {
    FUN_029794b4(&stack0x00000018);
    if (unaff_w23 != 1) {
      FUN_029794b4(&stack0x00000028);
                    /* WARNING: Subroutine does not return */
      FUN_02e86b8c();
    }
    plVar2 = (long *)__cxa_begin_catch();
    in_stack_00000028 = *plVar2;
    __cxa_end_catch();
  }
  plVar2 = (long *)*in_stack_00000030;
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05670460;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c(plVar2,*unaff_x25,0);
LAB_05670460:
    (*(code *)*puVar1)(plVar2,puVar1[1]);
  }
  if (in_stack_00000028 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


