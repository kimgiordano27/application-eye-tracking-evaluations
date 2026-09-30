/*
FUNCTION_NAME: OVRPlugin$$ChangeVirtualKeyboardTextContext
ENTRY_POINT: 076d1234
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x076d13a4) */

uint OVRPlugin__ChangeVirtualKeyboardTextContext(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  long in_x11;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *in_stack_00000018;
  
  do {
    if (in_x11 == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_076d1264;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar3 = (undefined8 *)FUN_0406ae20(unaff_x21,param_3,0);
LAB_076d1264:
        lVar4 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        plVar8 = *(long **)(unaff_x19 + 0x38);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar5 = *plVar8;
        uVar9 = *(undefined8 *)(unaff_x19 + 0x48);
        uVar10 = *(undefined8 *)(lVar4 + 0x18);
        uVar1 = *(undefined4 *)(lVar4 + 0x10);
        uVar2 = *(undefined4 *)(lVar4 + 0x14);
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x28) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_076d12d4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_0406ae20(plVar8,*unaff_x28,0);
LAB_076d12d4:
        uVar6 = (*(code *)*puVar3)(plVar8,uVar9,uVar2,uVar1,uVar10,puVar3[1]);
        if ((uVar6 & 1) == 0) {
LAB_076d12f4:
          if (in_stack_00000018 == (long *)0x0) goto LAB_076d1368;
          lVar4 = *in_stack_00000018;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 == 0) goto LAB_076d1340;
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_076d1328;
        }
        if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        lVar4 = *in_stack_00000018;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x26) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_076d11fc;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*unaff_x26,0);
LAB_076d11fc:
        unaff_w20 = (*(code *)*puVar3)(in_stack_00000018,puVar3[1]);
        if ((unaff_w20 & 1) == 0) goto LAB_076d12f4;
        if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        param_1 = *in_stack_00000018;
        param_3 = *unaff_x27;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
        unaff_x21 = in_stack_00000018;
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_076d1328:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_076d135c;
    }
  }
LAB_076d1340:
  puVar3 = (undefined8 *)FUN_0406ae20(in_stack_00000018,*(long *)PTR_DAT_08f65868,0);
LAB_076d135c:
  (*(code *)*puVar3)(in_stack_00000018,puVar3[1]);
LAB_076d1368:
  return (unaff_w20 ^ 1) & 1;
}


