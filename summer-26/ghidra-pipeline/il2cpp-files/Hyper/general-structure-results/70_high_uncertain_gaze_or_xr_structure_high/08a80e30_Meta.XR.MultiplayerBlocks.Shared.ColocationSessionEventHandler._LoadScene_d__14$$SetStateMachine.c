/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<LoadScene>d__14$$SetStateMachine
ENTRY_POINT: 08a80e30
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<LoadScene>d__14__SetStateMachine
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  long *plVar8;
  
  if ((*(byte *)(unaff_x20 + 0x66f) & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac09ce8);
    FUN_04947ee4(PTR_DAT_0ac54788);
    FUN_04947ee4(PTR_DAT_0ac54790);
    FUN_04947ee4(PTR_DAT_0ac4c9f0);
    *(undefined1 *)(unaff_x20 + 0x66f) = 1;
  }
  if (*(char *)(param_1 + 0x70) != '\0') {
    return;
  }
  XRActionMap_DeoPlayerActions__Get(param_1,0);
  if (*(long *)(param_1 + 0x140) != 0) {
    FUN_08a3ddb4(*(long *)(param_1 + 0x140),0);
  }
  puVar1 = PTR_DAT_0ac09ce8;
  plVar8 = *(long **)(param_1 + 0x10);
  uVar3 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac09ce8);
  FUN_06052aa8(uVar3,param_1,*(undefined8 *)PTR_DAT_0ac54788,0);
  puVar2 = PTR_DAT_0ac4c9f0;
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0ac4c9f0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x1a) * 0x10 + 0x138);
          goto LAB_08a80f34;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac4c9f0,0x1a);
LAB_08a80f34:
    (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
    plVar8 = *(long **)(param_1 + 0x10);
    uVar3 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
    FUN_06052aa8(uVar3,param_1,*(undefined8 *)PTR_DAT_0ac54790,0);
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x1c) * 0x10 + 0x138);
            goto LAB_08a80fc0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_04980e68(plVar8,*(long *)puVar2,0x1c);
LAB_08a80fc0:
                    /* WARNING: Could not recover jumptable at 0x08a80fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


