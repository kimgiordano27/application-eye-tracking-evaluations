/*
FUNCTION_NAME: FUN_020887f0
ENTRY_POINT: 020887f0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02088b58) */

void FUN_020887f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  int *piVar13;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  
  if ((DAT_0482f73f & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<object>_Push__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Stack<Tween>_Push__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_ObjectPool<List<ProbeBrickIndex_VoxelMeta>>_Release__
                      );
                    /* try { // try from 0208888c to 02188897 has its CatchHandler @ 02089ee8 */
    DAT_0482f73f = 1;
  }
  lVar6 = FUN_04070398(param_8,0);
  puVar3 = Method_System_Collections_Generic_Stack<Tween>_Push__;
  puVar2 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if (lVar6 != 0) {
    uVar7 = FUN_0407d2c4(lVar6,0);
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(lVar6);
    }
    lVar6 = FUN_023aa90c(param_9,uVar7,*(undefined8 *)puVar3);
    puVar3 = Method_System_Collections_Generic_Stack<object>_Push__;
    if (lVar6 != 0) {
      FUN_0406f8a4(lVar6,0,0);
      uVar7 = FUN_022c59ec(param_8,*(undefined8 *)puVar3);
      FUN_037a9b38(lVar6,uVar7,0);
      lVar8 = FUN_04070398(lVar6,0);
      if (lVar8 != 0) {
        FUN_0407de3c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,lVar8,0);
        lVar6 = FUN_04070398(lVar6,0);
        puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
        if (lVar6 != 0) {
          plVar9 = (long *)FUN_0407eda0(lVar6,0);
          puVar5 = 
          Method_UnityEngine_Rendering_ObjectPool<List<ProbeBrickIndex_VoxelMeta>>_Release__;
          puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          do {
            lVar8 = *plVar9;
            lVar6 = *(long *)puVar4;
            uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar6) {
                  puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_020889d0;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar6,0);
LAB_020889d0:
            uVar12 = (*(code *)*puVar10)(plVar9,puVar10[1]);
            if ((uVar12 & 1) == 0) {
              plVar9 = (long *)thunk_FUN_01f116d0(plVar9,*(undefined8 *)puVar3);
              if (plVar9 == (long *)0x0) goto LAB_02088af4;
              lVar8 = *plVar9;
              lVar6 = *(long *)puVar3;
              uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar12 == 0) goto LAB_02088acc;
              piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              goto LAB_02088ab4;
            }
            lVar8 = *plVar9;
            lVar6 = *(long *)puVar4;
            uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == lVar6) {
                  puVar10 = (undefined8 *)(lVar8 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto LAB_02088a30;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar6,1);
LAB_02088a30:
            plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc();
            }
            FUN_0407da88(uStack0000000000000000,uStack0000000000000004,in_stack_00000008,plVar11,0);
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_02088ab4:
    if (*(long *)(piVar13 + -2) == lVar6) {
      puVar10 = (undefined8 *)(lVar8 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_02088ae8;
    }
  }
LAB_02088acc:
  puVar10 = (undefined8 *)FUN_01ecb238(plVar9,lVar6,0);
LAB_02088ae8:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_02088af4:
  uVar7 = FUN_040703d4(param_8,0);
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(lVar6);
  }
  FUN_040770d0(uVar7,0);
  return;
}


