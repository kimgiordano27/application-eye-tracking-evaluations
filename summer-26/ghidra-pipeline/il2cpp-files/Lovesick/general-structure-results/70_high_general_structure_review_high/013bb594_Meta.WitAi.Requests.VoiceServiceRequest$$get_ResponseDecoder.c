/*
FUNCTION_NAME: Meta.WitAi.Requests.VoiceServiceRequest$$get_ResponseDecoder
ENTRY_POINT: 013bb594
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Meta_WitAi_Requests_VoiceServiceRequest__get_ResponseDecoder(void)

{
  ushort uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  undefined8 uVar10;
  long unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  long *plVar11;
  long *unaff_x25;
  undefined8 uVar12;
  undefined4 unaff_w26;
  undefined8 uVar13;
  long unaff_x27;
  long unaff_x28;
  undefined8 uVar14;
  long unaff_x29;
  
  if (unaff_x25 == (long *)0x0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar14 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar7 = StringLiteral_1645;
  }
  else {
    if ((unaff_x28 != 0) || (unaff_x27 != 0)) {
      FUN_017f3980(unaff_w26,1,0);
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
        lVar3 = FUN_00d5941c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      lVar3 = thunk_FUN_00d62348();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar8 = *(long *)(unaff_x19 + 0x20);
      *(undefined8 *)(unaff_x29 + -0x98) = unaff_x22;
      uVar1 = *(ushort *)(lVar8 + 0x132);
      lVar4 = lVar8;
      if ((uVar1 & 1) == 0) {
        lVar8 = FUN_00d5941c(lVar8);
        uVar1 = *(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x132);
        lVar4 = *(long *)(unaff_x19 + 0x20);
      }
      puVar7 = ReverbTutorial_<ShowAmpsCoroutine>d__60_TypeInfo;
      uVar14 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x68);
      if ((uVar1 & 1) == 0) {
        lVar4 = FUN_00d5941c(lVar4);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x68);
      *(undefined4 *)(unaff_x29 + -0x84) = unaff_w26;
      *(undefined8 *)(unaff_x29 + -0x80) = unaff_x24;
      *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x84;
      (**(code **)(lVar4 + 0x10))(uVar14,lVar4,lVar3,unaff_x29 + -0x80,unaff_x29 + -0x84);
      *(long *)(unaff_x23 + 0x20) = lVar3;
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar5 = FUN_017e8fb0(0);
      if ((uVar5 & 1) != 0) {
        uVar13 = *(undefined8 *)(unaff_x23 + 0x20);
        uVar10 = *(undefined8 *)StringLiteral_5620;
        uVar14 = (**(code **)(*unaff_x25 + 0x168))();
        uVar14 = FUN_015f5b28(uVar10,uVar14,0);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar7);
        }
        FUN_017e8fb8(0,uVar13,uVar14,0,0);
      }
      uVar14 = *(undefined8 *)(unaff_x23 + 0x20);
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_03776305 == '\0') {
        thunk_FUN_00d48444(ReverbTutorial_<ShowAmpsCoroutine>d__60_TypeInfo);
        thunk_FUN_00d48444(
                          Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
                          );
        DAT_03776305 = '\x01';
      }
      puVar2 = Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
      lVar3 = *(long *)Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__
      ;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar3 = *(long *)puVar2;
      }
      puVar2 = 
      Method_Oculus_Interaction_PointerInteractable<GrabInteractor,_GrabInteractable>_Start__;
      if (*(char *)(*(long *)(lVar3 + 0xb8) + 0x10) != '\0') {
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_017e9060(uVar14,0);
      }
      lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      FUN_016f4a88(lVar3);
      (*(code *)unaff_x25[3])(unaff_x25[8],lVar3);
      plVar11 = *(long **)(unaff_x29 + -0x80);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar3 = *plVar11;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12a);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)System_Xml_TextEncodedRawTextWriter_TypeInfo) {
            puVar6 = (undefined8 *)(lVar3 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto LAB_013bb818;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_00d59724(plVar11,*(long *)System_Xml_TextEncodedRawTextWriter_TypeInfo,3);
LAB_013bb818:
      uVar5 = (*(code *)*puVar6)(plVar11,puVar6[1]);
      if ((uVar5 & 1) != 0) {
        lVar4 = *(long *)(unaff_x19 + 0x20);
        uVar14 = *(undefined8 *)(unaff_x23 + 0x10);
        uVar10 = *(undefined8 *)(unaff_x23 + 0x18);
        uVar13 = *(undefined8 *)(unaff_x23 + 0x20);
        uVar1 = *(ushort *)(lVar4 + 0x132);
        lVar3 = lVar4;
        if ((uVar1 & 1) == 0) {
          lVar3 = FUN_00d5941c();
          lVar4 = *(long *)(unaff_x19 + 0x20);
          uVar1 = *(ushort *)(lVar4 + 0x132);
        }
        uVar12 = **(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0xa8);
        if ((uVar1 & 1) == 0) {
          lVar4 = FUN_00d5941c();
        }
        lVar3 = *(long *)(*(long *)(lVar4 + 0xc0) + 0xa8);
        *(undefined1 *)(unaff_x29 + -0x84) = 0;
        *(long **)(unaff_x29 + -0x80) = plVar11;
        *(undefined8 *)(unaff_x29 + -0x78) = uVar14;
        *(undefined8 *)(unaff_x29 + -0x70) = uVar10;
        *(undefined8 *)(unaff_x29 + -0x68) = uVar13;
        *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x84;
        (**(code **)(lVar3 + 0x10))(uVar12,lVar3,0,unaff_x29 + -0x80,unaff_x29 + -0x84);
      }
      if (*(long *)(unaff_x21 + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(*(undefined8 *)(unaff_x23 + 0x20));
      }
      return;
    }
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar14 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar7 = Method_CharmBracelet_OnGrab__;
  }
  uVar10 = thunk_FUN_00d48444(puVar7);
  FUN_016ec5b8(uVar14,uVar10,0);
  uVar10 = thunk_FUN_00d48444(Method_System_Globalization_Bootstring_Decode__);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar14,uVar10);
}


