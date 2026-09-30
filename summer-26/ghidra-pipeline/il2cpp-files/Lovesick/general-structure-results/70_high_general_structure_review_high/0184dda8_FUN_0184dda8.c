/*
FUNCTION_NAME: FUN_0184dda8
ENTRY_POINT: 0184dda8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_0184dda8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 local_58 [16];
  long local_48;
  
  puVar4 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar2 = Method_Sirenix_Serialization_Serializer<byte>__ctor__;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((DAT_03779606 & 1) == 0) {
    thunk_FUN_00d48444(System_ComponentModel_ListBindableAttribute_TypeInfo);
    thunk_FUN_00d48444(Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__);
    thunk_FUN_00d48444(StringLiteral_9958);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_Serializer<byte>__ctor__);
    thunk_FUN_00d48444(System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo);
    thunk_FUN_00d48444(Method_OVRControllerTest_<>c_<Start>b__4_9__);
    thunk_FUN_00d48444(PTR_DAT_033f2f78);
    thunk_FUN_00d48444(OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo);
    thunk_FUN_00d48444(
                      System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                      );
    thunk_FUN_00d48444(System_Runtime_InteropServices_InAttribute_TypeInfo);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__);
    DAT_03779606 = 1;
  }
  uVar9 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar3 = System_ComponentModel_ListBindableAttribute_TypeInfo;
  uVar9 = FUN_01780344(uVar9,0);
  uVar6 = FUN_01789ac0(param_3,uVar9,0);
  puVar2 = System_Collections_Generic_IList<ProBuilderMesh>_TypeInfo;
  if ((uVar6 & 1) == 0) {
    uVar9 = *(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_9__;
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar9 = FUN_01780344(uVar9,0);
    uVar6 = FUN_01789ac0(param_3,uVar9,0);
    puVar2 = PTR_DAT_033f2f78;
    if ((uVar6 & 1) == 0) {
      uVar9 = *(undefined8 *)
               System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_01780344(uVar9,0);
      uVar6 = FUN_01789ac0(param_3,uVar9,0);
      puVar2 = System_Runtime_InteropServices_InAttribute_TypeInfo;
      if ((uVar6 & 1) == 0) {
        uVar9 = *(undefined8 *)
                 Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
        ;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar9 = FUN_01780344(uVar9,0);
        uVar6 = FUN_01789ac0(param_3,uVar9,0);
        puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vtrn1_s16__;
        if ((uVar6 & 1) == 0) {
          uVar9 = *(undefined8 *)Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar9 = FUN_01780344(uVar9,0);
          uVar6 = FUN_01789ac0(param_3,uVar9,0);
          puVar2 = StringLiteral_9958;
          lVar8 = *(long *)puVar3;
          if ((uVar6 & 1) == 0) {
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_00d32864(lVar8);
            }
            local_58._0_8_ = FUN_01e19db8(param_1,param_2,0);
            uVar9 = thunk_FUN_00d61fa0(*(undefined8 *)
                                        OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_TypeInfo,
                                       local_58);
            if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) ==
                0) {
              thunk_FUN_00d32864();
            }
            uVar7 = FUN_01731954(0);
            if (*(int *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__ + 0xe0) == 0)
            {
              thunk_FUN_00d32864();
            }
            FUN_016fbcdc(uVar9,param_3,uVar7,0);
            goto LAB_0184e00c;
          }
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar8);
          }
          uVar5 = FUN_01e1b568(param_1,param_2,0,0);
          uVar9 = *(undefined8 *)puVar2;
          local_58._0_8_ = CONCAT71(local_58._1_7_,uVar5) & 0xffffffffffffff01;
        }
        else {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar9 = FUN_01e19e68(param_1,param_2,0);
          local_58._0_8_ = uVar9;
          uVar9 = *(undefined8 *)puVar2;
        }
      }
      else {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        local_58._0_4_ = FUN_01e19f24(param_1,param_2,0);
        uVar9 = *(undefined8 *)puVar2;
      }
    }
    else {
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_01e19f90(param_1,param_2,0);
      local_58._0_8_ = uVar9;
      uVar9 = *(undefined8 *)puVar2;
    }
  }
  else {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    local_58 = FUN_01e1a1ac(param_1,param_2,0);
    uVar9 = *(undefined8 *)puVar2;
  }
  thunk_FUN_00d61fa0(uVar9,local_58);
LAB_0184e00c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


