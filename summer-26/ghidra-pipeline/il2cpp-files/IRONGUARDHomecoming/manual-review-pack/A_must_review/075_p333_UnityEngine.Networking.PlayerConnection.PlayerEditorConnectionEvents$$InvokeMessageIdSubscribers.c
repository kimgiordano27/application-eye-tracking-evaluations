/*
FUNCTION_NAME: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents$$InvokeMessageIdSubscribers
ENTRY_POINT: 03f87078
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 191
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03f87524) */

void UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents__InvokeMessageIdSubscribers
               (code *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long lVar8;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined1 unaff_w29;
  
  while (uVar1 = (*param_1)(), (uVar1 & 1) != 0) {
    lVar6 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar1 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x28) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03f870cc;
        }
        uVar1 = uVar1 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03f870cc:
    uVar3 = (*(code *)*puVar2)();
    if (*(char *)(unaff_x25 + 0x77f) == '\0') {
      thunk_FUN_01efb3a4();
      *(undefined1 *)(unaff_x25 + 0x77f) = unaff_w29;
    }
    lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar1 = UnityEngine_Rendering_AsyncGPUReadbackRequest__IsDone(lVar6,uVar3);
    if ((uVar1 & 1) == 0) {
      if (*(char *)(unaff_x25 + 0x77f) == '\0') {
        thunk_FUN_01efb3a4();
        *(undefined1 *)(unaff_x25 + 0x77f) = unaff_w29;
      }
      lVar6 = *(long *)(*unaff_x20 + 0xb8);
      lVar8 = *(long *)(lVar6 + 0x10);
      if (*(char *)(unaff_x26 + 0x77e) == '\0') {
        thunk_FUN_01efb3a4();
        lVar6 = *unaff_x20;
        *(undefined1 *)(unaff_x26 + 0x77e) = unaff_w29;
        lVar6 = *(long *)(lVar6 + 0xb8);
      }
      if (*(long *)(lVar6 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar4 = FUN_03f88640(*(long *)(lVar6 + 8),uVar3);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03f88760(lVar8,uVar3,uVar4);
    }
    else {
      if (*(char *)(unaff_x25 + 0x77f) == '\0') {
        thunk_FUN_01efb3a4();
        *(undefined1 *)(unaff_x25 + 0x77f) = unaff_w29;
      }
      lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = FUN_03f88640(lVar6,uVar3);
      if (lVar6 == 0) {
        if (*(char *)(unaff_x26 + 0x77e) == '\0') {
          thunk_FUN_01efb3a4();
          *(undefined1 *)(unaff_x26 + 0x77e) = unaff_w29;
        }
        lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 8);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar6 = FUN_03f88640(lVar6,uVar3);
        if (lVar6 != 0) {
          if (*(char *)(unaff_x26 + 0x77e) == '\0') {
            thunk_FUN_01efb3a4();
            *(undefined1 *)(unaff_x26 + 0x77e) = unaff_w29;
          }
          lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 8);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar6 = FUN_03f88640(lVar6,uVar3);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar4 = thunk_FUN_01ecaf38(lVar6,0);
          if (*(int *)(*(long *)
                        Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__ +
                      0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar1 = FUN_03f76124(uVar4,0);
          if ((uVar1 & 1) == 0) {
            uVar3 = FUN_0340ebc0(*(undefined8 *)PTR_DAT_04581998,uVar3,
                                 *(undefined8 *)PTR_DAT_04581988,0);
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0)
            {
              thunk_FUN_01ee6d7c();
            }
            FUN_0403f2cc(uVar3,0);
            goto LAB_03f87024;
          }
        }
        if (*(char *)(unaff_x25 + 0x77f) == '\0') {
          thunk_FUN_01efb3a4();
          *(undefined1 *)(unaff_x25 + 0x77f) = unaff_w29;
        }
        lVar6 = *(long *)(*unaff_x20 + 0xb8);
        lVar8 = *(long *)(lVar6 + 0x10);
        if (*(char *)(unaff_x26 + 0x77e) == '\0') {
          thunk_FUN_01efb3a4();
          lVar6 = *unaff_x20;
          *(undefined1 *)(unaff_x26 + 0x77e) = unaff_w29;
          lVar6 = *(long *)(lVar6 + 0xb8);
        }
        if (*(long *)(lVar6 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar4 = FUN_03f88640(*(long *)(lVar6 + 8),uVar3);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_03f88760(lVar8,uVar3,uVar4);
      }
      else {
        if (*(char *)(unaff_x26 + 0x77e) == '\0') {
          thunk_FUN_01efb3a4();
          *(undefined1 *)(unaff_x26 + 0x77e) = unaff_w29;
        }
        lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 8);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar4 = FUN_03f88640(lVar6,uVar3);
        if (*(char *)(unaff_x25 + 0x77f) == '\0') {
          thunk_FUN_01efb3a4();
          *(undefined1 *)(unaff_x25 + 0x77f) = unaff_w29;
        }
        lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar6 = FUN_03f88640(lVar6,uVar3);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar5 = thunk_FUN_01ecaf38(lVar6,0);
        if (*(int *)(*unaff_x24 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar1 = FUN_03ee0f44(uVar4,uVar5,1,0);
        if ((uVar1 & 1) == 0) {
          if (*(char *)(unaff_x25 + 0x77f) == '\0') {
            thunk_FUN_01efb3a4();
            *(undefined1 *)(unaff_x25 + 0x77f) = unaff_w29;
          }
          lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar6 = FUN_03f88640(lVar6,uVar3);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar4 = thunk_FUN_01ecaf38(lVar6,0);
          uVar3 = FUN_0340f2f0(*(undefined8 *)PTR_DAT_04581990,uVar3,uVar4,0);
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403f2cc(uVar3,0);
        }
        else {
          if (*(char *)(unaff_x25 + 0x77f) == '\0') {
            thunk_FUN_01efb3a4();
            *(undefined1 *)(unaff_x25 + 0x77f) = unaff_w29;
          }
          lVar6 = *(long *)(*unaff_x20 + 0xb8);
          lVar8 = *(long *)(lVar6 + 0x10);
          if (*(char *)(unaff_x26 + 0x77e) == '\0') {
            thunk_FUN_01efb3a4();
            lVar6 = *unaff_x20;
            *(undefined1 *)(unaff_x26 + 0x77e) = unaff_w29;
            lVar6 = *(long *)(lVar6 + 0xb8);
          }
          if (*(long *)(lVar6 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar4 = FUN_03f88640(*(long *)(lVar6 + 8),uVar3);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_03f88760(lVar8,uVar3,uVar4);
        }
      }
    }
LAB_03f87024:
    lVar6 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar1 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03f87070;
        }
        uVar1 = uVar1 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03f87070:
    param_1 = (code *)*puVar2;
  }
  if (unaff_x19 != (long *)0x0) {
    lVar6 = *unaff_x19;
    uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar1 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03f874b0;
        }
        uVar1 = uVar1 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03f874b0:
    (*(code *)*puVar2)();
  }
  return;
}


