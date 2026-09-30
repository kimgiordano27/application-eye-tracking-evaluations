/*
FUNCTION_NAME: OVRManager.PassthroughCapabilities$$get_MaxColorLutResolution
ENTRY_POINT: 051aa874
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_PassthroughCapabilities__get_MaxColorLutResolution
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long in_x9;
  ulong uVar5;
  int *in_x10;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  long *unaff_x21;
  
  do {
    in_x9 = in_x9 + -1;
    piVar6 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar3 = (undefined8 *)FUN_02ce0a7c();
      goto LAB_051aa8a0;
    }
    plVar7 = (long *)(in_x10 + 2);
    in_x10 = piVar6;
  } while (*plVar7 != param_3);
  puVar3 = (undefined8 *)(param_1 + (long)(*piVar6 + 3) * 0x10 + 0x138);
LAB_051aa8a0:
  (*(code *)*puVar3)();
  plVar7 = *(long **)(unaff_x19 + 0x180);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x21) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
        goto LAB_051aa91c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_02ce0a7c(plVar7,*unaff_x21,5);
LAB_051aa91c:
  (*(code *)*puVar3)(plVar7,puVar3[1]);
  uVar1 = FUN_051aa470();
  uVar2 = FUN_051aabd4();
  uVar1 = (*(uint *)(unaff_x19 + 0x178) | uVar1) & (uVar2 ^ 0xffffffff);
  *(uint *)(unaff_x19 + 0x178) = uVar1;
  if ((uVar2 != 0) && (uVar1 == 0)) {
    *(undefined1 *)(unaff_x19 + 0x169) = 1;
  }
  return;
}


