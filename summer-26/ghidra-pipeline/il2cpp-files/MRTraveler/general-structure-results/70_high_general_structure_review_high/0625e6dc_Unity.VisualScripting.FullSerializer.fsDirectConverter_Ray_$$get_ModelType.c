/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<Ray>$$get_ModelType
ENTRY_POINT: 0625e6dc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined8
Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>__get_ModelType
          (undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  code *in_x9;
  long *unaff_x19;
  long unaff_x22;
  long unaff_x23;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  
                    /* catch() { ... } // from try @ 0625e608 with catch @ 0625e6e0
                       catch() { ... } // from try @ 0625e6d0 with catch @ 0625e6e0 */
  while (uVar1 = (*in_x9)(param_1,param_2,param_3,param_4), param_3 = unaff_x22, param_2 = unaff_x23
        , (uVar1 & 1) == 0) {
    uVar1 = FUN_06bf7dac();
    if ((uVar1 & 1) == 0) {
      (**(code **)(*unaff_x19 + 0x1f8))();
      return 0;
    }
    lVar2 = unaff_x19[7];
    param_2 = unaff_x19[0xb];
    param_3 = unaff_x19[0xc];
    if (lVar2 == 0) break;
    in_x9 = *(code **)(lVar2 + 0x18);
    param_1 = *(undefined8 *)(lVar2 + 0x40);
    param_4 = *(undefined8 *)(lVar2 + 0x28);
    unaff_x22 = param_3;
    unaff_x23 = param_2;
  }
                    /* try { // try from 0625e6e4 to 0635e6e7 has its CatchHandler @ 0625e6f0 */
  lVar2 = unaff_x19[8];
                    /* try { // try from 0625e6e8 to 0635e6f3 has its CatchHandler @ 0625d48c */
  if (lVar2 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0625e6e4 with catch @ 0625e6f0
                        */
                    /* try { // try from 0625e6f4 to 0635edd3 has its CatchHandler @ 0625e6f4
                       catch() { ... } // from try @ 0625e6f4 with catch @ 0625e6f4
                       catch() { ... } // from try @ 0625ee64 with catch @ 0625e6f4
                       catch() { ... } // from try @ 0625f854 with catch @ 0625e6f4
                       catch() { ... } // from try @ 0625f888 with catch @ 0625e6f4
                       catch() { ... } // from try @ 0625f950 with catch @ 0625e6f4 */
    (**(code **)(lVar2 + 0x18))
              (*(undefined8 *)(lVar2 + 0x40),param_2,param_3,*(undefined8 *)(lVar2 + 0x28));
    unaff_x19[5] = in_stack_00000010;
    unaff_x19[4] = in_stack_00000008;
    unaff_x19[3] = in_stack_00000000;
    thunk_FUN_03d233cc(unaff_x19 + 3,0);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


