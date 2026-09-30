/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Vector3>$$get_SerializedType
ENTRY_POINT: 031b3c90
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


int Sirenix_Serialization_MinimalBaseFormatter<Vector3>__get_SerializedType(void)

{
  undefined4 uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long in_x9;
  undefined8 *puVar6;
  long unaff_x19;
  long unaff_x20;
  uint uVar7;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  long lVar8;
  
  do {
    lVar8 = in_x9 << 2;
    do {
      lVar4 = *(long *)(unaff_x19 + 0x10);
      if (lVar4 == 0) goto LAB_031b3d70;
      if (*(uint *)(lVar4 + 0x18) <= (uint)unaff_x21) goto LAB_031b3d74;
      if (unaff_x20 == 0) goto LAB_031b3d70;
      uVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar4 + lVar8 + 0x20),
                         *(undefined4 *)(lVar4 + lVar8 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar2 & 1) == 0) {
        iVar3 = *(int *)(unaff_x19 + 0x18);
        break;
      }
      iVar3 = *(int *)(unaff_x19 + 0x18);
      unaff_x21 = unaff_x21 + 1;
      lVar8 = lVar8 + 0xc;
    } while (unaff_x21 < iVar3);
    uVar7 = (uint)unaff_x21;
    if ((int)uVar7 < iVar3) {
      lVar8 = *(long *)(unaff_x19 + 0x10);
      if (lVar8 == 0) {
LAB_031b3d70:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if ((*(uint *)(lVar8 + 0x18) <= uVar7) || (*(uint *)(lVar8 + 0x18) <= unaff_w23)) {
LAB_031b3d74:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      puVar6 = (undefined8 *)(lVar8 + 0x20 + (int)uVar7 * unaff_x22);
      uVar1 = *(undefined4 *)(puVar6 + 1);
      puVar5 = (undefined8 *)(lVar8 + 0x20 + (int)unaff_w23 * unaff_x22);
      *puVar5 = *puVar6;
      *(undefined4 *)(puVar5 + 1) = uVar1;
      iVar3 = *(int *)(unaff_x19 + 0x18);
      unaff_w23 = unaff_w23 + 1;
      uVar7 = uVar7 + 1;
    }
    if (iVar3 <= (int)uVar7) {
      *(uint *)(unaff_x19 + 0x18) = unaff_w23;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return iVar3 - unaff_w23;
    }
    in_x9 = (-(ulong)(uVar7 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar7 << 1) + (long)(int)uVar7;
    unaff_x21 = (long)(int)uVar7;
  } while( true );
}


