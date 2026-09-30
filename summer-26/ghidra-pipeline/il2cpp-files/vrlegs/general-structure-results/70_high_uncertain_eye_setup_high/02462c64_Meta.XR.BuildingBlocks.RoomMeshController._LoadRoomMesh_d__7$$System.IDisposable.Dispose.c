/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<LoadRoomMesh>d__7$$System.IDisposable.Dispose
ENTRY_POINT: 02462c64
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController_<LoadRoomMesh>d__7__System_IDisposable_Dispose(void)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  int in_w8;
  long lVar4;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  long *plVar5;
  
  if (in_w8 != 0) {
    if (*(long *)(unaff_x19 + 0x150) == 0) goto LAB_02462db4;
    uVar3 = FUN_024ab728(*(long *)(unaff_x19 + 0x150),0);
    *(undefined8 *)(unaff_x19 + 0x90) = uVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(unaff_x19 + 0x90),uVar3);
    if (*(long *)(unaff_x19 + 0x150) == 0) goto LAB_02462db4;
    FUN_024a0eb0(*(long *)(unaff_x19 + 0x150),1,0);
  }
  lVar4 = *(long *)(unaff_x19 + 0x138);
  if (lVar4 != 0) {
    uVar2 = *(int *)(unaff_x19 + 0x14c) - 6;
    if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    plVar5 = *(long **)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
    uVar3 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ce6de8);
    if (plVar5 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_03ce4e28 + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03ce4e28))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar5);
      }
    }
    FUN_024a0c98(uVar3,unaff_w21,plVar5,unaff_w20,0);
    *(undefined8 *)(unaff_x19 + 0x140) = uVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x140,uVar3);
    return;
  }
LAB_02462db4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


