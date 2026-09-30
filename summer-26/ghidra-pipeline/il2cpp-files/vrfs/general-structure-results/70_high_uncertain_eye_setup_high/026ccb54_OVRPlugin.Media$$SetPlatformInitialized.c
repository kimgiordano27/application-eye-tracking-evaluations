/*
FUNCTION_NAME: OVRPlugin.Media$$SetPlatformInitialized
ENTRY_POINT: 026ccb54
PROGRAM: vrfs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x026ccf34) */

void OVRPlugin_Media__SetPlatformInitialized(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  undefined8 uVar12;
  
  thunk_FUN_0159f088();
  thunk_FUN_0159f088(PTR_DAT_06dc26f0);
  *(undefined1 *)(unaff_x23 + 0xfe3) = 1;
  if (unaff_x21 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_015c2790(lVar8);
    }
    lVar9 = *unaff_x21;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_026ccbec;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80();
LAB_026ccbec:
    uVar4 = (*(code *)*puVar5)();
  }
  (**(code **)(**(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8))(unaff_x20,uVar4);
  puVar2 = PTR_DAT_06dc26f0;
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031cb62c(1,0);
  }
  uVar6 = thunk_FUN_0164ba04();
  uVar12 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x38);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_016466fc(*(long *)puVar2);
  }
  uVar12 = FUN_031c8668(uVar12,0);
  uVar10 = FUN_031d212c(uVar6,uVar12,0);
  lVar8 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
  if ((uVar10 & 1) != 0) {
    lVar8 = *(long *)(lVar8 + 0x40);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_015c2790(lVar8);
    }
    if ((*(byte *)(*unaff_x21 + 300) < *(byte *)(lVar8 + 300)) ||
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar8 + 300) * 8 + -8) != lVar8)) {
                    /* WARNING: Subroutine does not return */
      FUN_0160f170();
    }
    uVar1 = *(uint *)(unaff_x21 + 4);
    if ((int)uVar1 < 1) {
      return;
    }
    lVar8 = unaff_x21[3];
    if (lVar8 != 0) {
      uVar10 = 0;
      lVar9 = lVar8 + 0x30;
      do {
        if (*(uint *)(lVar8 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_0160eebc();
        }
        if (-1 < *(int *)(lVar9 + -0x10)) {
          (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48) + 8))();
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x18;
      } while (uVar1 != uVar10);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar8 = *(long *)(lVar8 + 0x50);
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
    lVar8 = FUN_015c2790(lVar8);
  }
  lVar9 = *unaff_x21;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar8) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_026ccd7c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_015c2a80();
LAB_026ccd7c:
  puVar3 = PTR_DAT_06e636c0;
  plVar7 = (long *)(*(code *)*puVar5)();
  puVar2 = PTR_DAT_06ddc938;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  do {
    lVar8 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_026ccdec;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar7,*(long *)puVar2,0);
LAB_026ccdec:
    uVar10 = (*(code *)*puVar5)(plVar7,puVar5[1]);
    if ((uVar10 & 1) == 0) break;
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
    if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
      lVar8 = FUN_015c2790(lVar8);
    }
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_026cce64;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar7,lVar8,0);
LAB_026cce64:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
    (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48) + 8))();
  } while( true );
  if (plVar7 != (long *)0x0) {
    lVar8 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_026ccef0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar7,*(long *)puVar3,0);
LAB_026ccef0:
    (*(code *)*puVar5)(plVar7,puVar5[1]);
  }
  return;
}


