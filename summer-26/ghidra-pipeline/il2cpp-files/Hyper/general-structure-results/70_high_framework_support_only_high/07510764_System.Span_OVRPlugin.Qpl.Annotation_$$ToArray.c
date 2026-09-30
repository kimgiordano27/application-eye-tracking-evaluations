/*
FUNCTION_NAME: System.Span<OVRPlugin.Qpl.Annotation>$$ToArray
ENTRY_POINT: 07510764
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07510cc8) */
/* WARNING: Removing unreachable block (ram,0x07510cd8) */

void System_Span<OVRPlugin_Qpl_Annotation>__ToArray(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  long *plVar11;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
  uVar3 = FUN_0494813c(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x38));
  if ((uVar3 & 1) == 0) {
    lVar8 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0ac15130) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_075107c8;
        }
        uVar3 = uVar3 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_04980e68();
LAB_075107c8:
    uVar5 = (*(code *)*puVar4)();
    *(undefined8 *)(unaff_x29 + -0x18) = uVar5;
    *(undefined8 *)(unaff_x29 + -0x40) = 0;
    *(long *)(unaff_x29 + -0x38) = unaff_x29 + -0x18;
    puVar2 = PTR_DAT_0ac09ba8;
    *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x20;
    do {
      plVar11 = *(long **)(unaff_x29 + -0x18);
      if (plVar11 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        goto LAB_07510d80;
      }
      lVar9 = *plVar11;
      lVar8 = *(long *)puVar2;
      uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar3 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar8) {
            puVar4 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_07510844;
          }
          uVar3 = uVar3 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_04980e68(plVar11,lVar8,0);
LAB_07510844:
      uVar3 = (*(code *)*puVar4)(plVar11,puVar4[1]);
      puVar1 = PTR_DAT_0ac09b90;
      if ((uVar3 & 1) == 0) {
        plVar11 = (long *)thunk_FUN_04983e64(*(undefined8 *)(unaff_x29 + -0x18),
                                             *(undefined8 *)PTR_DAT_0ac09b90);
        *(long **)(unaff_x29 + -0x20) = plVar11;
        if (plVar11 == (long *)0x0) goto LAB_075109a4;
        lVar8 = *plVar11;
        uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar3 == 0) goto LAB_07510978;
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_07510960;
      }
      plVar11 = *(long **)(unaff_x29 + -0x18);
      if (plVar11 == (long *)0x0) {
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        goto LAB_07510d80;
      }
      lVar9 = *plVar11;
      lVar8 = *(long *)puVar2;
      uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar3 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar8) {
            puVar4 = (undefined8 *)(lVar9 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_075108ac;
          }
          uVar3 = uVar3 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_04980e68(plVar11,lVar8,1);
LAB_075108ac:
      lVar8 = (*(code *)*puVar4)(plVar11,puVar4[1]);
    } while (lVar8 != 0);
    thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
    uVar5 = thunk_FUN_04983f60();
    uVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac44dc0);
    uVar7 = thunk_FUN_049ae08c(PTR_DAT_0ac42228);
    FUN_08cbd67c(uVar5,uVar6,uVar7,0);
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar5);
    }
    goto LAB_07510d80;
  }
  goto LAB_075109a4;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar10 = piVar10 + 4;
    if (uVar3 == 0) break;
LAB_07510960:
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_07510994;
    }
  }
LAB_07510978:
  puVar4 = (undefined8 *)FUN_04980e68(plVar11,*(long *)puVar1,0);
LAB_07510994:
  (*(code *)*puVar4)(plVar11,puVar4[1]);
LAB_075109a4:
  (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x78))();
  lVar8 = *unaff_x21;
  uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar3 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *unaff_x27) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_07510a18;
      }
      uVar3 = uVar3 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined8 *)FUN_04980e68();
LAB_07510a18:
  (*(code *)*puVar4)();
  *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + unaff_w22;
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_07510d80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


