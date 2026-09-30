/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorSpawnerBuildingBlock$$get_FollowHand
ENTRY_POINT: 0142e064
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;ray_or_cast_sink_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_BuildingBlocks_SpatialAnchorSpawnerBuildingBlock__get_FollowHand(void)

{
  ulong uVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int *piVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long *unaff_x25;
  undefined8 in_stack_00000010;
  uint uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  puVar6 = 
  Method_Unity_XR_CoreUtils_Collections_HashSetList<ISynchronousAffordanceStateReceiver>__ctor__;
  piVar10 = (int *)FUN_0142c870();
  puVar5 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (unaff_x21 != 0) {
    uStack0000000000000018 = 0;
    uVar16 = *(uint *)(unaff_x21 + 0x18);
    if (0 < (int)uVar16) {
      do {
        if (uVar16 <= uStack0000000000000018) goto LAB_0142e4c8;
        uVar18 = *(undefined8 *)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        piVar10 = (int *)FUN_0268b4e0(uVar18,0,0);
        if (((ulong)piVar10 & 1) != 0) {
          uVar18 = FUN_0176eb1c(&stack0x00000018,0);
          uVar15 = *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21>__
          ;
          uVar20 = *(undefined8 *)
                    Method_Polenter_Serialization_Serializing_PropertyTypeInfo<DictionaryProperty>__ctor__
          ;
FUN_0142e3dc:
          uVar18 = FUN_01600424(uVar15,uVar18,uVar20,0);
LAB_0142e3ec:
          lVar14 = *unaff_x25;
LAB_0142e3f0:
          if (*(int *)(lVar14 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar14);
          }
          FUN_026610e4(uVar18,0);
          return 0;
        }
        if (1 < *(int *)(unaff_x20 + 0x14)) {
          uVar16 = uStack0000000000000018 + 1;
          puVar22 = (undefined8 *)(unaff_x21 + 0x20 + (long)(int)uVar16 * 8);
          while (uVar12 = (uint)*(undefined8 *)(unaff_x21 + 0x18), (int)uVar16 < (int)uVar12) {
            if ((uVar12 <= uStack0000000000000018) || (uVar12 <= uVar16)) goto LAB_0142e4c8;
            uVar18 = *(undefined8 *)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
            uVar20 = *puVar22;
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            piVar10 = (int *)FUN_0268b4e0(uVar18,uVar20,0);
            uVar16 = uVar16 + 1;
            puVar22 = puVar22 + 1;
            if (((ulong)piVar10 & 1) != 0) {
              if (*(uint *)(unaff_x21 + 0x18) <= uStack0000000000000018) goto LAB_0142e4c8;
              plVar11 = *(long **)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
              uVar18 = *(undefined8 *)puVar6;
              if (plVar11 == (long *)0x0) {
                uVar20 = 0;
              }
              else {
                uVar20 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
              }
              uVar18 = FUN_01600424(uVar18,uVar20,
                                    *(undefined8 *)System_Threading_ManualResetEventSlim_TypeInfo,0)
              ;
              lVar14 = *unaff_x25;
              goto LAB_0142e3f0;
            }
          }
          if (uVar12 <= uStack0000000000000018) goto LAB_0142e4c8;
          lVar14 = *(long *)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
          if (lVar14 == 0) goto LAB_0142e4cc;
          lVar19 = *(long *)(unaff_x20 + 0x90);
          uVar9 = FUN_02681c0c(lVar14,0);
          if (lVar19 == 0) goto LAB_0142e4cc;
          uStack000000000000001c = uVar9;
          piVar10 = (int *)FUN_0129aa60(lVar19,(long)&stack0x00000018 + 4,
                                        *(undefined8 *)
                                         Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_trackableId__
                                       );
          if (((ulong)piVar10 & 1) != 0) {
            if ((unaff_x19 != 0) && (0 < (int)*(ulong *)(unaff_x19 + 0x18))) {
              uVar21 = 0;
              bVar3 = false;
              uVar13 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
              do {
                if ((uVar13 <= uVar21) || (*(uint *)(unaff_x21 + 0x18) <= uStack0000000000000018))
                goto LAB_0142e4c8;
                lVar14 = *(long *)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
                if (lVar14 == 0) goto LAB_0142e4cc;
                iVar4 = *(int *)(unaff_x19 + 0x20 + uVar21 * 4);
                piVar10 = (int *)FUN_02681c0c(lVar14,0);
                uVar13 = (ulong)*(uint *)(unaff_x19 + 0x18);
                uVar21 = uVar21 + 1;
                if (iVar4 == (int)piVar10) {
                  bVar3 = true;
                }
              } while ((long)uVar21 < (long)(int)*(uint *)(unaff_x19 + 0x18));
              if (bVar3) goto LAB_0142e20c;
            }
            uVar16 = *(uint *)(unaff_x21 + 0x18);
            if (uVar16 <= uStack0000000000000018) goto LAB_0142e4c8;
            plVar11 = *(long **)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
            uVar18 = *(undefined8 *)puVar6;
            if (plVar11 == (long *)0x0) {
              piVar10 = (int *)0x0;
            }
            else {
              piVar10 = (int *)(**(code **)(*plVar11 + 0x168))
                                         (plVar11,*(undefined8 *)(*plVar11 + 0x170));
              uVar16 = *(uint *)(unaff_x21 + 0x18);
            }
            if (uVar16 <= uStack0000000000000018) goto LAB_0142e4c8;
            lVar14 = *(long *)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
            if (lVar14 == 0) goto LAB_0142e4cc;
            in_stack_00000010._4_4_ = FUN_02681c0c(lVar14,0);
            uVar20 = FUN_0176eb1c((long)&stack0x00000010 + 4,0);
            uVar18 = FUN_0160073c(uVar18,piVar10,
                                  *(undefined8 *)
                                   Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputControlScheme>__
                                  ,uVar20,0);
            goto LAB_0142e3ec;
          }
        }
LAB_0142e20c:
        uStack0000000000000018 = uStack0000000000000018 + 1;
        uVar16 = *(uint *)(unaff_x21 + 0x18);
      } while ((int)uStack0000000000000018 < (int)uVar16);
    }
  }
  puVar8 = StringLiteral_8267;
  puVar7 = Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass7_0_<DOPath>b__0__;
  puVar5 = PTR_DAT_033ed788;
  if (((unaff_x19 != 0) && (1 < *(int *)(unaff_x20 + 0x14))) &&
     (uVar21 = (ulong)*(uint *)(unaff_x19 + 0x18), 0 < (int)*(uint *)(unaff_x19 + 0x18))) {
    uVar13 = 0;
    do {
      uVar1 = uVar13 + 1;
      if ((long)uVar1 < (long)(int)(uint)uVar21) {
        if ((uVar21 & 0xffffffff) <= uVar13) {
LAB_0142e4c8:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194(piVar10);
        }
        piVar10 = (int *)(unaff_x19 + uVar13 * 4 + 0x20);
        uVar17 = uVar1 & 0xffffffff;
        do {
          if (*piVar10 == *(int *)(unaff_x19 + (long)(int)uVar17 * 4 + 0x20)) {
            uVar18 = FUN_0176eb1c(piVar10,0);
            uVar15 = *(undefined8 *)puVar6;
            uVar20 = *(undefined8 *)puVar5;
            goto FUN_0142e3dc;
          }
          uVar16 = (int)uVar17 + 1;
          uVar17 = (ulong)uVar16;
        } while ((uint)uVar21 != uVar16);
      }
      if ((uVar21 & 0xffffffff) <= uVar13) goto LAB_0142e4c8;
      if (*(long *)(unaff_x20 + 0x90) == 0) {
LAB_0142e4cc:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      puVar2 = (undefined4 *)(unaff_x19 + uVar13 * 4 + 0x20);
      uStack000000000000001c = *puVar2;
      piVar10 = (int *)FUN_0129aa60(*(long *)(unaff_x20 + 0x90),(long)&stack0x00000018 + 4,
                                    *(undefined8 *)
                                     Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_trackableId__
                                   );
      if (((ulong)piVar10 & 1) == 0) {
        if (*(uint *)(unaff_x19 + 0x18) <= uVar13) goto LAB_0142e4c8;
        uVar18 = FUN_0176eb1c(puVar2,0);
        uVar18 = FUN_01600424(*(undefined8 *)puVar8,uVar18,*(undefined8 *)puVar7,0);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_00d32864(*unaff_x25);
        }
        FUN_02661754(uVar18,0);
      }
      uVar21 = *(ulong *)(unaff_x19 + 0x18);
      piVar10 = (int *)0x1;
      uVar13 = uVar1;
    } while ((long)uVar1 < (long)(int)uVar21);
  }
  return 1;
}


