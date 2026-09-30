/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$get_Current
ENTRY_POINT: 0291a540
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__get_Current(long param_1)

{
  int iVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  undefined8 uVar3;
  int unaff_w25;
  uint uVar4;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(unaff_x20 + (long)unaff_w25 * 8 + 0x20);
  uVar4 = unaff_w23 - 1;
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_01ae9e74();
  }
  FUN_0291a014();
  if ((int)uVar4 <= (int)unaff_w19) {
LAB_0291a65c:
    lVar2 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ae9e74();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ae9e74();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ae9e74();
    }
    FUN_0291a014();
    return unaff_w19;
  }
  do {
    do {
      unaff_w19 = unaff_w19 + 1;
      if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) {
LAB_0291a6c8:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar5 = *(undefined8 *)(unaff_x20 + (long)(int)unaff_w19 * 8 + 0x20);
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ae9e74();
      }
      iVar1 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),uVar5,uVar3,
                         *(undefined8 *)(unaff_x22 + 0x28));
    } while (iVar1 < 0);
    do {
      uVar4 = uVar4 - 1;
      if (*(uint *)(unaff_x20 + 0x18) <= uVar4) goto LAB_0291a6c8;
      uVar5 = *(undefined8 *)(unaff_x20 + (long)(int)uVar4 * 8 + 0x20);
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_01ae9e74();
      }
      iVar1 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),uVar3,uVar5,
                         *(undefined8 *)(unaff_x22 + 0x28));
    } while (iVar1 < 0);
    if ((int)uVar4 <= (int)unaff_w19) goto LAB_0291a65c;
    lVar2 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ae9e74();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ae9e74();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_01ae9e74();
    }
    FUN_0291a014();
  } while( true );
}


