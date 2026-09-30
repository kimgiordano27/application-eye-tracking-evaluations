/*
FUNCTION_NAME: OVRPlugin$$GetSpaceUserId
ENTRY_POINT: 033d1e7c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceUserId(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x19;
  long unaff_x21;
  undefined8 uVar7;
  
  uVar2 = FUN_03306754(param_1,param_2,0);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_033ac4c8();
    if ((uVar2 & 1) == 0) {
      if (unaff_x21 != 0) {
        FUN_0331719c();
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    uVar5 = (**(code **)(*unaff_x19 + 0x2c8))();
    thunk_FUN_01dd295c(StringLiteral_1159);
    uVar7 = thunk_FUN_01de27b8();
    uVar6 = thunk_FUN_01dd295c(StringLiteral_9001);
    FUN_03395900(uVar7,uVar6,uVar5,0);
  }
  else {
    lVar3 = FUN_033ab2a8();
    puVar1 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
    uVar7 = *(undefined8 *)StringLiteral_8985;
    if (*(int *)(*(long *)
                  Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                + 0xe0) == 0) {
      thunk_FUN_01dc4f30(*(long *)
                          Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                        );
    }
    lVar4 = FUN_033a87c8(uVar7,0);
    if (lVar3 != lVar4) {
      uVar7 = *(undefined8 *)StringLiteral_8998;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      lVar4 = FUN_033a87c8(uVar7,0);
      if (lVar3 != lVar4) {
        uVar2 = FUN_033ac570();
        if ((uVar2 & 1) != 0) {
          if (*(int *)(*(long *)StringLiteral_1157 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          FUN_01d6e65c();
          return;
        }
        uVar7 = (**(code **)(*unaff_x19 + 0x2c8))();
        uVar5 = thunk_FUN_01dd295c(StringLiteral_9000);
        uVar5 = FUN_0326dc80(uVar5,uVar7,0);
                    /* try { // try from 033d1ff0 to 034d203b has its CatchHandler @ 033d2154 */
        thunk_FUN_01dd295c(StringLiteral_1159);
        uVar7 = thunk_FUN_01de27b8();
        FUN_033958dc(uVar7,uVar5,0);
        goto LAB_033d205c;
      }
    }
    uVar7 = thunk_FUN_01dd295c(StringLiteral_8999);
    uVar5 = FUN_033d6e4c(uVar7,0);
                    /* try { // try from 033d1f94 to 034d1fbb has its CatchHandler @ 033d214c */
    thunk_FUN_01dd295c(
                      Field_UnityEngine_XR_ARFoundation_ARAnchorsChangedEventArgs_<added>k__BackingField
                      );
    uVar7 = thunk_FUN_01de27b8();
    FUN_0338ed78(uVar7,uVar5,0);
  }
LAB_033d205c:
  uVar5 = thunk_FUN_01dd295c(StringLiteral_9002);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar7,uVar5);
}


