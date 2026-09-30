/*
FUNCTION_NAME: OVRPlugin$$QuerySpaces
ENTRY_POINT: 05d29484
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__QuerySpaces
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
               undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x158);
    if (*(int *)(*(long *)PTR_DAT_06fb8368 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_05d032f0();
    uVar6 = FUN_05d28cac();
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x148);
      uVar10 = param_3;
      FUN_05d03518();
      uVar7 = FUN_068ed124(0);
      lVar1 = FUN_068f5d7c();
      if (lVar1 != 0) {
        FUN_06904e58(uVar6,uVar8,param_3,uVar7,uVar9,uVar10,param_4,lVar1,0);
        if (*(long *)(unaff_x19 + 0x40) != 0) {
          FUN_068cd970(*(long *)(unaff_x19 + 0x40),1,0);
          plVar5 = *(long **)(unaff_x19 + 0x58);
          if (plVar5 == (long *)0x0) {
            uVar3 = (ulong)*(uint *)(unaff_x19 + 0xa8);
          }
          else {
            lVar1 = *plVar5;
            uVar3 = (ulong)*(ushort *)(lVar1 + 0x12e);
            if (uVar3 != 0) {
              piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
              do {
                if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_06fb4c68) {
                  puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
                  goto LAB_05d295c4;
                }
                uVar3 = uVar3 - 1;
                piVar4 = piVar4 + 4;
              } while (uVar3 != 0);
            }
            puVar2 = (undefined8 *)FUN_02feb5b8(plVar5,*(long *)PTR_DAT_06fb4c68,0);
LAB_05d295c4:
            uVar3 = (*(code *)*puVar2)(plVar5,puVar2[1]);
          }
          lVar1 = 0x98;
          if (*(char *)(unaff_x19 + 0xb0) != '\0') {
            lVar1 = 0x90;
          }
          if (*(long *)(unaff_x19 + lVar1) != 0) {
            FUN_068b63c8(uVar3,*(long *)(unaff_x19 + lVar1),0);
            FUN_05d291e8();
            FUN_05d2962c();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


