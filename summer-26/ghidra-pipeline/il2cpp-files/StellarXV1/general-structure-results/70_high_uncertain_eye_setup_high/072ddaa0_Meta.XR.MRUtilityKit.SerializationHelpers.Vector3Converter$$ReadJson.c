/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SerializationHelpers.Vector3Converter$$ReadJson
ENTRY_POINT: 072ddaa0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SerializationHelpers_Vector3Converter__ReadJson
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  undefined8 unaff_x21;
  undefined8 uVar3;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  while( true ) {
    FUN_0678dc80(param_1,unaff_x21,param_3);
    lVar2 = *(long *)(unaff_x26 + 0x28);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
    uVar1 = thunk_FUN_040b4efc(*unaff_x28);
    FUN_089e21b0(uVar1,uVar3,*unaff_x29,0);
    if (lVar2 == 0) break;
    FUN_089e2310(lVar2,uVar1,0);
    lVar2 = *(long *)(unaff_x26 + 0x30);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
    uVar1 = thunk_FUN_040b4efc(*unaff_x28);
    FUN_089e21b0(uVar1,uVar3,*unaff_x29,0);
    if (lVar2 == 0) break;
    FUN_089e2310(lVar2,uVar1,0);
    unaff_x24 = unaff_x24 + 1;
    if ((int)*(uint *)(unaff_x23 + 0x18) <= (int)(uint)unaff_x24) {
      return;
    }
    if (*(uint *)(unaff_x23 + 0x18) <= (uint)unaff_x24) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    unaff_x26 = *(long *)(unaff_x25 + unaff_x24 * 8);
    if (unaff_x26 == 0) break;
    param_1 = *(long *)(unaff_x26 + 0x20);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
    unaff_x21 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09299770);
    FUN_0678a5f4(unaff_x21,uVar1,*(undefined8 *)PTR_DAT_09299788,0);
    if (param_1 == 0) break;
    param_3 = *unaff_x27;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


