/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$RaycastVolume
ENTRY_POINT: 072c63b8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__RaycastVolume(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  int in_w8;
  long in_x9;
  long unaff_x19;
  int iStack000000000000000c;
  
  iVar1 = *(int *)(in_x9 + 0x18);
  iStack000000000000000c = in_w8;
  if ((iVar1 <= in_w8) && (*(char *)(unaff_x19 + 0x30) != '\0')) {
    iStack000000000000000c = 0;
    *(undefined4 *)(unaff_x19 + 0x40) = 0;
  }
  if (iStack000000000000000c < iVar1) {
    uVar3 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x48),&stack0x0000000c);
    uVar3 = FUN_074d57ec(*(undefined8 *)PTR_DAT_092c3610,uVar3,0);
    if (*(int *)(*(long *)PTR_DAT_092b8400 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)PTR_DAT_092b8400);
    }
    FUN_07301a74(uVar3,0);
    *(undefined1 *)(unaff_x19 + 0x31) = 1;
    puVar2 = PTR_DAT_09289fe8;
    if ((*(long *)(unaff_x19 + 0x28) != 0) &&
       (lVar4 = FUN_05c26ab8(*(long *)(unaff_x19 + 0x28),*(undefined4 *)(unaff_x19 + 0x40),
                             *(undefined8 *)PTR_DAT_09289fe8), lVar4 != 0)) {
      uVar3 = thunk_FUN_089d03e8(lVar4,0);
      uVar3 = FUN_074d875c(*(undefined8 *)PTR_DAT_092c3608,uVar3,0);
      FUN_07301a74(uVar3,0);
      if (*(long *)(unaff_x19 + 0x28) != 0) {
        lVar4 = *(long *)(unaff_x19 + 0x20);
        uVar3 = FUN_05c26ab8(*(long *)(unaff_x19 + 0x28),*(undefined4 *)(unaff_x19 + 0x40),
                             *(undefined8 *)puVar2);
        if (lVar4 != 0) {
          FUN_08968e8c(lVar4,uVar3,0);
          lVar4 = *(long *)(unaff_x19 + 0x70);
          if (lVar4 != 0) {
            (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28))
            ;
          }
          if (*(long *)(unaff_x19 + 0x48) != 0) {
            FUN_05c26ab8(*(long *)(unaff_x19 + 0x48),*(undefined4 *)(unaff_x19 + 0x40),
                         *(undefined8 *)PTR_DAT_092c23f0);
            FUN_072c6538();
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar4 = *(long *)(unaff_x19 + 0x78);
  if (lVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x072c6520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
  return;
}


