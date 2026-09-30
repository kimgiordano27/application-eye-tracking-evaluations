/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$.cctor
ENTRY_POINT: 06ca5a4c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>___cctor(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  void *unaff_x19;
  void *pvVar12;
  long unaff_x20;
  void *unaff_x21;
  size_t unaff_x22;
  size_t unaff_x23;
  long *unaff_x24;
  void *unaff_x25;
  void *unaff_x26;
  void *unaff_x27;
  void *unaff_x28;
  long *plVar13;
  long unaff_x29;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_04481fb8();
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0xc0) + 8);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_04481fb8(lVar7);
  }
  if (*(long *)(*unaff_x24 + 0x40) != *(long *)(lVar7 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_044481e4();
  }
  pvVar3 = (void *)thunk_FUN_04485360();
  memcpy(unaff_x27,pvVar3,unaff_x22);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_04481fb8();
  }
  pvVar3 = (void *)thunk_FUN_044a5a9c(*(undefined8 *)(unaff_x29 + -0x18),
                                      *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80)
                                     );
  memcpy(unaff_x28,pvVar3,unaff_x23);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_04481fb8();
  }
  uVar4 = thunk_FUN_04484e3c(**(undefined8 **)(lVar7 + 0xc0));
  memcpy(unaff_x25,unaff_x27,unaff_x22);
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_04481fb8();
  }
  plVar13 = *(long **)(unaff_x29 + -0x20);
  pvVar3 = (void *)thunk_FUN_044a5a9c();
  memcpy(unaff_x26,pvVar3,unaff_x23);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_04481fb8();
  }
  uVar5 = thunk_FUN_04484e3c(**(undefined8 **)(lVar7 + 0xc0));
  puVar1 = PTR_DAT_09f25788;
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar7 = *plVar13;
  uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_09f25788) {
        puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_06ca5bbc;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_044822ac(plVar13,*(long *)PTR_DAT_09f25788,0);
LAB_06ca5bbc:
  uVar10 = (*(code *)*puVar6)(plVar13,uVar4,uVar5,puVar6[1]);
  if ((uVar10 & 1) != 0) {
    lVar7 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_04481fb8();
    }
    pvVar3 = (void *)thunk_FUN_044a5a9c(*(undefined8 *)(unaff_x29 + -0x18),
                                        *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) +
                                        0x20);
    memcpy(unaff_x19,pvVar3,*(size_t *)(unaff_x29 + -0x28));
    lVar7 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_04481fb8();
    }
    uVar4 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x10));
    memcpy(unaff_x25,unaff_x27,unaff_x22);
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    pvVar3 = (void *)thunk_FUN_044a5a9c();
    memcpy(unaff_x21,pvVar3,*(size_t *)(unaff_x29 + -0x28));
    lVar7 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_04481fb8();
    }
    uVar5 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x10));
    lVar8 = *plVar13;
    lVar7 = *(long *)puVar1;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06ca5ce8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_044822ac(plVar13,lVar7,0);
LAB_06ca5ce8:
    uVar10 = (*(code *)*puVar6)(plVar13,uVar4,uVar5,puVar6[1]);
    if ((uVar10 & 1) != 0) {
      lVar7 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_04481fb8();
      }
      pvVar12 = *(void **)(unaff_x29 + -0x40);
      pvVar3 = (void *)thunk_FUN_044a5a9c(*(undefined8 *)(unaff_x29 + -0x18),
                                          *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) +
                                          0x40);
      memcpy(pvVar12,pvVar3,*(size_t *)(unaff_x29 + -0x30));
      lVar7 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_04481fb8();
      }
      uVar4 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18),pvVar12);
      memcpy(unaff_x25,unaff_x27,unaff_x22);
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      lVar7 = *(long *)(unaff_x29 + -0x10);
      pvVar12 = *(void **)(unaff_x29 + -0x38);
      pvVar3 = (void *)thunk_FUN_044a5a9c();
      memcpy(pvVar12,pvVar3,*(size_t *)(unaff_x29 + -0x30));
      lVar8 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_04481fb8();
      }
      uVar5 = thunk_FUN_04484e3c(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18),pvVar12);
      lVar9 = *plVar13;
      lVar8 = *(long *)puVar1;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_06ca5e5c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_044822ac(plVar13,lVar8,0);
LAB_06ca5e5c:
      uVar2 = (*(code *)*puVar6)(plVar13,uVar4,uVar5,puVar6[1]);
      goto LAB_06ca5e1c;
    }
  }
  lVar7 = *(long *)(unaff_x29 + -0x10);
  uVar2 = 0;
LAB_06ca5e1c:
  if (*(long *)(lVar7 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


