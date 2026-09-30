/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<NavMeshBuildMarkup>
ENTRY_POINT: 02416c74
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_6;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_14;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x02417108) */
/* WARNING: Removing unreachable block (ram,0x02417190) */

long System_Array__InternalArray__IEnumerable_GetEnumerator<NavMeshBuildMarkup>(void)

{
  bool bVar1;
  long *plVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long unaff_x20;
  int iVar16;
  undefined8 unaff_x21;
  ulong __n;
  undefined1 *__src;
  undefined8 *__dest;
  void *__s;
  long *unaff_x28;
  long unaff_x29;
  
  thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ControlConnection__ctor__);
  lVar12 = *(long *)(unaff_x19 + 0x38);
  if (lVar12 == 0) {
    FUN_01ecafa0();
    lVar12 = *(long *)(unaff_x19 + 0x38);
  }
  __n = (ulong)*(uint *)(*(long *)(lVar12 + 0x28) + 0xfc);
  uVar14 = __n + 0xf & 0x1fffffff0;
  __src = &stack0x00000000 + -uVar14;
  __dest = (undefined8 *)(__src + -uVar14);
  __s = (void *)((long)__dest - uVar14);
  memset(__s,0,__n);
  if (unaff_x20 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar9 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_ControlInput_get_couldBeEntered__);
    FUN_034efd20(uVar6,uVar9,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6);
  }
  *(undefined8 *)(unaff_x29 + -0x48) = unaff_x21;
  if (unaff_x28 == (long *)0x0) {
    lVar12 = *(long *)(unaff_x29 + -0x28);
  }
  else {
    lVar12 = *(long *)(unaff_x29 + -0x28);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = FUN_034127bc(lVar12,0);
    iVar5 = *(int *)(lVar12 + 0x10);
    *(long **)(unaff_x29 + -0x30) = unaff_x28;
    puVar3 = Method_System_IO_CStreamReader_Read__;
    if (iVar5 < 1) {
      *(undefined4 *)(unaff_x29 + -0x1c) = 1;
      *(long *)(unaff_x29 + -0x40) = lVar12;
    }
    else {
      do {
        iVar16 = iVar5;
        if (iVar16 < 1) {
          iVar16 = 0;
          break;
        }
        uVar4 = FUN_03409f80(lVar12,iVar16 + -1,0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar3);
        }
        uVar14 = FUN_034f5e70(uVar4,0);
        lVar12 = *(long *)(unaff_x29 + -0x28);
        iVar5 = iVar16 + -1;
      } while ((uVar14 & 1) != 0);
      unaff_x28 = *(long **)(unaff_x29 + -0x30);
      lVar12 = *(long *)(unaff_x29 + -0x28);
      if (iVar16 == *(int *)(lVar12 + 0x10)) {
        *(undefined4 *)(unaff_x29 + -0x1c) = 1;
        *(long *)(unaff_x29 + -0x40) = lVar12;
      }
      else {
        uVar9 = FUN_0341265c(lVar12,iVar16,0);
        iVar5 = FUN_03568700(uVar9,0);
        *(int *)(unaff_x29 + -0x1c) = iVar5 + 1;
        uVar9 = FUN_03410500(lVar12,0,iVar16,0);
        *(undefined8 *)(unaff_x29 + -0x40) = uVar9;
      }
    }
    *(long *)(unaff_x29 + -0x38) = unaff_x20;
    do {
      lVar10 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44(lVar10);
      }
      lVar13 = *unaff_x28;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar10) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_02416e74;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(unaff_x28,lVar10,0);
LAB_02416e74:
      plVar8 = (long *)(*(code *)*puVar7)(unaff_x28,puVar7[1]);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar10 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__)
            {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_02416edc;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01ecb238(plVar8,*(long *)
                                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                              ,0);
LAB_02416edc:
        uVar14 = (*(code *)*puVar7)(plVar8,puVar7[1]);
        if ((uVar14 & 1) == 0) {
          bVar1 = true;
          plVar2 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
          goto joined_r0x02417064;
        }
        lVar10 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01ecaf44(lVar10);
        }
        lVar13 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar10) {
              lVar10 = lVar13 + (long)*piVar15 * 0x10 + 0x138;
              goto LAB_02416f50;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        lVar10 = FUN_01ecb238(plVar8,lVar10,0);
LAB_02416f50:
        *(undefined1 **)(unaff_x29 + -0x18) = __src;
        lVar10 = *(long *)(lVar10 + 8);
        (**(code **)(lVar10 + 0x10))
                  (*(undefined8 *)(lVar10 + 8),lVar10,plVar8,unaff_x29 + -0x18,__src);
        memcpy(__s,__src,__n);
        memcpy(__dest,__s,__n);
        puVar7 = __dest;
        if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x28)) {
          puVar7 = (undefined8 *)*__dest;
        }
        puVar11 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x30);
        uVar9 = *puVar11;
        *(undefined8 **)(unaff_x29 + -0x18) = puVar7;
        (*(code *)puVar11[2])(uVar9,puVar11,unaff_x20,unaff_x29 + -0x18,unaff_x29 + -0x10);
        if (*(long *)(unaff_x29 + -0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar9 = FUN_034127bc(*(long *)(unaff_x29 + -0x10),0);
        uVar14 = thunk_FUN_0340e318(uVar9,uVar6,0);
      } while ((uVar14 & 1) == 0);
      uVar6 = *(undefined8 *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
      *(undefined4 *)(unaff_x29 + -0x10) = *(undefined4 *)(unaff_x29 + -0x1c);
      uVar6 = thunk_FUN_01f113fc(uVar6,unaff_x29 + -0x10);
      lVar12 = FUN_0340f2f0(*(undefined8 *)Method_Unity_VisualScripting_ControlConnection__ctor__,
                            *(undefined8 *)(unaff_x29 + -0x40),uVar6,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar6 = FUN_034127bc(lVar12,0);
      bVar1 = false;
      *(int *)(unaff_x29 + -0x1c) = *(int *)(unaff_x29 + -0x1c) + 1;
      plVar2 = (long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
joined_r0x02417064:
      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__ = (undefined *)plVar2
      ;
      if (plVar8 != (long *)0x0) {
        lVar10 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar10 + 0x12e);
        *(undefined8 *)(unaff_x29 + -0x28) = uVar6;
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *plVar2) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_024170d8;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238(plVar8,*plVar2,0);
LAB_024170d8:
        (*(code *)*puVar7)(plVar8,puVar7[1]);
        unaff_x20 = *(long *)(unaff_x29 + -0x38);
        uVar6 = *(undefined8 *)(unaff_x29 + -0x28);
      }
      unaff_x28 = *(long **)(unaff_x29 + -0x30);
    } while (!bVar1);
  }
  if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar12;
}


