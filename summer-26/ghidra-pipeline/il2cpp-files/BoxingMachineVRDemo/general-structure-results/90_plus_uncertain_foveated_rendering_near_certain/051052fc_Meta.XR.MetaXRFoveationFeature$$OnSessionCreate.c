/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$OnSessionCreate
ENTRY_POINT: 051052fc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 124
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;telemetry_or_network_hits_2;strong_foveation_hits_2;functionality_foveated_rendering;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_MetaXRFoveationFeature__OnSessionCreate(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long *plVar11;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0x400));
  FUN_02d6084c(PTR_DAT_06780408);
  *(undefined1 *)(unaff_x24 + 0xb62) = 1;
  puVar1 = PTR_DAT_0677dfa0;
  plVar11 = *(long **)(unaff_x22 + 0x28);
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0677dfa0) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto FUN_05105374;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)PTR_DAT_0677dfa0,0);
FUN_05105374:
    iVar2 = (*(code *)*puVar3)(plVar11,puVar3[1]);
    if (2 < iVar2) {
      if (unaff_x19 == (long *)0x0) goto LAB_051056a4;
      plVar11 = *(long **)(unaff_x22 + 0x28);
      uVar4 = (**(code **)(*unaff_x19 + 0x278))();
      if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675eef8);
      }
      uVar5 = FUN_04f8e414(0);
      if (unaff_x21 == (long *)0x0) goto LAB_051056a4;
      thunk_FUN_02d709fc();
      uVar5 = FUN_050f0fe0(*(undefined8 *)PTR_DAT_06780408,uVar5);
      if (*(int *)(*(long *)PTR_DAT_0677d958 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0677d958);
      }
      uVar6 = thunk_FUN_02d9d438();
      uVar4 = FUN_050933f8(uVar6,uVar4,uVar5,0);
      if (plVar11 == (long *)0x0) goto LAB_051056a4;
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0510549c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)puVar1,1);
LAB_0510549c:
      (*(code *)*puVar3)(plVar11,3,uVar4,0,puVar3[1]);
    }
  }
  FUN_05105bb8();
  if (unaff_x21 != (long *)0x0) {
    uVar4 = (**(code **)(*unaff_x21 + 0x188))();
    plVar11 = *(long **)(unaff_x22 + 0x28);
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_05105544;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)puVar1,0);
LAB_05105544:
      iVar2 = (*(code *)*puVar3)(plVar11,puVar3[1]);
      if (2 < iVar2) {
        if (unaff_x19 != (long *)0x0) {
          plVar11 = *(long **)(unaff_x22 + 0x28);
          uVar5 = (**(code **)(*unaff_x19 + 0x278))();
          if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675eef8);
          }
          uVar6 = FUN_04f8e414(0);
          thunk_FUN_02d709fc();
          uVar6 = FUN_050f0fe0(*(undefined8 *)PTR_DAT_06780400,uVar6);
          if (*(int *)(*(long *)PTR_DAT_0677d958 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0677d958);
          }
          uVar7 = thunk_FUN_02d9d438();
          uVar5 = FUN_050933f8(uVar7,uVar5,uVar6,0);
          if (plVar11 != (long *)0x0) {
            lVar8 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                  puVar3 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_0510566c;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar3 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)puVar1,1);
LAB_0510566c:
            (*(code *)*puVar3)(plVar11,3,uVar5,0,puVar3[1]);
            return uVar4;
          }
        }
        goto LAB_051056a4;
      }
    }
    return uVar4;
  }
LAB_051056a4:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


