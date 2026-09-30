/*
FUNCTION_NAME: OVRPlugin$$get_suggestedGpuPerfLevel
ENTRY_POINT: 05132f80
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x05133290) */

void OVRPlugin__get_suggestedGpuPerfLevel(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *extraout_x1;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long *plVar13;
  
  FUN_02d6084c();
  FUN_02d6084c(PTR_DAT_06780bf8);
  FUN_02d6084c(PTR_DAT_0675f3d8);
  FUN_02d6084c(PTR_DAT_067810e0);
  FUN_02d6084c(PTR_DAT_06780528);
  FUN_02d6084c(PTR_DAT_06780c00);
  FUN_02d6084c(PTR_DAT_06780c08);
  *(undefined1 *)(unaff_x22 + 0xc79) = 1;
  if (unaff_x19 == (long *)0x0) {
    return;
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_06780528 + 0x130);
  if (*(byte *)(*unaff_x19 + 0x130) < bVar1) {
    return;
  }
  if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06780528) {
    return;
  }
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  plVar6 = (long *)FUN_0513336c();
  puVar4 = PTR_DAT_067810e0;
  puVar3 = PTR_DAT_06780bf8;
  puVar2 = PTR_DAT_0675f3d8;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
LAB_05133038:
  do {
    lVar9 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_05133084;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)puVar2,0);
LAB_05133084:
    uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 == 0) goto LAB_05133238;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_051330e0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)puVar3,0);
LAB_051330e0:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar9 = FUN_0512fbac();
    if (lVar9 != 0) {
      if (extraout_x1 != (long *)0x0) {
        if (*(long *)(lVar9 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        plVar13 = *(long **)(*(long *)(lVar9 + 0x58) + 0x10);
        if (plVar13 != (long *)0x0) {
          lVar10 = *plVar13;
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((bVar1 <= *(byte *)(lVar10 + 0x130)) &&
             (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar4)) {
            iVar5 = (**(code **)(lVar10 + 0x228))(plVar13,*(undefined8 *)(lVar10 + 0x230));
            uVar8 = (**(code **)(*extraout_x1 + 0x228))
                              (extraout_x1,*(undefined8 *)(*extraout_x1 + 0x230));
            if (iVar5 == (int)uVar8) {
              FUN_0512f3a4(uVar8,extraout_x1);
              (**(code **)(*plVar13 + 0x6f8))(plVar13,extraout_x1);
              goto LAB_05133038;
            }
          }
        }
        uVar11 = FUN_05133454(extraout_x1);
        if (((uVar11 & 1) == 0) || ((unaff_x20 != 0 && (*(int *)(unaff_x20 + 0x14) == 1)))) {
          FUN_051334f8(lVar9,extraout_x1);
        }
      }
      goto LAB_05133038;
    }
    OVRPlugin__set_occlusionMesh();
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_05133254;
    }
  }
LAB_05133238:
  puVar7 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)PTR_DAT_0675f3d0,0);
LAB_05133254:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}


