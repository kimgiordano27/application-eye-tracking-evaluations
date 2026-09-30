/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_StringEscapeHandling
ENTRY_POINT: 0170f840
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_JsonSerializerSettings__set_StringEscapeHandling(ulong param_1,long param_2)

{
  undefined *puVar1;
  bool bVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  int iVar10;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_3287);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentInParent<HandGrabAPI>__);
    *(undefined1 *)(unaff_x20 + 0xa01) = 1;
  }
  puVar1 = StringLiteral_3287;
  if (*(long *)(param_2 + 0x70) != 0) {
    return *(long *)(param_2 + 0x70);
  }
  uVar6 = FUN_0170f604(param_2);
  uVar7 = FUN_0170f484(param_2);
  lVar8 = FUN_01600424(uVar6,*(undefined8 *)puVar1,uVar7,0);
  lVar9 = FUN_0170f484(param_2);
  puVar1 = Method_UnityEngine_Component_GetComponentInParent<HandGrabAPI>__;
  if (lVar9 != 0) {
    iVar10 = 0;
    bVar2 = false;
    sVar5 = 0x27;
LAB_0170f8c4:
    do {
      if (*(int *)(lVar9 + 0x10) <= iVar10) {
        lVar8 = FUN_015f5b28(lVar8,*(undefined8 *)puVar1,0);
LAB_0170f9a8:
        *(long *)(param_2 + 0x70) = lVar8;
        return lVar8;
      }
      lVar9 = FUN_0170f484(param_2);
      if (lVar9 == 0) break;
      uVar3 = FUN_015fa29c(lVar9,iVar10,0);
      if (0x25 < uVar3) {
        if (uVar3 != 0x5c) {
          if (uVar3 == 0x7a) {
            if (!bVar2) goto LAB_0170f9a8;
          }
          else if (uVar3 == 0x27) goto LAB_0170f93c;
          goto LAB_0170f920;
        }
Newtonsoft_Json_JsonSerializerSettings__set_CheckAdditionalContent:
        iVar10 = iVar10 + 1;
LAB_0170f920:
        iVar10 = iVar10 + 1;
        lVar9 = FUN_0170f484(param_2);
        if (lVar9 == 0) break;
        goto LAB_0170f8c4;
      }
      if (uVar3 == 0x25) goto Newtonsoft_Json_JsonSerializerSettings__set_CheckAdditionalContent;
      if (uVar3 != 0x22) goto LAB_0170f920;
LAB_0170f93c:
      lVar9 = FUN_0170f484(param_2);
      if (bVar2) {
        if (lVar9 != 0) {
          sVar4 = FUN_015fa29c(lVar9,iVar10,0);
          bVar2 = sVar5 != sVar4;
          goto LAB_0170f920;
        }
        break;
      }
      if (lVar9 == 0) break;
      sVar5 = FUN_015fa29c(lVar9,iVar10,0);
      iVar10 = iVar10 + 1;
      lVar9 = FUN_0170f484(param_2);
      bVar2 = true;
    } while (lVar9 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


