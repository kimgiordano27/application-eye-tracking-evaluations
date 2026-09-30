/*
FUNCTION_NAME: OVRManager.<>c$$<FindMainCamera>b__468_0
ENTRY_POINT: 05126b4c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_<>c__<FindMainCamera>b__468_0(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long *in_x10;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  
  uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *in_x10) {
        puVar2 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_05126d2c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_05126d2c:
  iVar1 = (*(code *)*puVar2)();
  if (iVar1 < 1) {
    plVar6 = *(long **)(unaff_x19 + 0x10);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x578))(plVar6,*(undefined8 *)(*plVar6 + 0x580));
      plVar6 = *(long **)(unaff_x19 + 0x10);
      if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x05126dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x588))(plVar6,*(undefined8 *)(*plVar6 + 0x590));
        return;
      }
    }
  }
  else {
    plVar6 = *(long **)(unaff_x20 + 0x98);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06780ad8) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_05126dd8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)PTR_DAT_06780ad8,0);
LAB_05126dd8:
      (*(code *)*puVar2)(plVar6,0,puVar2[1]);
      FUN_05126010();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


