/*
FUNCTION_NAME: FUN_0575d1d4
ENTRY_POINT: 0575d1d4
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0575d1d4(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x20;
  long *unaff_x21;
  
  puVar1 = PTR_DAT_06d06088;
  lVar2 = (*(code *)*param_1)();
  lVar7 = *unaff_x20;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
                    /* try { // try from 0575d210 to 0585d23b has its CatchHandler @ 0575d610 */
      if (*(long *)(piVar9 + -2) == *unaff_x21) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0575d23c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_02eea86c();
LAB_0575d23c:
  lVar7 = (*(code *)*puVar3)();
  plVar4 = (long *)FUN_02f07f14(*(undefined8 *)puVar1,2);
  if (plVar4 == (long *)0x0) {
LAB_0575d368:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if ((lVar2 != 0) &&
     (lVar5 = thunk_FUN_02ef170c(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
OVRPlugin__GetSpaceBoundary2D:
    uVar6 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar6,0);
  }
  if ((int)plVar4[3] != 0) {
    plVar4[4] = lVar2;
    thunk_FUN_02f411dc(plVar4 + 4,lVar2);
    if ((lVar7 != 0) &&
       (lVar2 = thunk_FUN_02ef170c(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0))
    goto OVRPlugin__GetSpaceBoundary2D;
    puVar1 = PTR_DAT_06d02220;
    if (1 < *(uint *)(plVar4 + 3)) {
      plVar4[5] = lVar7;
      thunk_FUN_02f411dc(plVar4 + 5,lVar7);
      FUN_0561c1fc();
      lVar2 = FUN_02f07f14(*(undefined8 *)puVar1,2);
      if (lVar2 == 0) goto LAB_0575d368;
      if (*(int *)(lVar2 + 0x18) != 0) {
        *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR_DAT_06d39440;
        thunk_FUN_02f411dc((undefined8 *)(lVar2 + 0x20));
        if (1 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)PTR_DAT_06d04018;
          thunk_FUN_02f411dc();
          FUN_056ebd10();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


