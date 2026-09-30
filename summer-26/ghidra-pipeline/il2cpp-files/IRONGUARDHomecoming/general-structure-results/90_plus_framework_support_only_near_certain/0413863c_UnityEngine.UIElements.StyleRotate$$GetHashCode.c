/*
FUNCTION_NAME: UnityEngine.UIElements.StyleRotate$$GetHashCode
ENTRY_POINT: 0413863c
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

void UnityEngine_UIElements_StyleRotate__GetHashCode(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long in_x9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  undefined4 unaff_w20;
  
  uVar4 = (**(code **)(in_x9 + 0x208))(param_1,unaff_w20,*(undefined8 *)(in_x9 + 0x210));
  plVar5 = (long *)FUN_04133c3c();
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)Method_System_Linq_Enumerable_Any<ISerializationDepender>__) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_041386bc;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_System_Linq_Enumerable_Any<ISerializationDepender>__,0);
LAB_041386bc:
    plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    puVar3 = Method_System_Linq_Enumerable_Any<int>__;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar8 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0413872c;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
LAB_0413872c:
      uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_0413882c;
        lVar8 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 == 0) goto LAB_04138804;
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_041387ec;
      }
      lVar8 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto FUN_04138788;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
FUN_04138788:
      plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)((long)plVar7 + 0x24) == param_2) {
        (**(code **)(*plVar7 + 0x1b8))(plVar7,1,*(undefined8 *)(*plVar7 + 0x1c0));
      }
    } while( true );
  }
  goto LAB_04138994;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
LAB_041387ec:
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_04138820;
    }
  }
LAB_04138804:
  puVar6 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_04138820:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_0413882c:
  puVar2 = Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
  lVar8 = *(long *)(unaff_x19 + 0x468);
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar8 + 0x10);
    lVar11 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        *(int *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = param_2;
      }
      else {
        FUN_030ba904(lVar8,param_2,
                     *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
      lVar8 = *(long *)(unaff_x19 + 0x470);
      if (lVar8 != 0) {
        lVar9 = *(long *)(lVar8 + 0x10);
        lVar11 = *(long *)puVar2;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar9 != 0) {
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = unaff_w20;
          }
          else {
            FUN_030ba904(lVar8,unaff_w20,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          lVar8 = *(long *)(unaff_x19 + 0x478);
          if (lVar8 != 0) {
            lVar9 = *(long *)(lVar8 + 0x10);
            lVar11 = *(long *)
                      Method_UnityEngine_Rendering_Universal_SharedDecalEntityManager_OnDecalAdd__;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar9 != 0) {
              uVar1 = *(uint *)(lVar8 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                puVar6 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                *puVar6 = uVar4;
                thunk_FUN_01f51358(puVar6,uVar4);
                return;
              }
              FUN_030f2bb4(lVar8,uVar4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
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


