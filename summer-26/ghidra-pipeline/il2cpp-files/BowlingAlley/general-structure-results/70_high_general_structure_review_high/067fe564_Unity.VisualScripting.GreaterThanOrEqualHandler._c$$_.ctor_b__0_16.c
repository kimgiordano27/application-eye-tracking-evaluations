/*
FUNCTION_NAME: Unity.VisualScripting.GreaterThanOrEqualHandler.<>c$$<.ctor>b__0_16
ENTRY_POINT: 067fe564
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


void Unity_VisualScripting_GreaterThanOrEqualHandler_<>c__<_ctor>b__0_16(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  long in_x9;
  long in_x10;
  long unaff_x19;
  byte unaff_w20;
  int unaff_w21;
  byte unaff_w22;
  undefined8 unaff_x24;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  float unaff_w28;
  int unaff_w29;
  float fVar15;
  float fVar16;
  float fVar17;
  float unaff_s8;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  
  while( true ) {
    if ((uint)in_x10 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(param_2 + 0x18) = (uint)in_x10 + 1;
      puVar13 = (undefined8 *)(param_1 + in_x10 * 8 + 0x20);
      *puVar13 = unaff_x24;
      thunk_FUN_0333a630(puVar13,unaff_x24);
    }
    else {
      FUN_041e2c78(param_2,unaff_x24,
                   *(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70));
    }
    lVar9 = *(long *)(unaff_x19 + 0x118);
    unaff_w20 = unaff_w20 | unaff_w22;
    if (lVar9 == 0) goto LAB_067fe5b0;
    if (*(int *)(lVar9 + 0x18) <= unaff_w21) break;
    lVar9 = FUN_041e29a8(lVar9,unaff_w21,*unaff_x27);
    lVar7 = thunk_FUN_032a56a0(*unaff_x26);
    FUN_06c51ed4(lVar7,0);
    if (lVar7 == 0) goto LAB_067fe5b0;
    unaff_w21 = unaff_w21 + 1;
    FUN_06c51e70(lVar7,unaff_w21,0);
    if (lVar9 == 0) goto LAB_067fe5b0;
    fVar15 = *(float *)(lVar9 + 0x18) + *(float *)(lVar9 + 0x20) + unaff_s8;
    fVar16 = *(float *)(lVar9 + 0x1c) + unaff_s8;
    iVar1 = unaff_w29;
    if (*(float *)(lVar9 + 0x14) != unaff_w28) {
      iVar1 = (int)*(float *)(lVar9 + 0x14);
    }
    fVar17 = *(float *)(lVar9 + 0x20) + unaff_s8;
    iVar2 = unaff_w29;
    if (fVar15 != unaff_w28) {
      iVar2 = (int)fVar15;
    }
    iVar3 = unaff_w29;
    if (fVar16 != unaff_w28) {
      iVar3 = (int)fVar16;
    }
    iVar4 = unaff_w29;
    if (fVar17 != unaff_w28) {
      iVar4 = (int)fVar17;
    }
    in_stack_00000050 = 0;
    in_stack_00000058 = 0;
    FUN_06c51adc(&stack0x00000050,iVar1,*(int *)(unaff_x19 + 0x10c) - iVar2,iVar3,iVar4,0);
    FUN_06c51eac(lVar7,in_stack_00000050,in_stack_00000058,0);
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    in_stack_00000048 = 0;
    FUN_06c51cc8(*(undefined4 *)(lVar9 + 0x1c),*(undefined4 *)(lVar9 + 0x20),
                 *(undefined4 *)(lVar9 + 0x24),*(undefined4 *)(lVar9 + 0x28),
                 *(undefined4 *)(lVar9 + 0x2c),&stack0x00000038,0);
    in_stack_00000028 = in_stack_00000040;
    in_stack_00000020 = in_stack_00000038;
    in_stack_00000030 = in_stack_00000048;
    FUN_06c51e8c(lVar7,&stack0x00000020,0);
    FUN_06c51ebc(*(undefined4 *)(lVar9 + 0x30),lVar7,0);
    FUN_06c51ecc(lVar7,0,0);
    lVar8 = *(long *)(unaff_x19 + 0xb0);
    if (lVar8 == 0) goto LAB_067fe5b0;
    lVar11 = *(long *)(lVar8 + 0x10);
    lVar14 = *(long *)
              Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar11 == 0) goto LAB_067fe5b0;
    uVar6 = *(uint *)(lVar8 + 0x18);
    if (uVar6 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar6 + 1;
      plVar12 = (long *)(lVar11 + (long)(int)uVar6 * 8 + 0x20);
      *plVar12 = lVar7;
      thunk_FUN_0333a630(plVar12,lVar7);
    }
    else {
      FUN_041e2c78(lVar8,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    uVar5 = *(undefined4 *)(lVar9 + 0x10);
    unaff_x24 = thunk_FUN_032a56a0(*(undefined8 *)
                                    Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                                  );
    FUN_067f6cd4(unaff_x24,uVar5);
    param_2 = *(long *)(unaff_x19 + 0xc0);
    unaff_w22 = *(int *)(lVar9 + 0x10) == 0x20;
    if (param_2 == 0) goto LAB_067fe5b0;
    param_1 = *(long *)(param_2 + 0x10);
    in_x9 = *(long *)
             Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
    ;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_067fe5b0;
    in_x10 = (long)*(int *)(param_2 + 0x18);
  }
  if ((unaff_w20 & 1) == 0) {
    uVar10 = FUN_06becffc();
    uVar10 = FUN_057aaeec(*(undefined8 *)
                           Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataGhost>_Start__
                          ,uVar10,*(undefined8 *)PTR_DAT_07283358,0);
    if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
    }
    FUN_06bb23f0(uVar10,0);
    fVar15 = (float)FUN_06c5198c(in_stack_00000068,0);
    in_stack_00000038 = 0;
    in_stack_00000040 = 0;
    in_stack_00000048 = 0;
    FUN_06c51cc8(0,0,0,0,fVar15 / 5.0,&stack0x00000038,0);
    if (*(int *)(*(long *)PTR_DAT_0727fc10 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_06c51a84(0);
    uVar10 = thunk_FUN_032a56a0(*unaff_x26);
    FUN_06c51f88(0x3f800000,uVar10,0);
    lVar9 = *(long *)(unaff_x19 + 0xb0);
    if (lVar9 != 0) {
      lVar7 = *(long *)(lVar9 + 0x10);
      lVar8 = *(long *)
               Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_Awake__;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar6 = *(uint *)(lVar9 + 0x18);
        if (uVar6 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar6 + 1;
          puVar13 = (undefined8 *)(lVar7 + (long)(int)uVar6 * 8 + 0x20);
          *puVar13 = uVar10;
          thunk_FUN_0333a630(puVar13,uVar10);
        }
        else {
          FUN_041e2c78(lVar9,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        lVar9 = *(long *)(unaff_x19 + 0xc0);
        uVar10 = thunk_FUN_032a56a0(*(undefined8 *)
                                     Method_UnityEngine_InputSystem_Utilities_InlinedArray<KeyValuePair<int,_int>>_get_Item__
                                   );
        FUN_067f6cd4(uVar10,0x20);
        if (lVar9 != 0) {
          lVar7 = *(long *)(lVar9 + 0x10);
          lVar8 = *(long *)
                   Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
          ;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar6 = *(uint *)(lVar9 + 0x18);
            if (uVar6 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar6 + 1;
              puVar13 = (undefined8 *)(lVar7 + (long)(int)uVar6 * 8 + 0x20);
              *puVar13 = uVar10;
              thunk_FUN_0333a630(puVar13,uVar10);
            }
            else {
              FUN_041e2c78(lVar9,uVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_067fe7b0;
          }
        }
      }
    }
LAB_067fe5b0:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
LAB_067fe7b0:
  FUN_067fd16c();
  return;
}


