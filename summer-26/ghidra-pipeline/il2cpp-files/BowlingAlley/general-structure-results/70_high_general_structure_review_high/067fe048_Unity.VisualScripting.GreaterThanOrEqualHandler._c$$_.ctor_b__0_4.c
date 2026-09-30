/*
FUNCTION_NAME: Unity.VisualScripting.GreaterThanOrEqualHandler.<>c$$<.ctor>b__0_4
ENTRY_POINT: 067fe048
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior
*/


void Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_4(long param_1)

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
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long unaff_x19;
  long *plVar18;
  int iVar19;
  long *unaff_x24;
  long *unaff_x26;
  undefined8 unaff_x27;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  FUN_06c51a44(*(undefined4 *)(param_1 + 0x50));
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_067fe5b0;
  FUN_06c51a4c(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x54));
  if (*(long *)(unaff_x19 + 0xf8) == 0) goto LAB_067fe5b0;
  FUN_06c51a5c(*(undefined4 *)(*(long *)(unaff_x19 + 0xf8) + 0x58));
  plVar18 = (long *)(unaff_x19 + 0xd8);
  lVar10 = *plVar18;
  if ((lVar10 == 0) || (*(long *)(lVar10 + 0x18) == 0)) {
    lVar10 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_07287390,1);
    *plVar18 = lVar10;
    thunk_FUN_0333a630(plVar18,lVar10);
    lVar10 = *plVar18;
    if (lVar10 == 0) goto LAB_067fe5b0;
  }
  if (*(int *)(lVar10 + 0x18) == 0) goto LAB_067fe83c;
  *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(unaff_x19 + 0x100);
  thunk_FUN_0333a630();
  lVar10 = *(long *)(unaff_x19 + 0xf8);
  if (lVar10 == 0) goto LAB_067fe5b0;
  fVar20 = (float)*(undefined8 *)(lVar10 + 0x60);
  fVar21 = (float)((ulong)*(undefined8 *)(lVar10 + 0x60) >> 0x20);
  uVar13 = CONCAT44((int)fVar21,(int)fVar20);
  *(ulong *)(unaff_x19 + 0x108) =
       uVar13 ^ (uVar13 ^ 0x8000000080000000) &
                CONCAT44(-(uint)(fVar21 == INFINITY),-(uint)(fVar20 == INFINITY));
  uVar6 = *(uint *)(unaff_x19 + 400);
  iVar19 = -0x80000000;
  if (*(float *)(lVar10 + 0x5c) != INFINITY) {
    iVar19 = (int)*(float *)(lVar10 + 0x5c);
  }
  *(int *)(unaff_x19 + 0x110) = iVar19;
  if ((uVar6 < 8) && ((0xcfU >> (ulong)(uVar6 & 0x1f) & 1) != 0)) {
    *(undefined4 *)(unaff_x19 + 0x114) = *(undefined4 *)(&DAT_014ac19c + (long)(int)uVar6 * 4);
  }
  lVar10 = *(long *)(unaff_x19 + 0x1a0);
  if ((lVar10 != 0) && (*(long *)(lVar10 + 0x18) != 0)) {
    if ((uint)*(long *)(lVar10 + 0x18) < 5) {
LAB_067fe83c:
                    /* WARNING: Subroutine does not return */
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
    }
    lVar11 = *(long *)(unaff_x19 + 0x198);
    if (lVar11 == 0) goto LAB_067fe5b0;
    if (*(uint *)(lVar11 + 0x18) < 5) goto LAB_067fe83c;
    uVar12 = *(undefined8 *)(lVar10 + 0x60);
    *(undefined8 *)(lVar11 + 0x68) = *(undefined8 *)(lVar10 + 0x68);
    *(undefined8 *)(lVar11 + 0x60) = uVar12;
    thunk_FUN_0333a630((undefined8 *)(lVar11 + 0x60),0);
    lVar10 = *(long *)(unaff_x19 + 0x1a0);
    if (lVar10 == 0) goto LAB_067fe5b0;
    if (*(uint *)(lVar10 + 0x18) < 8) goto LAB_067fe83c;
    lVar11 = *(long *)(unaff_x19 + 0x198);
    if (lVar11 == 0) goto LAB_067fe5b0;
    if (*(uint *)(lVar11 + 0x18) < 8) goto LAB_067fe83c;
    uVar12 = *(undefined8 *)(lVar10 + 0x90);
    *(undefined8 *)(lVar11 + 0x98) = *(undefined8 *)(lVar10 + 0x98);
    *(undefined8 *)(lVar11 + 0x90) = uVar12;
    thunk_FUN_0333a630((undefined8 *)(lVar11 + 0x90),0);
  }
  lVar10 = *(long *)(unaff_x19 + 0x130);
  if ((lVar10 != 0) && (iVar19 = *(int *)(lVar10 + 0x18), 0 < iVar19)) {
    if (*(long *)(unaff_x19 + 0x138) == 0) {
      uVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                   Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>_Awake__
                                 );
      FUN_041e24b4(uVar12,iVar19,
                   *(undefined8 *)
                    Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_SelectingInteractorRemoved__
                  );
      *(undefined8 *)(unaff_x19 + 0x138) = uVar12;
      thunk_FUN_0333a630((long *)(unaff_x19 + 0x138),uVar12);
      lVar10 = *(long *)(unaff_x19 + 0x130);
      if (lVar10 == 0) goto LAB_067fe5b0;
    }
    puVar9 = Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_get_Registry__
    ;
    puVar8 = 
    Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorAdded__;
    iVar19 = 0;
    do {
      if (*(int *)(lVar10 + 0x18) <= iVar19) goto LAB_067fe2b8;
      lVar11 = *(long *)(unaff_x19 + 0x138);
      uVar12 = FUN_041e29a8(lVar10,iVar19,*(undefined8 *)puVar9);
      if (lVar11 == 0) break;
      lVar10 = *(long *)(lVar11 + 0x10);
      lVar16 = *(long *)puVar8;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar10 == 0) break;
      uVar6 = *(uint *)(lVar11 + 0x18);
      if (uVar6 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar6 + 1;
        *(undefined8 *)(lVar10 + (long)(int)uVar6 * 8 + 0x20) = uVar12;
        thunk_FUN_0333a630();
      }
      else {
        FUN_041e2c78(lVar11,uVar12,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
      lVar10 = *(long *)(unaff_x19 + 0x130);
      iVar19 = iVar19 + 1;
    } while (lVar10 != 0);
    goto LAB_067fe5b0;
  }
LAB_067fe2b8:
  lVar10 = *(long *)(unaff_x19 + 0x148);
  if (lVar10 == 0) {
    uVar13 = FUN_057aa92c(0,**(undefined8 **)(*unaff_x24 + 0xb8),0);
    if ((uVar13 & 1) != 0) {
      lVar10 = *(long *)(unaff_x19 + 0x148);
      goto LAB_067fe2e0;
    }
    uVar12 = FUN_06becffc();
    uVar12 = FUN_057aaeec(*(undefined8 *)
                           Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>_Start__
                          ,uVar12,*(undefined8 *)
                                   Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataGhost>__ctor__
                          ,0);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*unaff_x26);
    }
    FUN_06bb3070(uVar12);
  }
  else {
LAB_067fe2e0:
    *(long *)(unaff_x19 + 0x38) = lVar10;
    thunk_FUN_0333a630();
  }
  lVar10 = *(long *)(unaff_x19 + 0xb0);
  if (lVar10 != 0) {
    iVar19 = *(int *)(lVar10 + 0x18);
    *(undefined4 *)(lVar10 + 0x18) = 0;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (0 < iVar19) {
      FUN_05946274(*(undefined8 *)(lVar10 + 0x10),0,iVar19,0);
    }
    lVar10 = *(long *)(unaff_x19 + 0xc0);
    if (lVar10 != 0) {
      iVar19 = *(int *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (0 < iVar19) {
        FUN_05946274(*(undefined8 *)(lVar10 + 0x10),0,iVar19,0);
      }
      puVar9 = 
      Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>__ctor__;
      puVar8 = Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>__ctor__;
      lVar10 = *(long *)(unaff_x19 + 0x118);
      if (lVar10 != 0) {
        bVar7 = false;
        iVar19 = 0;
        do {
          if (*(int *)(lVar10 + 0x18) <= iVar19) {
            if (!bVar7) {
              uVar12 = FUN_06becffc();
              uVar12 = FUN_057aaeec(*(undefined8 *)
                                     Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataGhost>_Start__
                                    ,uVar12,*(undefined8 *)PTR_DAT_07283358,0);
              if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
                thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
              }
              FUN_06bb23f0(uVar12,0);
              fVar20 = (float)FUN_06c5198c(unaff_x27,0);
              in_stack_00000038 = 0;
              in_stack_00000040 = 0;
              in_stack_00000048 = 0;
              FUN_06c51cc8(0,0,0,0,fVar20 / 5.0,&stack0x00000038,0);
              if (*(int *)(*(long *)PTR_DAT_0727fc10 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              FUN_06c51a84(0);
              uVar12 = thunk_FUN_032a56a0(*(undefined8 *)puVar8);
              FUN_06c51f88(0x3f800000,uVar12,0);
              lVar10 = *(long *)(unaff_x19 + 0xb0);
              if (lVar10 == 0) break;
              lVar11 = *(long *)(lVar10 + 0x10);
              lVar16 = *(long *)
                        Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__
              ;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar11 == 0) break;
              uVar6 = *(uint *)(lVar10 + 0x18);
              if (uVar6 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar6 + 1;
                puVar15 = (undefined8 *)(lVar11 + (long)(int)uVar6 * 8 + 0x20);
                *puVar15 = uVar12;
                thunk_FUN_0333a630(puVar15,uVar12);
              }
              else {
                FUN_041e2c78(lVar10,uVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              lVar10 = *(long *)(unaff_x19 + 0xc0);
              uVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                           Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                                         );
              FUN_067f6cd4(uVar12,0x20);
              if (lVar10 == 0) break;
              lVar11 = *(long *)(lVar10 + 0x10);
              lVar16 = *(long *)
                        Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
              ;
              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
              if (lVar11 == 0) break;
              uVar6 = *(uint *)(lVar10 + 0x18);
              if (uVar6 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar6 + 1;
                puVar15 = (undefined8 *)(lVar11 + (long)(int)uVar6 * 8 + 0x20);
                *puVar15 = uVar12;
                thunk_FUN_0333a630(puVar15,uVar12);
              }
              else {
                FUN_041e2c78(lVar10,uVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
            }
            FUN_067fd16c();
            return;
          }
          lVar10 = FUN_041e29a8(lVar10,iVar19,*(undefined8 *)puVar9);
          lVar11 = thunk_FUN_032a56a0(*(undefined8 *)puVar8);
          FUN_06c51ed4(lVar11,0);
          if (lVar11 == 0) break;
          iVar19 = iVar19 + 1;
          FUN_06c51e70(lVar11,iVar19,0);
          if (lVar10 == 0) break;
          fVar20 = *(float *)(lVar10 + 0x18) + *(float *)(lVar10 + 0x20) + 0.5;
          fVar21 = *(float *)(lVar10 + 0x1c) + 0.5;
          iVar5 = -0x80000000;
          if (*(float *)(lVar10 + 0x14) != INFINITY) {
            iVar5 = (int)*(float *)(lVar10 + 0x14);
          }
          fVar22 = *(float *)(lVar10 + 0x20) + 0.5;
          iVar1 = -0x80000000;
          if (fVar20 != INFINITY) {
            iVar1 = (int)fVar20;
          }
          iVar2 = -0x80000000;
          if (fVar21 != INFINITY) {
            iVar2 = (int)fVar21;
          }
          iVar3 = -0x80000000;
          if (fVar22 != INFINITY) {
            iVar3 = (int)fVar22;
          }
          in_stack_00000050 = 0;
          in_stack_00000058 = 0;
          FUN_06c51adc(&stack0x00000050,iVar5,*(int *)(unaff_x19 + 0x10c) - iVar1,iVar2,iVar3,0);
          FUN_06c51eac(lVar11,in_stack_00000050,in_stack_00000058,0);
          in_stack_00000038 = 0;
          in_stack_00000040 = 0;
          in_stack_00000048 = 0;
          FUN_06c51cc8(*(undefined4 *)(lVar10 + 0x1c),*(undefined4 *)(lVar10 + 0x20),
                       *(undefined4 *)(lVar10 + 0x24),*(undefined4 *)(lVar10 + 0x28),
                       *(undefined4 *)(lVar10 + 0x2c),&stack0x00000038,0);
          in_stack_00000028 = in_stack_00000040;
          in_stack_00000020 = in_stack_00000038;
          in_stack_00000030 = in_stack_00000048;
          FUN_06c51e8c(lVar11,&stack0x00000020,0);
          FUN_06c51ebc(*(undefined4 *)(lVar10 + 0x30),lVar11,0);
          FUN_06c51ecc(lVar11,0,0);
          lVar16 = *(long *)(unaff_x19 + 0xb0);
          if (lVar16 == 0) break;
          lVar14 = *(long *)(lVar16 + 0x10);
          lVar17 = *(long *)
                    Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__
          ;
          *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
          if (lVar14 == 0) break;
          uVar6 = *(uint *)(lVar16 + 0x18);
          if (uVar6 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar16 + 0x18) = uVar6 + 1;
            plVar18 = (long *)(lVar14 + (long)(int)uVar6 * 8 + 0x20);
            *plVar18 = lVar11;
            thunk_FUN_0333a630(plVar18,lVar11);
          }
          else {
            FUN_041e2c78(lVar16,lVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
          uVar4 = *(undefined4 *)(lVar10 + 0x10);
          uVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                       Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                                     );
          FUN_067f6cd4(uVar12,uVar4);
          iVar5 = *(int *)(lVar10 + 0x10);
          lVar10 = *(long *)(unaff_x19 + 0xc0);
          if (lVar10 == 0) break;
          lVar11 = *(long *)(lVar10 + 0x10);
          lVar16 = *(long *)
                    Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
          ;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar11 == 0) break;
          uVar6 = *(uint *)(lVar10 + 0x18);
          if (uVar6 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar6 + 1;
            puVar15 = (undefined8 *)(lVar11 + (long)(int)uVar6 * 8 + 0x20);
            *puVar15 = uVar12;
            thunk_FUN_0333a630(puVar15,uVar12);
          }
          else {
            FUN_041e2c78(lVar10,uVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          lVar10 = *(long *)(unaff_x19 + 0x118);
          bVar7 = (bool)(bVar7 | iVar5 == 0x20);
        } while (lVar10 != 0);
      }
    }
  }
LAB_067fe5b0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


