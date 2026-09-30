/*
FUNCTION_NAME: UniGLTF.BuiltInFallbackMaterialExporter$$ExportMaterial
ENTRY_POINT: 02f84b10
PROGRAM: vrlegs-libil2cpp.so
SCORE: 118
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02f84c0c) */
/* WARNING: Removing unreachable block (ram,0x02f849e0) */
/* WARNING: Removing unreachable block (ram,0x02f84bd4) */

void UniGLTF_BuiltInFallbackMaterialExporter__ExportMaterial(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x21;
  int iVar8;
  long lVar9;
  int unaff_w24;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  
  puVar1 = PTR_DAT_03cbed08;
  if (unaff_w24 == 1) {
    plVar4 = (long *)__cxa_begin_catch();
    lVar9 = *plVar4;
    __cxa_end_catch();
    puVar1 = PTR_DAT_03cbed08;
    plVar4 = (long *)thunk_FUN_01a89d6c();
    if (plVar4 != (long *)0x0) {
      lVar5 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_02f84934;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_01a472ec(plVar4,*(long *)puVar1,0);
LAB_02f84934:
      (*(code *)*puVar2)(plVar4,puVar2[1]);
    }
    if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(lVar9);
    }
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (0 < *(int *)(unaff_x21 + 0x18)) {
      iVar8 = 0;
      do {
        lVar9 = *unaff_x26;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar9 = *unaff_x26;
        }
        plVar4 = *(long **)(*(long *)(lVar9 + 0xb8) + 0x38);
        FUN_02215a88();
        uVar3 = thunk_FUN_01a89a98(*unaff_x27,&stack0x00000008);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c(uVar3,uVar3);
        }
        (**(code **)(*plVar4 + 0x3a8))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x3b0));
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(unaff_x21 + 0x18));
    }
    lVar9 = 0;
  }
  else {
    plVar4 = (long *)thunk_FUN_01a89d6c();
    if (plVar4 != (long *)0x0) {
      lVar9 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar2 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
            goto code_r0x02f84b9c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_01a472ec(plVar4,*(long *)puVar1,0);
code_r0x02f84b9c:
      (*(code *)*puVar2)(plVar4,puVar2[1]);
    }
    if (unaff_w24 != 1) {
      if (in_stack_00000000._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b3fef0();
    }
    plVar4 = (long *)__cxa_begin_catch();
    lVar9 = *plVar4;
    __cxa_end_catch();
  }
  if (in_stack_00000000._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (lVar9 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01a28d1c(lVar9);
}


