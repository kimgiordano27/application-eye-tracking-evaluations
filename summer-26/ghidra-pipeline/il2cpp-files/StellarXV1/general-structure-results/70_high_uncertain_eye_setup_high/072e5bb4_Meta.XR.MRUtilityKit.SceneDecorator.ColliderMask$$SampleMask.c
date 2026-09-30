/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.ColliderMask$$SampleMask
ENTRY_POINT: 072e5bb4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_ColliderMask__SampleMask(ulong param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x23;
  long *plVar5;
  undefined8 uVar6;
  
  if ((param_1 & 1) == 0) {
    FUN_04077588(PTR_DAT_092b9200);
    *(undefined1 *)(unaff_x23 + 0xb87) = 1;
  }
  plVar5 = *(long **)(param_2 + 0x10);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar2 = *plVar5;
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_092b9200) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0x1c) * 0x10 + 0x138);
        goto LAB_072e5c34;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_092b9200,0x1c);
LAB_072e5c34:
                    /* WARNING: Could not recover jumptable at 0x072e5c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,uVar6,1);
  return;
}


