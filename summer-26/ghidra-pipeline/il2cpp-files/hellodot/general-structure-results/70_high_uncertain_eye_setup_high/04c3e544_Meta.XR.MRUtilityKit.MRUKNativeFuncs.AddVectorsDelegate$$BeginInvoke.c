/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AddVectorsDelegate$$BeginInvoke
ENTRY_POINT: 04c3e544
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AddVectorsDelegate__BeginInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  long *plVar9;
  long unaff_x21;
  undefined8 uVar10;
  undefined8 *unaff_x23;
  
  puVar1 = PTR_DAT_065dd4b8;
  uVar10 = *(undefined8 *)PTR_DAT_065e6920;
  *(undefined1 *)(unaff_x21 + 0x20) = 1;
  *(undefined8 *)(unaff_x21 + 0x10) = uVar10;
  *(undefined8 *)(unaff_x21 + 0x18) = 0;
  *(undefined8 *)(unaff_x21 + 0x28) = *(undefined8 *)puVar1;
  *(undefined8 *)(unaff_x21 + 0x30) = 0;
  puVar1 = PTR_DAT_065e01b8;
  if (unaff_x20 != (long *)0x0) {
    lVar5 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* try { // try from 04c3e598 to 04d3e59f has its CatchHandler @ 04c3e610 */
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_065e01b8) {
                    /* try { // try from 04c3e5bc to 04d3e5c3 has its CatchHandler @ 04c3e60c */
                    /* try { // try from 04c3e5c4 to 04d3e5fb has its CatchHandler @ 04c3e534 */
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 5) * 0x10 + 0x138);
          goto LAB_04c3e5c8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_02ce0a7c();
LAB_04c3e5c8:
    (*(code *)*puVar3)();
    plVar9 = *(long **)(unaff_x19 + 0x50);
    lVar5 = thunk_FUN_02cea894(*unaff_x23);
    FUN_04c2c1d8(lVar5,0);
    puVar2 = PTR_DAT_065e0200;
    if (lVar5 != 0) {
      uVar10 = *(undefined8 *)PTR_DAT_065e6970;
      *(undefined1 *)(lVar5 + 0x20) = 0;
      *(undefined8 *)(lVar5 + 0x10) = uVar10;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)puVar2;
      *(undefined8 *)(lVar5 + 0x30) = 0;
      if (plVar9 != (long *)0x0) {
        lVar6 = *plVar9;
        lVar4 = *(long *)puVar1;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar4) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
              goto LAB_04c3e670;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_02ce0a7c(plVar9,lVar4,5);
LAB_04c3e670:
        (*(code *)*puVar3)(plVar9,uVar10,lVar5,puVar3[1]);
        plVar9 = *(long **)(unaff_x19 + 0x50);
        lVar5 = thunk_FUN_02cea894(*unaff_x23);
        FUN_04c2c1d8(lVar5,0);
        if (lVar5 != 0) {
          uVar10 = *(undefined8 *)PTR_DAT_065e6978;
          *(undefined1 *)(lVar5 + 0x20) = 0;
          *(undefined8 *)(lVar5 + 0x10) = uVar10;
          *(undefined8 *)(lVar5 + 0x18) = 0;
          *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)puVar2;
          *(undefined8 *)(lVar5 + 0x30) = 0;
          if (plVar9 != (long *)0x0) {
            lVar6 = *plVar9;
            lVar4 = *(long *)puVar1;
            uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == lVar4) {
                  puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
                  goto LAB_04c3e710;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar3 = (undefined8 *)FUN_02ce0a7c(plVar9,lVar4,5);
LAB_04c3e710:
                    /* WARNING: Could not recover jumptable at 0x04c3e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar3)(plVar9,uVar10,lVar5,puVar3[1]);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


