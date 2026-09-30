/*
FUNCTION_NAME: UnityEngine.UIElements.StyleTranslate$$.ctor
ENTRY_POINT: 04138b30
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_10;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x04138d24) */
/* WARNING: Removing unreachable block (ram,0x04138d84) */
/* WARNING: Removing unreachable block (ram,0x04138da4) */

void UnityEngine_UIElements_StyleTranslate___ctor(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  undefined4 unaff_w20;
  int unaff_w22;
  
  uVar3 = (**(code **)(in_x9 + 0x208))(param_1,unaff_w20,*(undefined8 *)(in_x9 + 0x210));
  plVar4 = (long *)FUN_04133c3c();
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_System_Linq_Enumerable_Any<ISerializationDepender>__) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_04138ba8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_System_Linq_Enumerable_Any<ISerializationDepender>__,0);
LAB_04138ba8:
    plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    puVar2 = Method_System_Linq_Enumerable_Any<int>__;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04138c18;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_04138c18:
      uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar8 & 1) == 0) {
        if (plVar4 == (long *)0x0) goto LAB_04138d18;
        lVar7 = *plVar4;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 == 0) goto LAB_04138cf0;
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        goto LAB_04138cd8;
      }
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04138c74;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
LAB_04138c74:
      plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)((long)plVar6 + 0x24) == unaff_w22) {
        (**(code **)(*plVar6 + 0x1b8))(plVar6,0,*(undefined8 *)(*plVar6 + 0x1c0));
      }
    } while( true );
  }
  goto LAB_04138d9c;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_04138cd8:
    if (*(long *)(piVar9 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_04138d0c;
    }
  }
LAB_04138cf0:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar4,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_04138d0c:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_04138d18:
  puVar1 = Method_Unity_Collections_NativeArray<int>_Dispose__;
  if (*(long *)(unaff_x19 + 0x468) != 0) {
    FUN_030bbd24(*(long *)(unaff_x19 + 0x468),unaff_w22,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<int>_Dispose__);
    if (*(long *)(unaff_x19 + 0x470) != 0) {
      FUN_030bbd24(*(long *)(unaff_x19 + 0x470),unaff_w20,*(undefined8 *)puVar1);
      if (*(long *)(unaff_x19 + 0x478) != 0) {
        FUN_030f4000(*(long *)(unaff_x19 + 0x478),uVar3,*(undefined8 *)PTR_DAT_0457b540);
        return;
      }
    }
  }
LAB_04138d9c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


