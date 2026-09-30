/*
FUNCTION_NAME: FUN_067e5034
ENTRY_POINT: 067e5034
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


long FUN_067e5034(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  undefined8 uStack_38;
  
  if ((DAT_071d6603 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d02708);
    FUN_02f07e70(Unity_Properties_Internal_BoundsPropertyBag_CenterProperty_TypeInfo);
    FUN_02f07e70(Unity_Properties_Internal_BoundsPropertyBag_ExtentsProperty_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_Box_UxmlFactory_TypeInfo);
    FUN_02f07e70(PixelCrushers_DialogueSystem_UnityGUI_AudioEffect_<Play>d__2_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_BoundsField_UxmlFactory_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d382e8);
    FUN_02f07e70(Newtonsoft_Json_Bson_BsonReader_ContainerContext_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d02bd0);
    FUN_02f07e70(PTR_DAT_06d01eb0);
    FUN_02f07e70(MagicaCloth2_ClothSerializeData_<>c_TypeInfo);
    FUN_02f07e70(System_Threading_CancellationCallbackInfo_WithSyncContext_TypeInfo);
    FUN_02f07e70(MagicaCloth2_ClothSerializeData_TempBuffer_TypeInfo);
    FUN_02f07e70(Fusion_CloudServices_<<HandleReflexiveInfoMessage>b__93_0>d_TypeInfo);
    FUN_02f07e70(Fusion_CloudServices_<>c_TypeInfo);
    FUN_02f07e70(Unity_Mathematics_uint3x2_TypeInfo);
    FUN_02f07e70(Fusion_CloudServices_<>c__DisplayClass102_0_TypeInfo);
    FUN_02f07e70(Fusion_CloudServices_<ConfirmJoin>d__97_TypeInfo);
    FUN_02f07e70(UnityEngine_Camera_CameraCallback_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d03438);
    DAT_071d6603 = 1;
  }
  local_60 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (long *)0x0;
  local_58 = param_1;
  thunk_FUN_02f411dc(&local_58,param_1);
  if (local_58 == 0) goto LAB_067e557c;
  uVar3 = FUN_067e2840(*(undefined8 *)(local_58 + 0x10),&local_60);
  if ((uVar3 & 1) == 0) {
    if ((local_58 == 0) || (*(long *)(local_58 + 0x10) == 0)) goto LAB_067e557c;
    uVar3 = FUN_05464ec0(*(long *)(local_58 + 0x10),
                         *(undefined8 *)Fusion_CloudServices_<ConfirmJoin>d__97_TypeInfo,0);
    if ((uVar3 & 1) == 0) {
      if (((local_58 == 0) || (*(long *)(local_58 + 0x10) == 0)) ||
         (uVar3 = FUN_05464ec0(*(long *)(local_58 + 0x10),
                               *(undefined8 *)MagicaCloth2_ClothSerializeData_TempBuffer_TypeInfo,0)
         , local_58 == 0)) goto LAB_067e557c;
      lVar4 = *(long *)(local_58 + 0x10);
      if ((uVar3 & 1) != 0) goto LAB_067e51ec;
      uVar3 = thunk_FUN_05464b70(lVar4,*(undefined8 *)Unity_Mathematics_uint3x2_TypeInfo,0);
      if ((uVar3 & 1) != 0) {
        uVar5 = *(undefined8 *)MagicaCloth2_ClothSerializeData_<>c_TypeInfo;
        if (*(int *)(*(long *)PTR_DAT_06d01eb0 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
        }
        plVar7 = (long *)FUN_056109c0(uVar5,0);
        if ((plVar7 == (long *)0x0) ||
           (uVar5 = (**(code **)(*plVar7 + 0x2b8))(plVar7,*(undefined8 *)(*plVar7 + 0x2c0)),
           local_58 == 0)) goto LAB_067e557c;
        uVar5 = FUN_05465414(uVar5,*(undefined8 *)PTR_DAT_06d03438,*(undefined8 *)(local_58 + 0x10),
                             0);
        FUN_067e2840(uVar5,&local_60);
        goto LAB_067e52a4;
      }
    }
    else {
      if (local_58 == 0) goto LAB_067e557c;
      lVar4 = *(long *)(local_58 + 0x10);
LAB_067e51ec:
      if (lVar4 == 0) goto LAB_067e557c;
      uVar5 = FUN_0546732c(lVar4,*(undefined8 *)Fusion_CloudServices_<>c__DisplayClass102_0_TypeInfo
                           ,*(undefined8 *)
                             Fusion_CloudServices_<<HandleReflexiveInfoMessage>b__93_0>d_TypeInfo,0)
      ;
      uVar3 = FUN_067e2840(uVar5,&local_60);
      if ((uVar3 & 1) != 0) goto LAB_067e52a4;
    }
    if (*(int *)(*(long *)System_Threading_CancellationCallbackInfo_WithSyncContext_TypeInfo + 0xe0)
        == 0) {
      thunk_FUN_02f12b58();
    }
    lVar8 = FUN_067e59f4(&local_58);
  }
  else {
LAB_067e52a4:
    puVar2 = Unity_Properties_Internal_BoundsPropertyBag_ExtentsProperty_TypeInfo;
    puVar1 = PixelCrushers_DialogueSystem_UnityGUI_AudioEffect_<Play>d__2_TypeInfo;
    if (local_60 == 0) {
LAB_067e557c:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_03fd16fc(&local_50,local_60,
                 *(undefined8 *)Newtonsoft_Json_Bson_BsonReader_ContainerContext_TypeInfo);
    uStack_78 = uStack_48;
    local_80 = local_50;
    local_70 = local_40;
    do {
      uVar3 = FUN_04df6d30(&local_80,*(undefined8 *)puVar2);
      lVar4 = local_58;
      plVar7 = local_70;
      if ((uVar3 & 1) == 0) {
        FUN_04df6d2c(&local_80,
                     *(undefined8 *)
                      Unity_Properties_Internal_BoundsPropertyBag_CenterProperty_TypeInfo);
        plVar7 = (long *)FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02bd0,1);
        if ((local_58 != 0) && (plVar7 != (long *)0x0)) {
          lVar4 = *(long *)(local_58 + 0x10);
          if ((lVar4 != 0) &&
             (lVar8 = thunk_FUN_02ef170c(lVar4,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
            uVar5 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
            FUN_02f07f94(uVar5,0);
          }
          if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          plVar7[4] = lVar4;
          thunk_FUN_02f411dc(plVar7 + 4,lVar4);
          if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          FUN_06693fdc(*(undefined8 *)UnityEngine_Camera_CameraCallback_TypeInfo,plVar7,0);
          if (local_58 != 0) {
            uVar5 = FUN_0545c378(*(undefined8 *)Fusion_CloudServices_<>c_TypeInfo,
                                 *(undefined8 *)(local_58 + 0x10),0);
            lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d382e8);
            FUN_06840828(lVar4,uVar5,0);
            return lVar4;
          }
        }
        goto LAB_067e557c;
      }
      uVar10 = param_2[1];
      uVar5 = *param_2;
      uVar12 = param_2[3];
      plVar11 = (long *)param_2[2];
      if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar8 = *local_70;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_067e535c;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)FUN_02eea86c(local_70,*(long *)puVar1,2);
LAB_067e535c:
      local_50 = uVar5;
      uStack_48 = uVar10;
      local_40 = plVar11;
      uStack_38 = uVar12;
      uVar3 = (*(code *)*puVar6)(plVar7,lVar4,&local_50,puVar6[1]);
    } while ((uVar3 & 1) == 0);
    FUN_04df6d2c(&local_80,
                 *(undefined8 *)Unity_Properties_Internal_BoundsPropertyBag_CenterProperty_TypeInfo)
    ;
    lVar4 = local_58;
    uVar10 = param_2[1];
    uVar5 = *param_2;
    uVar13 = param_2[3];
    uVar12 = param_2[2];
    lVar8 = *plVar7;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)UnityEngine_UIElements_BoundsField_UxmlFactory_TypeInfo) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_067e5504;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_02eea86c(plVar7,*(long *)UnityEngine_UIElements_BoundsField_UxmlFactory_TypeInfo,0)
    ;
LAB_067e5504:
    local_50 = uVar5;
    uStack_48 = uVar10;
    local_40 = (long *)uVar12;
    uStack_38 = uVar13;
    lVar8 = (*(code *)*puVar6)(plVar7,lVar4,&local_50,puVar6[1]);
    lVar4 = local_58;
    if (lVar8 != 0) {
      if (*(int *)(*(long *)System_Threading_CancellationCallbackInfo_WithSyncContext_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_067e42d0(lVar4,lVar8);
      FUN_067e433c(local_58,lVar8);
    }
  }
  return lVar8;
}


