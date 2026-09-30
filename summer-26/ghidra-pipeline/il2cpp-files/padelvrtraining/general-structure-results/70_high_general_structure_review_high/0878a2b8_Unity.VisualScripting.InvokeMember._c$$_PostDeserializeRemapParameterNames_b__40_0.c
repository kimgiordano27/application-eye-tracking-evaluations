/*
FUNCTION_NAME: Unity.VisualScripting.InvokeMember.<>c$$<PostDeserializeRemapParameterNames>b__40_0
ENTRY_POINT: 0878a2b8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_InvokeMember_<>c__<PostDeserializeRemapParameterNames>b__40_0
               (code *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x22;
  long *plVar7;
  long *unaff_x24;
  
  uVar1 = (*param_1)();
  plVar7 = (long *)unaff_x19[6];
  if (plVar7 == (long *)0x0) goto LAB_0878a4a8;
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x24) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x15) * 0x10 + 0x138);
        goto Unity_VisualScripting_MemberUnit__get_target;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_03d8f370(plVar7,*unaff_x24,0x15);
Unity_VisualScripting_MemberUnit__get_target:
  (*(code *)*puVar3)(plVar7);
  if (unaff_x22 == 0) {
LAB_0878a3e4:
    iVar2 = (**(code **)(*unaff_x19 + 0x3a8))();
    iVar2 = iVar2 + -1;
  }
  else {
    plVar7 = (long *)unaff_x19[6];
    if (plVar7 == (long *)0x0) goto LAB_0878a4a8;
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xe) * 0x10 + 0x138);
          goto LAB_0878a384;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(plVar7,*unaff_x24,0xe);
LAB_0878a384:
    iVar2 = (*(code *)*puVar3)(plVar7);
    if (iVar2 != 3) goto LAB_0878a3e4;
    plVar7 = (long *)unaff_x19[6];
    if (plVar7 == (long *)0x0) goto LAB_0878a4a8;
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x24) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0x15) * 0x10 + 0x138);
          goto LAB_0878a410;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(plVar7,*unaff_x24,0x15);
LAB_0878a410:
    iVar2 = (*(code *)*puVar3)(plVar7);
  }
  plVar7 = (long *)unaff_x19[5];
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09289070) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
          goto LAB_0878a484;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03d8f370(plVar7,*(long *)PTR_DAT_09289070,3);
LAB_0878a484:
                    /* WARNING: Could not recover jumptable at 0x0878a4a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar3)(plVar7,uVar1,iVar2,puVar3[1]);
    return;
  }
LAB_0878a4a8:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


