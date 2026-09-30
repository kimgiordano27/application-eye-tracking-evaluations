/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock$$InstantiateSpatialAnchor
ENTRY_POINT: 0142e154
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;ray_or_cast_sink_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_BuildingBlocks_SpatialAnchorCoreBuildingBlock__InstantiateSpatialAnchor
          (undefined8 param_1,int *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  uint uVar20;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  uint uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  while (uStack0000000000000018 < (uint)param_1) {
    lVar9 = *(long *)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
    if (lVar9 == 0) goto LAB_0142e4cc;
    lVar17 = *(long *)(unaff_x20 + 0x90);
    uVar8 = FUN_02681c0c(lVar9,0);
    if (lVar17 == 0) goto LAB_0142e4cc;
    uStack000000000000001c = uVar8;
    param_2 = (int *)FUN_0129aa60(lVar17,(long)&stack0x00000018 + 4,
                                  *(undefined8 *)
                                   Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_trackableId__
                                 );
    if (((ulong)param_2 & 1) != 0) {
      if ((unaff_x19 != 0) && (0 < (int)*(ulong *)(unaff_x19 + 0x18))) {
        uVar18 = 0;
        bVar3 = false;
        uVar14 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
        do {
          if ((uVar14 <= uVar18) || (*(uint *)(unaff_x21 + 0x18) <= uStack0000000000000018))
          goto LAB_0142e4c8;
          lVar9 = *(long *)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_0142e4cc;
          iVar4 = *(int *)(unaff_x28 + uVar18 * 4);
          param_2 = (int *)FUN_02681c0c(lVar9,0);
          uVar14 = (ulong)*(uint *)(unaff_x19 + 0x18);
          uVar18 = uVar18 + 1;
          if (iVar4 == (int)param_2) {
            bVar3 = true;
          }
        } while ((long)uVar18 < (long)(int)*(uint *)(unaff_x19 + 0x18));
        if (bVar3) goto LAB_0142e20c;
      }
      uVar20 = *(uint *)(unaff_x21 + 0x18);
      if (uStack0000000000000018 < uVar20) {
        plVar11 = *(long **)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
        uVar10 = *unaff_x29;
        if (plVar11 == (long *)0x0) {
          param_2 = (int *)0x0;
        }
        else {
          param_2 = (int *)(**(code **)(*plVar11 + 0x168))
                                     (plVar11,*(undefined8 *)(*plVar11 + 0x170));
          uVar20 = *(uint *)(unaff_x21 + 0x18);
        }
        if (uStack0000000000000018 < uVar20) {
          lVar9 = *(long *)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
          if (lVar9 != 0) {
            in_stack_00000010._4_4_ = FUN_02681c0c(lVar9,0);
            uVar12 = FUN_0176eb1c((long)&stack0x00000010 + 4,0);
            uVar10 = FUN_0160073c(uVar10,param_2,
                                  *(undefined8 *)
                                   Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputControlScheme>__
                                  ,uVar12,0);
LAB_0142e3ec:
            lVar9 = *unaff_x26;
LAB_0142e3f0:
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_00d32864(lVar9);
            }
            FUN_026610e4(uVar10,0);
            return 0;
          }
          goto LAB_0142e4cc;
        }
      }
      break;
    }
LAB_0142e20c:
    do {
      puVar7 = StringLiteral_8267;
      puVar6 = Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass7_0_<DOPath>b__0__;
      puVar5 = PTR_DAT_033ed788;
      uStack0000000000000018 = uStack0000000000000018 + 1;
      if ((int)*(uint *)(unaff_x21 + 0x18) <= (int)uStack0000000000000018) {
        if (((unaff_x19 == 0) || (*(int *)(unaff_x20 + 0x14) < 2)) ||
           (uVar18 = (ulong)*(uint *)(unaff_x19 + 0x18), (int)*(uint *)(unaff_x19 + 0x18) < 1)) {
          return 1;
        }
        uVar14 = 0;
        goto LAB_0142e25c;
      }
      if (*(uint *)(unaff_x21 + 0x18) <= uStack0000000000000018) goto LAB_0142e4c8;
      uVar10 = *(undefined8 *)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      param_2 = (int *)FUN_0268b4e0(uVar10,0,0);
      if (((ulong)param_2 & 1) != 0) {
        uVar10 = FUN_0176eb1c(&stack0x00000018,0);
        uVar15 = *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21>__
        ;
        uVar12 = *(undefined8 *)
                  Method_Polenter_Serialization_Serializing_PropertyTypeInfo<DictionaryProperty>__ctor__
        ;
        goto FUN_0142e3dc;
      }
    } while (*(int *)(unaff_x20 + 0x14) < 2);
    uVar20 = uStack0000000000000018 + 1;
    puVar19 = (undefined8 *)(in_stack_00000008 + (long)(int)uVar20 * 8);
    while( true ) {
      param_1 = *(undefined8 *)(unaff_x21 + 0x18);
      uVar13 = (uint)param_1;
      if ((int)uVar13 <= (int)uVar20) break;
      if ((uVar13 <= uStack0000000000000018) || (uVar13 <= uVar20)) goto LAB_0142e4c8;
      uVar10 = *(undefined8 *)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
      uVar12 = *puVar19;
      if (*(int *)(*unaff_x27 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      param_2 = (int *)FUN_0268b4e0(uVar10,uVar12,0);
      uVar20 = uVar20 + 1;
      puVar19 = puVar19 + 1;
      if (((ulong)param_2 & 1) != 0) {
        if (*(uint *)(unaff_x21 + 0x18) <= uStack0000000000000018) goto LAB_0142e4c8;
        plVar11 = *(long **)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
        uVar10 = *unaff_x29;
        if (plVar11 == (long *)0x0) {
          uVar12 = 0;
        }
        else {
          uVar12 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
        }
        uVar10 = FUN_01600424(uVar10,uVar12,
                              *(undefined8 *)System_Threading_ManualResetEventSlim_TypeInfo,0);
        lVar9 = *unaff_x26;
        goto LAB_0142e3f0;
      }
    }
  }
LAB_0142e4c8:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194(param_2);
LAB_0142e25c:
  uVar1 = uVar14 + 1;
  if ((long)uVar1 < (long)(int)(uint)uVar18) {
    if (uVar14 < (uVar18 & 0xffffffff)) {
      param_2 = (int *)(unaff_x19 + uVar14 * 4 + 0x20);
      uVar16 = uVar1 & 0xffffffff;
LAB_0142e284:
      if (*param_2 != *(int *)(unaff_x19 + (long)(int)uVar16 * 4 + 0x20)) goto code_r0x0142e294;
      uVar10 = FUN_0176eb1c(param_2,0);
      uVar15 = *unaff_x29;
      uVar12 = *(undefined8 *)puVar5;
FUN_0142e3dc:
      uVar10 = FUN_01600424(uVar15,uVar10,uVar12,0);
      goto LAB_0142e3ec;
    }
    goto LAB_0142e4c8;
  }
LAB_0142e2a0:
  if ((uVar18 & 0xffffffff) <= uVar14) goto LAB_0142e4c8;
  if (*(long *)(unaff_x20 + 0x90) == 0) {
LAB_0142e4cc:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  puVar2 = (undefined4 *)(unaff_x19 + uVar14 * 4 + 0x20);
  uStack000000000000001c = *puVar2;
  param_2 = (int *)FUN_0129aa60(*(long *)(unaff_x20 + 0x90),(long)&stack0x00000018 + 4,
                                *(undefined8 *)
                                 Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_trackableId__
                               );
  if (((ulong)param_2 & 1) == 0) {
    if (*(uint *)(unaff_x19 + 0x18) <= uVar14) goto LAB_0142e4c8;
    uVar10 = FUN_0176eb1c(puVar2,0);
    uVar10 = FUN_01600424(*(undefined8 *)puVar7,uVar10,*(undefined8 *)puVar6,0);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x26);
    }
    FUN_02661754(uVar10,0);
  }
  uVar18 = *(ulong *)(unaff_x19 + 0x18);
  param_2 = (int *)0x1;
  uVar14 = uVar1;
  if ((long)(int)uVar18 <= (long)uVar1) {
    return 1;
  }
  goto LAB_0142e25c;
code_r0x0142e294:
  uVar20 = (int)uVar16 + 1;
  uVar16 = (ulong)uVar20;
  if ((uint)uVar18 == uVar20) goto LAB_0142e2a0;
  goto LAB_0142e284;
}


