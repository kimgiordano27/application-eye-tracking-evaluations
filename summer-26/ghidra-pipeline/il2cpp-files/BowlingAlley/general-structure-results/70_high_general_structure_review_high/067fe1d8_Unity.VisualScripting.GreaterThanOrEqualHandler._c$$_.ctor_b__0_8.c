/*
FUNCTION_NAME: Unity.VisualScripting.GreaterThanOrEqualHandler.<>c$$<.ctor>b__0_8
ENTRY_POINT: 067fe1d8
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


void Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_8(long param_1,long param_2)

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
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long unaff_x19;
  long *unaff_x21;
  undefined4 unaff_w22;
  int iVar18;
  long lVar19;
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
  
  if (param_1 == 0) {
    uVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                 Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>_Awake__
                               );
    FUN_041e24b4(uVar10,unaff_w22,
                 *(undefined8 *)
                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_SelectingInteractorRemoved__
                );
    *(undefined8 *)(unaff_x19 + 0x138) = uVar10;
    thunk_FUN_0333a630();
    param_2 = *(long *)(unaff_x19 + 0x130);
    if (param_2 == 0) goto LAB_067fe5b0;
  }
  puVar9 = Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_get_Registry__;
  puVar8 = 
  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorAdded__;
  iVar18 = 0;
  do {
    if (*(int *)(param_2 + 0x18) <= iVar18) {
      lVar19 = *(long *)(unaff_x19 + 0x148);
      if (lVar19 == 0) {
        uVar11 = FUN_057aa92c(0,**(undefined8 **)(*unaff_x24 + 0xb8),0);
        if ((uVar11 & 1) != 0) {
          lVar19 = *(long *)(unaff_x19 + 0x148);
          goto LAB_067fe2e0;
        }
        uVar10 = FUN_06becffc();
        uVar10 = FUN_057aaeec(*(undefined8 *)
                               Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>_Start__
                              ,uVar10,*(undefined8 *)
                                       Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataGhost>__ctor__
                              ,0);
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*unaff_x26);
        }
        FUN_06bb3070(uVar10);
      }
      else {
LAB_067fe2e0:
        *(long *)(unaff_x19 + 0x38) = lVar19;
        thunk_FUN_0333a630();
      }
      lVar19 = *(long *)(unaff_x19 + 0xb0);
      if (lVar19 != 0) {
        iVar18 = *(int *)(lVar19 + 0x18);
        *(undefined4 *)(lVar19 + 0x18) = 0;
        *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
        if (0 < iVar18) {
          FUN_05946274(*(undefined8 *)(lVar19 + 0x10),0,iVar18,0);
        }
        lVar19 = *(long *)(unaff_x19 + 0xc0);
        if (lVar19 != 0) {
          iVar18 = *(int *)(lVar19 + 0x18);
          *(undefined4 *)(lVar19 + 0x18) = 0;
          *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
          if (0 < iVar18) {
            FUN_05946274(*(undefined8 *)(lVar19 + 0x10),0,iVar18,0);
          }
          puVar9 = 
          Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>__ctor__;
          puVar8 = Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>__ctor__;
          lVar19 = *(long *)(unaff_x19 + 0x118);
          if (lVar19 != 0) {
            bVar7 = false;
            iVar18 = 0;
            goto LAB_067fe374;
          }
        }
      }
      break;
    }
    lVar19 = *unaff_x21;
    uVar10 = FUN_041e29a8(param_2,iVar18,*(undefined8 *)puVar9);
    if (lVar19 == 0) break;
    lVar12 = *(long *)(lVar19 + 0x10);
    lVar16 = *(long *)puVar8;
    *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
    if (lVar12 == 0) break;
    uVar6 = *(uint *)(lVar19 + 0x18);
    if (uVar6 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar19 + 0x18) = uVar6 + 1;
      *(undefined8 *)(lVar12 + (long)(int)uVar6 * 8 + 0x20) = uVar10;
      thunk_FUN_0333a630();
    }
    else {
      FUN_041e2c78(lVar19,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
      ;
    }
    param_2 = *(long *)(unaff_x19 + 0x130);
    iVar18 = iVar18 + 1;
  } while (param_2 != 0);
  goto LAB_067fe5b0;
  while( true ) {
    lVar19 = FUN_041e29a8(lVar19,iVar18,*(undefined8 *)puVar9);
    lVar12 = thunk_FUN_032a56a0(*(undefined8 *)puVar8);
    FUN_06c51ed4(lVar12,0);
    if (lVar12 == 0) break;
    iVar18 = iVar18 + 1;
    FUN_06c51e70(lVar12,iVar18,0);
    if (lVar19 == 0) break;
    fVar20 = *(float *)(lVar19 + 0x18) + *(float *)(lVar19 + 0x20) + 0.5;
    fVar21 = *(float *)(lVar19 + 0x1c) + 0.5;
    iVar5 = -0x80000000;
    if (*(float *)(lVar19 + 0x14) != INFINITY) {
      iVar5 = (int)*(float *)(lVar19 + 0x14);
    }
    fVar22 = *(float *)(lVar19 + 0x20) + 0.5;
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
    FUN_06c51eac(lVar12,in_stack_00000050,in_stack_00000058,0);
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    in_stack_00000048 = 0;
    FUN_06c51cc8(*(undefined4 *)(lVar19 + 0x1c),*(undefined4 *)(lVar19 + 0x20),
                 *(undefined4 *)(lVar19 + 0x24),*(undefined4 *)(lVar19 + 0x28),
                 *(undefined4 *)(lVar19 + 0x2c),&stack0x00000038,0);
    in_stack_00000028 = in_stack_00000040;
    in_stack_00000020 = in_stack_00000038;
    in_stack_00000030 = in_stack_00000048;
    FUN_06c51e8c(lVar12,&stack0x00000020,0);
    FUN_06c51ebc(*(undefined4 *)(lVar19 + 0x30),lVar12,0);
    FUN_06c51ecc(lVar12,0,0);
    lVar16 = *(long *)(unaff_x19 + 0xb0);
    if (lVar16 == 0) break;
    lVar13 = *(long *)(lVar16 + 0x10);
    lVar17 = *(long *)
              Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__;
    *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
    if (lVar13 == 0) break;
    uVar6 = *(uint *)(lVar16 + 0x18);
    if (uVar6 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(lVar16 + 0x18) = uVar6 + 1;
      plVar14 = (long *)(lVar13 + (long)(int)uVar6 * 8 + 0x20);
      *plVar14 = lVar12;
      thunk_FUN_0333a630(plVar14,lVar12);
    }
    else {
      FUN_041e2c78(lVar16,lVar12,*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70))
      ;
    }
    uVar4 = *(undefined4 *)(lVar19 + 0x10);
    uVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                               );
    FUN_067f6cd4(uVar10,uVar4);
    iVar5 = *(int *)(lVar19 + 0x10);
    lVar19 = *(long *)(unaff_x19 + 0xc0);
    if (lVar19 == 0) break;
    lVar12 = *(long *)(lVar19 + 0x10);
    lVar16 = *(long *)
              Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
    ;
    *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
    if (lVar12 == 0) break;
    uVar6 = *(uint *)(lVar19 + 0x18);
    if (uVar6 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar19 + 0x18) = uVar6 + 1;
      puVar15 = (undefined8 *)(lVar12 + (long)(int)uVar6 * 8 + 0x20);
      *puVar15 = uVar10;
      thunk_FUN_0333a630(puVar15,uVar10);
    }
    else {
      FUN_041e2c78(lVar19,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
      ;
    }
    lVar19 = *(long *)(unaff_x19 + 0x118);
    bVar7 = (bool)(bVar7 | iVar5 == 0x20);
    if (lVar19 == 0) break;
LAB_067fe374:
    if (*(int *)(lVar19 + 0x18) <= iVar18) {
      if (!bVar7) {
        uVar10 = FUN_06becffc();
        uVar10 = FUN_057aaeec(*(undefined8 *)
                               Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataGhost>_Start__
                              ,uVar10,*(undefined8 *)PTR_DAT_07283358,0);
        if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
        }
        FUN_06bb23f0(uVar10,0);
        fVar20 = (float)FUN_06c5198c(unaff_x27,0);
        in_stack_00000038 = 0;
        in_stack_00000040 = 0;
        in_stack_00000048 = 0;
        FUN_06c51cc8(0,0,0,0,fVar20 / 5.0,&stack0x00000038,0);
        if (*(int *)(*(long *)PTR_DAT_0727fc10 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        FUN_06c51a84(0);
        uVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar8);
        FUN_06c51f88(0x3f800000,uVar10,0);
        lVar19 = *(long *)(unaff_x19 + 0xb0);
        if (lVar19 == 0) break;
        lVar12 = *(long *)(lVar19 + 0x10);
        lVar16 = *(long *)
                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__;
        *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
        if (lVar12 == 0) break;
        uVar6 = *(uint *)(lVar19 + 0x18);
        if (uVar6 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar19 + 0x18) = uVar6 + 1;
          puVar15 = (undefined8 *)(lVar12 + (long)(int)uVar6 * 8 + 0x20);
          *puVar15 = uVar10;
          thunk_FUN_0333a630(puVar15,uVar10);
        }
        else {
          FUN_041e2c78(lVar19,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        lVar19 = *(long *)(unaff_x19 + 0xc0);
        uVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                                   );
        FUN_067f6cd4(uVar10,0x20);
        if (lVar19 == 0) break;
        lVar12 = *(long *)(lVar19 + 0x10);
        lVar16 = *(long *)
                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
        ;
        *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
        if (lVar12 == 0) break;
        uVar6 = *(uint *)(lVar19 + 0x18);
        if (uVar6 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar19 + 0x18) = uVar6 + 1;
          puVar15 = (undefined8 *)(lVar12 + (long)(int)uVar6 * 8 + 0x20);
          *puVar15 = uVar10;
          thunk_FUN_0333a630(puVar15,uVar10);
        }
        else {
          FUN_041e2c78(lVar19,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_067fd16c();
      return;
    }
  }
LAB_067fe5b0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


