/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_3$$ovrp_GetNodeVelocity
ENTRY_POINT: 05164938
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRPlugin_OVRP_0_1_3__ovrp_GetNodeVelocity(code *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  
  uVar2 = (*param_1)();
  uVar3 = thunk_FUN_04e8bd3c(uVar2,*unaff_x21,0);
  if ((uVar3 & 1) != 0) {
    lVar7 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 8) * 0x10 + 0x138);
          goto LAB_0516499c;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_0516499c:
    uVar2 = (*(code *)*puVar4)();
    uVar3 = thunk_FUN_04e8bd3c(uVar2,*(undefined8 *)PTR_DAT_0676bc98,0);
    uVar2 = 0;
    if ((uVar3 & 1) != 0) goto OVRPlugin_OVRP_0_1_3___cctor;
  }
  lVar7 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar3 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x22) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 8) * 0x10 + 0x138);
        goto LAB_05164a14;
      }
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_05164a14:
  (*(code *)*puVar4)();
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar2 = (**(code **)(*unaff_x20 + 0x248))();
OVRPlugin_OVRP_0_1_3___cctor:
  puVar1 = PTR_DAT_06782548;
  uVar5 = FUN_050f0eb8(uVar2,0);
  lVar7 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar3 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x22) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_05164aa8;
      }
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_05164aa8:
  uVar6 = (*(code *)*puVar4)();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar1);
  }
  uVar6 = FUN_0566e384(uVar6,0);
  if ((uVar5 & 1) != 0) {
    return uVar6;
  }
  uVar2 = FUN_04e8db00(uVar2,*(undefined8 *)PTR_DAT_067646b8,uVar6,0);
  return uVar2;
}


