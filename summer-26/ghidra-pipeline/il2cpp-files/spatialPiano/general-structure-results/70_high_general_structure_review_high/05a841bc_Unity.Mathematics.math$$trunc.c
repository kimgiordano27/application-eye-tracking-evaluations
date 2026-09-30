/*
FUNCTION_NAME: Unity.Mathematics.math$$trunc
ENTRY_POINT: 05a841bc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void Unity_Mathematics_math__trunc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_1 == 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar5 = thunk_FUN_02f45270();
    uVar2 = thunk_FUN_02f6ef30(PTR_DAT_067ca368);
    FUN_0504ee1c(uVar5,uVar2,0);
    uVar2 = thunk_FUN_02f6ef30(
                              Method_Unity_AppUI_UI_RangeSliderBase_UxmlSerializedData<Vector2,_float>_Deserialize__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar5,uVar2);
  }
  lVar4 = *(long *)(param_1 + 200);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  if (lVar4 == 0) {
    FUN_05a78fb8(param_1);
    lVar4 = *(long *)(param_1 + 200);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
  }
  lVar6 = *(long *)(lVar4 + 0x30);
  if (lVar6 == 0) {
    return;
  }
  uVar3 = *(ulong *)(lVar6 + 0x18);
  if (0 < (int)uVar3) {
    uVar7 = 0;
    puVar8 = (undefined8 *)(lVar6 + 0x60);
    do {
      if (*(uint *)(lVar6 + 0x18) <= uVar7) {
LAB_05a84298:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      iVar1 = FUN_04f6c698(puVar8[-2],uVar5,3,0);
      if (iVar1 == 0) {
        if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_05a84298;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
      }
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 0xb;
    } while ((uVar3 & 0xffffffff) != uVar7);
  }
  *(undefined8 *)(lVar4 + 0x138) = 0;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(uint *)(lVar4 + 200) = *(uint *)(lVar4 + 200) & 0xfffffff3;
  FUN_05a777d8(lVar4,1);
  return;
}


