/*
FUNCTION_NAME: FUN_0523faac
ENTRY_POINT: 0523faac
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0523faac(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  undefined8 local_38;
  undefined8 local_28;
  
  if ((*(long *)(param_4 + 0x38) == 0) &&
     (FUN_04077588(&DAT_094b5930), *(long *)(param_4 + 0x38) == 0)) {
    FUN_040b1b28(param_4);
  }
  local_28 = 0;
  local_38 = 0;
  if (param_2 == (long *)0x0) {
LAB_0523fcec:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  local_28 = (**(code **)(*param_2 + 0x218))(param_2,param_3,*(undefined8 *)(*param_2 + 0x220));
  if (*(int *)(param_1 + 0x98) <= *(int *)(param_1 + 0xb8)) {
    uVar4 = FUN_0621115c(param_2,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x20));
    *(undefined8 *)(param_1 + 0xa0) = uVar4;
    thunk_FUN_040ec700((undefined8 *)(param_1 + 0xa0),uVar4);
    return;
  }
  uVar1 = FUN_0514d610(&local_28,&local_38,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x28));
  if ((uVar1 & 1) == 0) {
    *(undefined4 *)(param_1 + 0xa8) = 4;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_4 + 0x38) + 0x40);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar7 = *(long *)(*(long *)(param_4 + 0x38) + 0x38);
    lVar2 = *(long *)(lVar7 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar2 = *(long *)(lVar7 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_040b1acc();
    }
    lVar7 = *(long *)(param_4 + 0x38);
    if (*(char *)(*(long *)(lVar2 + 0xb8) + 0xc) != '\0') {
      plVar3 = (long *)FUN_04a84cd0(*(undefined8 *)(lVar7 + 0x48));
      if (plVar3 == (long *)0x0) goto LAB_0523fcec;
      uVar1 = (**(code **)(*plVar3 + 0x1b8))(plVar3,local_28,0,*(undefined8 *)(*plVar3 + 0x1c0));
      lVar7 = *(long *)(param_4 + 0x38);
      if ((uVar1 & 1) != 0) {
        uVar4 = FUN_0621115c(param_2,*(undefined8 *)(lVar7 + 0x20));
        plVar3 = (long *)FUN_08a595bc(uVar4,0);
        if (plVar3 == (long *)0x0) {
          return;
        }
        lVar2 = *plVar3;
        uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar1 != 0) {
          piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092b8d88) {
              puVar5 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0523fcc8;
            }
            uVar1 = uVar1 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar1 != 0);
        }
        puVar5 = (undefined8 *)FUN_040b1e00(plVar3,*(long *)PTR_DAT_092b8d88,0);
LAB_0523fcc8:
        (*(code *)*puVar5)(plVar3,param_1,puVar5[1]);
        return;
      }
    }
    System_Runtime_CompilerServices_Unsafe__Add<OVRPlugin_Qpl_Annotation>
              (param_1,&local_28,0,*(undefined8 *)(lVar7 + 0x68));
  }
  return;
}


