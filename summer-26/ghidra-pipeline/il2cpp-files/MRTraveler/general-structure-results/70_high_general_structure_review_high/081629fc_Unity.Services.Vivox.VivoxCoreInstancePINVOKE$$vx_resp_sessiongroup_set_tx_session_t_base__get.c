/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_sessiongroup_set_tx_session_t_base__get
ENTRY_POINT: 081629fc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_set_tx_session_t_base__get
               (int *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  long *plVar10;
  undefined8 in_stack_00000008;
  
  if ((DAT_09428fab & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08f04cb0);
                    /* try { // try from 08162a24 to 08262a47 has its CatchHandler @ 08163360 */
    FUN_03c8f898(PTR_DAT_08e69550);
    FUN_03c8f898(PTR_DAT_08f04cb8);
    FUN_03c8f898(PTR_DAT_08f04a00);
                    /* try { // try from 08162a48 to 08263377 has its CatchHandler @ 0816250c */
    FUN_03c8f898(PTR_DAT_08e83800);
    FUN_03c8f898(PTR_DAT_08f04cc0);
    FUN_03c8f898(PTR_DAT_08e83808);
    FUN_03c8f898(PTR_DAT_08e83810);
    FUN_03c8f898(PTR_DAT_08e83818);
    FUN_03c8f898(PTR_DAT_08f04cc8);
    FUN_03c8f898(PTR_DAT_08f04cd0);
    DAT_09428fab = 1;
  }
  puVar1 = PTR_DAT_08e69550;
  in_stack_00000008 = 0;
  if (*param_1 == 0) {
    in_stack_00000008 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    lVar9 = *(long *)(param_1 + 0xc);
    uVar2 = FUN_06f7ad2c(*(undefined8 *)(param_1 + 8),0);
    if ((uVar2 & 1) != 0) {
      thunk_FUN_03ce5214(PTR_DAT_08e80470);
      uVar5 = thunk_FUN_03cf5234();
      uVar6 = thunk_FUN_03ce5214(PTR_DAT_08f04a78);
      uVar3 = thunk_FUN_03ce5214(PTR_DAT_08f04a38);
      FUN_070660f4(uVar5,uVar6,uVar3,0);
      uVar6 = thunk_FUN_03ce5214(PTR_DAT_08f04cd8);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar5,uVar6);
    }
    uVar2 = FUN_06f7ad2c(*(undefined8 *)(param_1 + 10),0);
    if ((uVar2 & 1) != 0) {
      thunk_FUN_03ce5214(PTR_DAT_08e80470);
      uVar5 = thunk_FUN_03cf5234();
      uVar6 = thunk_FUN_03ce5214(PTR_DAT_08f03468);
      uVar3 = thunk_FUN_03ce5214(PTR_DAT_08f04a38);
      FUN_070660f4(uVar5,uVar6,uVar3,0);
      uVar6 = thunk_FUN_03ce5214(PTR_DAT_08f04cd8);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar5,uVar6);
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar6 = *(undefined8 *)(param_1 + 10);
    uVar3 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f04cc0);
    FUN_08178be8(uVar3,uVar5,uVar6,0,0,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    plVar10 = *(long **)(lVar9 + 0x10);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = *plVar10;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08e83800) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_08162b7c;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_03cf1348(plVar10,*(long *)PTR_DAT_08e83800,0);
LAB_08162b7c:
    plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
    uVar5 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08f04cb8);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    lVar7 = *plVar10;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08f04a00) {
          lVar7 = lVar7 + (long)(*piVar8 + 0xd) * 0x10 + 0x138;
          goto LAB_08162bfc;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    lVar7 = FUN_03cf1348(plVar10,*(long *)PTR_DAT_08f04a00,0xd);
LAB_08162bfc:
    FUN_04d6ed0c(uVar5,plVar10,*(undefined8 *)(lVar7 + 8),0);
    lVar9 = FUN_048bd440(lVar9,*(undefined8 *)PTR_DAT_08f04cd0,uVar5,uVar3,
                         *(undefined8 *)PTR_DAT_08f04cc8);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    in_stack_00000008 = FUN_05c0b91c(lVar9,*(undefined8 *)PTR_DAT_08e83818);
    uVar2 = FUN_05ac7d38(&stack0x00000008,*(undefined8 *)PTR_DAT_08e83810);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xe) = in_stack_00000008;
      thunk_FUN_03d233cc(param_1 + 0xe,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      FUN_04523d98(param_1 + 2,&stack0x00000008,param_1,*(undefined8 *)PTR_DAT_08f04cb0);
      return;
    }
  }
  FUN_05ac7d7c(&stack0x00000008,*(undefined8 *)PTR_DAT_08e83808);
  *param_1 = -2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_0701e078(param_1 + 2,0);
  return;
}


