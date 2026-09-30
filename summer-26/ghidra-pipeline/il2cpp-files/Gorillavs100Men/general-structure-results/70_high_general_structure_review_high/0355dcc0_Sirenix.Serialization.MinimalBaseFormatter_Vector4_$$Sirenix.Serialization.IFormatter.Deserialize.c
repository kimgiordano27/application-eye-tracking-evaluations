/*
FUNCTION_NAME: Sirenix.Serialization.MinimalBaseFormatter<Vector4>$$Sirenix.Serialization.IFormatter.Deserialize
ENTRY_POINT: 0355dcc0
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


int Sirenix_Serialization_MinimalBaseFormatter<Vector4>__Sirenix_Serialization_IFormatter_Deserialize
              (void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int in_w8;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong unaff_x22;
  ulong uVar9;
  undefined8 uVar10;
  
  uVar7 = unaff_x22 & 0xffffffff;
  do {
    unaff_x22 = (ulong)((int)unaff_x22 + 1);
    do {
      uVar6 = (uint)uVar7;
      if (in_w8 <= (int)unaff_x22) {
        FUN_0384dd94(*(undefined8 *)(unaff_x19 + 0x10),uVar7,in_w8 - uVar6,0);
        iVar2 = *(int *)(unaff_x19 + 0x18);
        *(uint *)(unaff_x19 + 0x18) = uVar6;
        *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
        return iVar2 - uVar6;
      }
      uVar9 = -(unaff_x22 >> 0x1f & 1) & 0xfffffff000000000 | (unaff_x22 & 0xffffffff) << 4;
      unaff_x22 = (ulong)(int)unaff_x22;
      do {
        lVar5 = *(long *)(unaff_x19 + 0x10);
        if (lVar5 == 0) goto LAB_0355dda8;
        if (*(uint *)(lVar5 + 0x18) <= (uint)unaff_x22) goto LAB_0355ddac;
        if (unaff_x20 == 0) goto LAB_0355dda8;
        uVar4 = (**(code **)(unaff_x20 + 0x18))
                          (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar5 + uVar9 + 0x20),
                           *(undefined8 *)(lVar5 + uVar9 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
        in_w8 = *(int *)(unaff_x19 + 0x18);
        if ((uVar4 & 1) == 0) break;
        unaff_x22 = unaff_x22 + 1;
        uVar9 = uVar9 + 0x10;
      } while ((long)unaff_x22 < (long)in_w8);
      uVar8 = (uint)unaff_x22;
    } while (in_w8 <= (int)uVar8);
    lVar5 = *(long *)(unaff_x19 + 0x10);
    if (lVar5 == 0) {
LAB_0355dda8:
                    /* WARNING: Subroutine does not return */
      FUN_0206154c();
    }
    if ((*(uint *)(lVar5 + 0x18) <= uVar8) || (*(uint *)(lVar5 + 0x18) <= uVar6)) {
LAB_0355ddac:
                    /* WARNING: Subroutine does not return */
      FUN_02061554();
    }
    puVar1 = (undefined8 *)(lVar5 + 0x20 + (long)(int)uVar6 * 0x10);
    puVar3 = (undefined8 *)(lVar5 + 0x20 + (long)(int)uVar8 * 0x10);
    uVar10 = *puVar3;
    uVar7 = (ulong)(uVar6 + 1);
    puVar1[1] = puVar3[1];
    *puVar1 = uVar10;
    thunk_FUN_020ccb58(puVar1 + 1,0);
    in_w8 = *(int *)(unaff_x19 + 0x18);
  } while( true );
}


