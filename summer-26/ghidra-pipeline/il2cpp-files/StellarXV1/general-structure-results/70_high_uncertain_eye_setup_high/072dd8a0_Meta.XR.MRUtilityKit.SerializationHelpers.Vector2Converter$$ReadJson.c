/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SerializationHelpers.Vector2Converter$$ReadJson
ENTRY_POINT: 072dd8a0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SerializationHelpers_Vector2Converter__ReadJson(void)

{
  undefined8 uVar1;
  uint in_w8;
  long unaff_x19;
  long lVar2;
  undefined8 uVar3;
  long unaff_x23;
  long lVar4;
  long lVar5;
  long unaff_x27;
  undefined8 *puVar6;
  long unaff_x28;
  undefined8 *puVar7;
  long unaff_x29;
  undefined8 *puVar8;
  
  puVar6 = *(undefined8 **)(unaff_x27 + 0x778);
  puVar7 = *(undefined8 **)(unaff_x28 + 0xfc0);
  puVar8 = *(undefined8 **)(unaff_x29 + 0x40);
  lVar4 = 0;
  while( true ) {
    if (in_w8 <= (uint)lVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    lVar5 = *(long *)(unaff_x23 + 0x20 + lVar4 * 8);
    if (lVar5 == 0) break;
    lVar2 = *(long *)(lVar5 + 0x20);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
    uVar1 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09299770);
    FUN_0678a5f4(uVar1,uVar3,*(undefined8 *)PTR_DAT_09299788,0);
    if (lVar2 == 0) break;
    FUN_0678dc44(lVar2,uVar1,*puVar6);
    lVar2 = *(long *)(lVar5 + 0x28);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
    uVar1 = thunk_FUN_040b4efc(*puVar7);
    FUN_089e21b0(uVar1,uVar3,*puVar8,0);
    if (lVar2 == 0) break;
    FUN_089e2280(lVar2,uVar1,0);
    lVar5 = *(long *)(lVar5 + 0x30);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
    uVar1 = thunk_FUN_040b4efc(*puVar7);
    FUN_089e21b0(uVar1,uVar3,*puVar8,0);
    if (lVar5 == 0) break;
    FUN_089e2280(lVar5,uVar1,0);
    in_w8 = *(uint *)(unaff_x23 + 0x18);
    lVar4 = lVar4 + 1;
    if ((int)in_w8 <= (int)lVar4) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


