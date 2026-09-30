/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Vector4>$$Sirenix.Serialization.IFormatter.Deserialize
ENTRY_POINT: 05e3aabc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05e3ab60) */

void Sirenix_Serialization_MinimalBaseFormatter<Vector4>__Sirenix_Serialization_IFormatter_Deserialize
               (long param_1)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long in_x9;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = unaff_x23;
  auVar8._0_8_ = unaff_x22;
  do {
    pauVar2 = (undefined1 (*) [16])(param_1 + in_x9 * 0x10 + 0x20);
    *pauVar2 = auVar8;
    thunk_FUN_044bb4b4(pauVar2,0);
    lVar3 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05e3a9d4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_044822ac();
LAB_05e3a9d4:
    uVar6 = (*(code *)*puVar1)();
    if ((uVar6 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar3 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 == 0) goto LAB_05e3ab0c;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_04481fb8(lVar3);
    }
    lVar4 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05e3aa4c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_044822ac();
LAB_05e3aa4c:
    auVar8 = (*(code *)*puVar1)();
    param_1 = *(long *)(unaff_x21 + 0x10);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar5 = *(uint *)(unaff_x21 + 0x18);
    if (uVar5 == *(uint *)(param_1 + 0x18)) {
      FUN_05e390e8();
      uVar5 = *(uint *)(unaff_x21 + 0x18);
      param_1 = *(long *)(unaff_x21 + 0x10);
      *(uint *)(unaff_x21 + 0x18) = uVar5 + 1;
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
    }
    else {
      *(uint *)(unaff_x21 + 0x18) = uVar5 + 1;
    }
    if (*(uint *)(param_1 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    in_x9 = (long)(int)uVar5;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == *unaff_x24) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_05e3ab28;
    }
  }
LAB_05e3ab0c:
  puVar1 = (undefined8 *)FUN_044822ac();
LAB_05e3ab28:
  (*(code *)*puVar1)();
  return;
}


