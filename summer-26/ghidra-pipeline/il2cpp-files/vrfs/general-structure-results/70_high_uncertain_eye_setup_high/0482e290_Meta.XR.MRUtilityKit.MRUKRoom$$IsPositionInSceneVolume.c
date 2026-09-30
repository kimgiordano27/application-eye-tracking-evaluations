/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$IsPositionInSceneVolume
ENTRY_POINT: 0482e290
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__IsPositionInSceneVolume
               (long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 *puVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  
  FUN_049abd30(param_2,param_3,*(undefined4 *)(param_1 + 8));
  lVar3 = *(long *)(unaff_x19 + 0x88);
  if (*(char *)(unaff_x22 + 0x13e) == '\0') {
    thunk_FUN_0159f088(PTR_DAT_06e50440);
    *(undefined1 *)(unaff_x22 + 0x13e) = 1;
  }
  if (lVar3 != 0) {
    puVar2 = *(undefined4 **)(*unaff_x23 + 0xb8);
    FUN_049abe68(*puVar2,puVar2[1],puVar2[2],lVar3,0);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x88);
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    FUN_051e0ef0(uVar4,0);
    if (*(long *)(unaff_x19 + 0x138) != 0) {
      System_Xml_Schema_XmlSchemaSimpleContentRestriction__set_AnyAttribute
                (*(long *)(unaff_x19 + 0x138),0);
      if ((*(long *)(unaff_x19 + 0x158) != 0) &&
         (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x158) + 0x30), lVar3 != 0)) {
        FUN_051df8e4(lVar3,0,0);
        if ((*(long *)(unaff_x19 + 0x158) != 0) &&
           (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x158) + 0x38), lVar3 != 0)) {
          FUN_051df8e4(lVar3,0,0);
          if (*(long *)(unaff_x19 + 0x48) != 0) {
            uVar4 = FUN_051df7a8(*(long *)(unaff_x19 + 0x48),0);
            FUN_0482dd48(uVar4,uVar4,1);
            if (*(long *)(unaff_x19 + 0x50) != 0) {
              uVar4 = FUN_051df7a8(*(long *)(unaff_x19 + 0x50),0);
              FUN_0482dd48(uVar4,uVar4,1);
              if (*(long *)(unaff_x19 + 0x98) != 0) {
                FUN_051de334(*(long *)(unaff_x19 + 0x98),0,0);
                puVar1 = PTR_DAT_06e60a48;
                if (*(long *)(unaff_x19 + 0x150) != 0) {
                  *(undefined1 *)(*(long *)(unaff_x19 + 0x150) + 0x21) = 0;
                  if (**(long **)(*(long *)puVar1 + 0xb8) != 0) {
                    FUN_03abca0c(**(long **)(*(long *)puVar1 + 0xb8),0,0);
                    if (*(long *)(unaff_x19 + 0x90) != 0) {
                      FUN_051de334(*(long *)(unaff_x19 + 0x90),1,0);
                      if (*(long *)(unaff_x19 + 0x78) != 0) {
                        FUN_051de334(*(long *)(unaff_x19 + 0x78),1,0);
                        if ((*(long *)(unaff_x19 + 0xa0) != 0) &&
                           (lVar3 = *(long *)(*(long *)(unaff_x19 + 0xa0) + 0x90), lVar3 != 0)) {
                          FUN_051df8e4(lVar3,1,0);
                          if (*(long *)(unaff_x19 + 0x158) != 0) {
                            FUN_0482df04(*(long *)(unaff_x19 + 0x158),1);
                            if (*(long *)(unaff_x19 + 0x158) != 0) {
                              FUN_0482dfbc(*(long *)(unaff_x19 + 0x158),0);
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
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


