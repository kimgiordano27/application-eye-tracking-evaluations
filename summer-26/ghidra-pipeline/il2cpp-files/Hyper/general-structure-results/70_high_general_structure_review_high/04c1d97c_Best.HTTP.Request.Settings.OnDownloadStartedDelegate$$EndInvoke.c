/*
FUNCTION_NAME: Best.HTTP.Request.Settings.OnDownloadStartedDelegate$$EndInvoke
ENTRY_POINT: 04c1d97c
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_18;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Best_HTTP_Request_Settings_OnDownloadStartedDelegate__EndInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long lVar8;
  ulong uVar9;
  
  FUN_04947ee4(PTR_DAT_0ac0fa70);
  FUN_04947ee4(PTR_DAT_0ac09b30);
  FUN_04947ee4(PTR_DAT_0ac0b1e8);
  FUN_04947ee4(PTR_DAT_0ac18910);
  *(undefined1 *)(unaff_x19 + 0x22a) = 1;
  lVar4 = thunk_FUN_04983f60(*unaff_x21);
  FUN_08be6d48(lVar4,0);
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    lVar8 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x30);
    lVar5 = FUN_04947fd0(*(undefined8 *)PTR_DAT_0ac0fa70,2);
    if (lVar5 != 0) {
      if ((*(int *)(lVar5 + 0x18) == 0) ||
         (*(undefined2 *)(lVar5 + 0x20) = 0x3a, *(int *)(lVar5 + 0x18) == 1)) goto LAB_04c1dc1c;
      *(undefined2 *)(lVar5 + 0x22) = 0x2f;
      puVar2 = PTR_DAT_0ac18910;
      puVar1 = PTR_DAT_0ac09b30;
      if (lVar8 != 0) {
        lVar5 = FUN_08bdc73c(lVar8,lVar5,0);
        uVar9 = 0;
        do {
          if (uVar9 != 0) {
            if ((*(long *)(unaff_x20 + 0x10) == 0) || (lVar4 == 0)) goto LAB_04c1dc18;
            lVar8 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x30);
            uVar3 = FUN_08be0f4c(lVar4,0);
            if (lVar8 == 0) goto LAB_04c1dc18;
            uVar6 = FUN_08bdbafc(lVar8,uVar3,1,0);
            FUN_08be0754(lVar4,uVar6,0);
          }
          if (lVar5 == 0) goto LAB_04c1dc18;
          if (*(uint *)(lVar5 + 0x18) <= uVar9) goto LAB_04c1dc1c;
          if (lVar4 == 0) goto LAB_04c1dc18;
          FUN_08be0754(lVar4,*(undefined8 *)(lVar5 + 0x20 + uVar9 * 8),0);
          uVar9 = uVar9 + 1;
        } while (uVar9 != 4);
        plVar7 = (long *)FUN_04947fd0(*(undefined8 *)puVar1,5);
        if ((*(long *)(unaff_x20 + 0x10) != 0) && (plVar7 != (long *)0x0)) {
          lVar5 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
          if ((lVar5 != 0) &&
             (lVar8 = thunk_FUN_04983e64(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
          goto LAB_04c1dc20;
          if ((int)plVar7[3] == 0) goto LAB_04c1dc1c;
          plVar7[4] = lVar5;
          thunk_FUN_049ee3d8(plVar7 + 4,lVar5);
          if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_04c1dc18;
          lVar5 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x18);
          if ((lVar5 != 0) &&
             (lVar8 = thunk_FUN_04983e64(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
          goto LAB_04c1dc20;
          if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_04c1dc1c;
          plVar7[5] = lVar5;
          thunk_FUN_049ee3d8(plVar7 + 5,lVar5);
          if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_04c1dc18;
          lVar5 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x20);
          if ((lVar5 != 0) &&
             (lVar8 = thunk_FUN_04983e64(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
          goto LAB_04c1dc20;
          if (*(uint *)(plVar7 + 3) < 3) goto LAB_04c1dc1c;
          plVar7[6] = lVar5;
          thunk_FUN_049ee3d8(plVar7 + 6,lVar5);
          if (*(long *)(unaff_x20 + 0x10) == 0) goto LAB_04c1dc18;
          lVar5 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x28);
          if ((lVar5 != 0) &&
             (lVar8 = thunk_FUN_04983e64(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
LAB_04c1dc20:
            uVar6 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
            FUN_04948050(uVar6,0);
          }
          if ((*(uint *)(plVar7 + 3) & 0xfffffffc) != 0) {
            plVar7[7] = lVar5;
            thunk_FUN_049ee3d8(plVar7 + 7,lVar5);
            lVar5 = thunk_FUN_04983e64(lVar4,*(undefined8 *)(*plVar7 + 0x40));
            if (lVar5 == 0) goto LAB_04c1dc20;
            if (4 < *(uint *)(plVar7 + 3)) {
              plVar7[8] = lVar4;
              thunk_FUN_049ee3d8(plVar7 + 8,lVar4);
              FUN_08bda6b0(*(undefined8 *)puVar2,plVar7,0);
              return;
            }
          }
LAB_04c1dc1c:
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
      }
    }
  }
LAB_04c1dc18:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


