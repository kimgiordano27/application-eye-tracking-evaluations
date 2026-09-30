/*
FUNCTION_NAME: UnityEngine.UIElements.StyleRotate$$ToString
ENTRY_POINT: 04138660
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x04138838) */
/* WARNING: Removing unreachable block (ram,0x04138888) */
/* WARNING: Removing unreachable block (ram,0x0413899c) */

void UnityEngine_UIElements_StyleRotate__ToString(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined8 unaff_x21;
  int unaff_w22;
  
  if (param_1 != (long *)0x0) {
    lVar7 = *param_1;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_System_Linq_Enumerable_Any<ISerializationDepender>__) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_041386bc;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(param_1,*(long *)
                                   Method_System_Linq_Enumerable_Any<ISerializationDepender>__,0);
LAB_041386bc:
    plVar5 = (long *)(*(code *)*puVar4)(param_1,puVar4[1]);
    puVar3 = Method_System_Linq_Enumerable_Any<int>__;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar7 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0413872c;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_0413872c:
      uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_0413882c;
        lVar7 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 == 0) goto LAB_04138804;
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_041387ec;
      }
      lVar7 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto FUN_04138788;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
FUN_04138788:
      plVar6 = (long *)(*(code *)*puVar4)(plVar5,puVar4[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)((long)plVar6 + 0x24) == unaff_w22) {
        (**(code **)(*plVar6 + 0x1b8))(plVar6,1,*(undefined8 *)(*plVar6 + 0x1c0));
      }
    } while( true );
  }
  goto LAB_04138994;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar11 = piVar11 + 4;
    if (uVar9 == 0) break;
LAB_041387ec:
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_04138820;
    }
  }
LAB_04138804:
  puVar4 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_04138820:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_0413882c:
  puVar2 = Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
  lVar7 = *(long *)(unaff_x19 + 0x468);
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar10 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(int *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = unaff_w22;
      }
      else {
        FUN_030ba904(lVar7,unaff_w22,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      lVar7 = *(long *)(unaff_x19 + 0x470);
      if (lVar7 != 0) {
        lVar8 = *(long *)(lVar7 + 0x10);
        lVar10 = *(long *)puVar2;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = unaff_w20;
          }
          else {
            FUN_030ba904(lVar7,unaff_w20,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          lVar7 = *(long *)(unaff_x19 + 0x478);
          if (lVar7 != 0) {
            lVar8 = *(long *)(lVar7 + 0x10);
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar1 = *(uint *)(lVar7 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                puVar4 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                *puVar4 = unaff_x21;
                thunk_FUN_01f51358(puVar4);
                return;
              }
              FUN_030f2bb4();
              return;
            }
          }
        }
      }
    }
  }
LAB_04138994:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


