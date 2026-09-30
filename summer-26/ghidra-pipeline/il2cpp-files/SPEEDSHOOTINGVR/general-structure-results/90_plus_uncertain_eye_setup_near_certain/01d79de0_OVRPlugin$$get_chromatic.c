/*
FUNCTION_NAME: OVRPlugin$$get_chromatic
ENTRY_POINT: 01d79de0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_4;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 OVRPlugin__get_chromatic(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  short sVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *unaff_x19;
  ulong unaff_x21;
  undefined4 unaff_w24;
  long *plVar12;
  uint uVar13;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01022c14(param_1);
  }
  uVar6 = FUN_01c65188(unaff_w24,0);
  if ((((uVar6 & 1) == 0) && (sVar4 = FUN_01c49538(), sVar4 != 0x2d)) &&
     (sVar4 = FUN_01c49538(), sVar4 != 0x2b)) {
    if (*(int *)(*(long *)PTR_DAT_0234bcc8 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    lVar8 = FUN_01c53464();
    lVar9 = FUN_01d78f1c();
    if ((lVar9 == 0) || (lVar8 == 0)) {
LAB_01d7a1dc:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar2 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar2) {
      lVar1 = *(long *)(lVar9 + 0x10);
      lVar9 = *(long *)(lVar9 + 0x18);
      uVar13 = 0;
LAB_01d7a0a8:
      if (uVar13 < uVar2) {
        plVar12 = (long *)(lVar8 + (long)(int)uVar13 * 8 + 0x20);
        if (*plVar12 != 0) {
          lVar10 = FUN_01c54244(*plVar12,0);
          if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_01d7a1e0;
          *plVar12 = lVar10;
          thunk_FUN_0106e12c(plVar12,lVar10);
          if (lVar9 != 0) {
            if ((int)*(ulong *)(lVar9 + 0x18) < 1) {
LAB_01d79f18:
              FUN_01d7a4b8();
              return 0;
            }
            uVar6 = 0;
            uVar11 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
            do {
              if ((uVar11 <= uVar6) || (*(uint *)(lVar8 + 0x18) <= uVar13)) goto LAB_01d7a1e0;
              lVar10 = *(long *)(lVar9 + 0x20 + uVar6 * 8);
              if ((unaff_x21 & 1) == 0) {
                if (lVar10 == 0) break;
                uVar11 = FUN_01c50924(lVar10,*plVar12,0);
                if ((uVar11 & 1) != 0) goto LAB_01d7a154;
              }
              else {
                iVar5 = FUN_01c4fae4(lVar10,*plVar12,5,0);
                if (iVar5 == 0) goto LAB_01d7a154;
              }
              uVar11 = (ulong)*(uint *)(lVar9 + 0x18);
              uVar6 = uVar6 + 1;
              if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar6) goto LAB_01d79f18;
            } while( true );
          }
        }
        goto LAB_01d7a1dc;
      }
      goto LAB_01d7a1e0;
    }
LAB_01d7a1a4:
    if (*(int *)(*(long *)PTR_DAT_0234bcc8 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar7 = FUN_01d7aaec();
    *unaff_x19 = uVar7;
    thunk_FUN_0106e12c();
  }
  else {
    puVar3 = PTR_DAT_0234bcc8;
    if (*(int *)(*(long *)PTR_DAT_0234bcc8 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    OVRPlugin__get_positionSupported();
    if (*(int *)(*(long *)PTR_DAT_0234c0c0 + 0xe0) == 0) {
      thunk_FUN_01022c14(*(long *)PTR_DAT_0234c0c0);
    }
    FUN_01d22d48(0);
    if (*(int *)(*(long *)PTR_DAT_02351078 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01c6d598();
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    uVar7 = FUN_01d7a5e8();
    *unaff_x19 = uVar7;
    thunk_FUN_0106e12c();
  }
  return 1;
LAB_01d7a154:
  if (lVar1 == 0) goto LAB_01d7a1dc;
  if ((uint)uVar6 < *(uint *)(lVar1 + 0x18)) {
    uVar2 = *(uint *)(lVar8 + 0x18);
    uVar13 = uVar13 + 1;
    if ((int)uVar2 <= (int)uVar13) goto LAB_01d7a1a4;
    goto LAB_01d7a0a8;
  }
LAB_01d7a1e0:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


