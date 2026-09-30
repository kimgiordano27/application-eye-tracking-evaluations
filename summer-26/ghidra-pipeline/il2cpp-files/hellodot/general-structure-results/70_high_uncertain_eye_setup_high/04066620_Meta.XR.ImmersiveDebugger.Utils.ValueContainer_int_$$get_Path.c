/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<int>$$get_Path
ENTRY_POINT: 04066620
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<int>__get_Path(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar8;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if ((*(byte *)(*(long *)(param_1 + 0x98) + 0x135) & 1) == 0) {
    FUN_02ce0978();
  }
  if (unaff_x21 != 0) {
    FUN_060cfc20();
    lVar8 = *(long *)(unaff_x19 + 0x3c8);
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02ce0978();
    }
    if (lVar8 != 0) {
      FUN_060cfc20(lVar8,*(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x18),0);
      lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02ce0978();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70) + 0x135) & 1)
          == 0) {
        FUN_02ce0978();
      }
      FUN_060cfc20();
      lVar8 = *(long *)(unaff_x19 + 0x3c8);
      lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x98);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_02ce0978();
      }
      if (lVar8 != 0) {
        FUN_060cfc20(lVar8,*(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x10),0);
        if (*(long *)(unaff_x19 + 0x3d8) == 0) {
          return;
        }
        if (*(long *)(unaff_x19 + 0x3c8) != 0) {
          plVar2 = (long *)FUN_060ca22c(*(long *)(unaff_x19 + 0x3c8),0);
          if (DAT_06a67148 == '\0') {
            AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
            DAT_06a67148 = '\x01';
          }
          if (plVar2 != (long *)0x0) {
            lVar1 = *plVar2;
            puVar6 = *(undefined4 **)(*(long *)PTR_DAT_065c9850 + 0xb8);
            uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
            uVar10 = puVar6[1];
            uVar9 = puVar6[2];
            uVar11 = *puVar6;
            if (uVar5 != 0) {
              piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065e02e8) {
                  puVar3 = (undefined8 *)(lVar1 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                  goto LAB_040667d0;
                }
                uVar5 = uVar5 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar5 != 0);
            }
            puVar3 = (undefined8 *)FUN_02ce0a7c(plVar2,*(long *)PTR_DAT_065e02e8,1);
LAB_040667d0:
            (*(code *)*puVar3)(uVar11,uVar10,uVar9,plVar2,puVar3[1]);
            if (*(long *)(unaff_x19 + 0x3d8) != 0) {
              Google_Common_Geometry_S2RegionCoverer__GetInitialCandidates
                        (*(long *)(unaff_x19 + 0x3d8),0);
              lVar1 = *(long *)(unaff_x19 + 0x3c8);
              uVar4 = thunk_FUN_02cea894(*unaff_x24);
              FUN_04a03924();
              if (lVar1 != 0) {
                FUN_0338dbd0(lVar1,uVar4,0,*unaff_x23);
                *(undefined8 *)(unaff_x19 + 0x3d8) = 0;
                lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
                if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                  lVar1 = FUN_02ce0978();
                }
                if (*(int *)(lVar1 + 0xe0) == 0) {
                  thunk_FUN_02cd038c();
                }
                if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70) +
                              0x135) & 1) == 0) {
                  FUN_02ce0978();
                }
                FUN_060cfc20();
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


