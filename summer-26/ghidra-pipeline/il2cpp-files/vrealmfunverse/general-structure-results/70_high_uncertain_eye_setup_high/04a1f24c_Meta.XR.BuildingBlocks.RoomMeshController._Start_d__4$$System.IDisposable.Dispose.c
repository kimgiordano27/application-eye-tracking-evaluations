/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<Start>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 04a1f24c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController_<Start>d__4__System_IDisposable_Dispose(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar5;
  
  if ((*(byte *)(unaff_x22 + 0x9c2) & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06322b98);
    FUN_02b3c81c(PTR_DAT_06322688);
    FUN_02b3c81c(PTR_DAT_06322ba0);
    FUN_02b3c81c(PTR_DAT_06320978);
    *(undefined1 *)(unaff_x22 + 0x9c2) = 1;
  }
  if (unaff_x20 == 0) {
    thunk_FUN_02ba3594(PTR_DAT_06315b90);
    uVar5 = thunk_FUN_02b79644();
    uVar4 = thunk_FUN_02ba3594(PTR_DAT_06320980);
    FUN_04cee07c(uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_02b3c988(uVar5);
  }
  FUN_04c8c8f4();
  puVar2 = PTR_DAT_06312310;
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf0);
  if (*(int *)(*(long *)(PTR_DAT_06312310 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_04d8a7b0(uVar5,0);
  FUN_04c8b20c();
  FUN_04c8c8f4();
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xf8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02b76218();
    }
    uVar5 = FUN_02b3c908(lVar3,uVar1);
    FUN_04a2080c(param_1,uVar5,0,*(undefined4 *)(param_1 + 0x20),
                 *(undefined8 *)
                  (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) +
                                                0x100) + 0x20) + 0xc0) + 200));
    uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x108);
    if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_04d8a7b0(uVar5,0);
    FUN_04c8b20c();
    return;
  }
  return;
}


