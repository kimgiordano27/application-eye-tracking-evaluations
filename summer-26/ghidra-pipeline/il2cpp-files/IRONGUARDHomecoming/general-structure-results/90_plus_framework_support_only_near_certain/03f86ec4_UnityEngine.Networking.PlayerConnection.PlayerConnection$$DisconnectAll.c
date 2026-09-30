/*
FUNCTION_NAME: UnityEngine.Networking.PlayerConnection.PlayerConnection$$DisconnectAll
ENTRY_POINT: 03f86ec4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 193
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03f87524) */

void UnityEngine_Networking_PlayerConnection_PlayerConnection__DisconnectAll(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long unaff_x25;
  
  puVar1 = PTR_DAT_04581878;
  FUN_03f878c4(*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x10));
  if (DAT_0483b77e == '\0') {
    thunk_FUN_01efb3a4(PTR_DAT_04581880);
    DAT_0483b77e = '\x01';
  }
  lVar4 = *(long *)puVar1;
  uVar10 = *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 8);
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar4 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_04581970;
  lVar11 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
  if (lVar11 == 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar4 = *(long *)puVar1;
    }
    uVar12 = **(undefined8 **)(lVar4 + 0xb8);
    lVar11 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04581978);
    FUN_02e6c748(lVar11,uVar12,*(undefined8 *)PTR_DAT_04581980,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
    *plVar5 = lVar11;
    thunk_FUN_01f51358(plVar5,lVar11);
  }
  plVar5 = (long *)FUN_02300e64(uVar10,lVar11,*(undefined8 *)puVar2);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar4 = *plVar5;
  uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__)
      {
        puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_03f86ff4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__,0);
LAB_03f86ff4:
  plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
  puVar3 = Method_UnityEngine_UI_CanvasScaler_Canvas_preWillRenderCanvases__;
  puVar2 = Method_System_Collections_Generic_Stack<Tween>_Pop__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
LAB_03f87024:
  do {
    lVar4 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03f87070;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_03f87070:
    uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar8 == 0) goto LAB_03f87494;
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03f870cc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_03f870cc:
    uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (*(char *)(unaff_x25 + 0x77f) == '\0') {
      thunk_FUN_01efb3a4();
      *(undefined1 *)(unaff_x25 + 0x77f) = 1;
    }
    lVar4 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar8 = UnityEngine_Rendering_AsyncGPUReadbackRequest__IsDone(lVar4,uVar10);
    if ((uVar8 & 1) == 0) {
      if (*(char *)(unaff_x25 + 0x77f) == '\0') {
        thunk_FUN_01efb3a4();
        *(undefined1 *)(unaff_x25 + 0x77f) = 1;
      }
      lVar4 = *(long *)(*unaff_x20 + 0xb8);
      lVar11 = *(long *)(lVar4 + 0x10);
      if (DAT_0483b77e == '\0') {
        thunk_FUN_01efb3a4();
        DAT_0483b77e = '\x01';
        lVar4 = *(long *)(*unaff_x20 + 0xb8);
      }
      if (*(long *)(lVar4 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar12 = FUN_03f88640(*(long *)(lVar4 + 8),uVar10);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03f88760(lVar11,uVar10,uVar12);
      goto LAB_03f87024;
    }
    if (*(char *)(unaff_x25 + 0x77f) == '\0') {
      thunk_FUN_01efb3a4();
      *(undefined1 *)(unaff_x25 + 0x77f) = 1;
    }
    lVar4 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = FUN_03f88640(lVar4,uVar10);
    if (lVar4 == 0) {
      if (DAT_0483b77e == '\0') {
        thunk_FUN_01efb3a4();
        DAT_0483b77e = '\x01';
      }
      lVar4 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = FUN_03f88640(lVar4,uVar10);
      if (lVar4 != 0) {
        if (DAT_0483b77e == '\0') {
          thunk_FUN_01efb3a4();
          DAT_0483b77e = '\x01';
        }
        lVar4 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 8);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar4 = FUN_03f88640(lVar4,uVar10);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar12 = thunk_FUN_01ecaf38(lVar4,0);
        if (*(int *)(*(long *)
                      Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar8 = FUN_03f76124(uVar12,0);
        if ((uVar8 & 1) == 0) {
          uVar10 = FUN_0340ebc0(*(undefined8 *)PTR_DAT_04581998,uVar10,
                                *(undefined8 *)PTR_DAT_04581988,0);
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403f2cc(uVar10,0);
          goto LAB_03f87024;
        }
      }
      if (*(char *)(unaff_x25 + 0x77f) == '\0') {
        thunk_FUN_01efb3a4();
        *(undefined1 *)(unaff_x25 + 0x77f) = 1;
      }
      lVar4 = *(long *)(*unaff_x20 + 0xb8);
      lVar11 = *(long *)(lVar4 + 0x10);
      if (DAT_0483b77e == '\0') {
        thunk_FUN_01efb3a4();
        DAT_0483b77e = '\x01';
        lVar4 = *(long *)(*unaff_x20 + 0xb8);
      }
      if (*(long *)(lVar4 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar12 = FUN_03f88640(*(long *)(lVar4 + 8),uVar10);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03f88760(lVar11,uVar10,uVar12);
      goto LAB_03f87024;
    }
    if (DAT_0483b77e == '\0') {
      thunk_FUN_01efb3a4();
      DAT_0483b77e = '\x01';
    }
    lVar4 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar12 = FUN_03f88640(lVar4,uVar10);
    if (*(char *)(unaff_x25 + 0x77f) == '\0') {
      thunk_FUN_01efb3a4();
      *(undefined1 *)(unaff_x25 + 0x77f) = 1;
    }
    lVar4 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar4 = FUN_03f88640(lVar4,uVar10);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = thunk_FUN_01ecaf38(lVar4,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar8 = FUN_03ee0f44(uVar12,uVar7,1,0);
    if ((uVar8 & 1) == 0) {
      if (*(char *)(unaff_x25 + 0x77f) == '\0') {
        thunk_FUN_01efb3a4();
        *(undefined1 *)(unaff_x25 + 0x77f) = 1;
      }
      lVar4 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = FUN_03f88640(lVar4,uVar10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar12 = thunk_FUN_01ecaf38(lVar4,0);
      uVar10 = FUN_0340f2f0(*(undefined8 *)PTR_DAT_04581990,uVar10,uVar12,0);
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0403f2cc(uVar10,0);
    }
    else {
      if (*(char *)(unaff_x25 + 0x77f) == '\0') {
        thunk_FUN_01efb3a4();
        *(undefined1 *)(unaff_x25 + 0x77f) = 1;
      }
      lVar4 = *(long *)(*unaff_x20 + 0xb8);
      lVar11 = *(long *)(lVar4 + 0x10);
      if (DAT_0483b77e == '\0') {
        thunk_FUN_01efb3a4();
        DAT_0483b77e = '\x01';
        lVar4 = *(long *)(*unaff_x20 + 0xb8);
      }
      if (*(long *)(lVar4 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar12 = FUN_03f88640(*(long *)(lVar4 + 8),uVar10);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03f88760(lVar11,uVar10,uVar12);
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03f874b0;
    }
  }
LAB_03f87494:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03f874b0:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


