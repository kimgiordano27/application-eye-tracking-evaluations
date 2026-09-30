/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorSpawnerBuildingBlock$$Awake
ENTRY_POINT: 0142e06c
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


undefined8 Meta_XR_BuildingBlocks_SpatialAnchorSpawnerBuildingBlock__Awake(void)

{
  ulong uVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int *piVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 in_stack_00000010;
  uint uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  piVar9 = (int *)FUN_0142c870();
  puVar5 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (unaff_x21 != 0) {
    uStack0000000000000018 = 0;
    uVar15 = *(uint *)(unaff_x21 + 0x18);
    if (0 < (int)uVar15) {
      do {
        if (uVar15 <= uStack0000000000000018) goto LAB_0142e4c8;
        uVar17 = *(undefined8 *)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        piVar9 = (int *)FUN_0268b4e0(uVar17,0,0);
        if (((ulong)piVar9 & 1) != 0) {
          uVar17 = FUN_0176eb1c(&stack0x00000018,0);
          uVar14 = *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21>__
          ;
          uVar19 = *(undefined8 *)
                    Method_Polenter_Serialization_Serializing_PropertyTypeInfo<DictionaryProperty>__ctor__
          ;
FUN_0142e3dc:
          uVar17 = FUN_01600424(uVar14,uVar17,uVar19,0);
LAB_0142e3ec:
          lVar13 = *unaff_x25;
LAB_0142e3f0:
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar13);
          }
          FUN_026610e4(uVar17,0);
          return 0;
        }
        if (1 < *(int *)(unaff_x20 + 0x14)) {
          uVar15 = uStack0000000000000018 + 1;
          puVar21 = (undefined8 *)(unaff_x21 + 0x20 + (long)(int)uVar15 * 8);
          while (uVar11 = (uint)*(undefined8 *)(unaff_x21 + 0x18), (int)uVar15 < (int)uVar11) {
            if ((uVar11 <= uStack0000000000000018) || (uVar11 <= uVar15)) goto LAB_0142e4c8;
            uVar17 = *(undefined8 *)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
            uVar19 = *puVar21;
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            piVar9 = (int *)FUN_0268b4e0(uVar17,uVar19,0);
            uVar15 = uVar15 + 1;
            puVar21 = puVar21 + 1;
            if (((ulong)piVar9 & 1) != 0) {
              if (*(uint *)(unaff_x21 + 0x18) <= uStack0000000000000018) goto LAB_0142e4c8;
              plVar10 = *(long **)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
              uVar17 = *unaff_x26;
              if (plVar10 == (long *)0x0) {
                uVar19 = 0;
              }
              else {
                uVar19 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
              }
              uVar17 = FUN_01600424(uVar17,uVar19,
                                    *(undefined8 *)System_Threading_ManualResetEventSlim_TypeInfo,0)
              ;
              lVar13 = *unaff_x25;
              goto LAB_0142e3f0;
            }
          }
          if (uVar11 <= uStack0000000000000018) goto LAB_0142e4c8;
          lVar13 = *(long *)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_0142e4cc;
          lVar18 = *(long *)(unaff_x20 + 0x90);
          uVar8 = FUN_02681c0c(lVar13,0);
          if (lVar18 == 0) goto LAB_0142e4cc;
          uStack000000000000001c = uVar8;
          piVar9 = (int *)FUN_0129aa60(lVar18,(long)&stack0x00000018 + 4,
                                       *(undefined8 *)
                                        Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_trackableId__
                                      );
          if (((ulong)piVar9 & 1) != 0) {
            if ((unaff_x19 != 0) && (0 < (int)*(ulong *)(unaff_x19 + 0x18))) {
              uVar20 = 0;
              bVar3 = false;
              uVar12 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
              do {
                if ((uVar12 <= uVar20) || (*(uint *)(unaff_x21 + 0x18) <= uStack0000000000000018))
                goto LAB_0142e4c8;
                lVar13 = *(long *)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
                if (lVar13 == 0) goto LAB_0142e4cc;
                iVar4 = *(int *)(unaff_x19 + 0x20 + uVar20 * 4);
                piVar9 = (int *)FUN_02681c0c(lVar13,0);
                uVar12 = (ulong)*(uint *)(unaff_x19 + 0x18);
                uVar20 = uVar20 + 1;
                if (iVar4 == (int)piVar9) {
                  bVar3 = true;
                }
              } while ((long)uVar20 < (long)(int)*(uint *)(unaff_x19 + 0x18));
              if (bVar3) goto LAB_0142e20c;
            }
            uVar15 = *(uint *)(unaff_x21 + 0x18);
            if (uVar15 <= uStack0000000000000018) goto LAB_0142e4c8;
            plVar10 = *(long **)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
            uVar17 = *unaff_x26;
            if (plVar10 == (long *)0x0) {
              piVar9 = (int *)0x0;
            }
            else {
              piVar9 = (int *)(**(code **)(*plVar10 + 0x168))
                                        (plVar10,*(undefined8 *)(*plVar10 + 0x170));
              uVar15 = *(uint *)(unaff_x21 + 0x18);
            }
            if (uVar15 <= uStack0000000000000018) goto LAB_0142e4c8;
            lVar13 = *(long *)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
            if (lVar13 == 0) goto LAB_0142e4cc;
            in_stack_00000010._4_4_ = FUN_02681c0c(lVar13,0);
            uVar19 = FUN_0176eb1c((long)&stack0x00000010 + 4,0);
            uVar17 = FUN_0160073c(uVar17,piVar9,
                                  *(undefined8 *)
                                   Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputControlScheme>__
                                  ,uVar19,0);
            goto LAB_0142e3ec;
          }
        }
LAB_0142e20c:
        uStack0000000000000018 = uStack0000000000000018 + 1;
        uVar15 = *(uint *)(unaff_x21 + 0x18);
      } while ((int)uStack0000000000000018 < (int)uVar15);
    }
  }
  puVar7 = StringLiteral_8267;
  puVar6 = Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass7_0_<DOPath>b__0__;
  puVar5 = PTR_DAT_033ed788;
  if (((unaff_x19 != 0) && (1 < *(int *)(unaff_x20 + 0x14))) &&
     (uVar20 = (ulong)*(uint *)(unaff_x19 + 0x18), 0 < (int)*(uint *)(unaff_x19 + 0x18))) {
    uVar12 = 0;
    do {
      uVar1 = uVar12 + 1;
      if ((long)uVar1 < (long)(int)(uint)uVar20) {
        if ((uVar20 & 0xffffffff) <= uVar12) {
LAB_0142e4c8:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194(piVar9);
        }
        piVar9 = (int *)(unaff_x19 + uVar12 * 4 + 0x20);
        uVar16 = uVar1 & 0xffffffff;
        do {
          if (*piVar9 == *(int *)(unaff_x19 + (long)(int)uVar16 * 4 + 0x20)) {
            uVar17 = FUN_0176eb1c(piVar9,0);
            uVar14 = *unaff_x26;
            uVar19 = *(undefined8 *)puVar5;
            goto FUN_0142e3dc;
          }
          uVar15 = (int)uVar16 + 1;
          uVar16 = (ulong)uVar15;
        } while ((uint)uVar20 != uVar15);
      }
      if ((uVar20 & 0xffffffff) <= uVar12) goto LAB_0142e4c8;
      if (*(long *)(unaff_x20 + 0x90) == 0) {
LAB_0142e4cc:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      puVar2 = (undefined4 *)(unaff_x19 + uVar12 * 4 + 0x20);
      uStack000000000000001c = *puVar2;
      piVar9 = (int *)FUN_0129aa60(*(long *)(unaff_x20 + 0x90),(long)&stack0x00000018 + 4,
                                   *(undefined8 *)
                                    Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_trackableId__
                                  );
      if (((ulong)piVar9 & 1) == 0) {
        if (*(uint *)(unaff_x19 + 0x18) <= uVar12) goto LAB_0142e4c8;
        uVar17 = FUN_0176eb1c(puVar2,0);
        uVar17 = FUN_01600424(*(undefined8 *)puVar7,uVar17,*(undefined8 *)puVar6,0);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_00d32864(*unaff_x25);
        }
        FUN_02661754(uVar17,0);
      }
      uVar20 = *(ulong *)(unaff_x19 + 0x18);
      piVar9 = (int *)0x1;
      uVar12 = uVar1;
    } while ((long)uVar1 < (long)(int)uVar20);
  }
  return 1;
}


