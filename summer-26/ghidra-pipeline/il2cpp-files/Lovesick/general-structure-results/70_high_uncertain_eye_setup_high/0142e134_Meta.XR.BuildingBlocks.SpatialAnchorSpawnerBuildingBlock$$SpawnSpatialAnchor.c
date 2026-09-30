/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.SpatialAnchorSpawnerBuildingBlock$$SpawnSpatialAnchor
ENTRY_POINT: 0142e134
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;ray_or_cast_sink_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_BuildingBlocks_SpatialAnchorSpawnerBuildingBlock__SpawnSpatialAnchor(void)

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
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long unaff_x19;
  undefined8 uVar17;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long lVar18;
  undefined8 unaff_x23;
  ulong uVar19;
  undefined8 *unaff_x24;
  uint unaff_w25;
  long *unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  uint uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  while( true ) {
    piVar9 = (int *)FUN_0268b4e0(unaff_x22,unaff_x23,0);
    unaff_w25 = unaff_w25 + 1;
    unaff_x24 = unaff_x24 + 1;
    if (((ulong)piVar9 & 1) != 0) break;
    while (uVar12 = (uint)*(undefined8 *)(unaff_x21 + 0x18), (int)uVar12 <= (int)unaff_w25) {
      if (uVar12 <= uStack0000000000000018) goto LAB_0142e4c8;
      lVar14 = *(long *)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
      if (lVar14 == 0) goto LAB_0142e4cc;
      lVar18 = *(long *)(unaff_x20 + 0x90);
      uVar8 = FUN_02681c0c(lVar14,0);
      if (lVar18 == 0) goto LAB_0142e4cc;
      uStack000000000000001c = uVar8;
      piVar9 = (int *)FUN_0129aa60(lVar18,(long)&stack0x00000018 + 4,
                                   *(undefined8 *)
                                    Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_trackableId__
                                  );
      if (((ulong)piVar9 & 1) != 0) {
        if ((unaff_x19 != 0) && (0 < (int)*(ulong *)(unaff_x19 + 0x18))) {
          uVar19 = 0;
          bVar3 = false;
          uVar13 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
          do {
            if ((uVar13 <= uVar19) || (*(uint *)(unaff_x21 + 0x18) <= uStack0000000000000018))
            goto LAB_0142e4c8;
            lVar14 = *(long *)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
            if (lVar14 == 0) goto LAB_0142e4cc;
            iVar4 = *(int *)(unaff_x28 + uVar19 * 4);
            piVar9 = (int *)FUN_02681c0c(lVar14,0);
            uVar13 = (ulong)*(uint *)(unaff_x19 + 0x18);
            uVar19 = uVar19 + 1;
            if (iVar4 == (int)piVar9) {
              bVar3 = true;
            }
          } while ((long)uVar19 < (long)(int)*(uint *)(unaff_x19 + 0x18));
          if (bVar3) goto LAB_0142e20c;
        }
        uVar12 = *(uint *)(unaff_x21 + 0x18);
        if (uVar12 <= uStack0000000000000018) goto LAB_0142e4c8;
        plVar10 = *(long **)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
        uVar17 = *unaff_x29;
        if (plVar10 == (long *)0x0) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = (int *)(**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170))
          ;
          uVar12 = *(uint *)(unaff_x21 + 0x18);
        }
        if (uVar12 <= uStack0000000000000018) goto LAB_0142e4c8;
        lVar14 = *(long *)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
        if (lVar14 == 0) goto LAB_0142e4cc;
        in_stack_00000010._4_4_ = FUN_02681c0c(lVar14,0);
        uVar11 = FUN_0176eb1c((long)&stack0x00000010 + 4,0);
        uVar17 = FUN_0160073c(uVar17,piVar9,
                              *(undefined8 *)
                               Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_LengthSafe<InputControlScheme>__
                              ,uVar11,0);
        goto LAB_0142e3ec;
      }
LAB_0142e20c:
      do {
        puVar7 = StringLiteral_8267;
        puVar6 = Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass7_0_<DOPath>b__0__;
        puVar5 = PTR_DAT_033ed788;
        uStack0000000000000018 = uStack0000000000000018 + 1;
        if ((int)*(uint *)(unaff_x21 + 0x18) <= (int)uStack0000000000000018) {
          if (((unaff_x19 == 0) || (*(int *)(unaff_x20 + 0x14) < 2)) ||
             (uVar19 = (ulong)*(uint *)(unaff_x19 + 0x18), (int)*(uint *)(unaff_x19 + 0x18) < 1)) {
            return 1;
          }
          uVar13 = 0;
          goto LAB_0142e25c;
        }
        if (*(uint *)(unaff_x21 + 0x18) <= uStack0000000000000018) goto LAB_0142e4c8;
        uVar17 = *(undefined8 *)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        piVar9 = (int *)FUN_0268b4e0(uVar17,0,0);
        if (((ulong)piVar9 & 1) != 0) {
          uVar17 = FUN_0176eb1c(&stack0x00000018,0);
          uVar15 = *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SpatialAnchorCoreBuildingBlock_<InitSpatialAnchorAsync>d__21>__
          ;
          uVar11 = *(undefined8 *)
                    Method_Polenter_Serialization_Serializing_PropertyTypeInfo<DictionaryProperty>__ctor__
          ;
          goto FUN_0142e3dc;
        }
      } while (*(int *)(unaff_x20 + 0x14) < 2);
      unaff_w25 = uStack0000000000000018 + 1;
      unaff_x24 = (undefined8 *)(in_stack_00000008 + (long)(int)unaff_w25 * 8);
    }
    if ((uVar12 <= uStack0000000000000018) || (uVar12 <= unaff_w25)) goto LAB_0142e4c8;
    unaff_x22 = *(undefined8 *)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
    unaff_x23 = *unaff_x24;
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
  }
  if (uStack0000000000000018 < *(uint *)(unaff_x21 + 0x18)) {
    plVar10 = *(long **)(unaff_x21 + (long)(int)uStack0000000000000018 * 8 + 0x20);
    uVar17 = *unaff_x29;
    if (plVar10 == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (**(code **)(*plVar10 + 0x168))(plVar10,*(undefined8 *)(*plVar10 + 0x170));
    }
    uVar17 = FUN_01600424(uVar17,uVar11,
                          *(undefined8 *)System_Threading_ManualResetEventSlim_TypeInfo,0);
    lVar14 = *unaff_x26;
LAB_0142e3f0:
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar14);
    }
    FUN_026610e4(uVar17,0);
    return 0;
  }
LAB_0142e4c8:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194(piVar9);
LAB_0142e25c:
  uVar1 = uVar13 + 1;
  if ((long)uVar1 < (long)(int)(uint)uVar19) {
    if ((uVar19 & 0xffffffff) <= uVar13) goto LAB_0142e4c8;
    piVar9 = (int *)(unaff_x19 + uVar13 * 4 + 0x20);
    uVar16 = uVar1 & 0xffffffff;
    do {
      if (*piVar9 == *(int *)(unaff_x19 + (long)(int)uVar16 * 4 + 0x20)) {
        uVar17 = FUN_0176eb1c(piVar9,0);
        uVar15 = *unaff_x29;
        uVar11 = *(undefined8 *)puVar5;
FUN_0142e3dc:
        uVar17 = FUN_01600424(uVar15,uVar17,uVar11,0);
LAB_0142e3ec:
        lVar14 = *unaff_x26;
        goto LAB_0142e3f0;
      }
      uVar12 = (int)uVar16 + 1;
      uVar16 = (ulong)uVar12;
    } while ((uint)uVar19 != uVar12);
  }
  if ((uVar19 & 0xffffffff) <= uVar13) goto LAB_0142e4c8;
  if (*(long *)(unaff_x20 + 0x90) == 0) {
LAB_0142e4cc:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  puVar2 = (undefined4 *)(unaff_x19 + uVar13 * 4 + 0x20);
  uStack000000000000001c = *puVar2;
  piVar9 = (int *)FUN_0129aa60(*(long *)(unaff_x20 + 0x90),(long)&stack0x00000018 + 4,
                               *(undefined8 *)
                                Method_UnityEngine_XR_ARFoundation_ARTrackable<XRAnchor,_ARAnchor>_get_trackableId__
                              );
  if (((ulong)piVar9 & 1) == 0) {
    if (*(uint *)(unaff_x19 + 0x18) <= uVar13) goto LAB_0142e4c8;
    uVar17 = FUN_0176eb1c(puVar2,0);
    uVar17 = FUN_01600424(*(undefined8 *)puVar7,uVar17,*(undefined8 *)puVar6,0);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_00d32864(*unaff_x26);
    }
    FUN_02661754(uVar17,0);
  }
  uVar19 = *(ulong *)(unaff_x19 + 0x18);
  piVar9 = (int *)0x1;
  uVar13 = uVar1;
  if ((long)(int)uVar19 <= (long)uVar1) {
    return 1;
  }
  goto LAB_0142e25c;
}


