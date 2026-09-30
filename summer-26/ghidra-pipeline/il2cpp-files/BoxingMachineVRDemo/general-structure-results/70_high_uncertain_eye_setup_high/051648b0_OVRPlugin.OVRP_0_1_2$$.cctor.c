/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$.cctor
ENTRY_POINT: 051648b0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 OVRPlugin_OVRP_0_1_2___cctor(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  
  lVar2 = (**(code **)(param_1 + (long)(*in_x10 + 8) * 0x10 + 0x138))();
  puVar1 = PTR_DAT_0676bca0;
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar2 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_05164930;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05164930:
    uVar4 = (*(code *)*puVar3)();
    uVar7 = thunk_FUN_04e8bd3c(uVar4,*(undefined8 *)puVar1,0);
    if ((uVar7 & 1) != 0) {
      lVar2 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x22) {
            puVar3 = (undefined8 *)(lVar2 + (long)(*piVar8 + 8) * 0x10 + 0x138);
            goto LAB_0516499c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_0516499c:
      uVar4 = (*(code *)*puVar3)();
      uVar7 = thunk_FUN_04e8bd3c(uVar4,*(undefined8 *)PTR_DAT_0676bc98,0);
      uVar4 = 0;
      if ((uVar7 & 1) != 0) goto OVRPlugin_OVRP_0_1_3___cctor;
    }
    lVar2 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar2 + (long)(*piVar8 + 8) * 0x10 + 0x138);
          goto LAB_05164a14;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05164a14:
    (*(code *)*puVar3)();
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar4 = (**(code **)(*unaff_x20 + 0x248))();
  }
OVRPlugin_OVRP_0_1_3___cctor:
  puVar1 = PTR_DAT_06782548;
  uVar5 = FUN_050f0eb8(uVar4,0);
  lVar2 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x22) {
        puVar3 = (undefined8 *)(lVar2 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_05164aa8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05164aa8:
  uVar6 = (*(code *)*puVar3)();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar1);
  }
  uVar6 = FUN_0566e384(uVar6,0);
  if ((uVar5 & 1) != 0) {
    return uVar6;
  }
  uVar4 = FUN_04e8db00(uVar4,*(undefined8 *)PTR_DAT_067646b8,uVar6,0);
  return uVar4;
}


