/*
FUNCTION_NAME: OVRPlugin.OVRP_1_105_0$$ovrp_QplMarkerStartForJoin
ENTRY_POINT: 02c49640
PROGRAM: sharks-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x02c4991c) */
/* WARNING: Removing unreachable block (ram,0x02c49844) */

void OVRPlugin_OVRP_1_105_0__ovrp_QplMarkerStartForJoin(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long *unaff_x20;
  
  FUN_017fc350(PTR_DAT_0380c870);
  *(undefined1 *)(unaff_x19 + 0xd2) = 1;
  puVar2 = PTR_DAT_0380c6e8;
  puVar1 = PTR_DAT_0380c6d8;
  if (unaff_x20 != (long *)0x0) {
    lVar5 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_0380c6f0);
    FUN_02825fb4(lVar5,*(undefined8 *)puVar2);
    lVar11 = *unaff_x20;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_02c496d0;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_0185dba8();
LAB_02c496d0:
    puVar1 = PTR_DAT_037f3288;
    plVar7 = (long *)(*(code *)*puVar6)();
    puVar4 = PTR_DAT_0380c6f8;
    puVar3 = PTR_DAT_0380c6e0;
    puVar2 = PTR_DAT_037f3298;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    do {
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_02c49750;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_0185dba8(plVar7,*(long *)puVar2,0);
LAB_02c49750:
      uVar12 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar7 == (long *)0x0) goto LAB_02c49838;
        lVar11 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 == 0) goto LAB_02c49810;
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerEnd;
      }
      lVar11 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_02c497ac;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)FUN_0185dba8(plVar7,*(long *)puVar3,0);
LAB_02c497ac:
      lVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar11 == 0) {
        thunk_FUN_01851c08(PTR_DAT_037f87a8);
        uVar8 = thunk_FUN_01861bbc();
        uVar9 = thunk_FUN_01851c08(PTR_DAT_0380c838);
        uVar10 = thunk_FUN_01851c08(PTR_DAT_037fb630);
        FUN_02b3cc64(uVar8,uVar9,uVar10,0);
        uVar9 = thunk_FUN_01851c08(PTR_DAT_0380c878);
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar8,uVar9);
      }
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      FUN_02826708(lVar5,lVar11,*(undefined8 *)puVar4);
    } while( true );
  }
  thunk_FUN_01851c08(PTR_DAT_037f66a8);
  uVar8 = thunk_FUN_01861bbc();
  uVar9 = thunk_FUN_01851c08(PTR_DAT_037fb630);
  FUN_02b3cbec(uVar8,uVar9,0);
  goto LAB_02c4996c;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerEnd:
    if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
      puVar6 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_02c4982c;
    }
  }
LAB_02c49810:
  puVar6 = (undefined8 *)FUN_0185dba8(plVar7,*(long *)puVar1,0);
LAB_02c4982c:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_02c49838:
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  if (*(int *)(lVar5 + 0x18) != 0) {
    FUN_02c49394(lVar5);
    return;
  }
  thunk_FUN_01851c08(PTR_DAT_037f87a8);
  uVar8 = thunk_FUN_01861bbc();
  uVar9 = thunk_FUN_01851c08(PTR_DAT_0380c848);
  uVar10 = thunk_FUN_01851c08(PTR_DAT_037fb630);
  FUN_02b3cc64(uVar8,uVar9,uVar10,0);
LAB_02c4996c:
  uVar9 = thunk_FUN_01851c08(PTR_DAT_0380c878);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar8,uVar9);
}


