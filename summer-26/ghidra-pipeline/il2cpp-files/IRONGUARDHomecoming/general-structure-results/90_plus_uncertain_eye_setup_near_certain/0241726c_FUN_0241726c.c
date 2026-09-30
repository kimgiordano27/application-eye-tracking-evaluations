/*
FUNCTION_NAME: FUN_0241726c
ENTRY_POINT: 0241726c
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


/* WARNING: Removing unreachable block (ram,0x0241763c) */
/* WARNING: Removing unreachable block (ram,0x024176d8) */

long FUN_0241726c(long param_1,long *param_2,long param_3,long param_4)

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
  long lVar10;
  long lVar11;
  int *piVar12;
  code *pcVar13;
  int iVar14;
  undefined8 uVar15;
  long local_2d8;
  undefined1 auStack_2d0 [208];
  undefined1 auStack_200 [208];
  int local_130 [52];
  
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
    uVar15 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ControlInput_get_couldBeEntered__);
    FUN_034efd20(uVar6,uVar15,0);
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
      uVar15 = FUN_0341265c(param_1,iVar14,0);
      iVar5 = FUN_03568700(uVar15,0);
      iVar5 = iVar5 + 1;
      local_2d8 = FUN_03410500(param_1,0,iVar14,0);
      plVar2 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      goto LAB_024173bc;
    }
  }
  iVar5 = 1;
  local_2d8 = param_1;
  plVar2 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
LAB_024173bc:
  do {
    lVar10 = *(long *)(*(long *)(param_4 + 0x38) + 8);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_01ecaf44(lVar10);
    }
    lVar11 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar7 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar10) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_02417420;
        }
        uVar7 = uVar7 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar7 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(param_2,lVar10,0);
LAB_02417420:
    plVar9 = (long *)(*(code *)*puVar8)(param_2,puVar8[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar10 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *plVar2) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02417480;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar9,*plVar2,0);
LAB_02417480:
      uVar7 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      if ((uVar7 & 1) == 0) {
        bVar1 = true;
        goto joined_r0x024175cc;
      }
      lVar10 = *(long *)(*(long *)(param_4 + 0x38) + 0x18);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44(lVar10);
      }
      lVar11 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar10) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_024174f4;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar9,lVar10,0);
LAB_024174f4:
      (*(code *)*puVar8)(auStack_2d0,plVar9,puVar8[1]);
      memcpy(auStack_200,auStack_2d0,0xd0);
      pcVar13 = *(code **)(param_3 + 0x18);
      uVar15 = *(undefined8 *)(param_3 + 0x40);
      memcpy(local_130,auStack_200,0xd0);
      lVar10 = (*pcVar13)(uVar15,local_130,*(undefined8 *)(param_3 + 0x28));
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar15 = FUN_034127bc(lVar10,0);
      uVar7 = thunk_FUN_0340e318(uVar15,uVar6,0);
    } while ((uVar7 & 1) == 0);
    local_130[0] = iVar5;
    uVar6 = thunk_FUN_01f113fc(*(undefined8 *)
                                Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                               ,local_130);
    param_1 = FUN_0340f2f0(*(undefined8 *)Method_Unity_VisualScripting_ControlConnection__ctor__,
                           local_2d8,uVar6,0);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = FUN_034127bc(param_1,0);
    bVar1 = false;
    iVar5 = iVar5 + 1;
joined_r0x024175cc:
    if (plVar9 != (long *)0x0) {
      lVar10 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_02417624;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)
               FUN_01ecb238(plVar9,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_02417624:
      (*(code *)*puVar8)(plVar9,puVar8[1]);
    }
    if (bVar1) {
      return param_1;
    }
  } while( true );
}


