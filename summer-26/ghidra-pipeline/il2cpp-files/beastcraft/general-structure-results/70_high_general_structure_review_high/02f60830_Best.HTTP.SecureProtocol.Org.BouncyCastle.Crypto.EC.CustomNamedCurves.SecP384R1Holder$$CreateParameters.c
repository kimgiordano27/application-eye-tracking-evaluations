/*
FUNCTION_NAME: Best.HTTP.SecureProtocol.Org.BouncyCastle.Crypto.EC.CustomNamedCurves.SecP384R1Holder$$CreateParameters
ENTRY_POINT: 02f60830
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_EC_CustomNamedCurves_SecP384R1Holder__CreateParameters
               (ulong param_1,uint param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong in_x9;
  byte *pbVar3;
  long unaff_x19;
  byte *unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x29;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
  if ((int)param_2 < 0x20) {
    unaff_x25 = unaff_x21;
    if ((param_2 == 0x1e) || (unaff_x25 = unaff_x24, param_2 == 0x1f)) goto LAB_02f60d30;
  }
  else if ((param_2 == 0x20) || (unaff_x25 = unaff_x23, param_2 == 0x22)) goto LAB_02f60d30;
  if (0x1c < param_2) {
    fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
            "libunwind: %s - %s\n","getRegister","unsupported arm64 register");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
  unaff_x25 = (long *)(unaff_x19 + (ulong)param_2 * 8);
LAB_02f60d30:
  *(long *)(unaff_x27 + 8) = *unaff_x25 + (param_1 | in_x9);
  pbVar3 = *(byte **)(unaff_x29 + -8);
  if (unaff_x20 <= pbVar3) {
    return *(long *)(unaff_x27 + 8);
  }
  *(byte **)(unaff_x29 + -8) = pbVar3 + 1;
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
  if (0x91 < *pbVar3 - 3) {
    fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
            "libunwind: %s - %s\n","evaluateExpression","DWARF opcode not implemented");
    fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* WARNING: Could not recover jumptable at 0x02f60690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (*(code *)((ulong)*(ushort *)(unaff_x26 + (ulong)(*pbVar3 - 3) * 2) * 4 + 0x2f60694))();
  return lVar2;
}


