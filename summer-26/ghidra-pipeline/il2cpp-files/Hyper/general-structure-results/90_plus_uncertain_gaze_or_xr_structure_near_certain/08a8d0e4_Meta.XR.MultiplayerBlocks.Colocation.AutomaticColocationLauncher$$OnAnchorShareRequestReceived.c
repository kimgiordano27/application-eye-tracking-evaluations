/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestReceived
ENTRY_POINT: 08a8d0e4
PROGRAM: Hyper-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestReceived
               (long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long lVar6;
  long *plVar7;
  long *unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  undefined8 *puVar8;
  undefined8 *unaff_x26;
  
  puVar8 = *(undefined8 **)(unaff_x25 + 0xcf0);
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x24) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar5 + 6) * 0x10 + 0x138);
        goto LAB_08a8d138;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_04980e68();
LAB_08a8d138:
  (*(code *)*puVar2)();
  lVar6 = *(long *)(unaff_x19 + 0x28);
  uVar3 = thunk_FUN_04983f60(*puVar8);
  FUN_05f901fc();
  puVar1 = PTR_DAT_0ac09cd0;
  if (lVar6 != 0) {
    FUN_08a28d04(lVar6,uVar3,0);
    FUN_08a8d2d0();
    thunk_FUN_04983f60(*unaff_x26);
    FUN_08cc3ad0();
    FUN_089956cc();
    uVar3 = FUN_08dea498(0);
    *(undefined8 *)(unaff_x19 + 0x140) = uVar3;
    thunk_FUN_049ee3d8(unaff_x19 + 0x140,uVar3);
    if (*(long *)(unaff_x19 + 0x140) == 0) {
      uVar3 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac44360);
      Nakama_Console_UserGroupListUserGroup__set_State(uVar3,0);
      *(undefined8 *)(unaff_x19 + 0x140) = uVar3;
      thunk_FUN_049ee3d8(unaff_x19 + 0x140,uVar3);
      FUN_08dea364(*(undefined8 *)(unaff_x19 + 0x140),0);
    }
    plVar7 = *(long **)(unaff_x19 + 0x10);
    uVar3 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
    FUN_05f878c4();
    if (plVar7 != (long *)0x0) {
      lVar6 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x22) {
            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar5 + 0x17) * 0x10 + 0x138);
            goto LAB_08a8d290;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar8 = (undefined8 *)FUN_04980e68(plVar7,*unaff_x22,0x17);
LAB_08a8d290:
      (*(code *)*puVar8)(plVar7,uVar3,puVar8[1]);
      plVar7 = *(long **)(unaff_x19 + 0x60);
      if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x08a8d2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


