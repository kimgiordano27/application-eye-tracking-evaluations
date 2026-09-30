/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<NavMeshBuildSource>
ENTRY_POINT: 02416d28
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x02417190) */
/* WARNING: Removing unreachable block (ram,0x02417108) */

long System_Array__InternalArray__IEnumerable_GetEnumerator<NavMeshBuildSource>
               (undefined8 param_1,ulong param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  undefined8 unaff_x20;
  int iVar14;
  uint unaff_w22;
  size_t unaff_x23;
  void *unaff_x24;
  undefined8 *unaff_x25;
  void *unaff_x26;
  undefined8 unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  while( true ) {
    uVar3 = FUN_03409f80(param_1,param_2,param_3);
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*unaff_x28);
    }
    uVar5 = FUN_034f5e70(uVar3,0);
    param_1 = *(undefined8 *)(unaff_x29 + -0x28);
    if ((uVar5 & 1) == 0) break;
    if ((int)unaff_w22 < 1) {
      iVar14 = 0;
LAB_02416db0:
      plVar7 = *(long **)(unaff_x29 + -0x30);
      lVar9 = *(long *)(unaff_x29 + -0x28);
      if (iVar14 == *(int *)(lVar9 + 0x10)) {
        *(undefined4 *)(unaff_x29 + -0x1c) = 1;
        *(long *)(unaff_x29 + -0x40) = lVar9;
      }
      else {
        uVar8 = FUN_0341265c(lVar9,iVar14,0);
        iVar4 = FUN_03568700(uVar8,0);
        *(int *)(unaff_x29 + -0x1c) = iVar4 + 1;
        uVar8 = FUN_03410500(lVar9,0,iVar14,0);
        *(undefined8 *)(unaff_x29 + -0x40) = uVar8;
      }
      *(undefined8 *)(unaff_x29 + -0x38) = unaff_x20;
      do {
        lVar10 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01ecaf44(lVar10);
        }
        lVar12 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar5 != 0) {
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar6 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_02416e74;
            }
            uVar5 = uVar5 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar7,lVar10,0);
LAB_02416e74:
        plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar10 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar5 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) ==
                  *(long *)
                   Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
                puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_02416edc;
              }
              uVar5 = uVar5 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)
                   FUN_01ecb238(plVar7,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__
                                ,0);
LAB_02416edc:
          uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
          if ((uVar5 & 1) == 0) {
            bVar1 = true;
            if (plVar7 == (long *)0x0) goto LAB_024170f8;
            goto LAB_02417068;
          }
          lVar10 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x18);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01ecaf44(lVar10);
          }
          lVar12 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar5 != 0) {
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == lVar10) {
                lVar10 = lVar12 + (long)*piVar13 * 0x10 + 0x138;
                goto LAB_02416f50;
              }
              uVar5 = uVar5 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar5 != 0);
          }
          lVar10 = FUN_01ecb238(plVar7,lVar10,0);
LAB_02416f50:
          *(void **)(unaff_x29 + -0x18) = unaff_x24;
          lVar10 = *(long *)(lVar10 + 8);
          (**(code **)(lVar10 + 0x10))(*(undefined8 *)(lVar10 + 8),lVar10,plVar7,unaff_x29 + -0x18);
          memcpy(unaff_x26,unaff_x24,unaff_x23);
          memcpy(unaff_x25,unaff_x26,unaff_x23);
          puVar6 = unaff_x25;
          if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x28) + 0x28)) {
            puVar6 = (undefined8 *)*unaff_x25;
          }
          puVar11 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x30);
          uVar8 = *puVar11;
          *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
          (*(code *)puVar11[2])(uVar8,puVar11,unaff_x20,unaff_x29 + -0x18,unaff_x29 + -0x10);
          if (*(long *)(unaff_x29 + -0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar8 = FUN_034127bc(*(long *)(unaff_x29 + -0x10),0);
          uVar5 = thunk_FUN_0340e318(uVar8,unaff_x27,0);
        } while ((uVar5 & 1) == 0);
        uVar8 = *(undefined8 *)Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
        *(undefined4 *)(unaff_x29 + -0x10) = *(undefined4 *)(unaff_x29 + -0x1c);
        uVar8 = thunk_FUN_01f113fc(uVar8,unaff_x29 + -0x10);
        lVar9 = FUN_0340f2f0(*(undefined8 *)Method_Unity_VisualScripting_ControlConnection__ctor__,
                             *(undefined8 *)(unaff_x29 + -0x40),uVar8,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        unaff_x27 = FUN_034127bc(lVar9,0);
        bVar1 = false;
        *(int *)(unaff_x29 + -0x1c) = *(int *)(unaff_x29 + -0x1c) + 1;
        if (plVar7 != (long *)0x0) {
LAB_02417068:
          puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
          lVar10 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
          *(undefined8 *)(unaff_x29 + -0x28) = unaff_x27;
          if (uVar5 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_024170d8;
              }
              uVar5 = uVar5 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_024170d8:
          (*(code *)*puVar6)(plVar7,puVar6[1]);
          unaff_x20 = *(undefined8 *)(unaff_x29 + -0x38);
          unaff_x27 = *(undefined8 *)(unaff_x29 + -0x28);
        }
LAB_024170f8:
        plVar7 = *(long **)(unaff_x29 + -0x30);
        if (bVar1) {
          if (*(long *)(*(long *)(unaff_x29 + -0x48) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return lVar9;
        }
      } while( true );
    }
    param_2 = (ulong)(unaff_w22 - 1);
    param_3 = 0;
    unaff_w22 = unaff_w22 - 1;
  }
  iVar14 = unaff_w22 + 1;
  goto LAB_02416db0;
}


