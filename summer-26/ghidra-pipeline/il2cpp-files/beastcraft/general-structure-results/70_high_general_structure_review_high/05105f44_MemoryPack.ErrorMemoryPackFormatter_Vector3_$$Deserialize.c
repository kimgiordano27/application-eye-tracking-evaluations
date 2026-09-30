/*
FUNCTION_NAME: MemoryPack.ErrorMemoryPackFormatter<Vector3>$$Deserialize
ENTRY_POINT: 05105f44
PROGRAM: beastcraft-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


uint MemoryPack_ErrorMemoryPackFormatter<Vector3>__Deserialize(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x24;
  uint unaff_w25;
  int unaff_w28;
  
code_r0x05105f44:
  uVar1 = unaff_w25 + 1;
  do {
    if (unaff_w28 < (int)uVar1) {
      return ~uVar1;
    }
    unaff_w25 = uVar1 + ((int)(unaff_w28 - uVar1) >> 1);
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3cccc();
    }
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02e7568c();
    }
    lVar3 = **(long **)(lVar3 + 0xc0);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02e7568c(lVar3);
    }
    lVar5 = *unaff_x21;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05105f20;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02e759c0();
LAB_05105f20:
    iVar2 = (*(code *)*puVar4)();
    if (iVar2 == 0) {
      return unaff_w25;
    }
    if (iVar2 < 0) goto code_r0x05105f44;
    unaff_w28 = unaff_w25 - 1;
  } while( true );
}


