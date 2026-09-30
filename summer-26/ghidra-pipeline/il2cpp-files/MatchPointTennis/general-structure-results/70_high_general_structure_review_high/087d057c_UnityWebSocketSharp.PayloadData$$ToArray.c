/*
FUNCTION_NAME: UnityWebSocketSharp.PayloadData$$ToArray
ENTRY_POINT: 087d057c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void UnityWebSocketSharp_PayloadData__ToArray(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  long unaff_x19;
  int unaff_w21;
  long lVar5;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(int *)(param_1 + 0x18) + -1 <= unaff_w21) {
    if (0 < unaff_w21) {
      do {
        uVar4 = *(int *)(unaff_x19 + 0x38) - 1;
        *(uint *)(unaff_x19 + 0x38) = uVar4;
        if (*(uint *)(unaff_x19 + 0x28) <= uVar4) goto LAB_087d09ac;
        FUN_087d09b0();
        unaff_w21 = unaff_w21 + -1;
      } while (unaff_w21 != 0);
    }
    return;
  }
  iVar1 = *(int *)(unaff_x19 + 0x38);
  uVar4 = *(uint *)(unaff_x19 + 0x28);
  uVar3 = iVar1 - 1;
  *(uint *)(unaff_x19 + 0x38) = uVar3;
  if (uVar3 < uVar4) {
    uVar2 = *(undefined4 *)(unaff_x19 + 0x18);
    lVar5 = *(long *)PTR_DAT_09f8b5b8;
    if ((*(byte *)(*(long *)(lVar5 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
      uVar4 = *(uint *)(unaff_x19 + 0x28);
    }
    if ((int)uVar4 <= (int)uVar3) {
      lVar5 = *(long *)(lVar5 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04481fb8();
      }
      FUN_06b96c2c(unaff_x19 + 0x20,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
      uVar4 = *(uint *)(unaff_x19 + 0x28);
    }
    if (uVar3 < uVar4) {
      *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + (long)(int)uVar3 * 4) = uVar2;
      *(int *)(unaff_x19 + 0x38) = iVar1;
      FUN_087cfe48();
      FUN_087d09b0();
      return;
    }
  }
LAB_087d09ac:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


