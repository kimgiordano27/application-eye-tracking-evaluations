/*
FUNCTION_NAME: FUN_024166e8
ENTRY_POINT: 024166e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_7;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_16;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x02416a90) */
/* WARNING: Removing unreachable block (ram,0x02416b2c) */

long FUN_024166e8(long param_1,long *param_2,long param_3,long param_4)

{
  bool bVar1;
  long *plVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  int iVar14;
  long local_70;
  int local_64;
  
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ControlConnection__ctor__);
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
  if (param_3 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar10 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ControlInput_get_couldBeEntered__);
    FUN_034efd20(uVar6,uVar10,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
  if (param_2 == (long *)0x0) {
    return param_1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar6 = FUN_034127bc(param_1,0);
  puVar3 = Method_System_IO_CStreamReader_Read__;
  iVar5 = *(int *)(param_1 + 0x10);
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar14 = iVar5;
      if (iVar14 < 1) {
        iVar14 = 0;
        break;
      }
      uVar4 = FUN_03409f80(param_1,iVar14 + -1,0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar3);
      }
      uVar7 = FUN_034f5e70(uVar4,0);
      iVar5 = iVar14 + -1;
    } while ((uVar7 & 1) != 0);
    if (iVar14 != *(int *)(param_1 + 0x10)) {
      uVar10 = FUN_0341265c(param_1,iVar14,0);
      iVar5 = FUN_03568700(uVar10,0);
      iVar5 = iVar5 + 1;
      local_70 = FUN_03410500(param_1,0,iVar14,0);
      plVar2 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      goto LAB_02416838;
    }
  }
  iVar5 = 1;
  local_70 = param_1;
  plVar2 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
LAB_02416838:
  do {
    lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 8);
    if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_01ecaf44(lVar11);
    }
    lVar12 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == lVar11) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0241689c;
        }
        uVar7 = uVar7 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(param_2,lVar11,0);
LAB_0241689c:
    plVar9 = (long *)(*(code *)*puVar8)(param_2,puVar8[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar11 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *plVar2) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_024168fc;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*plVar2,0);
LAB_024168fc:
      uVar7 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      if ((uVar7 & 1) == 0) {
        bVar1 = true;
        goto joined_r0x02416a20;
      }
      lVar11 = *(long *)(*(long *)(param_4 + 0x38) + 0x18);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01ecaf44(lVar11);
      }
      lVar12 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar11) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_02416970;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar9,lVar11,0);
LAB_02416970:
      uVar10 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      lVar11 = (**(code **)(param_3 + 0x18))
                         (*(undefined8 *)(param_3 + 0x40),uVar10,*(undefined8 *)(param_3 + 0x28));
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar10 = FUN_034127bc(lVar11,0);
      uVar7 = thunk_FUN_0340e318(uVar10,uVar6,0);
    } while ((uVar7 & 1) == 0);
    local_64 = iVar5;
    uVar6 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                               ,&local_64);
    param_1 = FUN_0340f2f0(*(undefined8 *)Method_Unity_VisualScripting_ControlConnection__ctor__,
                           local_70,uVar6,0);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = FUN_034127bc(param_1,0);
    bVar1 = false;
    iVar5 = iVar5 + 1;
joined_r0x02416a20:
    if (plVar9 != (long *)0x0) {
      lVar11 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_02416a78;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(plVar9,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02416a78:
      (*(code *)*puVar8)(plVar9,puVar8[1]);
    }
    if (bVar1) {
      return param_1;
    }
  } while( true );
}


