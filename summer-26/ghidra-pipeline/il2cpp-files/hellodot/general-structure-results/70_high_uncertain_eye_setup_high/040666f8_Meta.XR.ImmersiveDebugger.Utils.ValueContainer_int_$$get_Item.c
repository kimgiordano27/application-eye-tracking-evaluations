/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ValueContainer<int>$$get_Item
ENTRY_POINT: 040666f8
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Utils_ValueContainer<int>__get_Item(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  FUN_060cfc20(param_2,*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(unaff_x19 + 0x3d8) == 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x3c8) != 0) {
    plVar1 = (long *)FUN_060ca22c(*(long *)(unaff_x19 + 0x3c8),0);
    if (DAT_06a67148 == '\0') {
      AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c9850);
      DAT_06a67148 = '\x01';
    }
    if (plVar1 != (long *)0x0) {
      lVar4 = *plVar1;
      puVar6 = *(undefined4 **)(*(long *)PTR_DAT_065c9850 + 0xb8);
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      uVar9 = puVar6[1];
      uVar8 = puVar6[2];
      uVar10 = *puVar6;
      if (uVar5 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065e02e8) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_040667d0;
          }
          uVar5 = uVar5 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02ce0a7c(plVar1,*(long *)PTR_DAT_065e02e8,1);
LAB_040667d0:
      (*(code *)*puVar2)(uVar10,uVar9,uVar8,plVar1,puVar2[1]);
      if (*(long *)(unaff_x19 + 0x3d8) != 0) {
        Google_Common_Geometry_S2RegionCoverer__GetInitialCandidates(*(long *)(unaff_x19 + 0x3d8),0)
        ;
        lVar4 = *(long *)(unaff_x19 + 0x3c8);
        uVar3 = thunk_FUN_02cea894(*unaff_x24);
        FUN_04a03924();
        if (lVar4 != 0) {
          FUN_0338dbd0(lVar4,uVar3,0,*unaff_x23);
          *(undefined8 *)(unaff_x19 + 0x3d8) = 0;
          lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_02ce0978();
          }
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70) + 0x135) &
              1) == 0) {
            FUN_02ce0978();
          }
          FUN_060cfc20();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


