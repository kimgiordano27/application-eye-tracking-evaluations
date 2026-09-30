/*
FUNCTION_NAME: FUN_027c4a28
ENTRY_POINT: 027c4a28
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_12;telemetry_or_network_hits_4
*/


void FUN_027c4a28(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_03788891 & 1) == 0) {
    thunk_FUN_00d48444(System_Text_UTF8Encoding_UTF8Decoder_TypeInfo);
    thunk_FUN_00d48444(Method_Oculus_Platform_Request<InvitePanelResultInfo>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Collider>_Add__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsl_lane_u32__);
    thunk_FUN_00d48444(System_Collections_Generic_List<RaycastHit>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<object,_int>_TryGetValue__);
    thunk_FUN_00d48444(Method_System_Convert_ToUInt32__);
    thunk_FUN_00d48444(System_Runtime_Remoting_Activation_RemoteActivationAttribute_TypeInfo);
    DAT_03788891 = 1;
  }
  uStack_58 = 0;
  local_50 = 0;
  local_60 = 0;
  if (*(long *)(param_1 + 0x38) == 0) {
    return;
  }
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10);
  if (*(long *)(param_1 + 0x40) == 0) {
    lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                System_Runtime_Remoting_Activation_RemoteActivationAttribute_TypeInfo
                              );
    if (lVar8 == 0) goto LAB_027c4c10;
    FUN_01320f6c(lVar8,uVar9,*(undefined8 *)Method_System_Convert_ToUInt32__);
    *(long *)(param_1 + 0x40) = lVar8;
    plVar2 = (long *)System_Collections_Generic_List<RaycastHit>_TypeInfo;
    puVar3 = (undefined8 *)System_Text_UTF8Encoding_UTF8Decoder_TypeInfo;
    puVar4 = (undefined8 *)Method_System_Collections_Generic_List<Collider>_Add__;
    puVar5 = (undefined8 *)Method_Oculus_Platform_Request<InvitePanelResultInfo>__ctor__;
  }
  else {
    FUN_01322050(*(long *)(param_1 + 0x40),uVar9,
                 *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsl_lane_u32__);
    lVar8 = *(long *)(param_1 + 0x40);
    plVar2 = (long *)System_Collections_Generic_List<RaycastHit>_TypeInfo;
    puVar3 = (undefined8 *)System_Text_UTF8Encoding_UTF8Decoder_TypeInfo;
    puVar4 = (undefined8 *)Method_System_Collections_Generic_List<Collider>_Add__;
    puVar5 = (undefined8 *)Method_Oculus_Platform_Request<InvitePanelResultInfo>__ctor__;
  }
  System_Collections_Generic_List<RaycastHit>_TypeInfo = (undefined *)plVar2;
  System_Text_UTF8Encoding_UTF8Decoder_TypeInfo = (undefined *)puVar3;
  Method_System_Collections_Generic_List<Collider>_Add__ = (undefined *)puVar4;
  Method_Oculus_Platform_Request<InvitePanelResultInfo>__ctor__ = (undefined *)puVar5;
  if (lVar8 != 0) {
    FUN_01323390(lVar8,&local_78,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<object,_int>_TryGetValue__);
    uStack_58 = uStack_70;
    local_60 = local_78;
    local_50 = local_68;
    while (uVar6 = FUN_012b894c(&local_60,*puVar5), (uVar6 & 1) != 0) {
      lVar8 = FUN_00cea774(&local_60,*puVar4);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_027c4c94();
    }
    FUN_012b8948(&local_60,*puVar3);
    lVar8 = *(long *)(param_1 + 0x40);
    if (lVar8 != 0) {
      lVar7 = *plVar2;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      uVar6 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 200));
      if ((uVar6 & 1) == 0) {
        *(undefined4 *)(lVar8 + 0x18) = 0;
        return;
      }
      iVar1 = *(int *)(lVar8 + 0x18);
      *(undefined4 *)(lVar8 + 0x18) = 0;
      if (iVar1 < 1) {
        return;
      }
      FUN_0179519c(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
      return;
    }
  }
LAB_027c4c10:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


