/*
FUNCTION_NAME: FUN_01d79c5c
ENTRY_POINT: 01d79c5c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 FUN_01d79c5c(long *param_1,long param_2,ulong param_3,undefined8 *param_4)

{
  long lVar1;
  uint uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  uint uVar18;
  ulong uVar19;
  
  puVar10 = PTR_DAT_0234bc58;
  if ((DAT_0247d791 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234bd48);
    FUN_00fdc2e4(PTR_DAT_02351078);
    FUN_00fdc2e4(PTR_DAT_0234c0c0);
    FUN_00fdc2e4(PTR_DAT_0234bcc8);
    FUN_00fdc2e4(PTR_DAT_0234bce0);
    FUN_00fdc2e4(PTR_DAT_0234bc58);
    FUN_00fdc2e4(PTR_DAT_0234d278);
    FUN_00fdc2e4(PTR_DAT_02358e78);
    FUN_00fdc2e4(PTR_DAT_02358e80);
    DAT_0247d791 = 1;
  }
  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar6 = FUN_01d603ec(param_1,0,0);
  if ((uVar6 & 1) != 0) {
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar8 = thunk_FUN_010400dc();
    uVar9 = thunk_FUN_010303a8(PTR_DAT_02358360);
    FUN_01c5e120(uVar8,uVar9,0);
    uVar9 = thunk_FUN_010303a8(PTR_DAT_02358e88);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar8,uVar9);
  }
  lVar7 = *(long *)PTR_DAT_0234bce0;
  if (param_1 == (long *)0x0) {
LAB_01d79d58:
    plVar17 = (long *)0x0;
  }
  else {
    if (*(byte *)(*param_1 + 0x130) < *(byte *)(lVar7 + 0x130)) goto LAB_01d79d58;
    plVar17 = param_1;
    if (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7) {
      plVar17 = (long *)0x0;
    }
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  puVar10 = PTR_DAT_02353b28;
  if (plVar17 != (long *)0x0) {
    if (param_1 == (long *)0x0) {
LAB_01d7a1dc:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
                    /* try { // try from 01d79d8c to 01e7a01f has its CatchHandler @ 01d79d8c
                       catch() { ... } // from try @ 01d79d8c with catch @ 01d79d8c
                       catch() { ... } // from try @ 01d7a024 with catch @ 01d79d8c
                       catch() { ... } // from try @ 01d7a0a0 with catch @ 01d79d8c
                       catch() { ... } // from try @ 01d7a574 with catch @ 01d79d8c
                       catch() { ... } // from try @ 01d7a65c with catch @ 01d79d8c
                       catch() { ... } // from try @ 01d7a66c with catch @ 01d79d8c */
    uVar6 = (**(code **)(*param_1 + 0x568))(param_1,*(undefined8 *)(*param_1 + 0x570));
    puVar10 = PTR_DAT_02358358;
    if ((uVar6 & 1) != 0) {
      if (param_2 == 0) {
        FUN_01d7a45c(param_4,2,*(undefined8 *)PTR_DAT_0234d278);
      }
      else {
        lVar7 = FUN_01c54244(param_2,0);
        if (lVar7 == 0) goto LAB_01d7a1dc;
        if (*(int *)(lVar7 + 0x10) != 0) {
          uVar4 = FUN_01c49538(lVar7,0,0);
          if (*(int *)(*(long *)PTR_DAT_0234bd48 + 0xe0) == 0) {
            thunk_FUN_01022c14(*(long *)PTR_DAT_0234bd48);
          }
          uVar6 = FUN_01c65188(uVar4,0);
          if ((((uVar6 & 1) == 0) && (sVar3 = FUN_01c49538(lVar7,0,0), sVar3 != 0x2d)) &&
             (sVar3 = FUN_01c49538(lVar7,0,0), puVar10 = PTR_DAT_0234bcc8, sVar3 != 0x2b)) {
            lVar12 = *(long *)PTR_DAT_0234bcc8;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01022c14();
              lVar12 = *(long *)puVar10;
            }
            lVar12 = FUN_01c53464(lVar7,**(undefined8 **)(lVar12 + 0xb8),0);
            lVar13 = FUN_01d78f1c(plVar17,1);
            if ((lVar13 == 0) || (lVar12 == 0)) goto LAB_01d7a1dc;
            uVar2 = *(uint *)(lVar12 + 0x18);
            if (0 < (int)uVar2) {
              lVar1 = *(long *)(lVar13 + 0x10);
              lVar13 = *(long *)(lVar13 + 0x18);
              uVar18 = 0;
              uVar6 = 0;
LAB_01d7a0a8:
              if (uVar18 < uVar2) {
                plVar17 = (long *)(lVar12 + (long)(int)uVar18 * 8 + 0x20);
                if (*plVar17 == 0) goto LAB_01d7a1dc;
                lVar14 = FUN_01c54244(*plVar17,0);
                if (*(uint *)(lVar12 + 0x18) <= uVar18) goto LAB_01d7a1e0;
                *plVar17 = lVar14;
                thunk_FUN_0106e12c(plVar17,lVar14);
                if (lVar13 == 0) goto LAB_01d7a1dc;
                if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
                  uVar19 = 0;
                  uVar16 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
                  do {
                    if ((uVar16 <= uVar19) || (*(uint *)(lVar12 + 0x18) <= uVar18))
                    goto LAB_01d7a1e0;
                    lVar14 = *(long *)(lVar13 + 0x20 + uVar19 * 8);
                    if ((param_3 & 1) == 0) {
                      if (lVar14 == 0) goto LAB_01d7a1dc;
                      uVar16 = FUN_01c50924(lVar14,*plVar17,0);
                      if ((uVar16 & 1) != 0) goto LAB_01d7a154;
                    }
                    else {
                      iVar5 = FUN_01c4fae4(lVar14,*plVar17,5,0);
                      if (iVar5 == 0) goto LAB_01d7a154;
                    }
                    uVar16 = (ulong)*(uint *)(lVar13 + 0x18);
                    uVar19 = uVar19 + 1;
                    if ((long)(int)*(uint *)(lVar13 + 0x18) <= (long)uVar19) break;
                  } while( true );
                }
                uVar8 = 3;
                puVar15 = (undefined8 *)PTR_DAT_02358e78;
                goto LAB_01d79f18;
              }
LAB_01d7a1e0:
                    /* WARNING: Subroutine does not return */
              FUN_00fdc53c();
            }
            uVar6 = 0;
LAB_01d7a1a4:
            if (*(int *)(*(long *)PTR_DAT_0234bcc8 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            uVar8 = FUN_01d7aaec(param_1,uVar6);
            *param_4 = uVar8;
            thunk_FUN_0106e12c(param_4);
          }
          else {
            puVar10 = PTR_DAT_0234bcc8;
            if (*(int *)(*(long *)PTR_DAT_0234bcc8 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            uVar8 = OVRPlugin__get_positionSupported(param_1);
            if (*(int *)(*(long *)PTR_DAT_0234c0c0 + 0xe0) == 0) {
              thunk_FUN_01022c14(*(long *)PTR_DAT_0234c0c0);
            }
            uVar9 = FUN_01d22d48(0);
            if (*(int *)(*(long *)PTR_DAT_02351078 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            uVar8 = FUN_01c6d598(lVar7,uVar8,uVar9,0);
            if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
              thunk_FUN_01022c14();
            }
            uVar8 = FUN_01d7a5e8(param_1,uVar8);
            *param_4 = uVar8;
            thunk_FUN_0106e12c(param_4);
          }
          return 1;
        }
        uVar8 = 1;
        lVar7 = 0;
        puVar15 = (undefined8 *)PTR_DAT_02358e80;
LAB_01d79f18:
        FUN_01d7a4b8(param_4,uVar8,*puVar15,lVar7);
      }
      return 0;
    }
  }
  uVar8 = thunk_FUN_010303a8(puVar10);
  thunk_FUN_010303a8(PTR_DAT_0234bcd0);
  uVar9 = thunk_FUN_010400dc();
  uVar11 = thunk_FUN_010303a8(PTR_DAT_02358360);
  FUN_01c5e198(uVar9,uVar8,uVar11,0);
  uVar8 = thunk_FUN_010303a8(PTR_DAT_02358e88);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar9,uVar8);
LAB_01d7a154:
  if (lVar1 == 0) goto LAB_01d7a1dc;
  if ((uint)uVar19 < *(uint *)(lVar1 + 0x18)) {
    uVar2 = *(uint *)(lVar12 + 0x18);
    uVar18 = uVar18 + 1;
    uVar6 = *(ulong *)(lVar1 + 0x20 + uVar19 * 8) | uVar6;
    if ((int)uVar2 <= (int)uVar18) goto LAB_01d7a1a4;
    goto LAB_01d7a0a8;
  }
  goto LAB_01d7a1e0;
}


