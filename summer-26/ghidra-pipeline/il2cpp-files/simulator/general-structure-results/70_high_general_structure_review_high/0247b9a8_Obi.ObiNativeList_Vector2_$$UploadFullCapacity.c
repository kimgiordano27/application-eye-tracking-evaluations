/*
FUNCTION_NAME: Obi.ObiNativeList<Vector2>$$UploadFullCapacity
ENTRY_POINT: 0247b9a8
PROGRAM: simulator-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Obi_ObiNativeList<Vector2>__UploadFullCapacity
               (code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long lVar5;
  uint unaff_w26;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  
  do {
    uVar3 = (*param_1)(param_2,param_3,param_4,param_5,param_6,param_7);
    unaff_w26 = unaff_w26 | uVar3 >> 0x1f;
    uVar3 = unaff_w21;
    do {
      unaff_w21 = unaff_w26;
      uVar8 = unaff_w20 + unaff_w21;
                    /* try { // try from 0247b9b8 to 0257b9c7 has its CatchHandler @ 0247b9c8 */
      if (*(uint *)(unaff_x19 + 0x18) <= uVar8) goto LAB_0247ba80;
      lVar5 = (long)(int)uVar8;
      lVar2 = unaff_x19 + lVar5 * 0x10;
      uVar6 = *(undefined8 *)(lVar2 + 0x20);
      if (unaff_x23 == 0) goto Obi_ObiNativeList<Vector2>__Compare;
      uVar7 = *(undefined8 *)(lVar2 + 0x28);
      if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
        FUN_018a835c();
      }
      iVar4 = (**(code **)(unaff_x23 + 0x18))
                        (*(undefined8 *)(unaff_x23 + 0x40),param_11,param_12,uVar6,uVar7,
                         *(undefined8 *)(unaff_x23 + 0x28));
      if (-1 < iVar4) {
        uVar8 = unaff_w20 + uVar3;
        lVar5 = (long)(int)uVar8;
LAB_0247ba44:
        if (uVar8 < *(uint *)(unaff_x19 + 0x18)) {
          lVar2 = unaff_x19 + lVar5 * 0x10;
          *(undefined8 *)(lVar2 + 0x20) = param_11;
          *(undefined8 *)(lVar2 + 0x28) = param_12;
          return;
        }
        goto LAB_0247ba80;
      }
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar8) ||
         (*(uint *)(unaff_x19 + 0x18) <= unaff_w20 + uVar3)) goto LAB_0247ba80;
      uVar6 = *(undefined8 *)(lVar2 + 0x20);
      lVar1 = unaff_x19 + (long)(int)(unaff_w20 + uVar3) * 0x10;
      *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(lVar1 + 0x20) = uVar6;
      if (param_10._4_4_ < (int)unaff_w21) goto LAB_0247ba44;
      unaff_w26 = unaff_w21 * 2;
      uVar3 = unaff_w21;
    } while (param_13._4_4_ <= (int)unaff_w26);
    uVar3 = unaff_w26 + (int)param_10;
    if ((*(uint *)(unaff_x19 + 0x18) <= uVar3 - 1) || (*(uint *)(unaff_x19 + 0x18) <= uVar3)) {
LAB_0247ba80:
                    /* WARNING: Subroutine does not return */
      FUN_018c4b04();
    }
    if (unaff_x23 == 0) {
Obi_ObiNativeList<Vector2>__Compare:
                    /* WARNING: Subroutine does not return */
      FUN_018c4afc();
    }
    lVar2 = unaff_x19 + (long)(int)(uVar3 - 1) * 0x10;
    lVar5 = unaff_x19 + (long)(int)uVar3 * 0x10;
    param_3 = *(undefined8 *)(lVar2 + 0x20);
    param_4 = *(undefined8 *)(lVar2 + 0x28);
    param_5 = *(undefined8 *)(lVar5 + 0x20);
    param_6 = *(undefined8 *)(lVar5 + 0x28);
    if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0x135) & 1) == 0) {
      FUN_018a835c();
    }
    param_1 = *(code **)(unaff_x23 + 0x18);
    param_2 = *(undefined8 *)(unaff_x23 + 0x40);
    param_7 = *(undefined8 *)(unaff_x23 + 0x28);
  } while( true );
}


