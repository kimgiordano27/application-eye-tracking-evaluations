/*
FUNCTION_NAME: FUN_027c3f14
ENTRY_POINT: 027c3f14
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_18;ray_or_cast_sink_hits_12;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_027c3f14(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_0378888d & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(System_Text_UTF8Encoding_UTF8Decoder_TypeInfo);
    thunk_FUN_00d48444(Method_Oculus_Platform_Request<InvitePanelResultInfo>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Collider>_Add__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsl_lane_u32__);
    thunk_FUN_00d48444(System_Collections_Generic_List<RaycastHit>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<object,_int>_TryGetValue__);
    thunk_FUN_00d48444(Method_System_Convert_ToUInt32__);
    thunk_FUN_00d48444(System_Runtime_Remoting_Activation_RemoteActivationAttribute_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(DG_Tweening_Plugins_Vector2Plugin_TypeInfo);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(
                      Method_Unity_XR_CoreUtils_Datums_DatumProperty<ClimbSettings,_ClimbSettingsDatum>__ctor__
                      );
    DAT_0378888d = 1;
  }
  puVar6 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  uStack_58 = 0;
  local_50 = 0;
  local_60 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_027c48a0(param_1);
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  uVar12 = *(undefined8 *)(param_1 + 0x48);
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar6 = 
  Method_Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_System_Collections_IEnumerator_Reset__
  ;
  uVar9 = FUN_02681b9c(uVar12,0,0);
  if ((uVar9 & 1) == 0) {
LAB_027c4074:
    lVar10 = *(long *)(param_1 + 0x50);
    if (lVar10 != 0) goto LAB_027c407c;
    lVar10 = thunk_FUN_00d62348(*(undefined8 *)DG_Tweening_Plugins_Vector2Plugin_TypeInfo);
    if (lVar10 == 0) goto LAB_027c42dc;
    FUN_02760700(lVar10,0);
    lVar11 = FUN_0268fd4c(param_1,0);
    if (lVar11 == 0) goto LAB_027c42dc;
    uVar12 = FUN_0268b6ac(lVar11,0);
    uVar12 = FUN_015f5b28(uVar12,*(undefined8 *)puVar6,0);
    FUN_0274de78(lVar10,uVar12,0);
    *(long *)(param_1 + 0x50) = lVar10;
  }
  else {
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_027c42dc;
    lVar10 = FUN_027bfa5c();
    *(long *)(param_1 + 0x50) = lVar10;
    puVar7 = 
    Method_Unity_XR_CoreUtils_Datums_DatumProperty<ClimbSettings,_ClimbSettingsDatum>__ctor__;
    if (lVar10 == 0) {
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_026610e4(*(undefined8 *)puVar7,0);
      goto LAB_027c4074;
    }
LAB_027c407c:
    lVar11 = FUN_0268fd4c(param_1,0);
    if (lVar11 == 0) goto LAB_027c42dc;
    uVar12 = FUN_0268b6ac(lVar11,0);
    uVar12 = FUN_015f5b28(uVar12,*(undefined8 *)puVar6,0);
    if (lVar10 == 0) goto LAB_027c42dc;
    FUN_0274de78(lVar10,uVar12,0);
    lVar10 = *(long *)(param_1 + 0x50);
  }
  if (lVar10 != 0) {
    *(undefined4 *)(lVar10 + 700) = 1;
    uVar9 = FUN_02689fe0(param_1,0);
    if ((uVar9 & 1) != 0) {
      FUN_027c4394(param_1);
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      uVar8 = FUN_02752820(*(long *)(param_1 + 0x50),0);
      *(undefined4 *)(param_1 + 0x58) = uVar8;
      if (*(long *)(param_1 + 0x38) == 0) {
LAB_027c42b8:
        FUN_027c496c(param_1);
        return;
      }
      uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
      if (*(long *)(param_1 + 0x40) == 0) {
        lVar10 = thunk_FUN_00d62348(*(undefined8 *)
                                     System_Runtime_Remoting_Activation_RemoteActivationAttribute_TypeInfo
                                   );
        if (lVar10 == 0) goto LAB_027c42dc;
        FUN_01320f6c(lVar10,uVar12,*(undefined8 *)Method_System_Convert_ToUInt32__);
        *(long *)(param_1 + 0x40) = lVar10;
        plVar2 = (long *)System_Collections_Generic_List<RaycastHit>_TypeInfo;
        puVar3 = (undefined8 *)System_Text_UTF8Encoding_UTF8Decoder_TypeInfo;
        puVar4 = (undefined8 *)Method_System_Collections_Generic_List<Collider>_Add__;
        puVar5 = (undefined8 *)Method_Oculus_Platform_Request<InvitePanelResultInfo>__ctor__;
      }
      else {
        FUN_01322050(*(long *)(param_1 + 0x40),uVar12,
                     *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsl_lane_u32__);
        lVar10 = *(long *)(param_1 + 0x40);
        plVar2 = (long *)System_Collections_Generic_List<RaycastHit>_TypeInfo;
        puVar3 = (undefined8 *)System_Text_UTF8Encoding_UTF8Decoder_TypeInfo;
        puVar4 = (undefined8 *)Method_System_Collections_Generic_List<Collider>_Add__;
        puVar5 = (undefined8 *)Method_Oculus_Platform_Request<InvitePanelResultInfo>__ctor__;
      }
      System_Collections_Generic_List<RaycastHit>_TypeInfo = (undefined *)plVar2;
      System_Text_UTF8Encoding_UTF8Decoder_TypeInfo = (undefined *)puVar3;
      Method_System_Collections_Generic_List<Collider>_Add__ = (undefined *)puVar4;
      Method_Oculus_Platform_Request<InvitePanelResultInfo>__ctor__ = (undefined *)puVar5;
      if (lVar10 != 0) {
        FUN_01323390(lVar10,&local_78,
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<object,_int>_TryGetValue__);
        uStack_58 = uStack_70;
        local_60 = local_78;
        local_50 = local_68;
        while (uVar9 = FUN_012b894c(&local_60,*puVar5), (uVar9 & 1) != 0) {
          lVar10 = FUN_00cea774(&local_60,*puVar4);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar9 = FUN_02689fe0(lVar10,0);
          if ((uVar9 & 1) != 0) {
            if (*(long *)(lVar10 + 0x50) == 0) {
              FUN_027c3f14(lVar10);
            }
            else {
              FUN_027c4810(param_1,lVar10);
            }
          }
        }
        FUN_012b8948(&local_60,*puVar3);
        lVar10 = *(long *)(param_1 + 0x40);
        if (lVar10 != 0) {
          lVar11 = *plVar2;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          uVar9 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 200));
          if ((uVar9 & 1) == 0) {
            *(undefined4 *)(lVar10 + 0x18) = 0;
          }
          else {
            iVar1 = *(int *)(lVar10 + 0x18);
            *(undefined4 *)(lVar10 + 0x18) = 0;
            if (0 < iVar1) {
              FUN_0179519c(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
            }
          }
          goto LAB_027c42b8;
        }
      }
    }
  }
LAB_027c42dc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


