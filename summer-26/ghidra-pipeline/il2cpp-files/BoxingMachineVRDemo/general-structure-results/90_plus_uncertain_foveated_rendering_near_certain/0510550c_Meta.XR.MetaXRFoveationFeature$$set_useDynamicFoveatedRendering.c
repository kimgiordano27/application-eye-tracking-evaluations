/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$set_useDynamicFoveatedRendering
ENTRY_POINT: 0510550c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 94
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_foveation_hits_4;functionality_foveated_rendering
*/


undefined8
Meta_XR_MetaXRFoveationFeature__set_useDynamicFoveatedRendering
          (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  int *in_x10;
  int *piVar8;
  long in_x11;
  long *unaff_x19;
  long unaff_x22;
  long *plVar9;
  undefined8 unaff_x23;
  long *unaff_x27;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_02d9a5d4();
      goto LAB_05105544;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_05105544:
  iVar1 = (*(code *)*puVar2)();
  if (iVar1 < 3) {
    return unaff_x23;
  }
  if (unaff_x19 != (long *)0x0) {
    plVar9 = *(long **)(unaff_x22 + 0x28);
    uVar3 = (**(code **)(*unaff_x19 + 0x278))();
    if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675eef8);
    }
    uVar4 = FUN_04f8e414(0);
    thunk_FUN_02d709fc();
    uVar4 = FUN_050f0fe0(*(undefined8 *)PTR_DAT_06780400,uVar4);
    if (*(int *)(*(long *)PTR_DAT_0677d958 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0677d958);
    }
    uVar5 = thunk_FUN_02d9d438();
    uVar3 = FUN_050933f8(uVar5,uVar3,uVar4,0);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x27) {
            puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_0510566c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_02d9a5d4(plVar9,*unaff_x27,1);
LAB_0510566c:
      (*(code *)*puVar2)(plVar9,3,uVar3,0,puVar2[1]);
      return unaff_x23;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


