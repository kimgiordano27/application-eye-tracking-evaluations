/*
FUNCTION_NAME: Vuplex.WebView.Internal.BaseWebView$$HandleCloseRequested
ENTRY_POINT: 08c0bb50
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Vuplex_WebView_Internal_BaseWebView__HandleCloseRequested
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long *plVar8;
  long lVar9;
  long *unaff_x23;
  
  do {
    in_x9 = in_x9 + -1;
    piVar7 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar4 = (undefined8 *)FUN_040b1e00();
      goto LAB_08c0bb7c;
    }
    plVar8 = (long *)(in_x10 + 2);
    in_x10 = piVar7;
  } while (*plVar8 != param_3);
  puVar4 = (undefined8 *)(param_1 + (long)(*piVar7 + 2) * 0x10 + 0x138);
LAB_08c0bb7c:
  iVar3 = (*(code *)*puVar4)();
  if (iVar3 != 0) {
    return;
  }
  lVar9 = unaff_x19[0xa4];
  uVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092b9bd8);
  FUN_055f6514();
  if (lVar9 != 0) {
    FUN_04f2c1d4(lVar9,uVar5,0,*(undefined8 *)PTR_DAT_092b9c00);
    lVar9 = (**(code **)(*unaff_x19 + 0x9b8))();
    uVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092b9b80);
    FUN_055f6514();
    if (lVar9 != 0) {
      FUN_04f2c1d4(lVar9,uVar5,1,*(undefined8 *)PTR_DAT_092b9b70);
      lVar9 = (**(code **)(*unaff_x19 + 0x9b8))();
      uVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09346e00);
      FUN_055f6514();
      if (lVar9 != 0) {
        FUN_04f2c1d4(lVar9,uVar5,0,*(undefined8 *)PTR_DAT_09346e08);
        lVar9 = (**(code **)(*unaff_x19 + 0x9b8))();
        puVar2 = PTR_DAT_092b9b88;
        uVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092b9b88);
        FUN_055f6514();
        puVar1 = PTR_DAT_092b9b78;
        if (lVar9 != 0) {
          FUN_04f2c1d4(lVar9,uVar5,1,*(undefined8 *)PTR_DAT_092b9b78);
          lVar9 = (**(code **)(*unaff_x19 + 0x9b8))();
          uVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0934fb80);
          FUN_055f6514();
          if (lVar9 != 0) {
            FUN_04f2c1d4(lVar9,uVar5,0,*(undefined8 *)PTR_DAT_0934fbc0);
            lVar9 = (**(code **)(*unaff_x19 + 0x9b8))();
            uVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09346df8);
            FUN_055f6514();
            if (lVar9 != 0) {
              FUN_04f2c1d4(lVar9,uVar5,0,*(undefined8 *)PTR_DAT_09346e10);
              plVar8 = *(long **)(unaff_x20 + 0x68);
              if (plVar8 != (long *)0x0) {
                lVar9 = *plVar8;
                uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar6 != 0) {
                  piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) == *unaff_x23) {
                      puVar4 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
                      goto LAB_08c0be4c;
                    }
                    uVar6 = uVar6 - 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar6 != 0);
                }
                puVar4 = (undefined8 *)FUN_040b1e00(plVar8,*unaff_x23,0);
LAB_08c0be4c:
                lVar9 = (*(code *)*puVar4)(plVar8,puVar4[1]);
                uVar5 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
                FUN_055f6514();
                if (lVar9 != 0) {
                  FUN_04f2c1d4(lVar9,uVar5,1,*(undefined8 *)puVar1);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


