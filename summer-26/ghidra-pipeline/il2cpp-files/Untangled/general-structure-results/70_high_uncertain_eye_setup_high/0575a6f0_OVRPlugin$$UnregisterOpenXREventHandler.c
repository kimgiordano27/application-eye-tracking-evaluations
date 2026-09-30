/*
FUNCTION_NAME: OVRPlugin$$UnregisterOpenXREventHandler
ENTRY_POINT: 0575a6f0
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_16;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UnregisterOpenXREventHandler(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined4 *puVar9;
  ulong uVar10;
  long *unaff_x19;
  undefined8 unaff_x21;
  long unaff_x22;
  ulong uVar11;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar12;
  long *unaff_x25;
  long lVar13;
  
  thunk_FUN_02ebbee0();
  if (unaff_x24 != 0) {
    uVar4 = FUN_046e8380();
    if ((**(long **)(*unaff_x25 + 0xb8) != 0) &&
       (lVar5 = FUN_046e8380(**(long **)(*unaff_x25 + 0xb8),uVar4,*(undefined8 *)PTR_DAT_06d59780),
       puVar1 = PTR_DAT_06d02bd0, lVar5 != 0)) {
      lVar13 = *(long *)(lVar5 + 0x10);
      lVar6 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,1);
      if (lVar6 != 0) {
        lVar7 = thunk_FUN_02ef170c();
        if (lVar7 == 0) {
LAB_0575a9f4:
          uVar4 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
          FUN_02f07f94(uVar4,0);
        }
        if (*(int *)(lVar6 + 0x18) == 0) {
LAB_0575a9f0:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        *(undefined8 *)(lVar6 + 0x20) = unaff_x21;
        thunk_FUN_02f411dc();
        if (((lVar13 != 0) &&
            (plVar8 = (long *)FUN_056e4c2c(lVar13,lVar6,0), puVar3 = PTR_DAT_06d59778,
            puVar2 = PTR_DAT_06d59770, unaff_x23 != 0)) && (plVar8 != (long *)0x0)) {
          if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)PTR_DAT_06d02bc8 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440();
          }
          puVar9 = (undefined4 *)thunk_FUN_02ef195c();
          *(undefined4 *)(unaff_x23 + 0x10) = *puVar9;
          uVar12 = *(undefined8 *)(lVar5 + 0x18);
          uVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar3);
          FUN_0513bd28();
          lVar5 = FUN_03a2c33c(uVar12,uVar4,*(undefined8 *)puVar2);
          if (unaff_x19 != (long *)0x0) {
            (**(code **)(*unaff_x19 + 0x578))();
            if (unaff_x22 != 0) {
              FUN_056fd0d8();
            }
            (**(code **)(*unaff_x19 + 0x5d8))();
            if (lVar5 != 0) {
              (**(code **)(*unaff_x19 + 0x698))();
              if ((*(long *)(lVar5 + 0x20) == 0) || (*(long *)(*(long *)(lVar5 + 0x20) + 0x18) == 0)
                 ) {
LAB_0575a9c0:
                    /* WARNING: Could not recover jumptable at 0x0575a9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*unaff_x19 + 0x588))();
                return;
              }
              lVar6 = *(long *)(lVar5 + 0x28);
              lVar5 = FUN_02f07f14(*(undefined8 *)puVar1,1);
              if (lVar5 != 0) {
                lVar13 = thunk_FUN_02ef170c();
                if (lVar13 == 0) goto LAB_0575a9f4;
                if (*(int *)(lVar5 + 0x18) == 0) goto LAB_0575a9f0;
                *(undefined8 *)(lVar5 + 0x20) = unaff_x21;
                thunk_FUN_02f411dc();
                if (lVar6 != 0) {
                  lVar5 = FUN_056e4c2c(lVar6,lVar5,0);
                  if (lVar5 == 0) {
                    lVar6 = 0;
                  }
                  else {
                    uVar4 = *(undefined8 *)puVar1;
                    lVar6 = thunk_FUN_02ef170c(lVar5,uVar4);
                    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02f08440(lVar5,uVar4);
                    }
                  }
                  if (unaff_x22 != 0) {
                    FUN_056fd0d8();
                  }
                  (**(code **)(*unaff_x19 + 0x5d8))();
                  (**(code **)(*unaff_x19 + 0x598))();
                  if (lVar6 != 0) {
                    if (0 < (int)*(ulong *)(lVar6 + 0x18)) {
                      uVar11 = 0;
                      uVar10 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
                      do {
                        if (uVar10 <= uVar11) goto LAB_0575a9f0;
                        FUN_0569d504();
                        uVar10 = (ulong)*(uint *)(lVar6 + 0x18);
                        uVar11 = uVar11 + 1;
                      } while ((long)uVar11 < (long)(int)*(uint *)(lVar6 + 0x18));
                    }
                    (**(code **)(*unaff_x19 + 0x5a8))();
                    goto LAB_0575a9c0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


