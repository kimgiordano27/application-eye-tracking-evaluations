/*
FUNCTION_NAME: OVRManager$$remove_ShareSpacesComplete
ENTRY_POINT: 02c0111c
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__remove_ShareSpacesComplete(void)

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
  
  thunk_FUN_01843fdc();
  uVar6 = FUN_02b42df4(unaff_w24,0);
  if ((((uVar6 & 1) == 0) && (sVar4 = FUN_02a4b568(), sVar4 != 0x2d)) &&
     (sVar4 = FUN_02a4b568(), sVar4 != 0x2b)) {
    if (*(int *)(*(long *)PTR_DAT_037f4790 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar8 = FUN_02a52960();
    lVar9 = FUN_02c0023c();
    if ((lVar9 == 0) || (lVar8 == 0)) {
LAB_02c01514:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar2 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar2) {
      lVar1 = *(long *)(lVar9 + 0x10);
      lVar9 = *(long *)(lVar9 + 0x18);
      uVar13 = 0;
LAB_02c013e0:
      if (uVar13 < uVar2) {
        plVar12 = (long *)(lVar8 + (long)(int)uVar13 * 8 + 0x20);
        if (*plVar12 != 0) {
          lVar10 = FUN_02a543c0(*plVar12,0);
          if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_02c01518;
          *plVar12 = lVar10;
          thunk_FUN_0188fd20(plVar12,lVar10);
          if (lVar9 != 0) {
            if ((int)*(ulong *)(lVar9 + 0x18) < 1) {
LAB_02c01248:
              FUN_02c017e4();
              return 0;
            }
            uVar6 = 0;
            uVar11 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
            do {
              if ((uVar11 <= uVar6) || (*(uint *)(lVar8 + 0x18) <= uVar13)) goto LAB_02c01518;
              lVar10 = *(long *)(lVar9 + 0x20 + uVar6 * 8);
              if ((unaff_x21 & 1) == 0) {
                if (lVar10 == 0) break;
                uVar11 = FUN_02a4f854(lVar10,*plVar12,0);
                if ((uVar11 & 1) != 0) goto LAB_02c0148c;
              }
              else {
                iVar5 = FUN_02a4e824(lVar10,*plVar12,5,0);
                if (iVar5 == 0) goto LAB_02c0148c;
              }
              uVar11 = (ulong)*(uint *)(lVar9 + 0x18);
              uVar6 = uVar6 + 1;
              if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar6) goto LAB_02c01248;
            } while( true );
          }
        }
        goto LAB_02c01514;
      }
      goto LAB_02c01518;
    }
LAB_02c014dc:
    if (*(int *)(*(long *)PTR_DAT_037f4790 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar7 = FUN_02c01e20();
    *unaff_x19 = uVar7;
    thunk_FUN_0188fd20();
  }
  else {
    puVar3 = PTR_DAT_037f4790;
    if (*(int *)(*(long *)PTR_DAT_037f4790 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_02c01850();
    if (*(int *)(*(long *)PTR_DAT_037f4460 + 0xe0) == 0) {
      thunk_FUN_01843fdc(*(long *)PTR_DAT_037f4460);
    }
    FUN_02b954e8(0);
    if (*(int *)(*(long *)PTR_DAT_037f3df8 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_02b4c1b8();
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar7 = FUN_02c01914();
    *unaff_x19 = uVar7;
    thunk_FUN_0188fd20();
  }
  return 1;
LAB_02c0148c:
  if (lVar1 == 0) goto LAB_02c01514;
  if ((uint)uVar6 < *(uint *)(lVar1 + 0x18)) {
    uVar2 = *(uint *)(lVar8 + 0x18);
    uVar13 = uVar13 + 1;
    if ((int)uVar2 <= (int)uVar13) goto LAB_02c014dc;
    goto LAB_02c013e0;
  }
LAB_02c01518:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


