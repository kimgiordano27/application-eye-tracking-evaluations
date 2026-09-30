/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Telemetry$$GetTypeHash
ENTRY_POINT: 0727e5bc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0727e8dc) */

void Meta_XR_ImmersiveDebugger_Telemetry__GetTypeHash(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x21;
  long *plVar11;
  long unaff_x22;
  undefined1 auVar12 [16];
  
  FUN_04077588(*(undefined8 *)(param_1 + 0xc0));
  FUN_04077588(PTR_DAT_09287040);
  FUN_04077588(PTR_DAT_092c1600);
  FUN_04077588(PTR_DAT_0928a700);
  FUN_04077588(PTR_DAT_092c17a8);
  *(undefined1 *)(unaff_x22 + 0x7ce) = 1;
  if (unaff_x21 == 0) {
    thunk_FUN_040dedf8(PTR_DAT_0929cbf8);
    uVar4 = thunk_FUN_040b4efc();
    uVar5 = thunk_FUN_040dedf8(PTR_DAT_092c17b0);
    FUN_075ce0d0(uVar4,uVar5,0);
    uVar5 = thunk_FUN_040dedf8(PTR_DAT_092c17b8);
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar4,uVar5);
  }
  thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0928a700);
  uVar4 = 0;
  FUN_07f92fac();
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  auVar12 = FUN_07279974();
  if ((DAT_0988f78a & 1) == 0) {
    FUN_04077588(PTR_DAT_092860c0);
    FUN_04077588(PTR_DAT_092c17c0);
    FUN_04077588(PTR_DAT_092c17c8);
    FUN_04077588(PTR_DAT_092860c8);
    DAT_0988f78a = 1;
  }
  plVar11 = *(long **)(auVar12._0_8_ + 0x58);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar8 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092c17c0) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_0727e738;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)PTR_DAT_092c17c0,0);
LAB_0727e738:
  puVar3 = PTR_DAT_092c17c8;
  puVar2 = PTR_DAT_092860c8;
  puVar1 = PTR_DAT_092860c0;
  plVar11 = (long *)(*(code *)*puVar6)(plVar11,puVar6[1]);
  do {
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0727e7bc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)puVar2,0);
LAB_0727e7bc:
    uVar9 = (*(code *)*puVar6)(plVar11,puVar6[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar11 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_0727e888;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0727e820;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)puVar3,0);
LAB_0727e820:
    plVar7 = (long *)(*(code *)*puVar6)(plVar11,puVar6[1]);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    (**(code **)(*plVar7 + 0x188))(plVar7,auVar12._8_8_,uVar4,*(undefined8 *)(*plVar7 + 400));
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0727e8a4;
    }
  }
LAB_0727e888:
  puVar6 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)puVar1,0);
LAB_0727e8a4:
  (*(code *)*puVar6)(plVar11,puVar6[1]);
  return;
}


