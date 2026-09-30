/*
FUNCTION_NAME: UnityEngine.Networking.PlayerConnection.PlayerConnection$$MessageCallbackInternal
ENTRY_POINT: 03f86f60
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

void UnityEngine_Networking_PlayerConnection_PlayerConnection__MessageCallbackInternal
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x20;
  long lVar12;
  long *unaff_x23;
  long unaff_x25;
  long unaff_x26;
  
  FUN_02e6c748();
  puVar4 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
  *puVar4 = param_1;
  thunk_FUN_01f51358(puVar4,param_1);
  plVar5 = (long *)FUN_02300e64();
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = *plVar5;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__
         ) {
        puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_03f86ff4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__,0);
LAB_03f86ff4:
  plVar5 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
  puVar3 = Method_UnityEngine_UI_CanvasScaler_Canvas_preWillRenderCanvases__;
  puVar2 = Method_System_Collections_Generic_Stack<Tween>_Pop__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
LAB_03f87024:
  do {
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03f87070;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar1,0);
LAB_03f87070:
    uVar10 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar10 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_03f87494;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03f870cc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_03f870cc:
    uVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if (*(char *)(unaff_x25 + 0x77f) == '\0') {
      thunk_FUN_01efb3a4();
      *(undefined1 *)(unaff_x25 + 0x77f) = 1;
    }
    lVar9 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar10 = UnityEngine_Rendering_AsyncGPUReadbackRequest__IsDone(lVar9,uVar6);
    if ((uVar10 & 1) == 0) {
      if (*(char *)(unaff_x25 + 0x77f) == '\0') {
        thunk_FUN_01efb3a4();
        *(undefined1 *)(unaff_x25 + 0x77f) = 1;
      }
      lVar9 = *(long *)(*unaff_x20 + 0xb8);
      lVar12 = *(long *)(lVar9 + 0x10);
      if (*(char *)(unaff_x26 + 0x77e) == '\0') {
        thunk_FUN_01efb3a4();
        lVar9 = *unaff_x20;
        *(undefined1 *)(unaff_x26 + 0x77e) = 1;
        lVar9 = *(long *)(lVar9 + 0xb8);
      }
      if (*(long *)(lVar9 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar7 = FUN_03f88640(*(long *)(lVar9 + 8),uVar6);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03f88760(lVar12,uVar6,uVar7);
      goto LAB_03f87024;
    }
    if (*(char *)(unaff_x25 + 0x77f) == '\0') {
      thunk_FUN_01efb3a4();
      *(undefined1 *)(unaff_x25 + 0x77f) = 1;
    }
    lVar9 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = FUN_03f88640(lVar9,uVar6);
    if (lVar9 == 0) {
      if (*(char *)(unaff_x26 + 0x77e) == '\0') {
        thunk_FUN_01efb3a4();
        *(undefined1 *)(unaff_x26 + 0x77e) = 1;
      }
      lVar9 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 8);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = FUN_03f88640(lVar9,uVar6);
      if (lVar9 != 0) {
        if (*(char *)(unaff_x26 + 0x77e) == '\0') {
          thunk_FUN_01efb3a4();
          *(undefined1 *)(unaff_x26 + 0x77e) = 1;
        }
        lVar9 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 8);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar9 = FUN_03f88640(lVar9,uVar6);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar7 = thunk_FUN_01ecaf38(lVar9,0);
        if (*(int *)(*(long *)
                      Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__ +
                    0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar10 = FUN_03f76124(uVar7,0);
        if ((uVar10 & 1) == 0) {
          uVar6 = FUN_0340ebc0(*(undefined8 *)PTR_DAT_04581998,uVar6,*(undefined8 *)PTR_DAT_04581988
                               ,0);
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403f2cc(uVar6,0);
          goto LAB_03f87024;
        }
      }
      if (*(char *)(unaff_x25 + 0x77f) == '\0') {
        thunk_FUN_01efb3a4();
        *(undefined1 *)(unaff_x25 + 0x77f) = 1;
      }
      lVar9 = *(long *)(*unaff_x20 + 0xb8);
      lVar12 = *(long *)(lVar9 + 0x10);
      if (*(char *)(unaff_x26 + 0x77e) == '\0') {
        thunk_FUN_01efb3a4();
        lVar9 = *unaff_x20;
        *(undefined1 *)(unaff_x26 + 0x77e) = 1;
        lVar9 = *(long *)(lVar9 + 0xb8);
      }
      if (*(long *)(lVar9 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar7 = FUN_03f88640(*(long *)(lVar9 + 8),uVar6);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03f88760(lVar12,uVar6,uVar7);
      goto LAB_03f87024;
    }
    if (*(char *)(unaff_x26 + 0x77e) == '\0') {
      thunk_FUN_01efb3a4();
      *(undefined1 *)(unaff_x26 + 0x77e) = 1;
    }
    lVar9 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 8);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar7 = FUN_03f88640(lVar9,uVar6);
    if (*(char *)(unaff_x25 + 0x77f) == '\0') {
      thunk_FUN_01efb3a4();
      *(undefined1 *)(unaff_x25 + 0x77f) = 1;
    }
    lVar9 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = FUN_03f88640(lVar9,uVar6);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar8 = thunk_FUN_01ecaf38(lVar9,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar10 = FUN_03ee0f44(uVar7,uVar8,1,0);
    if ((uVar10 & 1) == 0) {
      if (*(char *)(unaff_x25 + 0x77f) == '\0') {
        thunk_FUN_01efb3a4();
        *(undefined1 *)(unaff_x25 + 0x77f) = 1;
      }
      lVar9 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = FUN_03f88640(lVar9,uVar6);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar7 = thunk_FUN_01ecaf38(lVar9,0);
      uVar6 = FUN_0340f2f0(*(undefined8 *)PTR_DAT_04581990,uVar6,uVar7,0);
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0403f2cc(uVar6,0);
    }
    else {
      if (*(char *)(unaff_x25 + 0x77f) == '\0') {
        thunk_FUN_01efb3a4();
        *(undefined1 *)(unaff_x25 + 0x77f) = 1;
      }
      lVar9 = *(long *)(*unaff_x20 + 0xb8);
      lVar12 = *(long *)(lVar9 + 0x10);
      if (*(char *)(unaff_x26 + 0x77e) == '\0') {
        thunk_FUN_01efb3a4();
        lVar9 = *unaff_x20;
        *(undefined1 *)(unaff_x26 + 0x77e) = 1;
        lVar9 = *(long *)(lVar9 + 0xb8);
      }
      if (*(long *)(lVar9 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar7 = FUN_03f88640(*(long *)(lVar9 + 8),uVar6);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      FUN_03f88760(lVar12,uVar6,uVar7);
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03f874b0;
    }
  }
LAB_03f87494:
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03f874b0:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
  return;
}


