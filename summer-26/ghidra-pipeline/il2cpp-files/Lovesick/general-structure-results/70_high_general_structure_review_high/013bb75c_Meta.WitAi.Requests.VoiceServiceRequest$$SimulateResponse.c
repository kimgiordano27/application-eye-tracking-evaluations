/*
FUNCTION_NAME: Meta.WitAi.Requests.VoiceServiceRequest$$SimulateResponse
ENTRY_POINT: 013bb75c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Meta_WitAi_Requests_VoiceServiceRequest__SimulateResponse(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ushort uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar9;
  long unaff_x23;
  long *plVar10;
  long unaff_x25;
  undefined8 uVar11;
  undefined8 *unaff_x27;
  long unaff_x29;
  
  FUN_017e9060(param_1,0);
  lVar4 = thunk_FUN_00d62348(*unaff_x27);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  FUN_016f4a88(lVar4);
  (**(code **)(unaff_x25 + 0x18))(*(undefined8 *)(unaff_x25 + 0x40),lVar4);
  plVar10 = *(long **)(unaff_x29 + -0x80);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  lVar4 = *plVar10;
  uVar7 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)System_Xml_TextEncodedRawTextWriter_TypeInfo) {
        puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 3) * 0x10 + 0x138);
        goto LAB_013bb818;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_00d59724(plVar10,*(long *)System_Xml_TextEncodedRawTextWriter_TypeInfo,3);
LAB_013bb818:
  uVar7 = (*(code *)*puVar5)(plVar10,puVar5[1]);
  if ((uVar7 & 1) != 0) {
    lVar6 = *(long *)(unaff_x19 + 0x20);
    uVar1 = *(undefined8 *)(unaff_x23 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x23 + 0x18);
    uVar9 = *(undefined8 *)(unaff_x23 + 0x20);
    uVar3 = *(ushort *)(lVar6 + 0x132);
    lVar4 = lVar6;
    if ((uVar3 & 1) == 0) {
      lVar4 = FUN_00d5941c();
      lVar6 = *(long *)(unaff_x19 + 0x20);
      uVar3 = *(ushort *)(lVar6 + 0x132);
    }
    uVar11 = **(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0xa8);
    if ((uVar3 & 1) == 0) {
      lVar6 = FUN_00d5941c();
    }
    lVar4 = *(long *)(*(long *)(lVar6 + 0xc0) + 0xa8);
    *(undefined1 *)(unaff_x29 + -0x84) = 0;
    *(long **)(unaff_x29 + -0x80) = plVar10;
    *(undefined8 *)(unaff_x29 + -0x78) = uVar1;
    *(undefined8 *)(unaff_x29 + -0x70) = uVar2;
    *(undefined8 *)(unaff_x29 + -0x68) = uVar9;
    *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x84;
    (**(code **)(lVar4 + 0x10))(uVar11,lVar4,0,unaff_x29 + -0x80,unaff_x29 + -0x84);
  }
  if (*(long *)(unaff_x21 + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*(undefined8 *)(unaff_x23 + 0x20));
  }
  return;
}


