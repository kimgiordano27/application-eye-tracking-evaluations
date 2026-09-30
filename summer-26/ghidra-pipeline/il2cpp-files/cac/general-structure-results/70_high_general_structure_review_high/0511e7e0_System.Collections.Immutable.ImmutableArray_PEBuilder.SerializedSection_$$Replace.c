/*
FUNCTION_NAME: System.Collections.Immutable.ImmutableArray<PEBuilder.SerializedSection>$$Replace
ENTRY_POINT: 0511e7e0
PROGRAM: cac-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


ulong System_Collections_Immutable_ImmutableArray<PEBuilder_SerializedSection>__Replace
                (long *param_1,long *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  
  if (param_2 == (long *)0x0) {
    thunk_FUN_03f786f8(PTR_DAT_0910e1d8);
    uVar6 = thunk_FUN_03f4e68c();
    uVar7 = thunk_FUN_03f786f8(PTR_DAT_09123c68);
    FUN_0740f0b8(uVar6,uVar7,0);
                    /* WARNING: Subroutine does not return */
    FUN_03f134f0(uVar6,param_3);
  }
  if (param_2 == param_1) {
    return 1;
  }
  lVar2 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f4b260();
  }
  if (((*(byte *)(*param_2 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
      (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) != lVar2)) ||
     (uVar3 = FUN_05121204(param_1,param_2,
                           *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48)),
     (uVar3 & 1) == 0)) {
    lVar2 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x60);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f4b260(lVar2);
    }
    plVar4 = (long *)thunk_FUN_03f4e590(param_2,lVar2);
    if ((plVar4 != (long *)0x0) && ((int)param_1[4] == 0)) {
      lVar2 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x60);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f4b260(lVar2);
      }
      lVar8 = *plVar4;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar2) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0511e970;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f4b594(plVar4,lVar2,0);
LAB_0511e970:
      iVar1 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if (0 < iVar1) goto LAB_0511e984;
    }
    uVar3 = FUN_05120ae4(param_1,param_2,1,
                         *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x170));
    uVar3 = (ulong)(uVar3 >> 0x20 == 0 && (int)param_1[4] == (int)uVar3);
  }
  else {
    if ((int)param_1[4] == (int)param_2[4]) {
      uVar3 = FUN_0511f544(param_1,param_2,
                           *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x180));
      return uVar3;
    }
LAB_0511e984:
    uVar3 = 0;
  }
  return uVar3;
}


