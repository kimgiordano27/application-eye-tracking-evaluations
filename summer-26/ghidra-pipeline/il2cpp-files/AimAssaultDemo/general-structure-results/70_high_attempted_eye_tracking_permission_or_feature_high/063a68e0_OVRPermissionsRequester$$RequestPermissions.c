/*
FUNCTION_NAME: OVRPermissionsRequester$$RequestPermissions
ENTRY_POINT: 063a68e0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


/* WARNING: Removing unreachable block (ram,0x063a6a70) */
/* WARNING: Removing unreachable block (ram,0x063a6a74) */
/* WARNING: Removing unreachable block (ram,0x063a6b1c) */

void OVRPermissionsRequester__RequestPermissions(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  int *in_x10;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000050;
  
code_r0x063a68e0:
  puVar4 = (undefined8 *)(param_1 + (long)(*in_x10 + 8) * 0x10 + 0x138);
  do {
    uVar2 = (*(code *)*puVar4)(unaff_x20,puVar4[1]);
    uVar3 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax(uVar2,*unaff_x27,0);
    if ((uVar3 & 1) != 0) {
      lVar5 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x24) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_063a695c;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_0377596c(unaff_x20,*unaff_x24,1);
LAB_063a695c:
      uVar2 = (*(code *)*puVar4)(unaff_x20,puVar4[1]);
      uVar3 = FUN_060bf954(uVar2,*unaff_x28,0);
      if ((uVar3 & 1) != 0) {
        lVar5 = *unaff_x20;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x24) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_063a69c8;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_0377596c(unaff_x20,*unaff_x24,1);
LAB_063a69c8:
        (*(code *)*puVar4)(unaff_x20,puVar4[1]);
        lVar5 = *unaff_x20;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x24) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 5) * 0x10 + 0x138);
              goto LAB_063a6a28;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_0377596c(unaff_x20,*unaff_x24,5);
LAB_063a6a28:
        (*(code *)*puVar4)(unaff_x20,puVar4[1]);
        (**(code **)(*unaff_x19 + 0x1f8))();
      }
    }
    while (uVar3 = FUN_05d64e98(&stack0x00000020,*unaff_x26), unaff_x20 = in_stack_00000030,
          (uVar3 & 1) == 0) {
      FUN_05d64e94(&stack0x00000020,*unaff_x23);
      uVar3 = FUN_05d64e98(&stack0x00000040,*unaff_x26);
      plVar1 = in_stack_00000050;
      if ((uVar3 & 1) == 0) {
        FUN_05d64e94(&stack0x00000040,*unaff_x23);
        return;
      }
      if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      (**(code **)(*unaff_x19 + 0x1d8))();
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar5 = *plVar1;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x24) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_063a685c;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_0377596c(plVar1,*unaff_x24,3);
LAB_063a685c:
      lVar5 = (*(code *)*puVar4)(plVar1,puVar4[1]);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      FUN_049cf910(&stack0x00000008,lVar5,*unaff_x25);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000018;
    }
    if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    param_1 = *in_stack_00000030;
    uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar3 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == *unaff_x24) goto code_r0x063a68e0;
        uVar3 = uVar3 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c(in_stack_00000030,*unaff_x24,8);
  } while( true );
}


