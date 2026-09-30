/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager.TweakManagerFromInspector$$get_TelemetryAnnotation
ENTRY_POINT: 0727b664
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0727b988) */

long Meta_XR_ImmersiveDebugger_DebugInspectorManager_TweakManagerFromInspector__get_TelemetryAnnotation
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar14;
  long unaff_x22;
  
  FUN_04077588(PTR_DAT_092c1498);
  FUN_04077588(PTR_DAT_092860c8);
  FUN_04077588(PTR_DAT_092c1520);
  FUN_04077588(PTR_DAT_092c14f0);
  FUN_04077588(PTR_DAT_0928e698);
  *(undefined1 *)(unaff_x22 + 0x762) = 1;
  lVar7 = thunk_FUN_040b4efc(*unaff_x19);
  FUN_0727b9e8();
  uVar6 = FUN_0727aa64();
  puVar4 = PTR_DAT_092c14f0;
  if (lVar7 != 0) {
    *(undefined4 *)(lVar7 + 0x10) = uVar6;
    lVar11 = *(long *)puVar4;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_040d65a8(lVar11);
    }
    if ((unaff_x20 != 0) && (plVar8 = (long *)FUN_07df40c8(), plVar8 != (long *)0x0)) {
      lVar11 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_092c1490) {
            puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0727b764;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_092c1490,0);
LAB_0727b764:
      puVar5 = PTR_DAT_092c1528;
      puVar3 = PTR_DAT_092c1498;
      puVar2 = PTR_DAT_092860c8;
      puVar1 = PTR_DAT_092860c0;
      plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      do {
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar11 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0727b7f0;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)puVar2,0);
LAB_0727b7f0:
        uVar12 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar12 & 1) == 0) {
          if (plVar8 == (long *)0x0) {
            return lVar7;
          }
          lVar11 = *plVar8;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 == 0) goto LAB_0727b92c;
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_0727b914;
        }
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar11 = *plVar8;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0727b854;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)puVar3,0);
LAB_0727b854:
        uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        uVar10 = FUN_0727b210(uVar10);
        plVar14 = *(long **)(lVar7 + 0x18);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar11 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar5) {
              puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
              goto LAB_0727b8d8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_040b1e00(plVar14,*(long *)puVar5,2);
LAB_0727b8d8:
        (*(code *)*puVar9)(plVar14,uVar10,puVar9[1]);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_0727b914:
    if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_0727b948;
    }
  }
LAB_0727b92c:
  puVar9 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)puVar1,0);
LAB_0727b948:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return lVar7;
}


