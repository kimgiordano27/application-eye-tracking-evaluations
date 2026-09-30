/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$get_useDynamicFoveatedRendering
ENTRY_POINT: 051054e8
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


undefined8 Meta_XR_MetaXRFoveationFeature__get_useDynamicFoveatedRendering(undefined8 param_1)

{
  undefined8 uVar1;
  bool in_ZR;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x22;
  long *plVar10;
  long *unaff_x24;
  long *unaff_x27;
  
  uVar1 = 0;
  if (!in_ZR) {
    uVar1 = param_1;
  }
  if (unaff_x24 != (long *)0x0) {
    lVar7 = *unaff_x24;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x27) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05105544;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_05105544:
    iVar2 = (*(code *)*puVar3)();
    param_1 = uVar1;
    if (2 < iVar2) {
      if (unaff_x19 != (long *)0x0) {
        plVar10 = *(long **)(unaff_x22 + 0x28);
        uVar4 = (**(code **)(*unaff_x19 + 0x278))();
        if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675eef8);
        }
        uVar5 = FUN_04f8e414(0);
        thunk_FUN_02d709fc();
        uVar5 = FUN_050f0fe0(*(undefined8 *)PTR_DAT_06780400,uVar5);
        if (*(int *)(*(long *)PTR_DAT_0677d958 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0677d958);
        }
        uVar6 = thunk_FUN_02d9d438();
        uVar4 = FUN_050933f8(uVar6,uVar4,uVar5,0);
        if (plVar10 != (long *)0x0) {
          lVar7 = *plVar10;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x27) {
                puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                goto LAB_0510566c;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar3 = (undefined8 *)FUN_02d9a5d4(plVar10,*unaff_x27,1);
LAB_0510566c:
          (*(code *)*puVar3)(plVar10,3,uVar4,0,puVar3[1]);
          return uVar1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
  }
  return param_1;
}


