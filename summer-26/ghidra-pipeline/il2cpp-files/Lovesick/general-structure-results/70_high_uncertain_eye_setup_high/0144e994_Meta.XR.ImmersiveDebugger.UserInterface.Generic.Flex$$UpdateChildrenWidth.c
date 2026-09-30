/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Flex$$UpdateChildrenWidth
ENTRY_POINT: 0144e994
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Generic_Flex__UpdateChildrenWidth(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  long unaff_x19;
  uint uVar12;
  
  puVar4 = StringLiteral_302;
  if (unaff_x19 == 0) {
LAB_0144eae4:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar6 = FUN_0268cee0(*(undefined4 *)(unaff_x19 + 0x34),0);
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<VisualElementFocusRing_FocusRingRecord>_Dispose__
  ;
  if ((lVar6 == 0) || (*(int *)(lVar6 + 0x10) == 0)) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar10 = *(undefined8 *)puVar2;
LAB_0144eab8:
    FUN_026610e4(uVar10,0);
    uVar10 = 0;
  }
  else {
    uVar7 = FUN_0269f3a4(0);
    puVar2 = PTR_DAT_033ebfe0;
    if ((uVar7 & 1) != 0) {
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar8 = FUN_0112fb9c(*(undefined8 *)puVar2);
      puVar3 = PTR_DAT_033f5e20;
      puVar2 = PTR_DAT_033f5de8;
      if (lVar8 == 0) goto LAB_0144eae4;
      uVar11 = *(uint *)(lVar8 + 0x18);
      if (0 < (int)uVar11) {
        uVar12 = 0;
        bVar1 = false;
        do {
          if (uVar11 <= uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          lVar9 = *(long *)(lVar8 + (long)(int)uVar12 * 8 + 0x20);
          if ((lVar9 == 0) || (lVar9 = FUN_0268fd4c(lVar9,0), lVar9 == 0)) goto LAB_0144eae4;
          iVar5 = FUN_0268ac68(lVar9,0);
          uVar11 = *(uint *)(lVar8 + 0x18);
          uVar12 = uVar12 + 1;
          bVar1 = (bool)(bVar1 | iVar5 == *(int *)(unaff_x19 + 0x34));
        } while ((int)uVar12 < (int)uVar11);
        if (bVar1) {
          uVar10 = FUN_01600424(*(undefined8 *)puVar3,lVar6,*(undefined8 *)puVar2,0);
          lVar6 = *(long *)puVar4;
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar6);
          }
          goto LAB_0144eab8;
        }
      }
    }
    uVar10 = 1;
  }
  return uVar10;
}


