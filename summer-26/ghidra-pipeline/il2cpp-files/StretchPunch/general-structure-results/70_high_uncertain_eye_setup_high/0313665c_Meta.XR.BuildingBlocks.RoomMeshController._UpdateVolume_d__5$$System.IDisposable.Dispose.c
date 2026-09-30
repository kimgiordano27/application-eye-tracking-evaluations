/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.RoomMeshController.<UpdateVolume>d__5$$System.IDisposable.Dispose
ENTRY_POINT: 0313665c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_RoomMeshController_<UpdateVolume>d__5__System_IDisposable_Dispose
               (long param_1)

{
  ulong uVar1;
  long lVar2;
  long in_x9;
  uint in_w10;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 uVar3;
  ulong unaff_x24;
  long unaff_x25;
  long unaff_x26;
  code *pcVar4;
  
  while( true ) {
    if ((uint)in_x9 < in_w10) {
      param_1 = param_1 + in_x9 * unaff_x26;
      *(uint *)(unaff_x22 + 0x18) = (uint)in_x9 + 1;
      memcpy((void *)(param_1 + 0x20),&stack0x00000070,0x68);
      thunk_FUN_01e10808(param_1 + 0x68,0);
    }
    else {
      memcpy(&stack0x000000d8,&stack0x00000070,0x68);
      FUN_03135be0();
    }
    do {
      unaff_x24 = unaff_x24 + 1;
      unaff_x25 = unaff_x25 + 0x68;
      if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
        return;
      }
      lVar2 = *(long *)(unaff_x21 + 0x10);
      if (lVar2 == 0) goto LAB_031366f4;
      if (*(uint *)(lVar2 + 0x18) <= unaff_x24) goto LAB_031366f8;
      memcpy(&stack0x00000070,(void *)(lVar2 + unaff_x25),0x68);
      if (unaff_x20 == 0) goto LAB_031366f4;
      pcVar4 = *(code **)(unaff_x20 + 0x18);
      uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
      memcpy(&stack0x000000d8,&stack0x00000070,0x68);
      uVar1 = (*pcVar4)(uVar3,&stack0x000000d8,*(undefined8 *)(unaff_x20 + 0x28));
    } while ((uVar1 & 1) == 0);
    lVar2 = *(long *)(unaff_x21 + 0x10);
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_x24) {
LAB_031366f8:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    memcpy(&stack0x00000008,(void *)(lVar2 + unaff_x25),0x68);
    if (unaff_x22 == 0) break;
    memcpy(&stack0x00000070,&stack0x00000008,0x68);
    param_1 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (param_1 == 0) break;
    in_x9 = (long)*(int *)(unaff_x22 + 0x18);
    in_w10 = *(uint *)(param_1 + 0x18);
  }
LAB_031366f4:
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


