/*
FUNCTION_NAME: Oculus.Interaction.Input.OneEuroFilter.<>c$$<CreatePose>b__20_1
ENTRY_POINT: 0524a798
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void Oculus_Interaction_Input_OneEuroFilter_<>c__<CreatePose>b__20_1
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  int extraout_var;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  uint unaff_w25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  uint unaff_w28;
  ulong unaff_x29;
  
code_r0x0524a798:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_0524a78c;
LAB_0524a7a4:
  puVar3 = (undefined8 *)FUN_02f421d0(unaff_x22,param_3,7);
  do {
    uVar4 = (*(code *)*puVar3)(unaff_x22,puVar3[1]);
    iVar2 = FUN_0338e89c(uVar4,*unaff_x26);
    if (unaff_x21 == (long *)0x0) {
LAB_0524a84c:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar5 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto LAB_0524a830;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02f421d0(unaff_x21,*unaff_x27,5);
LAB_0524a830:
    (*(code *)*puVar3)(unaff_x21,iVar2 + unaff_w28,puVar3[1]);
    lVar5 = *(long *)(unaff_x19 + 0x28);
    unaff_w20 = unaff_w20 + 1;
    if (lVar5 == 0) goto LAB_0524a84c;
    if (*(int *)(lVar5 + 0x18) <= unaff_w20) {
      return;
    }
    unaff_x21 = (long *)FUN_03abf644(lVar5,unaff_w20,*unaff_x23);
    if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0524a84c;
    uVar6 = FUN_03bd9250(*(long *)(unaff_x19 + 0x30),unaff_w20,*unaff_x24);
    unaff_w28 = unaff_w25;
    if (uVar6 <= unaff_x29) {
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_0524a84c;
      FUN_03bd9250(*(long *)(unaff_x19 + 0x30),unaff_w20,*unaff_x24);
      uVar1 = extraout_var - *(int *)(unaff_x19 + 0x44);
      unaff_w28 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    }
    if ((*(long *)(unaff_x19 + 0x28) == 0) ||
       (unaff_x22 = (long *)FUN_03abf644(*(long *)(unaff_x19 + 0x28),unaff_w20,*unaff_x23),
       unaff_x22 == (long *)0x0)) goto LAB_0524a84c;
    param_1 = *unaff_x22;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    param_3 = *(long *)Oculus_Platform_Request<Purchase>_TypeInfo;
    if (in_x9 == 0) goto LAB_0524a7a4;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_0524a78c:
    if (*(long *)(in_x10 + -2) != param_3) goto code_r0x0524a798;
    puVar3 = (undefined8 *)(param_1 + (long)(*in_x10 + 7) * 0x10 + 0x138);
  } while( true );
}


