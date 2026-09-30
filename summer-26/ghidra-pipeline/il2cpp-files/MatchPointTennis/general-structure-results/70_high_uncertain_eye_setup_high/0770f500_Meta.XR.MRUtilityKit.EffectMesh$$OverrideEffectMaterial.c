/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.EffectMesh$$OverrideEffectMaterial
ENTRY_POINT: 0770f500
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_EffectMesh__OverrideEffectMaterial
               (ulong param_1,float param_2,undefined1 param_3 [16],float param_4,float param_5,
               long param_6)

{
  undefined2 uVar1;
  long in_x9;
  long in_x10;
  ulong in_x11;
  uint in_w15;
  long unaff_x19;
  float fVar2;
  float fVar3;
  float unaff_s8;
  
  while (param_1 < in_w15) {
    fVar2 = *(float *)(in_x9 + param_1 * 4) * unaff_s8;
    fVar3 = fVar2;
    if (param_2 < fVar2) {
      fVar3 = param_2;
    }
    fVar3 = fVar3 * param_4;
    if (fVar2 < -1.0) {
      fVar3 = param_5;
    }
    uVar1 = 0;
    if (fVar3 != INFINITY) {
      uVar1 = (short)(int)fVar3;
    }
    if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if ((ulong)*(uint *)(param_6 + 0x18) <= in_x11 + 1) break;
    *(char *)(param_6 + (in_x10 >> 0x20) + 0x20) = (char)uVar1;
    in_x11 = in_x11 + 2;
    if (*(uint *)(param_6 + 0x18) <= in_x11) break;
    *(char *)(param_6 + (in_x10 + 0x100000000 >> 0x20) + 0x20) = (char)((ushort)uVar1 >> 8);
    in_w15 = *(uint *)(unaff_x19 + 0x18);
    param_1 = param_1 + 1;
    in_x10 = in_x10 + 0x200000000;
    if ((long)(int)in_w15 <= (long)param_1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


