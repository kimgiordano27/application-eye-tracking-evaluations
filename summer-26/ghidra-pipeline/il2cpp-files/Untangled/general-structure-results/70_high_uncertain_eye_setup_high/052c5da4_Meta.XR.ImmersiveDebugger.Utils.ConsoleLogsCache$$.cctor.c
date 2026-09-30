/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Utils.ConsoleLogsCache$$.cctor
ENTRY_POINT: 052c5da4
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

void Meta_XR_ImmersiveDebugger_Utils_ConsoleLogsCache___cctor(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 *unaff_x19;
  long unaff_x21;
  undefined8 *unaff_x22;
  int iVar10;
  long unaff_x23;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  FUN_02f07e70(PTR_DAT_06d01f60);
  FUN_02f07e70(PTR_DAT_06d3d370);
  FUN_02f07e70(PTR_DAT_06d020e0);
  *(undefined1 *)(unaff_x23 + 0x7d) = 1;
  plVar4 = (long *)thunk_FUN_02ef1808(*unaff_x19);
  FUN_05544fa8();
  plVar5 = (long *)thunk_FUN_02ef1808(*unaff_x22);
                    /* try { // try from 052c5df4 to 053c5df7 has its CatchHandler @ 052c5e0c */
                    /* try { // try from 052c5df8 to 053c5dfb has its CatchHandler @ 052c5e08 */
                    /* try { // try from 052c5dfc to 053c5e2b has its CatchHandler @ 052c5a0c */
  FUN_055858fc(plVar5,plVar4,0);
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 052c5df8 with catch @ 052c5e08
                        */
  lVar6 = FUN_066c67b0();
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 052c5df4 with catch @ 052c5e0c
                        */
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 052c5cc8 with catch @ 052c5e10
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 052c5cac with catch @ 052c5e14
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 052c5bf8 with catch @ 052c5e18
                        */
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 052c5c38 with catch @ 052c5e1c
                        */
  uVar13 = (**(code **)(*plVar5 + 0x278))(plVar5,*(undefined8 *)(*plVar5 + 0x280));
                    /* try { // try from 052c5e2c to 053c5e2f has its CatchHandler @ 052c5e40 */
  uVar14 = (**(code **)(*plVar5 + 0x278))(plVar5,*(undefined8 *)(*plVar5 + 0x280));
  uVar15 = (**(code **)(*plVar5 + 0x278))(plVar5,*(undefined8 *)(*plVar5 + 0x280));
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d3f5c(uVar13,uVar14,uVar15,lVar6,0);
  lVar6 = FUN_066c67b0();
  uVar13 = (**(code **)(*plVar5 + 0x278))(plVar5,*(undefined8 *)(*plVar5 + 0x280));
  uVar14 = (**(code **)(*plVar5 + 0x278))(plVar5,*(undefined8 *)(*plVar5 + 0x280));
  uVar15 = (**(code **)(*plVar5 + 0x278))(plVar5,*(undefined8 *)(*plVar5 + 0x280));
  uVar16 = (**(code **)(*plVar5 + 0x278))(plVar5,*(undefined8 *)(*plVar5 + 0x280));
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d4bec(uVar13,uVar14,uVar15,uVar16,lVar6,0);
  uVar2 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
  puVar1 = PTR_DAT_06d3d370;
  if (0 < (int)uVar2) {
    uVar12 = 0;
    do {
      lVar6 = *(long *)(unaff_x21 + 0x80);
      if ((lVar6 == 0) || (*(long *)(lVar6 + 0x18) == 0)) {
        FUN_052c35a0();
        lVar6 = *(long *)(unaff_x21 + 0x80);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      lVar6 = *(long *)(lVar6 + uVar12 * 8 + 0x20);
      iVar3 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
      if (0 < iVar3) {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        iVar10 = 0;
        do {
          lVar7 = *(long *)(lVar6 + 0x20);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar7 = FUN_03fd09cc(lVar7,iVar10,*(undefined8 *)puVar1);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar11 = *(long *)(lVar7 + 0x10);
          uVar13 = (**(code **)(*plVar5 + 0x278))(plVar5,*(undefined8 *)(*plVar5 + 0x280));
          uVar14 = (**(code **)(*plVar5 + 0x278))(plVar5,*(undefined8 *)(*plVar5 + 0x280));
          uVar15 = (**(code **)(*plVar5 + 0x278))(plVar5,*(undefined8 *)(*plVar5 + 0x280));
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          FUN_066d3f5c(uVar13,uVar14,uVar15,lVar11,0);
          lVar7 = *(long *)(lVar7 + 0x10);
          uVar13 = (**(code **)(*plVar5 + 0x278))(plVar5,*(undefined8 *)(*plVar5 + 0x280));
          uVar14 = (**(code **)(*plVar5 + 0x278))(plVar5,*(undefined8 *)(*plVar5 + 0x280));
          uVar15 = (**(code **)(*plVar5 + 0x278))(plVar5,*(undefined8 *)(*plVar5 + 0x280));
          uVar16 = (**(code **)(*plVar5 + 0x278))(plVar5,*(undefined8 *)(*plVar5 + 0x280));
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          FUN_066d4bec(uVar13,uVar14,uVar15,uVar16,lVar7,0);
          iVar10 = iVar10 + 1;
        } while (iVar3 != iVar10);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar2);
  }
  lVar6 = *plVar5;
  uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar12 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06d01f60) {
        puVar8 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_052c60f8;
      }
      uVar12 = uVar12 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar12 != 0);
  }
  puVar8 = (undefined8 *)FUN_02eea86c(plVar5,*(long *)PTR_DAT_06d01f60,0);
LAB_052c60f8:
  (*(code *)*puVar8)(plVar5,puVar8[1]);
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar12 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06d01f60) {
          puVar8 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_052c6164;
        }
        uVar12 = uVar12 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_02eea86c(plVar4,*(long *)PTR_DAT_06d01f60,0);
LAB_052c6164:
    (*(code *)*puVar8)(plVar4,puVar8[1]);
  }
  return;
}


