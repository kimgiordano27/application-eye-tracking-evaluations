/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ConsoleLogsCache.<>c__DisplayClass7_0$$<EnqueueLogEntry>b__0
ENTRY_POINT: 052c5e34
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x052c61b4) */
/* WARNING: Removing unreachable block (ram,0x052c61c8) */

void Meta_XR_ImmersiveDebugger_Utils_ConsoleLogsCache_<>c__DisplayClass7_0__<EnqueueLogEntry>b__0
               (long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  (**(code **)(param_1 + 0x278))();
                    /* catch() { ... } // from try @ 052c5e2c with catch @ 052c5e40 */
  (**(code **)(*unaff_x20 + 0x278))();
  if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d3f5c();
                    /* try { // try from 052c5e78 to 053c5e9f has its CatchHandler @ 052c5eb4 */
  lVar4 = FUN_066c67b0();
  uVar11 = (**(code **)(*unaff_x20 + 0x278))();
                    /* try { // try from 052c5ea0 to 053c5eab has its CatchHandler @ 052c5a0c */
                    /* try { // try from 052c5eac to 053c5eb3 has its CatchHandler @ 052c5eb4 */
  uVar12 = (**(code **)(*unaff_x20 + 0x278))();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 052c5e78 with catch @ 052c5eb4
                       catch(type#2 @ 00000000) { ... } // from try @ 052c5eac with catch @ 052c5eb4
                        */
  uVar13 = (**(code **)(*unaff_x20 + 0x278))();
  uVar14 = (**(code **)(*unaff_x20 + 0x278))();
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d4bec(uVar11,uVar12,uVar13,uVar14,lVar4,0);
  uVar2 = (**(code **)(*unaff_x20 + 0x238))();
  puVar1 = PTR_DAT_06d3d370;
  if (0 < (int)uVar2) {
    uVar10 = 0;
    do {
      lVar4 = *(long *)(unaff_x21 + 0x80);
      if ((lVar4 == 0) || (*(long *)(lVar4 + 0x18) == 0)) {
        FUN_052c35a0();
        lVar4 = *(long *)(unaff_x21 + 0x80);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      lVar4 = *(long *)(lVar4 + uVar10 * 8 + 0x20);
      iVar3 = (**(code **)(*unaff_x20 + 0x238))();
      if (0 < iVar3) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        iVar8 = 0;
        do {
          lVar5 = *(long *)(lVar4 + 0x20);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar5 = FUN_03fd09cc(lVar5,iVar8,*(undefined8 *)puVar1);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar9 = *(long *)(lVar5 + 0x10);
          uVar11 = (**(code **)(*unaff_x20 + 0x278))();
          uVar12 = (**(code **)(*unaff_x20 + 0x278))();
          uVar13 = (**(code **)(*unaff_x20 + 0x278))();
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          FUN_066d3f5c(uVar11,uVar12,uVar13,lVar9,0);
          lVar5 = *(long *)(lVar5 + 0x10);
          uVar11 = (**(code **)(*unaff_x20 + 0x278))();
          uVar12 = (**(code **)(*unaff_x20 + 0x278))();
          uVar13 = (**(code **)(*unaff_x20 + 0x278))();
          uVar14 = (**(code **)(*unaff_x20 + 0x278))();
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          FUN_066d4bec(uVar11,uVar12,uVar13,uVar14,lVar5,0);
          iVar8 = iVar8 + 1;
        } while (iVar3 != iVar8);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar2);
  }
  lVar4 = *unaff_x20;
  uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar10 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06d01f60) {
        puVar6 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_052c60f8;
      }
      uVar10 = uVar10 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_02eea86c();
LAB_052c60f8:
  (*(code *)*puVar6)();
  if (unaff_x19 != (long *)0x0) {
    lVar4 = *unaff_x19;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06d01f60) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_052c6164;
        }
        uVar10 = uVar10 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_02eea86c();
LAB_052c6164:
    (*(code *)*puVar6)();
  }
  return;
}


