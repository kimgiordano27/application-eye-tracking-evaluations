/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$Update
ENTRY_POINT: 04a3d888
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__Update
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  
  if ((DAT_066c6a1b & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06313588);
    FUN_02b3c81c(PTR_DAT_06322b98);
    FUN_02b3c81c(PTR_DAT_06322688);
    FUN_02b3c81c(PTR_DAT_06322ba0);
    FUN_02b3c81c(PTR_DAT_06320978);
    DAT_066c6a1b = 1;
  }
  plVar7 = (long *)(param_1 + 0x40);
  if (*plVar7 == 0) {
    return;
  }
  iVar2 = FUN_04c8d044(*plVar7,*(undefined8 *)PTR_DAT_06322ba0,0);
  puVar1 = PTR_DAT_06312310;
  lVar8 = *plVar7;
  uVar10 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x110);
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44(*(long *)(PTR_DAT_06312310 + 0xe0));
  }
  uVar10 = FUN_04d8a7b0(uVar10,0);
  if (lVar8 != 0) {
    lVar8 = FUN_04c8ae78(lVar8,*(undefined8 *)PTR_DAT_06322688,uVar10,0);
    lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02b76218(lVar11);
    }
    if (lVar8 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_02b79548(lVar8,lVar11);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(lVar8,lVar11);
      }
    }
    lVar11 = *(long *)(param_3 + 0x20);
    *(long *)(param_1 + 0x30) = lVar4;
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_02b76218(lVar11);
    }
    if (lVar8 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_02b79548(lVar8,lVar11);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(lVar8,lVar11);
      }
    }
    thunk_FUN_02bb0e9c((long *)(param_1 + 0x30),lVar4);
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    if (iVar2 == 0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x10),0);
    }
    else {
      uVar10 = FUN_02b3c908(*(undefined8 *)PTR_DAT_06313588,iVar2);
      *(undefined8 *)(param_1 + 0x10) = uVar10;
      thunk_FUN_02bb0e9c();
      lVar8 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x118);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02b76218();
      }
      uVar10 = FUN_02b3c908(lVar8,iVar2);
      *(undefined8 *)(param_1 + 0x18) = uVar10;
      thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x18),uVar10);
      lVar8 = *(long *)(param_1 + 0x40);
      uVar10 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x108);
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar10 = FUN_04d8a7b0(uVar10,0);
      if (lVar8 == 0) goto LAB_04a3dbc0;
      lVar8 = FUN_04c8ae78(lVar8,*(undefined8 *)PTR_DAT_06322b98,uVar10,0);
      lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xc0);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_02b76218(lVar11);
      }
      if (lVar8 == 0) {
        thunk_FUN_02ba3594(PTR_DAT_06320988);
        uVar10 = thunk_FUN_02b79644();
        uVar5 = thunk_FUN_02ba3594(PTR_DAT_06322ba8);
        FUN_04c82410(uVar10,uVar5,0);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar10,param_3);
      }
      lVar4 = thunk_FUN_02b79548(lVar8,lVar11);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3ce44(lVar8,lVar11);
      }
      if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
        uVar9 = 0;
        uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        puVar12 = (undefined8 *)(lVar4 + 0x28);
        do {
          if (uVar6 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          FUN_04a3f3e0(param_1,puVar12[-1],*puVar12,
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xa8));
          uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
          uVar9 = uVar9 + 1;
          puVar12 = puVar12 + 2;
        } while ((long)uVar9 < (long)(int)*(uint *)(lVar4 + 0x18));
      }
    }
    if (*plVar7 != 0) {
      uVar3 = FUN_04c8d044(*plVar7,*(undefined8 *)PTR_DAT_06320978,0);
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x38) = uVar3;
      thunk_FUN_02bb0e9c(plVar7,0);
      return;
    }
  }
LAB_04a3dbc0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


