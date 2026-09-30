/*
FUNCTION_NAME: Sentry.Protocol.Metrics.CounterMetric.<SerializedStatsdValues>d__8$$System.IDisposable.Dispose
ENTRY_POINT: 09351a5c
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void Sentry_Protocol_Metrics_CounterMetric_<SerializedStatsdValues>d__8__System_IDisposable_Dispose
               (long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  do {
    uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_09351aa4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68();
LAB_09351aa4:
    uVar3 = (*(code *)*puVar2)();
    iVar1 = FUN_09347e34(uVar3,0x1f,0);
    if (iVar1 == 0) {
LAB_09351b30:
      thunk_FUN_049ae08c(PTR_DAT_0ac44ef8);
      FUN_0433a0d0();
      uVar3 = FUN_09302240(0);
      thunk_FUN_049ae08c(PTR_DAT_0ac09cb8);
      uVar4 = thunk_FUN_04983f60();
      uVar5 = thunk_FUN_049ae08c(PTR_DAT_0ac89850);
      FUN_08cbd67c(uVar4,uVar3,uVar5,0);
      uVar3 = thunk_FUN_049ae08c(PTR_DAT_0ac89858);
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar4,uVar3);
    }
    lVar6 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_09351b10;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68();
LAB_09351b10:
    lVar6 = (*(code *)*puVar2)();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    unaff_w21 = unaff_w21 + 1;
    if (*(char *)(lVar6 + 0xb0) == '\0') goto LAB_09351b30;
    lVar6 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_09351a44;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_04980e68();
LAB_09351a44:
    iVar1 = (*(code *)*puVar2)();
    if (iVar1 <= unaff_w21) {
      uVar3 = FUN_09351ef8(in_stack_00000008);
      *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
      thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x10),0);
      uVar3 = FUN_09352580(in_stack_00000018);
      *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
      thunk_FUN_049ee3d8((undefined8 *)(unaff_x19 + 0x18),0);
      return;
    }
    param_1 = *unaff_x20;
  } while( true );
}


