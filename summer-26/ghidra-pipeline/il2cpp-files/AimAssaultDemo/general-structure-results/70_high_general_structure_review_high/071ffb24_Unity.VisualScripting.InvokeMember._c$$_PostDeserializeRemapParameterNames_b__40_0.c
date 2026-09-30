/*
FUNCTION_NAME: Unity.VisualScripting.InvokeMember.<>c$$<PostDeserializeRemapParameterNames>b__40_0
ENTRY_POINT: 071ffb24
PROGRAM: AimAssaultDemo-libil2cpp.so
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
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *in_x10;
  int *piVar9;
  long *unaff_x20;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar4 = (undefined8 *)(param_1 + (long)(*in_x10 + 8) * 0x10 + 0x138);
      goto LAB_071ffb70;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar4 = (undefined8 *)FUN_0377596c();
LAB_071ffb70:
  uVar2 = (*(code *)*puVar4)();
  puVar1 = System_Collections_Generic_ICollection<Edge>_TypeInfo;
  uVar3 = 0;
  if (unaff_x20 != (long *)0x0) {
    lVar6 = *unaff_x20;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)System_Collections_Generic_ICollection<ControlOutput>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 8) * 0x10 + 0x138);
          goto LAB_071ffbe4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c();
LAB_071ffbe4:
    uVar3 = (*(code *)*puVar4)();
  }
  lVar6 = thunk_FUN_037787d0();
  if (lVar6 != 0) {
    lVar6 = *(long *)puVar1;
    plVar5 = (long *)thunk_FUN_037787d0();
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54();
    }
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x14) * 0x10 + 0x138);
          goto LAB_071ffc70;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c(plVar5,lVar6,0x14);
LAB_071ffc70:
    (*(code *)*puVar4)(plVar5,uVar2,puVar4[1]);
    lVar6 = thunk_FUN_037787d0();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54();
    }
    lVar6 = *(long *)puVar1;
    plVar5 = (long *)thunk_FUN_037787d0();
    if (plVar5 != (long *)0x0) {
      lVar7 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x16) * 0x10 + 0x138);
            goto Unity_VisualScripting_MemberUnit_<GetAotStubs>d__15___ctor;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_0377596c(plVar5,lVar6,0x16);
Unity_VisualScripting_MemberUnit_<GetAotStubs>d__15___ctor:
                    /* WARNING: Could not recover jumptable at 0x071ffd18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar5,uVar3,puVar4[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373bb54();
}


