/*
FUNCTION_NAME: OVRPlugin$$get_gpuUtilSupported
ENTRY_POINT: 07a3c92c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_gpuUtilSupported(ulong param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar7;
  long lVar8;
  
  if ((param_1 & 1) == 0) {
    FUN_04077588(PTR_DAT_092f0520);
    FUN_04077588(PTR_DAT_092b7e88);
    FUN_04077588(PTR_DAT_092f0090);
    FUN_04077588(PTR_DAT_09285bb0);
    *(undefined1 *)(unaff_x21 + 0x291) = 1;
  }
  if (unaff_x20 == (long *)0x0) {
LAB_07a3c994:
    plVar7 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_092b7e88 + 0x130);
    if (*(byte *)(*unaff_x20 + 0x130) < bVar1) goto LAB_07a3c994;
    plVar7 = unaff_x20;
    if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_092b7e88)
    {
      plVar7 = (long *)0x0;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_09285bb0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar2 = FUN_089cc398(plVar7,0,0);
  uVar4 = 0;
  if ((uVar2 & 1) != 0) {
LAB_07a3ca84:
    *(undefined8 *)(unaff_x19 + 0x48) = uVar4;
    thunk_FUN_040ec700(unaff_x19 + 0x48);
    return;
  }
  if (plVar7 != (long *)0x0) {
    uVar2 = FUN_04f38fe8(plVar7,unaff_x19 + 0x48,*(undefined8 *)PTR_DAT_092f0520);
    if ((uVar2 & 1) != 0) {
      return;
    }
    if (unaff_x20 != (long *)0x0) {
      lVar5 = *unaff_x20;
      lVar8 = *(long *)(unaff_x19 + 0x60);
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092f0090) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_07a3ca60;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_040b1e00();
LAB_07a3ca60:
      uVar4 = (*(code *)*puVar3)();
      if (lVar8 != 0) {
        puVar3 = (undefined8 *)(lVar8 + 0x10);
        *puVar3 = uVar4;
        thunk_FUN_040ec700(puVar3,uVar4);
        uVar4 = *(undefined8 *)(unaff_x19 + 0x60);
        goto LAB_07a3ca84;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


