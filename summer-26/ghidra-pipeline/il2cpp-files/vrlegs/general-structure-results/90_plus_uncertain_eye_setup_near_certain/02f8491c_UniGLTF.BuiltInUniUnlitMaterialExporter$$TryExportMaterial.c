/*
FUNCTION_NAME: UniGLTF.BuiltInUniUnlitMaterialExporter$$TryExportMaterial
ENTRY_POINT: 02f8491c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f84a60) */

void UniGLTF_BuiltInUniUnlitMaterialExporter__TryExportMaterial
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x21;
  int iVar4;
  long unaff_x23;
  long *plVar5;
  int unaff_w24;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  
  puVar1 = (undefined8 *)FUN_01a472ec(param_1,param_2,0);
  (*(code *)*puVar1)();
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c();
  }
  if ((unaff_w24 == 0xc) || (unaff_w24 == 0)) {
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (0 < *(int *)(unaff_x21 + 0x18)) {
      iVar4 = 0;
      do {
        lVar2 = *unaff_x26;
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar2 = *unaff_x26;
        }
        plVar5 = *(long **)(*(long *)(lVar2 + 0xb8) + 0x38);
        FUN_02215a88();
        uVar3 = thunk_FUN_01a89a98(*unaff_x27,&stack0x00000008);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c(uVar3,uVar3);
        }
        (**(code **)(*plVar5 + 0x3a8))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x3b0));
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(unaff_x21 + 0x18));
    }
  }
  if (in_stack_00000000._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


