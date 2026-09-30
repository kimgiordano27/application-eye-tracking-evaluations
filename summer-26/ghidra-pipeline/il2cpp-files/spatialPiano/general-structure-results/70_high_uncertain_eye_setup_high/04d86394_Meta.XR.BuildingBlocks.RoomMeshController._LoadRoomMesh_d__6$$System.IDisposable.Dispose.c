/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<LoadRoomMesh>d__6$$System.IDisposable.Dispose
ENTRY_POINT: 04d86394
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_BuildingBlocks_RoomMeshController_<LoadRoomMesh>d__6__System_IDisposable_Dispose
          (long *param_1,long *param_2,long *param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_2 == param_3) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    if ((param_2 != (long *)0x0) && (param_3 != (long *)0x0)) {
      lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_02f41e9c(lVar3);
      }
      lVar3 = thunk_FUN_02f45174(param_2,lVar3);
      if (lVar3 != 0) {
        lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_02f41e9c(lVar3);
        }
        lVar3 = thunk_FUN_02f45174(param_3,lVar3);
        if (lVar3 != 0) {
          lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_02f41e9c(lVar3);
          }
          if (*(long *)(*param_2 + 0x40) == *(long *)(lVar3 + 0x40)) {
            puVar2 = (undefined8 *)thunk_FUN_02f453b8(param_2);
            uVar1 = *puVar2;
            lVar3 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_02f41e9c(lVar3);
            }
            param_2 = param_3;
            if (*(long *)(*param_3 + 0x40) == *(long *)(lVar3 + 0x40)) {
              puVar2 = (undefined8 *)thunk_FUN_02f453b8();
                    /* WARNING: Could not recover jumptable at 0x04d864c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar1 = (**(code **)(*param_1 + 0x1b8))
                                (param_1,uVar1,*puVar2,*(undefined8 *)(*param_1 + 0x1c0));
              return uVar1;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_02f08d48(param_2);
        }
      }
      FUN_050f5b58(2,0);
      uVar1 = 0;
    }
  }
  return uVar1;
}


