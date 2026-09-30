/*
FUNCTION_NAME: FUN_01b10940
ENTRY_POINT: 01b10940
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01b10940(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  long local_68;
  
  puVar1 = Method_OVRControllerTest_<>c_<Start>b__4_26__;
  if ((DAT_0377d25a & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_26__);
    thunk_FUN_00d48444(
                      UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass6_0_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_LocalDataStoreSlot>_Add__
                      );
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_93_0_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Pose___TypeInfo);
    thunk_FUN_00d48444(TMPro_KerningTable_<>c__DisplayClass3_0_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_GetEnumerator__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f3868);
    thunk_FUN_00d48444(StringLiteral_8403);
    thunk_FUN_00d48444(PTR_DAT_033f6830);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_28057B619BAF672A05E1585ED28F174E67FE946D81BDAA0691F07AB772057B02
                      );
    DAT_0377d25a = 1;
  }
  FUN_010c2c5c(param_4,&local_68,*(undefined8 *)puVar1);
  *(long *)(param_4 + 0x20) = local_68;
  puVar2 = PTR_DAT_033f6830;
  puVar1 = PTR_DAT_033f3868;
  if (local_68 != 0) {
    FUN_010c2c5c(local_68,&local_68,
                 *(undefined8 *)
                  UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass6_0_TypeInfo
                );
    *(long *)(param_4 + 0x18) = local_68;
    uVar7 = FUN_0268b6ac(param_4,0);
    uVar7 = FUN_015f5b28(uVar7,*(undefined8 *)puVar2,0);
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar8 != 0) {
      FUN_0268afbc(lVar8,uVar7,0);
      FUN_0268c458(lVar8,0x3d,0);
      lVar9 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (lVar8,0);
      uVar7 = FUN_0268fd10(param_4,0);
      puVar2 = Method_System_Collections_Generic_Dictionary<string,_LocalDataStoreSlot>_Add__;
      if (lVar9 != 0) {
        FUN_026a0040(lVar9,uVar7,0,0);
        lVar8 = FUN_010e5800(lVar8,*(undefined8 *)puVar2);
        *(long *)(param_4 + 0x28) = lVar8;
        if (lVar8 != 0) {
          FUN_026853f4(lVar8,0,0);
          if (*(long *)(param_4 + 0x28) != 0) {
            lVar8 = FUN_0268fd10(*(long *)(param_4 + 0x28),0);
            lVar9 = FUN_0268fd10(param_4,0);
            if (lVar9 != 0) {
              fVar10 = (float)FUN_0269f578(lVar9,0);
              fVar12 = param_2;
              fVar13 = param_3;
              lVar9 = FUN_0268fd10(param_4,0);
              if ((lVar9 != 0) && (fVar11 = (float)FUN_0269fb58(lVar9,0), lVar8 != 0)) {
                FUN_0269f618(fVar10 - fVar11,param_2 - fVar12,param_3 - fVar13,lVar8,0);
                if (*(long *)(param_4 + 0x28) != 0) {
                  FUN_0268427c(*(long *)(param_4 + 0x28),1,0);
                  if (*(long *)(param_4 + 0x28) != 0) {
                    FUN_02689f9c(*(long *)(param_4 + 0x28),0,0);
                    if (*(long *)(param_4 + 0x28) != 0) {
                      FUN_02684674(*(long *)(param_4 + 0x28),2,0);
                      if (*(long *)(param_4 + 0x28) != 0) {
                        FUN_026845a0(0,0,0,0,*(long *)(param_4 + 0x28),0);
                        if (*(long *)(param_4 + 0x28) != 0) {
                          FUN_02683e98(DAT_02940108,*(long *)(param_4 + 0x28),0);
                          puVar2 = 
                          Field_<PrivateImplementationDetails>_28057B619BAF672A05E1585ED28F174E67FE946D81BDAA0691F07AB772057B02
                          ;
                          if (*(long *)(param_4 + 0x28) != 0) {
                            FUN_02683f20(DAT_02940f70,*(long *)(param_4 + 0x28),0);
                            uVar7 = FUN_0268b6ac(param_4,0);
                            uVar7 = FUN_015f5b28(uVar7,*(undefined8 *)puVar2,0);
                            lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                            if (lVar8 != 0) {
                              FUN_0268afbc(lVar8,uVar7,0);
                              FUN_0268c458(lVar8,0x3d,0);
                              lVar9 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                                (lVar8,0);
                              uVar7 = FUN_0268fd10(param_4,0);
                              puVar5 = StringLiteral_8403;
                              puVar4 = OVRPlugin_OVRP_1_93_0_TypeInfo;
                              puVar3 = TMPro_KerningTable_<>c__DisplayClass3_0_TypeInfo;
                              puVar2 = UnityEngine_Pose___TypeInfo;
                              if (lVar9 != 0) {
                                FUN_026a0040(lVar9,uVar7,0,0);
                                FUN_010e5800(lVar8,*(undefined8 *)puVar4);
                                uVar7 = FUN_010e5800(lVar8,*(undefined8 *)puVar2);
                                *(undefined8 *)(param_4 + 0x38) = uVar7;
                                uVar7 = FUN_010e5800(lVar8,*(undefined8 *)puVar3);
                                *(undefined8 *)(param_4 + 0x40) = uVar7;
                                uVar7 = FUN_0268b6ac(param_4,0);
                                uVar7 = FUN_015f5b28(uVar7,*(undefined8 *)puVar5,0);
                                lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                if (lVar8 != 0) {
                                  FUN_0268afbc(lVar8,uVar7,0);
                                  FUN_0268c458(lVar8,0x3d,0);
                                  lVar9 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                                                    (lVar8,0);
                                  uVar7 = FUN_0268fd10(param_4,0);
                                  puVar1 = 
                                  Method_System_Collections_Generic_Dictionary<string,_Dictionary<Type,_Dictionary<InstanceHandle,_Inspector>>>_GetEnumerator__
                                  ;
                                  if (lVar9 != 0) {
                                    FUN_026a0040(lVar9,uVar7,0,0);
                                    lVar8 = FUN_010e5800(lVar8,*(undefined8 *)puVar1);
                                    *(long *)(param_4 + 0x30) = lVar8;
                                    if (lVar8 != 0) {
                                      FUN_02689f9c(lVar8,0,0);
                                      lVar8 = *(long *)(param_4 + 0x30);
                                      if (lVar8 != 0) {
                                        *(undefined1 *)(lVar8 + 0x1c) = 1;
                                        *(undefined1 *)(lVar8 + 0xdc) = 1;
                                        *(undefined1 *)(lVar8 + 0xf8) = 1;
                                        *(undefined4 *)(lVar8 + 0x18) = 1;
                                        bVar6 = FUN_0269e8f0(0);
                                        *(byte *)(param_4 + 0x7d) = bVar6 & 1;
                                        FUN_01b10dc4(param_4);
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


