/*
FUNCTION_NAME: Unity.Collections.NativeArray<RequestSceneHeader>$$.ctor
ENTRY_POINT: 04610d50
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_Collections_NativeArray<RequestSceneHeader>___ctor
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  bool in_ZR;
  bool in_CY;
  int iVar2;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (in_CY && !in_ZR) {
    lVar1 = unaff_x19 + (long)(int)unaff_w20 * 0x10;
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_02feb2c4();
    }
    iVar2 = (**(code **)(param_2 + 0x18))(*(undefined8 *)(param_2 + 0x40));
    if (iVar2 < 1) {
      return;
    }
    if ((unaff_w21 < *(uint *)(unaff_x19 + 0x18)) && (unaff_w20 < *(uint *)(unaff_x19 + 0x18))) {
      uVar3 = *(undefined8 *)(lVar1 + 0x20);
      uVar5 = unaff_x28[1];
      uVar4 = *unaff_x28;
                    /* try { // try from 04610dc8 to 04710dcb has its CatchHandler @ 04610dd4 */
                    /* try { // try from 04610dcc to 04710df7 has its CatchHandler @ 04610928 */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 04610dc8 with catch @ 04610dd4
                        */
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 04610cf4 with catch @ 04610dd8
                        */
      unaff_x28[1] = *(undefined8 *)(lVar1 + 0x28);
      *unaff_x28 = uVar3;
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 04610c2c with catch @ 04610ddc
                        */
      thunk_FUN_03048534(unaff_x19 + unaff_x29 * 0x10 + 0x20,0);
                    /* catch(type#1 @ 06b7e988) { ... } // from try @ 04610c6c with catch @ 04610de0
                        */
      if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(lVar1 + 0x28) = uVar5;
        *(undefined8 *)(lVar1 + 0x20) = uVar4;
        thunk_FUN_03048534(unaff_x19 + (long)(int)unaff_w20 * 0x10 + 0x20,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


