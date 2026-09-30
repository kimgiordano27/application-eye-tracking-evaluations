/*
FUNCTION_NAME: FUN_0517c04c
ENTRY_POINT: 0517c04c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
FUN_0517c04c(undefined8 param_1,long *param_2,undefined4 *param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 uVar7;
  int *piVar8;
  long lVar9;
  long local_50 [3];
  long *local_38;
  
  lVar6 = *(long *)(param_5 + 0x38);
  if (lVar6 == 0) {
    FUN_04077588(PTR_DAT_092b8d88);
    FUN_04077588(PTR_DAT_092b8d20);
    lVar6 = *(long *)(param_5 + 0x38);
    if (lVar6 == 0) {
      FUN_040b1b28(param_5);
      lVar6 = *(long *)(param_5 + 0x38);
    }
  }
  local_38 = (long *)0x0;
  lVar6 = *(long *)(lVar6 + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar9 = **(long **)(param_5 + 0x38);
  lVar6 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar6 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  if (*(char *)(*(long *)(lVar6 + 0xb8) + 0xb) == '\0') {
LAB_0517c434:
    uVar3 = 0;
    uVar7 = 2;
    goto LAB_0517c48c;
  }
  lVar6 = *(long *)(*(long *)(param_5 + 0x38) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar9 = *(long *)(*(long *)(param_5 + 0x38) + 0x10);
  lVar6 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar6 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar9 = *(long *)(param_5 + 0x38);
  if (*(char *)(*(long *)(lVar6 + 0xb8) + 0xc) != '\0') {
    plVar1 = (long *)FUN_04f1eac8(*(undefined8 *)(lVar9 + 0x18));
    if (plVar1 == (long *)0x0) goto LAB_0517c524;
    uVar2 = (**(code **)(*plVar1 + 0x1b8))(plVar1,*param_2,0,*(undefined8 *)(*plVar1 + 0x1c0));
    if ((uVar2 & 1) != 0) {
      uVar3 = 0;
      uVar7 = 1;
      goto LAB_0517c48c;
    }
    lVar9 = *(long *)(param_5 + 0x38);
  }
  lVar6 = *(long *)(lVar9 + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar9 = *(long *)(*(long *)(param_5 + 0x38) + 0x48);
  lVar6 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar6 = *(long *)(lVar9 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  if (**(char **)(lVar6 + 0xb8) == '\0') {
    uVar3 = *(undefined8 *)(*(long *)(param_5 + 0x38) + 0x50);
    if (*(int *)(*(long *)(PTR_DAT_09285980 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar3 = FUN_0768890c(uVar3,0);
    local_50[0] = *(long *)(*(long *)(param_5 + 0x38) + 0x38);
    if ((*(ushort *)(local_50[0] + 0x135) & 1) == 0) {
      local_50[0] = FUN_040b1acc(local_50[0]);
    }
    local_50[2] = *param_2;
    local_50[1] = 0xffffffffffffffff;
    uVar4 = thunk_FUN_0408781c(local_50,0);
    uVar2 = FUN_07692be0(uVar3,uVar4,0);
    if ((uVar2 & 1) == 0)
    goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__AlignOf<OVRPlugin_Vector4f>;
    lVar6 = *(long *)(*(long *)(param_5 + 0x38) + 0x38);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    local_50[2] = *param_2;
    local_50[1] = 0xffffffffffffffff;
    local_50[0] = lVar6;
    uVar3 = thunk_FUN_0408781c(local_50,0);
    uVar2 = FUN_08a67ec8(uVar3,0);
    if ((uVar2 & 1) == 0) goto LAB_0517c434;
    lVar6 = *(long *)(*(long *)(param_5 + 0x38) + 0x38);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    local_50[2] = *param_2;
    local_50[1] = 0xffffffffffffffff;
    local_50[0] = lVar6;
    uVar3 = thunk_FUN_0408781c(local_50,0);
    if (*(int *)(*(long *)PTR_DAT_092b8d20 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_092b8d20);
    }
    plVar1 = (long *)UnityEngine_UIElements_UIEventRegistration__TakeCapture(uVar3,0);
    if (plVar1 != (long *)0x0) {
      local_50[0] = *param_2;
      local_38 = (long *)thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(param_5 + 0x38) + 0x38),
                                            local_50);
      lVar6 = *plVar1;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_092b8d88) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_0517c4b4;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_040b1e00(plVar1,*(long *)PTR_DAT_092b8d88,1);
LAB_0517c4b4:
      (*(code *)*puVar5)(plVar1,param_1,&local_38,puVar5[1]);
      plVar1 = local_38;
      lVar6 = *(long *)(*(long *)(param_5 + 0x38) + 0x38);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_040b1acc(lVar6);
      }
      if (plVar1 == (long *)0x0) {
LAB_0517c524:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (*(long *)(*plVar1 + 0x40) != *(long *)(lVar6 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_04077bb0(plVar1);
      }
      plVar1 = (long *)thunk_FUN_040b5044();
      uVar7 = 0;
      uVar3 = 1;
      *param_2 = *plVar1;
      goto LAB_0517c48c;
    }
  }
  else {
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__AlignOf<OVRPlugin_Vector4f>:
    if (*(int *)(*(long *)PTR_DAT_092b8d20 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar6 = FUN_051619d0(*(undefined8 *)(*(long *)(param_5 + 0x38) + 0x60));
    if (lVar6 != 0) {
      FUN_0514649c(lVar6,param_1,param_2,*(undefined8 *)(*(long *)(param_5 + 0x38) + 0x70));
      uVar7 = 0;
      uVar3 = 1;
      goto LAB_0517c48c;
    }
  }
  uVar3 = 0;
  uVar7 = 3;
LAB_0517c48c:
  *param_3 = uVar7;
  return uVar3;
}


