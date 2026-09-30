/*
FUNCTION_NAME: Meta.WitAi.Requests.VoiceServiceRequest$$OnSimulateResponse
ENTRY_POINT: 013bb6f8
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


void Meta_WitAi_Requests_VoiceServiceRequest__OnSimulateResponse(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar10;
  long unaff_x23;
  long *plVar11;
  long unaff_x25;
  undefined8 uVar12;
  long unaff_x29;
  
  thunk_FUN_00d48444(ReverbTutorial_<ShowAmpsCoroutine>d__60_TypeInfo);
  thunk_FUN_00d48444(Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__);
  *(undefined1 *)(unaff_x20 + 0x305) = 1;
  puVar4 = Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
  lVar5 = *(long *)Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar5 = *(long *)puVar4;
  }
  puVar4 = Method_Oculus_Interaction_PointerInteractable<GrabInteractor,_GrabInteractable>_Start__;
  if (*(char *)(*(long *)(lVar5 + 0xb8) + 0x10) != '\0') {
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_017e9060();
  }
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  FUN_016f4a88(lVar5);
  (**(code **)(unaff_x25 + 0x18))(*(undefined8 *)(unaff_x25 + 0x40),lVar5);
  plVar11 = *(long **)(unaff_x29 + -0x80);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar5 = *plVar11;
  uVar8 = (ulong)*(ushort *)(lVar5 + 0x12a);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)System_Xml_TextEncodedRawTextWriter_TypeInfo) {
        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 3) * 0x10 + 0x138);
        goto LAB_013bb818;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_00d59724(plVar11,*(long *)System_Xml_TextEncodedRawTextWriter_TypeInfo,3);
LAB_013bb818:
  uVar8 = (*(code *)*puVar6)(plVar11,puVar6[1]);
  if ((uVar8 & 1) != 0) {
    lVar7 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(undefined8 *)(unaff_x23 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x23 + 0x18);
    uVar10 = *(undefined8 *)(unaff_x23 + 0x20);
    uVar3 = *(ushort *)(lVar7 + 0x132);
    lVar5 = lVar7;
    if ((uVar3 & 1) == 0) {
      lVar5 = FUN_00d5941c();
      lVar7 = *(long *)(unaff_x19 + 0x20);
      uVar3 = *(ushort *)(lVar7 + 0x132);
    }
    uVar12 = **(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0xa8);
    if ((uVar3 & 1) == 0) {
      lVar7 = FUN_00d5941c();
    }
    lVar5 = *(long *)(*(long *)(lVar7 + 0xc0) + 0xa8);
    *(undefined1 *)(unaff_x29 + -0x84) = 0;
    *(long **)(unaff_x29 + -0x80) = plVar11;
    *(undefined8 *)(unaff_x29 + -0x78) = uVar1;
    *(undefined8 *)(unaff_x29 + -0x70) = uVar2;
    *(undefined8 *)(unaff_x29 + -0x68) = uVar10;
    *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x84;
    (**(code **)(lVar5 + 0x10))(uVar12,lVar5,0,unaff_x29 + -0x80,unaff_x29 + -0x84);
  }
  if (*(long *)(unaff_x21 + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*(undefined8 *)(unaff_x23 + 0x20));
  }
  return;
}


