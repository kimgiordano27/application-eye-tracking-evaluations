/*
FUNCTION_NAME: FUN_039b60b8
ENTRY_POINT: 039b60b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 235
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;data_collection;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x039b6394) */
/* WARNING: Removing unreachable block (ram,0x039b646c) */

long FUN_039b60b8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  int *piVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  
  if ((DAT_0483881b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_4863);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IPointerClickHandler>__
                      );
    thunk_FUN_01efb3a4(StringLiteral_5347);
    thunk_FUN_01efb3a4(StringLiteral_4864);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_EventSystems_ExecuteEvents_ExecuteHierarchy<IPointerDownHandler>__
                      );
    thunk_FUN_01efb3a4(StringLiteral_4564);
    thunk_FUN_01efb3a4(StringLiteral_4565);
    DAT_0483881b = 1;
  }
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (uVar5 = System_ComponentModel_ArrayConverter___ctor(), param_2 == 0))
  goto System_Net_Configuration_ConnectionManagementElementCollection___ctor;
  lVar9 = FUN_0398a8d0(param_2,0);
  puVar1 = Method_UnityEngine_EventSystems_ExecuteEvents_ExecuteHierarchy<IPointerDownHandler>__;
  if (lVar9 == 0) goto System_Net_Configuration_ConnectionManagementElementCollection___ctor;
  iVar6 = FUN_0265d6c4(lVar9,*(undefined8 *)
                              Method_UnityEngine_EventSystems_ExecuteEvents_ExecuteHierarchy<IPointerDownHandler>__
                      );
  puVar4 = StringLiteral_5347;
  puVar3 = StringLiteral_4864;
  puVar2 = Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IPointerClickHandler>__;
  if (iVar6 != 0) {
    uVar7 = FUN_0265d6c4(lVar9,*(undefined8 *)puVar1);
    lVar10 = FUN_01f08890(*(undefined8 *)puVar4,uVar7);
    plVar11 = (long *)FUN_0265d924(lVar9,*(undefined8 *)puVar3);
    puVar2 = StringLiteral_4863;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar17 = 0;
    do {
      lVar9 = *plVar11;
      uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar1) {
            puVar12 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_039b6238;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar1,0);
LAB_039b6238:
      uVar15 = (*(code *)*puVar12)(plVar11,puVar12[1]);
      if ((uVar15 & 1) == 0) {
        if (plVar11 == (long *)0x0) goto LAB_039b63bc;
        lVar9 = *plVar11;
        uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar15 == 0)
        goto System_IO_Compression_DeflateStreamNative_SafeDeflateStreamHandle__get_IsInvalid;
        piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto System_IO_Compression_DeflateStreamNative__CloseZStream;
      }
      lVar9 = *plVar11;
      uVar15 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
            puVar12 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_039b6294;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar2,0);
LAB_039b6294:
      plVar13 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
      if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      auVar18 = FUN_039c8460(*(long *)(param_1 + 0x18),plVar13,uVar5,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar9 = lVar10 + (long)(int)uVar17 * 0x10;
      *(undefined1 (*) [16])(lVar9 + 0x20) = auVar18;
      thunk_FUN_01f51358(lVar9 + 0x28,0);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = *(long *)(param_1 + 0x10);
      uVar14 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar17 = uVar17 + 1;
      FUN_039acc78(lVar9,auVar18._0_8_ & 0xffffffff,uVar14);
    } while( true );
  }
  lVar9 = *(long *)
           Method_UnityEngine_EventSystems_ExecuteEvents_GetEventHandler<IPointerClickHandler>__;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar9 = *(long *)puVar2;
  }
  lVar10 = **(long **)(lVar9 + 0xb8);
  goto LAB_039b63bc;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
System_IO_Compression_DeflateStreamNative__CloseZStream:
    if (*(long *)(piVar16 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar12 = (undefined8 *)(lVar9 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_039b637c;
    }
  }
System_IO_Compression_DeflateStreamNative_SafeDeflateStreamHandle__get_IsInvalid:
  puVar12 = (undefined8 *)
            FUN_01ecb238(plVar11,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_039b637c:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_039b63bc:
  lVar9 = FUN_0398a8c4(param_2,0);
  puVar2 = StringLiteral_4565;
  puVar1 = StringLiteral_4564;
  if (lVar9 != 0) {
    iVar6 = 0;
    do {
      iVar8 = FUN_0265d6c4(lVar9,*(undefined8 *)puVar1);
      if (iVar8 + -1 <= iVar6) {
        return lVar10;
      }
      lVar9 = FUN_0398a8c4(param_2,0);
      if (lVar9 == 0) break;
      uVar14 = FUN_0265d74c(lVar9,iVar6,*(undefined8 *)puVar2);
      FUN_039b65ec(param_1,uVar14);
      iVar6 = iVar6 + 1;
      lVar9 = FUN_0398a8c4(param_2,0);
    } while (lVar9 != 0);
  }
System_Net_Configuration_ConnectionManagementElementCollection___ctor:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


