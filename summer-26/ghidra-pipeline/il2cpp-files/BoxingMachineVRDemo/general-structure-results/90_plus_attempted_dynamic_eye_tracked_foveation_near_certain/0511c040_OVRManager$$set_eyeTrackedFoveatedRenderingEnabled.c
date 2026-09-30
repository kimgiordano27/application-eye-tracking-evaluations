/*
FUNCTION_NAME: OVRManager$$set_eyeTrackedFoveatedRenderingEnabled
ENTRY_POINT: 0511c040
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 144
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x0511c17c) */

undefined8 OVRManager__set_eyeTrackedFoveatedRenderingEnabled(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  puVar4 = PTR_DAT_06780aa8;
  puVar3 = PTR_DAT_06768928;
  puVar2 = PTR_DAT_06768920;
  if ((DAT_06b79bcf & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675f3d0);
    FUN_02d6084c(PTR_DAT_06768920);
    FUN_02d6084c(PTR_DAT_06768928);
    FUN_02d6084c(PTR_DAT_06780aa8);
    DAT_06b79bcf = 1;
  }
  puVar1 = PTR_DAT_0675f3d0;
  FUN_050f136c(param_1,*(undefined8 *)puVar4,0);
  uVar5 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
  FUN_04fd83cc(uVar5,param_1,0);
  plVar6 = (long *)thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_05092038(plVar6,uVar5,0);
  uVar5 = FUN_0511bd0c(plVar6,param_2);
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0511c154;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)puVar1,0);
LAB_0511c154:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  return uVar5;
}


