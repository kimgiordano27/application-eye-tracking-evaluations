/*
FUNCTION_NAME: OVRPlugin$$CreateDynamicObjectTrackerAsync
ENTRY_POINT: 01d95998
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


long * OVRPlugin__CreateDynamicObjectTrackerAsync(void)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar11;
  
  FUN_00fdc2e4();
  *(undefined1 *)(unaff_x21 + 0x891) = 1;
  plVar7 = unaff_x19;
  if (unaff_x20 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_023599f8 + 0x130);
    if ((*(byte *)(*unaff_x20 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_023599f8)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0();
    }
    plVar5 = (long *)unaff_x19[0xf];
    lVar11 = unaff_x20[0xf];
    if (plVar5 == (long *)0x0) {
      if (lVar11 == 0) {
        uVar6 = (**(code **)(*unaff_x19 + 0x138))();
        plVar7 = (long *)0x0;
        if ((uVar6 & 1) == 0) {
          plVar7 = unaff_x19;
        }
      }
      else if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
        uVar6 = 0;
        uVar10 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
        do {
          if (uVar10 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_00fdc53c();
          }
          uVar10 = (**(code **)(*unaff_x19 + 0x138))();
          if ((uVar10 & 1) != 0) goto LAB_01d95a00;
          uVar10 = (ulong)*(uint *)(lVar11 + 0x18);
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)(int)*(uint *)(lVar11 + 0x18));
      }
    }
    else if (lVar11 == 0) {
      uVar3 = FUN_0115fe90();
      if (uVar3 != 0xffffffff) {
        lVar11 = unaff_x19[0xf];
        if (lVar11 != 0) {
          if (*(int *)(lVar11 + 0x18) < 2) {
            thunk_FUN_010303a8(PTR_DAT_0234c170);
            uVar8 = thunk_FUN_010400dc();
            FUN_01d4a508(uVar8,0);
            uVar9 = thunk_FUN_010303a8(PTR_DAT_02359a08);
                    /* WARNING: Subroutine does not return */
            FUN_00fdc400(uVar8,uVar9);
          }
          if (*(int *)(lVar11 + 0x18) == 2) {
            return *(long **)(lVar11 + (ulong)(uVar3 == 0) * 8 + 0x20);
          }
          plVar7 = (long *)FUN_00fd830c();
          if ((unaff_x19[0xf] != 0) &&
             (lVar11 = FUN_00fdc388(*(undefined8 *)PTR_DAT_02359838,
                                    *(int *)(unaff_x19[0xf] + 0x18) + -1), plVar7 != (long *)0x0)) {
            plVar5 = plVar7 + 0xf;
            *plVar5 = lVar11;
            thunk_FUN_0106e12c(plVar5,lVar11);
            FUN_01d6bd80(unaff_x19[0xf],*plVar5,uVar3,0);
            lVar11 = unaff_x19[0xf];
            if (lVar11 != 0) {
              FUN_01d6ade4(lVar11,uVar3 + 1,plVar7[0xf],uVar3,*(int *)(lVar11 + 0x18) + ~uVar3,0);
              return plVar7;
            }
          }
        }
LAB_01d95c20:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
    }
    else {
      uVar6 = (**(code **)(*plVar5 + 0x138))(plVar5,lVar11,*(undefined8 *)(*plVar5 + 0x140));
      if ((uVar6 & 1) == 0) {
        iVar4 = FUN_01d9582c(uVar6,unaff_x19[0xf],unaff_x20[0xf]);
        if (iVar4 != -1) {
          plVar7 = (long *)FUN_00fd830c();
          if (((unaff_x19[0xf] != 0) && (unaff_x20[0xf] != 0)) &&
             (lVar11 = FUN_00fdc388(*(undefined8 *)PTR_DAT_02359838,
                                    *(int *)(unaff_x19[0xf] + 0x18) -
                                    *(int *)(unaff_x20[0xf] + 0x18)), plVar7 != (long *)0x0)) {
            plVar5 = plVar7 + 0xf;
            *plVar5 = lVar11;
            thunk_FUN_0106e12c(plVar5,lVar11);
            FUN_01d6bd80(unaff_x19[0xf],*plVar5,iVar4,0);
            if ((unaff_x20[0xf] != 0) && (lVar11 = unaff_x19[0xf], lVar11 != 0)) {
              iVar1 = iVar4 + *(int *)(unaff_x20[0xf] + 0x18);
              FUN_01d6ade4(lVar11,iVar1,plVar7[0xf],iVar4,*(int *)(lVar11 + 0x18) - iVar1,0);
              return plVar7;
            }
          }
          goto LAB_01d95c20;
        }
      }
      else {
LAB_01d95a00:
        plVar7 = (long *)0x0;
      }
    }
  }
  return plVar7;
}


