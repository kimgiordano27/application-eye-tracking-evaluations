/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.<>c__DisplayClass20_0<Vector3>$$.ctor
ENTRY_POINT: 038704a0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03870968) */
/* WARNING: Removing unreachable block (ram,0x03870978) */

void Meta_XR_ImmersiveDebugger_Manager_Watch_<>c__DisplayClass20_0<Vector3>___ctor
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  uint uVar11;
  size_t unaff_x23;
  void *unaff_x24;
  size_t unaff_x25;
  void *unaff_x26;
  void *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
  uVar9 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == param_3) {
        lVar2 = param_1 + (long)*piVar10 * 0x10 + 0x138;
        goto LAB_038704e4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  lVar2 = FUN_02dd004c();
LAB_038704e4:
  lVar2 = *(long *)(lVar2 + 8);
  *(void **)(unaff_x19 + 0x10) = unaff_x27;
  (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 8));
  memcpy(unaff_x26,unaff_x27,unaff_x25);
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x38) + 0x50);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  puVar6 = *(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x38) + 0x48);
  uVar3 = *puVar6;
  pcVar7 = (code *)puVar6[2];
  *(void **)(unaff_x19 + 0x10) = unaff_x24;
  (*pcVar7)(uVar3);
  memcpy(*(void **)(unaff_x19 + 0x30),unaff_x24,unaff_x23);
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *(long *)(unaff_x19 + 0x18) = unaff_x29 + -0x18;
  puVar1 = PTR_DAT_06a0d278;
  *(long *)(unaff_x19 + 0x20) = unaff_x29 + -0x20;
  *(long *)(unaff_x19 + 0x28) = unaff_x19 + 0x30;
  do {
    uVar9 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x38) + 0x78))
                      (*(undefined8 *)(unaff_x19 + 0x30));
    if ((uVar9 & 1) == 0) {
      uVar11 = 0x10;
      goto LAB_038708bc;
    }
    plVar4 = (long *)(*(code *)**(undefined8 **)
                                 (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x38) + 0x60))
                               (*(undefined8 *)(unaff_x19 + 0x30));
    if (plVar4 == (long *)0x0) {
      if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_03870a10;
    }
    lVar8 = *plVar4;
    lVar2 = *(long *)puVar1;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar2) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03870614;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_02dd004c(plVar4,lVar2,0);
LAB_03870614:
    uVar3 = (*(code *)*puVar6)(plVar4,puVar6[1]);
    uVar5 = FUN_063cbbec(unaff_x29 + -0x40,0);
    uVar9 = thunk_FUN_0536b75c(uVar3,uVar5,0);
  } while ((uVar9 & 1) == 0);
  lVar8 = *plVar4;
  lVar2 = *(long *)puVar1;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar2) {
        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_038707fc;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar6 = (undefined8 *)FUN_02dd004c(plVar4,lVar2,1);
LAB_038707fc:
  uVar3 = (*(code *)*puVar6)(plVar4,puVar6[1]);
  *(undefined8 *)(unaff_x20 + 0xb0) = uVar3;
  LeanTween__value((undefined8 *)(unaff_x20 + 0xb0),uVar3);
  plVar4 = (long *)FUN_063cf22c(uVar3,0);
  if (plVar4 != (long *)0x0) {
    lVar2 = *plVar4;
    uVar9 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06a0ea00) {
          puVar6 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_038708a4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_02dd004c(plVar4,*(long *)PTR_DAT_06a0ea00,0);
LAB_038708a4:
    (*(code *)*puVar6)(plVar4);
  }
  uVar11 = 0xf;
LAB_038708bc:
  lVar8 = *(long *)(*(long *)(unaff_x29 + -0x18) + 0x38);
  lVar2 = *(long *)(lVar8 + 0x58);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18();
    lVar8 = *(long *)(*(long *)(unaff_x29 + -0x18) + 0x38);
  }
  FUN_02d97234(lVar2,*(undefined8 *)(lVar8 + 0x80),**(undefined8 **)(unaff_x19 + 0x20),
               **(undefined8 **)(unaff_x19 + 0x28),0,0);
  if ((uVar11 | 0x10) == 0x10) {
    *(undefined4 *)(unaff_x20 + 0xa8) = 4;
  }
  if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return;
  }
LAB_03870a10:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


