/*
FUNCTION_NAME: FUN_04127528
ENTRY_POINT: 04127528
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_12;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x041278d0) */
/* WARNING: Removing unreachable block (ram,0x04127890) */

void FUN_04127528(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  undefined8 local_70;
  undefined8 uStack_68;
  
                    /* try { // try from 04127528 to 0422754f has its CatchHandler @ 041274e0 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 04127504 with catch @ 04127538
                        */
                    /* try { // try from 04127550 to 04227553 has its CatchHandler @ 0412757c */
  if ((DAT_04840773 & 1) == 0) {
                    /* try { // try from 04127554 to 0422757f has its CatchHandler @ 041274e0 */
    thunk_FUN_01efb3a4(PTR_DAT_0458a3a0);
    thunk_FUN_01efb3a4(PTR_DAT_0458a3a8);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_DateTime_AddMonths__);
    thunk_FUN_01efb3a4(Method_System_DateTime_AddTicks__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_CompilerServices_TaskAwaiter<List<ValueTuple<OVRAnchor,_SnapshotSceneManager_SnapshotComparer_ChangeType>>>_get_IsCompleted__
                      );
    DAT_04840773 = 1;
  }
  if (param_1[6] != 0) {
    FUN_02b12d10(param_1[6],*(undefined8 *)PTR_DAT_0458a3a8);
    lVar12 = param_1[7];
    if (lVar12 != 0) {
      *(undefined4 *)(lVar12 + 0x18) = 0;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      plVar9 = (long *)(**(code **)(*param_1 + 0x298))(param_1,0,*(undefined8 *)(*param_1 + 0x2a0));
      if (plVar9 != (long *)0x0) {
        lVar12 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)Method_System_DateTime_AddMonths__) {
              puVar10 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_0412765c;
            }
            uVar14 = uVar14 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)Method_System_DateTime_AddMonths__,0);
LAB_0412765c:
        puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
        plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        puVar6 = PTR_DAT_0458a3a0;
        puVar5 = Method_System_DateTime_AddTicks__;
        puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        puVar2 = Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar12 = *plVar9;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
                puVar10 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_041276e4;
              }
              uVar14 = uVar14 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_041276e4:
          uVar14 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if ((uVar14 & 1) == 0) {
            if (plVar9 == (long *)0x0) goto LAB_04127884;
            lVar12 = *plVar9;
            uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar14 == 0) goto LAB_0412785c;
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            goto LAB_04127844;
          }
          lVar12 = *plVar9;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 != 0) {
            piVar16 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
                puVar10 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_04127740;
              }
              uVar14 = uVar14 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar14 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar5,0);
LAB_04127740:
          uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          iVar8 = (**(code **)(*param_1 + 0x2a8))(param_1,uVar7,*(undefined8 *)(*param_1 + 0x2b0));
          if (iVar8 == -1) {
            lVar12 = param_1[7];
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar13 = *(long *)(lVar12 + 0x10);
            lVar15 = *(long *)puVar2;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar1 = *(uint *)(lVar12 + 0x18);
            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar13 + (long)(int)uVar1 * 4 + 0x20) = uVar7;
            }
            else {
              FUN_030ba904(lVar12,uVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
          }
          lVar12 = param_1[6];
          uVar11 = (**(code **)(*param_1 + 0x2b8))(param_1,uVar7,*(undefined8 *)(*param_1 + 0x2c0));
          local_70 = 0;
          uStack_68 = 0;
          FUN_041bf278(&local_70,uVar7,iVar8,uVar11,0);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          Sirenix_Serialization_Utilities_DoubleLookupDictionary<int,_int,_object>__TotalInnerCount
                    (lVar12,uVar7,local_70,uStack_68,*(undefined8 *)puVar6);
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
LAB_04127844:
    if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_04127878;
    }
  }
LAB_0412785c:
  puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_04127878:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_04127884:
  FUN_0412799c(param_1);
  return;
}


