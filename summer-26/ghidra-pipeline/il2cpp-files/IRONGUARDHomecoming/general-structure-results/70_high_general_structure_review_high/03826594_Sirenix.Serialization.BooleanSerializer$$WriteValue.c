/*
FUNCTION_NAME: Sirenix.Serialization.BooleanSerializer$$WriteValue
ENTRY_POINT: 03826594
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03826798) */
/* WARNING: Removing unreachable block (ram,0x038268c0) */
/* WARNING: Removing unreachable block (ram,0x038268cc) */

void Sirenix_Serialization_BooleanSerializer__WriteValue(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 unaff_w19;
  undefined8 uVar9;
  undefined8 in_stack_000000a8;
  
  puVar1 = StringLiteral_2277;
  if (param_1 == 0) {
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403f2cc(*(undefined8 *)StringLiteral_2280,0);
  }
  else {
    if (*(int *)(*(long *)StringLiteral_2277 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar5 = FUN_038afe78(0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_038afed8(0);
      FUN_038af848();
    }
    puVar1 = 
    Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__;
    lVar6 = *(long *)
             Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
    ;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar6 = *(long *)puVar1;
    }
    puVar2 = StringLiteral_2274;
    uVar9 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
    if (*(int *)(*(long *)StringLiteral_2274 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)StringLiteral_2274);
    }
    lVar6 = FUN_038c2e70(unaff_w19,0);
    if (DAT_04837e09 == '\0') {
      thunk_FUN_01efb3a4(
                        Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                        );
      DAT_04837e09 = '\x01';
    }
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar7 = *(long *)puVar1;
    }
    if (lVar6 == 0) {
LAB_038268c8:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar8 = FUN_038c24b0(lVar6,*(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x108),0);
    uVar4 = in_stack_000000a8;
    puVar3 = StringLiteral_2275;
    if (*(int *)(*(long *)StringLiteral_2275 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)StringLiteral_2275);
    }
    System_Linq_Expressions_Interpreter_LabelInfo__FirstDefinition
              (&stack0x00000010,uVar9,uVar8,uVar4,0,0,1,0xffffffff);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar6 = *(long *)puVar1;
    }
    FUN_03826994(*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8),&stack0x00000080);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_038b3518(&stack0x00000010,0);
    uVar5 = FUN_038c14fc(unaff_w19,0);
    if ((uVar5 & 1) != 0) {
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar6 = *(long *)puVar1;
      }
      uVar9 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar2);
      }
      lVar6 = FUN_038c2eec(unaff_w19,0);
      if (DAT_04837e09 == '\0') {
        thunk_FUN_01efb3a4(
                          Method_UnityEngine_Component_GetComponent<OVRSystemPerfMetrics_OVRSystemPerfMetricsTcpServer>__
                          );
        DAT_04837e09 = '\x01';
      }
      lVar7 = *(long *)puVar1;
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar7 = *(long *)puVar1;
      }
      if (lVar6 == 0) goto LAB_038268c8;
      uVar8 = FUN_038c24b0(lVar6,*(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x108),0);
      uVar4 = in_stack_000000a8;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar3);
      }
      System_Linq_Expressions_Interpreter_LabelInfo__FirstDefinition
                (&stack0x00000010,uVar9,uVar8,uVar4,1,0,1,0xffffffff);
      lVar6 = *(long *)puVar1;
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar6 = *(long *)puVar1;
      }
      FUN_03826994(*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),&stack0x00000080);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_038b3518(&stack0x00000010,0);
    }
  }
  return;
}


