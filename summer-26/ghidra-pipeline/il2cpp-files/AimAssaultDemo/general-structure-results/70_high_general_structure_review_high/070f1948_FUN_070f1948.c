/*
FUNCTION_NAME: FUN_070f1948
ENTRY_POINT: 070f1948
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_3;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_070f1948(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if ((DAT_08267d0c & 1) == 0) {
    FUN_0373b518(PTR_DAT_07df7288);
    FUN_0373b518(PTR_DAT_07d8dc68);
    FUN_0373b518(System_Action<ARRaycastUpdatedEventArgs>_TypeInfo);
    FUN_0373b518(System_Action<ARSessionStateChangedEventArgs>_TypeInfo);
    FUN_0373b518(PTR_DAT_07df4cf8);
    FUN_0373b518(System_Xml_Serialization_XmlSchemaProviderAttribute_var);
    DAT_08267d0c = 1;
  }
  puVar5 = System_Action<ARRaycastUpdatedEventArgs>_TypeInfo;
  if (param_2 != 0) {
    lVar8 = *(long *)(param_2 + 0x60);
    if (*(int *)(*(long *)System_Action<ARRaycastUpdatedEventArgs>_TypeInfo + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    if (lVar8 != 0) {
      thunk_FUN_075769ac(*(undefined4 *)(param_2 + 0x6c),lVar8,
                         *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0xc),0);
      puVar4 = PTR_DAT_07df4cf8;
      if (*(long *)(param_2 + 0x60) != 0) {
        thunk_FUN_075769ac(*(undefined4 *)(param_2 + 0x70),*(long *)(param_2 + 0x60),
                           *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10),0);
        uVar7 = *(undefined8 *)(param_2 + 0x58);
        lVar8 = *(long *)(param_2 + 0x60);
        uVar9 = *(undefined8 *)(param_2 + 0x50);
        uVar1 = **(undefined4 **)(*(long *)puVar5 + 0xb8);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar7 = FUN_06fd1be0(uVar9,uVar7,0);
        if (lVar8 != 0) {
          thunk_FUN_07576cdc(lVar8,uVar1,uVar7,0);
          lVar8 = *(long *)(param_2 + 0x60);
          uVar1 = *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 4);
          uVar7 = FUN_06fd1be0(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x48),0);
          if (lVar8 != 0) {
            thunk_FUN_07576cdc(lVar8,uVar1,uVar7,0);
            lVar8 = *(long *)(param_2 + 0x60);
            uVar1 = *(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x14);
            uVar7 = FUN_06fd1be0(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38),0);
            puVar6 = System_Action<ARSessionStateChangedEventArgs>_TypeInfo;
            puVar3 = PTR_DAT_07d8dc68;
            if (lVar8 != 0) {
              thunk_FUN_07576cdc(lVar8,uVar1,uVar7,0);
              lVar8 = *(long *)puVar6;
              uVar7 = *(undefined8 *)(param_2 + 0x60);
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_03798b70();
                lVar8 = *(long *)puVar6;
              }
              puVar6 = System_Xml_Serialization_XmlSchemaProviderAttribute_var;
              cVar2 = *(char *)(param_2 + 0x80);
              uVar9 = **(undefined8 **)(lVar8 + 0xb8);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              FUN_06fa838c(uVar7,uVar9,cVar2 != '\0',0);
              FUN_06fa838c(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)puVar6,
                           *(undefined1 *)(param_2 + 0x81),0);
              if (*(long *)(param_2 + 0x78) != 0) {
                lVar8 = *(long *)(param_2 + 0x60);
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  thunk_FUN_03798b70();
                }
                if (lVar8 == 0) goto LAB_070f1c50;
                FUN_07578058(lVar8,*(undefined4 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8),
                             *(undefined8 *)(param_2 + 0x78),0);
              }
              uVar7 = *(undefined8 *)(param_2 + 0x20);
              uVar9 = *(undefined8 *)(param_2 + 0x28);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              puVar5 = PTR_DAT_07df7288;
              uVar7 = FUN_06fd1ed8(uVar7,uVar9,0);
              if (DAT_0825393d == '\0') {
                FUN_0373b518(PTR_DAT_07d88538);
                DAT_0825393d = '\x01';
              }
              uVar9 = *(undefined8 *)(param_2 + 0x60);
              uVar1 = *(undefined4 *)(param_2 + 0x68);
              uVar10 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_07d88538 + 0xb8) + 8);
              uVar11 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_07d88538 + 0xb8) + 0xc);
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_03798b70();
              }
              FUN_06fa1098(uVar10,uVar11,0,0,param_4,uVar7,uVar9,uVar1,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_070f1c50:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


