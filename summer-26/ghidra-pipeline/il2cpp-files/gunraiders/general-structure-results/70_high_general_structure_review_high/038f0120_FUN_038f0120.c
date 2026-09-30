/*
FUNCTION_NAME: FUN_038f0120
ENTRY_POINT: 038f0120
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_038f0120(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar3 = Method_System_Security_Cryptography_RSACryptoServiceProvider_VerifyHash__;
  if ((DAT_04539836 & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__);
    FUN_01c5d288(PTR_DAT_04230108);
    FUN_01c5d288(Method_System_Security_Cryptography_RSACryptoServiceProvider_VerifyHash__);
    FUN_01c5d288(PTR_DAT_0422fd80);
    FUN_01c5d288(Method_System_ComponentModel_MemberDescriptor_GetInvocationTarget__);
    FUN_01c5d288(Method_VoxelBusters_EssentialKit_RateMyApp_<ShowPromptWindow>b__7_0__);
    FUN_01c5d288(Method_VoxelBusters_EssentialKit_RateMyApp_<ShowPromptWindow>b__7_1__);
    FUN_01c5d288(Method_VoxelBusters_EssentialKit_RateMyApp_<ShowPromptWindow>b__7_2__);
    DAT_04539836 = 1;
  }
  puVar5 = Method_VoxelBusters_EssentialKit_RateMyApp_<ShowPromptWindow>b__7_2__;
  puVar4 = Method_VoxelBusters_EssentialKit_RateMyApp_<ShowPromptWindow>b__7_1__;
  puVar2 = Method_UnityEngine_UIElements_InlineStyleAccess_SetStyleValue<FlexDirection>__;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  FUN_038f0f64(param_1,param_2,0x400,*(undefined8 *)puVar5);
  FUN_038f0ff0(param_1,param_2,0x400,*(undefined8 *)puVar4);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  lVar7 = FUN_038e0bf8(0x34);
  puVar2 = Method_System_ComponentModel_MemberDescriptor_GetInvocationTarget__;
  if (lVar7 != 0) {
    lVar14 = param_1[1];
    plVar8 = (long *)FUN_038f1060(lVar7,*(undefined8 *)(lVar7 + 0x68),param_2,
                                  *(undefined8 *)
                                   Method_VoxelBusters_EssentialKit_RateMyApp_<ShowPromptWindow>b__7_0__
                                  ,0,0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar2);
    }
    if (plVar8 == (long *)0x0) goto LAB_038f039c;
    if (*(long *)(*plVar8 + 0x40) != *(long *)(*(long *)PTR_DAT_04230108 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d748(plVar8);
    }
    puVar9 = (undefined8 *)thunk_FUN_01c49834();
    uVar6 = FUN_03813d98(*puVar9,puVar9[1],0);
    if (lVar14 == 0) goto LAB_038f039c;
    *(undefined4 *)(lVar14 + 0x58) = uVar6;
    if ((*(byte *)((long)param_1 + 0x15) >> 2 & 1) != 0) {
      plVar8 = (long *)*param_1;
      if (plVar8 == (long *)0x0) goto LAB_038f039c;
      lVar7 = (**(code **)(*plVar8 + 0x208))(plVar8,*(undefined8 *)(*plVar8 + 0x210));
      puVar2 = PTR_DAT_0422fd80;
      if (lVar7 == 0) goto LAB_038f039c;
      local_34 = *(undefined4 *)(lVar7 + 0x58);
      uVar10 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,&local_34);
      if (param_1[1] == 0) goto LAB_038f039c;
      local_38 = *(undefined4 *)(param_1[1] + 0x58);
      uVar11 = thunk_FUN_01c49334(*(undefined8 *)puVar2,&local_38);
      uVar12 = (**(code **)(*plVar8 + 0x2a8))(plVar8,uVar10,uVar11,*(undefined8 *)(*plVar8 + 0x2b0))
      ;
      if ((uVar12 & 1) == 0) {
        thunk_FUN_01c273e8(Method_System_Net_HttpWebRequest__ctor__);
        uVar11 = thunk_FUN_01c496e0();
        uVar10 = thunk_FUN_01c273e8(Method_Mono_Security_Cryptography_RSAManaged_DecryptValue__);
        FUN_037f8780(uVar11,uVar10,param_2,0);
        goto LAB_038f0424;
      }
    }
    if ((*(byte *)((long)param_1 + 0x11) >> 2 & 1) == 0) {
LAB_038f0368:
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_038f11a4(param_1,param_2,0x400);
      return;
    }
    if ((param_1[1] != 0) && (plVar8 = (long *)*param_1, plVar8 != (long *)0x0)) {
      iVar1 = *(int *)(param_1[1] + 0x58);
      lVar7 = (**(code **)(*plVar8 + 0x208))(plVar8,*(undefined8 *)(*plVar8 + 0x210));
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x58) < iVar1) {
          lVar7 = thunk_FUN_01c273e8(PTR_DAT_0422fc38);
          uVar13 = **(undefined8 **)(lVar7 + 0xb8);
          thunk_FUN_01c273e8(Method_System_Net_HttpWebRequest__ctor__);
          uVar11 = thunk_FUN_01c496e0();
          uVar10 = thunk_FUN_01c273e8(Method_System_Xml_ReadContentAsBinaryHelper_Finish__);
          FUN_037f036c(uVar11,uVar10,uVar13,0);
LAB_038f0424:
          uVar10 = thunk_FUN_01c273e8(
                                     Method_System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo_GetMemberInfo__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_01c5d37c(uVar11,uVar10);
        }
        goto LAB_038f0368;
      }
    }
  }
LAB_038f039c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


