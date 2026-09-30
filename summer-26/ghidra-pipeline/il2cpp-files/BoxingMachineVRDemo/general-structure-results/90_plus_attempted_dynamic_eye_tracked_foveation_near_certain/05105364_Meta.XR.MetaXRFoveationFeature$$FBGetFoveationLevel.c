/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$FBGetFoveationLevel
ENTRY_POINT: 05105364
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 129
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_foveation_hits_4;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined8 Meta_XR_MetaXRFoveationFeature__FBGetFoveationLevel(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long *plVar10;
  long *unaff_x27;
  
  iVar1 = (*(code *)*param_1)();
  if (2 < iVar1) {
    if (unaff_x19 == (long *)0x0) goto LAB_051056a4;
    plVar10 = *(long **)(unaff_x22 + 0x28);
    uVar2 = (**(code **)(*unaff_x19 + 0x278))();
    if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675eef8);
    }
    uVar3 = FUN_04f8e414(0);
    if (unaff_x21 == (long *)0x0) goto LAB_051056a4;
    thunk_FUN_02d709fc();
    uVar3 = FUN_050f0fe0(*(undefined8 *)PTR_DAT_06780408,uVar3);
    if (*(int *)(*(long *)PTR_DAT_0677d958 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0677d958);
    }
    uVar4 = thunk_FUN_02d9d438();
    uVar2 = FUN_050933f8(uVar4,uVar2,uVar3,0);
    if (plVar10 == (long *)0x0) goto LAB_051056a4;
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x27) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_0510549c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(plVar10,*unaff_x27,1);
LAB_0510549c:
    (*(code *)*puVar5)(plVar10,3,uVar2,0,puVar5[1]);
  }
  FUN_05105bb8();
  if (unaff_x21 != (long *)0x0) {
    uVar2 = (**(code **)(*unaff_x21 + 0x188))();
    plVar10 = *(long **)(unaff_x22 + 0x28);
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x27) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05105544;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(plVar10,*unaff_x27,0);
LAB_05105544:
      iVar1 = (*(code *)*puVar5)(plVar10,puVar5[1]);
      if (2 < iVar1) {
        if (unaff_x19 != (long *)0x0) {
          plVar10 = *(long **)(unaff_x22 + 0x28);
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
          uVar6 = thunk_FUN_02d9d438();
          uVar3 = FUN_050933f8(uVar6,uVar3,uVar4,0);
          if (plVar10 != (long *)0x0) {
            lVar7 = *plVar10;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *unaff_x27) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_0510566c;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_02d9a5d4(plVar10,*unaff_x27,1);
LAB_0510566c:
            (*(code *)*puVar5)(plVar10,3,uVar3,0,puVar5[1]);
            return uVar2;
          }
        }
        goto LAB_051056a4;
      }
    }
    return uVar2;
  }
LAB_051056a4:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


