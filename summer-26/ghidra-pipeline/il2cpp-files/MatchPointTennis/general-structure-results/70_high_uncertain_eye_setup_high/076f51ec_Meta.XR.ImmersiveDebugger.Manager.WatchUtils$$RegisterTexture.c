/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils$$RegisterTexture
ENTRY_POINT: 076f51ec
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x076f5494) */

void Meta_XR_ImmersiveDebugger_Manager_WatchUtils__RegisterTexture(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  float unaff_s8;
  undefined4 uVar12;
  undefined8 in_stack_00000008;
  
  lVar10 = *(long *)(unaff_x19 + 0x98);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
  *(undefined1 *)(lVar10 + 0x20) = *(undefined1 *)(unaff_x19 + 0x68);
  plVar11 = *(long **)(unaff_x19 + 0x18);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar5 = *plVar11;
  uVar12 = *(undefined4 *)(unaff_x19 + 0xa0);
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f2f9f0) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
        goto LAB_076f5268;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_044822ac(plVar11,*(long *)PTR_DAT_09f2f9f0,3);
LAB_076f5268:
  uVar6 = (*(code *)*puVar3)(uVar12,plVar11,lVar10);
  if ((uVar6 & 1) == 0) {
    lVar10 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f22bd0);
    FUN_07441bc0(lVar10,*(undefined8 *)PTR_DAT_09f22bc8);
    puVar2 = PTR_DAT_09f22bc0;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_0744298c(lVar10,*(undefined8 *)PTR_DAT_09f2fa10,*(undefined8 *)PTR_DAT_09f2fa00,
                 *(undefined8 *)PTR_DAT_09f22bc0);
    FUN_0744298c(lVar10,*(undefined8 *)PTR_DAT_09f2fa20,*(undefined8 *)PTR_DAT_09f2f9f8,
                 *(undefined8 *)puVar2);
    puVar1 = PTR_DAT_09f1e5b8;
    in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x19 + 0xa0);
    uVar4 = thunk_FUN_04484e3c(*(undefined8 *)(PTR_DAT_09f1e5b8 + 0x78),(long)&stack0x00000008 + 4);
    FUN_0744298c(lVar10,*(undefined8 *)PTR_DAT_09f2fa18,uVar4,*(undefined8 *)puVar2);
    uVar4 = thunk_FUN_04484e3c(*(undefined8 *)(puVar1 + 0x70));
    FUN_0744298c(lVar10,*(undefined8 *)PTR_DAT_09f2fa08,uVar4,*(undefined8 *)puVar2);
    FUN_076f64f0();
    iVar9 = 6;
    iVar8 = 6;
  }
  else {
    lVar10 = *(long *)(unaff_x19 + 0x98);
    *(ulong *)(unaff_x19 + 0xa8) =
         *(long *)(unaff_x19 + 0xa8) + ((ulong)(long)*(int *)(unaff_x21 + 0x18) >> 1);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    if (*(char *)(lVar10 + 0x20) == '\0') {
      iVar9 = 10;
      iVar8 = 10;
    }
    else {
      iVar9 = 10;
      iVar8 = 10;
      *(int *)(unaff_x19 + 0xa4) = *(int *)(unaff_x19 + 0xa4) + 1;
    }
  }
  if (unaff_x20 != (long *)0x0) {
    lVar10 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09f1f008) {
          puVar3 = (undefined8 *)(lVar10 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076f5428;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_044822ac();
LAB_076f5428:
    (*(code *)*puVar3)();
    iVar8 = iVar9;
  }
  if ((iVar8 == 0) || (iVar8 == 10)) {
    *(float *)(unaff_x19 + 0xa0) = unaff_s8 + *(float *)(unaff_x19 + 0xa0);
  }
  return;
}


