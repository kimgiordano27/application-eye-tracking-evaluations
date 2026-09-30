/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<LayerMask>$$Deserialize
ENTRY_POINT: 05e37294
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void Sirenix_Serialization_MinimalBaseFormatter<LayerMask>__Deserialize
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long *unaff_x23;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_05e37334;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_044822ac();
LAB_05e37334:
  iVar2 = (*(code *)*puVar3)();
  if (0 < iVar2) {
    FUN_05e36798();
    iVar1 = (int)unaff_x19[3] - unaff_w21;
    if (iVar1 != 0 && unaff_w21 <= (int)unaff_x19[3]) {
      FUN_07a612b4(unaff_x19[2],unaff_w21,unaff_x19[2],iVar2 + unaff_w21,iVar1,0);
    }
    if (unaff_x19 == unaff_x23) {
      FUN_07a612b4(unaff_x19[2],0,unaff_x19[2],unaff_w21,unaff_w21,0);
      FUN_07a612b4(unaff_x19[2],iVar2 + unaff_w21,unaff_x19[2],unaff_w21 << 1,
                   (int)unaff_x19[3] - unaff_w21,0);
    }
    else {
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_04481fb8(lVar4);
      }
      lVar5 = *unaff_x23;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar4) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
            goto LAB_05e37444;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_044822ac();
LAB_05e37444:
      (*(code *)*puVar3)();
    }
    *(int *)(unaff_x19 + 3) = (int)unaff_x19[3] + iVar2;
  }
  *(int *)((long)unaff_x19 + 0x1c) = *(int *)((long)unaff_x19 + 0x1c) + 1;
  return;
}


