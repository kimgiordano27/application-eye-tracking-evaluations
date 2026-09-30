/*
FUNCTION_NAME: FUN_07b35234
ENTRY_POINT: 07b35234
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8 FUN_07b35234(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  
  puVar1 = UnityEngine_UIElements_IBinding_TypeInfo;
  if ((DAT_0899255c & 1) == 0) {
    FUN_03a8a718(PTR_DAT_0848d0a0);
    FUN_03a8a718(UnityEngine_UIElements_IBindingRequest_TypeInfo);
    FUN_03a8a718(Cinemachine_ICameraOverrideStack_TypeInfo);
    FUN_03a8a718(UnityEngine_EventSystems_ICancelHandler_TypeInfo);
    FUN_03a8a718(UnityEngine_UI_ICanvasElement_TypeInfo);
    FUN_03a8a718(Unity_Services_Authentication_ICache_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_IBinding_TypeInfo);
    FUN_03a8a718(PTR_DAT_084cf998);
    FUN_03a8a718(UnityEngine_ICanvasRaycastFilter_TypeInfo);
    FUN_03a8a718(System_Net_ICertificatePolicy_TypeInfo);
    FUN_03a8a718(System_ComponentModel_IChangeTracking_TypeInfo);
    FUN_03a8a718(System_Runtime_Remoting_Channels_IChannel_TypeInfo);
    FUN_03a8a718(PTR_DAT_08486bc0);
    DAT_0899255c = 1;
  }
  puVar6 = System_Runtime_Remoting_Channels_IChannel_TypeInfo;
  puVar5 = System_Net_ICertificatePolicy_TypeInfo;
  puVar4 = UnityEngine_ICanvasRaycastFilter_TypeInfo;
  puVar3 = UnityEngine_UIElements_IBindingRequest_TypeInfo;
  puVar2 = PTR_DAT_084cf998;
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar7 = *(long *)puVar1;
  }
  uVar8 = FUN_07b347d4(*(undefined4 *)(*(long *)(lVar7 + 0xb8) + 8),
                       *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0xc),*(undefined8 *)puVar5);
  lVar7 = FUN_07b3487c(*(undefined8 *)puVar6,uVar8);
  lVar9 = FUN_07b3487c(*(undefined8 *)puVar4,lVar7);
  lVar10 = FUN_07b3487c(*(undefined8 *)puVar2,lVar7);
  plVar11 = (long *)FUN_0476af58(uVar8,*(undefined8 *)puVar3);
  puVar3 = UnityEngine_UI_ICanvasElement_TypeInfo;
  puVar2 = UnityEngine_EventSystems_ICancelHandler_TypeInfo;
  if (plVar11 != (long *)0x0) {
    FUN_07da0734(plVar11,*(undefined8 *)(param_1 + 0x10),0);
    FUN_07da0a44(plVar11,1,0);
    lVar16 = *(long *)(*(long *)puVar1 + 0xb8);
    (**(code **)(*plVar11 + 0x2a8))
              (*(undefined4 *)(lVar16 + 0x18),*(undefined4 *)(lVar16 + 0x1c),
               *(undefined4 *)(lVar16 + 0x20),*(undefined4 *)(lVar16 + 0x24),plVar11,
               *(undefined8 *)(*plVar11 + 0x2b0));
    lVar16 = FUN_0476af58(uVar8,*(undefined8 *)puVar3);
    FUN_07b34ac4();
    lVar12 = FUN_0476af58(lVar7,*(undefined8 *)puVar2);
    if (lVar12 != 0) {
      FUN_07f9bf0c(0xc1000000,0xc0a00000,0xc1000000,0xc0a00000,lVar12,0);
      if (lVar7 != 0) {
        lVar7 = FUN_04561560(lVar7,*(undefined8 *)PTR_DAT_0848d0a0);
        if (DAT_0897502c == '\0') {
          FUN_03a8a718(PTR_DAT_08488168);
          DAT_0897502c = '\x01';
        }
        puVar1 = PTR_DAT_08488168;
        if (lVar7 != 0) {
          FUN_07cab034(**(undefined4 **)(*(long *)PTR_DAT_08488168 + 0xb8),
                       (*(undefined4 **)(*(long *)PTR_DAT_08488168 + 0xb8))[1],lVar7,0);
          if (DAT_08975145 == '\0') {
            FUN_03a8a718(PTR_DAT_08488168);
            DAT_08975145 = '\x01';
          }
          puVar2 = Unity_Services_Authentication_ICache_TypeInfo;
          FUN_07cab1c0(*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),
                       *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),lVar7,0);
          if (DAT_0897502c == '\0') {
            FUN_03a8a718(PTR_DAT_08488168);
            DAT_0897502c = '\x01';
          }
          FUN_07cab4d8(**(undefined4 **)(*(long *)puVar1 + 0xb8),
                       (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],lVar7,0);
          FUN_07cab8cc(0x41200000,0x40c00000,lVar7,0);
          FUN_07caba60(0xc1200000,0xc0e00000,lVar7,0);
          plVar11 = (long *)FUN_0476af58(lVar10,*(undefined8 *)puVar2);
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x558))
                      (plVar11,*(undefined8 *)PTR_DAT_08486bc0,*(undefined8 *)(*plVar11 + 0x560));
            FUN_07b57e14(plVar11,0,0);
            FUN_07b584bc(plVar11,1,0);
            FUN_07b58514(plVar11,1,0);
            FUN_07b34a3c(plVar11);
            plVar13 = (long *)FUN_0476af58(lVar9,*(undefined8 *)puVar2);
            puVar2 = Cinemachine_ICameraOverrideStack_TypeInfo;
            if (plVar13 != (long *)0x0) {
              (**(code **)(*plVar13 + 0x558))
                        (plVar13,*(undefined8 *)System_ComponentModel_IChangeTracking_TypeInfo,
                         *(undefined8 *)(*plVar13 + 0x560));
              FUN_07b577e4(0x41600000,plVar13,0);
              FUN_07b57afc(plVar13,2,0);
              FUN_07b57e14(plVar13,0,0);
              FUN_07b584bc(plVar13,1,0);
              (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
              (**(code **)(*plVar13 + 0x2a8))(plVar13,*(undefined8 *)(*plVar13 + 0x2b0));
              uVar14 = FUN_07c99058(plVar13,0);
              plVar15 = (long *)FUN_0476af58(uVar14,*(undefined8 *)puVar2);
              if (plVar15 != (long *)0x0) {
                (**(code **)(*plVar15 + 0x2f8))(plVar15,1,*(undefined8 *)(*plVar15 + 0x300));
                puVar2 = PTR_DAT_0848d0a0;
                if (lVar10 != 0) {
                  lVar10 = FUN_04561560(lVar10,*(undefined8 *)PTR_DAT_0848d0a0);
                  if (DAT_0897502c == '\0') {
                    FUN_03a8a718(PTR_DAT_08488168);
                    DAT_0897502c = '\x01';
                  }
                  if (lVar10 != 0) {
                    FUN_07cab034(**(undefined4 **)(*(long *)puVar1 + 0xb8),
                                 (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],lVar10,0);
                    if (DAT_08975145 == '\0') {
                      FUN_03a8a718(PTR_DAT_08488168);
                      DAT_08975145 = '\x01';
                    }
                    FUN_07cab1c0(*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),
                                 *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),lVar10,0);
                    if (DAT_0897502c == '\0') {
                      FUN_03a8a718(PTR_DAT_08488168);
                      DAT_0897502c = '\x01';
                    }
                    FUN_07cab4d8(**(undefined4 **)(*(long *)puVar1 + 0xb8),
                                 (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],lVar10,0);
                    FUN_07cab8cc(0,0,lVar10,0);
                    FUN_07caba60(0,0,lVar10,0);
                    if (lVar9 != 0) {
                      lVar9 = FUN_04561560(lVar9,*(undefined8 *)puVar2);
                      if (DAT_0897502c == '\0') {
                        FUN_03a8a718(PTR_DAT_08488168);
                        DAT_0897502c = '\x01';
                      }
                      if (lVar9 != 0) {
                        FUN_07cab034(**(undefined4 **)(*(long *)puVar1 + 0xb8),
                                     (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],lVar9,0);
                        if (DAT_08975145 == '\0') {
                          FUN_03a8a718(PTR_DAT_08488168);
                          DAT_08975145 = '\x01';
                        }
                        FUN_07cab1c0(*(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8),
                                     *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc),lVar9,
                                     0);
                        if (DAT_0897502c == '\0') {
                          FUN_03a8a718(PTR_DAT_08488168);
                          DAT_0897502c = '\x01';
                        }
                        FUN_07cab4d8(**(undefined4 **)(*(long *)puVar1 + 0xb8),
                                     (*(undefined4 **)(*(long *)puVar1 + 0xb8))[1],lVar9,0);
                        FUN_07cab8cc(0,0,lVar9,0);
                        FUN_07caba60(0,0,lVar9,0);
                        if (lVar16 != 0) {
                          FUN_07b4b274(lVar16,lVar7,0);
                          FUN_07b4b2d4(lVar16,plVar11,0);
                          FUN_07b4b350(lVar16,plVar13,0);
                          FUN_07b4bc70(lVar16,plVar11[0x1f],0);
                          return uVar8;
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
  FUN_03a8a9c0();
}


