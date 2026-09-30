/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 0419db80
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5,
               long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
                    /* catch() { ... } // from try @ 0419d864 with catch @ 0419db80 */
                    /* catch() { ... } // from try @ 0419d830 with catch @ 0419db84 */
                    /* catch() { ... } // from try @ 0419db34 with catch @ 0419db88 */
                    /* catch() { ... } // from try @ 0419db2c with catch @ 0419db8c */
                    /* catch() { ... } // from try @ 0419d898 with catch @ 0419db90
                       catch() { ... } // from try @ 0419da70 with catch @ 0419db90 */
                    /* catch() { ... } // from try @ 0419d910 with catch @ 0419db94
                       catch() { ... } // from try @ 0419db44 with catch @ 0419db94 */
                    /* catch() { ... } // from try @ 0419daa8 with catch @ 0419db98
                       catch() { ... } // from try @ 0419db30 with catch @ 0419db98 */
  if (*(long *)(param_6 + 0x38) == 0) {
    FUN_03cf12a0(param_6);
  }
                    /* try { // try from 0419dbb0 to 0429dbc7 has its CatchHandler @ 0419dc10 */
  if (param_1 == 0) {
    thunk_FUN_03ce5214(PTR_DAT_08e80470);
    uVar1 = thunk_FUN_03cf5234();
    uVar2 = thunk_FUN_03ce5214(PTR_DAT_08e80478);
    FUN_0705a2f8(uVar1,uVar2,0);
    goto LAB_0419dca8;
  }
  if (param_4 < 0) {
LAB_0419dc00:
    thunk_FUN_03ce5214(PTR_DAT_08e6a5d8);
    uVar1 = thunk_FUN_03cf5234();
    uVar2 = thunk_FUN_03ce5214(PTR_DAT_08e80480);
    puVar4 = PTR_DAT_08e80488;
  }
  else {
    if (*(int *)(param_1 + 0x18) < param_4) goto LAB_0419dc00;
    if ((-1 < param_5) && (param_5 <= *(int *)(param_1 + 0x18) - param_4)) {
      FUN_041ae7bc(param_1,param_2,param_3,param_4,param_5,
                   *(undefined8 *)(*(long *)(param_6 + 0x38) + 0x10));
      return;
    }
    thunk_FUN_03ce5214(PTR_DAT_08e6a5d8);
    uVar1 = thunk_FUN_03cf5234();
    uVar2 = thunk_FUN_03ce5214(PTR_DAT_08e80490);
    puVar4 = PTR_DAT_08e80498;
  }
  uVar3 = thunk_FUN_03ce5214(puVar4);
  FUN_070619b8(uVar1,uVar2,uVar3,0);
LAB_0419dca8:
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar1,param_6);
}


