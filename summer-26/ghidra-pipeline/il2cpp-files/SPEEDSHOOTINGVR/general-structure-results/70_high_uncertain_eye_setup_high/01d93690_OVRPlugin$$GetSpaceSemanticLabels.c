/*
FUNCTION_NAME: OVRPlugin$$GetSpaceSemanticLabels
ENTRY_POINT: 01d93690
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__GetSpaceSemanticLabels(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong in_x9;
  int *piVar10;
  int *in_x10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long *unaff_x26;
  long unaff_x27;
  int unaff_w28;
  long lVar11;
  long in_stack_00000000;
  long in_stack_00000008;
  
  do {
    do {
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
        goto LAB_01d936c4;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar4 = (undefined8 *)FUN_0103c348(unaff_x21,param_3,0);
LAB_01d936c4:
      (*(code *)*puVar4)(unaff_x21,puVar4[1]);
      do {
        puVar2 = PTR_DAT_02354070;
        if (unaff_x27 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc52c(unaff_x27);
        }
        if ((unaff_w28 != 0x2d) && (unaff_w28 != 0)) {
          return unaff_x19;
        }
        if (*(int *)(*(long *)PTR_DAT_02354070 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        in_stack_00000000 = FUN_01d92590(in_stack_00000000);
        if (in_stack_00000000 == 0) {
          if (unaff_x23 != 0) {
            plVar5 = (long *)FUN_017d49bc();
            return plVar5;
          }
LAB_01d9400c:
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        unaff_w24 = unaff_w24 + 1;
        plVar5 = (long *)FUN_01d92da8(in_stack_00000000);
        if (plVar5 == (long *)0x0) goto LAB_01d9400c;
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_02359980) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01d93400;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_0103c348(plVar5,*(long *)PTR_DAT_02359980,0);
LAB_01d93400:
        unaff_x21 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
        if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc534();
        }
LAB_01d93414:
        lVar7 = *unaff_x21;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x20) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01d93460;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_0103c348(unaff_x21,*unaff_x20,0);
LAB_01d93460:
        uVar9 = (*(code *)*puVar4)(unaff_x21,puVar4[1]);
        if ((uVar9 & 1) != 0) {
          lVar7 = *unaff_x21;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *unaff_x26) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_01d934bc;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar4 = (undefined8 *)FUN_0103c348(unaff_x21,*unaff_x26,0);
LAB_01d934bc:
          lVar7 = (*(code *)*puVar4)(unaff_x21,puVar4[1]);
          if (lVar7 == 0) {
            thunk_FUN_010303a8(PTR_DAT_02359920);
            uVar3 = thunk_FUN_010400dc();
            uVar6 = thunk_FUN_010303a8(PTR_DAT_023599b8);
            FUN_01cc6734(uVar3,uVar6,0);
            uVar6 = thunk_FUN_010303a8(PTR_DAT_023599c0);
                    /* WARNING: Subroutine does not return */
            FUN_00fdc400(uVar3,uVar6);
          }
          uVar3 = FUN_01cd0fe8(lVar7,0);
          if (*(int *)(*(long *)PTR_DAT_0234bc58 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          uVar9 = FUN_01d611c4();
          if ((uVar9 & 1) != 0) goto code_r0x01d9350c;
          goto LAB_01d9352c;
        }
        unaff_x27 = 0;
        unaff_w28 = 0x2d;
      } while (unaff_x21 == (long *)0x0);
      param_1 = *unaff_x21;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      param_3 = *(long *)PTR_DAT_0234bef0;
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
code_r0x01d9350c:
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar9 = (**(code **)(*unaff_x19 + 0x288))();
  if ((uVar9 & 1) == 0) goto LAB_01d93414;
LAB_01d9352c:
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar9 = FUN_0146ab1c();
  if ((uVar9 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_02354070 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar11 = FUN_01d92954(uVar3);
    if (unaff_w24 == 0) goto LAB_01d93590;
LAB_01d93558:
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    if (*(char *)(lVar11 + 0x15) == '\0') goto LAB_01d93618;
  }
  else {
    if (in_stack_00000008 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    lVar11 = *(long *)(in_stack_00000008 + 0x10);
    if (unaff_w24 != 0) goto LAB_01d93558;
LAB_01d93590:
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
  }
  if (((*(char *)(lVar11 + 0x14) != '\0') || (in_stack_00000008 == 0)) ||
     (*(int *)(in_stack_00000008 + 0x18) == unaff_w24)) {
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    lVar8 = *(long *)(unaff_x23 + 0x10);
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
      *plVar5 = lVar7;
      thunk_FUN_0106e12c(plVar5,lVar7);
    }
    else {
      FUN_017d3030();
    }
  }
LAB_01d93618:
  if (in_stack_00000008 == 0) {
    lVar7 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_023598d8);
    *(long *)(lVar7 + 0x10) = lVar11;
    thunk_FUN_0106e12c((long *)(lVar7 + 0x10),lVar11);
    *(int *)(lVar7 + 0x18) = unaff_w24;
    FUN_01468fe8();
  }
  goto LAB_01d93414;
}


