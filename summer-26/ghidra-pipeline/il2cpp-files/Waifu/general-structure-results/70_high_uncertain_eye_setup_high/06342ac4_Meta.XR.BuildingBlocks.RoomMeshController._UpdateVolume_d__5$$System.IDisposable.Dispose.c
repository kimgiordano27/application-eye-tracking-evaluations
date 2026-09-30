/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<UpdateVolume>d__5$$System.IDisposable.Dispose
ENTRY_POINT: 06342ac4
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_IDisposable_Dispose
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long unaff_x19;
  long *plVar5;
  undefined4 unaff_w20;
  long unaff_x21;
  
  FUN_0335b6c8(param_1 + 0xcb0,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x85b) = 1;
  if (*(char *)(unaff_x19 + 0x9d) != '\0') {
    lVar4 = FUN_05b961dc(DAT_083dfcb0);
    if ((lVar4 == 0) || (lVar4 = FUN_06317920(lVar4,0), lVar4 == 0)) goto LAB_06342c04;
    FUN_063685d0(lVar4,*(undefined4 *)(unaff_x19 + 0x38),*(undefined8 *)(unaff_x19 + 0x88),unaff_w20
                 ,0);
    if ((*(char *)(unaff_x19 + 0x9f) != '\0') || (*(char *)(unaff_x19 + 0xa0) != '\0')) {
      lVar4 = FUN_05b961dc(DAT_083dfcb0);
      if ((lVar4 == 0) || (lVar4 = FUN_06317920(lVar4,0), lVar4 == 0)) goto LAB_06342c04;
      FUN_063686b8(lVar4,*(undefined4 *)(unaff_x19 + 0x38),*(undefined8 *)(unaff_x19 + 0x88),
                   unaff_w20,*(undefined1 *)(unaff_x19 + 0x9f),*(undefined1 *)(unaff_x19 + 0xa0),0);
    }
  }
  if (*(char *)(unaff_x19 + 0x9e) != '\0') {
    lVar4 = FUN_05b961dc(DAT_083dfcb0);
    if ((lVar4 == 0) || (lVar4 = FUN_06317920(lVar4,0), lVar4 == 0)) {
LAB_06342c04:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    FUN_06368854(lVar4,*(undefined4 *)(unaff_x19 + 0x38),*(undefined8 *)(unaff_x19 + 0x88),
                 *(undefined8 *)(unaff_x19 + 0x50),unaff_w20,0);
    plVar5 = (long *)(unaff_x19 + 0x90);
    if (*plVar5 != 0) {
      FUN_079e4dc4();
      if (*plVar5 != 0) {
        FUN_079e4dc4(*plVar5,0);
      }
    }
    *plVar5 = 0;
    if (DAT_08908cd0 != 0) {
      puVar1 = &DAT_0873ccb0 + ((ulong)plVar5 >> 0x12 & 0x7fff);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar5 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  return;
}


