/*
FUNCTION_NAME: FUN_04339ee0
ENTRY_POINT: 04339ee0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void FUN_04339ee0(long param_1,long param_2,uint param_3,uint param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if (param_3 == param_4) {
    return;
  }
  if (param_1 == 0) {
System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>__ToArray:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  if ((param_3 < *(uint *)(param_1 + 0x18)) && (param_4 < *(uint *)(param_1 + 0x18))) {
    if (param_2 == 0)
    goto System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>__ToArray;
    lVar5 = param_1 + (long)(int)param_3 * 0x18;
    lVar4 = param_1 + (long)(int)param_4 * 0x18;
    uVar7 = *(undefined8 *)(lVar5 + 0x28);
    uVar6 = *(undefined8 *)(lVar5 + 0x20);
    uVar2 = *(undefined8 *)(lVar5 + 0x30);
    uVar9 = *(undefined8 *)(lVar4 + 0x28);
    uVar8 = *(undefined8 *)(lVar4 + 0x20);
    uVar3 = *(undefined8 *)(lVar4 + 0x30);
    if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_031c09d4();
    }
    local_80 = uVar8;
    uStack_78 = uVar9;
    local_70 = uVar3;
    local_60 = uVar6;
    uStack_58 = uVar7;
    local_50 = uVar2;
    iVar1 = (**(code **)(param_2 + 0x18))
                      (*(undefined8 *)(param_2 + 0x40),&local_60,&local_80,
                       *(undefined8 *)(param_2 + 0x28));
    if (iVar1 < 1) {
      return;
    }
    if (param_3 < *(uint *)(param_1 + 0x18)) {
      uVar6 = *(undefined8 *)(lVar5 + 0x28);
      uVar3 = *(undefined8 *)(lVar5 + 0x20);
      uVar2 = *(undefined8 *)(lVar5 + 0x30);
      if (param_4 < *(uint *)(param_1 + 0x18)) {
        uVar8 = *(undefined8 *)(lVar4 + 0x28);
        uVar7 = *(undefined8 *)(lVar4 + 0x20);
        *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(lVar4 + 0x30);
        *(undefined8 *)(lVar5 + 0x28) = uVar8;
        *(undefined8 *)(lVar5 + 0x20) = uVar7;
        if (param_4 < *(uint *)(param_1 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x28) = uVar6;
          *(undefined8 *)(lVar4 + 0x20) = uVar3;
          *(undefined8 *)(lVar4 + 0x30) = uVar2;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


