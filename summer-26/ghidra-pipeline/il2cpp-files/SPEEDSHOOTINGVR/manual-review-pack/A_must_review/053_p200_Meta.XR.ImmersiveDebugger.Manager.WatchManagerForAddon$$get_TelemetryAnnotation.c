/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchManagerForAddon$$get_TelemetryAnnotation
ENTRY_POINT: 01b37454
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


uint Meta_XR_ImmersiveDebugger_Manager_WatchManagerForAddon__get_TelemetryAnnotation(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long in_x9;
  ulong uVar10;
  int *piVar11;
  void *unaff_x19;
  void *pvVar12;
  long unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  size_t unaff_x23;
  void *unaff_x25;
  void *unaff_x26;
  void *unaff_x27;
  void *unaff_x28;
  long *plVar13;
  long unaff_x29;
  
  if (param_1 != in_x9) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc8d0();
  }
  pvVar3 = (void *)thunk_FUN_01040230();
  memcpy(unaff_x27,pvVar3,unaff_x22);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244();
  }
  pvVar3 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x18),
                                      *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80)
                                     );
  memcpy(unaff_x28,pvVar3,unaff_x23);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244();
  }
  uVar5 = thunk_FUN_0103fd0c(**(undefined8 **)(lVar4 + 0xc0));
  memcpy(unaff_x25,unaff_x27,unaff_x22);
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_0103c244();
  }
  plVar13 = *(long **)(unaff_x29 + -0x20);
  pvVar3 = (void *)thunk_FUN_01023220();
  memcpy(unaff_x26,pvVar3,unaff_x23);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244();
  }
  uVar6 = thunk_FUN_0103fd0c(**(undefined8 **)(lVar4 + 0xc0));
  puVar1 = PTR_DAT_0234d9c0;
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar4 = *plVar13;
  uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0234d9c0) {
        puVar7 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_01b3758c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)FUN_0103c348(plVar13,*(long *)PTR_DAT_0234d9c0,0);
LAB_01b3758c:
  uVar10 = (*(code *)*puVar7)(plVar13,uVar5,uVar6,puVar7[1]);
  if ((uVar10 & 1) != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    pvVar3 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x18),
                                        *(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80) +
                                        0x20);
    memcpy(unaff_x19,pvVar3,*(size_t *)(unaff_x29 + -0x28));
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    uVar5 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10));
    memcpy(unaff_x25,unaff_x27,unaff_x22);
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0103c244();
    }
    pvVar3 = (void *)thunk_FUN_01023220();
    memcpy(unaff_x21,pvVar3,*(size_t *)(unaff_x29 + -0x28));
    lVar4 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244();
    }
    uVar6 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x10));
    lVar8 = *plVar13;
    lVar4 = *(long *)puVar1;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar4) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_01b376b8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0103c348(plVar13,lVar4,0);
LAB_01b376b8:
    uVar10 = (*(code *)*puVar7)(plVar13,uVar5,uVar6,puVar7[1]);
    if ((uVar10 & 1) != 0) {
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244();
      }
      pvVar12 = *(void **)(unaff_x29 + -0x40);
      pvVar3 = (void *)thunk_FUN_01023220(*(undefined8 *)(unaff_x29 + -0x18),
                                          *(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80) +
                                          0x40);
      memcpy(pvVar12,pvVar3,*(size_t *)(unaff_x29 + -0x30));
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244();
      }
      uVar5 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18),pvVar12);
      memcpy(unaff_x25,unaff_x27,unaff_x22);
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0103c244();
      }
      lVar4 = *(long *)(unaff_x29 + -0x10);
      pvVar12 = *(void **)(unaff_x29 + -0x38);
      pvVar3 = (void *)thunk_FUN_01023220();
      memcpy(pvVar12,pvVar3,*(size_t *)(unaff_x29 + -0x30));
      lVar8 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0103c244();
      }
      uVar6 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18),pvVar12);
      lVar9 = *plVar13;
      lVar8 = *(long *)puVar1;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_01b3782c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_0103c348(plVar13,lVar8,0);
LAB_01b3782c:
      uVar2 = (*(code *)*puVar7)(plVar13,uVar5,uVar6,puVar7[1]);
      goto LAB_01b377ec;
    }
  }
  lVar4 = *(long *)(unaff_x29 + -0x10);
  uVar2 = 0;
LAB_01b377ec:
  if (*(long *)(lVar4 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


