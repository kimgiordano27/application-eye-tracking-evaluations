/*
FUNCTION_NAME: OVRManager$$add_ShareSpacesComplete
ENTRY_POINT: 02c01028
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__add_ShareSpacesComplete(void)

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
  ulong uVar14;
  undefined8 *unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *plVar15;
  uint uVar16;
  
  FUN_017fc350();
  FUN_017fc350(PTR_DAT_0380acb8);
  *(undefined1 *)(unaff_x23 + 0xdc1) = 1;
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  uVar6 = FUN_02be66d0();
  if ((uVar6 & 1) != 0) {
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar8 = thunk_FUN_01861bbc();
    uVar9 = thunk_FUN_01851c08(PTR_DAT_0380a198);
    FUN_02b3cbec(uVar8,uVar9,0);
    uVar9 = thunk_FUN_01851c08(PTR_DAT_0380acc0);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar8,uVar9);
  }
  lVar7 = *(long *)PTR_DAT_037f87b8;
  if (unaff_x20 == (long *)0x0) {
LAB_02c01088:
    plVar15 = (long *)0x0;
  }
  else {
    if (*(byte *)(*unaff_x20 + 0x130) < *(byte *)(lVar7 + 0x130)) goto LAB_02c01088;
    plVar15 = unaff_x20;
    if (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) != lVar7)
    {
      plVar15 = (long *)0x0;
    }
  }
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  puVar10 = PTR_DAT_03804850;
  if (plVar15 != (long *)0x0) {
    if (unaff_x20 == (long *)0x0) {
LAB_02c01514:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar6 = (**(code **)(*unaff_x20 + 0x568))();
    puVar10 = PTR_DAT_0380a190;
    if ((uVar6 & 1) != 0) {
      if (unaff_x22 == 0) {
        FUN_02c01788();
      }
      else {
        lVar7 = FUN_02a543c0();
        if (lVar7 == 0) goto LAB_02c01514;
        if (*(int *)(lVar7 + 0x10) != 0) {
          uVar4 = FUN_02a4b568(lVar7,0,0);
          if (*(int *)(*(long *)PTR_DAT_037f6f10 + 0xe0) == 0) {
            thunk_FUN_01843fdc(*(long *)PTR_DAT_037f6f10);
          }
          uVar6 = FUN_02b42df4(uVar4,0);
          if ((((uVar6 & 1) == 0) && (sVar3 = FUN_02a4b568(lVar7,0,0), sVar3 != 0x2d)) &&
             (sVar3 = FUN_02a4b568(lVar7,0,0), puVar10 = PTR_DAT_037f4790, sVar3 != 0x2b)) {
            lVar12 = *(long *)PTR_DAT_037f4790;
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
              lVar12 = *(long *)puVar10;
            }
            lVar7 = FUN_02a52960(lVar7,**(undefined8 **)(lVar12 + 0xb8),0);
            lVar12 = FUN_02c0023c(plVar15,1);
            if ((lVar12 == 0) || (lVar7 == 0)) goto LAB_02c01514;
            uVar2 = *(uint *)(lVar7 + 0x18);
            if (0 < (int)uVar2) {
              lVar1 = *(long *)(lVar12 + 0x10);
              lVar12 = *(long *)(lVar12 + 0x18);
              uVar16 = 0;
LAB_02c013e0:
              if (uVar16 < uVar2) {
                plVar15 = (long *)(lVar7 + (long)(int)uVar16 * 8 + 0x20);
                if (*plVar15 != 0) {
                  lVar13 = FUN_02a543c0(*plVar15,0);
                  if (*(uint *)(lVar7 + 0x18) <= uVar16) goto LAB_02c01518;
                  *plVar15 = lVar13;
                  thunk_FUN_0188fd20(plVar15,lVar13);
                  if (lVar12 != 0) {
                    if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
                      uVar6 = 0;
                      uVar14 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
                      do {
                        if ((uVar14 <= uVar6) || (*(uint *)(lVar7 + 0x18) <= uVar16))
                        goto LAB_02c01518;
                        lVar13 = *(long *)(lVar12 + 0x20 + uVar6 * 8);
                        if ((unaff_x21 & 1) == 0) {
                          if (lVar13 == 0) goto LAB_02c01514;
                          uVar14 = FUN_02a4f854(lVar13,*plVar15,0);
                          if ((uVar14 & 1) != 0) goto LAB_02c0148c;
                        }
                        else {
                          iVar5 = FUN_02a4e824(lVar13,*plVar15,5,0);
                          if (iVar5 == 0) goto LAB_02c0148c;
                        }
                        uVar14 = (ulong)*(uint *)(lVar12 + 0x18);
                        uVar6 = uVar6 + 1;
                        if ((long)(int)*(uint *)(lVar12 + 0x18) <= (long)uVar6) break;
                      } while( true );
                    }
                    goto LAB_02c01248;
                  }
                }
                goto LAB_02c01514;
              }
LAB_02c01518:
                    /* WARNING: Subroutine does not return */
              FUN_017fc5b0();
            }
LAB_02c014dc:
            if (*(int *)(*(long *)PTR_DAT_037f4790 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            uVar8 = FUN_02c01e20();
            *unaff_x19 = uVar8;
            thunk_FUN_0188fd20();
          }
          else {
            puVar10 = PTR_DAT_037f4790;
            if (*(int *)(*(long *)PTR_DAT_037f4790 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            uVar8 = FUN_02c01850();
            if (*(int *)(*(long *)PTR_DAT_037f4460 + 0xe0) == 0) {
              thunk_FUN_01843fdc(*(long *)PTR_DAT_037f4460);
            }
            uVar9 = FUN_02b954e8(0);
            if (*(int *)(*(long *)PTR_DAT_037f3df8 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            FUN_02b4c1b8(lVar7,uVar8,uVar9,0);
            if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            uVar8 = FUN_02c01914();
            *unaff_x19 = uVar8;
            thunk_FUN_0188fd20();
          }
          return 1;
        }
LAB_02c01248:
        FUN_02c017e4();
      }
      return 0;
    }
  }
  uVar8 = thunk_FUN_01851c08(puVar10);
  uVar8 = FUN_02c108dc(uVar8,0);
  thunk_FUN_01851c08(PTR_DAT_037f87a8);
  uVar9 = thunk_FUN_01861bbc();
  uVar11 = thunk_FUN_01851c08(PTR_DAT_0380a198);
  FUN_02b3cc64(uVar9,uVar8,uVar11,0);
  uVar8 = thunk_FUN_01851c08(PTR_DAT_0380acc0);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar9,uVar8);
LAB_02c0148c:
  if (lVar1 == 0) goto LAB_02c01514;
  if ((uint)uVar6 < *(uint *)(lVar1 + 0x18)) {
    uVar2 = *(uint *)(lVar7 + 0x18);
    uVar16 = uVar16 + 1;
    if ((int)uVar2 <= (int)uVar16) goto LAB_02c014dc;
    goto LAB_02c013e0;
  }
  goto LAB_02c01518;
}


