/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$AllowVisibilityMesh
ENTRY_POINT: 0696a608
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__AllowVisibilityMesh(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  long in_x9;
  long unaff_x19;
  undefined8 *puVar4;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x18);
  fVar7 = *(float *)(*(long *)(param_1 + 0xb8) + 0x20);
  fVar5 = (float)(**(code **)(in_x9 + 0x338))(param_2,*(undefined8 *)(in_x9 + 0x340));
  plVar1 = *(long **)(unaff_x20 + 0x80);
  if (plVar1 != (long *)0x0) {
    fVar6 = (float)(**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(*plVar1 + 0x230));
    if (unaff_x22 != 0) {
      fVar5 = fVar5 + fVar6;
      FUN_07cab7ec(-(float)uVar8 * fVar5,-(float)((ulong)uVar8 >> 0x20) * fVar5,fVar5 * -fVar7);
      if (*unaff_x21 != 0) {
        lVar2 = FUN_07c9c69c(*unaff_x21,0);
        if (DAT_08974d8a == '\0') {
          FUN_03a8a718(PTR_DAT_08486860);
          DAT_08974d8a = '\x01';
        }
        if (lVar2 != 0) {
          puVar3 = *(undefined4 **)(*(long *)PTR_DAT_08486860 + 0xb8);
          FUN_07cac71c(*puVar3,puVar3[1],puVar3[2],puVar3[3],lVar2,0);
          if (*unaff_x21 != 0) {
            lVar2 = FUN_04561560(*unaff_x21,*(undefined8 *)PTR_DAT_084b7010);
            plVar1 = (long *)(unaff_x19 + 0x30);
            *plVar1 = lVar2;
            thunk_FUN_03afed3c(plVar1,lVar2);
            if (*plVar1 != 0) {
              thunk_FUN_07ca23d0(*plVar1,*(undefined8 *)PTR_DAT_084b7030,0);
              if (*plVar1 != 0) {
                uVar8 = FUN_07d1c684(*plVar1,0);
                puVar4 = (undefined8 *)(unaff_x19 + 0x58);
                *puVar4 = uVar8;
                thunk_FUN_03afed3c(puVar4,0);
                plVar1 = *(long **)(unaff_x20 + 0x80);
                if (plVar1 != (long *)0x0) {
                  (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(*plVar1 + 0x250));
                  FUN_07d1d2c8(puVar4,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


