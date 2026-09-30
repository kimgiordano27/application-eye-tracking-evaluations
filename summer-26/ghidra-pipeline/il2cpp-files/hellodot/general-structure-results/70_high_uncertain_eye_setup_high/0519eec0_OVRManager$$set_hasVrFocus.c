/*
FUNCTION_NAME: OVRManager$$set_hasVrFocus
ENTRY_POINT: 0519eec0
PROGRAM: hellodot-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__set_hasVrFocus
               (long param_1,undefined1 param_2 [16],float param_3,float param_4,undefined8 param_5,
               long param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float unaff_s9;
  
  fVar7 = param_4;
  if (in_x9 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == param_6) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0519ef04;
      }
      in_x9 = in_x9 + -1;
      piVar5 = piVar5 + 4;
    } while (in_x9 != 0);
  }
  puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_0519ef04:
  (*(code *)*puVar2)();
  lVar3 = *unaff_x21;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x22) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_0519ef64;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_0519ef64:
  fVar6 = (float)(*(code *)*puVar2)();
  if (unaff_x19 != 0) {
    uVar4 = FUN_0519de2c((param_4 - fVar7) * (param_4 - fVar7) +
                         (unaff_s8 - fVar6) * (unaff_s8 - fVar6) +
                         (unaff_s9 - param_3) * (unaff_s9 - param_3));
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_036c49a0();
    }
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


