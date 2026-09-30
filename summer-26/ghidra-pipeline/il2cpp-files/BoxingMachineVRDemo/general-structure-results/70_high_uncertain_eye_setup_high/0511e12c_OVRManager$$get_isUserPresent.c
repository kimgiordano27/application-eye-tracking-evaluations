/*
FUNCTION_NAME: OVRManager$$get_isUserPresent
ENTRY_POINT: 0511e12c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRManager__get_isUserPresent(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong in_x9;
  ulong uVar8;
  int *in_x10;
  int *piVar9;
  long in_x11;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  long *plVar10;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  do {
    if (in_x11 == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_0511e15c;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar4 = (undefined8 *)FUN_02d9a5d4(unaff_x22,param_3,0);
LAB_0511e15c:
        iVar3 = (*(code *)*puVar4)(unaff_x22,puVar4[1]);
        if (iVar3 <= unaff_w21) {
          plVar10 = (long *)(unaff_x20 + 0xa8);
          if (*plVar10 != 0) {
            lVar7 = FUN_0511dc04();
            *plVar10 = lVar7;
            thunk_FUN_02dd37b4(plVar10,lVar7);
          }
          if (*(long *)(unaff_x20 + 200) == 0) goto LAB_0511e368;
          lVar7 = FUN_033b7810(*(long *)(unaff_x20 + 200),*(undefined8 *)PTR_DAT_06780b98);
          if (lVar7 == 0) goto LAB_0511e254;
          FUN_039700f4(lVar7,*(undefined8 *)PTR_DAT_06780bc8);
          puVar2 = PTR_DAT_06780ba8;
          puVar1 = PTR_DAT_06780b68;
          in_stack_00000028 = in_stack_00000008;
          in_stack_00000020 = in_stack_00000000;
          in_stack_00000038 = in_stack_00000018;
          in_stack_00000030 = in_stack_00000010;
          goto OVRManager__DeregisterEventListener;
        }
        plVar10 = *(long **)(unaff_x20 + 0x98);
        if (plVar10 == (long *)0x0) goto LAB_0511e254;
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x25) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0511e1c4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_02d9a5d4(plVar10,*unaff_x25,0);
LAB_0511e1c4:
        (*(code *)*puVar4)(plVar10,unaff_w21,puVar4[1]);
        uVar5 = FUN_0511dc04();
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x25) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_0511e234;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_02d9a5d4(plVar10,*unaff_x25,1);
LAB_0511e234:
        (*(code *)*puVar4)(plVar10,unaff_w21,uVar5,puVar4[1]);
        unaff_x22 = *(long **)(unaff_x20 + 0x98);
        unaff_w21 = unaff_w21 + 1;
        if (unaff_x22 == (long *)0x0) goto LAB_0511e254;
        param_1 = *unaff_x22;
        param_3 = *unaff_x24;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
OVRManager__DeregisterEventListener:
  uVar8 = FUN_04a3e694(&stack0x00000020,*(undefined8 *)puVar2);
  uVar5 = in_stack_00000030;
  if ((uVar8 & 1) == 0) {
    FUN_04a3e690(&stack0x00000020,*(undefined8 *)PTR_DAT_06780ba0);
LAB_0511e368:
    if (*(long *)(unaff_x20 + 0xb8) != 0) {
      lVar7 = FUN_033b7810(*(long *)(unaff_x20 + 0xb8),*(undefined8 *)PTR_DAT_06780b98);
      if (lVar7 == 0) {
LAB_0511e254:
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_039700f4(lVar7,*(undefined8 *)PTR_DAT_06780bc8);
      puVar2 = PTR_DAT_06780ba8;
      puVar1 = PTR_DAT_06780b68;
      in_stack_00000028 = in_stack_00000008;
      in_stack_00000020 = in_stack_00000000;
      in_stack_00000038 = in_stack_00000018;
      in_stack_00000030 = in_stack_00000010;
      while (uVar8 = FUN_04a3e694(&stack0x00000020,*(undefined8 *)puVar2), uVar5 = in_stack_00000030
            , (uVar8 & 1) != 0) {
        plVar10 = *(long **)(unaff_x20 + 0xb8);
        uVar6 = FUN_0511dc04();
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto FUN_0511e428;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_02d9a5d4(plVar10,*(long *)puVar1,1);
FUN_0511e428:
        (*(code *)*puVar4)(plVar10,uVar5,uVar6,puVar4[1]);
      }
      FUN_04a3e690(&stack0x00000020,*(undefined8 *)PTR_DAT_06780ba0);
    }
    plVar10 = (long *)(unaff_x20 + 0xc0);
    if (*plVar10 != 0) {
      lVar7 = FUN_0511dc04();
      *plVar10 = lVar7;
      thunk_FUN_02dd37b4(plVar10,lVar7);
    }
    return;
  }
  plVar10 = *(long **)(unaff_x20 + 200);
  uVar6 = FUN_0511dc04();
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar7 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_0511e33c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_02d9a5d4(plVar10,*(long *)puVar1,1);
LAB_0511e33c:
  (*(code *)*puVar4)(plVar10,uVar5,uVar6,puVar4[1]);
  goto OVRManager__DeregisterEventListener;
}


