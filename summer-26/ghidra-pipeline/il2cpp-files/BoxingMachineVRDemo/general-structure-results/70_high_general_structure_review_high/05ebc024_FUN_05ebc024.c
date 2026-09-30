/*
FUNCTION_NAME: FUN_05ebc024
ENTRY_POINT: 05ebc024
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05ebc024(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  puVar2 = PTR_DAT_06761680;
  puVar1 = PTR_DAT_06761678;
  if ((DAT_06b83bc7 & 1) == 0) {
    FUN_02d6084c(Method_UnityEngine_Events_UnityEvent<HoverEnterEventArgs>_Invoke__);
    FUN_02d6084c(OVR_OpenVR_IVROverlay__SetOverlayInputMethod_TypeInfo);
    FUN_02d6084c(PTR_DAT_0675e660);
    FUN_02d6084c(PTR_DAT_067685f0);
    FUN_02d6084c(PTR_DAT_067685f8);
    FUN_02d6084c(PTR_DAT_06768600);
    FUN_02d6084c(Method_System_Dynamic_Utils_CollectionExtensions_RemoveLast<ParameterInfo>__);
    FUN_02d6084c(Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__);
    FUN_02d6084c(PTR_DAT_06768438);
    FUN_02d6084c(PTR_DAT_06761680);
    FUN_02d6084c(PTR_DAT_06761688);
    FUN_02d6084c(PTR_DAT_06761678);
    FUN_02d6084c(PTR_DAT_06768610);
    FUN_02d6084c(Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<Expression>__);
    FUN_02d6084c(Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<ParameterExpression>__)
    ;
    FUN_02d6084c(Method_Unity_Collections_CollectionExtensions_SerializedView<Type>__);
    FUN_02d6084c(Method_Unity_Collections_CollectionHelper_CreateNativeArray<byte>__);
    DAT_06b83bc7 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)puVar1);
  FUN_03a2a6f8(lVar6,*(undefined8 *)puVar2);
  FUN_06385a34(0x10,lVar6,0);
  puVar3 = Method_Unity_Collections_CollectionExtensions_SerializedView<Type>__;
  puVar2 = PTR_DAT_06768438;
  puVar1 = PTR_DAT_0675e660;
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) < 1) {
      if (*(int *)(*(long *)PTR_DAT_06768438 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      local_70 = FUN_05855934(0);
      FUN_03fcdd84(&local_88,local_70,*(undefined8 *)PTR_DAT_06768610);
      puVar5 = Method_Unity_Collections_CollectionHelper_CreateNativeArray<byte>__;
      puVar4 = PTR_DAT_06768600;
      puVar3 = PTR_DAT_067685f8;
      uStack_58 = uStack_80;
      local_60 = local_88;
      local_50 = local_78;
      do {
        uVar7 = FUN_04a7bd90(&local_60,*(undefined8 *)puVar3);
        if ((uVar7 & 1) == 0) {
          FUN_04a7bd8c(&local_60,*(undefined8 *)PTR_DAT_067685f0);
          uVar8 = System_Char__System_IConvertible_ToSByte
                            (*(undefined8 *)
                              Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<Expression>__
                             ,param_1,0);
          lVar6 = *(long *)puVar1;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(lVar6);
          }
          FUN_0602283c(uVar8,param_1,0);
          uVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                      Method_UnityEngine_Events_UnityEvent<HoverEnterEventArgs>_Invoke__
                                    );
          FUN_047cdcd8(uVar8,param_1,
                       *(undefined8 *)
                        Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__,0)
          ;
          FUN_06385d38(uVar8,0);
          uVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                                      OVR_OpenVR_IVROverlay__SetOverlayInputMethod_TypeInfo);
          FUN_047d9fa8(uVar8,param_1,
                       *(undefined8 *)
                        Method_System_Dynamic_Utils_CollectionExtensions_RemoveLast<ParameterInfo>__
                       ,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_05855a34(uVar8,0);
          lVar6 = FUN_06066d44(param_1,0);
          if (lVar6 != 0) {
            FUN_0606a4d0(lVar6,*(undefined1 *)(param_1 + 0x20),0);
            return;
          }
          goto LAB_05ebc39c;
        }
        lVar6 = FUN_04a7bdbc(&local_60,*(undefined8 *)puVar4);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        uVar8 = Unity_Mathematics_uint4__get_yywz(lVar6,0);
        uVar7 = thunk_FUN_04e8bd3c(uVar8,*(undefined8 *)puVar5,0);
      } while ((uVar7 & 1) == 0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_06021ed4(*(undefined8 *)
                    Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<ParameterExpression>__
                   ,param_1,0);
      *(undefined1 *)(param_1 + 0x21) = 1;
      FUN_04a7bd8c(&local_60,*(undefined8 *)PTR_DAT_067685f0);
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_06021ed4(*(undefined8 *)puVar3,param_1,0);
      *(undefined1 *)(param_1 + 0x21) = 1;
    }
    return;
  }
LAB_05ebc39c:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


