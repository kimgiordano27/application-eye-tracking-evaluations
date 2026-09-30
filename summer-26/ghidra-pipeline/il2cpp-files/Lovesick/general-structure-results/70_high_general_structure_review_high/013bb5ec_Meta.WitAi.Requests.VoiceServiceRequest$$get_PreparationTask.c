/*
FUNCTION_NAME: Meta.WitAi.Requests.VoiceServiceRequest$$get_PreparationTask
ENTRY_POINT: 013bb5ec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Meta_WitAi_Requests_VoiceServiceRequest__get_PreparationTask(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ushort in_w9;
  int *piVar8;
  long unaff_x19;
  undefined8 uVar9;
  long unaff_x21;
  long unaff_x23;
  undefined8 unaff_x24;
  long *plVar10;
  long *unaff_x25;
  undefined8 uVar11;
  undefined4 unaff_w26;
  undefined8 uVar12;
  undefined8 unaff_x27;
  undefined8 uVar13;
  long unaff_x29;
  
  lVar4 = param_1;
  if ((in_w9 & 1) == 0) {
    param_1 = FUN_00d5941c(param_1);
    in_w9 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x132);
    lVar4 = *(long *)(unaff_x19 + 0x20);
  }
  puVar2 = ReverbTutorial_<ShowAmpsCoroutine>d__60_TypeInfo;
  uVar13 = **(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x68);
  if ((in_w9 & 1) == 0) {
    lVar4 = FUN_00d5941c(lVar4);
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x68);
  *(undefined4 *)(unaff_x29 + -0x84) = unaff_w26;
  *(undefined8 *)(unaff_x29 + -0x80) = unaff_x24;
  *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x84;
  (**(code **)(lVar4 + 0x10))(uVar13);
  *(undefined8 *)(unaff_x23 + 0x20) = unaff_x27;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar5 = FUN_017e8fb0(0);
  if ((uVar5 & 1) != 0) {
    uVar12 = *(undefined8 *)(unaff_x23 + 0x20);
    uVar9 = *(undefined8 *)StringLiteral_5620;
    uVar13 = (**(code **)(*unaff_x25 + 0x168))();
    uVar13 = FUN_015f5b28(uVar9,uVar13,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    FUN_017e8fb8(0,uVar12,uVar13,0,0);
  }
  uVar13 = *(undefined8 *)(unaff_x23 + 0x20);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_03776305 == '\0') {
    thunk_FUN_00d48444(ReverbTutorial_<ShowAmpsCoroutine>d__60_TypeInfo);
    thunk_FUN_00d48444(Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                      );
    DAT_03776305 = '\x01';
  }
  puVar3 = Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
  lVar4 = *(long *)Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar3;
  }
  puVar3 = Method_Oculus_Interaction_PointerInteractable<GrabInteractor,_GrabInteractable>_Start__;
  if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x10) != '\0') {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_017e9060(uVar13,0);
  }
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  FUN_016f4a88(lVar4);
  (*(code *)unaff_x25[3])(unaff_x25[8],lVar4);
  plVar10 = *(long **)(unaff_x29 + -0x80);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar4 = *plVar10;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar5 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)System_Xml_TextEncodedRawTextWriter_TypeInfo) {
        puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 3) * 0x10 + 0x138);
        goto LAB_013bb818;
      }
      uVar5 = uVar5 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_00d59724(plVar10,*(long *)System_Xml_TextEncodedRawTextWriter_TypeInfo,3);
LAB_013bb818:
  uVar5 = (*(code *)*puVar6)(plVar10,puVar6[1]);
  if ((uVar5 & 1) != 0) {
    lVar7 = *(long *)(unaff_x19 + 0x20);
    uVar13 = *(undefined8 *)(unaff_x23 + 0x10);
    uVar9 = *(undefined8 *)(unaff_x23 + 0x18);
    uVar12 = *(undefined8 *)(unaff_x23 + 0x20);
    uVar1 = *(ushort *)(lVar7 + 0x132);
    lVar4 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_00d5941c();
      lVar7 = *(long *)(unaff_x19 + 0x20);
      uVar1 = *(ushort *)(lVar7 + 0x132);
    }
    uVar11 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0xa8);
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar4 = *(long *)(*(long *)(lVar7 + 0xc0) + 0xa8);
    *(undefined1 *)(unaff_x29 + -0x84) = 0;
    *(long **)(unaff_x29 + -0x80) = plVar10;
    *(undefined8 *)(unaff_x29 + -0x78) = uVar13;
    *(undefined8 *)(unaff_x29 + -0x70) = uVar9;
    *(undefined8 *)(unaff_x29 + -0x68) = uVar12;
    *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x84;
    (**(code **)(lVar4 + 0x10))(uVar11,lVar4,0,unaff_x29 + -0x80,unaff_x29 + -0x84);
  }
  if (*(long *)(unaff_x21 + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*(undefined8 *)(unaff_x23 + 0x20));
  }
  return;
}


