/*
FUNCTION_NAME: OVRPlugin$$SaveSpaceList
ENTRY_POINT: 051c83c8
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SaveSpaceList(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long in_x9;
  long *in_x10;
  int *piVar6;
  long unaff_x20;
  long lVar7;
  
  if (in_x9 != 0) {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *in_x10) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar6 + 0x11) * 0x10 + 0x138);
        goto LAB_051c8410;
      }
      in_x9 = in_x9 + -1;
      piVar6 = piVar6 + 4;
    } while (in_x9 != 0);
  }
  puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_051c8410:
  uVar3 = (*(code *)*puVar2)();
  if ((uVar3 & 1) != 0) {
    FUN_051c8548();
    puVar1 = PTR_DAT_06608ea8;
    lVar7 = 4;
    do {
      lVar5 = *(long *)(unaff_x20 + 0x28);
      if (lVar5 == 0) goto LAB_051c84f8;
      if ((ulong)*(uint *)(lVar5 + 0x18) <= lVar7 - 4U) {
LAB_051c84fc:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c84();
      }
      if (*(long *)(lVar5 + lVar7 * 8) == 0) {
LAB_051c84f8:
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_051c8708();
      lVar5 = *(long *)(unaff_x20 + 0x28);
      if (lVar5 == 0) goto LAB_051c84f8;
      if ((ulong)*(uint *)(lVar5 + 0x18) <= lVar7 - 4U) goto LAB_051c84fc;
      lVar4 = *(long *)puVar1;
      lVar5 = *(long *)(lVar5 + lVar7 * 8);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
        lVar4 = *(long *)puVar1;
      }
      if (lVar5 == 0) goto LAB_051c84f8;
      if (*(float *)(lVar5 + 0x1c) <= *(float *)(*(long *)(lVar4 + 0xb8) + 0xc)) {
        if ((*(float *)(lVar5 + 0x1c) < *(float *)(*(long *)(lVar4 + 0xb8) + 0x10)) &&
           (*(char *)(lVar5 + 0x20) != '\0')) {
          *(undefined2 *)(lVar5 + 0x20) = 0x100;
        }
      }
      else if (*(char *)(lVar5 + 0x20) == '\0') {
        *(undefined2 *)(lVar5 + 0x20) = 0x101;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != 9);
  }
  return;
}


