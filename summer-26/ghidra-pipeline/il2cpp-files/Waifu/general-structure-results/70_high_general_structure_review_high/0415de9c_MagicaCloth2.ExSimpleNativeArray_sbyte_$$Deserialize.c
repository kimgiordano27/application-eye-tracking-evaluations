/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<sbyte>$$Deserialize
ENTRY_POINT: 0415de9c
PROGRAM: Waifu-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void MagicaCloth2_ExSimpleNativeArray<sbyte>__Deserialize(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 == 0) {
    FUN_0335b6c8(&DAT_083d16e0,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083d23b8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_0842fea8,1);
    DataMemoryBarrier(2,3);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_0338f674(param_3);
    }
  }
  if ((param_2 != 0) && (*(int *)(param_2 + 0x18) != 0)) {
    plVar1 = (long *)FUN_03398a84(DAT_083d16e0);
    FUN_0667dab4(plVar1,0);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    FUN_06677200(plVar1,0x28,0);
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      uVar4 = 0;
      uVar3 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
      do {
        if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        uVar2 = FUN_0799cbcc(*(undefined8 *)(param_2 + 0x20 + uVar4 * 8),0);
        FUN_066772ac(plVar1,uVar2,0);
        uVar3 = (ulong)*(uint *)(param_2 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)*(uint *)(param_2 + 0x18));
    }
    FUN_06677200(plVar1,0x29,0);
    uVar2 = **(undefined8 **)(param_3 + 0x38);
    if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar2 = FUN_0683eca4(uVar2,0);
    uVar2 = FUN_0799cbcc(uVar2,0);
    uVar2 = FUN_066772ac(plVar1,uVar2,0);
                    /* WARNING: Could not recover jumptable at 0x0415dfd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x168))(uVar2,*(undefined8 *)(*plVar1 + 0x170));
    return;
  }
  uVar2 = **(undefined8 **)(param_3 + 0x38);
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar2 = FUN_0683eca4(uVar2,0);
  uVar2 = FUN_0799cbcc(uVar2,0);
  FUN_06660dbc(DAT_0842fea8,uVar2,0);
  return;
}


