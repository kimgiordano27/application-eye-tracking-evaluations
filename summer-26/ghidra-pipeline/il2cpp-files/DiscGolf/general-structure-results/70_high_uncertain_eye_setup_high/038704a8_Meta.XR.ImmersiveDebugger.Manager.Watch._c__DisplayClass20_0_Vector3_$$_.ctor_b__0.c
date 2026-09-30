/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.<>c__DisplayClass20_0<Vector3>$$<.ctor>b__0
ENTRY_POINT: 038704a8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x03870968) */
/* WARNING: Removing unreachable block (ram,0x03870978) */

void Meta_XR_ImmersiveDebugger_Manager_Watch_<>c__DisplayClass20_0<Vector3>__<_ctor>b__0
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  code *pcVar8;
  long lVar9;
  long in_x9;
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
  
  piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar10 + -2) == param_3) {
      lVar2 = param_1 + (long)*piVar10 * 0x10 + 0x138;
      goto LAB_038704e4;
    }
    in_x9 = in_x9 + -1;
    piVar10 = piVar10 + 4;
  } while (in_x9 != 0);
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
  puVar7 = *(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x38) + 0x48);
  uVar3 = *puVar7;
  pcVar8 = (code *)puVar7[2];
  *(void **)(unaff_x19 + 0x10) = unaff_x24;
  (*pcVar8)(uVar3);
  memcpy(*(void **)(unaff_x19 + 0x30),unaff_x24,unaff_x23);
  *(undefined8 *)(unaff_x19 + 0x10) = 0;
  *(long *)(unaff_x19 + 0x18) = unaff_x29 + -0x18;
  puVar1 = PTR_DAT_06a0d278;
  *(long *)(unaff_x19 + 0x20) = unaff_x29 + -0x20;
  *(long *)(unaff_x19 + 0x28) = unaff_x19 + 0x30;
  do {
    uVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x29 + -0x18) + 0x38) + 0x78))
                      (*(undefined8 *)(unaff_x19 + 0x30));
    if ((uVar4 & 1) == 0) {
      uVar11 = 0x10;
      goto LAB_038708bc;
    }
    plVar5 = (long *)(*(code *)**(undefined8 **)
                                 (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x38) + 0x60))
                               (*(undefined8 *)(unaff_x19 + 0x30));
    if (plVar5 == (long *)0x0) {
      if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      goto LAB_03870a10;
    }
    lVar9 = *plVar5;
    lVar2 = *(long *)puVar1;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar2) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03870614;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(plVar5,lVar2,0);
LAB_03870614:
    uVar3 = (*(code *)*puVar7)(plVar5,puVar7[1]);
    uVar6 = FUN_063cbbec(unaff_x29 + -0x40,0);
    uVar4 = thunk_FUN_0536b75c(uVar3,uVar6,0);
  } while ((uVar4 & 1) == 0);
  lVar9 = *plVar5;
  lVar2 = *(long *)puVar1;
  uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar4 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar2) {
        puVar7 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_038707fc;
      }
      uVar4 = uVar4 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar4 != 0);
  }
  puVar7 = (undefined8 *)FUN_02dd004c(plVar5,lVar2,1);
LAB_038707fc:
  uVar3 = (*(code *)*puVar7)(plVar5,puVar7[1]);
  *(undefined8 *)(unaff_x20 + 0xb0) = uVar3;
  LeanTween__value((undefined8 *)(unaff_x20 + 0xb0),uVar3);
  plVar5 = (long *)FUN_063cf22c(uVar3,0);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_06a0ea00) {
          puVar7 = (undefined8 *)(lVar2 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_038708a4;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(plVar5,*(long *)PTR_DAT_06a0ea00,0);
LAB_038708a4:
    (*(code *)*puVar7)(plVar5);
  }
  uVar11 = 0xf;
LAB_038708bc:
  lVar9 = *(long *)(*(long *)(unaff_x29 + -0x18) + 0x38);
  lVar2 = *(long *)(lVar9 + 0x58);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18();
    lVar9 = *(long *)(*(long *)(unaff_x29 + -0x18) + 0x38);
  }
  FUN_02d97234(lVar2,*(undefined8 *)(lVar9 + 0x80),**(undefined8 **)(unaff_x19 + 0x20),
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


