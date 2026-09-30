/*
FUNCTION_NAME: Meta.WitAi.WitRequest.PreSendRequestDelegate$$Invoke
ENTRY_POINT: 013af76c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined1  [16] Meta_WitAi_WitRequest_PreSendRequestDelegate__Invoke(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 unaff_x25;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  int iStack0000000000000008;
  
  while (lVar6 = unaff_x22, unaff_x22 != 0) {
    while( true ) {
      plVar7 = (long *)(lVar6 + 0x20);
      lVar8 = *plVar7;
      thunk_FUN_00d8e500();
      lVar9 = lVar6;
      if (lVar8 == 0) break;
      lVar6 = *plVar7;
      thunk_FUN_00d8e500();
      thunk_FUN_00d8e500();
      *(long *)(unaff_x20 + 0x18) = lVar6;
      if (lVar6 == 0) goto LAB_013af770;
    }
    do {
      iVar11 = *(int *)(lVar9 + 0x18);
      thunk_FUN_00d8e500();
      iVar10 = *(int *)(lVar9 + 0x18);
      if (iVar11 < 1) {
        thunk_FUN_00d8e500();
        thunk_FUN_00d8e500();
        iVar10 = iVar10 + -1;
        *(int *)(lVar9 + 0x18) = iVar10;
      }
      thunk_FUN_00d8e500();
      if ((0 < iVar10) || (iVar11 = *(int *)(lVar9 + 0x18), thunk_FUN_00d8e500(), iVar11 < -10)) {
        puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
        (*(code *)puVar5[2])(*puVar5,puVar5,lVar9,0,&stack0x00000008);
        iVar4 = iStack0000000000000008;
        iVar11 = *(int *)(lVar9 + 0x18);
        thunk_FUN_00d8e500();
        iVar11 = iVar4 - iVar11;
        iVar10 = 0;
        if (iVar4 != 0) {
          iVar10 = iVar11 / iVar4;
        }
        iVar11 = iVar11 - iVar10 * iVar4;
        if (iVar11 < 0) {
          iVar10 = *(int *)(lVar9 + 0x18);
          thunk_FUN_00d8e500();
          thunk_FUN_00d8e500();
          iVar11 = 0;
          *(int *)(lVar9 + 0x18) = iVar10 + -1;
        }
        if (0 < iVar4) {
          iVar10 = 0;
          do {
            lVar8 = *(long *)(lVar9 + 0x10);
            if (lVar8 == 0) goto LAB_013af770;
            iVar2 = 0;
            if (iVar4 != 0) {
              iVar2 = (iVar11 + iVar10) / iVar4;
            }
            uVar1 = (iVar11 + iVar10) - iVar2 * iVar4;
            if (*(uint *)(lVar8 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            if ((*(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) == 0) &&
               (lVar8 = FUN_00d744e8(), lVar8 == 0)) {
              iVar11 = *(int *)(lVar9 + 0x18);
              thunk_FUN_00d8e500();
              uVar3 = iVar11 - 1;
              thunk_FUN_00d8e500();
              *(uint *)(lVar9 + 0x18) = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
              auVar12._8_4_ = uVar1;
              auVar12._0_8_ = lVar9;
              auVar12._12_4_ = 0;
              return auVar12;
            }
            iVar10 = iVar10 + 1;
          } while (iVar4 != iVar10);
        }
      }
      lVar9 = *(long *)(lVar9 + 0x28);
      thunk_FUN_00d8e500();
    } while (lVar9 != 0);
    if (*(long *)(lVar6 + 0x10) == 0) break;
    if ((*(byte *)(**(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    unaff_x22 = thunk_FUN_00d62348();
    if (unaff_x22 == 0) break;
    puVar5 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50);
    _iStack0000000000000008 = unaff_x25;
    (*(code *)puVar5[2])(*puVar5,puVar5,unaff_x22,&stack0x00000008,lVar6);
    thunk_FUN_00d8e500();
    lVar6 = FUN_00d744e8(plVar7,unaff_x22,0);
    if (lVar6 == 0) {
      thunk_FUN_00d8e500();
      *(long *)(unaff_x20 + 0x18) = unaff_x22;
    }
    else {
      unaff_x22 = *(long *)(unaff_x20 + 0x18);
    }
    thunk_FUN_00d8e500();
  }
LAB_013af770:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


