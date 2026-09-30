/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$LoadSceneFromPrefab
ENTRY_POINT: 06dd569c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK__LoadSceneFromPrefab(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *unaff_x21;
  undefined8 *unaff_x27;
  
  FUN_05d68e60();
  puVar1 = PTR_DAT_08e90a38;
  if ((*unaff_x21 != 0) && (lVar4 = *(long *)(*unaff_x21 + 0x40), lVar4 != 0)) {
    lVar4 = *(long *)(lVar4 + 0x28);
    uVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e90a38);
    FUN_05d60b38();
    puVar2 = PTR_DAT_08e90a40;
    if (lVar4 != 0) {
      FUN_05d68e60(lVar4,uVar3,*(undefined8 *)PTR_DAT_08e90a40);
      if ((*unaff_x21 != 0) && (lVar4 = *(long *)(*unaff_x21 + 0x40), lVar4 != 0)) {
        lVar4 = *(long *)(lVar4 + 0x30);
        uVar3 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
        FUN_05d60b38();
        if (lVar4 != 0) {
          FUN_05d68e60(lVar4,uVar3,*(undefined8 *)puVar2);
          if ((*unaff_x21 != 0) && (lVar4 = *(long *)(*unaff_x21 + 0x40), lVar4 != 0)) {
            lVar4 = *(long *)(lVar4 + 0x38);
            uVar3 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
            FUN_05d60b38();
            if (lVar4 != 0) {
              FUN_05d68e60(lVar4,uVar3,*(undefined8 *)puVar2);
              if ((*unaff_x21 != 0) && (lVar4 = *(long *)(*unaff_x21 + 0x40), lVar4 != 0)) {
                lVar4 = *(long *)(lVar4 + 0x40);
                uVar3 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
                FUN_05d60b38();
                puVar1 = PTR_DAT_08e84f40;
                if (lVar4 != 0) {
                  FUN_05d68e60(lVar4,uVar3,*(undefined8 *)puVar2);
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_03cd7500();
                  }
                  if (DAT_0941341a == '\0') {
                    FUN_03c8f898(PTR_DAT_08e84f40);
                    DAT_0941341a = '\x01';
                  }
                  lVar4 = *(long *)puVar1;
                  if (*(int *)(lVar4 + 0xe0) == 0) {
                    thunk_FUN_03cd7500();
                    lVar4 = *(long *)puVar1;
                  }
                  if ((*unaff_x21 != 0) && (lVar5 = *(long *)(*unaff_x21 + 0x38), lVar5 != 0)) {
                    lVar4 = **(long **)(lVar4 + 0xb8);
                    uVar3 = FUN_08887a9c(*(undefined8 *)(lVar5 + 0x10),0);
                    puVar1 = PTR_DAT_08e82448;
                    if (lVar4 != 0) {
                      FUN_08887d18(lVar4,uVar3,1,0);
                      lVar4 = FUN_06dd3bf8();
                      if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x28), lVar4 != 0)) {
                        (**(code **)(lVar4 + 0x18))
                                  (*(undefined8 *)(lVar4 + 0x40),*unaff_x21,
                                   *(undefined8 *)(lVar4 + 0x28));
                      }
                      uVar3 = thunk_FUN_03cf5234(*unaff_x27);
                      FUN_07064478();
                      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                        thunk_FUN_03cd7500();
                      }
                      FUN_06dff658(uVar3,0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


