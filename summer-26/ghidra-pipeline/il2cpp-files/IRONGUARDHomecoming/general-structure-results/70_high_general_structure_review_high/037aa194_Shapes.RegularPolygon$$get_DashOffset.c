/*
FUNCTION_NAME: Shapes.RegularPolygon$$get_DashOffset
ENTRY_POINT: 037aa194
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


void Shapes_RegularPolygon__get_DashOffset(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *puVar7;
  undefined1 (*pauVar8) [16];
  long unaff_x21;
  undefined1 auVar9 [16];
  
  thunk_FUN_01efb3a4(StringLiteral_471);
  thunk_FUN_01efb3a4(StringLiteral_472);
  thunk_FUN_01efb3a4(StringLiteral_473);
  *(undefined1 *)(unaff_x21 + 0x540) = 1;
  puVar1 = Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar4 = StringLiteral_473;
  puVar3 = StringLiteral_472;
  puVar2 = StringLiteral_471;
  uVar5 = FUN_04039f00(0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)puVar1);
  }
  uVar5 = System_Threading_OSSpecificSynchronizationContext__Post(*(undefined8 *)puVar2,uVar5,0);
  uVar5 = System_Threading_OSSpecificSynchronizationContext__Post(uVar5,*(undefined8 *)puVar3,0);
  puVar7 = (undefined8 *)(unaff_x19 + 0x50);
  *puVar7 = uVar5;
  thunk_FUN_01f51358(puVar7);
  uVar5 = System_Threading_OSSpecificSynchronizationContext__Post(*puVar7,*(undefined8 *)puVar4,0);
  *(undefined8 *)(unaff_x19 + 0x58) = uVar5;
  thunk_FUN_01f51358();
  *(undefined1 *)(unaff_x19 + 0x4c) = 0;
  Shapes_RegularPolygon__set_DashSnap();
  FUN_04074284();
  auVar9 = FUN_037aa364();
  pauVar8 = (undefined1 (*) [16])(unaff_x19 + 0x68);
  *pauVar8 = auVar9;
  thunk_FUN_01f51358(pauVar8,0);
  if (*(long *)(unaff_x19 + 0x70) != 0) {
    if (*(long *)*pauVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar5 = FUN_030f28e4(*(long *)*pauVar8,0,
                         *(undefined8 *)Method_UnityEngine_GameObject_AddComponent<SoundEmitter>__);
    uVar6 = FUN_0340eec4(uVar5,0);
    if ((uVar6 & 1) == 0) {
      FUN_037aa604();
      return;
    }
  }
  return;
}


