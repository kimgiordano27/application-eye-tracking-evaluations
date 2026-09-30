/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$WriteArrayElement<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 0518084c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_SpaceQueryResult>
          (long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined4 in_stack_00000020;
  long *in_stack_00000028;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar7 = *(long *)(unaff_x21 + 0x38);
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 0xc) != '\0') {
    plVar2 = (long *)FUN_04ed8c74(*(undefined8 *)(lVar7 + 0x18));
    if (plVar2 == (long *)0x0) goto LAB_05180bfc;
    uVar3 = (**(code **)(*plVar2 + 0x1b8))
                      (plVar2,*unaff_x20,(int)unaff_x20[1],0,0,*(undefined8 *)(*plVar2 + 0x1c0));
    if ((uVar3 & 1) != 0) {
      uVar4 = 0;
      uVar8 = 1;
      goto FUN_05180b5c;
    }
    lVar7 = *(long *)(unaff_x21 + 0x38);
  }
  lVar1 = *(long *)(lVar7 + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar7 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x48);
  lVar1 = *(long *)(lVar7 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar1 = *(long *)(lVar7 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
  if (**(char **)(lVar1 + 0xb8) == '\0') {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x50);
    if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar4 = FUN_0768890c(uVar4,0);
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_040b1acc(lVar1);
    }
    in_stack_00000018 = *unaff_x20;
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000020 = (undefined4)unaff_x20[1];
    in_stack_00000008 = lVar1;
    uVar5 = thunk_FUN_0408781c(&stack0x00000008,0);
    uVar3 = FUN_07692be0(uVar4,uVar5,0);
    if ((uVar3 & 1) == 0) goto LAB_05180b10;
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_040b1acc();
    }
    in_stack_00000018 = *unaff_x20;
    in_stack_00000020 = (undefined4)unaff_x20[1];
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000008 = lVar1;
    uVar4 = thunk_FUN_0408781c(&stack0x00000008,0);
    uVar3 = FUN_08a67ec8(uVar4,0);
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      uVar8 = 2;
      goto FUN_05180b5c;
    }
    lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_040b1acc();
    }
    in_stack_00000018 = *unaff_x20;
    in_stack_00000020 = (undefined4)unaff_x20[1];
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000008 = lVar1;
    uVar4 = thunk_FUN_0408781c(&stack0x00000008,0);
    if (*(int *)(*(long *)PTR_DAT_092b8d20 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_092b8d20);
    }
    plVar2 = (long *)UnityEngine_UIElements_UIEventRegistration__TakeCapture(uVar4,0);
    if (plVar2 != (long *)0x0) {
      in_stack_00000008 = *unaff_x20;
      in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,(int)unaff_x20[1]);
      in_stack_00000028 =
           (long *)thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x38),
                                      &stack0x00000008);
      lVar1 = *plVar2;
      uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_092b8d88) {
            puVar6 = (undefined8 *)(lVar1 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_05180b84;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)FUN_040b1e00(plVar2,*(long *)PTR_DAT_092b8d88,1);
LAB_05180b84:
      (*(code *)*puVar6)(plVar2);
      plVar2 = in_stack_00000028;
      lVar1 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x38);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_040b1acc(lVar1);
      }
      if (plVar2 == (long *)0x0) {
LAB_05180bfc:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(long *)(*plVar2 + 0x40) != *(long *)(lVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0(plVar2);
      }
      plVar2 = (long *)thunk_FUN_040b5044();
      uVar8 = 0;
      uVar4 = 1;
      lVar1 = plVar2[1];
      *unaff_x20 = *plVar2;
      *(int *)(unaff_x20 + 1) = (int)lVar1;
      goto FUN_05180b5c;
    }
  }
  else {
LAB_05180b10:
    if (*(int *)(*(long *)PTR_DAT_092b8d20 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar1 = FUN_05162d08(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x60));
    if (lVar1 != 0) {
      FUN_05149dcc();
      uVar8 = 0;
      uVar4 = 1;
      goto FUN_05180b5c;
    }
  }
  uVar4 = 0;
  uVar8 = 3;
FUN_05180b5c:
  *unaff_x19 = uVar8;
  return uVar4;
}


