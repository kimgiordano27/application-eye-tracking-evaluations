/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_tts_voice_t_name_get
ENTRY_POINT: 07904878
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_tts_voice_t_name_get(void)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int in_w8;
  long lVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar11;
  undefined8 uVar12;
  long *unaff_x26;
  undefined8 in_stack_00000018;
  
  if (in_w8 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0x10);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    *unaff_x19 = 0xffffffff;
  }
  else {
    uVar3 = FUN_065cd284(*(undefined8 *)(unaff_x19 + 8),0);
    if ((uVar3 & 1) != 0) {
      thunk_FUN_03af1434(PTR_DAT_08491298);
      uVar7 = thunk_FUN_03ac74bc();
      uVar8 = thunk_FUN_03af1434(Unity_Properties_TypeConverter<object,_char>_TypeInfo);
      uVar4 = thunk_FUN_03af1434(Oculus_Platform_Request<LeaderboardEntryList>_TypeInfo);
      FUN_066b7574(uVar7,uVar8,uVar4,0);
      uVar8 = thunk_FUN_03af1434(
                                UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar7,uVar8);
    }
    uVar3 = FUN_065cd284(*(undefined8 *)(unaff_x19 + 10),0);
    if ((uVar3 & 1) != 0) {
      thunk_FUN_03af1434(PTR_DAT_08491298);
      uVar7 = thunk_FUN_03ac74bc();
      uVar8 = thunk_FUN_03af1434(
                                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<VolumetricCloudsSystem_VolumetricCloudsAccumulationData,_RenderGraphContext>_TypeInfo
                                );
      uVar4 = thunk_FUN_03af1434(Oculus_Platform_Request<LeaderboardEntryList>_TypeInfo);
      FUN_066b7574(uVar7,uVar8,uVar4,0);
      uVar8 = thunk_FUN_03af1434(
                                UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar7,uVar8);
    }
    lVar9 = *(long *)(unaff_x19 + 0xc);
    if (lVar9 == 0) {
      thunk_FUN_03af1434(PTR_DAT_08491298);
      uVar7 = thunk_FUN_03ac74bc();
      uVar8 = thunk_FUN_03af1434(PTR_DAT_084a5088);
      uVar4 = thunk_FUN_03af1434(
                                UnityEngine_UIElements_UxmlEnumAttributeDescription<BindingSourceSelectionMode>_TypeInfo
                                );
      FUN_066b7574(uVar7,uVar8,uVar4,0);
      uVar8 = thunk_FUN_03af1434(
                                UnityEngine_UIElements_UxmlEnumAttributeDescription<AlternatingRowBackground>_TypeInfo
                                );
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar7,uVar8);
    }
    uVar7 = *(undefined8 *)(lVar9 + 0x10);
    uVar8 = *(undefined8 *)(lVar9 + 0x18);
    uVar12 = *(undefined8 *)(lVar9 + 0x20);
    uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)Normal_Realtime_UnreliableProperty<Vector3>_TypeInfo);
    FUN_07904df8(uVar4,uVar7,uVar8,uVar12);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar11 = *(long **)(unaff_x20 + 0x38);
    uVar7 = *(undefined8 *)(unaff_x19 + 8);
    uVar8 = *(undefined8 *)(unaff_x19 + 10);
    if (plVar11 == (long *)0x0) {
      uVar12 = 0;
    }
    else {
      lVar9 = *plVar11;
      uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar3 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)System_Collections_Generic_List<ISessionInfo>_TypeInfo) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_07904960;
          }
          uVar3 = uVar3 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_03ac43c4(plVar11,*(long *)System_Collections_Generic_List<ISessionInfo>_TypeInfo,
                            0);
LAB_07904960:
      uVar12 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    }
    uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                System_Threading_Tasks_UnwrapPromise<VoidTaskResult>_TypeInfo);
    FUN_07919a78(uVar6,uVar7,uVar8,uVar12,0,uVar4,0);
    plVar11 = *(long **)(unaff_x20 + 0x10);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar9 = *plVar11;
    uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar3 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08496420) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto FUN_07904a04;
        }
        uVar3 = uVar3 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(plVar11,*(long *)PTR_DAT_08496420,0);
FUN_07904a04:
    plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
    uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)Normal_Realtime_UnreliableProperty<float>_TypeInfo);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar9 = *plVar11;
    uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar3 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)Unity_Properties_TypeConverter<float,_long>_TypeInfo
           ) {
          lVar9 = lVar9 + (long)(*piVar10 + 0x10) * 0x10 + 0x138;
          goto 
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE_SWIGExceptionHelper__SetPendingArithmeticException
          ;
        }
        uVar3 = uVar3 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar3 != 0);
    }
    lVar9 = FUN_03ac43c4(plVar11,*(long *)Unity_Properties_TypeConverter<float,_long>_TypeInfo,0x10)
    ;
Unity_Services_Vivox_VivoxCoreInstancePINVOKE_SWIGExceptionHelper__SetPendingArithmeticException:
    FUN_0496d698(uVar7,plVar11,*(undefined8 *)(lVar9 + 8),0);
    lVar9 = FUN_0481a690();
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 =
         FUN_058b71ec(lVar9,*(undefined8 *)Unity_Properties_TypeConverter<string,_bool>_TypeInfo);
    uVar3 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)
                          Unity_Properties_TypeConverter<Sprite,_StyleBackground>_TypeInfo);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03ff6ac0(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  lVar9 = FUN_0587c704(&stack0x00000018,
                       *(undefined8 *)Unity_Properties_TypeConverter<float,_ulong>_TypeInfo);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (unaff_x20 != 0) {
    FUN_078fd284();
    puVar2 = PTR_DAT_0849d120;
    uVar7 = *(undefined8 *)(lVar9 + 0x20);
    iVar1 = *(int *)(*unaff_x26 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar7,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


