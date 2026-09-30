/*
FUNCTION_NAME: System.Collections.Generic.List<OVRPassthroughLayer.SerializedSurfaceGeometry>$$ToArray
ENTRY_POINT: 03ff5bd0
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>__ToArray
               (long param_1,int param_2,int param_3,long param_4,long param_5)

{
  ulong uVar1;
  void *__src;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined1 auStack_2e8 [72];
  undefined1 auStack_2a0 [72];
  undefined1 auStack_258 [72];
  undefined1 auStack_210 [72];
  undefined1 auStack_1c8 [72];
  undefined1 auStack_180 [72];
  undefined1 auStack_138 [72];
  undefined1 auStack_f0 [72];
  undefined1 auStack_a8 [72];
  
  if (param_2 < param_3) {
    if (param_1 == 0) {
LAB_03ff5dbc:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar7 = (long)param_2;
    do {
      uVar1 = uVar7 + 1;
      uVar4 = (uint)*(undefined8 *)(param_1 + 0x18);
      if (uVar4 <= (uint)uVar1) {
LAB_03ff5db8:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      memcpy(auStack_138,(void *)(param_1 + uVar1 * 0x48 + 0x20),0x48);
      if ((long)param_2 <= (long)uVar7) {
        memcpy(auStack_1c8,auStack_138,0x48);
        if (uVar4 <= (uint)uVar7) goto LAB_03ff5db8;
        while( true ) {
          uVar4 = (uint)uVar7;
          __src = (void *)(param_1 + (long)(int)uVar4 * 0x48 + 0x20);
          memcpy(auStack_210,__src,0x48);
          if (param_4 == 0) goto LAB_03ff5dbc;
          memcpy(auStack_258,auStack_1c8,0x48);
          memcpy(auStack_2a0,auStack_210,0x48);
          if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
            FUN_02eea768();
          }
          pcVar6 = *(code **)(param_4 + 0x18);
          uVar5 = *(undefined8 *)(param_4 + 0x40);
          memcpy(auStack_a8,auStack_258,0x48);
          memcpy(auStack_f0,auStack_2a0,0x48);
          iVar3 = (*pcVar6)(uVar5,auStack_a8,auStack_f0,*(undefined8 *)(param_4 + 0x28));
          if (-1 < iVar3) break;
          uVar2 = *(uint *)(param_1 + 0x18);
          if (uVar2 <= uVar4) goto LAB_03ff5db8;
          memcpy(auStack_180,__src,0x48);
          if (uVar2 <= uVar4 + 1) goto LAB_03ff5db8;
          memcpy((void *)(param_1 + (long)(int)(uVar4 + 1) * 0x48 + 0x20),auStack_180,0x48);
          uVar4 = uVar4 - 1;
          uVar7 = (ulong)uVar4;
          if ((int)uVar4 < param_2) break;
          uVar2 = *(uint *)(param_1 + 0x18);
          memcpy(auStack_1c8,auStack_138,0x48);
          if (uVar2 <= uVar4) goto LAB_03ff5db8;
        }
        uVar4 = *(uint *)(param_1 + 0x18);
      }
      memcpy(auStack_2e8,auStack_138,0x48);
      uVar2 = (int)uVar7 + 1;
      if (uVar4 <= uVar2) goto LAB_03ff5db8;
      memcpy((void *)(param_1 + (long)(int)uVar2 * 0x48 + 0x20),auStack_2e8,0x48);
      uVar7 = uVar1;
    } while (uVar1 != (long)param_3);
  }
  return;
}


