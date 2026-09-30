/*
FUNCTION_NAME: UnityEngine.UIElements.VisualElement$$get_worldClipIsInfinite
ENTRY_POINT: 041275b0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x041278d0) */
/* WARNING: Removing unreachable block (ram,0x04127890) */

void UnityEngine_UIElements_VisualElement__get_worldClipIsInfinite(void)

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
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  long *unaff_x19;
  long unaff_x20;
  
  thunk_FUN_01efb3a4();
  *(undefined1 *)(unaff_x20 + 0x773) = 1;
                    /* try { // try from 041275c0 to 042275e3 has its CatchHandler @ 041275f4 */
  if (unaff_x19[6] != 0) {
    FUN_02b12d10(unaff_x19[6],*(undefined8 *)PTR_DAT_0458a3a8);
    lVar11 = unaff_x19[7];
    if (lVar11 != 0) {
      *(undefined4 *)(lVar11 + 0x18) = 0;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      plVar9 = (long *)(**(code **)(*unaff_x19 + 0x298))();
      if (plVar9 != (long *)0x0) {
        lVar11 = *plVar9;
        uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)Method_System_DateTime_AddMonths__) {
              puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0412765c;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
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
          lVar11 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
                puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_041276e4;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar4,0);
LAB_041276e4:
          uVar13 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if ((uVar13 & 1) == 0) {
            if (plVar9 == (long *)0x0) goto LAB_04127884;
            lVar11 = *plVar9;
            uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar13 == 0) goto LAB_0412785c;
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            goto LAB_04127844;
          }
          lVar11 = *plVar9;
          uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
                puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_04127740;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar5,0);
LAB_04127740:
          uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          iVar8 = (**(code **)(*unaff_x19 + 0x2a8))();
          if (iVar8 == -1) {
            lVar11 = unaff_x19[7];
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar12 = *(long *)(lVar11 + 0x10);
            lVar14 = *(long *)puVar2;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar12 + (long)(int)uVar1 * 4 + 0x20) = uVar7;
            }
            else {
              FUN_030ba904(lVar11,uVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
          }
          lVar11 = unaff_x19[6];
          (**(code **)(*unaff_x19 + 0x2b8))();
          FUN_041bf278();
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          Sirenix_Serialization_Utilities_DoubleLookupDictionary<int,_int,_object>__TotalInnerCount
                    (lVar11,uVar7,0,0,*(undefined8 *)puVar6);
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_04127844:
    if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
      puVar10 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_04127878;
    }
  }
LAB_0412785c:
  puVar10 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar3,0);
LAB_04127878:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_04127884:
  FUN_0412799c();
  return;
}


