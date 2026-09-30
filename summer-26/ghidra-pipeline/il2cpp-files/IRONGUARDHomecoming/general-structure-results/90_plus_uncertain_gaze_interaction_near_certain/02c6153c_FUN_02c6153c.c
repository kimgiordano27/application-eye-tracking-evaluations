/*
FUNCTION_NAME: FUN_02c6153c
ENTRY_POINT: 02c6153c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 180
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_6;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_21;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02c61d28) */
/* WARNING: Removing unreachable block (ram,0x02c61d30) */
/* WARNING: Removing unreachable block (ram,0x02c61c18) */

void FUN_02c6153c(long param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined4 *puVar15;
  long lVar16;
  int *piVar17;
  undefined8 uVar18;
  undefined1 local_90 [16];
  long local_80;
  undefined1 local_78 [16];
  long local_68;
  
  puVar3 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  if ((DAT_048314e3 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Min__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<Expression>__);
    thunk_FUN_01efb3a4(
                      Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<ParameterExpression>__
                      );
                    /* try { // try from 02c615a8 to 02d615ff has its CatchHandler @ 02c615a8
                       catch() { ... } // from try @ 02c615a8 with catch @ 02c615a8
                       catch() { ... } // from try @ 02c616c0 with catch @ 02c615a8
                       catch() { ... } // from try @ 02c61748 with catch @ 02c615a8
                       catch() { ... } // from try @ 02c6178c with catch @ 02c615a8
                       catch() { ... } // from try @ 02c617bc with catch @ 02c615a8
                       catch() { ... } // from try @ 02c6183c with catch @ 02c615a8 */
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Min__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Range__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Sum__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EnumerableCloner_FillClone__);
                    /* try { // try from 02c61600 to 02d6162f has its CatchHandler @ 02c616c0 */
    thunk_FUN_01efb3a4(Method_Meta_WitAi_EnumerableExtensions_Equivalent<string>__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_EnumerableExtensions_Equivalent<WitEntityKeywordInfo>__);
    thunk_FUN_01efb3a4(Method_Meta_WitAi_EnumerableExtensions_Equivalent<WitEntityRoleInfo>__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__);
    thunk_FUN_01efb3a4(Method_System_Environment_UnixGetFolderPath__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<TouchControl>_get_Item__
                      );
                    /* try { // try from 02c61648 to 02d616bf has its CatchHandler @ 02c616cc */
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EqualityComparison_Equal__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EqualityComparison_NotEqual__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_CheckCase__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_CheckExactArgumentCount__
                      );
    DAT_048314e3 = 1;
  }
  local_78._8_8_ = 0;
  local_68 = 0;
  local_80 = 0;
  local_78._0_8_ = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar8 = FUN_03582560(param_2,0,0);
  if ((uVar8 & 1) == 0) {
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02c61600 with catch @ 02c616c0
                       try { // try from 02c616c0 to 02d616e7 has its CatchHandler @ 02c615a8 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02c61648 with catch @ 02c616cc
                        */
    uVar8 = (**(code **)(*param_2 + 0x5c8))(param_2,*(undefined8 *)(*param_2 + 0x5d0));
    puVar4 = Method_Meta_WitAi_EnumerableExtensions_Equivalent<WitEntityKeywordInfo>__;
    puVar3 = Method_Meta_WitAi_EnumerableExtensions_Equivalent<string>__;
    if ((uVar8 & 1) != 0) {
                    /* try { // try from 02c616e8 to 02d616ff has its CatchHandler @ 02c61780 */
      if (*(int *)(*(long *)Method_Meta_WitAi_EnumerableExtensions_Equivalent<WitEntityRoleInfo>__ +
                  0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
                    /* try { // try from 02c61704 to 02d61707 has its CatchHandler @ 02c61770 */
      local_78 = FUN_030380ec(&local_68,*(undefined8 *)puVar3);
                    /* try { // try from 02c61714 to 02d6172b has its CatchHandler @ 02c61774 */
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
                    /* try { // try from 02c6172c to 02d61747 has its CatchHandler @ 02c61778 */
      local_90 = FUN_03037d40(&local_80,
                              *(undefined8 *)
                               Method_Unity_VisualScripting_EnumerableCloner_FillClone__);
                    /* try { // try from 02c61748 to 02d6175b has its CatchHandler @ 02c615a8 */
      uVar9 = (**(code **)(*param_2 + 0x6d8))(param_2,0x18,*(undefined8 *)(*param_2 + 0x6e0));
                    /* try { // try from 02c6175c to 02d6176b has its CatchHandler @ 02c61780 */
      lVar10 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44();
      }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02c61704 with catch @ 02c61770
                        */
      if (*(int *)(lVar10 + 0xe0) == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02c61714 with catch @ 02c61774
                        */
        thunk_FUN_01ee6d7c();
      }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02c6172c with catch @ 02c61778
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02c616e8 with catch @ 02c61780
                       catch(type#1 @ 042b3198) { ... } // from try @ 02c6175c with catch @ 02c61780
                        */
      lVar10 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
                    /* try { // try from 02c61788 to 02d6178b has its CatchHandler @ 02c61844 */
                    /* try { // try from 02c6178c to 02d617a3 has its CatchHandler @ 02c615a8 */
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01ecaf44();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      if (lVar10 == 0) {
                    /* try { // try from 02c617a4 to 02d617bb has its CatchHandler @ 02c61834 */
        lVar10 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01ecaf44();
        }
                    /* try { // try from 02c617bc to 02d61823 has its CatchHandler @ 02c615a8 */
        if (*(int *)(lVar10 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar10 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_01ecaf44();
        }
        uVar18 = **(undefined8 **)(lVar10 + 0xb8);
        lVar10 = thunk_FUN_01f117cc(*(undefined8 *)
                                     Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<ParameterExpression>__
                                   );
        FUN_02e6c0a0(lVar10,uVar18,
                     *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18),0);
        lVar16 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
        lVar11 = *(long *)(lVar16 + 0x10);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_01ecaf44();
          lVar16 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
        }
        *(long *)(*(long *)(lVar11 + 0xb8) + 8) = lVar10;
        lVar11 = *(long *)(lVar16 + 0x10);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_01ecaf44();
        }
        thunk_FUN_01f51358(*(long *)(lVar11 + 0xb8) + 8,lVar10);
      }
      plVar12 = (long *)FUN_0230b6f4(uVar9,lVar10,
                                     *(undefined8 *)
                                      Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<Expression>__
                                    );
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = *plVar12;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)Method_System_Linq_Enumerable_Range__) {
            puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_02c618cc;
          }
          uVar8 = uVar8 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar8 != 0);
      }
      puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)Method_System_Linq_Enumerable_Range__,0)
      ;
LAB_02c618cc:
      plVar12 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      puVar7 = Method_System_Environment_UnixGetFolderPath__;
      puVar6 = Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__;
      puVar5 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      puVar4 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
      puVar3 = Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar10 = *plVar12;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
              puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_02c61958;
            }
            uVar8 = uVar8 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar8 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)puVar5,0);
LAB_02c61958:
        uVar8 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        if ((uVar8 & 1) == 0) {
          if (plVar12 == (long *)0x0) goto LAB_02c61c0c;
          lVar10 = *plVar12;
          uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar8 == 0) goto LAB_02c61be4;
          piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_02c61bcc;
        }
        lVar10 = *plVar12;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)Method_System_Linq_Enumerable_Sum__) {
              puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_02c619bc;
            }
            uVar8 = uVar8 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar8 != 0);
        }
        puVar13 = (undefined8 *)FUN_01ecb238(plVar12,*(long *)Method_System_Linq_Enumerable_Sum__,0)
        ;
LAB_02c619bc:
        plVar14 = (long *)(*(code *)*puVar13)(plVar12,puVar13[1]);
        lVar10 = FUN_022cd6f8(plVar14,*(undefined8 *)Method_System_Linq_Enumerable_Min__);
        if (lVar10 == 0) {
          lVar10 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01ecaf44();
          }
          if (*(int *)(lVar10 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar10 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_01ecaf44();
          }
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar10 = **(long **)(lVar10 + 0xb8);
          uVar9 = (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c(uVar9,uVar9);
          }
          uVar9 = FUN_03a136cc(lVar10,uVar9,
                               *(undefined8 *)
                                Method_Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_CheckExactArgumentCount__
                               ,0);
        }
        else {
          uVar9 = *(undefined8 *)(lVar10 + 0x18);
        }
        uVar18 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Linq_Enumerable_Min__);
        FUN_040a5fcc(uVar18,uVar9,0);
        if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar10 = *(long *)(local_68 + 0x10);
        lVar11 = *(long *)puVar7;
        *(int *)(local_68 + 0x1c) = *(int *)(local_68 + 0x1c) + 1;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar2 = *(uint *)(local_68 + 0x18);
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(local_68 + 0x18) = uVar2 + 1;
          puVar13 = (undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20);
          *puVar13 = uVar18;
          thunk_FUN_01f51358(puVar13,uVar18);
        }
        else {
          FUN_030f2bb4(local_68,uVar18,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        lVar10 = local_80;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar9 = (**(code **)(*plVar14 + 0x1a8))(plVar14,*(undefined8 *)(*plVar14 + 0x1b0));
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        plVar14 = (long *)FUN_0359d458(param_2,uVar9,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(*plVar14 + 0x40) != *(long *)(*(long *)puVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc();
        }
        puVar15 = (undefined4 *)thunk_FUN_01f11920();
        uVar1 = *puVar15;
        lVar11 = *(long *)(lVar10 + 0x10);
        lVar16 = *(long *)puVar3;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar2 = *(uint *)(lVar10 + 0x18);
        if (uVar2 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar2 + 1;
          *(undefined4 *)(lVar11 + (long)(int)uVar2 * 4 + 0x20) = uVar1;
        }
        else {
          FUN_030ba904(lVar10,uVar1,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
  uVar9 = thunk_FUN_01f117cc();
  uVar18 = thunk_FUN_01efb3a4(
                             Method_Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_CheckMinArgumentCount__
                             );
  FUN_034f6754(uVar9,uVar18,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar9,param_3);
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar17 = piVar17 + 4;
    if (uVar8 == 0) break;
LAB_02c61bcc:
    if (*(long *)(piVar17 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar13 = (undefined8 *)(lVar10 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_02c61c00;
    }
  }
LAB_02c61be4:
  puVar13 = (undefined8 *)
            FUN_01ecb238(plVar12,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_02c61c00:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_02c61c0c:
  if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar9 = FUN_030f4630(local_68,*(undefined8 *)
                                 Method_Unity_VisualScripting_EqualityComparison_Equal__);
  *(undefined8 *)(param_1 + 0x60) = uVar9;
  thunk_FUN_01f51358();
  if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar9 = FUN_030bc2e0(local_80,*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<TouchControl>_get_Item__
                      );
  FUN_02c613ac(param_1,uVar9);
  FUN_025ecba8(local_90,*(undefined8 *)
                         Method_Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_CheckCase__
              );
  FUN_025ecba8(local_78,*(undefined8 *)Method_Unity_VisualScripting_EqualityComparison_NotEqual__);
  return;
}


