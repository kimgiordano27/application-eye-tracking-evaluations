/*
FUNCTION_NAME: FUN_0357110c
ENTRY_POINT: 0357110c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0357110c(undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_48;
  undefined8 local_38;
  
  puVar4 = *(undefined8 **)(param_4 + 0x38);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_02dcfd74(param_4);
    puVar4 = *(undefined8 **)(param_4 + 0x38);
  }
  local_38 = 0;
  local_48 = 0;
  uVar6 = *puVar4;
  if (*(int *)(DAT_06dcfe48 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar6 = FUN_054f73b4(uVar6,0);
  uVar1 = FUN_063ddb38(uVar6,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (param_2 == (long *)0x0) {
LAB_0357138c:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar6 = (**(code **)(*param_2 + 0x218))(param_2,param_3,*(undefined8 *)(*param_2 + 0x220));
  lVar2 = *(long *)(*(long *)(param_4 + 0x38) + 0x30);
  local_38 = uVar6;
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar7 = *(long *)(*(long *)(param_4 + 0x38) + 0x28);
  lVar2 = *(long *)(lVar7 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar2 = *(long *)(lVar7 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18();
  }
  lVar7 = *(long *)(param_4 + 0x38);
  if (*(char *)(*(long *)(lVar2 + 0xb8) + 0xc) != '\0') {
    plVar3 = (long *)FUN_034ea284(*(undefined8 *)(lVar7 + 0x38));
    if (plVar3 == (long *)0x0) goto LAB_0357138c;
    uVar1 = (**(code **)(*plVar3 + 0x1b8))(plVar3,uVar6,0,*(undefined8 *)(*plVar3 + 0x1c0));
    if ((uVar1 & 1) != 0) goto LAB_035712fc;
    lVar7 = *(long *)(param_4 + 0x38);
  }
  uVar1 = FUN_037c50b8(&local_38,&local_48,*(undefined8 *)(lVar7 + 0x58));
  uVar6 = local_48;
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(*(long *)(param_4 + 0x38) + 0x68);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02dcfd18(lVar2);
    }
    plVar3 = (long *)thunk_FUN_02dd3048(uVar6,lVar2);
    if (plVar3 == (long *)0x0) {
      System_Array__IndexOf<OVRPlugin_Qpl_Annotation_Builder_Entry>
                (param_1,&local_38,0,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x78));
      return;
    }
    lVar2 = *plVar3;
    lVar7 = *(long *)(*(long *)(param_4 + 0x38) + 0x70);
    uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)(lVar7 + 0x20)) {
          lVar2 = lVar2 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar7 + 0x50)) * 0x10 + 0x138;
          goto LAB_03571348;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    lVar2 = FUN_02dd004c(plVar3);
LAB_03571348:
    lVar2 = thunk_FUN_02db5310(*(undefined8 *)(lVar2 + 8),lVar7);
    (**(code **)(lVar2 + 8))(plVar3,param_1,param_2,param_3,&local_38,lVar2);
    return;
  }
LAB_035712fc:
  uVar6 = FUN_044913fc(param_2,*(undefined8 *)(*(long *)(param_4 + 0x38) + 0x80));
  FUN_0653b650(param_1,uVar6,0);
  return;
}


