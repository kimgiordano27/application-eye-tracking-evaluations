/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GenerateRandomPositionInRoom
ENTRY_POINT: 072cc694
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x072cc880) */

void Meta_XR_MRUtilityKit_MRUKRoom__GenerateRandomPositionInRoom(ulong param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long lVar8;
  undefined8 uVar9;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  long *in_stack_00000018;
  
code_r0x072cc694:
  if ((param_1 & 0xffffffff) == 1) {
    lVar8 = *(long *)(unaff_x20 + 0x18);
    lVar4 = FUN_04077674(*(undefined8 *)PTR_DAT_09287040,1);
    if (lVar4 != 0) {
      if ((unaff_x19 != 0) && (lVar5 = thunk_FUN_040b4e00(), lVar5 == 0)) {
        uVar3 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar3,0);
      }
      if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      *(long *)(lVar4 + 0x20) = unaff_x19;
      thunk_FUN_040ec700();
      if (lVar8 != 0) {
        FUN_075a1c74(lVar8,unaff_x21,lVar4,0);
        goto LAB_072cc7b0;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
LAB_072cc7b0:
  do {
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = *in_stack_00000018;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_072cc59c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*unaff_x25,0);
LAB_072cc59c:
    uVar6 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    if ((uVar6 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) {
        return;
      }
      lVar4 = *in_stack_00000018;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_072cc804;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = *in_stack_00000018;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_072cc600;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*unaff_x26,0);
LAB_072cc600:
    unaff_x21 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
    plVar2 = *(long **)(unaff_x20 + 0x18);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = (**(code **)(*plVar2 + 600))(plVar2,*(undefined8 *)(*plVar2 + 0x260));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(lVar4 + 0x18) != 0) {
      if ((int)*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      plVar2 = *(long **)(lVar4 + 0x20);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar3 = (**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0));
      uVar9 = *unaff_x28;
      if (*(int *)(*(long *)(unaff_x29 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar9 = FUN_0768890c(uVar9,0);
      uVar6 = FUN_07692be0(uVar3,uVar9,0);
      if (((uVar6 & 1) != 0) || (param_1 = *(ulong *)(lVar4 + 0x18), 2 < (int)param_1)) {
        if (*(int *)(*(long *)PTR_DAT_092b8400 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_072fd3e0(*unaff_x27,0,0);
        goto LAB_072cc7b0;
      }
      goto code_r0x072cc694;
    }
    lVar8 = *(long *)(unaff_x20 + 0x18);
    lVar5 = *(long *)PTR_DAT_09288f08;
    lVar4 = *(long *)(lVar5 + 0x38);
    if (lVar4 == 0) {
      FUN_040b1b28(lVar5);
      lVar4 = *(long *)(lVar5 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_075a1c74(lVar8,unaff_x21,**(undefined8 **)(lVar4 + 0xb8),0);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_092860c0) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_072cc820;
    }
  }
LAB_072cc804:
  puVar1 = (undefined8 *)FUN_040b1e00(in_stack_00000018,*(long *)PTR_DAT_092860c0,0);
LAB_072cc820:
  (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
  return;
}


