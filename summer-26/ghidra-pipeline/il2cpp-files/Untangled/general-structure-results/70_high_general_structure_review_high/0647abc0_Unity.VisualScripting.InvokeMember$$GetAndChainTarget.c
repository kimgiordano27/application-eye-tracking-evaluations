/*
FUNCTION_NAME: Unity.VisualScripting.InvokeMember$$GetAndChainTarget
ENTRY_POINT: 0647abc0
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_InvokeMember__GetAndChainTarget
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *plVar7;
  long unaff_x22;
  long lVar8;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  
code_r0x0647abc0:
  puVar3 = (undefined8 *)FUN_02eea86c(unaff_x21,param_2,param_3);
  do {
    iVar1 = (*(code *)*puVar3)(unaff_x21,unaff_x22,puVar3[1]);
    if (unaff_w25 < iVar1) {
LAB_0647aca4:
      lVar5 = *unaff_x20;
    }
    else {
      plVar7 = (long *)unaff_x19[6];
      if (plVar7 == (long *)0x0) goto LAB_0647acc0;
      lVar5 = *plVar7;
      lVar8 = unaff_x19[9];
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar2 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar2 + -2) == *unaff_x23) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar2 + 5) * 0x10 + 0x138);
            goto LAB_0647ac50;
          }
          uVar6 = uVar6 - 1;
          piVar2 = piVar2 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_02eea86c(plVar7,*unaff_x23,5);
LAB_0647ac50:
      uVar6 = (*(code *)*puVar3)(plVar7,lVar8,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        (**(code **)(*unaff_x19 + 0x3d8))();
      }
      lVar5 = unaff_x19[9];
      if (lVar5 == unaff_x19[4]) {
        *unaff_x20 = 0;
        thunk_FUN_02f411dc();
        goto LAB_0647aca4;
      }
    }
    if (lVar5 == 0) {
      return;
    }
    plVar7 = (long *)unaff_x19[6];
    if (plVar7 == (long *)0x0) {
LAB_0647acc0:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar4 = *plVar7;
    lVar8 = unaff_x19[0xb];
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar2 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar2 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar2 + 0x19) * 0x10 + 0x138);
          goto LAB_0647ab0c;
        }
        uVar6 = uVar6 - 1;
        piVar2 = piVar2 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02eea86c(plVar7,*unaff_x23,0x19);
LAB_0647ab0c:
    iVar1 = (*(code *)*puVar3)(plVar7,lVar5,puVar3[1]);
    if ((int)lVar8 < iVar1) {
      return;
    }
    if (unaff_x19[7] == 0) goto LAB_0647acc0;
    lVar5 = Unity_VisualScripting_InvokeMember__GetAnalyticsIdentifier();
    *unaff_x20 = lVar5;
    thunk_FUN_02f411dc();
    if (*unaff_x20 == 0) {
      return;
    }
    if ((unaff_x19[8] == 0) ||
       (plVar7 = (long *)Unity_VisualScripting_InvokeMember__GetAnalyticsIdentifier(),
       plVar7 == (long *)0x0)) goto LAB_0647acc0;
    if (*(long *)(*plVar7 + 0x40) != *(long *)(*unaff_x24 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440();
    }
    piVar2 = (int *)thunk_FUN_02ef195c();
    unaff_x21 = (long *)unaff_x19[6];
    unaff_w25 = *piVar2 + 1;
    *(int *)(unaff_x19 + 0xb) = unaff_w25;
    if (unaff_x21 == (long *)0x0) goto LAB_0647acc0;
    lVar5 = *unaff_x21;
    unaff_x22 = unaff_x19[9];
    param_2 = *unaff_x23;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 == 0) break;
    piVar2 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    while (*(long *)(piVar2 + -2) != param_2) {
      uVar6 = uVar6 - 1;
      piVar2 = piVar2 + 4;
      if (uVar6 == 0) goto LAB_0647abbc;
    }
    puVar3 = (undefined8 *)(lVar5 + (long)(*piVar2 + 0x19) * 0x10 + 0x138);
  } while( true );
LAB_0647abbc:
  param_3 = 0x19;
  goto code_r0x0647abc0;
}


