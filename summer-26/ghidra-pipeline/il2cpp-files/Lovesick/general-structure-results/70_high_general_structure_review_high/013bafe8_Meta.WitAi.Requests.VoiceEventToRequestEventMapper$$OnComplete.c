/*
FUNCTION_NAME: Meta.WitAi.Requests.VoiceEventToRequestEventMapper$$OnComplete
ENTRY_POINT: 013bafe8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_3;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Meta_WitAi_Requests_VoiceEventToRequestEventMapper__OnComplete(void)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long *plVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000010;
  undefined1 *in_stack_00000018;
  
  FUN_017f3980(unaff_w21,0,0);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    lVar4 = FUN_00d5941c();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x28) + 0x132) & 1) == 0) {
    FUN_00d5941c();
  }
  lVar4 = thunk_FUN_00d62348();
  if (lVar4 != 0) {
    lVar7 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar7 + 0x132);
    lVar5 = lVar7;
    if ((uVar1 & 1) == 0) {
      lVar7 = FUN_00d5941c(lVar7);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x132);
      lVar5 = *(long *)(unaff_x20 + 0x20);
    }
    puVar2 = Method_System_Linq_Expressions_Expression_ValidateCoalesceArgTypes__;
    uVar11 = **(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x68);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_00d5941c(lVar5);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x68);
    in_stack_00000018 = &stack0x0000002c;
    in_stack_00000010 = 0;
    (**(code **)(lVar5 + 0x10))(uVar11,lVar5,lVar4,&stack0x00000010,&stack0x0000002c);
    *(long *)(unaff_x19 + 0x28) = lVar4;
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar2 = Method_System_ComponentModel_ReflectTypeDescriptionProvider_GetTypeFromName__;
    if (lVar4 != 0) {
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x132) & 1) == 0) {
        FUN_00d5941c();
      }
      FUN_011c181c(lVar4);
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      if (lVar5 != 0) {
        FUN_017e98e4(lVar5,lVar4,0,0,0,0,0,0);
        plVar10 = *(long **)(unaff_x19 + 0x10);
        *(long *)(unaff_x19 + 0x30) = lVar5;
        puVar2 = System_Xml_TextEncodedRawTextWriter_TypeInfo;
        if (plVar10 != (long *)0x0) {
          lVar4 = *plVar10;
          uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)System_Xml_TextEncodedRawTextWriter_TypeInfo) {
                puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_013bb174;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)
                   FUN_00d59724(plVar10,*(long *)System_Xml_TextEncodedRawTextWriter_TypeInfo,0);
LAB_013bb174:
          uVar8 = (*(code *)*puVar6)(plVar10,puVar6[1]);
          puVar3 = StringLiteral_13635;
          if ((uVar8 & 1) != 0) {
            if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_017eaeb0(*(long *)(unaff_x19 + 0x30),*(undefined8 *)(unaff_x19 + 0x38),0,0);
FUN_013bb268:
            return *(undefined8 *)(unaff_x19 + 0x28);
          }
          plVar10 = *(long **)(unaff_x19 + 0x10);
          if (plVar10 != (long *)0x0) {
            lVar4 = *plVar10;
            uVar8 = (ulong)*(ushort *)(lVar4 + 0x12a);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                  puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_013bb200;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined8 *)FUN_00d59724(plVar10,*(long *)puVar2,1);
LAB_013bb200:
            uVar11 = (*(code *)*puVar6)(plVar10,puVar6[1]);
            lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
            if (lVar4 != 0) {
              if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x132) & 1) == 0) {
                FUN_00d5941c();
              }
              FUN_017e03dc(lVar4);
              FUN_017e39a4(uVar11,lVar4,0,0xffffffff,1,0);
              goto FUN_013bb268;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


