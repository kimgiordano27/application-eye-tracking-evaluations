/*
FUNCTION_NAME: OVRPlugin$$TestBoundaryNode
ENTRY_POINT: 02c1e344
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__TestBoundaryNode(void)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar8;
  
  lVar3 = FUN_017f7fb4();
  lVar7 = *(long *)(unaff_x20 + 0x78);
  uVar6 = *unaff_x19;
  if (*(long *)(unaff_x21 + 0x78) == 0) {
    if (lVar7 == 0) {
      lVar7 = FUN_017fc3f4(uVar6,2);
      if (lVar7 != 0) {
        lVar4 = thunk_FUN_01861ac0();
        if (lVar4 != 0) {
          if (*(int *)(lVar7 + 0x18) != 0) {
            *(long *)(lVar7 + 0x20) = unaff_x21;
            thunk_FUN_0188fd20();
            lVar4 = thunk_FUN_01861ac0();
            if (lVar4 == 0) goto LAB_02c1e57c;
            if (1 < *(uint *)(lVar7 + 0x18)) {
              *(long *)(lVar7 + 0x28) = unaff_x20;
              thunk_FUN_0188fd20();
              if (lVar3 != 0) {
                *(long *)(lVar3 + 0x78) = lVar7;
                goto LAB_02c1e558;
              }
              goto LAB_02c1e570;
            }
          }
LAB_02c1e588:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
LAB_02c1e57c:
        uVar6 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar6,0);
      }
    }
    else {
      lVar7 = FUN_017fc3f4(uVar6,*(int *)(lVar7 + 0x18) + 1);
      if (lVar3 != 0) {
        plVar8 = (long *)(lVar3 + 0x78);
        *plVar8 = lVar7;
        thunk_FUN_0188fd20(plVar8,lVar7);
        lVar7 = *plVar8;
        if (lVar7 != 0) {
          lVar4 = thunk_FUN_01861ac0();
          if (lVar4 == 0) goto LAB_02c1e57c;
          if (*(int *)(lVar7 + 0x18) == 0) goto LAB_02c1e588;
          *(long *)(lVar7 + 0x20) = unaff_x21;
          thunk_FUN_0188fd20((long *)(lVar7 + 0x20));
          lVar7 = *(long *)(unaff_x20 + 0x78);
          if (lVar7 != 0) {
            lVar4 = *plVar8;
            uVar2 = *(undefined4 *)(lVar7 + 0x18);
            uVar5 = 1;
            goto LAB_02c1e448;
          }
        }
      }
    }
  }
  else {
    iVar1 = *(int *)(*(long *)(unaff_x21 + 0x78) + 0x18);
    if (lVar7 == 0) {
      lVar7 = FUN_017fc3f4(uVar6,iVar1 + 1);
      if (lVar3 != 0) {
        plVar8 = (long *)(lVar3 + 0x78);
        *plVar8 = lVar7;
        thunk_FUN_0188fd20(plVar8,lVar7);
        lVar7 = *(long *)(unaff_x21 + 0x78);
        if (lVar7 != 0) {
          FUN_02bf1608(lVar7,0,*plVar8,0,*(undefined4 *)(lVar7 + 0x18),0);
          lVar7 = *plVar8;
          if (lVar7 != 0) {
            lVar4 = thunk_FUN_01861ac0();
            if (lVar4 != 0) {
              if ((int)*(long *)(lVar7 + 0x18) != 0) {
                *(long *)(lVar7 + ((*(long *)(lVar7 + 0x18) << 0x20) + -0x100000000 >> 0x1d) + 0x20)
                     = unaff_x20;
LAB_02c1e558:
                thunk_FUN_0188fd20();
                return lVar3;
              }
              goto LAB_02c1e588;
            }
            goto LAB_02c1e57c;
          }
        }
      }
    }
    else {
      lVar7 = FUN_017fc3f4(uVar6,*(int *)(lVar7 + 0x18) + iVar1);
      if (lVar3 != 0) {
        plVar8 = (long *)(lVar3 + 0x78);
        *plVar8 = lVar7;
        thunk_FUN_0188fd20(plVar8,lVar7);
        lVar7 = *(long *)(unaff_x21 + 0x78);
        if (lVar7 != 0) {
          FUN_02bf1608(lVar7,0,*plVar8,0,*(undefined4 *)(lVar7 + 0x18),0);
          if ((*(long *)(unaff_x21 + 0x78) != 0) &&
             (lVar7 = *(long *)(unaff_x20 + 0x78), lVar7 != 0)) {
            lVar4 = *plVar8;
            uVar5 = *(undefined4 *)(*(long *)(unaff_x21 + 0x78) + 0x18);
            uVar2 = *(undefined4 *)(lVar7 + 0x18);
LAB_02c1e448:
            FUN_02bf1608(lVar7,0,lVar4,uVar5,uVar2,0);
            return lVar3;
          }
        }
      }
    }
  }
LAB_02c1e570:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


