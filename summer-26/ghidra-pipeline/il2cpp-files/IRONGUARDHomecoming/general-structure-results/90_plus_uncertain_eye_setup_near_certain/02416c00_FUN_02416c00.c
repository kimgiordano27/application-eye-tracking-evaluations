/*
FUNCTION_NAME: FUN_02416c00
ENTRY_POINT: 02416c00
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 123
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_7;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_16;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x02417108) */
/* WARNING: Removing unreachable block (ram,0x02417190) */

long FUN_02416c00(long param_1,long *param_2,long param_3,long param_4)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  int iVar15;
  ulong __n;
  undefined8 *__src;
  undefined8 *__dest;
  void *__s;
  long alStack_b0 [4];
  long *local_90;
  long local_88;
  int local_7c;
  undefined8 *local_78;
  int local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar11 = *(long *)(param_4 + 0x38);
  local_88 = param_1;
  if (lVar11 == 0) {
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ControlConnection__ctor__);
    lVar11 = *(long *)(param_4 + 0x38);
    if (lVar11 == 0) {
      FUN_01ecafa0(param_4);
      lVar11 = *(long *)(param_4 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*(long *)(lVar11 + 0x28) + 0xfc);
  uVar13 = __n + 0xf & 0x1fffffff0;
  __src = (undefined8 *)((long)alStack_b0 - uVar13);
  __dest = (undefined8 *)((long)__src - uVar13);
  __s = (void *)((long)__dest - uVar13);
  memset(__s,0,__n);
  lVar11 = local_88;
  if (param_3 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar8 = thunk_FUN_01f117cc();
    uVar9 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ControlInput_get_couldBeEntered__);
    FUN_034efd20(uVar8,uVar9,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar8,param_4);
  }
  alStack_b0[1] = lVar5;
  if (param_2 != (long *)0x0) {
    if (local_88 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar5 = FUN_034127bc(local_88,0);
    puVar2 = Method_System_IO_CStreamReader_Read__;
    iVar3 = *(int *)(lVar11 + 0x10);
    local_90 = param_2;
    alStack_b0[3] = param_3;
    if (*(int *)(lVar11 + 0x10) < 1) {
      local_7c = 1;
      alStack_b0[2] = lVar11;
    }
    else {
      do {
        iVar15 = iVar3;
        if (iVar15 < 1) {
          iVar15 = 0;
          break;
        }
        uVar4 = FUN_03409f80(lVar11,iVar15 + -1,0);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar2);
        }
        uVar13 = FUN_034f5e70(uVar4,0);
        lVar11 = local_88;
        iVar3 = iVar15 + -1;
      } while ((uVar13 & 1) != 0);
      lVar11 = local_88;
      param_2 = local_90;
      if (iVar15 == *(int *)(local_88 + 0x10)) {
        local_7c = 1;
        alStack_b0[2] = local_88;
      }
      else {
        uVar8 = FUN_0341265c(local_88,iVar15,0);
        local_7c = FUN_03568700(uVar8,0);
        local_7c = local_7c + 1;
        alStack_b0[2] = FUN_03410500(lVar11,0,iVar15,0);
      }
    }
    do {
      lVar10 = *(long *)(*(long *)(param_4 + 0x38) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44(lVar10);
      }
      lVar12 = *param_2;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == lVar10) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_02416e74;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(param_2,lVar10,0);
LAB_02416e74:
      plVar7 = (long *)(*(code *)*puVar6)(param_2,puVar6[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar10 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__)
            {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_02416edc;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01ecb238(plVar7,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                              ,0);
LAB_02416edc:
        uVar13 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar13 & 1) == 0) {
          bVar1 = true;
          goto joined_r0x02417064;
        }
        lVar10 = *(long *)(*(long *)(param_4 + 0x38) + 0x18);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01ecaf44(lVar10);
        }
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == lVar10) {
              lVar10 = lVar12 + (long)*piVar14 * 0x10 + 0x138;
              goto LAB_02416f50;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        lVar10 = FUN_01ecb238(plVar7,lVar10,0);
LAB_02416f50:
        lVar10 = *(long *)(lVar10 + 8);
        local_78 = __src;
        (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,plVar7,&local_78,__src);
        memcpy(__s,__src,__n);
        memcpy(__dest,__s,__n);
        local_78 = __dest;
        if (-1 < *(int *)(*(long *)(*(long *)(param_4 + 0x38) + 0x28) + 0x28)) {
          local_78 = (undefined8 *)*__dest;
        }
        puVar6 = *(undefined8 **)(*(long *)(param_4 + 0x38) + 0x30);
        (*(code *)puVar6[2])(*puVar6,puVar6,param_3,&local_78,&local_70);
        if (CONCAT44(uStack_6c,local_70) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar8 = FUN_034127bc(CONCAT44(uStack_6c,local_70),0);
        uVar13 = thunk_FUN_0340e318(uVar8,lVar5,0);
      } while ((uVar13 & 1) == 0);
      local_70 = local_7c;
      uVar8 = thunk_FUN_01f113fc(*(undefined8 *)
                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                 ,&local_70);
      lVar11 = FUN_0340f2f0(*(undefined8 *)Method_Unity_VisualScripting_ControlConnection__ctor__,
                            alStack_b0[2],uVar8,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar5 = FUN_034127bc(lVar11,0);
      bVar1 = false;
      local_7c = local_7c + 1;
joined_r0x02417064:
      if (plVar7 != (long *)0x0) {
        lVar10 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
        local_88 = lVar5;
        if (uVar13 != 0) {
          piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_024170d8;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_01ecb238(plVar7,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_024170d8:
        (*(code *)*puVar6)(plVar7,puVar6[1]);
        param_3 = alStack_b0[3];
        lVar5 = local_88;
      }
      param_2 = local_90;
    } while (!bVar1);
  }
  if (*(long *)(alStack_b0[1] + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar11;
}


