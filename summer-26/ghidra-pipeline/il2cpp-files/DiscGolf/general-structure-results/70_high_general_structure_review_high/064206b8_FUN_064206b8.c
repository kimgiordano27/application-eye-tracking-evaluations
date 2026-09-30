/*
FUNCTION_NAME: FUN_064206b8
ENTRY_POINT: 064206b8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_8;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_064206b8(long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *local_50;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_069fb990;
  if ((DAT_06dcca14 & 1) == 0) {
    FUN_02d965b8(Method_System_Xml_XmlTextWriter_ValidateName__);
                    /* try { // try from 064206fc to 06520767 has its CatchHandler @ 064206fc
                       catch() { ... } // from try @ 064206fc with catch @ 064206fc
                       catch() { ... } // from try @ 06420874 with catch @ 064206fc
                       catch() { ... } // from try @ 064208a0 with catch @ 064206fc */
    FUN_02d965b8(Method_System_Xml_XmlTextWriter_VerifyPrefixXml__);
    FUN_02d965b8(Method_System_Xml_XmlTextWriter_HandleSpecialAttribute__);
    FUN_02d965b8(Method_System_Xml_Schema_XmlUntypedConverter_ChangeType__);
    FUN_02d965b8(Method_System_Xml_XmlTextWriter_AutoComplete__);
    FUN_02d965b8(Method_System_Xml_Schema_XmlUntypedConverter_ChangeType__);
    FUN_02d965b8(Method_Unity_Services_Vivox_vx_req_sessiongroup_set_tx_all_sessions_t__ctor__);
    FUN_02d965b8(PTR_DAT_069fb990);
    DAT_06dcca14 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar4 = FUN_06350670(param_2,0,0);
  if ((uVar4 & 1) != 0) {
    return 0;
  }
  plVar10 = (long *)(param_1 + 0x98);
  if (*plVar10 == 0) {
    uVar5 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Xml_XmlTextWriter_AutoComplete__);
    FUN_04d95918(uVar5,*(undefined8 *)Method_System_Xml_XmlTextWriter_HandleSpecialAttribute__);
    *(undefined8 *)(param_1 + 0x98) = uVar5;
    LeanTween__value(plVar10,uVar5);
    FUN_06420470(param_1);
  }
  if (param_2 != (long *)0x0) {
    uVar3 = (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(*param_2 + 0x160));
    if (*plVar10 != 0) {
      uVar4 = FUN_04d968ac(*plVar10,uVar3,
                           *(undefined8 *)Method_System_Xml_XmlTextWriter_VerifyPrefixXml__);
      if ((uVar4 & 1) == 0) {
        if (DAT_06dcc9e4 == '\0') {
          FUN_02d965b8(Method_System_Xml_Schema_XsdBuilder_BuildAttributeGroupRef_Ref__);
          DAT_06dcc9e4 = '\x01';
        }
        if (*(char *)(*(long *)(*(long *)
                                 Method_System_Xml_Schema_XsdBuilder_BuildAttributeGroupRef_Ref__ +
                               0xb8) + 8) == '\0') {
          if (*(int *)(*(long *)Method_System_Xml_Schema_XmlUntypedConverter_ChangeType__ + 0xe4) ==
              0) {
            thunk_FUN_02df485c();
          }
          uVar5 = FUN_06406ebc(param_2,0);
          lVar7 = *(long *)puVar2;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02df485c(lVar7);
          }
          uVar4 = FUN_0634eb94(uVar5,0,0);
          if ((uVar4 & 1) != 0) {
            lVar7 = *(long *)(param_1 + 0xa0);
            local_48 = 0;
            local_50 = param_2;
            LeanTween__value(&local_50,param_2);
            local_48 = uVar5;
            LeanTween__value(&local_48,uVar5);
            if (lVar7 != 0) {
              lVar8 = *(long *)(lVar7 + 0x10);
              lVar9 = *(long *)
                       Method_Unity_Services_Vivox_vx_req_sessiongroup_set_tx_all_sessions_t__ctor__
              ;
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar7 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
                  *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                  plVar6 = (long *)(lVar8 + 0x20);
                  *plVar6 = (long)local_50;
                  *(undefined8 *)(lVar8 + 0x28) = local_48;
                  LeanTween__value(plVar6,0);
                }
                else {
                  FUN_04176b8c(lVar7,local_50,local_48,
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                if (*plVar10 != 0) {
                  FUN_04d966b8(*plVar10,uVar3,uVar5,
                               *(undefined8 *)Method_System_Xml_XmlTextWriter_ValidateName__);
                  return uVar5;
                }
              }
            }
            goto LAB_06420988;
          }
        }
        else {
          uVar5 = 0;
        }
        return uVar5;
      }
      if (*plVar10 != 0) {
        uVar5 = FUN_04d96618(*plVar10,uVar3,
                             *(undefined8 *)
                              Method_System_Xml_Schema_XmlUntypedConverter_ChangeType__);
        return uVar5;
      }
    }
  }
LAB_06420988:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


