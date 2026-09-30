/*
FUNCTION_NAME: Unity.VisualScripting.InvokeMember$$Enter
ENTRY_POINT: 0647ac78
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_InvokeMember__Enter(void)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  code *in_x9;
  long *unaff_x19;
  long *unaff_x20;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *unaff_x23;
  long *unaff_x24;
  
code_r0x0647ac78:
  (*in_x9)();
LAB_0647ac7c:
  lVar7 = unaff_x19[9];
  if (lVar7 == unaff_x19[4]) {
    *unaff_x20 = 0;
    thunk_FUN_02f411dc();
    goto LAB_0647aca4;
  }
  do {
    if (lVar7 == 0) {
      return;
    }
    plVar8 = (long *)unaff_x19[6];
    if (plVar8 == (long *)0x0) goto LAB_0647acc0;
    lVar5 = *plVar8;
    lVar9 = unaff_x19[0xb];
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar4 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar4 + 0x19) * 0x10 + 0x138);
          goto LAB_0647ab0c;
        }
        uVar6 = uVar6 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02eea86c(plVar8,*unaff_x23,0x19);
LAB_0647ab0c:
    iVar1 = (*(code *)*puVar3)(plVar8,lVar7,puVar3[1]);
    if ((int)lVar9 < iVar1) {
      return;
    }
    if (unaff_x19[7] == 0) goto LAB_0647acc0;
    lVar7 = Unity_VisualScripting_InvokeMember__GetAnalyticsIdentifier();
    *unaff_x20 = lVar7;
    thunk_FUN_02f411dc();
    if (*unaff_x20 == 0) {
      return;
    }
    if ((unaff_x19[8] == 0) ||
       (plVar8 = (long *)Unity_VisualScripting_InvokeMember__GetAnalyticsIdentifier(),
       plVar8 == (long *)0x0)) goto LAB_0647acc0;
    if (*(long *)(*plVar8 + 0x40) != *(long *)(*unaff_x24 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440();
    }
    piVar4 = (int *)thunk_FUN_02ef195c();
    iVar1 = *piVar4;
    plVar8 = (long *)unaff_x19[6];
    *(int *)(unaff_x19 + 0xb) = iVar1 + 1;
    if (plVar8 == (long *)0x0) goto LAB_0647acc0;
    lVar7 = *plVar8;
    lVar9 = unaff_x19[9];
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar4 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar4 + 0x19) * 0x10 + 0x138);
          goto LAB_0647abdc;
        }
        uVar6 = uVar6 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02eea86c(plVar8,*unaff_x23,0x19);
LAB_0647abdc:
    iVar2 = (*(code *)*puVar3)(plVar8,lVar9,puVar3[1]);
    if (iVar2 <= iVar1 + 1) break;
LAB_0647aca4:
    lVar7 = *unaff_x20;
  } while( true );
  plVar8 = (long *)unaff_x19[6];
  if (plVar8 == (long *)0x0) {
LAB_0647acc0:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  lVar7 = *plVar8;
  lVar9 = unaff_x19[9];
  uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar6 != 0) {
    piVar4 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x23) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar4 + 5) * 0x10 + 0x138);
        goto LAB_0647ac50;
      }
      uVar6 = uVar6 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02eea86c(plVar8,*unaff_x23,5);
LAB_0647ac50:
  uVar6 = (*(code *)*puVar3)(plVar8,lVar9,puVar3[1]);
  if ((uVar6 & 1) == 0) goto code_r0x0647ac64;
  goto LAB_0647ac7c;
code_r0x0647ac64:
  in_x9 = *(code **)(*unaff_x19 + 0x3d8);
  goto code_r0x0647ac78;
}


