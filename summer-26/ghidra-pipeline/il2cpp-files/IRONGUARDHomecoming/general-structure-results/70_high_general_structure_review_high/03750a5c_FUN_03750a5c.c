/*
FUNCTION_NAME: FUN_03750a5c
ENTRY_POINT: 03750a5c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2
*/


void FUN_03750a5c(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((DAT_048364d5 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(
                      Field_<PrivateImplementationDetails>_AD841F11537FB7FD10FAF049949ECE10DC7D128D90233130D638725321F41CB7
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_SetDefault__);
    thunk_FUN_01efb3a4(
                      Field_<PrivateImplementationDetails>_5F5673AE83EE13B46A7C1D9CE2F8CC01C37CFC893B0AC5E6E9260B79215F5ADC
                      );
    thunk_FUN_01efb3a4(
                      Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                      );
    thunk_FUN_01efb3a4(
                      Field_<PrivateImplementationDetails>_63CEF3E75635BF279329C312B9E2EF75617DD3ADF08A7965FC4529C3A07C3277
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__);
    thunk_FUN_01efb3a4(
                      Field_<PrivateImplementationDetails>_D9404EABEEE336649CF27C1CC9364BCED80D07D587204821F9356F42482E4A91
                      );
    thunk_FUN_01efb3a4(
                      Field_<PrivateImplementationDetails>_2936CA4988382CC6BE6F260F501AB82E1E88B59B67D28D8542EB5E047723EF15
                      );
    thunk_FUN_01efb3a4(
                      Field_<PrivateImplementationDetails>_8A31A40ECAC0CEB4D87B30BD156CA7A547E8E33DC071454B765FBC777D1C34A1
                      );
    thunk_FUN_01efb3a4(
                      Field_<PrivateImplementationDetails>_F896BDF53662965559A9B72F7688053362728FF36310587A81E490CE31BE824E
                      );
    thunk_FUN_01efb3a4(
                      Field_<PrivateImplementationDetails>_FE78C65211DD0B56A97024FB61111E686EF1FE054AA132BA58E2891AC496F1EE
                      );
    thunk_FUN_01efb3a4(
                      Field_<PrivateImplementationDetails>_039E400B4E2D72C49D87613C187F7B3CA3AD0C1917B3BB6692C2EF7FE8C10982
                      );
    thunk_FUN_01efb3a4(
                      Field_<PrivateImplementationDetails>_BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0
                      );
    thunk_FUN_01efb3a4(
                      Field_<PrivateImplementationDetails>_60DC958CF67774CFFC92F48F342F3E8DACFA5BEA4E29BD936EC2DED4619A8DD4
                      );
    thunk_FUN_01efb3a4(
                      Field_<PrivateImplementationDetails>_957406FF263425423B0A3671FE61C53CC3BA4414A3BB642EFF8E69272BF94282
                      );
    thunk_FUN_01efb3a4(
                      Field_<PrivateImplementationDetails>_B17D6558E566D08CBA1C7546A87BB503639A71D27B9F2C5806B6DF9BA3703647
                      );
    DAT_048364d5 = 1;
  }
  uStack_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  plVar3 = *(long **)(param_2 + 0x10);
  if (plVar3 == (long *)0x0) goto LAB_03750f8c;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x1a8))
                             (plVar3,*(undefined8 *)
                                      Field_<PrivateImplementationDetails>_039E400B4E2D72C49D87613C187F7B3CA3AD0C1917B3BB6692C2EF7FE8C10982
                              ,*(undefined8 *)(*plVar3 + 0x1b0));
  if (plVar3 == (long *)0x0) goto LAB_03750f8c;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x188))(plVar3,param_3,*(undefined8 *)(*plVar3 + 400));
  if (plVar3 == (long *)0x0) goto LAB_03750f8c;
  plVar4 = (long *)(**(code **)(*plVar3 + 0x1a8))
                             (plVar3,*(undefined8 *)
                                      Field_<PrivateImplementationDetails>_8A31A40ECAC0CEB4D87B30BD156CA7A547E8E33DC071454B765FBC777D1C34A1
                              ,*(undefined8 *)(*plVar3 + 0x1b0));
  uVar5 = FUN_037ef4f0(plVar4,0,0);
  if ((uVar5 & 1) == 0) {
    lVar8 = *plVar3;
    plVar4 = plVar3;
LAB_03750c28:
    plVar4 = (long *)(**(code **)(lVar8 + 0x1a8))
                               (plVar4,*(undefined8 *)
                                        Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__
                                ,*(undefined8 *)(lVar8 + 0x1b0));
    if (plVar4 == (long *)0x0) goto LAB_03750f8c;
    uVar2 = (**(code **)(*plVar4 + 0x328))(plVar4,*(undefined8 *)(*plVar4 + 0x330));
  }
  else {
    if (plVar4 == (long *)0x0) goto LAB_03750f8c;
    plVar4 = (long *)(**(code **)(*plVar4 + 0x1a8))
                               (plVar4,*(undefined8 *)
                                        Field_<PrivateImplementationDetails>_B17D6558E566D08CBA1C7546A87BB503639A71D27B9F2C5806B6DF9BA3703647
                                ,*(undefined8 *)(*plVar4 + 0x1b0));
    uVar5 = FUN_037ef4f0(plVar4,0,0);
    if ((uVar5 & 1) != 0) {
      if (plVar4 == (long *)0x0) goto LAB_03750f8c;
      lVar8 = *plVar4;
      goto LAB_03750c28;
    }
    uVar2 = 0xffffffff;
  }
  plVar4 = *(long **)(param_2 + 0x10);
  if (plVar4 != (long *)0x0) {
    plVar4 = (long *)(**(code **)(*plVar4 + 0x1a8))
                               (plVar4,*(undefined8 *)
                                        Field_<PrivateImplementationDetails>_F896BDF53662965559A9B72F7688053362728FF36310587A81E490CE31BE824E
                                ,*(undefined8 *)(*plVar4 + 0x1b0));
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x188))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 400));
      uStack_58 = 0;
      local_60 = 0;
      local_48 = 0;
      local_50 = 0;
      if (plVar4 != (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar4 + 0x1a8))
                                   (plVar4,*(undefined8 *)
                                            Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_SetDefault__
                                    ,*(undefined8 *)(*plVar4 + 0x1b0));
        if (plVar6 != (long *)0x0) {
          uVar7 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
          uVar5 = FUN_0340eec4(uVar7,0);
          if ((uVar5 & 1) == 0) {
            local_48 = uVar7;
            thunk_FUN_01f51358(&local_48,uVar7);
LAB_03750f6c:
            param_1[1] = uStack_58;
            *param_1 = local_60;
            param_1[3] = local_48;
            param_1[2] = local_50;
            return;
          }
          plVar3 = (long *)(**(code **)(*plVar3 + 0x1a8))
                                     (plVar3,*(undefined8 *)
                                              Field_<PrivateImplementationDetails>_63CEF3E75635BF279329C312B9E2EF75617DD3ADF08A7965FC4529C3A07C3277
                                      ,*(undefined8 *)(*plVar3 + 0x1b0));
          if (plVar3 != (long *)0x0) {
            uVar2 = (**(code **)(*plVar3 + 0x328))(plVar3,*(undefined8 *)(*plVar3 + 0x330));
            plVar3 = *(long **)(param_2 + 0x10);
            if (plVar3 != (long *)0x0) {
              plVar3 = (long *)(**(code **)(*plVar3 + 0x1a8))
                                         (plVar3,*(undefined8 *)
                                                  Field_<PrivateImplementationDetails>_BCBC01A5036673E493422616677A83718EDFE475D3E938B1A879903FFB2A05A0
                                          ,*(undefined8 *)(*plVar3 + 0x1b0));
              if (plVar3 != (long *)0x0) {
                (**(code **)(*plVar3 + 0x188))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 400));
                plVar3 = (long *)(**(code **)(*plVar4 + 0x1a8))
                                           (plVar4,*(undefined8 *)
                                                                                                        
                                                  Field_<PrivateImplementationDetails>_5F5673AE83EE13B46A7C1D9CE2F8CC01C37CFC893B0AC5E6E9260B79215F5ADC
                                            ,*(undefined8 *)(*plVar4 + 0x1b0));
                if (plVar3 != (long *)0x0) {
                  uVar2 = (**(code **)(*plVar3 + 0x328))(plVar3,*(undefined8 *)(*plVar3 + 0x330));
                  plVar3 = *(long **)(param_2 + 0x10);
                  if (plVar3 != (long *)0x0) {
                    plVar3 = (long *)(**(code **)(*plVar3 + 0x1a8))
                                               (plVar3,*(undefined8 *)
                                                                                                                
                                                  Field_<PrivateImplementationDetails>_60DC958CF67774CFFC92F48F342F3E8DACFA5BEA4E29BD936EC2DED4619A8DD4
                                                ,*(undefined8 *)(*plVar3 + 0x1b0));
                    if (plVar3 != (long *)0x0) {
                      uVar7 = (**(code **)(*plVar3 + 0x188))
                                        (plVar3,uVar2,*(undefined8 *)(*plVar3 + 400));
                      uVar9 = *(undefined8 *)(param_2 + 0x10);
                      lVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                                  Field_<PrivateImplementationDetails>_AD841F11537FB7FD10FAF049949ECE10DC7D128D90233130D638725321F41CB7
                                                );
                      FUN_0374913c(lVar8,uVar7,uVar9,1,0);
                      puVar1 = 
                      Field_<PrivateImplementationDetails>_2936CA4988382CC6BE6F260F501AB82E1E88B59B67D28D8542EB5E047723EF15
                      ;
                      plVar3 = (long *)(**(code **)(*plVar4 + 0x1a8))
                                                 (plVar4,*(undefined8 *)
                                                                                                                    
                                                  Field_<PrivateImplementationDetails>_2936CA4988382CC6BE6F260F501AB82E1E88B59B67D28D8542EB5E047723EF15
                                                  ,*(undefined8 *)(*plVar4 + 0x1b0));
                      if (plVar3 != (long *)0x0) {
                        uVar7 = (**(code **)(*plVar3 + 0x1c8))
                                          (plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
                        uVar5 = thunk_FUN_0340e318(uVar7,*(undefined8 *)
                                                                                                                    
                                                  Field_<PrivateImplementationDetails>_957406FF263425423B0A3671FE61C53CC3BA4414A3BB642EFF8E69272BF94282
                                                  ,0);
                        if ((uVar5 & 1) == 0) {
                          uVar5 = thunk_FUN_0340e318(uVar7,*(undefined8 *)
                                                                                                                        
                                                  Field_<PrivateImplementationDetails>_D9404EABEEE336649CF27C1CC9364BCED80D07D587204821F9356F42482E4A91
                                                  ,0);
                          if ((uVar5 & 1) == 0) {
                            plVar3 = (long *)(**(code **)(*plVar4 + 0x1a8))
                                                       (plVar4,*(undefined8 *)puVar1,
                                                        *(undefined8 *)(*plVar4 + 0x1b0));
                            if (plVar3 != (long *)0x0) {
                              uVar7 = (**(code **)(*plVar3 + 0x1c8))
                                                (plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
                              uVar7 = FUN_0340ebc0(*(undefined8 *)
                                                                                                        
                                                  Field_<PrivateImplementationDetails>_FE78C65211DD0B56A97024FB61111E686EF1FE054AA132BA58E2891AC496F1EE
                                                  ,uVar7,*(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Platform_Callback_SetNotificationCallback<NetSyncSessionsChangedNotification>__
                                                  ,0);
                              if (*(int *)(*(long *)
                                            Method_Unity_Collections_NativeArray<byte>_ToArray__ +
                                          0xe0) == 0) {
                                thunk_FUN_01ee6d7c(*(long *)
                                                  Method_Unity_Collections_NativeArray<byte>_ToArray__
                                                  );
                              }
                              FUN_0403f2cc(uVar7,0);
                              goto LAB_03750f6c;
                            }
                            goto LAB_03750f8c;
                          }
                          local_b0 = *(undefined8 *)(param_2 + 0x30);
                          uStack_b8 = *(undefined8 *)(param_2 + 0x28);
                          local_c0 = *(undefined8 *)(param_2 + 0x20);
                          local_80 = local_c0;
                          uStack_78 = uStack_b8;
                          local_70 = local_b0;
                          if (lVar8 == 0) goto LAB_03750f8c;
                          local_60 = FUN_0374ae3c(lVar8,&local_c0,0);
                          thunk_FUN_01f51358(&local_60,local_60);
                          uVar2 = 2;
                        }
                        else {
                          local_90 = *(undefined8 *)(param_2 + 0x30);
                          uStack_98 = *(undefined8 *)(param_2 + 0x28);
                          local_a0 = *(undefined8 *)(param_2 + 0x20);
                          local_80 = local_a0;
                          uStack_78 = uStack_98;
                          local_70 = local_90;
                          if (lVar8 == 0) goto LAB_03750f8c;
                          local_60 = FUN_0374ae3c(lVar8,&local_a0,0);
                          thunk_FUN_01f51358(&local_60,local_60);
                          uVar2 = 1;
                        }
                        local_50 = CONCAT44(local_50._4_4_,uVar2);
                        goto LAB_03750f6c;
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
LAB_03750f8c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


