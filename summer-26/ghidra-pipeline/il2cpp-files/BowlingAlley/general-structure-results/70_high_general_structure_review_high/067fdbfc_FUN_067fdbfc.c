/*
FUNCTION_NAME: FUN_067fdbfc
ENTRY_POINT: 067fdbfc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_12;frame_or_lifecycle_behavior
*/


void FUN_067fdbfc(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  long *plVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar9 = 
  Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_WhenInteractorAdded__
  ;
  puVar8 = PTR_DAT_072794b0;
  if ((DAT_076e0c54 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(PTR_DAT_0727fc10);
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorAdded__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_RemoveInteractorByIdentifier__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_SelectingInteractorAdded__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_SelectingInteractorRemoved__
                      );
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputActionMap>_RemoveAtWithCapacity__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Start__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_get_Registry__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>__ctor__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>_Awake__
                      );
    thunk_FUN_032e1da0(PTR_DAT_072794b0);
    thunk_FUN_032e1da0(PTR_DAT_072794f8);
    thunk_FUN_032e1da0(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07287390);
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>_Start__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_WhenInteractorAdded__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>_get_Registry__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_Interactable<TouchHandGrabInteractor,_TouchHandGrabInteractable>_get_Registry__
                      );
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataGhost>__ctor__
                      );
    thunk_FUN_032e1da0(PTR_DAT_07283358);
    thunk_FUN_032e1da0(PTR_DAT_07281220);
    thunk_FUN_032e1da0(
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataGhost>_Start__
                      );
    DAT_076e0c54 = 1;
  }
  puVar21 = (undefined8 *)(param_1 + 0x30);
  *puVar21 = *(undefined8 *)puVar9;
  thunk_FUN_0333a630(puVar21);
  lVar12 = FUN_032d5d3c(*(undefined8 *)puVar8,5);
  if (lVar12 == 0) goto LAB_067fe5b0;
  if (*(int *)(lVar12 + 0x18) == 0) {
LAB_067fe83c:
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
  *(undefined8 *)(lVar12 + 0x20) =
       *(undefined8 *)
        Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>_get_Registry__
  ;
  thunk_FUN_0333a630((undefined8 *)(lVar12 + 0x20));
  uVar13 = FUN_06becffc(param_1,0);
  if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_067fe83c;
  *(undefined8 *)(lVar12 + 0x28) = uVar13;
  thunk_FUN_0333a630((undefined8 *)(lVar12 + 0x28),uVar13);
  if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_067fe83c;
  *(undefined8 *)(lVar12 + 0x30) =
       *(undefined8 *)
        Method_Oculus_Interaction_Interactable<TouchHandGrabInteractor,_TouchHandGrabInteractable>_get_Registry__
  ;
  thunk_FUN_0333a630((undefined8 *)(lVar12 + 0x30));
  if (*(uint *)(lVar12 + 0x18) < 4) goto LAB_067fe83c;
  *(undefined8 *)(lVar12 + 0x38) = *puVar21;
  thunk_FUN_0333a630((undefined8 *)(lVar12 + 0x38));
  puVar8 = PTR_DAT_072798f8;
  if (*(uint *)(lVar12 + 0x18) < 5) goto LAB_067fe83c;
  *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)PTR_DAT_07281220;
  thunk_FUN_0333a630();
  uVar13 = FUN_057ab314(lVar12,0);
  lVar12 = *(long *)puVar8;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar12);
  }
  FUN_06bb24f8(uVar13,param_1,0);
  puVar9 = PTR_DAT_072794f8;
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_067fe5b0;
  lVar12 = param_1 + 0x50;
  FUN_06c51944(lVar12,*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x10),0);
  FUN_06c51954(lVar12,**(undefined8 **)(*(long *)puVar9 + 0xb8),0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_067fe5b0;
  fVar24 = *(float *)(*(long *)(param_1 + 0xf8) + 0x18);
  iVar23 = -0x80000000;
  if (fVar24 != INFINITY) {
    iVar23 = (int)fVar24;
  }
  FUN_06c51964(lVar12,iVar23,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_067fe5b0;
  FUN_06c51974(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x1c),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_067fe5b0;
  FUN_06c51984(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x24),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_067fe5b0;
  FUN_06c51994(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x2c),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_067fe5b0;
  FUN_06c519a4(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x30),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_067fe5b0;
  FUN_06c519b4(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x38),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_067fe5b0;
  FUN_06c519c4(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x28),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_067fe5b0;
  FUN_06c519d4(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x34),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_067fe5b0;
  FUN_06c519e4(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x3c),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_067fe5b0;
  FUN_06c519f4(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x44),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_067fe5b0;
  FUN_06c51a04(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x40),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_067fe5b0;
  FUN_06c51a14(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x44),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_067fe5b0;
  FUN_06c51a24(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x48),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_067fe5b0;
  FUN_06c51a34(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x4c),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_067fe5b0;
  FUN_06c51a44(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x50),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_067fe5b0;
  FUN_06c51a4c(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x54),lVar12,0);
  if (*(long *)(param_1 + 0xf8) == 0) goto LAB_067fe5b0;
  FUN_06c51a5c(*(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x58),lVar12,0);
  plVar22 = (long *)(param_1 + 0xd8);
  lVar14 = *plVar22;
  if ((lVar14 == 0) || (*(long *)(lVar14 + 0x18) == 0)) {
    lVar14 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_07287390,1);
    *plVar22 = lVar14;
    thunk_FUN_0333a630(plVar22,lVar14);
    lVar14 = *plVar22;
    if (lVar14 == 0) goto LAB_067fe5b0;
  }
  if (*(int *)(lVar14 + 0x18) == 0) goto LAB_067fe83c;
  *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)(param_1 + 0x100);
  thunk_FUN_0333a630();
  lVar14 = *(long *)(param_1 + 0xf8);
  if (lVar14 == 0) goto LAB_067fe5b0;
  fVar24 = (float)*(undefined8 *)(lVar14 + 0x60);
  fVar25 = (float)((ulong)*(undefined8 *)(lVar14 + 0x60) >> 0x20);
  uVar16 = CONCAT44((int)fVar25,(int)fVar24);
  *(ulong *)(param_1 + 0x108) =
       uVar16 ^ (uVar16 ^ 0x8000000080000000) &
                CONCAT44(-(uint)(fVar25 == INFINITY),-(uint)(fVar24 == INFINITY));
  uVar6 = *(uint *)(param_1 + 400);
  iVar23 = -0x80000000;
  if (*(float *)(lVar14 + 0x5c) != INFINITY) {
    iVar23 = (int)*(float *)(lVar14 + 0x5c);
  }
  *(int *)(param_1 + 0x110) = iVar23;
  if ((uVar6 < 8) && ((0xcfU >> (ulong)(uVar6 & 0x1f) & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(&DAT_014ac19c + (long)(int)uVar6 * 4);
  }
  lVar14 = *(long *)(param_1 + 0x1a0);
  if ((lVar14 != 0) && (*(long *)(lVar14 + 0x18) != 0)) {
    if ((uint)*(long *)(lVar14 + 0x18) < 5) goto LAB_067fe83c;
    lVar15 = *(long *)(param_1 + 0x198);
    if (lVar15 == 0) goto LAB_067fe5b0;
    if (*(uint *)(lVar15 + 0x18) < 5) goto LAB_067fe83c;
    uVar13 = *(undefined8 *)(lVar14 + 0x60);
    *(undefined8 *)(lVar15 + 0x68) = *(undefined8 *)(lVar14 + 0x68);
    *(undefined8 *)(lVar15 + 0x60) = uVar13;
    thunk_FUN_0333a630((undefined8 *)(lVar15 + 0x60),0);
    lVar14 = *(long *)(param_1 + 0x1a0);
    if (lVar14 == 0) goto LAB_067fe5b0;
    if (*(uint *)(lVar14 + 0x18) < 8) goto LAB_067fe83c;
    lVar15 = *(long *)(param_1 + 0x198);
    if (lVar15 == 0) goto LAB_067fe5b0;
    if (*(uint *)(lVar15 + 0x18) < 8) goto LAB_067fe83c;
    uVar13 = *(undefined8 *)(lVar14 + 0x90);
    *(undefined8 *)(lVar15 + 0x98) = *(undefined8 *)(lVar14 + 0x98);
    *(undefined8 *)(lVar15 + 0x90) = uVar13;
    thunk_FUN_0333a630((undefined8 *)(lVar15 + 0x90),0);
  }
  lVar14 = *(long *)(param_1 + 0x130);
  if ((lVar14 != 0) && (iVar23 = *(int *)(lVar14 + 0x18), 0 < iVar23)) {
    if (*(long *)(param_1 + 0x138) == 0) {
      uVar13 = thunk_FUN_032a56a0(*(undefined8 *)
                                   Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>_Awake__
                                 );
      FUN_041e24b4(uVar13,iVar23,
                   *(undefined8 *)
                    Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_SelectingInteractorRemoved__
                  );
      *(undefined8 *)(param_1 + 0x138) = uVar13;
      thunk_FUN_0333a630((long *)(param_1 + 0x138),uVar13);
      lVar14 = *(long *)(param_1 + 0x130);
      if (lVar14 == 0) goto LAB_067fe5b0;
    }
    puVar11 = 
    Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_get_Registry__;
    puVar10 = 
    Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorAdded__;
    iVar23 = 0;
    do {
      if (*(int *)(lVar14 + 0x18) <= iVar23) goto LAB_067fe2b8;
      lVar15 = *(long *)(param_1 + 0x138);
      uVar13 = FUN_041e29a8(lVar14,iVar23,*(undefined8 *)puVar11);
      if (lVar15 == 0) break;
      lVar14 = *(long *)(lVar15 + 0x10);
      lVar19 = *(long *)puVar10;
      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
      if (lVar14 == 0) break;
      uVar6 = *(uint *)(lVar15 + 0x18);
      if (uVar6 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(lVar15 + 0x18) = uVar6 + 1;
        *(undefined8 *)(lVar14 + (long)(int)uVar6 * 8 + 0x20) = uVar13;
        thunk_FUN_0333a630();
      }
      else {
        FUN_041e2c78(lVar15,uVar13,
                     *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
      }
      lVar14 = *(long *)(param_1 + 0x130);
      iVar23 = iVar23 + 1;
    } while (lVar14 != 0);
    goto LAB_067fe5b0;
  }
LAB_067fe2b8:
  lVar14 = *(long *)(param_1 + 0x148);
  if (lVar14 == 0) {
    uVar16 = FUN_057aa92c(0,**(undefined8 **)(*(long *)puVar9 + 0xb8),0);
    if ((uVar16 & 1) != 0) {
      lVar14 = *(long *)(param_1 + 0x148);
      goto LAB_067fe2e0;
    }
    uVar13 = FUN_06becffc(param_1,0);
    uVar13 = FUN_057aaeec(*(undefined8 *)
                           Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>_Start__
                          ,uVar13,*(undefined8 *)
                                   Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataGhost>__ctor__
                          ,0);
    lVar14 = *(long *)puVar8;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar14);
    }
    FUN_06bb3070(uVar13,param_1,0);
  }
  else {
LAB_067fe2e0:
    *(long *)(param_1 + 0x38) = lVar14;
    thunk_FUN_0333a630();
  }
  lVar14 = *(long *)(param_1 + 0xb0);
  if (lVar14 != 0) {
    iVar23 = *(int *)(lVar14 + 0x18);
    *(undefined4 *)(lVar14 + 0x18) = 0;
    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
    if (0 < iVar23) {
      FUN_05946274(*(undefined8 *)(lVar14 + 0x10),0,iVar23,0);
    }
    lVar14 = *(long *)(param_1 + 0xc0);
    if (lVar14 != 0) {
      iVar23 = *(int *)(lVar14 + 0x18);
      *(undefined4 *)(lVar14 + 0x18) = 0;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      if (0 < iVar23) {
        FUN_05946274(*(undefined8 *)(lVar14 + 0x10),0,iVar23,0);
      }
      puVar9 = 
      Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>__ctor__;
      puVar8 = Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>__ctor__;
      lVar14 = *(long *)(param_1 + 0x118);
      if (lVar14 != 0) {
        bVar7 = false;
        iVar23 = 0;
        do {
          if (*(int *)(lVar14 + 0x18) <= iVar23) {
            if (!bVar7) {
              uVar13 = FUN_06becffc(param_1,0);
              uVar13 = FUN_057aaeec(*(undefined8 *)
                                     Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataGhost>_Start__
                                    ,uVar13,*(undefined8 *)PTR_DAT_07283358,0);
              if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
                thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
              }
              FUN_06bb23f0(uVar13,0);
              fVar24 = (float)FUN_06c5198c(lVar12,0);
              local_98 = 0;
              uStack_90 = 0;
              local_88 = 0;
              FUN_06c51cc8(0,0,0,0,fVar24 / 5.0,&local_98,0);
              if (*(int *)(*(long *)PTR_DAT_0727fc10 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              auVar27 = FUN_06c51a84(0);
              uVar13 = thunk_FUN_032a56a0(*(undefined8 *)puVar8);
              uStack_c8 = uStack_90;
              local_d0 = local_98;
              local_c0 = local_88;
              FUN_06c51f88(0x3f800000,uVar13,0,&local_d0,auVar27._0_8_,auVar27._8_8_,0,0);
              lVar12 = *(long *)(param_1 + 0xb0);
              if (lVar12 == 0) break;
              lVar14 = *(long *)(lVar12 + 0x10);
              lVar15 = *(long *)
                        Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__
              ;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar14 == 0) break;
              uVar6 = *(uint *)(lVar12 + 0x18);
              if (uVar6 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar6 + 1;
                puVar21 = (undefined8 *)(lVar14 + (long)(int)uVar6 * 8 + 0x20);
                *puVar21 = uVar13;
                thunk_FUN_0333a630(puVar21,uVar13);
              }
              else {
                FUN_041e2c78(lVar12,uVar13,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              lVar12 = *(long *)(param_1 + 0xc0);
              uVar17 = thunk_FUN_032a56a0(*(undefined8 *)
                                           Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                                         );
              FUN_067f6cd4(uVar17,0x20,param_1,uVar13);
              if (lVar12 == 0) break;
              lVar14 = *(long *)(lVar12 + 0x10);
              lVar15 = *(long *)
                        Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
              ;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              if (lVar14 == 0) break;
              uVar6 = *(uint *)(lVar12 + 0x18);
              if (uVar6 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar6 + 1;
                puVar21 = (undefined8 *)(lVar14 + (long)(int)uVar6 * 8 + 0x20);
                *puVar21 = uVar17;
                thunk_FUN_0333a630(puVar21,uVar17);
              }
              else {
                FUN_041e2c78(lVar12,uVar17,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
            }
            FUN_067fd16c(param_1);
            return;
          }
          lVar14 = FUN_041e29a8(lVar14,iVar23,*(undefined8 *)puVar9);
          lVar15 = thunk_FUN_032a56a0(*(undefined8 *)puVar8);
          FUN_06c51ed4(lVar15,0);
          if (lVar15 == 0) break;
          iVar23 = iVar23 + 1;
          FUN_06c51e70(lVar15,iVar23,0);
          if (lVar14 == 0) break;
          fVar24 = *(float *)(lVar14 + 0x18) + *(float *)(lVar14 + 0x20) + 0.5;
          fVar25 = *(float *)(lVar14 + 0x1c) + 0.5;
          iVar5 = -0x80000000;
          if (*(float *)(lVar14 + 0x14) != INFINITY) {
            iVar5 = (int)*(float *)(lVar14 + 0x14);
          }
          fVar26 = *(float *)(lVar14 + 0x20) + 0.5;
          iVar1 = -0x80000000;
          if (fVar24 != INFINITY) {
            iVar1 = (int)fVar24;
          }
          iVar2 = -0x80000000;
          if (fVar25 != INFINITY) {
            iVar2 = (int)fVar25;
          }
          iVar3 = -0x80000000;
          if (fVar26 != INFINITY) {
            iVar3 = (int)fVar26;
          }
          local_80 = 0;
          uStack_78 = 0;
          FUN_06c51adc(&local_80,iVar5,*(int *)(param_1 + 0x10c) - iVar1,iVar2,iVar3,0);
          FUN_06c51eac(lVar15,local_80,uStack_78,0);
          local_98 = 0;
          uStack_90 = 0;
          local_88 = 0;
          FUN_06c51cc8(*(undefined4 *)(lVar14 + 0x1c),*(undefined4 *)(lVar14 + 0x20),
                       *(undefined4 *)(lVar14 + 0x24),*(undefined4 *)(lVar14 + 0x28),
                       *(undefined4 *)(lVar14 + 0x2c),&local_98,0);
          uStack_a8 = uStack_90;
          local_b0 = local_98;
          local_a0 = local_88;
          FUN_06c51e8c(lVar15,&local_b0,0);
          FUN_06c51ebc(*(undefined4 *)(lVar14 + 0x30),lVar15,0);
          FUN_06c51ecc(lVar15,0,0);
          lVar19 = *(long *)(param_1 + 0xb0);
          if (lVar19 == 0) break;
          lVar18 = *(long *)(lVar19 + 0x10);
          lVar20 = *(long *)
                    Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__
          ;
          *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
          if (lVar18 == 0) break;
          uVar6 = *(uint *)(lVar19 + 0x18);
          if (uVar6 < *(uint *)(lVar18 + 0x18)) {
            *(uint *)(lVar19 + 0x18) = uVar6 + 1;
            plVar22 = (long *)(lVar18 + (long)(int)uVar6 * 8 + 0x20);
            *plVar22 = lVar15;
            thunk_FUN_0333a630(plVar22,lVar15);
          }
          else {
            FUN_041e2c78(lVar19,lVar15,
                         *(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          }
          uVar4 = *(undefined4 *)(lVar14 + 0x10);
          uVar13 = thunk_FUN_032a56a0(*(undefined8 *)
                                       Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                                     );
          FUN_067f6cd4(uVar13,uVar4,param_1,lVar15);
          iVar5 = *(int *)(lVar14 + 0x10);
          lVar14 = *(long *)(param_1 + 0xc0);
          if (lVar14 == 0) break;
          lVar15 = *(long *)(lVar14 + 0x10);
          lVar19 = *(long *)
                    Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
          ;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar15 == 0) break;
          uVar6 = *(uint *)(lVar14 + 0x18);
          if (uVar6 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar6 + 1;
            puVar21 = (undefined8 *)(lVar15 + (long)(int)uVar6 * 8 + 0x20);
            *puVar21 = uVar13;
            thunk_FUN_0333a630(puVar21,uVar13);
          }
          else {
            FUN_041e2c78(lVar14,uVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
          }
          lVar14 = *(long *)(param_1 + 0x118);
          bVar7 = (bool)(bVar7 | iVar5 == 0x20);
        } while (lVar14 != 0);
      }
    }
  }
LAB_067fe5b0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


