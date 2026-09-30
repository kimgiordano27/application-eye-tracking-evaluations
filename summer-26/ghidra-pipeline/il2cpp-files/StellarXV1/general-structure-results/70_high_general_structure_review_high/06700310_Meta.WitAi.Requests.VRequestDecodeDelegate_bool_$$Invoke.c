/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequestDecodeDelegate<bool>$$Invoke
ENTRY_POINT: 06700310
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Meta_WitAi_Requests_VRequestDecodeDelegate<bool>__Invoke
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *in_x10;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long *plVar10;
  
  do {
    in_x9 = in_x9 + -1;
    piVar9 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_040b1e00();
      goto LAB_06700338;
    }
    plVar10 = (long *)(in_x10 + 2);
    in_x10 = piVar9;
  } while (*plVar10 != param_3);
  puVar2 = (undefined8 *)(param_1 + (long)*piVar9 * 0x10 + 0x138);
LAB_06700338:
  iVar1 = (*(code *)*puVar2)();
  if (iVar1 == 1) {
    plVar10 = *(long **)(unaff_x20 + 0x20);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_040b1acc(lVar5);
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_067003e4;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar10,lVar5,0);
LAB_067003e4:
    UNRECOVERED_JUMPTABLE = (code *)*puVar2;
    uVar6 = puVar2[1];
  }
  else {
    lVar5 = *(long *)(unaff_x20 + 0x18);
    if (lVar5 == 0) {
      uVar6 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x30);
      FUN_03b08ec8(*(undefined8 *)(PTR_DAT_09285980 + 0xe0));
      plVar10 = (long *)FUN_0768890c(uVar6,0);
      FUN_03b0899c();
      uVar6 = (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
      uVar3 = thunk_FUN_040dedf8(PTR_DAT_092bba18);
      uVar4 = thunk_FUN_040dedf8(PTR_DAT_092bba20);
      uVar6 = FUN_074e691c(uVar3,uVar6,uVar4,0);
      thunk_FUN_040dedf8(PTR_DAT_0929cb88);
      uVar3 = thunk_FUN_040b4efc();
      FUN_07679464(uVar3,uVar6,0);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar3);
    }
    plVar10 = *(long **)(lVar5 + 0x40);
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x067003d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar10,uVar6);
  return;
}


