/*
FUNCTION_NAME: OVRPlugin$$RetrieveSpaceQueryResults
ENTRY_POINT: 033d1778
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__RetrieveSpaceQueryResults(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = StringLiteral_8988;
  if ((DAT_044a6a1d & 1) == 0) {
    FUN_01d7d918(StringLiteral_8989);
    FUN_01d7d918(StringLiteral_8988);
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    FUN_01d7d918(StringLiteral_1538);
    DAT_044a6a1d = 1;
  }
  lVar6 = *param_1;
  bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
  if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2)) {
    uVar3 = (**(code **)(lVar6 + 0x268))(param_1,*(undefined8 *)(lVar6 + 0x270));
    puVar4 = StringLiteral_8989;
    puVar2 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
    if ((uVar3 & 1) == 0) {
      lVar6 = FUN_033ab2a8(param_1,0);
      lVar7 = *(long *)puVar2;
      uVar8 = *(undefined8 *)puVar4;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(lVar7);
      }
      lVar7 = FUN_033a87c8(uVar8,0);
      puVar4 = StringLiteral_8991;
      if (lVar6 != lVar7) {
        uVar8 = *(undefined8 *)StringLiteral_1538;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        lVar7 = FUN_033a87c8(uVar8,0);
        puVar4 = StringLiteral_8992;
        if (lVar6 != lVar7) {
          return;
        }
      }
      uVar8 = thunk_FUN_01dd295c(puVar4);
      uVar8 = FUN_033d6e4c(uVar8,0);
      thunk_FUN_01dd295c(
                        Field_UnityEngine_XR_ARFoundation_ARAnchorsChangedEventArgs_<added>k__BackingField
                        );
      uVar5 = thunk_FUN_01de27b8();
      FUN_0338ed78(uVar5,uVar8,0);
      goto LAB_033d196c;
    }
    uVar8 = thunk_FUN_01dd295c(StringLiteral_887);
    uVar8 = FUN_01d7d9bc(uVar8,1);
    FUN_01a94b18();
    FUN_01a952f4(uVar8,param_1);
    FUN_01a95328(uVar8,0,param_1);
    uVar5 = thunk_FUN_01dd295c(StringLiteral_8990);
    uVar8 = FUN_033d6e50(uVar5,uVar8,0);
  }
  else {
    uVar8 = thunk_FUN_01dd295c(StringLiteral_8993);
    uVar8 = FUN_033d6e4c(uVar8,0);
  }
  thunk_FUN_01dd295c(StringLiteral_1149);
  uVar5 = thunk_FUN_01de27b8();
  FUN_0328dba4(uVar5,uVar8,0);
LAB_033d196c:
  uVar8 = thunk_FUN_01dd295c(StringLiteral_8994);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar5,uVar8);
}


