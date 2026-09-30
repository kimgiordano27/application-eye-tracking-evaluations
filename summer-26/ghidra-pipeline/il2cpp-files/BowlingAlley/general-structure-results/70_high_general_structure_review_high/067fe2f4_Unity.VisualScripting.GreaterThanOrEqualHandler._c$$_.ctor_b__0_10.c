/*
FUNCTION_NAME: Unity.VisualScripting.GreaterThanOrEqualHandler.<>c$$<.ctor>b__0_10
ENTRY_POINT: 067fe2f4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior
*/


void Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_10(long param_1)

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
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  long unaff_x19;
  int iVar18;
  undefined8 unaff_x27;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  iVar18 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (0 < iVar18) {
    FUN_05946274(*(undefined8 *)(param_1 + 0x10),0,iVar18,0);
  }
  lVar13 = *(long *)(unaff_x19 + 0xc0);
  if (lVar13 != 0) {
    iVar18 = *(int *)(lVar13 + 0x18);
    *(undefined4 *)(lVar13 + 0x18) = 0;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    if (0 < iVar18) {
      FUN_05946274(*(undefined8 *)(lVar13 + 0x10),0,iVar18,0);
    }
    puVar9 = 
    Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>__ctor__;
    puVar8 = Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>__ctor__;
    lVar13 = *(long *)(unaff_x19 + 0x118);
    if (lVar13 != 0) {
      bVar7 = false;
      iVar18 = 0;
      do {
        if (*(int *)(lVar13 + 0x18) <= iVar18) {
          if (!bVar7) {
            uVar12 = FUN_06becffc();
            uVar12 = FUN_057aaeec(*(undefined8 *)
                                   Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataGhost>_Start__
                                  ,uVar12,*(undefined8 *)PTR_DAT_07283358,0);
            if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
              thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
            }
            FUN_06bb23f0(uVar12,0);
            fVar19 = (float)FUN_06c5198c(unaff_x27,0);
            in_stack_00000038 = 0;
            in_stack_00000040 = 0;
            in_stack_00000048 = 0;
            FUN_06c51cc8(0,0,0,0,fVar19 / 5.0,&stack0x00000038,0);
            if (*(int *)(*(long *)PTR_DAT_0727fc10 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            FUN_06c51a84(0);
            uVar12 = thunk_FUN_032a56a0(*(undefined8 *)puVar8);
            FUN_06c51f88(0x3f800000,uVar12,0);
            lVar13 = *(long *)(unaff_x19 + 0xb0);
            if (lVar13 == 0) break;
            lVar10 = *(long *)(lVar13 + 0x10);
            lVar11 = *(long *)
                      Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__
            ;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar10 == 0) break;
            uVar6 = *(uint *)(lVar13 + 0x18);
            if (uVar6 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar13 + 0x18) = uVar6 + 1;
              puVar16 = (undefined8 *)(lVar10 + (long)(int)uVar6 * 8 + 0x20);
              *puVar16 = uVar12;
              thunk_FUN_0333a630(puVar16,uVar12);
            }
            else {
              FUN_041e2c78(lVar13,uVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            lVar13 = *(long *)(unaff_x19 + 0xc0);
            uVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                         Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                                       );
            FUN_067f6cd4(uVar12,0x20);
            if (lVar13 == 0) break;
            lVar10 = *(long *)(lVar13 + 0x10);
            lVar11 = *(long *)
                      Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
            ;
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar10 == 0) break;
            uVar6 = *(uint *)(lVar13 + 0x18);
            if (uVar6 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar13 + 0x18) = uVar6 + 1;
              puVar16 = (undefined8 *)(lVar10 + (long)(int)uVar6 * 8 + 0x20);
              *puVar16 = uVar12;
              thunk_FUN_0333a630(puVar16,uVar12);
            }
            else {
              FUN_041e2c78(lVar13,uVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
          }
          FUN_067fd16c();
          return;
        }
        lVar13 = FUN_041e29a8(lVar13,iVar18,*(undefined8 *)puVar9);
        lVar10 = thunk_FUN_032a56a0(*(undefined8 *)puVar8);
        FUN_06c51ed4(lVar10,0);
        if (lVar10 == 0) break;
        iVar18 = iVar18 + 1;
        FUN_06c51e70(lVar10,iVar18,0);
        if (lVar13 == 0) break;
        fVar19 = *(float *)(lVar13 + 0x18) + *(float *)(lVar13 + 0x20) + 0.5;
        fVar20 = *(float *)(lVar13 + 0x1c) + 0.5;
        iVar5 = -0x80000000;
        if (*(float *)(lVar13 + 0x14) != INFINITY) {
          iVar5 = (int)*(float *)(lVar13 + 0x14);
        }
        fVar21 = *(float *)(lVar13 + 0x20) + 0.5;
        iVar1 = -0x80000000;
        if (fVar19 != INFINITY) {
          iVar1 = (int)fVar19;
        }
        iVar2 = -0x80000000;
        if (fVar20 != INFINITY) {
          iVar2 = (int)fVar20;
        }
        iVar3 = -0x80000000;
        if (fVar21 != INFINITY) {
          iVar3 = (int)fVar21;
        }
        in_stack_00000050 = 0;
        in_stack_00000058 = 0;
        FUN_06c51adc(&stack0x00000050,iVar5,*(int *)(unaff_x19 + 0x10c) - iVar1,iVar2,iVar3,0);
        FUN_06c51eac(lVar10,in_stack_00000050,in_stack_00000058,0);
        in_stack_00000038 = 0;
        in_stack_00000040 = 0;
        in_stack_00000048 = 0;
        FUN_06c51cc8(*(undefined4 *)(lVar13 + 0x1c),*(undefined4 *)(lVar13 + 0x20),
                     *(undefined4 *)(lVar13 + 0x24),*(undefined4 *)(lVar13 + 0x28),
                     *(undefined4 *)(lVar13 + 0x2c),&stack0x00000038,0);
        in_stack_00000028 = in_stack_00000040;
        in_stack_00000020 = in_stack_00000038;
        in_stack_00000030 = in_stack_00000048;
        FUN_06c51e8c(lVar10,&stack0x00000020,0);
        FUN_06c51ebc(*(undefined4 *)(lVar13 + 0x30),lVar10,0);
        FUN_06c51ecc(lVar10,0,0);
        lVar11 = *(long *)(unaff_x19 + 0xb0);
        if (lVar11 == 0) break;
        lVar14 = *(long *)(lVar11 + 0x10);
        lVar17 = *(long *)
                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar14 == 0) break;
        uVar6 = *(uint *)(lVar11 + 0x18);
        if (uVar6 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar6 + 1;
          plVar15 = (long *)(lVar14 + (long)(int)uVar6 * 8 + 0x20);
          *plVar15 = lVar10;
          thunk_FUN_0333a630(plVar15,lVar10);
        }
        else {
          FUN_041e2c78(lVar11,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
        uVar4 = *(undefined4 *)(lVar13 + 0x10);
        uVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                                   );
        FUN_067f6cd4(uVar12,uVar4);
        iVar5 = *(int *)(lVar13 + 0x10);
        lVar13 = *(long *)(unaff_x19 + 0xc0);
        if (lVar13 == 0) break;
        lVar10 = *(long *)(lVar13 + 0x10);
        lVar11 = *(long *)
                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
        ;
        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
        if (lVar10 == 0) break;
        uVar6 = *(uint *)(lVar13 + 0x18);
        if (uVar6 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar13 + 0x18) = uVar6 + 1;
          puVar16 = (undefined8 *)(lVar10 + (long)(int)uVar6 * 8 + 0x20);
          *puVar16 = uVar12;
          thunk_FUN_0333a630(puVar16,uVar12);
        }
        else {
          FUN_041e2c78(lVar13,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        lVar13 = *(long *)(unaff_x19 + 0x118);
        bVar7 = (bool)(bVar7 | iVar5 == 0x20);
      } while (lVar13 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


