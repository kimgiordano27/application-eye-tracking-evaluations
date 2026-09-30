/*
FUNCTION_NAME: OVRManager$$set_hasVrFocus
ENTRY_POINT: 0572f978
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0572fc80) */

void OVRManager__set_hasVrFocus(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  int unaff_w20;
  undefined *puVar9;
  
  iVar3 = FUN_0561a77c();
  if ((unaff_w20 == 0) || (unaff_w20 < iVar3)) {
    iVar3 = FUN_0572fd34();
    iVar4 = FUN_0561a77c();
    if (iVar3 <= iVar4 - unaff_w20) {
      plVar5 = (long *)(**(code **)(*unaff_x19 + 0x5e8))();
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar10 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06d581b0) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0572fa1c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_02eea86c(plVar5,*(long *)PTR_DAT_06d581b0,0);
LAB_0572fa1c:
      puVar9 = PTR_DAT_06d01f60;
      plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      puVar2 = PTR_DAT_06d3b610;
      puVar1 = PTR_DAT_06d02048;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      do {
        lVar10 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0572fa98;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_02eea86c(plVar5,*(long *)puVar1,0);
LAB_0572fa98:
        uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar11 & 1) == 0) goto LAB_0572fb1c;
        lVar10 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_0572faf4;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_02eea86c(plVar5,*(long *)puVar2,0);
LAB_0572faf4:
        (*(code *)*puVar6)(plVar5,puVar6[1]);
        FUN_05624b0c();
      } while( true );
    }
    thunk_FUN_02f239f0(PTR_DAT_06d02080);
    uVar7 = thunk_FUN_02ef1808();
    puVar9 = PTR_DAT_06d588d8;
  }
  else {
    thunk_FUN_02f239f0(PTR_DAT_06d02080);
    uVar7 = thunk_FUN_02ef1808();
    puVar9 = PTR_DAT_06d588d0;
  }
  uVar8 = thunk_FUN_02f239f0(puVar9);
  FUN_0555e840(uVar7,uVar8,0);
  uVar8 = thunk_FUN_02f239f0(PTR_DAT_06d588e0);
                    /* WARNING: Subroutine does not return */
  FUN_02f07f94(uVar7,uVar8);
LAB_0572fb1c:
  if (plVar5 != (long *)0x0) {
    lVar10 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar9) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0572fb70;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_02eea86c(plVar5,*(long *)puVar9,0);
LAB_0572fb70:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  return;
}


