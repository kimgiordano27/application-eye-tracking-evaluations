/*
FUNCTION_NAME: OVRPlugin.OVRP_1_6_0$$ovrp_SetOverlayQuad3
ENTRY_POINT: 01db2230
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db2378) */
/* WARNING: Removing unreachable block (ram,0x01db2490) */
/* WARNING: Removing unreachable block (ram,0x01db249c) */

undefined4 OVRPlugin_OVRP_1_6_0__ovrp_SetOverlayQuad3(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  undefined4 uVar12;
  long *unaff_x25;
  undefined8 in_stack_00000000;
  long *in_stack_00000008;
  
  FUN_00fdc2e4(*(undefined8 *)(param_1 + 0x128));
  *(undefined1 *)(unaff_x19 + 0x9e3) = 1;
  lVar5 = *unaff_x25;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar5 = *unaff_x25;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  iVar3 = thunk_FUN_01027034(0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  FUN_01db10b0(lVar5);
  in_stack_00000008 = (long *)0x0;
  uVar6 = FUN_01db0e54(lVar5);
  puVar1 = PTR_DAT_0235a470;
  do {
    iVar4 = thunk_FUN_01027034(0);
    if (0x1d < iVar4 - iVar3) {
LAB_01db2434:
      uVar12 = 1;
      goto LAB_01db245c;
    }
    in_stack_00000000._4_1_ = '\0';
    FUN_01db1b64(lVar5,uVar6,&stack0x00000008,(long)&stack0x00000000 + 4);
    if (in_stack_00000008 == (long *)0x0) {
      if (in_stack_00000000._4_1_ != '\0') {
        FUN_01db1014(lVar5);
      }
      return 1;
    }
    FUN_01db1014(lVar5);
    if (in_stack_00000008 == (long *)0x0) goto LAB_01db2434;
    lVar7 = *unaff_x25;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar7 = *unaff_x25;
    }
    plVar2 = in_stack_00000008;
    if (*(char *)(*(long *)(lVar7 + 0xb8) + 5) == '\0') {
      if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      lVar9 = *in_stack_00000008;
      lVar7 = *(long *)puVar1;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar7) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_01db23d0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_0103c348(in_stack_00000008,lVar7,0);
LAB_01db23d0:
      (*(code *)*puVar8)(plVar2,puVar8[1]);
      in_stack_00000008 = (long *)0x0;
    }
    else {
      FUN_00fdc1e0(1);
      plVar2 = in_stack_00000008;
      if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      lVar9 = *in_stack_00000008;
      lVar7 = *(long *)puVar1;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar7) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_01db234c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_0103c348(in_stack_00000008,lVar7,0);
LAB_01db234c:
      (*(code *)*puVar8)(plVar2,puVar8[1]);
      in_stack_00000008 = (long *)0x0;
      FUN_00fdc1e0(0);
    }
    uVar10 = FUN_01012ff8();
  } while ((uVar10 & 1) != 0);
  uVar12 = 0;
LAB_01db245c:
  FUN_01db1014(lVar5);
  return uVar12;
}


