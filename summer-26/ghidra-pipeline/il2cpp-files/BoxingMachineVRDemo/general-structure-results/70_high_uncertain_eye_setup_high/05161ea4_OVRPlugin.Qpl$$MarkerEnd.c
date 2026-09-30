/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerEnd
ENTRY_POINT: 05161ea4
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


/* WARNING: Removing unreachable block (ram,0x05162008) */
/* WARNING: Removing unreachable block (ram,0x051620d8) */

long OVRPlugin_Qpl__MarkerEnd(ulong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar12;
  long *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  
  while ((param_1 & 1) != 0) {
    lVar7 = *unaff_x21;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_05161ef4;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_05161ef4:
    uVar3 = (*(code *)*puVar2)();
    lVar12 = *unaff_x19;
    lVar7 = thunk_FUN_02d9d534(*unaff_x27);
    FUN_0504920c(lVar7,0);
    *(undefined8 *)(lVar7 + 0x10) = uVar3;
    thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x10),uVar3);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar8 = *(long *)(lVar12 + 0x10);
    lVar10 = *unaff_x28;
    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar1 = *(uint *)(lVar12 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
      *plVar4 = lVar7;
      thunk_FUN_02dd37b4(plVar4,lVar7);
    }
    else {
      FUN_03aac494(lVar12,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    lVar7 = *unaff_x21;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_05161e98;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_05161e98:
    param_1 = (*(code *)*puVar2)();
  }
  if (unaff_x21 != (long *)0x0) {
    lVar7 = *unaff_x21;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_05161ff0;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_02d9a5d4();
LAB_05161ff0:
    (*(code *)*puVar2)();
  }
  uVar3 = (**(code **)(*unaff_x20 + 0x298))();
  uVar9 = FUN_051621a0();
  if ((uVar9 & 1) != 0) {
    lVar12 = *unaff_x19;
    uVar5 = FUN_055323a4(*(undefined8 *)PTR_DAT_0676bca0,0);
    uVar6 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06782488);
    FUN_0552a144(uVar6,uVar5,uVar3,0);
    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06782490);
    FUN_0504920c(lVar7,0);
    *(undefined8 *)(lVar7 + 0x10) = uVar6;
    thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x10),uVar6);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    FUN_03aad168(lVar12,0,lVar7,*(undefined8 *)PTR_DAT_067823f8);
  }
  return *unaff_x19;
}


