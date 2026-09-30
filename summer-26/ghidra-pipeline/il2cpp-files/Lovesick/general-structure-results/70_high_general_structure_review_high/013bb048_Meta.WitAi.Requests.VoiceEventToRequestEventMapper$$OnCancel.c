/*
FUNCTION_NAME: Meta.WitAi.Requests.VoiceEventToRequestEventMapper$$OnCancel
ENTRY_POINT: 013bb048
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_3;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Meta_WitAi_Requests_VoiceEventToRequestEventMapper__OnCancel(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong in_x9;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *plVar8;
  undefined8 unaff_x22;
  undefined8 uVar9;
  
  puVar1 = Method_System_Linq_Expressions_Expression_ValidateCoalesceArgTypes__;
  uVar9 = **(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x68);
  if ((in_x9 & 1) == 0) {
    param_1 = FUN_00d5941c(param_1);
  }
  (**(code **)(*(long *)(*(long *)(param_1 + 0xc0) + 0x68) + 0x10))(uVar9);
  *(undefined8 *)(unaff_x19 + 0x28) = unaff_x22;
  lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
  if (lVar3 != 0) {
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x132) & 1) == 0) {
      FUN_00d5941c();
    }
    FUN_011c181c(lVar3);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar4 != 0) {
      FUN_017e98e4(lVar4,lVar3,0,0,0,0,0,0);
      plVar8 = *(long **)(unaff_x19 + 0x10);
      *(long *)(unaff_x19 + 0x30) = lVar4;
      puVar1 = System_Xml_TextEncodedRawTextWriter_TypeInfo;
      if (plVar8 != (long *)0x0) {
        lVar3 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)System_Xml_TextEncodedRawTextWriter_TypeInfo) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_013bb174;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_00d59724(plVar8,*(long *)System_Xml_TextEncodedRawTextWriter_TypeInfo,0);
LAB_013bb174:
        uVar6 = (*(code *)*puVar5)(plVar8,puVar5[1]);
        puVar2 = StringLiteral_13635;
        if ((uVar6 & 1) != 0) {
          if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_017eaeb0(*(long *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x19 + 0x38),0,0);
FUN_013bb268:
          return *(undefined8 *)(unaff_x19 + 0x28);
        }
        plVar8 = *(long **)(unaff_x19 + 0x10);
        if (plVar8 != (long *)0x0) {
          lVar3 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar3 + 0x12a);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
                puVar5 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_013bb200;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar1,1);
LAB_013bb200:
          uVar9 = (*(code *)*puVar5)(plVar8,puVar5[1]);
          lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if (lVar3 != 0) {
            if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x132) & 1) == 0) {
              FUN_00d5941c();
            }
            FUN_017e03dc(lVar3);
            FUN_017e39a4(uVar9,lVar3,0,0xffffffff,1,0);
            goto FUN_013bb268;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


