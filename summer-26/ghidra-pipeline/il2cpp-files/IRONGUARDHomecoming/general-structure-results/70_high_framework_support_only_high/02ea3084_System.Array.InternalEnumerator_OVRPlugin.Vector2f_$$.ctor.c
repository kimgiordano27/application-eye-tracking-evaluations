/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector2f>$$.ctor
ENTRY_POINT: 02ea3084
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02ea31fc) */

void System_Array_InternalEnumerator<OVRPlugin_Vector2f>___ctor(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long unaff_x21;
  char cStack000000000000000c;
  
  uVar5 = **(undefined8 **)(param_1 + 0xb8);
  cStack000000000000000c = '\0';
  FUN_035ce230(uVar5,&stack0x0000000c,0);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ecaf44();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ecaf44();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ecaf44();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ecaf44();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  uVar2 = FUN_02ee84d0(lVar1);
  if ((uVar2 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar5 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(Method_UnityEngine_ExpressionEvaluator_TryParse<double>__);
    uVar4 = thunk_FUN_01efb3a4(
                              Method_System_Linq_Expressions_ExpressionStringBuilder_VisitExpressions<Expression>__
                              );
    FUN_034efd98(uVar5,uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5);
  }
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  FUN_02ee82a4();
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ecaf44();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ecaf44();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ecaf44();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ecaf44();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_01ecaf44();
  }
  FUN_02741ef0(lVar1);
  if (cStack000000000000000c != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar5,0);
  }
  return;
}


