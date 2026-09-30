/*
FUNCTION_NAME: FUN_0428153c
ENTRY_POINT: 0428153c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_7;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x04281864) */

void FUN_0428153c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  
  if ((DAT_048417c7 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04592d50);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_04592d58);
    thunk_FUN_01efb3a4(PTR_DAT_04592d60);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Net_FtpControlStream_GetContentLengthFrom213Response__);
    thunk_FUN_01efb3a4(Method_System_Net_FtpControlStream_GetPortCommandLine__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    DAT_048417c7 = 1;
  }
  if ((*(char *)(param_1 + 0x20) == '\0') &&
     (uVar5 = FUN_04281eb0(param_1),
     puVar1 = Method_System_Net_FtpControlStream_GetPortCommandLine__, (uVar5 & 1) == 0)) {
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 == 0) goto LAB_0428185c;
    if (*(int *)(lVar6 + 0x18) != 0) {
      lVar6 = FUN_030f28e4(lVar6,0,*(undefined8 *)
                                    Method_System_Net_FtpControlStream_GetPortCommandLine__);
      if (lVar6 == 0) goto LAB_0428185c;
      FUN_04281a9c(lVar6,1,1);
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0428185c;
      uVar7 = FUN_030f28e4(*(long *)(param_1 + 0x28),0,*(undefined8 *)puVar1);
      FUN_04281d84(param_1,uVar7,1);
    }
  }
  puVar1 = PTR_DAT_04592d50;
  plVar8 = (long *)FUN_042822a0(param_1);
  iVar4 = FUN_022f1850(plVar8,*(undefined8 *)puVar1);
  if (iVar4 < 2) {
    return;
  }
  uVar7 = FUN_0428239c(param_1);
  if (plVar8 != (long *)0x0) {
    lVar6 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_04592d58) {
          puVar9 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_042816b8;
        }
        uVar5 = uVar5 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar5 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)PTR_DAT_04592d58,0);
LAB_042816b8:
    plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
    puVar3 = PTR_DAT_04592d60;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar6 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar9 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04281730;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar2,0);
LAB_04281730:
      uVar5 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if ((uVar5 & 1) == 0) {
        if (plVar8 == (long *)0x0) {
          return;
        }
        lVar6 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar5 == 0) goto LAB_04281818;
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_04281800;
      }
      lVar6 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar9 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0428178c;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar3,0);
LAB_0428178c:
      lVar6 = (*(code *)*puVar9)(plVar8,puVar9[1]);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                        (lVar6,uVar7,0);
      if ((uVar5 & 1) == 0) {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_04281a9c(lVar6,0,1);
      }
    } while( true );
  }
LAB_0428185c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar10 = piVar10 + 4;
    if (uVar5 == 0) break;
LAB_04281800:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar9 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_04281834;
    }
  }
LAB_04281818:
  puVar9 = (undefined8 *)
           FUN_01ecb238(plVar8,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_04281834:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return;
}


