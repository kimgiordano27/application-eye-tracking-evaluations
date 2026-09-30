/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.Mesh2fDisposer$$Dispose
ENTRY_POINT: 08a7124c
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_Mesh2fDisposer__Dispose(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *unaff_x22;
  long unaff_x23;
  long *plVar9;
  
  plVar9 = *(long **)(unaff_x23 + 0xeb8);
  (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  uVar3 = FUN_08bda228(*unaff_x22);
  if (*(int *)(*plVar9 + 0xe4) == 0) {
    thunk_FUN_049a583c(*plVar9);
  }
  if (DAT_0b32acf7 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac46eb8);
    DAT_0b32acf7 = '\x01';
  }
  puVar2 = PTR_DAT_0ac54268;
  puVar1 = PTR_DAT_0ac4fcb8;
  lVar4 = *plVar9;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar4 = *plVar9;
  }
  plVar9 = (long *)**(undefined8 **)(lVar4 + 0xb8);
  uVar5 = thunk_FUN_04983b98(*(undefined8 *)puVar1,&stack0x0000000c);
  uVar3 = FUN_08bda66c(*(undefined8 *)puVar2,uVar3,uVar5);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar4 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac46ed8) {
        puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 3) * 0x10 + 0x138);
        goto LAB_08a71368;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar6 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac46ed8,3);
LAB_08a71368:
  (*(code *)*puVar6)(plVar9,uVar3,puVar6[1]);
  return;
}


