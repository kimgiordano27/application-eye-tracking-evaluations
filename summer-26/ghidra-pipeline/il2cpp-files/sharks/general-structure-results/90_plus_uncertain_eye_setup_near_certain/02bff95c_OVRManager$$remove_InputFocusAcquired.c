/*
FUNCTION_NAME: OVRManager$$remove_InputFocusAcquired
ENTRY_POINT: 02bff95c
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


long OVRManager__remove_InputFocusAcquired(long param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  int iVar11;
  long unaff_x19;
  long *unaff_x20;
  long lVar12;
  uint unaff_w23;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long *unaff_x24;
  long unaff_x25;
  ulong uVar16;
  uint unaff_w27;
  long *unaff_x29;
  
  do {
    if ((param_1 == 0) || (unaff_x19 == 0)) goto LAB_02bffdcc;
    iVar3 = *(int *)(unaff_x19 + 0x18);
    iVar11 = (int)*(undefined8 *)(param_1 + 0x18);
    if (iVar11 == iVar3) {
      if (iVar11 < 1) {
        iVar11 = 0;
      }
      else {
        if (iVar11 == 0) goto LAB_02bffdc8;
        uVar16 = 0;
        while( true ) {
          plVar4 = *(long **)(param_1 + 0x20 + uVar16 * 8);
          if (plVar4 == (long *)0x0) goto LAB_02bffdcc;
          plVar4 = (long *)(**(code **)(*plVar4 + 0x1d8))(plVar4,*(undefined8 *)(*plVar4 + 0x1e0));
          uVar10 = (uint)uVar16;
          if ((*(uint *)(unaff_x19 + 0x18) <= uVar10) || (*(uint *)(param_1 + 0x18) <= uVar10))
          goto LAB_02bffdc8;
          uVar5 = System_AppDomain__GetData
                            (*(undefined8 *)(unaff_x25 + uVar16 * 8),
                             *(undefined8 *)(param_1 + 0x20 + uVar16 * 8),0);
          if ((uVar5 & 1) == 0) {
            uVar13 = *(undefined8 *)PTR_DAT_037fa3c0;
            if (*(int *)(*unaff_x29 + 0xe0) == 0) {
              thunk_FUN_01843fdc();
            }
            uVar13 = FUN_02bddb5c(uVar13,0);
            uVar5 = FUN_02be66d0(plVar4,uVar13,0);
            if ((uVar5 & 1) == 0) {
              if (*(uint *)(unaff_x19 + 0x18) <= uVar10) goto LAB_02bffdc8;
              plVar14 = *(long **)(unaff_x25 + uVar16 * 8);
              if (plVar14 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)PTR_DAT_03804aa8 + 0x130);
                if ((bVar1 <= *(byte *)(*plVar14 + 0x130)) &&
                   (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) ==
                    *(long *)PTR_DAT_03804aa8)) {
                  if (*(uint *)(unaff_x20 + 3) <= unaff_w27) goto LAB_02bffdc8;
                  plVar9 = (long *)*unaff_x24;
                  if (plVar9 == (long *)0x0) goto LAB_02bffbb8;
                  bVar1 = *(byte *)(*(long *)PTR_DAT_037fc238 + 0x130);
                  if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
                      *(long *)PTR_DAT_037fc238)) goto LAB_02bffbb8;
                  plVar14 = (long *)FUN_02b13274(plVar14,plVar9,0);
                  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                    thunk_FUN_01843fdc(*unaff_x29);
                  }
                  uVar5 = FUN_02be66d0(plVar14,0,0);
                  if ((uVar5 & 1) != 0) goto LAB_02bffbb8;
                }
              }
              if (plVar4 == (long *)0x0) goto LAB_02bffdcc;
              uVar5 = FUN_02be8a80(plVar4,0);
              if ((uVar5 & 1) == 0) {
                uVar5 = (**(code **)(*plVar4 + 0x288))
                                  (plVar4,plVar14,*(undefined8 *)(*plVar4 + 0x290));
              }
              else {
                if ((plVar14 == (long *)0x0) ||
                   (lVar6 = (**(code **)(*plVar14 + 0x308))
                                      (plVar14,*(undefined8 *)(*plVar14 + 0x310)), lVar6 == 0))
                goto LAB_02bffdcc;
                uVar5 = FUN_02be741c(lVar6,0);
                if ((uVar5 & 1) == 0) goto LAB_02bffbb8;
                uVar13 = (**(code **)(*plVar14 + 0x308))(plVar14,*(undefined8 *)(*plVar14 + 0x310));
                uVar7 = (**(code **)(*plVar4 + 0x308))(plVar4,*(undefined8 *)(*plVar4 + 0x310));
                if (*(int *)(*(long *)PTR_DAT_0380a318 + 0xe0) == 0) {
                  thunk_FUN_01843fdc(*(long *)PTR_DAT_0380a318);
                }
                uVar5 = FUN_02bffe74(uVar13,uVar7);
              }
              if ((uVar5 & 1) == 0) goto LAB_02bffbb8;
            }
          }
          uVar16 = uVar16 + 1;
          if (*(int *)(unaff_x19 + 0x18) <= (int)(uint)uVar16) break;
          if (*(uint *)(param_1 + 0x18) <= (uint)uVar16) goto LAB_02bffdc8;
        }
        uVar16 = (ulong)(uVar10 + 1);
LAB_02bffbb8:
        iVar11 = (int)uVar16;
        iVar3 = *(int *)(unaff_x19 + 0x18);
      }
      if (iVar11 == iVar3) {
        uVar10 = *(uint *)(unaff_x20 + 3);
        if (uVar10 <= unaff_w27) goto LAB_02bffdc8;
        lVar6 = *unaff_x24;
        if (lVar6 != 0) {
          lVar8 = thunk_FUN_01861ac0(lVar6,*(undefined8 *)(*unaff_x20 + 0x40));
          if (lVar8 == 0) {
            uVar13 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
            FUN_017fc474(uVar13,0);
          }
          uVar10 = *(uint *)(unaff_x20 + 3);
        }
        if (uVar10 <= unaff_w23) goto LAB_02bffdc8;
        lVar8 = (long)(int)unaff_w23;
        unaff_x20[lVar8 + 4] = lVar6;
        unaff_w23 = unaff_w23 + 1;
        thunk_FUN_0188fd20(unaff_x20 + lVar8 + 4,lVar6);
      }
    }
    unaff_w27 = unaff_w27 + 1;
    uVar10 = (uint)unaff_x20[3];
    if ((int)uVar10 <= (int)unaff_w27) {
      if (unaff_w23 == 0) {
        return 0;
      }
      if (unaff_w23 == 1) {
        if (uVar10 != 0) goto LAB_02bffda4;
        goto LAB_02bffdc8;
      }
      if (unaff_x19 != 0) {
        lVar6 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f5118,*(undefined4 *)(unaff_x19 + 0x18));
        iVar3 = (int)*(undefined8 *)(unaff_x19 + 0x18);
        if (iVar3 < 1) goto LAB_02bffca8;
        if (lVar6 != 0) {
          uVar10 = *(uint *)(lVar6 + 0x18);
          uVar16 = 0;
          break;
        }
      }
LAB_02bffdcc:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if (uVar10 <= unaff_w27) goto LAB_02bffdc8;
    unaff_x24 = unaff_x20 + (long)(int)unaff_w27 + 4;
    plVar4 = (long *)*unaff_x24;
    if (plVar4 == (long *)0x0) goto LAB_02bffdcc;
    param_1 = (**(code **)(*plVar4 + 0x398))(plVar4,*(undefined8 *)(*plVar4 + 0x3a0));
  } while( true );
  while( true ) {
    *(int *)(lVar6 + 0x20 + uVar16 * 4) = (int)uVar16;
    uVar16 = uVar16 + 1;
    if ((long)iVar3 <= (long)uVar16) break;
    if (uVar10 <= uVar16) goto LAB_02bffdc8;
  }
LAB_02bffca8:
  if ((int)unaff_w23 < 2) {
    uVar10 = 0;
  }
  else {
    lVar8 = 0;
    uVar10 = 0;
    bVar2 = false;
    do {
      if (((uint)unaff_x20[3] <= uVar10) || ((unaff_x20[3] & 0xffffffffU) <= lVar8 + 1U))
      goto LAB_02bffdc8;
      lVar12 = unaff_x20[lVar8 + 5];
      lVar15 = unaff_x20[(long)(int)uVar10 + 4];
      if (*(int *)(*(long *)PTR_DAT_0380a318 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      iVar3 = FUN_02bfce0c(lVar15,lVar6,0,lVar12,lVar6,0);
      if (iVar3 == 0) {
        bVar2 = true;
      }
      else if (iVar3 == 2) {
        bVar2 = false;
        uVar10 = (int)lVar8 + 1;
      }
      lVar8 = lVar8 + 1;
    } while ((ulong)unaff_w23 - 1 != lVar8);
    if (bVar2) {
      thunk_FUN_01851c08(PTR_DAT_03803f28);
      uVar13 = thunk_FUN_01861bbc();
      uVar7 = thunk_FUN_01851c08(PTR_DAT_038045f0);
      FUN_02b0d074(uVar13,uVar7,0);
      uVar7 = thunk_FUN_01851c08(PTR_DAT_0380ac48);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar13,uVar7);
    }
  }
  if (uVar10 < *(uint *)(unaff_x20 + 3)) {
    unaff_x20 = unaff_x20 + (int)uVar10;
LAB_02bffda4:
    return unaff_x20[4];
  }
LAB_02bffdc8:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


