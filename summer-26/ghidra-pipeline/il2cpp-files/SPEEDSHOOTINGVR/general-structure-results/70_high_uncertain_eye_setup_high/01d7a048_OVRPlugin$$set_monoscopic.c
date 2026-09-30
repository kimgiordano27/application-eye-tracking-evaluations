/*
FUNCTION_NAME: OVRPlugin$$set_monoscopic
ENTRY_POINT: 01d7a048
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__set_monoscopic(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *unaff_x19;
  ulong unaff_x21;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
                    /* try { // try from 01d7a068 to 01e7a09f has its CatchHandler @ 01d7a544 */
  lVar4 = FUN_01c53464();
  lVar5 = FUN_01d78f1c();
  if ((lVar5 == 0) || (lVar4 == 0)) {
LAB_01d7a1dc:
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  uVar2 = *(uint *)(lVar4 + 0x18);
  if ((int)uVar2 < 1) {
LAB_01d7a1a4:
    if (*(int *)(*(long *)PTR_DAT_0234bcc8 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar7 = FUN_01d7aaec();
    *unaff_x19 = uVar7;
    thunk_FUN_0106e12c();
    return 1;
  }
  lVar1 = *(long *)(lVar5 + 0x10);
  lVar5 = *(long *)(lVar5 + 0x18);
  uVar10 = 0;
                    /* try { // try from 01d7a0a0 to 01e7a55b has its CatchHandler @ 01d79d8c */
LAB_01d7a0a8:
  if (uVar10 < uVar2) {
    plVar9 = (long *)(lVar4 + (long)(int)uVar10 * 8 + 0x20);
    if (*plVar9 != 0) {
      lVar6 = FUN_01c54244(*plVar9,0);
      if (*(uint *)(lVar4 + 0x18) <= uVar10) goto LAB_01d7a1e0;
      *plVar9 = lVar6;
      thunk_FUN_0106e12c(plVar9,lVar6);
      if (lVar5 != 0) {
        if ((int)*(ulong *)(lVar5 + 0x18) < 1) {
LAB_01d79f18:
          FUN_01d7a4b8();
          return 0;
        }
        uVar11 = 0;
        uVar8 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        do {
          if ((uVar8 <= uVar11) || (*(uint *)(lVar4 + 0x18) <= uVar10)) goto LAB_01d7a1e0;
          lVar6 = *(long *)(lVar5 + 0x20 + uVar11 * 8);
          if ((unaff_x21 & 1) == 0) {
            if (lVar6 == 0) break;
            uVar8 = FUN_01c50924(lVar6,*plVar9,0);
            if ((uVar8 & 1) != 0) goto LAB_01d7a154;
          }
          else {
            iVar3 = FUN_01c4fae4(lVar6,*plVar9,5,0);
            if (iVar3 == 0) goto LAB_01d7a154;
          }
          uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar11 = uVar11 + 1;
          if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)uVar11) goto LAB_01d79f18;
        } while( true );
      }
    }
    goto LAB_01d7a1dc;
  }
  goto LAB_01d7a1e0;
LAB_01d7a154:
  if (lVar1 == 0) goto LAB_01d7a1dc;
  if ((uint)uVar11 < *(uint *)(lVar1 + 0x18)) {
    uVar2 = *(uint *)(lVar4 + 0x18);
    uVar10 = uVar10 + 1;
    if ((int)uVar2 <= (int)uVar10) goto LAB_01d7a1a4;
    goto LAB_01d7a0a8;
  }
LAB_01d7a1e0:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


