/*
FUNCTION_NAME: OVRPlugin$$DestroySpace
ENTRY_POINT: 01f8a5f4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__DestroySpace(void)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  int unaff_w21;
  uint unaff_w22;
  long *unaff_x24;
  
code_r0x01f8a5f4:
  do {
    puVar3 = (undefined8 *)FUN_0122ea3c();
    while( true ) {
      uVar1 = (*(code *)*puVar3)();
      unaff_w22 = uVar1 ^ unaff_w22 * 0x21;
      unaff_w21 = unaff_w21 + 1;
      iVar2 = FUN_01f7fe4c();
      if (iVar2 <= unaff_w21) {
        return unaff_w22;
      }
      FUN_01f7feac();
      lVar4 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) break;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      while (*(long *)(piVar6 + -2) != *unaff_x24) {
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
        if (uVar5 == 0) goto code_r0x01f8a5f4;
      }
      puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
    }
  } while( true );
}


