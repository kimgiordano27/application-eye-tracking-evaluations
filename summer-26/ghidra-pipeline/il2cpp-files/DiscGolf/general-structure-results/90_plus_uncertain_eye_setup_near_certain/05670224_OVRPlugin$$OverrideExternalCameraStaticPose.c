/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraStaticPose
ENTRY_POINT: 05670224
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x056704b4) */
/* WARNING: Removing unreachable block (ram,0x056704ac) */

void OVRPlugin__OverrideExternalCameraStaticPose(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  uint *unaff_x19;
  long unaff_x20;
  char cVar6;
  uint uVar7;
  ulong unaff_x22;
  long *plVar8;
  long *unaff_x25;
  long *unaff_x26;
  byte unaff_w27;
  undefined8 *unaff_x28;
  long in_stack_00000018;
  undefined8 *in_stack_00000020;
  long in_stack_00000028;
  undefined8 *in_stack_00000030;
  
  FUN_05156800(&stack0x00000040,*unaff_x28);
  plVar8 = (long *)*in_stack_00000020;
  if (plVar8 != (long *)0x0) {
    lVar2 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05670294;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c(plVar8,*unaff_x25,0);
LAB_05670294:
    (*(code *)*puVar1)(plVar8,puVar1[1]);
  }
  if (in_stack_00000018 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96858();
  }
  if ((unaff_x22 & 1) != 0) {
    FUN_05670608();
    if ((*(char *)(unaff_x20 + 0x10e) == '\0') && (*(char *)(unaff_x20 + 0x10f) == '\0')) {
      cVar6 = *(char *)(unaff_x20 + 0x110);
    }
    else {
      cVar6 = '\x01';
    }
    if (*(long *)(unaff_x20 + 0x198) == 0) {
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      plVar8 = (long *)FUN_0564de84(0xd,0);
      if ((cVar6 == '\0' && (unaff_w27 & 1) == 0) || (*(long *)(unaff_x20 + 0x198) != 0)) {
        lVar2 = *(long *)(unaff_x20 + 0xb8);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
          uVar4 = 0;
          uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
          do {
            if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            FUN_056708a0();
            uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
            uVar4 = uVar4 + 1;
          } while ((long)uVar4 < (long)(int)*(uint *)(lVar2 + 0x18));
        }
      }
      else if (*unaff_x19 != 0) {
        uVar7 = 0;
        do {
          FUN_056708a0();
          uVar7 = uVar7 + 1;
        } while (uVar7 < *unaff_x19);
      }
      if (plVar8 != (long *)0x0) {
        lVar2 = *plVar8;
        uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x25) {
              puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
              goto FUN_056703f8;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar1 = (undefined8 *)FUN_02dd004c(plVar8,*unaff_x25,0);
FUN_056703f8:
        (*(code *)*puVar1)(plVar8,puVar1[1]);
      }
    }
  }
  plVar8 = (long *)*in_stack_00000030;
  if (plVar8 != (long *)0x0) {
    lVar2 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05670460;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02dd004c(plVar8,*unaff_x25,0);
LAB_05670460:
    (*(code *)*puVar1)(plVar8,puVar1[1]);
  }
  if (in_stack_00000028 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


