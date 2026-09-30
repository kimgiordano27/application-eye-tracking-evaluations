/*
FUNCTION_NAME: FUN_0597be54
ENTRY_POINT: 0597be54
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 130
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_17;ray_or_cast_sink_hits_21;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_10
*/


void FUN_0597be54(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  
  puVar1 = Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Contains__;
  if ((DAT_06bc19e0 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cc760);
    FUN_02f08768(PTR_DAT_067c8fb0);
    FUN_02f08768(
                Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_GetEnumerator__
                );
    FUN_02f08768(Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Add__);
    FUN_02f08768(Method_System_Collections_Generic_List<OVRPlugin_Result>_GetEnumerator__);
    FUN_02f08768(Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Contains__);
    FUN_02f08768(PTR_DAT_067cc768);
    FUN_02f08768(Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_get_Count__);
    FUN_02f08768(Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_Add__);
    FUN_02f08768(Method_System_Collections_Generic_List<OVRAnchor_DeferredValue>_RemoveAt__);
    FUN_02f08768(PTR_DAT_067cc770);
    FUN_02f08768(PTR_DAT_067cbf80);
    FUN_02f08768(PTR_DAT_067cc778);
    FUN_02f08768(PTR_DAT_067cbf70);
    FUN_02f08768(System_Net_NetworkInformation_MibIPGlobalProperties_TypeInfo);
    FUN_02f08768(Oculus_Platform_Models_MicrophoneAvailabilityState_TypeInfo);
    FUN_02f08768(PTR_DAT_067d3430);
    FUN_02f08768(PTR_DAT_067ca970);
    FUN_02f08768(PTR_DAT_067cbfa0);
    FUN_02f08768(PTR_DAT_067c9cb8);
    FUN_02f08768(Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_Clear__);
    FUN_02f08768(Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_Sort__);
    FUN_02f08768(Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_get_Count__);
    FUN_02f08768(Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_get_Item__);
    FUN_02f08768(Method_System_Collections_Generic_List<OVRSceneManager_Metrics>_GetEnumerator__);
    FUN_02f08768(Method_System_Collections_Generic_List<OVRSemanticLabels_Classification>__ctor__);
    FUN_02f08768(
                Method_System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>__ctor__
                );
    DAT_06bc19e0 = 1;
  }
  puVar4 = Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_get_Count__;
  puVar3 = Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_GetEnumerator__;
  puVar2 = PTR_DAT_067c9cb8;
  local_78 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_0424d338(param_1,*(undefined8 *)puVar3);
  FUN_0624193c(param_1,*(undefined8 *)puVar4,0);
  FUN_0623f468(param_1,0,0);
  (**(code **)(*param_1 + 0x248))(param_1,1,*(undefined8 *)(*param_1 + 0x250));
  FUN_0636f0c8(param_1,0,0);
  FUN_05987b50(param_1,0,0);
  lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
  FUN_0623f858(lVar8,0);
  puVar3 = Method_System_Collections_Generic_List<OVRSceneManager_Metrics>_GetEnumerator__;
  puVar1 = Method_System_Collections_Generic_List<OVRAnchor_DeferredValue>_RemoveAt__;
  if (lVar8 != 0) {
    FUN_0623f514(lVar8,*(undefined8 *)
                        Method_System_Collections_Generic_List<OVRSceneManager_Metrics>_GetEnumerator__
                 ,0);
    FUN_0623f468(lVar8,1,0);
    uVar16 = *(undefined8 *)puVar3;
    param_1[0x76] = lVar8;
    FUN_0624193c(lVar8,uVar16,0);
    lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
    FUN_05979518();
    puVar4 = Method_System_Collections_Generic_List<OVRSemanticLabels_Classification>__ctor__;
    puVar3 = Oculus_Platform_Models_MicrophoneAvailabilityState_TypeInfo;
    puVar1 = PTR_DAT_067d3430;
    if (lVar8 != 0) {
      FUN_0623f514(lVar8,*(undefined8 *)
                          Method_System_Collections_Generic_List<OVRSemanticLabels_Classification>__ctor__
                   ,0);
      FUN_0623f468(lVar8,1,0);
      uVar16 = *(undefined8 *)puVar4;
      param_1[0x75] = lVar8;
      FUN_0624193c(lVar8,uVar16,0);
      lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
      FUN_060daf1c(lVar8,0);
      lVar9 = FUN_02f0880c(*(undefined8 *)puVar3,2);
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      FUN_060dadb4(0x3f800000,0,0,0x3f800000,0,&local_90,0);
      if (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x18) != 0) {
          *(undefined8 *)(lVar9 + 0x28) = uStack_88;
          *(undefined8 *)(lVar9 + 0x20) = local_90;
          *(undefined4 *)(lVar9 + 0x30) = local_80;
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
          FUN_060dadb4(0x3f800000,0,0,0x3f800000,0x3f800000,&local_a8,0);
          puVar1 = System_Net_NetworkInformation_MibIPGlobalProperties_TypeInfo;
          if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) != 0) {
            *(undefined4 *)(lVar9 + 0x44) = local_98;
            *(undefined8 *)(lVar9 + 0x3c) = uStack_a0;
            *(undefined8 *)(lVar9 + 0x34) = local_a8;
            lVar10 = FUN_02f0880c(*(undefined8 *)puVar1,2);
            local_b0 = 0;
            FUN_060dadc4(0,0,&local_b0,0);
            if (lVar10 == 0) goto LAB_0597c79c;
            if (*(int *)(lVar10 + 0x18) != 0) {
              *(undefined8 *)(lVar10 + 0x20) = local_b0;
              local_b8 = 0;
              FUN_060dadc4(0x3f800000,0x3f800000,&local_b8,0);
              if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar10 + 0x28) = local_b8;
                if (lVar8 != 0) {
                  FUN_060db8c0(lVar8,lVar9,lVar10,0);
                  if (param_1[0x75] != 0) {
                    *(long *)(param_1[0x75] + 0x2d0) = lVar8;
                    FUN_0597db1c();
                    lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                    FUN_0623f858(lVar8,0);
                    puVar1 = 
                    Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_get_Item__;
                    if (lVar8 != 0) {
                      FUN_0623f514(lVar8,*(undefined8 *)
                                          Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_get_Item__
                                   ,0);
                      FUN_0623c078(lVar8,8,0);
                      FUN_0623f468(lVar8,1,0);
                      uVar16 = *(undefined8 *)puVar1;
                      param_1[0x7a] = lVar8;
                      FUN_0624193c(lVar8,uVar16,0);
                      if (param_1[0x7a] != 0) {
                        plVar11 = (long *)FUN_0623cb0c(param_1[0x7a],0);
                        FUN_0625b764(&local_cc,0,0,0,0,0);
                        if (plVar11 != (long *)0x0) {
                          lVar8 = *plVar11;
                          uVar17 = (ulong)*(ushort *)(lVar8 + 0x12e);
                          if (uVar17 != 0) {
                            piVar18 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_067ca970) {
                                puVar12 = (undefined8 *)
                                          (lVar8 + (long)(*piVar18 + 7) * 0x10 + 0x138);
                                goto LAB_0597c36c;
                              }
                              uVar17 = uVar17 - 1;
                              piVar18 = piVar18 + 4;
                            } while (uVar17 != 0);
                          }
                          puVar12 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)PTR_DAT_067ca970,7);
LAB_0597c36c:
                          uStack_68 = uStack_c4;
                          local_70 = local_cc;
                          local_60 = local_bc;
                          (*(code *)*puVar12)(plVar11,&local_70,puVar12[1]);
                          lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                          FUN_0623f858(lVar8,0);
                          puVar1 = 
                          Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_Sort__;
                          if (lVar8 != 0) {
                            FUN_0623f514(lVar8,*(undefined8 *)
                                                Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_Sort__
                                         ,0);
                            FUN_0623f468(lVar8,0,0);
                            uVar16 = *(undefined8 *)puVar1;
                            param_1[0x79] = lVar8;
                            FUN_0624193c(lVar8,uVar16,0);
                            lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                            FUN_0623f858(lVar8,0);
                            puVar2 = 
                            Method_System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>__ctor__
                            ;
                            puVar1 = PTR_DAT_067cbf70;
                            if (lVar8 != 0) {
                              FUN_0623f514(lVar8,*(undefined8 *)
                                                  Method_System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>__ctor__
                                           ,0);
                              FUN_0623f468(lVar8,1,0);
                              FUN_0623c078(lVar8,1,0);
                              uVar16 = *(undefined8 *)puVar2;
                              param_1[0x78] = lVar8;
                              FUN_0624193c(lVar8,uVar16,0);
                              lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                              FUN_059890fc(lVar8,0);
                              puVar1 = 
                              Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_Clear__
                              ;
                              if (lVar8 != 0) {
                                FUN_0623f514(lVar8,*(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_Clear__
                                             ,0);
                                FUN_0623f468(lVar8,1,0);
                                FUN_05987b50(lVar8,0x27,0);
                                uVar16 = *(undefined8 *)puVar1;
                                param_1[0x77] = lVar8;
                                FUN_0624193c(lVar8,uVar16,0);
                                local_78 = param_1[0x4c];
                                FUN_0624b7dc(&local_78,param_1[0x76],0);
                                if (param_1[0x76] != 0) {
                                  local_78 = *(long *)(param_1[0x76] + 0x260);
                                  FUN_0624b7dc(&local_78,param_1[0x75],0);
                                  local_78 = param_1[0x4c];
                                  FUN_0624b7dc(&local_78,param_1[0x79],0);
                                  if (param_1[0x79] != 0) {
                                    local_78 = *(long *)(param_1[0x79] + 0x260);
                                    FUN_0624b7dc(&local_78,param_1[0x78],0);
                                    if (param_1[0x78] != 0) {
                                      local_78 = *(long *)(param_1[0x78] + 0x260);
                                      FUN_0624b7dc(&local_78,param_1[0x77],0);
                                      puVar5 = 
                                      Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_Add__
                                      ;
                                      puVar4 = 
                                      Method_System_Collections_Generic_List<OVRPlugin_Result>_GetEnumerator__
                                      ;
                                      puVar3 = PTR_DAT_067cc770;
                                      puVar2 = PTR_DAT_067cc760;
                                      puVar1 = PTR_DAT_067c8fb0;
                                      if (param_1[0x77] != 0) {
                                        local_78 = *(long *)(param_1[0x77] + 0x260);
                                        FUN_0624b7dc(&local_78,param_1[0x7a],0);
                                        FUN_06296a18(param_1[0x75],0);
                                        FUN_0597ba4c(param_1,2);
                                        FUN_0424d498(0,param_1,*(undefined8 *)puVar4);
                                        FUN_0424d574(0x3f800000,param_1,*(undefined8 *)puVar5);
                                        FUN_0597bba4(DAT_011b0190,param_1);
                                        (**(code **)(*param_1 + 0xae8))
                                                  (0,param_1,*(undefined8 *)(*param_1 + 0xaf0));
                                        uVar16 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                                        FUN_05054f60(uVar16,param_1,
                                                     *(undefined8 *)(*param_1 + 0xba0),0);
                                        uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                        FUN_0476105c(uVar13,param_1,
                                                     *(undefined8 *)(*param_1 + 0xb60),0);
                                        uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                        FUN_0476105c(uVar14,param_1,
                                                     *(undefined8 *)(*param_1 + 0xb40),0);
                                        uVar15 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                        FUN_0476105c(uVar15,param_1,
                                                     *(undefined8 *)(*param_1 + 0xb50),0);
                                        lVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                                        FUN_059e1eb0(lVar8,uVar16,uVar13,uVar14,uVar15,0);
                                        puVar7 = 
                                        Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>_Add__
                                        ;
                                        puVar6 = 
                                        Method_System_Collections_Generic_List<OVRRaycaster_RaycastHit>__ctor__
                                        ;
                                        puVar5 = 
                                        Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_get_Count__
                                        ;
                                        puVar4 = PTR_DAT_067cc778;
                                        puVar3 = PTR_DAT_067cc768;
                                        puVar2 = PTR_DAT_067cbfa0;
                                        puVar1 = PTR_DAT_067cbf80;
                                        if (lVar8 != 0) {
                                          lVar9 = param_1[0x79];
                                          *(undefined4 *)(lVar8 + 300) = 1;
                                          param_1[0x6f] = lVar8;
                                          FUN_06296d34(lVar9,lVar8,0);
                                          uVar16 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                                          FUN_04d8cf5c(uVar16,param_1,*(undefined8 *)puVar6,0);
                                          uVar13 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
                                          FUN_04d8cf5c(uVar13,param_1,*(undefined8 *)puVar7,0);
                                          uVar14 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
                                          FUN_059e3888(uVar14,uVar16,uVar13,0,0);
                                          FUN_06296d34(param_1,uVar14,0);
                                          uVar16 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                                          FUN_04d8cf5c(uVar16,param_1,*(undefined8 *)puVar5,0);
                                          FUN_0334c444(param_1,uVar16,0,*(undefined8 *)puVar3);
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
                goto LAB_0597c79c;
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
    }
  }
LAB_0597c79c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


