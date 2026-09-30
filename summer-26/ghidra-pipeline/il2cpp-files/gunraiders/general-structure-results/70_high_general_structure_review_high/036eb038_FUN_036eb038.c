/*
FUNCTION_NAME: FUN_036eb038
ENTRY_POINT: 036eb038
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_036eb038(long param_1,long param_2,undefined8 param_3,long param_4,ulong param_5,
                 long param_6,uint param_7)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int *piVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  int local_64;
  
  if ((DAT_04538850 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422fa10);
    FUN_01c5d288(PTR_DAT_042305b0);
    FUN_01c5d288(Method_System_Lazy<VolumeManager>_get_Value__);
    FUN_01c5d288(PTR_DAT_0422fb88);
    FUN_01c5d288(PTR_DAT_0422fd80);
    FUN_01c5d288(
                Method_Unity_Services_Core_Internal_CoreRegistry_GetServiceComponent<IProjectConfiguration>__
                );
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(Method_System_Security_Cryptography_DSACryptoServiceProvider_ExportParameters__);
    FUN_01c5d288(Method_System_Linq_Enumerable_Select<MqttTopicFilter,_string>__);
    FUN_01c5d288(Method_System_Linq_Enumerable_Select<MqttUnsubscribeReasonCode,_string>__);
    FUN_01c5d288(Method_System_Security_Cryptography_DSA_FromXmlString__);
    FUN_01c5d288(PTR_DAT_042341b8);
    FUN_01c5d288(Method_System_Linq_Enumerable_Where<CoinAmount_Sku>__);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToList<Edge>__);
    FUN_01c5d288(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<Initialize>d__36>__
                );
    FUN_01c5d288(Method_System_Linq_Enumerable_Where<Collider>__);
    FUN_01c5d288(
                VoxelBusters_EssentialKit_GameServicesCore_Android_NativeLoadLocalPlayerScoreListener_TypeInfo
                );
    FUN_01c5d288(Method_System_Linq_Enumerable_Where<KeyValuePair<string,_JSONNode>>__);
    DAT_04538850 = 1;
  }
  local_64 = 0;
  if (*(char *)(param_1 + 0xa0) != '\0') {
    if (param_4 == 0) goto LAB_036eb390;
    if (*(long *)(param_4 + 0xf8) != 0) {
      return;
    }
  }
  if ((param_2 == 0) || (lVar9 = FUN_03803138(param_2,0), lVar9 == 0)) goto LAB_036eb390;
  if (*(long *)(lVar9 + 0x10) == 0) {
LAB_036eb24c:
    plVar12 = *(long **)(param_2 + 0x60);
    if (plVar12 != (long *)0x0) {
      bVar2 = *(byte *)(*(long *)Method_System_Linq_Enumerable_Select<MqttTopicFilter,_string>__ +
                       0x130);
      if ((bVar2 <= *(byte *)(*plVar12 + 0x130)) &&
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) ==
          *(long *)Method_System_Linq_Enumerable_Select<MqttTopicFilter,_string>__)) {
        lVar9 = FUN_03803138(plVar12,0);
        if (lVar9 == 0) goto LAB_036eb390;
        uVar10 = FUN_031529f8(*(undefined8 *)(lVar9 + 0x18),
                              *(undefined8 *)
                               VoxelBusters_EssentialKit_GameServicesCore_Android_NativeLoadLocalPlayerScoreListener_TypeInfo
                              ,0);
        if ((uVar10 & 1) != 0) {
          lVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                       Method_Unity_Services_Core_Internal_CoreRegistry_GetServiceComponent<IProjectConfiguration>__
                                     );
          FUN_036d7ca0(lVar11,param_2,0);
          lVar9 = lVar11;
          do {
            lVar21 = lVar9;
            if (lVar21 == 0) goto LAB_036eb390;
            lVar9 = *(long *)(lVar21 + 0x18);
          } while (*(long *)(lVar21 + 0x18) != 0);
          uVar13 = FUN_036eeff4(param_1,*(undefined8 *)(lVar21 + 0x10));
          if (lVar11 == 0) goto LAB_036eb390;
          param_3 = *(undefined8 *)(lVar11 + 0x28);
          goto LAB_036eb310;
        }
      }
    }
    uVar13 = FUN_036eeff4(param_1,param_3);
    lVar11 = 0;
  }
  else {
    lVar9 = FUN_03803138(param_2,0);
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) goto LAB_036eb390;
    if (*(int *)(*(long *)(lVar9 + 0x10) + 0x10) == 0) goto LAB_036eb24c;
    lVar9 = FUN_03803138(param_2,0);
    if (lVar9 == 0) goto LAB_036eb390;
    uVar10 = FUN_031529f8(*(undefined8 *)(lVar9 + 0x18),
                          *(undefined8 *)
                           VoxelBusters_EssentialKit_GameServicesCore_Android_NativeLoadLocalPlayerScoreListener_TypeInfo
                          ,0);
    if ((uVar10 & 1) == 0) goto LAB_036eb24c;
    lVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                 Method_Unity_Services_Core_Internal_CoreRegistry_GetServiceComponent<IProjectConfiguration>__
                               );
    FUN_036d7ca0(lVar11,param_2,0);
    plVar12 = (long *)FUN_03803138(param_2,0);
    if (plVar12 == (long *)0x0) goto LAB_036eb390;
    param_3 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    plVar12 = (long *)FUN_03803138(param_2,0);
    if (plVar12 == (long *)0x0) goto LAB_036eb390;
    uVar13 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    uVar13 = FUN_036eeff4(param_1,uVar13);
  }
LAB_036eb310:
  if (param_4 == 0) goto LAB_036eb390;
  if (*(char *)(param_1 + 0xa0) != '\0') {
    uVar14 = FUN_03146988(*(undefined8 *)(param_4 + 0x90),
                          *(undefined8 *)Method_System_Linq_Enumerable_Where<Collider>__,0);
    lVar9 = *(long *)(param_4 + 0x40);
    if (lVar9 != 0) {
      iVar18 = 0;
      do {
        lVar9 = FUN_036a3244(lVar9,uVar14,0);
        if (lVar9 == 0) goto LAB_036eb3ac;
        local_64 = iVar18;
        uVar15 = FUN_032cf308(&local_64,0);
        uVar14 = FUN_03146988(uVar14,uVar15,0);
        lVar9 = *(long *)(param_4 + 0x40);
        iVar18 = iVar18 + 1;
      } while (lVar9 != 0);
    }
    goto LAB_036eb390;
  }
  uVar14 = FUN_03146988(*(undefined8 *)(param_4 + 0x90),
                        *(undefined8 *)Method_System_Linq_Enumerable_Where<CoinAmount_Sku>__,0);
LAB_036eb3ac:
  if ((param_5 & 1) == 0) {
    if (*(long *)(param_4 + 0x40) == 0) goto LAB_036eb390;
    uVar10 = FUN_036a6a14(*(long *)(param_4 + 0x40),uVar14,1,0);
    if ((uVar10 & 1) == 0) goto System_Xml_Schema_XdrBuilder__XDR_BuildGroup_MaxOccurs;
    if (*(long *)(param_4 + 0x40) == 0) goto LAB_036eb390;
    lVar9 = FUN_036a3244(*(long *)(param_4 + 0x40),uVar14,0);
    bVar3 = false;
  }
  else {
System_Xml_Schema_XdrBuilder__XDR_BuildGroup_MaxOccurs:
    lVar9 = thunk_FUN_01c496e0(*(undefined8 *)Method_System_Lazy<VolumeManager>_get_Value__);
    FUN_036803cc(lVar9,uVar14,uVar13,0,3,0);
    bVar3 = true;
  }
  puVar4 = PTR_DAT_042305b0;
  if (*(int *)(*(long *)
                Method_System_Security_Cryptography_DSACryptoServiceProvider_ExportParameters__ +
              0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_036e1324(lVar9,param_6);
  FUN_036e1c18(param_1,lVar9,param_6);
  FUN_036e1888(lVar9,param_6);
  local_64 = -1;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar13 = FUN_03295560(0);
  uVar13 = FUN_032cf44c(&local_64,uVar13,0);
  if (lVar9 == 0) goto LAB_036eb390;
  FUN_036810a4(lVar9,param_7 & 1,0);
  puVar7 = Method_System_Linq_Enumerable_Where<KeyValuePair<string,_JSONNode>>__;
  puVar6 = Method_System_Linq_Enumerable_ToList<Edge>__;
  puVar5 = Method_System_Security_Cryptography_DSA_FromXmlString__;
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<Initialize>d__36>__
  ;
  if ((param_6 == 0) || (uVar1 = *(uint *)(param_6 + 0x18), (int)uVar1 < 1)) {
    lVar21 = 0;
  }
  else {
    lVar20 = 0;
    lVar21 = 0;
    lVar17 = param_6 + 0x20;
    do {
      uVar19 = (uint)lVar20;
      if (uVar1 <= uVar19) {
LAB_036eb900:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar12 = *(long **)(lVar17 + lVar20 * 8);
      if (plVar12 == (long *)0x0) goto LAB_036eb390;
      uVar14 = (**(code **)(*plVar12 + 0x378))(plVar12,*(undefined8 *)(*plVar12 + 0x380));
      uVar10 = thunk_FUN_03152714(uVar14,*(undefined8 *)puVar7,0);
      if ((uVar10 & 1) != 0) {
        if (*(uint *)(param_6 + 0x18) <= uVar19) goto LAB_036eb900;
        plVar12 = *(long **)(lVar17 + lVar20 * 8);
        if (plVar12 == (long *)0x0) goto LAB_036eb390;
        uVar14 = (**(code **)(*plVar12 + 0x348))(plVar12,*(undefined8 *)(*plVar12 + 0x350));
        uVar10 = thunk_FUN_03152714(uVar14,*(undefined8 *)puVar5,0);
        if ((uVar10 & 1) != 0) {
          if (*(uint *)(param_6 + 0x18) <= uVar19) goto LAB_036eb900;
          plVar12 = *(long **)(lVar17 + lVar20 * 8);
          if (plVar12 == (long *)0x0) goto LAB_036eb390;
          uVar14 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
          uVar10 = thunk_FUN_03152714(uVar14,*(undefined8 *)PTR_DAT_042341b8,0);
          if ((uVar10 & 1) != 0) {
            FUN_036810a4(lVar9,0,0);
          }
        }
      }
      if (*(uint *)(param_6 + 0x18) <= uVar19) goto LAB_036eb900;
      plVar12 = *(long **)(lVar17 + lVar20 * 8);
      if (plVar12 == (long *)0x0) goto LAB_036eb390;
      uVar14 = (**(code **)(*plVar12 + 0x378))(plVar12,*(undefined8 *)(*plVar12 + 0x380));
      uVar10 = thunk_FUN_03152714(uVar14,*(undefined8 *)puVar6,0);
      if ((uVar10 & 1) != 0) {
        if (*(uint *)(param_6 + 0x18) <= uVar19) goto LAB_036eb900;
        plVar12 = *(long **)(lVar17 + lVar20 * 8);
        if (plVar12 == (long *)0x0) goto LAB_036eb390;
        uVar14 = (**(code **)(*plVar12 + 0x348))(plVar12,*(undefined8 *)(*plVar12 + 0x350));
        uVar10 = thunk_FUN_03152714(uVar14,*(undefined8 *)puVar5,0);
        if ((uVar10 & 1) != 0) {
          if (*(uint *)(param_6 + 0x18) <= uVar19) goto LAB_036eb900;
          plVar12 = *(long **)(lVar17 + lVar20 * 8);
          if (plVar12 == (long *)0x0) goto LAB_036eb390;
          uVar13 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
        }
      }
      if (*(uint *)(param_6 + 0x18) <= uVar19) goto LAB_036eb900;
      plVar12 = *(long **)(lVar17 + lVar20 * 8);
      if (plVar12 == (long *)0x0) goto LAB_036eb390;
      uVar14 = (**(code **)(*plVar12 + 0x378))(plVar12,*(undefined8 *)(*plVar12 + 0x380));
      uVar10 = thunk_FUN_03152714(uVar14,*(undefined8 *)puVar4,0);
      if ((uVar10 & 1) != 0) {
        if (*(uint *)(param_6 + 0x18) <= uVar19) goto LAB_036eb900;
        plVar12 = *(long **)(lVar17 + lVar20 * 8);
        if (plVar12 == (long *)0x0) goto LAB_036eb390;
        uVar14 = (**(code **)(*plVar12 + 0x348))(plVar12,*(undefined8 *)(*plVar12 + 0x350));
        uVar10 = thunk_FUN_03152714(uVar14,*(undefined8 *)puVar5,0);
        if ((uVar10 & 1) != 0) {
          if (*(uint *)(param_6 + 0x18) <= uVar19) goto LAB_036eb900;
          plVar12 = *(long **)(lVar17 + lVar20 * 8);
          if (plVar12 == (long *)0x0) goto LAB_036eb390;
          lVar21 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
        }
      }
      uVar1 = *(uint *)(param_6 + 0x18);
      lVar20 = lVar20 + 1;
    } while ((int)lVar20 < (int)uVar1);
  }
  puVar4 = PTR_DAT_0422fa10;
  uVar14 = *(undefined8 *)PTR_DAT_0422fb88;
  if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar14 = FUN_032e04b8(uVar14,0);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)puVar4);
  }
  plVar12 = (long *)FUN_0324f628(uVar13,uVar14,0,0);
  if (plVar12 == (long *)0x0) goto LAB_036eb390;
  if (*(long *)(*plVar12 + 0x40) != *(long *)(*(long *)PTR_DAT_0422fd80 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d748();
  }
  piVar16 = (int *)thunk_FUN_01c49834();
  iVar18 = *piVar16;
  lVar17 = FUN_03683d14(lVar9,0);
  if (lVar17 != 0) {
    lVar17 = FUN_03683d14(lVar9,0);
    if (lVar17 == 0) goto LAB_036eb390;
    if (*(int *)(lVar17 + 0x10) != 0) {
      plVar12 = *(long **)(param_1 + 0x30);
      if (plVar12 == (long *)0x0) goto LAB_036eb390;
      (**(code **)(*plVar12 + 0x308))(plVar12,lVar9,*(undefined8 *)(*plVar12 + 0x310));
    }
  }
  if (((lVar11 == 0) || (*(long *)(lVar11 + 0x28) == 0)) ||
     (*(int *)(*(long *)(lVar11 + 0x28) + 0x10) < 1)) {
LAB_036eb80c:
    *(undefined8 *)(lVar9 + 0xe0) = param_3;
  }
  else {
    if (*(int *)(*(long *)
                  Method_System_Security_Cryptography_DSACryptoServiceProvider_ExportParameters__ +
                0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar17 = FUN_036e1190(param_2,*(undefined8 *)
                                   Method_System_Linq_Enumerable_Select<MqttUnsubscribeReasonCode,_string>__
                         );
    if (lVar17 != 0) {
      param_3 = FUN_036d8800(lVar11,0);
      goto LAB_036eb80c;
    }
  }
  FUN_03680790(lVar9,lVar11,0);
  if (bVar3) {
    if (*(char *)(param_1 + 0xa0) != '\0') {
      uVar13 = FUN_03669568(param_4,0);
      uVar13 = FUN_036ed3c8(param_1,uVar13);
      FUN_03682f38(lVar9,uVar13,0);
      FUN_036810a4(lVar9,1,0);
    }
    if (-1 < iVar18) {
      plVar12 = *(long **)(param_4 + 0x40);
      if (plVar12 == (long *)0x0) goto LAB_036eb390;
      iVar8 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
      if (iVar18 < iVar8) {
        if (*(long *)(param_4 + 0x40) != 0) {
          FUN_036a4c68(*(long *)(param_4 + 0x40),iVar18,lVar9,0);
          goto joined_r0x036eb8a0;
        }
        goto LAB_036eb390;
      }
    }
    if (*(long *)(param_4 + 0x40) == 0) {
LAB_036eb390:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    FUN_036a4c5c(*(long *)(param_4 + 0x40),lVar9,0);
  }
joined_r0x036eb8a0:
  if (lVar21 != 0) {
    uVar13 = FUN_036871c8(lVar9,lVar21,0);
    FUN_03683558(lVar9,uVar13,0);
  }
  return;
}


