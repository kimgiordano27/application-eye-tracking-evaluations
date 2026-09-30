/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestCompleted
ENTRY_POINT: 08a8d1a8
PROGRAM: Hyper-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestCompleted
               (void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long *unaff_x22;
  undefined8 *unaff_x24;
  
  FUN_08cc3ad0();
  FUN_089956cc();
  uVar1 = FUN_08dea498(0);
  *(undefined8 *)(unaff_x19 + 0x140) = uVar1;
  thunk_FUN_049ee3d8(unaff_x19 + 0x140,uVar1);
  if (*(long *)(unaff_x19 + 0x140) == 0) {
    uVar1 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac44360);
    Nakama_Console_UserGroupListUserGroup__set_State(uVar1,0);
    *(undefined8 *)(unaff_x19 + 0x140) = uVar1;
    thunk_FUN_049ee3d8(unaff_x19 + 0x140,uVar1);
    FUN_08dea364(*(undefined8 *)(unaff_x19 + 0x140),0);
  }
  plVar6 = *(long **)(unaff_x19 + 0x10);
  uVar1 = thunk_FUN_04983f60(*unaff_x24);
  FUN_05f878c4();
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x17) * 0x10 + 0x138);
          goto LAB_08a8d290;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x22,0x17);
LAB_08a8d290:
    (*(code *)*puVar2)(plVar6,uVar1,puVar2[1]);
    plVar6 = *(long **)(unaff_x19 + 0x60);
    if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x08a8d2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x1d8))(plVar6,*(undefined8 *)(*plVar6 + 0x1e0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


