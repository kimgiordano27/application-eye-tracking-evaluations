/*
FUNCTION_NAME: OVRPlugin$$GetEyeFrustum
ENTRY_POINT: 04f5ac3c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 119
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__GetEyeFrustum(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long in_x9;
  long lVar5;
  long *unaff_x19;
  long unaff_x20;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 unaff_s8;
  undefined1 in_stack_00000000 [16];
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  long *in_stack_00000060;
  
  FUN_04f0d798(&stack0x00000000 + 4,*(undefined8 *)(unaff_x20 + 0x18),in_x9 + 0x20,0);
  plVar2 = in_stack_00000060;
  puVar1 = 
  System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo;
  lVar3 = *(long *)
           System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
  ;
  in_stack_00000040 = in_stack_00000000._4_8_;
  uStack0000000000000054 = in_stack_00000018;
  uStack000000000000004c = in_stack_00000010;
  uVar7 = in_stack_00000010;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *(long *)puVar1;
  }
  if ((*(long *)(unaff_x20 + 0x20) == 0) || (plVar2 == (long *)0x0)) goto LAB_04f5af8c;
  (**(code **)(*plVar2 + 0x1a8))(**(undefined4 **)(lVar3 + 0xb8),plVar2,&stack0x00000040);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((lVar3 == 0) || (lVar4 = *(long *)(lVar3 + 0x10), lVar4 == 0)) goto LAB_04f5af8c;
  lVar3 = *(long *)(lVar3 + 0x18);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    if (lVar3 == 0) goto LAB_04f5af8c;
    if (*(char *)(lVar3 + 0x10) != '\0') {
      lVar4 = *unaff_x19;
      if (lVar4 == 0) goto LAB_04f5af8c;
      *(undefined1 *)(lVar4 + 0x10) = 1;
      if (*(long *)(lVar4 + 0x18) == 0) goto LAB_04f5af8c;
      FUN_04f5b230(*(long *)(lVar4 + 0x18),*(undefined8 *)(lVar3 + 0x18),0);
      lVar3 = *unaff_x19;
      if ((lVar3 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto LAB_04f5af8c;
      lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x18);
      goto joined_r0x04f5aed0;
    }
  }
  else {
    if (lVar3 == 0) goto LAB_04f5af8c;
    lVar5 = *unaff_x19;
    if (*(char *)(lVar3 + 0x10) == '\0') {
      if (lVar5 == 0) goto LAB_04f5af8c;
      *(undefined1 *)(lVar5 + 0x10) = 1;
      if (*(long *)(lVar5 + 0x18) == 0) goto LAB_04f5af8c;
      FUN_04f5b230(*(long *)(lVar5 + 0x18),*(undefined8 *)(lVar4 + 0x18),0);
      lVar3 = *unaff_x19;
      if ((lVar3 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto LAB_04f5af8c;
      lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10);
joined_r0x04f5aed0:
      if (lVar4 == 0) goto LAB_04f5af8c;
      FUN_04f0d164(lVar3 + 0x20,lVar4 + 0x20,0);
    }
    else {
      if (lVar5 == 0) goto LAB_04f5af8c;
      *(undefined1 *)(lVar5 + 0x10) = 1;
      if (*(long *)(lVar5 + 0x18) == 0) goto LAB_04f5af8c;
      FUN_04f5b230(*(long *)(lVar5 + 0x18),*(undefined8 *)(lVar4 + 0x18),0);
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if ((((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) || (*(long *)(lVar3 + 0x18) == 0)) ||
         (*unaff_x19 == 0)) goto LAB_04f5af8c;
      FUN_04f5b310(unaff_s8,*(long *)(lVar3 + 0x10) + 0x18,*(long *)(lVar3 + 0x18) + 0x18,
                   *unaff_x19 + 0x18);
      lVar3 = *(long *)(unaff_x20 + 0x20);
      if (((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) ||
         ((*(long *)(lVar3 + 0x18) == 0 || (*unaff_x19 == 0)))) goto LAB_04f5af8c;
      FUN_04f0d094(unaff_s8,*(long *)(lVar3 + 0x10) + 0x20,*(long *)(lVar3 + 0x18) + 0x20,
                   *unaff_x19 + 0x20,0);
    }
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if (((lVar3 != 0) && (lVar4 = *(long *)(lVar3 + 0x10), lVar4 != 0)) &&
     (lVar3 = *(long *)(lVar3 + 0x18), lVar3 != 0)) {
    lVar5 = *unaff_x19;
    if (*(int *)(*(long *)
                  UnityEngine_Rendering_RenderGraphModule_Util_RenderGraphUtils_BlitMaterialParameters_var
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar6 = FUN_04f5b4e8(unaff_s8,lVar4 + 0x3c,lVar3 + 0x3c);
    if (lVar5 != 0) {
      *(undefined4 *)(lVar5 + 0x3c) = uVar6;
      *(undefined4 *)(lVar5 + 0x40) = uVar7;
      *(undefined4 *)(lVar5 + 0x44) = param_3;
      return;
    }
  }
LAB_04f5af8c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


