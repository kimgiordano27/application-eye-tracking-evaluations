/*
FUNCTION_NAME: Best.HTTP.SecureProtocol.Org.BouncyCastle.Crypto.EC.CustomNamedCurves.SecT113R1Holder$$CreateParameters
ENTRY_POINT: 02f60cb8
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_EC_CustomNamedCurves_SecT113R1Holder__CreateParameters
          (uint param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  byte *pbVar3;
  long unaff_x19;
  byte *unaff_x20;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
  if (0x1c < param_1) {
    fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
            "libunwind: %s - %s\n","getRegister","unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02f60f94 to 03060fd3 has its CatchHandler @ 02f60ea4 */
    abort();
  }
  *(undefined8 *)(unaff_x27 + 8) = *(undefined8 *)(unaff_x19 + (ulong)param_1 * 8);
  pbVar3 = *(byte **)(unaff_x29 + -8);
  if (pbVar3 < unaff_x20) {
    *(byte **)(unaff_x29 + -8) = pbVar3 + 1;
    puVar1 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
    if (*pbVar3 - 3 < 0x92) {
                    /* WARNING: Could not recover jumptable at 0x02f60690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)((ulong)*(ushort *)(unaff_x26 + (ulong)(*pbVar3 - 3) * 2) * 4 + 0x2f60694))
                        ();
      return uVar2;
    }
    fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
            "libunwind: %s - %s\n","evaluateExpression","DWARF opcode not implemented");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(unaff_x27 + 8);
}


