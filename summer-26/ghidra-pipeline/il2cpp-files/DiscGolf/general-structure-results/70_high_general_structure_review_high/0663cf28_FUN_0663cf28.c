/*
FUNCTION_NAME: FUN_0663cf28
ENTRY_POINT: 0663cf28
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_3
*/


void FUN_0663cf28(long param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined8 uVar14;
  
  if ((DAT_06dce709 & 1) == 0) {
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
    DAT_06dce709 = 1;
  }
  cVar5 = DAT_06db4c79;
  if (param_2 != 0) {
    uVar10 = *(undefined8 *)(param_2 + 0x50);
    if ((param_3 & 1) != 0) {
      *(undefined1 *)(param_2 + 0xf8) = 1;
      if (cVar5 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbf00);
        DAT_06db4c79 = '\x01';
      }
      uVar14 = **(undefined8 **)(*(long *)PTR_DAT_069fbf00 + 0xb8);
      *(undefined2 *)(param_2 + 0x144) = 1;
      *(undefined8 *)(param_2 + 0x114) = *(undefined8 *)(param_2 + 0x104);
      *(undefined8 *)(param_2 + 0x10c) = uVar14;
      memcpy((void *)(param_2 + 0xa0),(undefined8 *)(param_2 + 0x50),0x50);
      LeanTween__value(param_2 + 0xa0,0);
      FUN_0663b888(param_1,uVar10,param_2);
      puVar3 = PTR_DAT_069fb990;
      uVar14 = *(undefined8 *)(param_2 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar6 = FUN_0634eb94(uVar14,uVar10,0);
      if ((uVar6 & 1) != 0) {
        FUN_066398d8(param_1,param_2,uVar10);
        *(undefined8 *)(param_2 + 0x20) = uVar10;
        LeanTween__value((undefined8 *)(param_2 + 0x20),uVar10);
      }
      fVar13 = (float)FUN_06359eb0(0);
      fVar2 = DAT_010fd080;
      if (DAT_010fd080 <= fVar13 - *(float *)(param_2 + 0x134)) {
        *(undefined4 *)(param_2 + 0x138) = 0;
      }
      puVar4 = PTR_DAT_06a01128;
      if (*(int *)(*(long *)PTR_DAT_06a01128 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (DAT_06dbee18 == '\0') {
        FUN_02d965b8(PTR_DAT_06a01128);
        DAT_06dbee18 = '\x01';
      }
      lVar7 = *(long *)puVar4;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar7 = *(long *)puVar4;
      }
      uVar14 = FUN_0362ed24(uVar10,param_2,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x18),
                            *(undefined8 *)
                             System_Runtime_Remoting_Messaging_ConstructionCall_TypeInfo);
      uVar8 = Unity_Netcode_NetworkVariableSerializationTypedInitializers__InitializeSerializer_UnmanagedByMemcpy<Vector3>
                        (uVar10,*(undefined8 *)
                                 System_Net_Http_Headers_ContentDispositionHeaderValue_TypeInfo);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)puVar3);
      }
      uVar6 = FUN_06350670(uVar14,0,0);
      uVar1 = uVar8;
      if ((uVar6 & 1) == 0) {
        uVar1 = uVar14;
      }
      fVar13 = (float)FUN_06359eb0(0);
      uVar14 = *(undefined8 *)(param_2 + 0x30);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar6 = FUN_06350670(uVar1,uVar14,0);
      if ((uVar6 & 1) == 0) {
        *(undefined4 *)(param_2 + 0x138) = 1;
      }
      else {
        if (fVar2 <= fVar13 - *(float *)(param_2 + 0x134)) {
          iVar9 = 1;
        }
        else {
          iVar9 = *(int *)(param_2 + 0x138) + 1;
        }
        *(int *)(param_2 + 0x138) = iVar9;
        *(float *)(param_2 + 0x134) = fVar13;
      }
      FUN_0663421c(param_2,uVar1);
      *(undefined8 *)(param_2 + 0x38) = uVar10;
      LeanTween__value((undefined8 *)(param_2 + 0x38),uVar10);
      *(undefined8 *)(param_2 + 0x48) = uVar8;
      LeanTween__value((undefined8 *)(param_2 + 0x48),uVar8);
      lVar7 = *(long *)puVar4;
      *(float *)(param_2 + 0x134) = fVar13;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar14 = Unity_Netcode_NetworkVariableSerializationTypedInitializers__InitializeSerializer_UnmanagedByMemcpy<Vector3>
                         (uVar10,*(undefined8 *)System_Net_ContentDecodeStream_TypeInfo);
      puVar12 = (undefined8 *)(param_2 + 0x40);
      *puVar12 = uVar14;
      LeanTween__value(puVar12,uVar14);
      uVar14 = *puVar12;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar6 = FUN_0634eb94(uVar14,0,0);
      if ((uVar6 & 1) != 0) {
        uVar14 = *puVar12;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (DAT_06dbee19 == '\0') {
          FUN_02d965b8(PTR_DAT_06a01128);
          DAT_06dbee19 = '\x01';
        }
        lVar7 = *(long *)puVar4;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar7 = *(long *)puVar4;
        }
        FUN_0362e420(uVar14,param_2,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x30),
                     *(undefined8 *)
                      System_Runtime_Remoting_Activation_ConstructionLevelActivator_TypeInfo);
      }
    }
    puVar3 = PTR_DAT_06a01128;
    if ((param_4 & 1) != 0) {
      uVar14 = *(undefined8 *)(param_2 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_06a01128 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (DAT_06dbee1a == '\0') {
        FUN_02d965b8(PTR_DAT_06a01128);
        DAT_06dbee1a = '\x01';
      }
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar7 = *(long *)puVar3;
      }
      FUN_0362e420(uVar14,param_2,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x20),
                   *(undefined8 *)System_Reflection_ConstructorInfo_TypeInfo);
      uVar14 = Unity_Netcode_NetworkVariableSerializationTypedInitializers__InitializeSerializer_UnmanagedByMemcpy<Vector3>
                         (uVar10,*(undefined8 *)
                                  System_Net_Http_Headers_ContentDispositionHeaderValue_TypeInfo);
      puVar4 = PTR_DAT_069fb990;
      puVar12 = (undefined8 *)(param_2 + 0x48);
      uVar8 = *puVar12;
      if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_069fb990);
      }
      uVar6 = FUN_06350670(uVar8,uVar14,0);
      if (((uVar6 & 1) != 0) && (*(char *)(param_2 + 0xf8) != '\0')) {
        uVar14 = *puVar12;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (DAT_06dbee1b == '\0') {
          FUN_02d965b8(PTR_DAT_06a01128);
          DAT_06dbee1b = '\x01';
        }
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar7 = *(long *)puVar3;
        }
        FUN_0362e420(uVar14,param_2,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x28),
                     *(undefined8 *)System_Runtime_Remoting_Messaging_ConstructionResponse_TypeInfo)
        ;
      }
      puVar11 = (undefined8 *)(param_2 + 0x40);
      uVar14 = *puVar11;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar6 = FUN_0634eb94(uVar14,0,0);
      if (((uVar6 & 1) != 0) && (*(char *)(param_2 + 0x145) != '\0')) {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (DAT_06dbee1c == '\0') {
          FUN_02d965b8(PTR_DAT_06a01128);
          DAT_06dbee1c = '\x01';
        }
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar7 = *(long *)puVar3;
        }
        FUN_0362ed24(uVar10,param_2,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x50),
                     *(undefined8 *)System_Data_ConstraintTable_TypeInfo);
      }
      *(undefined1 *)(param_2 + 0xf8) = 0;
      FUN_0663421c(param_2,0);
      *(undefined8 *)(param_2 + 0x38) = 0;
      LeanTween__value((undefined8 *)(param_2 + 0x38),0);
      *(undefined8 *)(param_2 + 0x48) = 0;
      LeanTween__value(puVar12,0);
      uVar10 = *(undefined8 *)(param_2 + 0x40);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar6 = FUN_0634eb94(uVar10,0,0);
      if (((uVar6 & 1) != 0) && (*(char *)(param_2 + 0x145) != '\0')) {
        uVar10 = *puVar11;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (DAT_06dbee1d == '\0') {
          FUN_02d965b8(PTR_DAT_06a01128);
          DAT_06dbee1d = '\x01';
        }
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar7 = *(long *)puVar3;
        }
        FUN_0362e420(uVar10,param_2,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x48),
                     *(undefined8 *)
                      System_Runtime_Remoting_Messaging_ConstructionCallDictionary_TypeInfo);
      }
      *(undefined1 *)(param_2 + 0x145) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      LeanTween__value(puVar11,0);
      uVar10 = *(undefined8 *)(param_2 + 0x20);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (DAT_06dc3830 == '\0') {
        FUN_02d965b8(PTR_DAT_06a01128);
        DAT_06dc3830 = '\x01';
      }
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar7 = *(long *)puVar3;
      }
      FUN_0362ed24(uVar10,param_2,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x10),
                   *(undefined8 *)StringLiteral_3589);
      *(undefined8 *)(param_2 + 0x20) = 0;
      LeanTween__value((undefined8 *)(param_2 + 0x20),0);
    }
    *(long *)(param_1 + 0x90) = param_2;
    LeanTween__value((long *)(param_1 + 0x90),param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


