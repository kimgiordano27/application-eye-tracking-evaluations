/*
FUNCTION_NAME: System.Xml.XmlRawWriter$$WriteWhitespace
ENTRY_POINT: 01d4a6d0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Xml_XmlRawWriter__WriteWhitespace(ulong param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  long unaff_x22;
  ulong uVar8;
  long in_stack_00000008;
  
  if ((param_1 & 1) == 0) {
                    /* try { // try from 01d4a6d8 to 01e4a703 has its CatchHandler @ 01d4abc8 */
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_PointerInteractable<HandGrabInteractor,_HandGrabInteractable>_InjectOptionalPointableElement__
                      );
    thunk_FUN_00d48444(OVRPlugin_Hand_TypeInfo);
    *(undefined1 *)(unaff_x22 + 0x4f3) = 1;
  }
  lVar6 = FUN_01d41074(param_2);
  if (lVar6 != 0) {
    iVar1 = *(int *)(lVar6 + 0x18);
    lVar6 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,iVar1);
    if (unaff_x20 != 0) {
      uVar3 = FUN_01d55a40();
      uVar4 = FUN_01d56c38();
      puVar2 = OVRPlugin_Hand_TypeInfo;
      iVar1 = iVar1 + -1;
      if (-1 < iVar1) {
        uVar8 = (ulong)iVar1;
        do {
          uVar7 = FUN_01d56d24();
          if ((uVar7 & 1) != 0) {
            if ((*(long *)(param_2 + 0x70) == 0) ||
               (FUN_0132138c(*(long *)(param_2 + 0x70),uVar8 & 0xffffffff,&stack0x00000008,
                             *(undefined8 *)puVar2), in_stack_00000008 == 0))
            goto System_Xml_XmlRawWriter__OnRootElement;
            if ((*(uint *)(in_stack_00000008 + 0x28) & uVar4) == 0) {
              if (lVar6 == 0) goto System_Xml_XmlRawWriter__OnRootElement;
              if (*(uint *)(lVar6 + 0x18) <= uVar8)
              goto System_Xml_XmlRawWriter__WriteFullEndElement;
              uVar5 = 0xffffffff;
            }
            else {
              if (((*(long *)(param_2 + 0x70) == 0) ||
                  (FUN_0132138c(*(long *)(param_2 + 0x70),uVar8 & 0xffffffff,&stack0x00000008,
                                *(undefined8 *)puVar2), in_stack_00000008 == 0)) ||
                 (uVar5 = FUN_01d8cf60(in_stack_00000008,uVar3,0), lVar6 == 0))
              goto System_Xml_XmlRawWriter__OnRootElement;
              if (*(uint *)(lVar6 + 0x18) <= uVar8) {
System_Xml_XmlRawWriter__WriteFullEndElement:
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
            }
            *(undefined4 *)(lVar6 + 0x20 + uVar8 * 4) = uVar5;
          }
          uVar8 = uVar8 - 1;
        } while (-1 < (int)uVar8);
      }
      return lVar6;
    }
  }
System_Xml_XmlRawWriter__OnRootElement:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


