/*
FUNCTION_NAME: System.Collections.Generic.List<ProbeVolumeBakingSet.SerializedPerSceneCellList>$$ToArray
ENTRY_POINT: 06caaf04
PROGRAM: Hyper-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


void System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>__ToArray
               (ulong param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x21;
  undefined4 unaff_w22;
  
  if ((param_1 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06caaefc with catch @ 06caaf08
                        */
                    /* try { // try from 06caaf0c to 06dab22f has its CatchHandler @ 06caaf0c
                       catch() { ... } // from try @ 06caaf0c with catch @ 06caaf0c
                       catch() { ... } // from try @ 06cab320 with catch @ 06caaf0c
                       catch() { ... } // from try @ 06cab3e4 with catch @ 06caaf0c
                       catch() { ... } // from try @ 06cab438 with catch @ 06caaf0c */
    param_3 = FUN_04980b34(param_3);
  }
  lVar2 = *unaff_x21;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 5) * 0x10 + 0x138);
        goto 
        System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>__TrimExcess
        ;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_04980e68();
System_Collections_Generic_List<ProbeVolumeBakingSet_SerializedPerSceneCellList>__TrimExcess:
  (*(code *)*puVar1)();
  *(undefined4 *)(unaff_x19 + 0x18) = unaff_w22;
  return;
}


