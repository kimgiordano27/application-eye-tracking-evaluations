/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_tts_voice_t_name_set
ENTRY_POINT: 079047e0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_5;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_tts_voice_t_name_set(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  int *unaff_x19;
  long unaff_x20;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000018;
  
  FUN_03a8a718(PTR_DAT_08496420);
  FUN_03a8a718(System_Collections_Generic_List<ISessionInfo>_TypeInfo);
  FUN_03a8a718(Normal_Realtime_UnreliableProperty<Vector3>_TypeInfo);
  FUN_03a8a718(Unity_Properties_TypeConverter<float,_uint>_TypeInfo);
  FUN_03a8a718(Unity_Properties_TypeConverter<float,_ulong>_TypeInfo);
  FUN_03a8a718(Unity_Properties_TypeConverter<Sprite,_StyleBackground>_TypeInfo);
  FUN_03a8a718(Unity_Properties_TypeConverter<string,_bool>_TypeInfo);
  FUN_03a8a718(System_Threading_Tasks_UnwrapPromise<VoidTaskResult>_TypeInfo);
  FUN_03a8a718(UnityEngine_UIElements_UxmlAssetAttributeDescription<Object>_TypeInfo);
  FUN_03a8a718(UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xbe0) = 1;
  puVar2 = PTR_DAT_0849d0a8;
  lVar12 = *(long *)(unaff_x19 + 0xe);
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x10);
    unaff_x19[0x10] = 0;
    unaff_x19[0x11] = 0;
    *unaff_x19 = -1;
  }
  else {
    uVar4 = FUN_065cd284(*(undefined8 *)(unaff_x19 + 8),0);
    if ((uVar4 & 1) != 0) {
      thunk_FUN_03af1434(PTR_DAT_08491298);
      uVar8 = thunk_FUN_03ac74bc();
      uVar9 = thunk_FUN_03af1434(Unity_Properties_TypeConverter<object,_char>_TypeInfo);
      uVar5 = thunk_FUN_03af1434(Oculus_Platform_Request<LeaderboardEntryList>_TypeInfo);
      FUN_066b7574(uVar8,uVar9,uVar5,0);
      uVar9 = thunk_FUN_03af1434(
                                UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar8,uVar9);
    }
    uVar4 = FUN_065cd284(*(undefined8 *)(unaff_x19 + 10),0);
    if ((uVar4 & 1) != 0) {
      thunk_FUN_03af1434(PTR_DAT_08491298);
      uVar8 = thunk_FUN_03ac74bc();
      uVar9 = thunk_FUN_03af1434(
                                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<VolumetricCloudsSystem_VolumetricCloudsAccumulationData,_RenderGraphContext>_TypeInfo
                                );
      uVar5 = thunk_FUN_03af1434(Oculus_Platform_Request<LeaderboardEntryList>_TypeInfo);
      FUN_066b7574(uVar8,uVar9,uVar5,0);
      uVar9 = thunk_FUN_03af1434(
                                UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar8,uVar9);
    }
    lVar10 = *(long *)(unaff_x19 + 0xc);
    if (lVar10 == 0) {
      thunk_FUN_03af1434(PTR_DAT_08491298);
      uVar8 = thunk_FUN_03ac74bc();
      uVar9 = thunk_FUN_03af1434(PTR_DAT_084a5088);
      uVar5 = thunk_FUN_03af1434(
                                UnityEngine_UIElements_UxmlEnumAttributeDescription<BindingSourceSelectionMode>_TypeInfo
                                );
      FUN_066b7574(uVar8,uVar9,uVar5,0);
      uVar9 = thunk_FUN_03af1434(
                                UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar8,uVar9);
    }
    uVar8 = *(undefined8 *)(lVar10 + 0x10);
    uVar9 = *(undefined8 *)(lVar10 + 0x18);
    uVar14 = *(undefined8 *)(lVar10 + 0x20);
    uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)Normal_Realtime_UnreliableProperty<Vector3>_TypeInfo);
    FUN_07904df8(uVar5,uVar8,uVar9,uVar14);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar13 = *(long **)(lVar12 + 0x38);
    uVar8 = *(undefined8 *)(unaff_x19 + 8);
    uVar9 = *(undefined8 *)(unaff_x19 + 10);
    if (plVar13 == (long *)0x0) {
      uVar14 = 0;
    }
    else {
      lVar10 = *plVar13;
      uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)System_Collections_Generic_List<ISessionInfo>_TypeInfo) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_07904960;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_03ac43c4(plVar13,*(long *)System_Collections_Generic_List<ISessionInfo>_TypeInfo,
                            0);
LAB_07904960:
      uVar14 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    }
    uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Threading_Tasks_UnwrapPromise<VoidTaskResult>_TypeInfo);
    FUN_07919a78(uVar7,uVar8,uVar9,uVar14,0,uVar5,0);
    plVar13 = *(long **)(lVar12 + 0x10);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar10 = *plVar13;
    uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08496420) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
          goto FUN_07904a04;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)PTR_DAT_08496420,0);
FUN_07904a04:
    plVar13 = (long *)(*(code *)*puVar6)(plVar13,puVar6[1]);
    uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)Normal_Realtime_UnreliableProperty<float>_TypeInfo);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar10 = *plVar13;
    uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)Unity_Properties_TypeConverter<float,_long>_TypeInfo
           ) {
          lVar10 = lVar10 + (long)(*piVar11 + 0x10) * 0x10 + 0x138;
          goto 
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE_SWIGExceptionHelper__SetPendingArithmeticException
          ;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    lVar10 = FUN_03ac43c4(plVar13,*(long *)Unity_Properties_TypeConverter<float,_long>_TypeInfo,0x10
                         );
Unity_Services_Vivox_VivoxCoreInstancePINVOKE_SWIGExceptionHelper__SetPendingArithmeticException:
    FUN_0496d698(uVar8,plVar13,*(undefined8 *)(lVar10 + 8),0);
    lVar10 = FUN_0481a690(lVar12,*(undefined8 *)
                                  UnityEngine_UIElements_UxmlAssetAttributeDescription<VisualTreeAsset>_TypeInfo
                          ,uVar8,uVar7,
                          *(undefined8 *)
                           UnityEngine_UIElements_UxmlAssetAttributeDescription<Object>_TypeInfo);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 =
         FUN_058b71ec(lVar10,*(undefined8 *)Unity_Properties_TypeConverter<string,_bool>_TypeInfo);
    uVar4 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)
                          Unity_Properties_TypeConverter<Sprite,_StyleBackground>_TypeInfo);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03ff6ac0(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  lVar10 = FUN_0587c704(&stack0x00000018,
                        *(undefined8 *)Unity_Properties_TypeConverter<float,_ulong>_TypeInfo);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (lVar12 != 0) {
    FUN_078fd284(lVar12,*(undefined8 *)(lVar10 + 0x20));
    puVar3 = PTR_DAT_0849d120;
    uVar8 = *(undefined8 *)(lVar10 + 0x20);
    iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
    *unaff_x19 = -2;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar8,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


