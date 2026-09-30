/*
FUNCTION_NAME: OVRPlugin$$DestroyInsightTriangleMesh
ENTRY_POINT: 051399ec
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05139d38) */
/* WARNING: Removing unreachable block (ram,0x05139c14) */
/* WARNING: Removing unreachable block (ram,0x05139d40) */
/* WARNING: Removing unreachable block (ram,0x05139cd4) */
/* WARNING: Removing unreachable block (ram,0x05139cfc) */
/* WARNING: Removing unreachable block (ram,0x05139d00) */

void OVRPlugin__DestroyInsightTriangleMesh(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  int *piVar7;
  int *unaff_x19;
  long unaff_x20;
  int iVar8;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_02d6084c(PTR_DAT_06768930);
  FUN_02d6084c(PTR_DAT_06768938);
  *(undefined1 *)(unaff_x20 + 0xcd1) = 1;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  iVar8 = *unaff_x19;
  if (iVar8 == 0) {
    _in_stack_00000010 = *(undefined1 (*) [16])(unaff_x19 + 0x10);
    iVar8 = -1;
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    unaff_x19[0x12] = 0;
    unaff_x19[0x13] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar1 = FUN_04f8e414(0);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06768938);
    FUN_04fd8bb0(uVar2,uVar1,0);
    piVar7 = unaff_x19 + 0xc;
    *(undefined8 *)piVar7 = uVar2;
    thunk_FUN_02dd37b4(piVar7,uVar2);
    uVar1 = *(undefined8 *)piVar7;
    lVar3 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06768930);
    FUN_050bb2ac(lVar3,uVar1,0);
    plVar5 = (long *)(unaff_x19 + 0xe);
    *plVar5 = lVar3;
    thunk_FUN_02dd37b4(plVar5,lVar3);
    if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar3 = FUN_050cc754(*plVar5,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    _in_stack_00000010 = FUN_0507b064(lVar3,0,0);
    uVar4 = FUN_04f2d31c(&stack0x00000010,0);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000010;
      thunk_FUN_02dd37b4(unaff_x19 + 0x10,0);
      if (*(int *)(*(long *)PTR_DAT_067816e8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_03024758(unaff_x19 + 2,&stack0x00000010);
      return;
    }
  }
  FUN_04f2d338(&stack0x00000010,0);
  plVar5 = *(long **)(unaff_x19 + 0xc);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar1 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
  uVar2 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06780410);
  FUN_0514669c(uVar2,uVar1,0xd,0);
  if ((iVar8 < 0) && (plVar5 = *(long **)(unaff_x19 + 0xe), plVar5 != (long *)0x0)) {
    lVar3 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05139bfc;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_0675f3d0,0);
LAB_05139bfc:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  if ((iVar8 < 0) && (plVar5 = *(long **)(unaff_x19 + 0xc), plVar5 != (long *)0x0)) {
    lVar3 = *plVar5;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_05139c7c;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4(plVar5,*(long *)PTR_DAT_0675f3d0,0);
LAB_05139c7c:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  *unaff_x19 = -2;
  if (*(int *)(*(long *)PTR_DAT_067816e8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_03ded864(unaff_x19 + 2,uVar2,*(undefined8 *)PTR_DAT_06781710);
  return;
}


