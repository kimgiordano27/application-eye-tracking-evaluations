/*
FUNCTION_NAME: FUN_01b5bca4
ENTRY_POINT: 01b5bca4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_01b5bca4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long extraout_x1;
  long lVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_0377e429 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(StringLiteral_7900);
    thunk_FUN_00d48444(StringLiteral_2596);
    thunk_FUN_00d48444(StringLiteral_11860);
    thunk_FUN_00d48444(Method_DesaturateOnTeleportPointUsed_<>c_<FadeOut>b__8_0__);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputProcessor<Vector2>__ctor__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_System_Enum_EnumResult_SetFailure__);
    thunk_FUN_00d48444(StringLiteral_12098);
    thunk_FUN_00d48444(StringLiteral_10774);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_50__);
    DAT_0377e429 = 1;
  }
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  if (1 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar11 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (lVar11 != 0) {
    FUN_01b5a92c(lVar11);
    puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_50__;
    if (extraout_x1 == *(long *)(lVar11 + 0x68)) {
      uVar13 = *(undefined4 *)(lVar11 + 0x18);
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_12098);
      if (lVar11 != 0) {
        FUN_0268a094(uVar13,lVar11,0);
        *(long *)(param_1 + 0x18) = lVar11;
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
    }
    else {
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)puVar1,0);
      puVar7 = StringLiteral_11860;
      puVar6 = StringLiteral_10774;
      puVar5 = StringLiteral_7900;
      puVar4 = StringLiteral_2596;
      puVar3 = Method_System_Enum_EnumResult_SetFailure__;
      puVar2 = Method_DesaturateOnTeleportPointUsed_<>c_<FadeOut>b__8_0__;
      puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (*(long *)(lVar11 + 0x58) != 0) {
        FUN_01323390(*(long *)(lVar11 + 0x58),&local_98,
                     *(undefined8 *)Method_UnityEngine_InputSystem_InputProcessor<Vector2>__ctor__);
        uStack_78 = uStack_90;
        local_80 = local_98;
        local_70 = local_88;
        while (uVar9 = FUN_012b894c(&local_80,*(undefined8 *)puVar4), (uVar9 & 1) != 0) {
          lVar10 = FUN_00c34278(&local_80,*(undefined8 *)puVar7);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar9 = FUN_02681b9c(lVar10,0,0);
          if ((uVar9 & 1) != 0) {
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_02658520(lVar10,1,0);
          }
        }
        FUN_012b8948(&local_80,*(undefined8 *)puVar5);
        lVar11 = *(long *)(lVar11 + 0x58);
        if (lVar11 != 0) {
          lVar10 = *(long *)puVar2;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          uVar9 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 200));
          if ((uVar9 & 1) == 0) {
            *(undefined4 *)(lVar11 + 0x18) = 0;
          }
          else {
            iVar8 = *(int *)(lVar11 + 0x18);
            *(undefined4 *)(lVar11 + 0x18) = 0;
            if (0 < iVar8) {
              FUN_0179519c(*(undefined8 *)(lVar11 + 0x10),0,iVar8,0);
            }
          }
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          iVar8 = FUN_026be2f8(0);
          if (0 < iVar8) {
            iVar12 = 0;
            do {
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar13 = FUN_026be320(iVar12,0);
              FUN_026be62c(uVar13,0);
              iVar12 = iVar12 + 1;
            } while (iVar8 != iVar12);
          }
          FUN_01b5b9e4();
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_026be568(*(undefined8 *)puVar6,0);
          return 0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


