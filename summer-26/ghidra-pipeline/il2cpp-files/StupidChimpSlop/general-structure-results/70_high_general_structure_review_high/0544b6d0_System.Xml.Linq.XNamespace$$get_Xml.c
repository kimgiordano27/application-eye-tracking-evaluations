/*
FUNCTION_NAME: System.Xml.Linq.XNamespace$$get_Xml
ENTRY_POINT: 0544b6d0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_12;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void System_Xml_Linq_XNamespace__get_Xml(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar10;
  
  FUN_02d4dc40(UnityEditor_Analytics_TestAnalytic_TypeInfo);
  FUN_02d4dc40(UnityEngine_TextCore_Text_TextAlignment_TypeInfo);
  FUN_02d4dc40(UnityEngine_UIElements_TextAutoSize_TypeInfo);
  FUN_02d4dc40(UnityEngine_TextCore_Text_TextColorGradient_TypeInfo);
  FUN_02d4dc40(TMPro_TextContainer_TypeInfo);
  FUN_02d4dc40(UnityEngine_UIElements_UIR_TextCoreSettings_TypeInfo);
  FUN_02d4dc40(
              UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportingEventArgs_TypeInfo
              );
  FUN_02d4dc40(UnityEngine_TextEditOp_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x858) = 1;
  puVar2 = UnityEngine_TextCore_Text_TextColorGradient_TypeInfo;
  puVar4 = System_TermInfoDriver_TypeInfo;
  lVar6 = FUN_02d4dd2c(*unaff_x19,0x10);
  puVar1 = PTR_DAT_066462a0;
  lVar10 = *(long *)(PTR_DAT_066462a0 + 0x10);
  if (*(int *)(*(long *)(PTR_DAT_066462a0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dabd98(*(long *)(PTR_DAT_066462a0 + 0xe0));
  }
  uVar7 = FUN_050121a8(lVar10 + 0x20,0);
  uVar8 = FUN_050121a8(*(long *)(puVar1 + 0x10) + 0x20,0);
  uVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
  FUN_0544c028(uVar9,*(undefined8 *)puVar2,0x1a,uVar7,1,0,1,uVar8);
  puVar2 = UnityEngine_TerrainCollider_TypeInfo;
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) != 0) {
      *(undefined8 *)(lVar6 + 0x20) = uVar9;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x20),uVar9);
      uVar7 = FUN_050121a8(*(long *)(puVar1 + 0x10) + 0x20,0);
      uVar8 = FUN_050121a8(*(long *)(puVar1 + 0x10) + 0x20,0);
      FUN_050121a8(*(long *)(puVar1 + 0x10) + 0x20,0);
      FUN_050121a8(*(long *)(puVar1 + 0x10) + 0x20,0);
      uVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
      FUN_0544c028(uVar9,*(undefined8 *)puVar2,0x13,uVar7,0,0,3,uVar8);
      puVar2 = System_Xml_TernaryTreeReadOnly_TypeInfo;
      if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar6 + 0x28) = uVar9;
        thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x28),uVar9);
        uVar7 = FUN_050121a8(*(long *)(puVar1 + 0x28) + 0x20,0);
        uVar8 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
        FUN_0544c028(uVar8,*(undefined8 *)puVar2,0x1c,uVar7,0,1,1,0);
        puVar2 = UnityEditor_Analytics_TestAnalytic_TypeInfo;
        if (2 < *(uint *)(lVar6 + 0x18)) {
          *(undefined8 *)(lVar6 + 0x30) = uVar8;
          thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x30),uVar8);
          uVar7 = FUN_050121a8(*(long *)(puVar1 + 0x10) + 0x20,0);
          uVar8 = FUN_050121a8(*(long *)(puVar1 + 0x10) + 0x20,0);
          FUN_050121a8(*(long *)(puVar1 + 0x10) + 0x20,0);
          uVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
          FUN_0544c028(uVar9,*(undefined8 *)puVar2,0x12,uVar7,0,0,2,uVar8);
          puVar2 = System_TermInfoStrings_TypeInfo;
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar6 + 0x38) = uVar9;
            thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x38),uVar9);
            uVar7 = FUN_050121a8(*(long *)(puVar1 + 0x48) + 0x20,0);
            uVar8 = FUN_050121a8(*(long *)(puVar1 + 0x90) + 0x20,0);
            uVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
            FUN_0544c028(uVar9,*(undefined8 *)puVar2,4,uVar7,1,0,1,uVar8);
            puVar2 = 
            UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_TeleportingEventArgs_TypeInfo
            ;
            if (4 < *(uint *)(lVar6 + 0x18)) {
              *(undefined8 *)(lVar6 + 0x40) = uVar9;
              thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x40),uVar9);
              uVar7 = FUN_050121a8(*(long *)(puVar1 + 0x90) + 0x20,0);
              uVar8 = FUN_050121a8(*(long *)(puVar1 + 0x90) + 0x20,0);
              FUN_050121a8(*(long *)(puVar1 + 0x48) + 0x20,0);
              FUN_050121a8(*(long *)(puVar1 + 0x48) + 0x20,0);
              uVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
              FUN_0544c028(uVar9,*(undefined8 *)puVar2,0x10,uVar7,1,0,3,uVar8);
              puVar2 = UnityEngine_TextCore_Text_TextAlignment_TypeInfo;
              if (5 < *(uint *)(lVar6 + 0x18)) {
                *(undefined8 *)(lVar6 + 0x48) = uVar9;
                thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x48),uVar9);
                uVar7 = FUN_050121a8(*(long *)(puVar1 + 0x90) + 0x20,0);
                uVar8 = FUN_050121a8(*(long *)(puVar1 + 0x90) + 0x20,0);
                uVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
                FUN_0544c028(uVar9,*(undefined8 *)puVar2,0x1d,uVar7,1,0,1,uVar8);
                puVar2 = UnityEngine_TextEditOp_TypeInfo;
                if (6 < *(uint *)(lVar6 + 0x18)) {
                  *(undefined8 *)(lVar6 + 0x50) = uVar9;
                  thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x50),uVar9);
                  uVar7 = FUN_050121a8(*(long *)(puVar1 + 0x10) + 0x20,0);
                  uVar8 = FUN_050121a8(*(long *)(puVar1 + 0x10) + 0x20,0);
                  uVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
                  FUN_0544c028(uVar9,*(undefined8 *)puVar2,0x14,uVar7,0,1,1,uVar8);
                  puVar5 = System_TermInfoReader_TypeInfo;
                  puVar3 = PTR_DAT_0665f150;
                  puVar2 = PTR_DAT_06653fe0;
                  if ((*(uint *)(lVar6 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar6 + 0x58) = uVar9;
                    thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x58),uVar9);
                    uVar7 = FUN_050121a8(*(undefined8 *)puVar3,0);
                    uVar8 = FUN_050121a8(*(undefined8 *)puVar2,0);
                    FUN_050121a8(*(long *)(puVar1 + 0x48) + 0x20,0);
                    FUN_050121a8(*(long *)(puVar1 + 0x48) + 0x20,0);
                    uVar9 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
                    FUN_0544c028(uVar9,*(undefined8 *)puVar5,0x26,uVar7,0,1,3,uVar8);
                    puVar2 = UnityEngine_TerrainData_TypeInfo;
                    if (8 < *(uint *)(lVar6 + 0x18)) {
                      *(undefined8 *)(lVar6 + 0x60) = uVar9;
                      thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x60),uVar9);
                      uVar7 = FUN_050121a8(*(long *)(puVar1 + 0x10) + 0x20,0);
                      uVar8 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
                      FUN_0544c028(uVar8,*(undefined8 *)puVar2,0x21,uVar7,0,0,1,0);
                      puVar2 = UnityEngine_UIElements_TextAutoSize_TypeInfo;
                      if (9 < *(uint *)(lVar6 + 0x18)) {
                        *(undefined8 *)(lVar6 + 0x68) = uVar8;
                        thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x68),uVar8);
                        uVar7 = FUN_050121a8(*(long *)(puVar1 + 0x10) + 0x20,0);
                        uVar8 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
                        FUN_0544c028(uVar8,*(undefined8 *)puVar2,0x20,uVar7,0,0,1,0);
                        puVar2 = UnityEngine_TerrainUtils_TerrainMap_TypeInfo;
                        if (10 < *(uint *)(lVar6 + 0x18)) {
                          *(undefined8 *)(lVar6 + 0x70) = uVar8;
                          thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x70),uVar8);
                          uVar7 = FUN_050121a8(*(long *)(puVar1 + 0x10) + 0x20,0);
                          uVar8 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
                          FUN_0544c028(uVar8,*(undefined8 *)puVar2,0x1e,uVar7,0,0,1,0);
                          puVar2 = PTR_DAT_0664c060;
                          if (0xb < *(uint *)(lVar6 + 0x18)) {
                            *(undefined8 *)(lVar6 + 0x78) = uVar8;
                            thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x78),uVar8);
                            uVar7 = FUN_050121a8(*(long *)(puVar1 + 0x10) + 0x20,0);
                            uVar8 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
                            FUN_0544c028(uVar8,*(undefined8 *)puVar2,0x22,uVar7,0,0,1,0);
                            puVar2 = UnityEngine_UIElements_UIR_TextCoreSettings_TypeInfo;
                            if (0xc < *(uint *)(lVar6 + 0x18)) {
                              *(undefined8 *)(lVar6 + 0x80) = uVar8;
                              thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x80),uVar8);
                              uVar7 = FUN_050121a8(*(long *)(puVar1 + 0x10) + 0x20,0);
                              uVar8 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
                              FUN_0544c028(uVar8,*(undefined8 *)puVar2,0x25,uVar7,0,0,1,0);
                              puVar2 = TMPro_TextContainer_TypeInfo;
                              if (0xd < *(uint *)(lVar6 + 0x18)) {
                                *(undefined8 *)(lVar6 + 0x88) = uVar8;
                                thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x88),uVar8);
                                uVar7 = FUN_050121a8(*(long *)(puVar1 + 0x10) + 0x20,0);
                                uVar8 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
                                FUN_0544c028(uVar8,*(undefined8 *)puVar2,0x23,uVar7,0,0,1,0);
                                puVar2 = UnityEngine_TerrainCallbacks_TypeInfo;
                                if (0xe < *(uint *)(lVar6 + 0x18)) {
                                  *(undefined8 *)(lVar6 + 0x90) = uVar8;
                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x90),uVar8);
                                  uVar7 = FUN_050121a8(*(long *)(puVar1 + 0x10) + 0x20,0);
                                  uVar8 = thunk_FUN_02d8a638(*(undefined8 *)puVar4);
                                  FUN_0544c028(uVar8,*(undefined8 *)puVar2,0x1f,uVar7,0,0,1,0);
                                  puVar1 = System_Threading_Tasks_TaskFactory_TypeInfo;
                                  if ((*(uint *)(lVar6 + 0x18) & 0xfffffff0) != 0) {
                                    *(undefined8 *)(lVar6 + 0x98) = uVar8;
                                    thunk_FUN_02dc1ef0((undefined8 *)(lVar6 + 0x98),uVar8);
                                    **(long **)(*(long *)puVar1 + 0xb8) = lVar6;
                                    thunk_FUN_02dc1ef0(*(undefined8 *)(*(long *)puVar1 + 0xb8),lVar6
                                                      );
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d4def0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


