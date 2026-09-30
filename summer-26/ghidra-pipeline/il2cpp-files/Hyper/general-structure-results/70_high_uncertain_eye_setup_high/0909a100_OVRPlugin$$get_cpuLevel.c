/*
FUNCTION_NAME: OVRPlugin$$get_cpuLevel
ENTRY_POINT: 0909a100
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_cpuLevel(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 unaff_w21;
  long lVar8;
  long unaff_x22;
  undefined4 uStack000000000000000c;
  
  if ((*(byte *)(unaff_x22 + 0x228) & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac75968);
    FUN_04947ee4(PTR_DAT_0ac78c88);
    *(undefined1 *)(unaff_x22 + 0x228) = 1;
  }
  uStack000000000000000c = 0;
  FUN_0909cabc(param_1,param_2,unaff_w21,&stack0x0000000c,param_1 + 0x170,0);
  puVar1 = PTR_DAT_0ac75968;
  if (param_2 != (long *)0x0) {
    lVar5 = *param_2;
    lVar8 = *(long *)(param_1 + 400);
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0ac78c88) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0909a1b4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68(param_2,*(long *)PTR_DAT_0ac78c88,0);
LAB_0909a1b4:
    uVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
    lVar5 = *param_2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0909a210;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_04980e68(param_2,*(long *)puVar1,0);
LAB_0909a210:
    uVar2 = (*(code *)*puVar3)(param_2,puVar3[1]);
    if (lVar8 != 0) {
      FUN_090a0bd8(lVar8,uVar4,uVar2,uStack000000000000000c,*(undefined8 *)(param_1 + 0x170),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


