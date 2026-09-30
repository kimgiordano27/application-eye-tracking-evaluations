/*
FUNCTION_NAME: Unity.VisualScripting.GreaterThanOrEqualHandler.<>c$$<.ctor>b__0_11
ENTRY_POINT: 067fe360
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior
*/


void Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_11(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  long unaff_x19;
  int iVar16;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  
  bVar7 = false;
  iVar16 = 0;
  do {
    if (*(int *)(param_1 + 0x18) <= iVar16) {
      if (!bVar7) {
        uVar11 = FUN_06becffc();
        uVar11 = FUN_057aaeec(*(undefined8 *)
                               Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataGhost>_Start__
                              ,uVar11,*(undefined8 *)PTR_DAT_07283358,0);
        if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
        }
        FUN_06bb23f0(uVar11,0);
        fVar17 = (float)FUN_06c5198c(in_stack_00000068,0);
        in_stack_00000038 = 0;
        in_stack_00000040 = 0;
        in_stack_00000048 = 0;
        FUN_06c51cc8(0,0,0,0,fVar17 / 5.0,&stack0x00000038,0);
        if (*(int *)(*(long *)PTR_DAT_0727fc10 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        FUN_06c51a84(0);
        uVar11 = thunk_FUN_032a56a0(*unaff_x26);
        FUN_06c51f88(0x3f800000,uVar11,0);
        lVar8 = *(long *)(unaff_x19 + 0xb0);
        if (lVar8 == 0) break;
        lVar9 = *(long *)(lVar8 + 0x10);
        lVar10 = *(long *)
                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar9 == 0) break;
        uVar6 = *(uint *)(lVar8 + 0x18);
        if (uVar6 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar6 + 1;
          puVar14 = (undefined8 *)(lVar9 + (long)(int)uVar6 * 8 + 0x20);
          *puVar14 = uVar11;
          thunk_FUN_0333a630(puVar14,uVar11);
        }
        else {
          FUN_041e2c78(lVar8,uVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        lVar8 = *(long *)(unaff_x19 + 0xc0);
        uVar11 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                                   );
        FUN_067f6cd4(uVar11,0x20);
        if (lVar8 == 0) break;
        lVar9 = *(long *)(lVar8 + 0x10);
        lVar10 = *(long *)
                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
        ;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar9 == 0) break;
        uVar6 = *(uint *)(lVar8 + 0x18);
        if (uVar6 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar6 + 1;
          puVar14 = (undefined8 *)(lVar9 + (long)(int)uVar6 * 8 + 0x20);
          *puVar14 = uVar11;
          thunk_FUN_0333a630(puVar14,uVar11);
        }
        else {
          FUN_041e2c78(lVar8,uVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_067fd16c();
      return;
    }
    lVar8 = FUN_041e29a8(param_1,iVar16,*unaff_x27);
    lVar9 = thunk_FUN_032a56a0(*unaff_x26);
    FUN_06c51ed4(lVar9,0);
    if (lVar9 == 0) break;
    iVar16 = iVar16 + 1;
    FUN_06c51e70(lVar9,iVar16,0);
    if (lVar8 == 0) break;
    fVar17 = *(float *)(lVar8 + 0x18) + *(float *)(lVar8 + 0x20) + 0.5;
    fVar18 = *(float *)(lVar8 + 0x1c) + 0.5;
    iVar5 = -0x80000000;
    if (*(float *)(lVar8 + 0x14) != INFINITY) {
      iVar5 = (int)*(float *)(lVar8 + 0x14);
    }
    fVar19 = *(float *)(lVar8 + 0x20) + 0.5;
    iVar1 = -0x80000000;
    if (fVar17 != INFINITY) {
      iVar1 = (int)fVar17;
    }
    iVar2 = -0x80000000;
    if (fVar18 != INFINITY) {
      iVar2 = (int)fVar18;
    }
    iVar3 = -0x80000000;
    if (fVar19 != INFINITY) {
      iVar3 = (int)fVar19;
    }
    in_stack_00000050 = 0;
    in_stack_00000058 = 0;
    FUN_06c51adc(&stack0x00000050,iVar5,*(int *)(unaff_x19 + 0x10c) - iVar1,iVar2,iVar3,0);
    FUN_06c51eac(lVar9,in_stack_00000050,in_stack_00000058,0);
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    in_stack_00000048 = 0;
    FUN_06c51cc8(*(undefined4 *)(lVar8 + 0x1c),*(undefined4 *)(lVar8 + 0x20),
                 *(undefined4 *)(lVar8 + 0x24),*(undefined4 *)(lVar8 + 0x28),
                 *(undefined4 *)(lVar8 + 0x2c),&stack0x00000038,0);
    in_stack_00000028 = in_stack_00000040;
    in_stack_00000020 = in_stack_00000038;
    in_stack_00000030 = in_stack_00000048;
    FUN_06c51e8c(lVar9,&stack0x00000020,0);
    FUN_06c51ebc(*(undefined4 *)(lVar8 + 0x30),lVar9,0);
    FUN_06c51ecc(lVar9,0,0);
    lVar10 = *(long *)(unaff_x19 + 0xb0);
    if (lVar10 == 0) break;
    lVar12 = *(long *)(lVar10 + 0x10);
    lVar15 = *(long *)
              Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar12 == 0) break;
    uVar6 = *(uint *)(lVar10 + 0x18);
    if (uVar6 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar10 + 0x18) = uVar6 + 1;
      plVar13 = (long *)(lVar12 + (long)(int)uVar6 * 8 + 0x20);
      *plVar13 = lVar9;
      thunk_FUN_0333a630(plVar13,lVar9);
    }
    else {
      FUN_041e2c78(lVar10,lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
    }
    uVar4 = *(undefined4 *)(lVar8 + 0x10);
    uVar11 = thunk_FUN_032a56a0(*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                               );
    FUN_067f6cd4(uVar11,uVar4);
    iVar5 = *(int *)(lVar8 + 0x10);
    lVar8 = *(long *)(unaff_x19 + 0xc0);
    if (lVar8 == 0) break;
    lVar9 = *(long *)(lVar8 + 0x10);
    lVar10 = *(long *)
              Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
    ;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar9 == 0) break;
    uVar6 = *(uint *)(lVar8 + 0x18);
    if (uVar6 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar6 + 1;
      puVar14 = (undefined8 *)(lVar9 + (long)(int)uVar6 * 8 + 0x20);
      *puVar14 = uVar11;
      thunk_FUN_0333a630(puVar14,uVar11);
    }
    else {
      FUN_041e2c78(lVar8,uVar11,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    param_1 = *(long *)(unaff_x19 + 0x118);
    bVar7 = (bool)(bVar7 | iVar5 == 0x20);
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


