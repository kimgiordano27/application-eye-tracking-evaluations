/*
FUNCTION_NAME: Unity.VisualScripting.GreaterThanOrEqualHandler.<>c$$<.ctor>b__0_9
ENTRY_POINT: 067fe244
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


void Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_9
               (long param_1,undefined8 param_2,undefined8 param_3)

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
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long unaff_x19;
  undefined8 *unaff_x20;
  int iVar19;
  long *unaff_x21;
  int unaff_w22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
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
  
  while (uVar10 = FUN_041e29a8(param_1,unaff_w22,param_3), unaff_x23 != 0) {
    lVar13 = *(long *)(unaff_x23 + 0x10);
    lVar17 = *unaff_x25;
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    if (lVar13 == 0) break;
    uVar6 = *(uint *)(unaff_x23 + 0x18);
    if (uVar6 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar6 + 1;
      *(undefined8 *)(lVar13 + (long)(int)uVar6 * 8 + 0x20) = uVar10;
      thunk_FUN_0333a630();
    }
    else {
      FUN_041e2c78(unaff_x23,uVar10,
                   *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
    }
    param_1 = *(long *)(unaff_x19 + 0x130);
    unaff_w22 = unaff_w22 + 1;
    if (param_1 == 0) break;
    if (*(int *)(param_1 + 0x18) <= unaff_w22) {
      lVar13 = *(long *)(unaff_x19 + 0x148);
      if (lVar13 == 0) {
        uVar11 = FUN_057aa92c(0,**(undefined8 **)(*unaff_x24 + 0xb8),0);
        if ((uVar11 & 1) != 0) {
          lVar13 = *(long *)(unaff_x19 + 0x148);
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
        *(long *)(unaff_x19 + 0x38) = lVar13;
        thunk_FUN_0333a630();
      }
      lVar13 = *(long *)(unaff_x19 + 0xb0);
      if (lVar13 != 0) {
        iVar19 = *(int *)(lVar13 + 0x18);
        *(undefined4 *)(lVar13 + 0x18) = 0;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (0 < iVar19) {
          FUN_05946274(*(undefined8 *)(lVar13 + 0x10),0,iVar19,0);
        }
        lVar13 = *(long *)(unaff_x19 + 0xc0);
        if (lVar13 != 0) {
          iVar19 = *(int *)(lVar13 + 0x18);
          *(undefined4 *)(lVar13 + 0x18) = 0;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (0 < iVar19) {
            FUN_05946274(*(undefined8 *)(lVar13 + 0x10),0,iVar19,0);
          }
          puVar9 = 
          Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>__ctor__;
          puVar8 = Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>__ctor__;
          lVar13 = *(long *)(unaff_x19 + 0x118);
          if (lVar13 != 0) {
            bVar7 = false;
            iVar19 = 0;
            goto LAB_067fe374;
          }
        }
      }
      break;
    }
    param_3 = *unaff_x20;
    unaff_x23 = *unaff_x21;
  }
  goto LAB_067fe5b0;
  while( true ) {
    lVar13 = FUN_041e29a8(lVar13,iVar19,*(undefined8 *)puVar9);
    lVar17 = thunk_FUN_032a56a0(*(undefined8 *)puVar8);
    FUN_06c51ed4(lVar17,0);
    if (lVar17 == 0) break;
    iVar19 = iVar19 + 1;
    FUN_06c51e70(lVar17,iVar19,0);
    if (lVar13 == 0) break;
    fVar20 = *(float *)(lVar13 + 0x18) + *(float *)(lVar13 + 0x20) + 0.5;
    fVar21 = *(float *)(lVar13 + 0x1c) + 0.5;
    iVar5 = -0x80000000;
    if (*(float *)(lVar13 + 0x14) != INFINITY) {
      iVar5 = (int)*(float *)(lVar13 + 0x14);
    }
    fVar22 = *(float *)(lVar13 + 0x20) + 0.5;
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
    FUN_06c51eac(lVar17,in_stack_00000050,in_stack_00000058,0);
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    in_stack_00000048 = 0;
    FUN_06c51cc8(*(undefined4 *)(lVar13 + 0x1c),*(undefined4 *)(lVar13 + 0x20),
                 *(undefined4 *)(lVar13 + 0x24),*(undefined4 *)(lVar13 + 0x28),
                 *(undefined4 *)(lVar13 + 0x2c),&stack0x00000038,0);
    in_stack_00000028 = in_stack_00000040;
    in_stack_00000020 = in_stack_00000038;
    in_stack_00000030 = in_stack_00000048;
    FUN_06c51e8c(lVar17,&stack0x00000020,0);
    FUN_06c51ebc(*(undefined4 *)(lVar13 + 0x30),lVar17,0);
    FUN_06c51ecc(lVar17,0,0);
    lVar12 = *(long *)(unaff_x19 + 0xb0);
    if (lVar12 == 0) break;
    lVar14 = *(long *)(lVar12 + 0x10);
    lVar18 = *(long *)
              Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar14 == 0) break;
    uVar6 = *(uint *)(lVar12 + 0x18);
    if (uVar6 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(lVar12 + 0x18) = uVar6 + 1;
      plVar15 = (long *)(lVar14 + (long)(int)uVar6 * 8 + 0x20);
      *plVar15 = lVar17;
      thunk_FUN_0333a630(plVar15,lVar17);
    }
    else {
      FUN_041e2c78(lVar12,lVar17,*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70))
      ;
    }
    uVar4 = *(undefined4 *)(lVar13 + 0x10);
    uVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                               );
    FUN_067f6cd4(uVar10,uVar4);
    iVar5 = *(int *)(lVar13 + 0x10);
    lVar13 = *(long *)(unaff_x19 + 0xc0);
    if (lVar13 == 0) break;
    lVar17 = *(long *)(lVar13 + 0x10);
    lVar12 = *(long *)
              Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
    ;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (lVar17 == 0) break;
    uVar6 = *(uint *)(lVar13 + 0x18);
    if (uVar6 < *(uint *)(lVar17 + 0x18)) {
      *(uint *)(lVar13 + 0x18) = uVar6 + 1;
      puVar16 = (undefined8 *)(lVar17 + (long)(int)uVar6 * 8 + 0x20);
      *puVar16 = uVar10;
      thunk_FUN_0333a630(puVar16,uVar10);
    }
    else {
      FUN_041e2c78(lVar13,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
      ;
    }
    lVar13 = *(long *)(unaff_x19 + 0x118);
    bVar7 = (bool)(bVar7 | iVar5 == 0x20);
    if (lVar13 == 0) break;
LAB_067fe374:
    if (*(int *)(lVar13 + 0x18) <= iVar19) {
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
        lVar13 = *(long *)(unaff_x19 + 0xb0);
        if (lVar13 == 0) break;
        lVar17 = *(long *)(lVar13 + 0x10);
        lVar12 = *(long *)
                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar17 == 0) break;
        uVar6 = *(uint *)(lVar13 + 0x18);
        if (uVar6 < *(uint *)(lVar17 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar6 + 1;
          puVar16 = (undefined8 *)(lVar17 + (long)(int)uVar6 * 8 + 0x20);
          *puVar16 = uVar10;
          thunk_FUN_0333a630(puVar16,uVar10);
        }
        else {
          FUN_041e2c78(lVar13,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        lVar13 = *(long *)(unaff_x19 + 0xc0);
        uVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                                   );
        FUN_067f6cd4(uVar10,0x20);
        if (lVar13 == 0) break;
        lVar17 = *(long *)(lVar13 + 0x10);
        lVar12 = *(long *)
                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
        ;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar17 == 0) break;
        uVar6 = *(uint *)(lVar13 + 0x18);
        if (uVar6 < *(uint *)(lVar17 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar6 + 1;
          puVar16 = (undefined8 *)(lVar17 + (long)(int)uVar6 * 8 + 0x20);
          *puVar16 = uVar10;
          thunk_FUN_0333a630(puVar16,uVar10);
        }
        else {
          FUN_041e2c78(lVar13,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
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


