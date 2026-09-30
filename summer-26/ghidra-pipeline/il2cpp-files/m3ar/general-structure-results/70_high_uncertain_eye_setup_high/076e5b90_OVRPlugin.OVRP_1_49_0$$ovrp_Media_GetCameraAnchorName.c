/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_GetCameraAnchorName
ENTRY_POINT: 076e5b90
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_Media_GetCameraAnchorName(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long lVar7;
  long *plVar8;
  
  FUN_0403162c(PTR_DAT_08f8e6c0);
  FUN_0403162c(PTR_DAT_08f66370);
  FUN_0403162c(PTR_DAT_08fae3e0);
  FUN_0403162c(PTR_DAT_08fae3f8);
  FUN_0403162c(PTR_DAT_08fae400);
  FUN_0403162c(PTR_DAT_08fae408);
  FUN_0403162c(PTR_DAT_08fae410);
  FUN_0403162c(PTR_DAT_08fae418);
  FUN_0403162c(PTR_DAT_08fae420);
  FUN_0403162c(PTR_DAT_08fae428);
  FUN_0403162c(PTR_DAT_08fae430);
  *(undefined1 *)(unaff_x20 + 0x2ce) = 1;
  if (*(char *)(unaff_x19 + 0x78) == '\0') {
    return;
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  uVar3 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f66370);
  FUN_07449f28();
  puVar1 = PTR_DAT_08f8e6c0;
  if (lVar7 != 0) {
    FUN_054b4c68(lVar7,uVar3,*(undefined8 *)PTR_DAT_08fae3e0);
    lVar7 = *(long *)(unaff_x19 + 0x20);
    uVar3 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
    FUN_05329de0();
    if (lVar7 != 0) {
      FUN_054b4898(lVar7,uVar3,*(undefined8 *)PTR_DAT_08fae3f8);
      puVar1 = PTR_DAT_08fae3f0;
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        plVar8 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xd8);
        uVar3 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08fae3f0);
        FUN_0532c238();
        puVar2 = PTR_DAT_08fae410;
        if (plVar8 != (long *)0x0) {
          lVar7 = *plVar8;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_08fae410) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_076e5d5c;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)PTR_DAT_08fae410,0);
LAB_076e5d5c:
          (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            plVar8 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0xe0);
            uVar3 = thunk_FUN_0406deb8(*(undefined8 *)puVar1);
            FUN_0532c238();
            if (plVar8 != (long *)0x0) {
              lVar7 = *plVar8;
              uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                    puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                    goto LAB_076e5dec;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              puVar4 = (undefined8 *)FUN_0406ae20(plVar8,*(long *)puVar2,0);
LAB_076e5dec:
                    /* WARNING: Could not recover jumptable at 0x076e5e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


