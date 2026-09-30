/*
FUNCTION_NAME: FUN_03647f60
ENTRY_POINT: 03647f60
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_8;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x0364839c) */

void FUN_03647f60(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  int local_98;
  
  if ((DAT_04833bc2 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_LessThanHandler_<>c_<_ctor>b__0_27__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_LessThanHandler_<>c_<_ctor>b__0_28__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_ObjectPool<List<ProbeBrickIndex_VoxelMeta>>_Release__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_LessThanHandler_<>c_<_ctor>b__0_29__);
    DAT_04833bc2 = 1;
  }
  puVar7 = Method_Unity_VisualScripting_LessThanHandler_<>c_<_ctor>b__0_29__;
  puVar6 = Method_Unity_VisualScripting_LessThanHandler_<>c_<_ctor>b__0_27__;
  puVar5 = Method_UnityEngine_Rendering_ObjectPool<List<ProbeBrickIndex_VoxelMeta>>_Release__;
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar3 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if (*(long *)(param_4 + 0x20) != 0) {
    fVar20 = -1.0;
    iVar17 = 0;
    fVar22 = -1.0;
    if (*(int *)(*(long *)(param_4 + 0x20) + 0x50) != 0) {
      fVar22 = 1.0;
    }
    while (*(long *)(param_4 + 0x28) != 0) {
      lVar8 = FUN_030f28e4(*(long *)(param_4 + 0x28),iVar17,
                           *(undefined8 *)
                            Method_Unity_VisualScripting_LessThanHandler_<>c_<_ctor>b__0_28__);
      if ((*(long *)(param_4 + 0x20) == 0) ||
         (lVar9 = FUN_036a2a20(*(long *)(param_4 + 0x20),iVar17,0), lVar9 == 0)) break;
      plVar10 = (long *)FUN_0407eda0(lVar9,0);
LAB_0364808c:
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar14 = *plVar10;
      lVar9 = *(long *)puVar4;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == lVar9) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_036480dc;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238(plVar10,lVar9,0);
LAB_036480dc:
      uVar15 = (*(code *)*puVar11)(plVar10,puVar11[1]);
      if ((uVar15 & 1) != 0) {
        lVar14 = *plVar10;
        lVar9 = *(long *)puVar4;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == lVar9) {
              puVar11 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
              goto LAB_0364813c;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar10,lVar9,1);
LAB_0364813c:
        plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar12);
        }
        uVar13 = FUN_040766fc(plVar12,0);
        uVar15 = FUN_0340e600(uVar13,*(undefined8 *)puVar7,0);
        if ((uVar15 & 1) == 0) {
          fVar18 = (float)FUN_0407c8cc(plVar12,0);
          fVar19 = (float)FUN_0407ec3c(plVar12,0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar9 = *(long *)(lVar8 + 0x10);
          lVar14 = *(long *)puVar6;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar2 = *(uint *)(lVar8 + 0x18);
          fVar21 = fVar22 * fVar20;
          fVar20 = fVar22 * param_3;
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + (long)(int)uVar2 * 0x14;
            *(uint *)(lVar8 + 0x18) = uVar2 + 1;
            *(float *)(lVar9 + 0x20) = fVar22 * fVar18;
            *(float *)(lVar9 + 0x24) = fVar21;
            *(float *)(lVar9 + 0x28) = fVar20;
            *(float *)(lVar9 + 0x2c) = fVar19 * 0.5;
            *(int *)(lVar9 + 0x30) = iVar17;
            param_3 = fVar21;
          }
          else {
            local_a8 = fVar22 * fVar18;
            fStack_a4 = fVar21;
            local_a0 = fVar20;
            fStack_9c = fVar19 * 0.5;
            local_98 = iVar17;
            FUN_030acdf4(lVar8,&local_a8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            param_3 = fVar21;
          }
          uVar13 = FUN_040703d4(plVar12,0);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_040770d0(uVar13,0);
        }
        goto LAB_0364808c;
      }
      plVar10 = (long *)thunk_FUN_01f116d0(plVar10,*(undefined8 *)
                                                                                                        
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                          );
      if (plVar10 != (long *)0x0) {
        lVar8 = *plVar10;
        uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar11 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_036482dc;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar11 = (undefined8 *)
                  FUN_01ecb238(plVar10,*(long *)
                                        Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                               ,0);
LAB_036482dc:
        (*(code *)*puVar11)(plVar10,puVar11[1]);
      }
      iVar17 = iVar17 + 1;
      if (iVar17 == 0x18) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


