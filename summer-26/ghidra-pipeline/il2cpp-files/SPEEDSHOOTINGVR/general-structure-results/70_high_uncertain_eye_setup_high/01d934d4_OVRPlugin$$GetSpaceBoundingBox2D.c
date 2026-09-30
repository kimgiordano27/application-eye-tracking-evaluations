/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundingBox2D
ENTRY_POINT: 01d934d4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01d936dc) */
/* WARNING: Removing unreachable block (ram,0x01d93924) */
/* WARNING: Removing unreachable block (ram,0x01d94010) */

undefined8 OVRPlugin__GetSpaceBoundingBox2D(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long *unaff_x26;
  long unaff_x28;
  long lVar10;
  long in_stack_00000000;
  long in_stack_00000008;
  
code_r0x01d934d4:
  uVar4 = FUN_01cd0fe8(param_1,0);
  if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar5 = FUN_01d611c4();
  if ((uVar5 & 1) != 0) {
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar5 = (**(code **)(*unaff_x19 + 0x288))();
    if ((uVar5 & 1) == 0) goto LAB_01d93414;
  }
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar5 = FUN_0146ab1c();
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_02354070 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar10 = FUN_01d92954(uVar4);
    if (unaff_w24 == 0) goto LAB_01d93590;
LAB_01d93558:
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (*(char *)(lVar10 + 0x15) != '\0') goto LAB_01d93594;
  }
  else {
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    lVar10 = *(long *)(in_stack_00000008 + 0x10);
    if (unaff_w24 != 0) goto LAB_01d93558;
LAB_01d93590:
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
LAB_01d93594:
    if (((*(char *)(lVar10 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
       (*(int *)(in_stack_00000008 + 0x18) == unaff_w24)) {
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      lVar6 = *(long *)(unaff_x23 + 0x10);
      *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
        plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
        *plVar7 = unaff_x28;
        thunk_FUN_0106e12c(plVar7,unaff_x28);
      }
      else {
        FUN_017d3030();
      }
    }
  }
  if (in_stack_00000008 == 0) {
    lVar6 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_023598d8);
    *(long *)(lVar6 + 0x10) = lVar10;
    thunk_FUN_0106e12c((long *)(lVar6 + 0x10),lVar10);
    *(int *)(lVar6 + 0x18) = unaff_w24;
    FUN_01468fe8();
  }
LAB_01d93414:
  do {
    lVar10 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x20) {
          puVar3 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_01d93460;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0103c348(unaff_x21,*unaff_x20,0);
LAB_01d93460:
    uVar5 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
    if ((uVar5 & 1) != 0) break;
    if (unaff_x21 != (long *)0x0) {
      lVar10 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0234bef0) {
            puVar3 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_01d936c4;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0103c348(unaff_x21,*(long *)PTR_DAT_0234bef0,0);
LAB_01d936c4:
      (*(code *)*puVar3)(unaff_x21,puVar3[1]);
    }
    puVar2 = PTR_DAT_02354070;
    if (*(int *)(*(long *)PTR_DAT_02354070 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    in_stack_00000000 = FUN_01d92590(in_stack_00000000);
    if (in_stack_00000000 == 0) {
      if (unaff_x23 != 0) {
        uVar4 = FUN_017d49bc();
        return uVar4;
      }
LAB_01d9400c:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    unaff_w24 = unaff_w24 + 1;
    plVar7 = (long *)FUN_01d92da8(in_stack_00000000);
    if (plVar7 == (long *)0x0) goto LAB_01d9400c;
    lVar10 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_02359980) {
          puVar3 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_01d93400;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_0103c348(plVar7,*(long *)PTR_DAT_02359980,0);
LAB_01d93400:
    unaff_x21 = (long *)(*(code *)*puVar3)(plVar7,puVar3[1]);
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
  } while( true );
  lVar10 = *unaff_x21;
  uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x26) {
        puVar3 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_01d934bc;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0103c348(unaff_x21,*unaff_x26,0);
LAB_01d934bc:
  param_1 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
  unaff_x28 = param_1;
  if (param_1 == 0) {
    thunk_FUN_010303a8(PTR_DAT_02359920);
    uVar4 = thunk_FUN_010400dc();
    uVar8 = thunk_FUN_010303a8(PTR_DAT_023599b8);
    FUN_01cc6734(uVar4,uVar8,0);
    uVar8 = thunk_FUN_010303a8(PTR_DAT_023599c0);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar4,uVar8);
  }
  goto code_r0x01d934d4;
}


