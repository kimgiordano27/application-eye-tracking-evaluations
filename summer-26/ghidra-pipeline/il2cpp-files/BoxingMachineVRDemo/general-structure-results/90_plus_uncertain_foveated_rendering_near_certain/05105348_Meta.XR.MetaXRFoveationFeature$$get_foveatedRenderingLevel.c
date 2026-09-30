/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$get_foveatedRenderingLevel
ENTRY_POINT: 05105348
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 97
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;strong_foveation_hits_4;functionality_foveated_rendering
*/


undefined8
Meta_XR_MetaXRFoveationFeature__get_foveatedRenderingLevel
          (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *in_x10;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long *plVar10;
  long *unaff_x27;
  
  while (!(bool)in_ZR) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_02d9a5d4();
      goto FUN_05105374;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
FUN_05105374:
  iVar1 = (*(code *)*puVar2)();
  if (2 < iVar1) {
    if (unaff_x19 == (long *)0x0) goto LAB_051056a4;
    plVar10 = *(long **)(unaff_x22 + 0x28);
    uVar3 = (**(code **)(*unaff_x19 + 0x278))();
    if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675eef8);
    }
    uVar4 = FUN_04f8e414(0);
    if (unaff_x21 == (long *)0x0) goto LAB_051056a4;
    thunk_FUN_02d709fc();
    uVar4 = FUN_050f0fe0(*(undefined8 *)PTR_DAT_06780408,uVar4);
    if (*(int *)(*(long *)PTR_DAT_0677d958 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0677d958);
    }
    uVar5 = thunk_FUN_02d9d438();
    uVar3 = FUN_050933f8(uVar5,uVar3,uVar4,0);
    if (plVar10 == (long *)0x0) goto LAB_051056a4;
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_0510549c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4(plVar10,*unaff_x27,1);
LAB_0510549c:
    (*(code *)*puVar2)(plVar10,3,uVar3,0,puVar2[1]);
  }
  FUN_05105bb8();
  if (unaff_x21 != (long *)0x0) {
    uVar3 = (**(code **)(*unaff_x21 + 0x188))();
    plVar10 = *(long **)(unaff_x22 + 0x28);
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x27) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05105544;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_02d9a5d4(plVar10,*unaff_x27,0);
LAB_05105544:
      iVar1 = (*(code *)*puVar2)(plVar10,puVar2[1]);
      if (2 < iVar1) {
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
                  puVar2 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_0510566c;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar2 = (undefined8 *)FUN_02d9a5d4(plVar10,*unaff_x27,1);
LAB_0510566c:
            (*(code *)*puVar2)(plVar10,3,uVar4,0,puVar2[1]);
            return uVar3;
          }
        }
        goto LAB_051056a4;
      }
    }
    return uVar3;
  }
LAB_051056a4:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


