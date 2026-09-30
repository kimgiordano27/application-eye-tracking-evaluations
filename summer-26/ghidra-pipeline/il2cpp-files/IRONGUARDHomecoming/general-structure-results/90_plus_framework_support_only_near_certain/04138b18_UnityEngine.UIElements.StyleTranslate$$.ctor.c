/*
FUNCTION_NAME: UnityEngine.UIElements.StyleTranslate$$.ctor
ENTRY_POINT: 04138b18
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

void UnityEngine_UIElements_StyleTranslate___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  code *in_x9;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  undefined4 unaff_w20;
  
  iVar3 = (*in_x9)();
  plVar7 = *(long **)(unaff_x19 + 0x448);
  if (plVar7 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar7 + 0x208))(plVar7,unaff_w20,*(undefined8 *)(*plVar7 + 0x210));
    plVar7 = (long *)FUN_04133c3c();
    if (plVar7 != (long *)0x0) {
      lVar8 = *plVar7;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_System_Linq_Enumerable_Any<ISerializationDepender>__) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04138ba8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar7,*(long *)
                                    Method_System_Linq_Enumerable_Any<ISerializationDepender>__,0);
LAB_04138ba8:
      plVar7 = (long *)(*(code *)*puVar5)(plVar7,puVar5[1]);
      puVar2 = Method_System_Linq_Enumerable_Any<int>__;
      puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar8 = *plVar7;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_04138c18;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar1,0);
LAB_04138c18:
        uVar9 = (*(code *)*puVar5)(plVar7,puVar5[1]);
        if ((uVar9 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_04138d18;
          lVar8 = *plVar7;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 == 0) goto LAB_04138cf0;
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_04138cd8;
        }
        lVar8 = *plVar7;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_04138c74;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_04138c74:
        plVar6 = (long *)(*(code *)*puVar5)(plVar7,puVar5[1]);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(int *)((long)plVar6 + 0x24) == iVar3) {
          (**(code **)(*plVar6 + 0x1b8))(plVar6,0,*(undefined8 *)(*plVar6 + 0x1c0));
        }
      } while( true );
    }
  }
  goto LAB_04138d9c;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_04138cd8:
    if (*(long *)(piVar10 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_04138d0c;
    }
  }
LAB_04138cf0:
  puVar5 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_04138d0c:
  (*(code *)*puVar5)(plVar7,puVar5[1]);
LAB_04138d18:
  puVar1 = Method_Unity_Collections_NativeArray<int>_Dispose__;
  if (*(long *)(unaff_x19 + 0x468) != 0) {
    FUN_030bbd24(*(long *)(unaff_x19 + 0x468),iVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<int>_Dispose__);
    if (*(long *)(unaff_x19 + 0x470) != 0) {
      FUN_030bbd24(*(long *)(unaff_x19 + 0x470),unaff_w20,*(undefined8 *)puVar1);
      if (*(long *)(unaff_x19 + 0x478) != 0) {
        FUN_030f4000(*(long *)(unaff_x19 + 0x478),uVar4,*(undefined8 *)PTR_DAT_0457b540);
        return;
      }
    }
  }
LAB_04138d9c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


