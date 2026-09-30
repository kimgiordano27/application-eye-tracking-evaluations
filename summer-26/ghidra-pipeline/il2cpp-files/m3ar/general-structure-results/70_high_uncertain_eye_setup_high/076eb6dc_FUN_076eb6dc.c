/*
FUNCTION_NAME: FUN_076eb6dc
ENTRY_POINT: 076eb6dc
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_11;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_11
*/


void FUN_076eb6dc(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((DAT_0954830d & 1) == 0) {
    FUN_0403162c(PTR_DAT_08fad5f8);
    FUN_0403162c(PTR_DAT_08fae5e8);
    DAT_0954830d = 1;
  }
  if (*(char *)(param_5 + 0x28) == '\0') {
    lVar3 = FUN_085849e0(param_5,0);
    if (*(long *)(param_5 + 0x20) == 0) goto OVRPlugin_<>c__<_cctor>b__657_12;
    FUN_08598884(*(long *)(param_5 + 0x20),0);
  }
  else {
    if (*(long *)(param_5 + 0x20) == 0) goto OVRPlugin_<>c__<_cctor>b__657_12;
    FUN_08598884(*(long *)(param_5 + 0x20),0);
    puVar1 = PTR_DAT_08fad5f8;
    plVar7 = *(long **)(param_5 + 0x48);
    if (plVar7 == (long *)0x0) goto OVRPlugin_<>c__<_cctor>b__657_12;
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08fad5f8) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_076eb7c8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)PTR_DAT_08fad5f8,1);
LAB_076eb7c8:
    (*(code *)*puVar2)(plVar7,param_5 + 0x2c,puVar2[1]);
    lVar3 = FUN_085849e0(param_5,0);
    if (*(long *)(param_5 + 0x20) == 0) goto OVRPlugin_<>c__<_cctor>b__657_12;
    plVar7 = *(long **)(param_5 + 0x48);
    uVar8 = FUN_08598884(*(long *)(param_5 + 0x20),0);
    param_4 = FUN_08594c28(0);
    if (plVar7 == (long *)0x0) goto OVRPlugin_<>c__<_cctor>b__657_12;
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_076eb86c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)puVar1,2);
LAB_076eb86c:
    (*(code *)*puVar2)(uVar8,param_2,param_3,param_4,plVar7,puVar2[1]);
  }
  if (lVar3 == 0) goto OVRPlugin_<>c__<_cctor>b__657_12;
  FUN_0859895c(lVar3,0);
  puVar1 = PTR_DAT_08fae5e8;
  if (*(char *)(param_5 + 0x38) == '\0') {
    lVar3 = FUN_085849e0(param_5,0);
    if (*(long *)(param_5 + 0x20) == 0) goto OVRPlugin_<>c__<_cctor>b__657_12;
    FUN_08596a20(*(long *)(param_5 + 0x20),0);
  }
  else {
    plVar7 = *(long **)(param_5 + 0x50);
    if (plVar7 == (long *)0x0) goto OVRPlugin_<>c__<_cctor>b__657_12;
    lVar3 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08fae5e8) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_076eb92c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)PTR_DAT_08fae5e8,1);
LAB_076eb92c:
    (*(code *)*puVar2)(plVar7,param_5 + 0x3c,puVar2[1]);
    lVar3 = FUN_085849e0(param_5,0);
    if (*(long *)(param_5 + 0x20) == 0) goto OVRPlugin_<>c__<_cctor>b__657_12;
    plVar7 = *(long **)(param_5 + 0x50);
    uVar8 = FUN_08596a20(*(long *)(param_5 + 0x20),0);
    uVar9 = FUN_08594c28(0);
    if (plVar7 == (long *)0x0) goto OVRPlugin_<>c__<_cctor>b__657_12;
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_076eb9d4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)puVar1,2);
LAB_076eb9d4:
    (*(code *)*puVar2)(uVar8,param_2,param_3,param_4,uVar9,plVar7,puVar2[1]);
  }
  if (lVar3 != 0) {
    FUN_08598b14(lVar3,0);
    return;
  }
OVRPlugin_<>c__<_cctor>b__657_12:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


