/*
FUNCTION_NAME: FUN_05350f48
ENTRY_POINT: 05350f48
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_file_logging_hits_3;eye_or_gaze_keyword_boost_only
*/


/* WARNING: Removing unreachable block (ram,0x05351260) */
/* WARNING: Removing unreachable block (ram,0x0535143c) */
/* WARNING: Removing unreachable block (ram,0x053513f4) */

undefined8 FUN_05350f48(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 local_e8;
  undefined8 *puStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_b8;
  char *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char local_6c [4];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_48;
  
  puVar2 = OVR_OpenVR_IVRCompositor__WaitGetPoses_TypeInfo;
  puVar1 = OVR_OpenVR_IVRCompositor__SetExplicitTimingMode_TypeInfo;
  if ((DAT_066d0575 & 1) == 0) {
    FUN_02b3c81c(OVR_OpenVR_IVRDriverManager__GetDriverCount_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRDriverManager__GetDriverHandle_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRDriverManager__GetDriverName_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRExtendedDisplay__GetDXGIOutputInfo_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRExtendedDisplay__GetEyeOutputViewport_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRExtendedDisplay__GetWindowBounds_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRIOBuffer__Close_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRIOBuffer__Open_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRIOBuffer__PropertyContainer_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRIOBuffer__Read_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRCompositor__WaitGetPoses_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRIOBuffer__Write_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRInput__DecompressSkeletalBoneData_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRInput__GetActionHandle_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRCompositor__SetExplicitTimingMode_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRInput__GetActionOrigins_TypeInfo);
    FUN_02b3c81c(
                System_Linq_Expressions_Interpreter_ExclusiveOrInstruction_ExclusiveOrBoolean_TypeInfo
                );
    DAT_066d0575 = 1;
  }
  local_48 = 0;
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_68 = 0;
  local_6c[0] = '\0';
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_a0 = 0;
  FUN_036184b0(&local_60,param_1,param_2,*(undefined8 *)puVar2);
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar6 = *(long *)puVar1;
  }
  puVar3 = OVR_OpenVR_IVRDriverManager__GetDriverName_TypeInfo;
  lVar9 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (lVar9 != 0) {
    uVar7 = FUN_04350314(lVar9,local_60,puStack_58,&local_48,
                         *(undefined8 *)OVR_OpenVR_IVRDriverManager__GetDriverName_TypeInfo);
    if ((uVar7 & 1) != 0) {
      return local_48;
    }
    lVar6 = *(long *)puVar1;
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar6 = *(long *)puVar1;
  }
  local_b0 = local_6c;
  local_6c[0] = '\0';
  local_b8 = 0;
  local_68 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 8);
  local_a8 = &local_68;
  FUN_04ddecfc(local_68,local_6c,0);
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar6 = *(long *)puVar1;
  }
  lVar9 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
  if (lVar9 != 0) {
    uVar7 = FUN_04350314(lVar9,local_60,puStack_58,&local_48,*(undefined8 *)puVar3);
    if ((uVar7 & 1) != 0) goto LAB_053513c4;
    lVar6 = *(long *)puVar1;
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_05351ffc(param_1);
  puVar3 = OVR_OpenVR_IVRInput__GetActionOrigins_TypeInfo;
  if (lVar9 == 0) {
    lVar6 = *(long *)OVR_OpenVR_IVRInput__GetActionOrigins_TypeInfo;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar6 = *(long *)puVar3;
    }
    uVar11 = **(undefined8 **)(lVar6 + 0xb8);
    lVar6 = thunk_FUN_02b79644(*(undefined8 *)OVR_OpenVR_IVRIOBuffer__Close_TypeInfo);
    FUN_0434da30(lVar6,uVar11,
                 *(undefined8 *)OVR_OpenVR_IVRExtendedDisplay__GetEyeOutputViewport_TypeInfo);
  }
  else {
    iVar5 = FUN_0434e434(lVar9,*(undefined8 *)
                                OVR_OpenVR_IVRExtendedDisplay__GetWindowBounds_TypeInfo);
    puVar3 = OVR_OpenVR_IVRInput__GetActionOrigins_TypeInfo;
    lVar6 = *(long *)OVR_OpenVR_IVRInput__GetActionOrigins_TypeInfo;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar6 = *(long *)puVar3;
    }
    uVar11 = **(undefined8 **)(lVar6 + 0xb8);
    lVar6 = thunk_FUN_02b79644(*(undefined8 *)OVR_OpenVR_IVRIOBuffer__Close_TypeInfo);
    FUN_0434da48(lVar6,iVar5 + 1,uVar11,
                 *(undefined8 *)OVR_OpenVR_IVRExtendedDisplay__GetDXGIOutputInfo_TypeInfo);
    FUN_0434ec0c(&local_e8,lVar9,
                 *(undefined8 *)OVR_OpenVR_IVRDriverManager__GetDriverHandle_TypeInfo);
    puVar4 = OVR_OpenVR_IVRIOBuffer__PropertyContainer_TypeInfo;
    puVar3 = OVR_OpenVR_IVRDriverManager__GetDriverCount_TypeInfo;
    puStack_98 = puStack_e0;
    local_a0 = local_e8;
    uStack_88 = uStack_d0;
    local_90 = local_d8;
    uStack_78 = uStack_c0;
    local_80 = local_c8;
    local_e8 = 0;
    puStack_e0 = &local_a0;
    while (uVar7 = FUN_047762f4(&local_a0,*(undefined8 *)puVar4), (uVar7 & 1) != 0) {
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_0434e7a8(lVar6,local_90,uStack_88,local_80,*(undefined8 *)puVar3);
    }
    FUN_04776430(&local_a0,*(undefined8 *)OVR_OpenVR_IVRIOBuffer__Open_TypeInfo);
  }
  uVar11 = thunk_FUN_02b79644(*(undefined8 *)
                               System_Linq_Expressions_Interpreter_ExclusiveOrInstruction_ExclusiveOrBoolean_TypeInfo
                             );
  FUN_055a16c0(uVar11,0);
  local_e8 = 0;
  puStack_e0 = (undefined8 *)0x0;
  FUN_036184b0(&local_e8,param_1,uVar11,*(undefined8 *)puVar2);
  puVar10 = puStack_e0;
  puStack_58 = puStack_e0;
  local_60 = local_e8;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar11 = FUN_0559da8c(param_2,0);
  if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  puVar10 = puVar10 + 3;
  *puVar10 = uVar11;
  thunk_FUN_02bb0e9c(puVar10);
  if (puStack_58 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  puStack_58[5] = *(undefined8 *)(param_2 + 0x28);
  thunk_FUN_02bb0e9c();
  puVar10 = puStack_58;
  uVar11 = FUN_055a1708(param_2,0);
  if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  puVar10 = puVar10 + 2;
  *puVar10 = uVar11;
  thunk_FUN_02bb0e9c(puVar10);
  if (puStack_58 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  lVar9 = *(long *)puVar1;
  *(undefined1 *)(puStack_58 + 4) = *(undefined1 *)(param_2 + 0x20);
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar9 = *(long *)puVar1;
  }
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  local_48 = FUN_055b6388(lVar9,param_1,param_2,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  FUN_0434e7a8(lVar6,local_60,puStack_58,local_48,
               *(undefined8 *)OVR_OpenVR_IVRDriverManager__GetDriverCount_TypeInfo);
  plVar8 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
  *plVar8 = lVar6;
  thunk_FUN_02bb0e9c(plVar8,lVar6);
LAB_053513c4:
  if (*local_b0 != '\0') {
    thunk_FUN_02b4a54c(*local_a8,0);
  }
  if (local_b8 == 0) {
    return local_48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cabc();
}


