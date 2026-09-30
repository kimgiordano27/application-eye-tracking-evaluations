/*
FUNCTION_NAME: OVRPlugin$$set_suggestedGpuPerfLevel
ENTRY_POINT: 05bbcaf4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_suggestedGpuPerfLevel
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long *unaff_x22;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (**(code **)(param_1 + 0x138))();
                    /* try { // try from 05bbcb08 to 05cbcbdb has its CatchHandler @ 05bbcb08
                       catch() { ... } // from try @ 05bbcb08 with catch @ 05bbcb08
                       catch() { ... } // from try @ 05bbcc94 with catch @ 05bbcb08
                       catch() { ... } // from try @ 05bbce14 with catch @ 05bbcb08
                       catch() { ... } // from try @ 05bbce78 with catch @ 05bbcb08
                       catch() { ... } // from try @ 05bbcea8 with catch @ 05bbcb08 */
  lVar2 = FUN_069d3a80();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    plVar7 = *(long **)(unaff_x19 + 0x48);
    uVar8 = FUN_069e6fbc(*(long *)(unaff_x19 + 0x20),0);
    uVar9 = FUN_069e3244(0);
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x22) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_05bbcb9c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_031c0d08(plVar7,*unaff_x22,2);
LAB_05bbcb9c:
      (*(code *)*puVar3)(uVar8,param_3,param_4,uVar9,plVar7,puVar3[1]);
      if (lVar2 != 0) {
        FUN_069e7098(lVar2,0);
        puVar1 = PTR_DAT_071162a0;
        if (*(char *)(unaff_x19 + 0x38) == '\0') {
          lVar2 = FUN_069d3a80();
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_05bbcd4c;
          FUN_069e5200(*(long *)(unaff_x19 + 0x20),0);
        }
        else {
          plVar7 = *(long **)(unaff_x19 + 0x50);
          if (plVar7 == (long *)0x0) goto LAB_05bbcd4c;
          lVar2 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_071162a0) {
                puVar3 = (undefined8 *)(lVar2 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_05bbcc5c;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)PTR_DAT_071162a0,1);
LAB_05bbcc5c:
          (*(code *)*puVar3)(plVar7,unaff_x19 + 0x3c,puVar3[1]);
          lVar2 = FUN_069d3a80();
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_05bbcd4c;
          plVar7 = *(long **)(unaff_x19 + 0x50);
          uVar8 = FUN_069e5200(*(long *)(unaff_x19 + 0x20),0);
          uVar10 = FUN_069e3244(0);
          if (plVar7 == (long *)0x0) goto LAB_05bbcd4c;
          lVar4 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                goto LAB_05bbcd04;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined8 *)FUN_031c0d08(plVar7,*(long *)puVar1,2);
LAB_05bbcd04:
          (*(code *)*puVar3)(uVar8,param_3,param_4,uVar9,uVar10,plVar7,puVar3[1]);
        }
        if (lVar2 != 0) {
          FUN_069e7254(lVar2,0);
          return;
        }
      }
    }
  }
LAB_05bbcd4c:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


