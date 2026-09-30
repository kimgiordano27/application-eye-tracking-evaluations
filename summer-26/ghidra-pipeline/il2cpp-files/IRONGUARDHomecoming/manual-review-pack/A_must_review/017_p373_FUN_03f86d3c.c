/*
FUNCTION_NAME: FUN_03f86d3c
ENTRY_POINT: 03f86d3c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 234
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_16;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03f87524) */

void FUN_03f86d3c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  if ((DAT_0483b688 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_045818f8);
    thunk_FUN_01efb3a4(Method_UnityEngine_Camera_GetAllCameras__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UI_CanvasScaler_Canvas_preWillRenderCanvases__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(PTR_DAT_04581970);
    thunk_FUN_01efb3a4(PTR_DAT_04581978);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Tween>_Clear__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Tween>_Pop__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__);
    thunk_FUN_01efb3a4(PTR_DAT_04581980);
    thunk_FUN_01efb3a4(PTR_DAT_04581878);
    thunk_FUN_01efb3a4(PTR_DAT_04581988);
    thunk_FUN_01efb3a4(PTR_DAT_04581990);
    thunk_FUN_01efb3a4(PTR_DAT_04581998);
    DAT_0483b688 = 1;
  }
  lVar5 = FUN_03f866c8();
  puVar4 = PTR_DAT_045818f8;
  if (lVar5 != 0) {
    uVar11 = *(undefined8 *)(lVar5 + 0x30);
    if (*(int *)(*(long *)Method_UnityEngine_Camera_GetAllCameras__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_Camera_GetAllCameras__);
    }
    uVar11 = FUN_022c23d8(uVar11,*(undefined8 *)puVar4);
    if (DAT_0483b781 == '\0') {
      thunk_FUN_01efb3a4(PTR_DAT_04581880);
      DAT_0483b781 = '\x01';
    }
    puVar4 = PTR_DAT_04581880;
    puVar6 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04581880 + 0xb8) + 0x10);
    *puVar6 = uVar11;
    thunk_FUN_01f51358(puVar6,uVar11);
    if (DAT_0483b77f == '\0') {
      thunk_FUN_01efb3a4(PTR_DAT_04581880);
      DAT_0483b77f = '\x01';
    }
    puVar1 = PTR_DAT_04581878;
    FUN_03f878c4(*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10));
    if (DAT_0483b77e == '\0') {
      thunk_FUN_01efb3a4(PTR_DAT_04581880);
      DAT_0483b77e = '\x01';
    }
    lVar5 = *(long *)puVar1;
    uVar11 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_04581970;
    lVar12 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    if (lVar12 == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar5 = *(long *)puVar1;
      }
      uVar13 = **(undefined8 **)(lVar5 + 0xb8);
      lVar12 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04581978);
      FUN_02e6c748(lVar12,uVar13,*(undefined8 *)PTR_DAT_04581980,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar7 = lVar12;
      thunk_FUN_01f51358(plVar7,lVar12);
    }
    plVar7 = (long *)FUN_02300e64(uVar11,lVar12,*(undefined8 *)puVar2);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03f86ff4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_01ecb238(plVar7,*(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__,0
                           );
LAB_03f86ff4:
      plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      puVar3 = Method_UnityEngine_UI_CanvasScaler_Canvas_preWillRenderCanvases__;
      puVar2 = Method_System_Collections_Generic_Stack<Tween>_Pop__;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_03f87024:
      do {
        lVar5 = *plVar7;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03f87070;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_03f87070:
        uVar9 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar9 & 1) == 0) {
          if (plVar7 == (long *)0x0) {
            return;
          }
          lVar5 = *plVar7;
          uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar9 == 0) goto LAB_03f87494;
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_03f8747c;
        }
        lVar5 = *plVar7;
        uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_03f870cc;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_03f870cc:
        uVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if (DAT_0483b77f == '\0') {
          thunk_FUN_01efb3a4(puVar4);
          DAT_0483b77f = '\x01';
        }
        lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar9 = UnityEngine_Rendering_AsyncGPUReadbackRequest__IsDone(lVar5,uVar11);
        if ((uVar9 & 1) == 0) {
          if (DAT_0483b77f == '\0') {
            thunk_FUN_01efb3a4(puVar4);
            DAT_0483b77f = '\x01';
          }
          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          lVar12 = *(long *)(lVar5 + 0x10);
          if (DAT_0483b77e == '\0') {
            thunk_FUN_01efb3a4(puVar4);
            DAT_0483b77e = '\x01';
            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          }
          if (*(long *)(lVar5 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar13 = FUN_03f88640(*(long *)(lVar5 + 8),uVar11);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_03f88760(lVar12,uVar11,uVar13);
          goto LAB_03f87024;
        }
        if (DAT_0483b77f == '\0') {
          thunk_FUN_01efb3a4(puVar4);
          DAT_0483b77f = '\x01';
        }
        lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = FUN_03f88640(lVar5,uVar11);
        if (lVar5 == 0) {
          if (DAT_0483b77e == '\0') {
            thunk_FUN_01efb3a4(puVar4);
            DAT_0483b77e = '\x01';
          }
          lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = FUN_03f88640(lVar5,uVar11);
          if (lVar5 != 0) {
            if (DAT_0483b77e == '\0') {
              thunk_FUN_01efb3a4(puVar4);
              DAT_0483b77e = '\x01';
            }
            lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar5 = FUN_03f88640(lVar5,uVar11);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar13 = thunk_FUN_01ecaf38(lVar5,0);
            if (*(int *)(*(long *)
                          Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar9 = FUN_03f76124(uVar13,0);
            if ((uVar9 & 1) == 0) {
              uVar11 = FUN_0340ebc0(*(undefined8 *)PTR_DAT_04581998,uVar11,
                                    *(undefined8 *)PTR_DAT_04581988,0);
              if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) ==
                  0) {
                thunk_FUN_01ee6d7c();
              }
              FUN_0403f2cc(uVar11,0);
              goto LAB_03f87024;
            }
          }
          if (DAT_0483b77f == '\0') {
            thunk_FUN_01efb3a4(puVar4);
            DAT_0483b77f = '\x01';
          }
          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          lVar12 = *(long *)(lVar5 + 0x10);
          if (DAT_0483b77e == '\0') {
            thunk_FUN_01efb3a4(puVar4);
            DAT_0483b77e = '\x01';
            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          }
          if (*(long *)(lVar5 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar13 = FUN_03f88640(*(long *)(lVar5 + 8),uVar11);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_03f88760(lVar12,uVar11,uVar13);
          goto LAB_03f87024;
        }
        if (DAT_0483b77e == '\0') {
          thunk_FUN_01efb3a4(puVar4);
          DAT_0483b77e = '\x01';
        }
        lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar13 = FUN_03f88640(lVar5,uVar11);
        if (DAT_0483b77f == '\0') {
          thunk_FUN_01efb3a4(puVar4);
          DAT_0483b77f = '\x01';
        }
        lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar5 = FUN_03f88640(lVar5,uVar11);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar8 = thunk_FUN_01ecaf38(lVar5,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar9 = FUN_03ee0f44(uVar13,uVar8,1,0);
        if ((uVar9 & 1) == 0) {
          if (DAT_0483b77f == '\0') {
            thunk_FUN_01efb3a4(puVar4);
            DAT_0483b77f = '\x01';
          }
          lVar5 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar5 = FUN_03f88640(lVar5,uVar11);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar13 = thunk_FUN_01ecaf38(lVar5,0);
          uVar11 = FUN_0340f2f0(*(undefined8 *)PTR_DAT_04581990,uVar11,uVar13,0);
          if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_0403f2cc(uVar11,0);
        }
        else {
          if (DAT_0483b77f == '\0') {
            thunk_FUN_01efb3a4(puVar4);
            DAT_0483b77f = '\x01';
          }
          lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          lVar12 = *(long *)(lVar5 + 0x10);
          if (DAT_0483b77e == '\0') {
            thunk_FUN_01efb3a4(puVar4);
            DAT_0483b77e = '\x01';
            lVar5 = *(long *)(*(long *)puVar4 + 0xb8);
          }
          if (*(long *)(lVar5 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar13 = FUN_03f88640(*(long *)(lVar5 + 8),uVar11);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_03f88760(lVar12,uVar11,uVar13);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_03f8747c:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_03f874b0;
    }
  }
LAB_03f87494:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03f874b0:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
  return;
}


