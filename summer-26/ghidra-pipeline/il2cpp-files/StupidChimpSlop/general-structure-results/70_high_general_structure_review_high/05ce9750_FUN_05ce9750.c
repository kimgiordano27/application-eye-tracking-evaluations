/*
FUNCTION_NAME: FUN_05ce9750
ENTRY_POINT: 05ce9750
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_3
*/


void FUN_05ce9750(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  
  if ((DAT_06a57d7f & 1) == 0) {
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<StyleRotate>__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<StyleScale>__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<StyleTextAutoSize>__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<StyleTextShadow>__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<StyleTransformOrigin>__);
    FUN_02d4dc40(PTR_DAT_0664a8b0);
    FUN_02d4dc40(Method_System_Security_Claims_ClaimsPrincipal__ctor__);
    FUN_02d4dc40(Method_System_Security_Claims_ClaimsIdentity_Clone__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<StyleTranslate>__);
    FUN_02d4dc40(Method_Unity_Properties_PropertyBag_Register<TextAutoSize>__);
    FUN_02d4dc40(Method_System_Security_Claims_ClaimsIdentity_Deserialize__);
    DAT_06a57d7f = 1;
  }
  if (*(long *)(param_1 + 0x128) == 0) {
    uVar8 = thunk_FUN_02d8a638(*(undefined8 *)
                                Method_Unity_Properties_PropertyBag_Register<StyleTransformOrigin>__
                              );
    FUN_048bce30(uVar8,*(undefined8 *)
                        Method_Unity_Properties_PropertyBag_Register<StyleTextShadow>__);
    *(undefined8 *)(param_1 + 0x128) = uVar8;
    thunk_FUN_02dc1ef0(param_1 + 0x128,uVar8);
  }
  else {
    FUN_048bdd58(*(long *)(param_1 + 0x128),
                 *(undefined8 *)Method_Unity_Properties_PropertyBag_Register<StyleScale>__);
  }
  lVar10 = *(long *)(param_1 + 0x1f0);
  if (lVar10 == 0) {
    uVar8 = thunk_FUN_02d8a638(*(undefined8 *)
                                Method_System_Security_Claims_ClaimsIdentity_Deserialize__);
    FUN_03708e7c(uVar8,*(undefined8 *)Method_System_Security_Claims_ClaimsIdentity_Clone__);
    *(undefined8 *)(param_1 + 0x1f0) = uVar8;
    thunk_FUN_02dc1ef0(param_1 + 0x1f0,uVar8);
  }
  else {
    *(undefined4 *)(lVar10 + 0x18) = 0;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
  }
  lVar10 = *(long *)(param_1 + 0x1f8);
  if (lVar10 == 0) {
    uVar8 = thunk_FUN_02d8a638(*(undefined8 *)
                                Method_System_Security_Claims_ClaimsIdentity_Deserialize__);
    FUN_03708e7c(uVar8,*(undefined8 *)Method_System_Security_Claims_ClaimsIdentity_Clone__);
    *(undefined8 *)(param_1 + 0x1f8) = uVar8;
    thunk_FUN_02dc1ef0(param_1 + 0x1f8,uVar8);
  }
  else {
    *(undefined4 *)(lVar10 + 0x18) = 0;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
  }
  puVar6 = Method_Unity_Properties_PropertyBag_Register<TextAutoSize>__;
  puVar5 = Method_Unity_Properties_PropertyBag_Register<StyleTextAutoSize>__;
  puVar4 = Method_Unity_Properties_PropertyBag_Register<StyleRotate>__;
  puVar3 = PTR_DAT_0664a8b0;
  if (*(long *)(param_1 + 0x120) != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x120) + 0x18);
    if (0 < iVar1) {
      iVar13 = 0;
      do {
        if ((*(long *)(param_1 + 0x120) == 0) ||
           (lVar10 = FUN_036a5b38(*(long *)(param_1 + 0x120),iVar13,*(undefined8 *)puVar6),
           lVar10 == 0)) goto LAB_05ce99f8;
        uVar7 = FUN_05f84fd8(lVar10,0);
        if (*(long *)(param_1 + 0x128) == 0) goto LAB_05ce99f8;
        uVar9 = FUN_048bddc4(*(long *)(param_1 + 0x128),uVar7,*(undefined8 *)puVar5);
        if ((uVar9 & 1) == 0) {
          if (*(long *)(param_1 + 0x128) == 0) goto LAB_05ce99f8;
          System_Collections_Generic_HashSet_Enumerator<Int32Enum>___ctor
                    (*(long *)(param_1 + 0x128),uVar7,lVar10,*(undefined8 *)puVar4);
          lVar10 = *(long *)(param_1 + 0x1f0);
          if (lVar10 == 0) goto LAB_05ce99f8;
          lVar11 = *(long *)(lVar10 + 0x10);
          lVar12 = *(long *)puVar3;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_05ce99f8;
          uVar2 = *(uint *)(lVar10 + 0x18);
          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar2 + 1;
            *(undefined4 *)(lVar11 + (long)(int)uVar2 * 4 + 0x20) = uVar7;
          }
          else {
            FUN_0370970c(lVar10,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
        iVar13 = iVar13 + 1;
      } while (iVar1 != iVar13);
    }
    return;
  }
LAB_05ce99f8:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


