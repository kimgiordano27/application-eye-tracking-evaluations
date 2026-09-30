/*
FUNCTION_NAME: OVRManager$$UpdateDynamicResolutionVersion
ENTRY_POINT: 05120c74
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05120f8c) */

void OVRManager__UpdateDynamicResolutionVersion(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar10;
  undefined8 unaff_x22;
  long unaff_x23;
  long *plVar11;
  
  plVar11 = *(long **)(unaff_x23 + 0xac0);
  *(undefined8 *)(unaff_x21 + 0xe0) = unaff_x22;
  thunk_FUN_02dd37b4((undefined8 *)(unaff_x21 + 0xe0));
  lVar7 = *unaff_x19;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *plVar11) {
        puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_05120cd4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_02d9a5d4();
LAB_05120cd4:
  puVar1 = PTR_DAT_0675f3d0;
  plVar11 = (long *)(*(code *)*puVar5)();
  puVar4 = PTR_DAT_0677ece0;
  puVar3 = PTR_DAT_0676aab8;
  puVar2 = PTR_DAT_0675f3d8;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  do {
    lVar7 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05120d54;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)puVar2,0);
LAB_05120d54:
    uVar8 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar11 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_05120e78;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05120db0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)puVar3,0);
LAB_05120db0:
    lVar7 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    plVar10 = *(long **)(*(long *)(unaff_x20 + 0x28) + 0xe0);
    uVar6 = FUN_05143844(lVar7,0);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_05120e2c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(plVar10,*(long *)puVar4,2);
LAB_05120e2c:
    (*(code *)*puVar5)(plVar10,uVar6,puVar5[1]);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_05120e94;
    }
  }
LAB_05120e78:
  puVar5 = (undefined8 *)FUN_02d9a5d4(plVar11,*(long *)puVar1,0);
LAB_05120e94:
  (*(code *)*puVar5)(plVar11,puVar5[1]);
  return;
}


