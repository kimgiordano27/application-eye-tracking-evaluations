/*
FUNCTION_NAME: FUN_07141d88
ENTRY_POINT: 07141d88
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void FUN_07141d88(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,long param_6,byte param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  ulong uVar9;
  float fVar10;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong uVar5;
  
  if ((DAT_07eeca49 & 1) == 0) {
    FUN_03642964(Method_UnityEngine_UIElements_BaseField<Vector2>_set_value__);
    FUN_03642964(PTR_DAT_07a08c50);
    FUN_03642964(Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__);
    DAT_07eeca49 = 1;
  }
  puVar1 = Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_labelElement__;
  puVar2 = Method_UnityEngine_UIElements_BaseField<Vector2>_set_value__;
  if (param_6 == 0) {
    thunk_FUN_036aa1c8(PTR_DAT_079fb6c0);
    uVar3 = thunk_FUN_0367fe20();
    puVar2 = Method_UnityEngine_UIElements_BaseField<Vector2Int>_get_visualInput__;
  }
  else {
    if (param_8 != 0) {
      uVar9 = *(ulong *)((long)param_1 + 0xc);
      fVar10 = *(float *)((long)param_1 + 0x14);
      if (DAT_07ed76c1 == '\0') {
        FUN_03642964(PTR_DAT_079f4dc0);
        DAT_07ed76c1 = '\x01';
      }
      uVar3 = *(undefined8 *)puVar1;
      uVar8 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_079f4dc0 + 0xb8) + 0xc);
      fVar4 = (float)uVar8 * 0.001;
      fVar6 = (float)((ulong)uVar8 >> 0x20) * 0.001;
      uVar5 = CONCAT44(fVar6,fVar4);
      fVar7 = *(float *)(*(long *)(*(long *)PTR_DAT_079f4dc0 + 0xb8) + 0x14) * DAT_016513c8;
      if (fVar10 <= fVar7) {
        fVar10 = fVar7;
      }
      *(ulong *)((long)param_1 + 0xc) =
           uVar5 ^ (uVar5 ^ uVar9) &
                   CONCAT44(-(uint)(fVar6 < (float)(uVar9 >> 0x20)),-(uint)(fVar4 < (float)uVar9));
      *(float *)((long)param_1 + 0x14) = fVar10;
      uStack_88 = param_1[1];
      local_90 = *param_1;
      local_80 = param_1[2];
      uVar3 = FUN_04593578(param_6,uVar3);
      uVar3 = FUN_07141f7c(param_2,&local_90,0,1,param_3,param_4,param_5 & 1,uVar3,param_7 & 1);
      uVar8 = *(undefined8 *)puVar2;
      *(undefined4 *)(param_8 + 0x18) = 0;
      *(int *)(param_8 + 0x1c) = *(int *)(param_8 + 0x1c) + 1;
      FUN_045946bc(param_8,uVar3,uVar8);
      return;
    }
    thunk_FUN_036aa1c8(PTR_DAT_079fb6c0);
    uVar3 = thunk_FUN_0367fe20();
    puVar2 = PTR_DAT_079fde10;
  }
  uVar8 = thunk_FUN_036aa1c8(puVar2);
  FUN_05d7e1a0(uVar3,uVar8,0);
  uVar8 = thunk_FUN_036aa1c8(Method_UnityEngine_UIElements_BaseField<Vector3>_get_labelElement__);
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar3,uVar8);
}


