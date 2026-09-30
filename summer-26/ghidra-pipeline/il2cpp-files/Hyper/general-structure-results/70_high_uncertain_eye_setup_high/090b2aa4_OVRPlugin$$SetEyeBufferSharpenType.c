/*
FUNCTION_NAME: OVRPlugin$$SetEyeBufferSharpenType
ENTRY_POINT: 090b2aa4
PROGRAM: Hyper-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetEyeBufferSharpenType
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x21;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  puVar1 = (undefined8 *)FUN_04980e68();
  (*(code *)*puVar1)();
  if (unaff_x21 != 0) {
    FUN_090b23d4();
    if (*(char *)(unaff_x21 + 0x34) != '\0') {
      return;
    }
    if (*(long *)(unaff_x19 + 0x38) != 0) {
      uVar8 = (undefined4)*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x158);
      if (*(int *)(*(long *)PTR_DAT_0ac788c0 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_0908ce4c();
      uVar6 = FUN_090b2324();
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        uVar9 = (undefined4)*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x158);
        uVar10 = param_3;
        FUN_0908d078();
        uVar7 = FUN_0a16abe8(0);
        lVar2 = FUN_0a17834c();
        if (lVar2 != 0) {
          FUN_0a18aea0(uVar6,uVar8,param_3,uVar7,uVar9,uVar10,param_4,lVar2,0);
          if (*(long *)(unaff_x19 + 0x40) != 0) {
            FUN_0a148064(*(long *)(unaff_x19 + 0x40),1,0);
            plVar5 = *(long **)(unaff_x19 + 0x58);
            if (plVar5 == (long *)0x0) {
              uVar3 = (ulong)*(uint *)(unaff_x19 + 0xa8);
            }
            else {
              lVar2 = *plVar5;
              uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
              if (uVar3 != 0) {
                piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_0ac75ab8) {
                    puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
                    goto LAB_090b2c38;
                  }
                  uVar3 = uVar3 - 1;
                  piVar4 = piVar4 + 4;
                } while (uVar3 != 0);
              }
              puVar1 = (undefined8 *)FUN_04980e68(plVar5,*(long *)PTR_DAT_0ac75ab8,0);
LAB_090b2c38:
              uVar3 = (*(code *)*puVar1)(plVar5,puVar1[1]);
            }
            lVar2 = 0x98;
            if (*(char *)(unaff_x19 + 0xb0) != '\0') {
              lVar2 = 0x90;
            }
            if (*(long *)(unaff_x19 + lVar2) != 0) {
              FUN_0a12f64c(uVar3,*(long *)(unaff_x19 + lVar2),0);
              FUN_090b285c();
              FUN_090b2ca0();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


