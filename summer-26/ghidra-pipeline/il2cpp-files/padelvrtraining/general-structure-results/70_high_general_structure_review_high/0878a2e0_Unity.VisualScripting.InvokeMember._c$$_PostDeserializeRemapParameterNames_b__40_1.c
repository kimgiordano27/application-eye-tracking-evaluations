/*
FUNCTION_NAME: Unity.VisualScripting.InvokeMember.<>c$$<PostDeserializeRemapParameterNames>b__40_1
ENTRY_POINT: 0878a2e0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_InvokeMember_<>c__<PostDeserializeRemapParameterNames>b__40_1
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long in_x9;
  ulong uVar4;
  int *in_x10;
  int *piVar5;
  long *unaff_x19;
  undefined4 unaff_w21;
  long unaff_x22;
  long *plVar6;
  long *unaff_x24;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 0x15) * 0x10 + 0x138);
      goto Unity_VisualScripting_MemberUnit__get_target;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_03d8f370();
Unity_VisualScripting_MemberUnit__get_target:
  (*(code *)*puVar2)();
  if (unaff_x22 == 0) {
LAB_0878a3e4:
    iVar1 = (**(code **)(*unaff_x19 + 0x3a8))();
    iVar1 = iVar1 + -1;
  }
  else {
    plVar6 = (long *)unaff_x19[6];
    if (plVar6 == (long *)0x0) goto LAB_0878a4a8;
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xe) * 0x10 + 0x138);
          goto LAB_0878a384;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03d8f370(plVar6,*unaff_x24,0xe);
LAB_0878a384:
    iVar1 = (*(code *)*puVar2)(plVar6);
    if (iVar1 != 3) goto LAB_0878a3e4;
    plVar6 = (long *)unaff_x19[6];
    if (plVar6 == (long *)0x0) goto LAB_0878a4a8;
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x15) * 0x10 + 0x138);
          goto LAB_0878a410;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03d8f370(plVar6,*unaff_x24,0x15);
LAB_0878a410:
    iVar1 = (*(code *)*puVar2)(plVar6);
  }
  plVar6 = (long *)unaff_x19[5];
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_09289070) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_0878a484;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03d8f370(plVar6,*(long *)PTR_DAT_09289070,3);
LAB_0878a484:
                    /* WARNING: Could not recover jumptable at 0x0878a4a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(plVar6,unaff_w21,iVar1,puVar2[1]);
    return;
  }
LAB_0878a4a8:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


