/*
FUNCTION_NAME: OVRPlugin$$AddInsightPassthroughSurfaceGeometry
ENTRY_POINT: 05139ab4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05139d38) */
/* WARNING: Removing unreachable block (ram,0x05139c14) */
/* WARNING: Removing unreachable block (ram,0x05139d40) */
/* WARNING: Removing unreachable block (ram,0x05139cd4) */
/* WARNING: Removing unreachable block (ram,0x05139cfc) */
/* WARNING: Removing unreachable block (ram,0x05139d00) */

void OVRPlugin__AddInsightPassthroughSurfaceGeometry(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  int unaff_w24;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  lVar1 = FUN_050cc754(param_1,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  _in_stack_00000010 = FUN_0507b064(lVar1,0,0);
  uVar2 = FUN_04f2d31c(&stack0x00000010,0);
  if ((uVar2 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000010;
    thunk_FUN_02dd37b4(unaff_x19 + 0x10,0);
    if (*(int *)(*(long *)PTR_DAT_067816e8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_03024758(unaff_x19 + 2,&stack0x00000010);
  }
  else {
    FUN_04f2d338(&stack0x00000010,0);
    plVar3 = *(long **)(unaff_x19 + 0xc);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    uVar5 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06780410);
    FUN_0514669c(uVar5,uVar4,0xd,0);
    if ((unaff_w24 < 0) && (plVar3 = *(long **)(unaff_x19 + 0xe), plVar3 != (long *)0x0)) {
      lVar1 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0675f3d0) {
            puVar6 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_05139bfc;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)PTR_DAT_0675f3d0,0);
LAB_05139bfc:
      (*(code *)*puVar6)(plVar3,puVar6[1]);
    }
    if ((unaff_w24 < 0) && (plVar3 = *(long **)(unaff_x19 + 0xc), plVar3 != (long *)0x0)) {
      lVar1 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar2 != 0) {
        piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0675f3d0) {
            puVar6 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_05139c7c;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar2 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)PTR_DAT_0675f3d0,0);
LAB_05139c7c:
      (*(code *)*puVar6)(plVar3,puVar6[1]);
    }
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(*(long *)PTR_DAT_067816e8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    FUN_03ded864(unaff_x19 + 2,uVar5,*(undefined8 *)PTR_DAT_06781710);
  }
  return;
}


