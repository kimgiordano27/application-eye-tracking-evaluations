/*
FUNCTION_NAME: MemoryPack.ErrorMemoryPackFormatter<Vector4>$$Deserialize
ENTRY_POINT: 051060d0
PROGRAM: beastcraft-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void MemoryPack_ErrorMemoryPackFormatter<Vector4>__Deserialize
               (long param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  if ((param_2 < *(uint *)(unaff_x20 + 0x18)) && (param_3 < *(uint *)(unaff_x20 + 0x18))) {
    puVar1 = (undefined8 *)(unaff_x20 + 0x20 + (long)(int)param_3 * 0x10);
    lVar2 = unaff_x20 + (long)(int)param_2 * 0x10;
    uVar3 = *puVar1;
    uVar5 = *(undefined8 *)(lVar2 + 0x28);
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x28) = puVar1[1];
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    thunk_FUN_02ee2be8(unaff_x20 + 0x20 + (long)(int)param_2 * 0x10,0);
    if (param_3 < *(uint *)(unaff_x20 + 0x18)) {
      puVar1[1] = uVar5;
      *puVar1 = uVar4;
      thunk_FUN_02ee2be8(puVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3cccc();
}


