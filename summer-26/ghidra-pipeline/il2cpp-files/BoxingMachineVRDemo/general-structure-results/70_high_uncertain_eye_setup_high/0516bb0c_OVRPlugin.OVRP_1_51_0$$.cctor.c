/*
FUNCTION_NAME: OVRPlugin.OVRP_1_51_0$$.cctor
ENTRY_POINT: 0516bb0c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0516bdf8) */
/* WARNING: Removing unreachable block (ram,0x0516bec8) */

void OVRPlugin_OVRP_1_51_0___cctor(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long *plVar11;
  long in_stack_00000028;
  
  if (param_1 != param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60e88();
  }
  plVar4 = *(long **)(unaff_x19 + 0x10);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 600))
              (plVar4,*(undefined4 *)(unaff_x20 + 0x18),*(undefined8 *)(*plVar4 + 0x260));
    in_stack_00000028 = 0;
    plVar4 = (long *)FUN_0516c28c();
    puVar3 = PTR_DAT_067827b0;
    puVar2 = PTR_DAT_0675f3d8;
    puVar1 = PTR_DAT_0675eef8;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    do {
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0516bba8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)puVar2,0);
LAB_0516bba8:
      uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar4 == (long *)0x0) goto LAB_0516bdec;
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 == 0) goto LAB_0516bd44;
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto OVRPlugin_OVRP_1_55_0__ovrp_GetSkeleton2;
      }
      lVar8 = *plVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0516bc04;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)puVar3,0);
LAB_0516bc04:
      plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      plVar11 = *(long **)(unaff_x19 + 0x10);
      uVar9 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8(uVar9,uVar9 & 0xffffffff);
      }
      (**(code **)(*plVar11 + 0x1d8))(plVar11,uVar9 & 0xffffffff,*(undefined8 *)(*plVar11 + 0x1e0));
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = FUN_04f8e414(0);
      FUN_050243e0(&stack0x00000028,uVar7,0);
      FUN_050ea8a4(in_stack_00000028,0);
      FUN_0516c1e8();
      FUN_0516b2a4();
      in_stack_00000028 = in_stack_00000028 + 1;
    } while( true );
  }
  goto LAB_0516beb0;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
OVRPlugin_OVRP_1_55_0__ovrp_GetSkeleton2:
    if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_0516bde0;
    }
  }
LAB_0516bd44:
  puVar5 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)PTR_DAT_0675f3d0,0);
LAB_0516bde0:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_0516bdec:
  plVar4 = *(long **)(unaff_x19 + 0x10);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x1c8))(plVar4,0,*(undefined8 *)(*plVar4 + 0x1d0));
    return;
  }
LAB_0516beb0:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


