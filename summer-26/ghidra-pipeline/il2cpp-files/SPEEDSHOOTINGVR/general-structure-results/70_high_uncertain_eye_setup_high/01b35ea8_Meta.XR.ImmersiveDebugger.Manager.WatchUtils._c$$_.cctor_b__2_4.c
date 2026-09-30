/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils.<>c$$<.cctor>b__2_4
ENTRY_POINT: 01b35ea8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchUtils_<>c__<_cctor>b__2_4(ulong param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  undefined8 uVar11;
  undefined4 uStack000000000000002c;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0103c244();
  }
  lVar3 = *(long *)(*(long *)(param_2 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244();
  }
  if (*unaff_x22 != lVar3) {
    lVar3 = FUN_00e5db00(*(undefined8 *)(unaff_x20 + 0x20));
    uVar11 = thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 8));
    plVar5 = (long *)thunk_FUN_0105d828(uVar11,0);
    FUN_00e5db80();
    uVar11 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
    uVar6 = thunk_FUN_010303a8(PTR_DAT_0234d9e0);
    uVar11 = FUN_01c42574(uVar6,uVar11,0);
    thunk_FUN_010303a8(PTR_DAT_0234bcd0);
    uVar6 = thunk_FUN_010400dc();
    uVar7 = thunk_FUN_010303a8(PTR_DAT_0234d120);
    FUN_01c5e198(uVar6,uVar11,uVar7,0);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar6);
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244(lVar3);
  }
  if (*(long *)(*unaff_x22 + 0x40) != *(long *)(lVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc8d0();
  }
  lVar3 = thunk_FUN_01040230();
  puVar1 = PTR_DAT_0234d9d8;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar8 = *unaff_x19;
  uVar11 = *(undefined8 *)(lVar3 + 0x10);
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0234d9d8) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_01b35f84;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_0103c348();
LAB_01b35f84:
  iVar2 = (*(code *)*puVar4)();
  if (iVar2 == 0) {
    lVar3 = *unaff_x19;
    uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_01b35fec;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_0103c348();
LAB_01b35fec:
    iVar2 = (*(code *)*puVar4)();
    if (iVar2 == 0) {
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244();
      }
      thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18));
      uStack000000000000002c = (undefined4)uVar11;
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244(lVar3);
      }
      thunk_FUN_0103fd0c(*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18),&stack0x0000002c);
      lVar3 = *unaff_x19;
      uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_01b360ac;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_0103c348();
LAB_01b360ac:
      (*(code *)*puVar4)();
    }
  }
  return;
}


