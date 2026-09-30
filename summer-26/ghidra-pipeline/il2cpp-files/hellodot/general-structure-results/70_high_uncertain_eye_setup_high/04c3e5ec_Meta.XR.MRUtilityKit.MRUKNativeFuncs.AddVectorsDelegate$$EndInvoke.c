/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AddVectorsDelegate$$EndInvoke
ENTRY_POINT: 04c3e5ec
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AddVectorsDelegate__EndInvoke(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long *unaff_x20;
  undefined8 uVar8;
  undefined8 *unaff_x23;
  long *unaff_x24;
  
  FUN_04c2c1d8();
  puVar1 = PTR_DAT_065e0200;
  if (param_1 != 0) {
                    /* try { // try from 04c3e5fc to 04d3e5ff has its CatchHandler @ 04c3e608 */
                    /* try { // try from 04c3e600 to 04d3e627 has its CatchHandler @ 04c3e534 */
    uVar8 = *(undefined8 *)PTR_DAT_065e6970;
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c3e5fc with catch @ 04c3e608
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c3e5bc with catch @ 04c3e60c
                        */
    *(undefined1 *)(param_1 + 0x20) = 0;
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c3e598 with catch @ 04c3e610
                        */
    *(undefined8 *)(param_1 + 0x10) = uVar8;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)puVar1;
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (unaff_x20 != (long *)0x0) {
      lVar3 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x24) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 5) * 0x10 + 0x138);
            goto LAB_04c3e670;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_04c3e670:
      (*(code *)*puVar2)();
      plVar7 = *(long **)(unaff_x19 + 0x50);
      lVar3 = thunk_FUN_02cea894(*unaff_x23);
      FUN_04c2c1d8(lVar3,0);
      if (lVar3 != 0) {
        uVar8 = *(undefined8 *)PTR_DAT_065e6978;
        *(undefined1 *)(lVar3 + 0x20) = 0;
        *(undefined8 *)(lVar3 + 0x10) = uVar8;
        *(undefined8 *)(lVar3 + 0x18) = 0;
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)puVar1;
        *(undefined8 *)(lVar3 + 0x30) = 0;
        if (plVar7 != (long *)0x0) {
          lVar4 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *unaff_x24) {
                puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
                goto LAB_04c3e710;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar2 = (undefined8 *)FUN_02ce0a7c(plVar7,*unaff_x24,5);
LAB_04c3e710:
                    /* WARNING: Could not recover jumptable at 0x04c3e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar2)(plVar7,uVar8,lVar3,puVar2[1]);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


