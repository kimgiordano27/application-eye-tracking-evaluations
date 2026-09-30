/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBGetFoveationDynamic
ENTRY_POINT: 05105568
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 120
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__FBGetFoveationDynamic(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x22;
  long *unaff_x27;
  
  uVar1 = (**(code **)(param_1 + 0x278))();
  if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675eef8);
  }
  uVar2 = FUN_04f8e414(0);
  thunk_FUN_02d709fc();
  uVar2 = FUN_050f0fe0(*(undefined8 *)PTR_DAT_06780400,uVar2);
  if (*(int *)(*(long *)PTR_DAT_0677d958 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0677d958);
  }
  uVar3 = thunk_FUN_02d9d438();
  FUN_050933f8(uVar3,uVar1,uVar2,0);
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar5 = *unaff_x22;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x27) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_0510566c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_02d9a5d4();
LAB_0510566c:
  (*(code *)*puVar4)();
  return;
}


