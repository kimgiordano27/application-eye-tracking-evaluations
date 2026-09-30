/*
FUNCTION_NAME: OVRPlugin$$get_unpremultipliedAlphaLayersSupported
ENTRY_POINT: 04f5ab9c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void OVRPlugin__get_unpremultipliedAlphaLayersSupported
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x24;
  long *plVar7;
  float fVar8;
  undefined4 uVar9;
  float unaff_s8;
  undefined4 unaff_s9;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 uStack0000000000000058;
  float fStack000000000000005c;
  long *plStack0000000000000060;
  long *plStack0000000000000068;
  
  *(undefined1 *)(unaff_x24 + 0xaaa) = 1;
  plStack0000000000000060 = (long *)0x0;
  plStack0000000000000068 = (long *)0x0;
  uStack0000000000000050 = 0;
  uStack0000000000000054 = 0;
  uStack0000000000000058 = 0;
  fStack000000000000005c = 0.0;
  uStack0000000000000040 = 0;
  uStack0000000000000048 = 0;
  uStack000000000000004c = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  uStack000000000000002c = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000034 = 0;
  if (*unaff_x19 == 0) goto LAB_04f5af8c;
  *(undefined1 *)(*unaff_x19 + 0x10) = 0;
  if (*(long *)(unaff_x20 + 0x18) == 0) goto LAB_04f5af8c;
  fVar8 = (float)FUN_05c9e358(*(long *)(unaff_x20 + 0x18),0);
  FUN_04f5af90(unaff_s8 / fVar8,*(undefined8 *)(unaff_x20 + 0x10),&stack0x00000068,&stack0x00000060,
               &stack0x0000005c);
  fVar8 = fStack000000000000005c;
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if (0.0 <= fStack000000000000005c) {
    if (1.0 < fStack000000000000005c) {
      if ((lVar4 == 0) || (plStack0000000000000060 == (long *)0x0)) goto LAB_04f5af8c;
      (**(code **)(*plStack0000000000000060 + 0x1a8))(unaff_s9);
      if ((*(long *)(unaff_x20 + 0x20) == 0) ||
         (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x18), lVar4 == 0)) goto LAB_04f5af8c;
      FUN_04f0d798(&stack0x00000000 + 4,*(undefined8 *)(unaff_x20 + 0x18),lVar4 + 0x20,0);
      plVar7 = plStack0000000000000068;
      puVar1 = 
      System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo;
      lVar4 = *(long *)
               System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
      ;
      uStack0000000000000028 = in_stack_00000000._12_4_;
      uStack0000000000000020 = in_stack_00000000._4_8_;
      uStack0000000000000034 = (undefined4)in_stack_00000018;
      uStack0000000000000038 = (undefined4)((ulong)in_stack_00000018 >> 0x20);
      uStack000000000000002c = uStack0000000000000010;
      uStack0000000000000030 = uStack0000000000000014;
      param_2 = uStack0000000000000010;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar4 = *(long *)puVar1;
      }
      if ((*(long *)(unaff_x20 + 0x20) == 0) || (plVar7 == (long *)0x0)) goto LAB_04f5af8c;
      puVar5 = *(undefined4 **)(lVar4 + 0xb8);
      lVar4 = *plVar7;
      puVar2 = (undefined1 *)&stack0x00000020;
      goto LAB_04f5ad50;
    }
    if ((((lVar4 == 0) || (plStack0000000000000068 == (long *)0x0)) ||
        ((**(code **)(*plStack0000000000000068 + 0x1a8))(unaff_s9), *(long *)(unaff_x20 + 0x20) == 0
        )) || (plStack0000000000000060 == (long *)0x0)) goto LAB_04f5af8c;
    (**(code **)(*plStack0000000000000060 + 0x1a8))(unaff_s9);
  }
  else {
    if ((lVar4 == 0) || (plStack0000000000000068 == (long *)0x0)) goto LAB_04f5af8c;
    (**(code **)(*plStack0000000000000068 + 0x1a8))(unaff_s9);
    if ((*(long *)(unaff_x20 + 0x20) == 0) ||
       (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10), lVar4 == 0)) goto LAB_04f5af8c;
    FUN_04f0d798(&stack0x00000000 + 4,*(undefined8 *)(unaff_x20 + 0x18),lVar4 + 0x20,0);
    plVar7 = plStack0000000000000060;
    puVar1 = 
    System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo;
    lVar4 = *(long *)
             System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TypeInfo
    ;
    uStack0000000000000048 = in_stack_00000000._12_4_;
    uStack0000000000000040 = in_stack_00000000._4_8_;
    uStack0000000000000054 = (undefined4)in_stack_00000018;
    uStack0000000000000058 = (undefined4)((ulong)in_stack_00000018 >> 0x20);
    uStack000000000000004c = uStack0000000000000010;
    uStack0000000000000050 = uStack0000000000000014;
    param_2 = uStack0000000000000010;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar4 = *(long *)puVar1;
    }
    if ((*(long *)(unaff_x20 + 0x20) == 0) || (plVar7 == (long *)0x0)) goto LAB_04f5af8c;
    puVar5 = *(undefined4 **)(lVar4 + 0xb8);
    lVar4 = *plVar7;
    puVar2 = (undefined1 *)&stack0x00000040;
LAB_04f5ad50:
    (**(code **)(lVar4 + 0x1a8))(*puVar5,plVar7,puVar2);
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((lVar4 == 0) || (lVar3 = *(long *)(lVar4 + 0x10), lVar3 == 0)) goto LAB_04f5af8c;
  lVar4 = *(long *)(lVar4 + 0x18);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    if (lVar4 == 0) goto LAB_04f5af8c;
    if (*(char *)(lVar4 + 0x10) != '\0') {
      lVar3 = *unaff_x19;
      if (lVar3 == 0) goto LAB_04f5af8c;
      *(undefined1 *)(lVar3 + 0x10) = 1;
      if (*(long *)(lVar3 + 0x18) == 0) goto LAB_04f5af8c;
      FUN_04f5b230(*(long *)(lVar3 + 0x18),*(undefined8 *)(lVar4 + 0x18),0);
      lVar4 = *unaff_x19;
      if ((lVar4 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto LAB_04f5af8c;
      lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x18);
      goto joined_r0x04f5aed0;
    }
  }
  else {
    if (lVar4 == 0) goto LAB_04f5af8c;
    lVar6 = *unaff_x19;
    if (*(char *)(lVar4 + 0x10) == '\0') {
      if (lVar6 == 0) goto LAB_04f5af8c;
      *(undefined1 *)(lVar6 + 0x10) = 1;
      if (*(long *)(lVar6 + 0x18) == 0) goto LAB_04f5af8c;
      FUN_04f5b230(*(long *)(lVar6 + 0x18),*(undefined8 *)(lVar3 + 0x18),0);
      lVar4 = *unaff_x19;
      if ((lVar4 == 0) || (*(long *)(unaff_x20 + 0x20) == 0)) goto LAB_04f5af8c;
      lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10);
joined_r0x04f5aed0:
      if (lVar3 == 0) goto LAB_04f5af8c;
      FUN_04f0d164(lVar4 + 0x20,lVar3 + 0x20,0);
    }
    else {
      if (lVar6 == 0) goto LAB_04f5af8c;
      *(undefined1 *)(lVar6 + 0x10) = 1;
      if (*(long *)(lVar6 + 0x18) == 0) goto LAB_04f5af8c;
      FUN_04f5b230(*(long *)(lVar6 + 0x18),*(undefined8 *)(lVar3 + 0x18),0);
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if ((((lVar4 == 0) || (*(long *)(lVar4 + 0x10) == 0)) || (*(long *)(lVar4 + 0x18) == 0)) ||
         (*unaff_x19 == 0)) goto LAB_04f5af8c;
      FUN_04f5b310(fVar8,*(long *)(lVar4 + 0x10) + 0x18,*(long *)(lVar4 + 0x18) + 0x18,
                   *unaff_x19 + 0x18);
      lVar4 = *(long *)(unaff_x20 + 0x20);
      if (((lVar4 == 0) || (*(long *)(lVar4 + 0x10) == 0)) ||
         ((*(long *)(lVar4 + 0x18) == 0 || (*unaff_x19 == 0)))) goto LAB_04f5af8c;
      FUN_04f0d094(fVar8,*(long *)(lVar4 + 0x10) + 0x20,*(long *)(lVar4 + 0x18) + 0x20,
                   *unaff_x19 + 0x20,0);
    }
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if (((lVar4 != 0) && (lVar3 = *(long *)(lVar4 + 0x10), lVar3 != 0)) &&
     (lVar4 = *(long *)(lVar4 + 0x18), lVar4 != 0)) {
    lVar6 = *unaff_x19;
    if (*(int *)(*(long *)
                  UnityEngine_Rendering_RenderGraphModule_Util_RenderGraphUtils_BlitMaterialParameters_var
                + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar9 = FUN_04f5b4e8(fVar8,lVar3 + 0x3c,lVar4 + 0x3c);
    if (lVar6 != 0) {
      *(undefined4 *)(lVar6 + 0x3c) = uVar9;
      *(undefined4 *)(lVar6 + 0x40) = param_2;
      *(undefined4 *)(lVar6 + 0x44) = param_3;
      return;
    }
  }
LAB_04f5af8c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


