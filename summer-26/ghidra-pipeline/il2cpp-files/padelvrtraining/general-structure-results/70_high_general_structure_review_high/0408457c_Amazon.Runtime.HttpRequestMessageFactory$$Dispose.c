/*
FUNCTION_NAME: Amazon.Runtime.HttpRequestMessageFactory$$Dispose
ENTRY_POINT: 0408457c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Amazon_Runtime_HttpRequestMessageFactory__Dispose(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined8 uVar8;
  
  FUN_03d2d2b0();
  FUN_03d2d2b0(PTR_DAT_091ab078);
                    /* try { // try from 04084594 to 041845b3 has its CatchHandler @ 04084c44 */
  FUN_03d2d2b0(PTR_DAT_091a0c18);
  FUN_03d2d2b0(PTR_DAT_091ab030);
  FUN_03d2d2b0(PTR_DAT_091ab080);
  FUN_03d2d2b0(PTR_DAT_091ab088);
  *(undefined1 *)(unaff_x21 + 0x2ff) = 1;
  puVar2 = PTR_DAT_091a0c08;
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    FUN_08a66a6c(*(long *)(unaff_x20 + 0x28),0);
    lVar7 = *(long *)puVar2;
    lVar6 = *(long *)(lVar7 + 0x38);
    if (lVar6 == 0) {
      FUN_03d8f2c8(lVar7);
      lVar6 = *(long *)(lVar7 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03d8f26c();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0x38) + 0x10) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    puVar3 = PTR_DAT_091ab088;
    puVar2 = PTR_DAT_091a0c18;
    if (unaff_x19 != 0) {
      lVar6 = FUN_051bde30();
      plVar4 = (long *)FUN_03d2d394(*(undefined8 *)puVar2,1);
      uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
      lVar7 = thunk_FUN_03d2ef40(*(undefined8 *)puVar3);
      FUN_04084784(lVar7,uVar8);
      if (plVar4 != (long *)0x0) {
        if ((lVar7 != 0) &&
           (lVar5 = thunk_FUN_03d2ee44(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
          uVar8 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
          FUN_03d2d414(uVar8,0);
        }
        if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03d2d550();
        }
        plVar4[4] = lVar7;
        thunk_FUN_03d1023c(plVar4 + 4,lVar7);
        if (lVar6 != 0) {
          thunk_FUN_089f1d1c(lVar6,*(undefined8 *)PTR_DAT_091ab080,plVar4,0);
          lVar6 = *(long *)(unaff_x20 + 0x38);
          if (lVar6 != 0) {
            lVar7 = *(long *)(lVar6 + 0x10);
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar7 != 0) {
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                plVar4 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                *plVar4 = unaff_x19;
                thunk_FUN_03d1023c(plVar4);
                return;
              }
              FUN_05a39734();
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


