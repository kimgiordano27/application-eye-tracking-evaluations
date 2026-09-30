/*
FUNCTION_NAME: FUN_0663e318
ENTRY_POINT: 0663e318
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_3
*/


void FUN_0663e318(long param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  
  if ((DAT_06dce710 & 1) == 0) {
    FUN_02d965b8(System_Data_ConstraintTable_TypeInfo);
    FUN_02d965b8(System_Runtime_Remoting_Messaging_ConstructionCall_TypeInfo);
    FUN_02d965b8(StringLiteral_3589);
    FUN_02d965b8(System_Runtime_Remoting_Messaging_ConstructionCallDictionary_TypeInfo);
    FUN_02d965b8(System_Runtime_Remoting_Activation_ConstructionLevelActivator_TypeInfo);
    FUN_02d965b8(System_Runtime_Remoting_Messaging_ConstructionResponse_TypeInfo);
    FUN_02d965b8(System_Reflection_ConstructorInfo_TypeInfo);
    FUN_02d965b8(System_Net_ContentDecodeStream_TypeInfo);
    FUN_02d965b8(System_Net_Http_Headers_ContentDispositionHeaderValue_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a01128);
    FUN_02d965b8(PTR_DAT_069fb990);
    DAT_06dce710 = 1;
  }
  cVar3 = DAT_06db4c79;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar7 = *(undefined8 *)(param_2 + 0x50);
  if ((param_3 & 1) != 0) {
    *(undefined1 *)(param_2 + 0xf8) = 1;
    if (cVar3 == '\0') {
      FUN_02d965b8(PTR_DAT_069fbf00);
      DAT_06db4c79 = '\x01';
    }
    uVar11 = **(undefined8 **)(*(long *)PTR_DAT_069fbf00 + 0xb8);
    *(undefined2 *)(param_2 + 0x144) = 1;
    *(undefined8 *)(param_2 + 0x114) = *(undefined8 *)(param_2 + 0x104);
    *(undefined8 *)(param_2 + 0x10c) = uVar11;
    memcpy((void *)(param_2 + 0xa0),(undefined8 *)(param_2 + 0x50),0x50);
    LeanTween__value(param_2 + 0xa0,0);
    FUN_0663b888(param_1,uVar7,param_2);
    puVar1 = PTR_DAT_069fb990;
    uVar11 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar4 = FUN_0634eb94(uVar11,uVar7,0);
    if ((uVar4 & 1) != 0) {
      FUN_066398d8(param_1,param_2,uVar7);
      *(undefined8 *)(param_2 + 0x20) = uVar7;
      LeanTween__value((undefined8 *)(param_2 + 0x20),uVar7);
    }
    puVar2 = PTR_DAT_06a01128;
    if (*(int *)(*(long *)PTR_DAT_06a01128 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (DAT_06dbee18 == '\0') {
      FUN_02d965b8(PTR_DAT_06a01128);
      DAT_06dbee18 = '\x01';
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar5 = *(long *)puVar2;
    }
    uVar11 = FUN_0362ed24(uVar7,param_2,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18),
                          *(undefined8 *)System_Runtime_Remoting_Messaging_ConstructionCall_TypeInfo
                         );
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)puVar1);
    }
    uVar4 = FUN_06350670(uVar11,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar11 = Unity_Netcode_NetworkVariableSerializationTypedInitializers__InitializeSerializer_UnmanagedByMemcpy<Vector3>
                         (uVar7,*(undefined8 *)
                                 System_Net_Http_Headers_ContentDispositionHeaderValue_TypeInfo);
    }
    fVar10 = (float)FUN_06359eb0(0);
    uVar9 = *(undefined8 *)(param_2 + 0x30);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar4 = FUN_06350670(uVar11,uVar9,0);
    if ((uVar4 & 1) == 0) {
      *(undefined4 *)(param_2 + 0x138) = 1;
    }
    else {
      if (DAT_010fd080 <= fVar10 - *(float *)(param_2 + 0x134)) {
        iVar6 = 1;
      }
      else {
        iVar6 = *(int *)(param_2 + 0x138) + 1;
      }
      *(int *)(param_2 + 0x138) = iVar6;
      *(float *)(param_2 + 0x134) = fVar10;
    }
    FUN_0663421c(param_2,uVar11);
    *(undefined8 *)(param_2 + 0x38) = uVar7;
    LeanTween__value((undefined8 *)(param_2 + 0x38),uVar7);
    lVar5 = *(long *)puVar2;
    *(float *)(param_2 + 0x134) = fVar10;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar11 = Unity_Netcode_NetworkVariableSerializationTypedInitializers__InitializeSerializer_UnmanagedByMemcpy<Vector3>
                       (uVar7,*(undefined8 *)System_Net_ContentDecodeStream_TypeInfo);
    puVar8 = (undefined8 *)(param_2 + 0x40);
    *puVar8 = uVar11;
    LeanTween__value(puVar8,uVar11);
    uVar11 = *puVar8;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar4 = FUN_0634eb94(uVar11,0,0);
    if ((uVar4 & 1) != 0) {
      uVar11 = *puVar8;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (DAT_06dbee19 == '\0') {
        FUN_02d965b8(PTR_DAT_06a01128);
        DAT_06dbee19 = '\x01';
      }
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar5 = *(long *)puVar2;
      }
      FUN_0362e420(uVar11,param_2,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x30),
                   *(undefined8 *)
                    System_Runtime_Remoting_Activation_ConstructionLevelActivator_TypeInfo);
    }
    *(long *)(param_1 + 0x78) = param_2;
    LeanTween__value((long *)(param_1 + 0x78),param_2);
  }
  puVar1 = PTR_DAT_06a01128;
  if ((param_4 & 1) != 0) {
    uVar11 = *(undefined8 *)(param_2 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_06a01128 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (DAT_06dbee1a == '\0') {
      FUN_02d965b8(PTR_DAT_06a01128);
      DAT_06dbee1a = '\x01';
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar5 = *(long *)puVar1;
    }
    FUN_0362e420(uVar11,param_2,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x20),
                 *(undefined8 *)System_Reflection_ConstructorInfo_TypeInfo);
    uVar11 = Unity_Netcode_NetworkVariableSerializationTypedInitializers__InitializeSerializer_UnmanagedByMemcpy<Vector3>
                       (uVar7,*(undefined8 *)
                               System_Net_Http_Headers_ContentDispositionHeaderValue_TypeInfo);
    puVar2 = PTR_DAT_069fb990;
    uVar9 = *(undefined8 *)(param_2 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)PTR_DAT_069fb990);
    }
    uVar4 = FUN_06350670(uVar9,uVar11,0);
    if (((uVar4 & 1) == 0) || (*(char *)(param_2 + 0xf8) == '\0')) {
      uVar11 = *(undefined8 *)(param_2 + 0x40);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar4 = FUN_0634eb94(uVar11,0,0);
      if (((uVar4 & 1) != 0) && (*(char *)(param_2 + 0x145) != '\0')) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (DAT_06dbee1c == '\0') {
          FUN_02d965b8(PTR_DAT_06a01128);
          DAT_06dbee1c = '\x01';
        }
        lVar5 = *(long *)puVar1;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar5 = *(long *)puVar1;
        }
        FUN_0362ed24(uVar7,param_2,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x50),
                     *(undefined8 *)System_Data_ConstraintTable_TypeInfo);
      }
    }
    else {
      uVar7 = *(undefined8 *)(param_2 + 0x28);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (DAT_06dbee1b == '\0') {
        FUN_02d965b8(PTR_DAT_06a01128);
        DAT_06dbee1b = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar5 = *(long *)puVar1;
      }
      FUN_0362e420(uVar7,param_2,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x28),
                   *(undefined8 *)System_Runtime_Remoting_Messaging_ConstructionResponse_TypeInfo);
    }
    *(undefined1 *)(param_2 + 0xf8) = 0;
    FUN_0663421c(param_2,0);
    *(undefined8 *)(param_2 + 0x38) = 0;
    LeanTween__value((undefined8 *)(param_2 + 0x38),0);
    puVar8 = (undefined8 *)(param_2 + 0x40);
    uVar7 = *puVar8;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar4 = FUN_0634eb94(uVar7,0,0);
    if (((uVar4 & 1) != 0) && (*(char *)(param_2 + 0x145) != '\0')) {
      uVar7 = *puVar8;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (DAT_06dbee1d == '\0') {
        FUN_02d965b8(PTR_DAT_06a01128);
        DAT_06dbee1d = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar5 = *(long *)puVar1;
      }
      FUN_0362e420(uVar7,param_2,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x48),
                   *(undefined8 *)
                    System_Runtime_Remoting_Messaging_ConstructionCallDictionary_TypeInfo);
    }
    *(undefined1 *)(param_2 + 0x145) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    LeanTween__value(puVar8,0);
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (DAT_06dc3830 == '\0') {
      FUN_02d965b8(PTR_DAT_06a01128);
      DAT_06dc3830 = '\x01';
    }
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar5 = *(long *)puVar1;
    }
    FUN_0362ed24(uVar7,param_2,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10),
                 *(undefined8 *)StringLiteral_3589);
    *(undefined8 *)(param_2 + 0x20) = 0;
    LeanTween__value((undefined8 *)(param_2 + 0x20),0);
    *(long *)(param_1 + 0x78) = param_2;
    LeanTween__value((long *)(param_1 + 0x78),param_2);
    return;
  }
  return;
}


