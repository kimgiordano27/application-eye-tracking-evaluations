/*
FUNCTION_NAME: FUN_0381622c
ENTRY_POINT: 0381622c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_11;telemetry_or_network_hits_3
*/


undefined1  [16]
FUN_0381622c(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,
            undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar8;
  
  if ((DAT_03ff83cd & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03da5cf8);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff83cd = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  plVar7 = *(long **)(param_4 + 0x48);
  if (plVar7 == (long *)0x0) {
LAB_03816320:
    lVar2 = FUN_0391c27c(param_4,0);
  }
  else {
    lVar2 = *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if ((*(byte *)(lVar2 + 0x130) <= *(byte *)(*plVar7 + 0x130)) &&
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) == lVar2)) {
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar3 = FUN_0391f968(plVar7,0,0);
      if ((uVar3 & 1) == 0) goto LAB_03816320;
      plVar7 = *(long **)(param_4 + 0x48);
      if (plVar7 == (long *)0x0) goto LAB_03816414;
    }
    lVar2 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_03da5cf8) {
          puVar4 = (undefined8 *)(lVar2 + (long)(*piVar5 + 7) * 0x10 + 0x138);
          goto LAB_03816344;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(plVar7,*(long *)PTR_DAT_03da5cf8,7);
LAB_03816344:
    lVar2 = (*(code *)*puVar4)(plVar7,param_5,puVar4[1]);
  }
  if (lVar2 != 0) {
    auVar9 = FUN_03928d34(lVar2,0);
    uVar10 = auVar9._8_8_;
    uVar8 = auVar9._0_8_;
    uVar6 = *(undefined8 *)(param_4 + 0x40);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03922f24(uVar6,0,0);
    auVar9._8_8_ = uVar10;
    auVar9._0_8_ = uVar8;
    if ((uVar3 & 1) == 0) {
      if ((*(long *)(param_4 + 0x40) == 0) ||
         (lVar2 = FUN_0391c2b8(*(long *)(param_4 + 0x40),0), lVar2 == 0)) goto LAB_03816414;
      uVar3 = FUN_0391fbf0(lVar2,0);
      auVar9._8_8_ = uVar10;
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_4 + 0x40) == 0) goto LAB_03816414;
        uVar3 = FUN_0395b350(*(long *)(param_4 + 0x40),0);
        auVar9._8_8_ = uVar10;
        if ((uVar3 & 1) != 0) {
          if (*(long *)(param_4 + 0x40) == 0) goto LAB_03816414;
          auVar9 = FUN_0395b4d8(uVar8,param_2,param_3,*(long *)(param_4 + 0x40),0);
        }
      }
    }
    return auVar9;
  }
LAB_03816414:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


