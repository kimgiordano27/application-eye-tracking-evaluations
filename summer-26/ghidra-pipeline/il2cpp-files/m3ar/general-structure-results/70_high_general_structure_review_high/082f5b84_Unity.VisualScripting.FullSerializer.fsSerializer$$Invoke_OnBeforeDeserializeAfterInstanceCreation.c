/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$Invoke_OnBeforeDeserializeAfterInstanceCreation
ENTRY_POINT: 082f5b84
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


void Unity_VisualScripting_FullSerializer_fsSerializer__Invoke_OnBeforeDeserializeAfterInstanceCreation
               (void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 in_w8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar6;
  long unaff_x21;
  float fVar7;
  undefined4 uVar8;
  float in_s3;
  float unaff_s8;
  float fVar9;
  float in_stack_00000018;
  
  *(undefined1 *)(unaff_x21 + 0xb55) = in_w8;
  uVar6 = *(undefined8 *)(unaff_x19 + 0x110);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  uVar2 = FUN_08589e5c(uVar6,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x128) == 0) goto LAB_082f5ce4;
  lVar3 = FUN_082fb63c(*(long *)(unaff_x19 + 0x128),0);
  if (lVar3 == 0) {
    return;
  }
  if (*(long *)(lVar3 + 0x50) == 0) {
    return;
  }
  if (*(int *)(lVar3 + 0x2c) == 0) {
    return;
  }
  if (*(int *)(*(long *)(lVar3 + 0x50) + 0x18) < *(int *)(lVar3 + 0x2c)) {
    return;
  }
  plVar4 = *(long **)(unaff_x19 + 0x128);
  if (plVar4 == (long *)0x0) goto LAB_082f5ce4;
  fVar7 = (float)(**(code **)(*plVar4 + 0x688))(plVar4,*(undefined8 *)(*plVar4 + 0x690));
  lVar3 = *(long *)(unaff_x19 + 0x128);
  if (lVar3 == 0) goto LAB_082f5ce4;
  iVar1 = *(int *)(lVar3 + 0x298);
  if (iVar1 < 0x401) {
    if (iVar1 == 0x200) goto LAB_082f5c60;
    fVar9 = 0.0;
    if (iVar1 == 0x400) {
      fVar9 = 1.0;
    }
  }
  else {
    if (iVar1 == 0x1000) {
      FUN_082fb894(&stack0x00000008,lVar3,0);
      lVar3 = *(long *)(unaff_x19 + 0x128);
      if (lVar3 == 0) goto LAB_082f5ce4;
      fVar7 = in_stack_00000018 + in_stack_00000018;
    }
    else {
      fVar9 = 0.0;
      if (iVar1 != 0x2000) goto FUN_082f5c64;
    }
LAB_082f5c60:
    fVar9 = 0.5;
  }
FUN_082f5c64:
  lVar3 = Unity_VisualScripting_AssemblyQualifiedNameParser_ParsedAssemblyQualifiedName__Replace
                    (lVar3,0);
  if ((*(long *)(unaff_x19 + 0x128) != 0) &&
     (lVar5 = Unity_VisualScripting_AssemblyQualifiedNameParser_ParsedAssemblyQualifiedName__Replace
                        (*(long *)(unaff_x19 + 0x128),0), lVar5 != 0)) {
    uVar8 = FUN_08597814(lVar5,0);
    if ((*(long *)(unaff_x19 + 0x110) != 0) &&
       (FUN_08597428(*(long *)(unaff_x19 + 0x110),0), lVar3 != 0)) {
      FUN_085978dc(uVar8,(unaff_s8 - fVar9) * (fVar7 - in_s3),lVar3,0);
      FUN_082f0070();
      return;
    }
  }
LAB_082f5ce4:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


