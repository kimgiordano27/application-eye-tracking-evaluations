/*
FUNCTION_NAME: UnityEngine.UIElements.StyleFontDefinition$$Equals
ENTRY_POINT: 04137e84
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x041380e8) */

void UnityEngine_UIElements_StyleFontDefinition__Equals(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xe08));
  thunk_FUN_01efb3a4(StringLiteral_3368);
  thunk_FUN_01efb3a4(
                    Method_System_Runtime_CompilerServices_TaskAwaiter<List<ValueTuple<OVRAnchor,_SnapshotSceneManager_SnapshotComparer_ChangeType>>>_get_IsCompleted__
                    );
  *(undefined1 *)(unaff_x20 + 0x813) = 1;
  plVar5 = (long *)FUN_04133c3c();
  if (plVar5 != (long *)0x0) {
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_System_Linq_Enumerable_Any<ISerializationDepender>__) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_04137f10;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01ecb238(plVar5,*(long *)
                                  Method_System_Linq_Enumerable_Any<ISerializationDepender>__,0);
LAB_04137f10:
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    puVar4 = Method_System_Linq_Enumerable_Any<int>__;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto UnityEngine_UIElements_StyleInt__op_Equality;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar3,0);
UnityEngine_UIElements_StyleInt__op_Equality:
      uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_04138068;
        lVar8 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 == 0) goto LAB_04138040;
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_04138028;
      }
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_04137fe4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar4,0);
LAB_04137fe4:
      plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      (**(code **)(*plVar7 + 0x1b8))(plVar7,0,*(undefined8 *)(*plVar7 + 0x1c0));
    } while( true );
  }
  goto LAB_041380e0;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_04138028:
    if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto FUN_0413805c;
    }
  }
LAB_04138040:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar5,*(long *)puVar2,0);
FUN_0413805c:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_04138068:
  lVar8 = *(long *)(unaff_x19 + 0x468);
  if (lVar8 != 0) {
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    lVar8 = *(long *)(unaff_x19 + 0x470);
    if (lVar8 != 0) {
      *(undefined4 *)(lVar8 + 0x18) = 0;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      lVar8 = *(long *)(unaff_x19 + 0x478);
      if (lVar8 != 0) {
        iVar1 = *(int *)(lVar8 + 0x18);
        *(undefined4 *)(lVar8 + 0x18) = 0;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (0 < iVar1) {
          FUN_0358d1e4(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
          return;
        }
        return;
      }
    }
  }
LAB_041380e0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


