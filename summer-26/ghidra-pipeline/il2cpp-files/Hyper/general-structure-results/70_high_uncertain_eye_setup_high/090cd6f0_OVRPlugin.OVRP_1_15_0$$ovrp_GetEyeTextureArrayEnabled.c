/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_GetEyeTextureArrayEnabled
ENTRY_POINT: 090cd6f0
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_15_0__ovrp_GetEyeTextureArrayEnabled(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *unaff_x20;
  
  iVar1 = (**(code **)(param_1 + 0x1c8))(param_2,*(undefined8 *)(param_1 + 0x1d0));
  lVar10 = unaff_x20[0xe];
  if (lVar10 != 0) {
    if (iVar1 == *(int *)(lVar10 + 0x10)) {
      return;
    }
    uVar3 = FUN_084e1388();
    uVar2 = (**(code **)(*unaff_x20 + 0x1c8))();
    plVar4 = (long *)FUN_090c9eec();
    if (plVar4 == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0ac76120) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_090cd7c4;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_04980e68(plVar4,*(long *)PTR_DAT_0ac76120,0);
LAB_090cd7c4:
      uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if (plVar4 == (long *)0x0) goto LAB_090cd800;
    }
    FUN_090cd804(lVar10,uVar3,uVar2,uVar6);
    return;
  }
LAB_090cd800:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


