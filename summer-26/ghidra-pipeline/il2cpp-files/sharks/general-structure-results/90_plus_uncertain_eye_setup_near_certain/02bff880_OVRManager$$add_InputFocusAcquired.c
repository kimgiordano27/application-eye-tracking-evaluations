/*
FUNCTION_NAME: OVRManager$$add_InputFocusAcquired
ENTRY_POINT: 02bff880
PROGRAM: sharks-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_17;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRManager__add_InputFocusAcquired(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  uint uVar18;
  long unaff_x24;
  long *plVar19;
  long unaff_x25;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  undefined *puVar9;
  
  while ((uint)unaff_x24 < *(uint *)(unaff_x19 + 3)) {
    if ((long *)*unaff_x22 == (long *)0x0) {
LAB_02bffdd0:
      thunk_FUN_01851c08(PTR_DAT_037f87a8);
      uVar14 = thunk_FUN_01861bbc();
      uVar7 = thunk_FUN_01851c08(PTR_DAT_03804850);
      puVar9 = PTR_DAT_0380a268;
LAB_02bffdfc:
      uVar8 = thunk_FUN_01851c08(puVar9);
      FUN_02b3cc64(uVar14,uVar7,uVar8,0);
      goto LAB_02bffe14;
    }
    lVar13 = *(long *)*unaff_x22;
    bVar1 = *(byte *)(*(long *)PTR_DAT_03804aa8 + 0x130);
    if ((*(byte *)(lVar13 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar13 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03804aa8))
    goto LAB_02bffdd0;
    do {
      unaff_x24 = unaff_x24 + 1;
      unaff_x22 = unaff_x22 + 1;
      uVar18 = (uint)unaff_x24;
      if ((int)*(uint *)(unaff_x21 + 0x18) <= (int)uVar18) {
        if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x18) == 0)) {
          thunk_FUN_01851c08(PTR_DAT_037f87a8);
          uVar14 = thunk_FUN_01861bbc();
          uVar7 = thunk_FUN_01851c08(PTR_DAT_0380abb8);
          puVar9 = PTR_DAT_037f89c0;
          goto LAB_02bffdfc;
        }
        lVar13 = FUN_02bf1b10();
        if (lVar13 == 0) goto LAB_02bffdcc;
        uVar14 = *(undefined8 *)PTR_DAT_0380aad0;
        plVar4 = (long *)thunk_FUN_01861ac0(lVar13,uVar14);
        puVar9 = PTR_DAT_037f2c78;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_017fc944(lVar13,uVar14);
        }
        lVar13 = plVar4[3];
        if ((int)lVar13 < 1) goto LAB_02bffc4c;
        uVar18 = 0;
        uVar22 = 0;
        goto LAB_02bff938;
      }
      if (*(uint *)(unaff_x21 + 0x18) <= uVar18) goto LAB_02bffdc8;
      plVar4 = *(long **)(unaff_x25 + unaff_x24 * 8);
      if ((plVar4 == (long *)0x0) ||
         (lVar13 = (**(code **)(*plVar4 + 0x308))(plVar4,*(undefined8 *)(*plVar4 + 0x310)),
         unaff_x19 == (long *)0x0)) goto LAB_02bffdcc;
      if ((lVar13 != 0) &&
         (lVar11 = thunk_FUN_01861ac0(lVar13,*(undefined8 *)(*unaff_x19 + 0x40)), lVar11 == 0))
      goto LAB_02bffe2c;
      if (*(uint *)(unaff_x19 + 3) <= uVar18) goto LAB_02bffdc8;
      *unaff_x22 = lVar13;
      thunk_FUN_0188fd20(unaff_x22,lVar13);
      if (*(uint *)(unaff_x19 + 3) <= uVar18) goto LAB_02bffdc8;
      if (*unaff_x22 == 0) goto LAB_02bffdcc;
      uVar21 = FUN_02be741c(*unaff_x22,0);
    } while ((uVar21 & 1) != 0);
  }
LAB_02bffdc8:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
LAB_02bff938:
  do {
    if ((uint)lVar13 <= uVar22) goto LAB_02bffdc8;
    plVar19 = plVar4 + (long)(int)uVar22 + 4;
    plVar5 = (long *)*plVar19;
    if (((plVar5 == (long *)0x0) ||
        (lVar13 = (**(code **)(*plVar5 + 0x398))(plVar5,*(undefined8 *)(*plVar5 + 0x3a0)),
        lVar13 == 0)) || (unaff_x19 == (long *)0x0)) goto LAB_02bffdcc;
    iVar3 = (int)unaff_x19[3];
    iVar12 = (int)*(undefined8 *)(lVar13 + 0x18);
    if (iVar12 == iVar3) {
      if (iVar12 < 1) {
        iVar12 = 0;
      }
      else {
        if (iVar12 == 0) goto LAB_02bffdc8;
        uVar21 = 0;
        while( true ) {
          plVar5 = *(long **)(lVar13 + 0x20 + uVar21 * 8);
          if (plVar5 == (long *)0x0) goto LAB_02bffdcc;
          plVar5 = (long *)(**(code **)(*plVar5 + 0x1d8))(plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
          uVar20 = (uint)uVar21;
          if ((*(uint *)(unaff_x19 + 3) <= uVar20) || (*(uint *)(lVar13 + 0x18) <= uVar20))
          goto LAB_02bffdc8;
          uVar6 = System_AppDomain__GetData
                            (unaff_x19[uVar21 + 4],*(undefined8 *)(lVar13 + 0x20 + uVar21 * 8),0);
          if ((uVar6 & 1) == 0) {
            uVar14 = *(undefined8 *)PTR_DAT_037fa3c0;
            if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            uVar14 = FUN_02bddb5c(uVar14,0);
            uVar6 = FUN_02be66d0(plVar5,uVar14,0);
            if ((uVar6 & 1) == 0) {
              if (*(uint *)(unaff_x19 + 3) <= uVar20) goto LAB_02bffdc8;
              plVar16 = (long *)unaff_x19[uVar21 + 4];
              if (plVar16 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)PTR_DAT_03804aa8 + 0x130);
                if ((bVar1 <= *(byte *)(*plVar16 + 0x130)) &&
                   (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) ==
                    *(long *)PTR_DAT_03804aa8)) {
                  if (*(uint *)(plVar4 + 3) <= uVar22) goto LAB_02bffdc8;
                  plVar10 = (long *)*plVar19;
                  if (plVar10 == (long *)0x0) goto LAB_02bffbb8;
                  bVar1 = *(byte *)(*(long *)PTR_DAT_037fc238 + 0x130);
                  if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_037fc238)) goto LAB_02bffbb8;
                  plVar16 = (long *)FUN_02b13274(plVar16,plVar10,0);
                  lVar11 = *(long *)puVar9;
                  if (*(int *)(lVar11 + 0xe0) == 0) {
                    thunk_FUN_01843fdc(lVar11);
                  }
                  uVar6 = FUN_02be66d0(plVar16,0,0);
                  if ((uVar6 & 1) != 0) goto LAB_02bffbb8;
                }
              }
              if (plVar5 == (long *)0x0) goto LAB_02bffdcc;
              uVar6 = FUN_02be8a80(plVar5,0);
              if ((uVar6 & 1) == 0) {
                uVar6 = (**(code **)(*plVar5 + 0x288))
                                  (plVar5,plVar16,*(undefined8 *)(*plVar5 + 0x290));
              }
              else {
                if ((plVar16 == (long *)0x0) ||
                   (lVar11 = (**(code **)(*plVar16 + 0x308))
                                       (plVar16,*(undefined8 *)(*plVar16 + 0x310)), lVar11 == 0))
                goto LAB_02bffdcc;
                uVar6 = FUN_02be741c(lVar11,0);
                if ((uVar6 & 1) == 0) goto LAB_02bffbb8;
                uVar14 = (**(code **)(*plVar16 + 0x308))(plVar16,*(undefined8 *)(*plVar16 + 0x310));
                uVar7 = (**(code **)(*plVar5 + 0x308))(plVar5,*(undefined8 *)(*plVar5 + 0x310));
                if (*(int *)(*(long *)PTR_DAT_0380a318 + 0xe0) == 0) {
                  thunk_FUN_01843fdc(*(long *)PTR_DAT_0380a318);
                }
                uVar6 = FUN_02bffe74(uVar14,uVar7);
              }
              if ((uVar6 & 1) == 0) goto LAB_02bffbb8;
            }
          }
          uVar21 = uVar21 + 1;
          if ((int)unaff_x19[3] <= (int)(uint)uVar21) break;
          if (*(uint *)(lVar13 + 0x18) <= (uint)uVar21) goto LAB_02bffdc8;
        }
        uVar21 = (ulong)(uVar20 + 1);
LAB_02bffbb8:
        iVar12 = (int)uVar21;
        iVar3 = (int)unaff_x19[3];
      }
      if (iVar12 == iVar3) {
        uVar20 = *(uint *)(plVar4 + 3);
        if (uVar20 <= uVar22) goto LAB_02bffdc8;
        lVar13 = *plVar19;
        if (lVar13 != 0) {
          lVar11 = thunk_FUN_01861ac0(lVar13,*(undefined8 *)(*plVar4 + 0x40));
          if (lVar11 == 0) {
LAB_02bffe2c:
            uVar14 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
            FUN_017fc474(uVar14,0);
          }
          uVar20 = *(uint *)(plVar4 + 3);
        }
        if (uVar20 <= uVar18) goto LAB_02bffdc8;
        lVar11 = (long)(int)uVar18;
        plVar4[lVar11 + 4] = lVar13;
        uVar18 = uVar18 + 1;
        thunk_FUN_0188fd20(plVar4 + lVar11 + 4,lVar13);
      }
    }
    lVar13 = plVar4[3];
    uVar22 = uVar22 + 1;
  } while ((int)uVar22 < (int)lVar13);
  if (uVar18 == 0) {
LAB_02bffc4c:
    lVar13 = 0;
  }
  else {
    if (uVar18 == 1) {
      if ((int)lVar13 == 0) goto LAB_02bffdc8;
    }
    else {
      if (unaff_x19 == (long *)0x0) {
LAB_02bffdcc:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      lVar13 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f5118,(int)unaff_x19[3]);
      lVar11 = unaff_x19[3];
      if (0 < (int)lVar11) {
        if (lVar13 == 0) goto LAB_02bffdcc;
        uVar22 = *(uint *)(lVar13 + 0x18);
        uVar21 = 0;
        do {
          if (uVar22 <= uVar21) goto LAB_02bffdc8;
          *(int *)(lVar13 + 0x20 + uVar21 * 4) = (int)uVar21;
          uVar21 = uVar21 + 1;
        } while ((long)uVar21 < (long)(int)lVar11);
      }
      if ((int)uVar18 < 2) {
        uVar22 = 0;
      }
      else {
        lVar11 = 0;
        uVar22 = 0;
        bVar2 = false;
        do {
          if (((uint)plVar4[3] <= uVar22) || ((plVar4[3] & 0xffffffffU) <= lVar11 + 1U))
          goto LAB_02bffdc8;
          lVar15 = plVar4[lVar11 + 5];
          lVar17 = plVar4[(long)(int)uVar22 + 4];
          if (*(int *)(*(long *)PTR_DAT_0380a318 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          iVar3 = FUN_02bfce0c(lVar17,lVar13,0,lVar15,lVar13,0);
          if (iVar3 == 0) {
            bVar2 = true;
          }
          else if (iVar3 == 2) {
            bVar2 = false;
            uVar22 = (int)lVar11 + 1;
          }
          lVar11 = lVar11 + 1;
        } while ((ulong)uVar18 - 1 != lVar11);
        if (bVar2) {
          thunk_FUN_01851c08(PTR_DAT_03803f28);
          uVar14 = thunk_FUN_01861bbc();
          uVar7 = thunk_FUN_01851c08(PTR_DAT_038045f0);
          FUN_02b0d074(uVar14,uVar7,0);
LAB_02bffe14:
          uVar7 = thunk_FUN_01851c08(PTR_DAT_0380ac48);
                    /* WARNING: Subroutine does not return */
          FUN_017fc474(uVar14,uVar7);
        }
      }
      if (*(uint *)(plVar4 + 3) <= uVar22) goto LAB_02bffdc8;
      plVar4 = plVar4 + (int)uVar22;
    }
    lVar13 = plVar4[4];
  }
  return lVar13;
}


