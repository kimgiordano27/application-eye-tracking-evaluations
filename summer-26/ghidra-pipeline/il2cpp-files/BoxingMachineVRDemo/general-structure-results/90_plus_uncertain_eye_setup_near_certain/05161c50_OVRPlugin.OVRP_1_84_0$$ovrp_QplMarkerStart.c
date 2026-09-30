/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerStart
ENTRY_POINT: 05161c50
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_12;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x05162008) */
/* WARNING: Removing unreachable block (ram,0x051620d8) */

long OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerStart(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  long unaff_x19;
  long *plVar17;
  long *unaff_x20;
  long lVar18;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0x4d0));
  FUN_02d6084c(PTR_DAT_067824d8);
  FUN_02d6084c(PTR_DAT_0675f3d8);
  FUN_02d6084c(PTR_DAT_067823b8);
  FUN_02d6084c(PTR_DAT_067823f8);
  FUN_02d6084c(PTR_DAT_06782428);
  FUN_02d6084c(PTR_DAT_067823c8);
  FUN_02d6084c(PTR_DAT_06782490);
  FUN_02d6084c(PTR_DAT_06782488);
  FUN_02d6084c(PTR_DAT_0677d900);
  FUN_02d6084c(PTR_DAT_0676bca0);
  *(undefined1 *)(unaff_x19 + 0xe61) = 1;
  plVar17 = unaff_x20 + 4;
  if (*plVar17 == 0) {
    lVar6 = FUN_05161af4();
    if (lVar6 == 0) goto LAB_051620d0;
    uVar7 = FUN_0552ff1c(lVar6,0);
    if ((uVar7 & 1) == 0) {
      (**(code **)(*unaff_x20 + 0x298))();
      uVar7 = FUN_051621a0();
      puVar2 = PTR_DAT_0677d900;
      if ((uVar7 & 1) == 0) {
        lVar6 = *(long *)PTR_DAT_0677d900;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar6 = *(long *)puVar2;
        }
        *plVar17 = **(long **)(lVar6 + 0xb8);
        thunk_FUN_02dd37b4(plVar17);
        goto OVRPlugin_Qpl__MarkerStartForJoin;
      }
    }
    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067823c8);
    FUN_03aabc60(lVar6,*(undefined8 *)PTR_DAT_06782428);
    unaff_x20[4] = lVar6;
    thunk_FUN_02dd37b4(plVar17,lVar6);
    lVar6 = FUN_05161af4();
    if ((lVar6 != 0) && (plVar8 = (long *)FUN_05530070(lVar6,0), plVar8 != (long *)0x0)) {
      lVar6 = *plVar8;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_067824d0) {
            puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_05161e18;
          }
          uVar7 = uVar7 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar7 != 0);
      }
      puVar9 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)PTR_DAT_067824d0,0);
LAB_05161e18:
      plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
      puVar5 = PTR_DAT_067824d8;
      puVar4 = PTR_DAT_06782490;
      puVar3 = PTR_DAT_067823b8;
      puVar2 = PTR_DAT_0675f3d8;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      do {
        lVar6 = *plVar8;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
              puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_05161e98;
            }
            uVar7 = uVar7 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)puVar2,0);
LAB_05161e98:
        uVar7 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        if ((uVar7 & 1) == 0) {
          if (plVar8 == (long *)0x0) goto LAB_05161ffc;
          lVar6 = *plVar8;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 == 0) goto LAB_05161fd4;
          piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_05161fbc;
        }
        lVar6 = *plVar8;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
              puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_05161ef4;
            }
            uVar7 = uVar7 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar7 != 0);
        }
        puVar9 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)puVar5,0);
LAB_05161ef4:
        uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
        lVar18 = *plVar17;
        lVar6 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
        FUN_0504920c(lVar6,0);
        *(undefined8 *)(lVar6 + 0x10) = uVar10;
        thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x10),uVar10);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar14 = *(long *)(lVar18 + 0x10);
        lVar15 = *(long *)puVar3;
        *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar1 = *(uint *)(lVar18 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar18 + 0x18) = uVar1 + 1;
          plVar11 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
          *plVar11 = lVar6;
          thunk_FUN_02dd37b4(plVar11,lVar6);
        }
        else {
          FUN_03aac494(lVar18,lVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
LAB_051620d0:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  goto OVRPlugin_Qpl__MarkerStartForJoin;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar16 = piVar16 + 4;
    if (uVar7 == 0) break;
LAB_05161fbc:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_0675f3d0) {
      puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_05161ff0;
    }
  }
LAB_05161fd4:
  puVar9 = (undefined8 *)FUN_02d9a5d4(plVar8,*(long *)PTR_DAT_0675f3d0,0);
LAB_05161ff0:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_05161ffc:
  uVar10 = (**(code **)(*unaff_x20 + 0x298))();
  uVar7 = FUN_051621a0();
  if ((uVar7 & 1) != 0) {
    lVar18 = *plVar17;
    uVar12 = FUN_055323a4(*(undefined8 *)PTR_DAT_0676bca0,0);
    uVar13 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06782488);
    FUN_0552a144(uVar13,uVar12,uVar10,0);
    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06782490);
    FUN_0504920c(lVar6,0);
    *(undefined8 *)(lVar6 + 0x10) = uVar13;
    thunk_FUN_02dd37b4((undefined8 *)(lVar6 + 0x10),uVar13);
    if (lVar18 == 0) goto LAB_051620d0;
    FUN_03aad168(lVar18,0,lVar6,*(undefined8 *)PTR_DAT_067823f8);
  }
OVRPlugin_Qpl__MarkerStartForJoin:
  return *plVar17;
}


