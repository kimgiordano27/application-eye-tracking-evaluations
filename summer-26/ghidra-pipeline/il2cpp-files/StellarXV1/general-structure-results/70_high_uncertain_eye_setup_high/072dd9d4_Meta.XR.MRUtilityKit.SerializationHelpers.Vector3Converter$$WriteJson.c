/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SerializationHelpers.Vector3Converter$$WriteJson
ENTRY_POINT: 072dd9d4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SerializationHelpers_Vector3Converter__WriteJson(ulong param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if ((param_1 & 1) == 0) {
    FUN_04077588(PTR_DAT_09299770);
    FUN_04077588(PTR_DAT_09287fc0);
    FUN_04077588(PTR_DAT_09299788);
    FUN_04077588(PTR_DAT_09299780);
    FUN_04077588(PTR_DAT_092c4040);
    *(undefined1 *)(unaff_x20 + 0xb10) = 1;
  }
  puVar4 = PTR_DAT_092c4040;
  puVar3 = PTR_DAT_09299780;
  puVar2 = PTR_DAT_09287fc0;
  lVar8 = *(long *)(unaff_x19 + 0x38);
  if (lVar8 != 0) {
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar1) {
      lVar9 = 0;
      do {
        if (uVar1 <= (uint)lVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        lVar10 = *(long *)(lVar8 + 0x20 + lVar9 * 8);
        if (lVar10 == 0) goto LAB_072ddb44;
        lVar6 = *(long *)(lVar10 + 0x20);
        uVar7 = *(undefined8 *)(unaff_x19 + 0x20);
        uVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09299770);
        FUN_0678a5f4(uVar5,uVar7,*(undefined8 *)PTR_DAT_09299788,0);
        if (lVar6 == 0) goto LAB_072ddb44;
        FUN_0678dc80(lVar6,uVar5,*(undefined8 *)puVar3);
        lVar6 = *(long *)(lVar10 + 0x28);
        uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
        uVar5 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
        FUN_089e21b0(uVar5,uVar7,*(undefined8 *)puVar4,0);
        if (lVar6 == 0) goto LAB_072ddb44;
        FUN_089e2310(lVar6,uVar5,0);
        lVar10 = *(long *)(lVar10 + 0x30);
        uVar7 = *(undefined8 *)(unaff_x19 + 0x30);
        uVar5 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
        FUN_089e21b0(uVar5,uVar7,*(undefined8 *)puVar4,0);
        if (lVar10 == 0) goto LAB_072ddb44;
        FUN_089e2310(lVar10,uVar5,0);
        uVar1 = *(uint *)(lVar8 + 0x18);
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < (int)uVar1);
    }
    return;
  }
LAB_072ddb44:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


