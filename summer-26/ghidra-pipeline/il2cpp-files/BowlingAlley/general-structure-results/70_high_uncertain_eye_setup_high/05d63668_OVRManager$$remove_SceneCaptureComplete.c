/*
FUNCTION_NAME: OVRManager$$remove_SceneCaptureComplete
ENTRY_POINT: 05d63668
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_SceneCaptureComplete
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,
               undefined8 param_4,long param_5,long param_6)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((*(byte *)(unaff_x20 + 0x606) & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072827a8);
    thunk_FUN_032e1da0(PTR_DAT_072adb10);
    thunk_FUN_032e1da0(PTR_DAT_072b07f8);
    *(undefined1 *)(unaff_x20 + 0x606) = 1;
  }
  plVar6 = *(long **)(param_5 + 0x68);
  if (plVar6 == (long *)0x0) {
    bVar1 = *(char *)(param_5 + 0xa4) != '\0';
  }
  else {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_072827a8) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_05d6371c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_032937ac(plVar6,*(long *)PTR_DAT_072827a8,0);
LAB_05d6371c:
    bVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
  }
  if (param_6 != 0) {
    FUN_05d6301c(param_6,bVar1 & 1);
    if (*(char *)(param_6 + 0x34) != '\0') {
      return;
    }
    if (*(long *)(param_5 + 0x38) != 0) {
      uVar9 = *(undefined8 *)(*(long *)(param_5 + 0x38) + 0x158);
      if (*(int *)(*(long *)PTR_DAT_072b07f8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_05d3d5ac();
      uVar7 = FUN_05d62f6c(param_6);
      if (*(long *)(param_5 + 0x38) != 0) {
        uVar10 = *(undefined8 *)(*(long *)(param_5 + 0x38) + 0x148);
        uVar11 = param_3;
        FUN_05d3d7d4();
        uVar8 = FUN_06bddffc(0);
        lVar3 = FUN_06be6b04(param_5,0);
        if (lVar3 != 0) {
          FUN_06bf52dc(uVar7,uVar9,param_3,uVar8,uVar10,uVar11,param_4,lVar3,0);
          if (*(long *)(param_5 + 0x40) != 0) {
            FUN_06bc1cdc(*(long *)(param_5 + 0x40),1,0);
            plVar6 = *(long **)(param_5 + 0x58);
            if (plVar6 == (long *)0x0) {
              uVar4 = (ulong)*(uint *)(param_5 + 0xa8);
            }
            else {
              lVar3 = *plVar6;
              uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
              if (uVar4 != 0) {
                piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_072adb10) {
                    puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
                    goto LAB_05d63884;
                  }
                  uVar4 = uVar4 - 1;
                  piVar5 = piVar5 + 4;
                } while (uVar4 != 0);
              }
              puVar2 = (undefined8 *)FUN_032937ac(plVar6,*(long *)PTR_DAT_072adb10,0);
LAB_05d63884:
              uVar4 = (*(code *)*puVar2)(plVar6,puVar2[1]);
            }
            lVar3 = 0x98;
            if (*(char *)(param_5 + 0xb0) != '\0') {
              lVar3 = 0x90;
            }
            if (*(long *)(param_5 + lVar3) != 0) {
              FUN_06baba68(uVar4,*(long *)(param_5 + lVar3),0);
              FUN_05d634a8(param_5);
              FUN_05d638ec(param_5,bVar1 & 1);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


