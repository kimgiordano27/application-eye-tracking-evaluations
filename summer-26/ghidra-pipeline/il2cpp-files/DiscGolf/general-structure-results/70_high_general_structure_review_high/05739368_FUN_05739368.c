/*
FUNCTION_NAME: FUN_05739368
ENTRY_POINT: 05739368
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_3
*/


void FUN_05739368(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 uVar12;
  
  if ((DAT_06dbedef & 1) == 0) {
    FUN_02d965b8(System_Data_ConstraintTable_TypeInfo);
    FUN_02d965b8(System_Runtime_Remoting_Messaging_ConstructionCall_TypeInfo);
    FUN_02d965b8(System_Runtime_Remoting_Messaging_ConstructionCallDictionary_TypeInfo);
    FUN_02d965b8(System_Runtime_Remoting_Activation_ConstructionLevelActivator_TypeInfo);
    FUN_02d965b8(System_Runtime_Remoting_Messaging_ConstructionResponse_TypeInfo);
    FUN_02d965b8(System_Reflection_ConstructorInfo_TypeInfo);
    FUN_02d965b8(System_Net_ContentDecodeStream_TypeInfo);
    FUN_02d965b8(System_Net_Http_Headers_ContentDispositionHeaderValue_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a01128);
    FUN_02d965b8(System_Net_Http_Headers_ContentRangeHeaderValue_TypeInfo);
    FUN_02d965b8(Oculus_Platform_Models_ContentRating_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fb990);
    DAT_06dbedef = 1;
  }
  if ((param_2 != 0) && (lVar7 = *(long *)(param_2 + 0x18), lVar7 != 0)) {
    uVar8 = *(undefined8 *)(lVar7 + 0x50);
    uVar4 = FUN_0663bb9c(param_2,0);
    cVar3 = DAT_06db4c79;
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(lVar7 + 0xf8) = 1;
      if (cVar3 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbf00);
        DAT_06db4c79 = '\x01';
      }
      uVar12 = **(undefined8 **)(*(long *)PTR_DAT_069fbf00 + 0xb8);
      *(undefined2 *)(lVar7 + 0x144) = 1;
      *(undefined8 *)(lVar7 + 0x114) = *(undefined8 *)(lVar7 + 0x104);
      *(undefined8 *)(lVar7 + 0x10c) = uVar12;
      FUN_05739a60(lVar7);
      memcpy((void *)(lVar7 + 0xa0),(undefined8 *)(lVar7 + 0x50),0x50);
      LeanTween__value(lVar7 + 0xa0,0);
      FUN_0663b888(param_1,uVar8,lVar7,0);
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
      uVar12 = FUN_0362ed24(uVar8,lVar7,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18),
                            *(undefined8 *)
                             System_Runtime_Remoting_Messaging_ConstructionCall_TypeInfo);
      puVar1 = PTR_DAT_069fb990;
      if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_069fb990);
      }
      uVar4 = FUN_06350670(uVar12,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar12 = Unity_Netcode_NetworkVariableSerializationTypedInitializers__InitializeSerializer_UnmanagedByMemcpy<Vector3>
                           (uVar8,*(undefined8 *)
                                   System_Net_Http_Headers_ContentDispositionHeaderValue_TypeInfo);
      }
      if (*(long *)(param_1 + 0xc0) == 0) goto LAB_05739a5c;
      uVar4 = FUN_03c2311c(*(long *)(param_1 + 0xc0),uVar12,
                           *(undefined8 *)Oculus_Platform_Models_ContentRating_TypeInfo);
      if ((uVar4 & 1) == 0) {
        if (*(long *)(param_1 + 0xc0) == 0) goto LAB_05739a5c;
        FUN_03c23c0c(*(long *)(param_1 + 0xc0),uVar12,
                     *(undefined8 *)System_Net_Http_Headers_ContentRangeHeaderValue_TypeInfo);
        fVar11 = (float)FUN_06359eb0(0);
        uVar10 = *(undefined8 *)(lVar7 + 0x30);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar4 = FUN_06350670(uVar12,uVar10,0);
        if ((uVar4 & 1) == 0) {
          *(undefined4 *)(lVar7 + 0x138) = 1;
        }
        else {
          if (DAT_010fd080 <= fVar11 - *(float *)(lVar7 + 0x134)) {
            iVar6 = 1;
          }
          else {
            iVar6 = *(int *)(lVar7 + 0x138) + 1;
          }
          *(int *)(lVar7 + 0x138) = iVar6;
          *(float *)(lVar7 + 0x134) = fVar11;
        }
        FUN_0663421c(lVar7,uVar12,0);
        *(undefined8 *)(lVar7 + 0x38) = uVar8;
        LeanTween__value((undefined8 *)(lVar7 + 0x38),uVar8);
        lVar5 = *(long *)puVar2;
        *(float *)(lVar7 + 0x134) = fVar11;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar12 = Unity_Netcode_NetworkVariableSerializationTypedInitializers__InitializeSerializer_UnmanagedByMemcpy<Vector3>
                           (uVar8,*(undefined8 *)System_Net_ContentDecodeStream_TypeInfo);
        puVar9 = (undefined8 *)(lVar7 + 0x40);
        *puVar9 = uVar12;
        LeanTween__value(puVar9,uVar12);
        uVar12 = *puVar9;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar4 = FUN_0634eb94(uVar12,0,0);
        if ((uVar4 & 1) != 0) {
          uVar12 = *puVar9;
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
          FUN_0362e420(uVar12,lVar7,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x30),
                       *(undefined8 *)
                        System_Runtime_Remoting_Activation_ConstructionLevelActivator_TypeInfo);
        }
      }
    }
    uVar4 = FUN_0663bc70(param_2,0);
    puVar2 = PTR_DAT_06a01128;
    if ((uVar4 & 1) != 0) {
      uVar12 = *(undefined8 *)(lVar7 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_06a01128 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (DAT_06dbee1a == '\0') {
        FUN_02d965b8(PTR_DAT_06a01128);
        DAT_06dbee1a = '\x01';
      }
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar5 = *(long *)puVar2;
      }
      FUN_0362e420(uVar12,lVar7,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x20),
                   *(undefined8 *)System_Reflection_ConstructorInfo_TypeInfo);
      uVar12 = Unity_Netcode_NetworkVariableSerializationTypedInitializers__InitializeSerializer_UnmanagedByMemcpy<Vector3>
                         (uVar8,*(undefined8 *)
                                 System_Net_Http_Headers_ContentDispositionHeaderValue_TypeInfo);
      puVar1 = PTR_DAT_069fb990;
      uVar10 = *(undefined8 *)(lVar7 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_069fb990);
      }
      uVar4 = FUN_06350670(uVar10,uVar12,0);
      if (((uVar4 & 1) == 0) || (*(char *)(lVar7 + 0xf8) == '\0')) {
        uVar12 = *(undefined8 *)(lVar7 + 0x40);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar4 = FUN_0634eb94(uVar12,0,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (DAT_06dbee1c == '\0') {
            FUN_02d965b8(PTR_DAT_06a01128);
            DAT_06dbee1c = '\x01';
          }
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar5 = *(long *)puVar2;
          }
          FUN_0362ed24(uVar8,lVar7,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x50),
                       *(undefined8 *)System_Data_ConstraintTable_TypeInfo);
        }
      }
      else {
        uVar12 = *(undefined8 *)(lVar7 + 0x28);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (DAT_06dbee1b == '\0') {
          FUN_02d965b8(PTR_DAT_06a01128);
          DAT_06dbee1b = '\x01';
        }
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar5 = *(long *)puVar2;
        }
        FUN_0362e420(uVar12,lVar7,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x28),
                     *(undefined8 *)System_Runtime_Remoting_Messaging_ConstructionResponse_TypeInfo)
        ;
      }
      *(undefined1 *)(lVar7 + 0xf8) = 0;
      FUN_0663421c(lVar7,0,0);
      *(undefined8 *)(lVar7 + 0x38) = 0;
      LeanTween__value((undefined8 *)(lVar7 + 0x38),0);
      puVar9 = (undefined8 *)(lVar7 + 0x40);
      uVar12 = *puVar9;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar4 = FUN_0634eb94(uVar12,0,0);
      if (((uVar4 & 1) != 0) && (*(char *)(lVar7 + 0x145) != '\0')) {
        uVar12 = *puVar9;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (DAT_06dbee1d == '\0') {
          FUN_02d965b8(PTR_DAT_06a01128);
          DAT_06dbee1d = '\x01';
        }
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar5 = *(long *)puVar2;
        }
        FUN_0362e420(uVar12,lVar7,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x48),
                     *(undefined8 *)
                      System_Runtime_Remoting_Messaging_ConstructionCallDictionary_TypeInfo);
      }
      *(undefined1 *)(lVar7 + 0x145) = 0;
      *(undefined8 *)(lVar7 + 0x40) = 0;
      LeanTween__value(puVar9,0);
      uVar12 = *(undefined8 *)(lVar7 + 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar4 = FUN_0634eb94(uVar8,uVar12,0);
      if ((uVar4 & 1) != 0) {
        FUN_066398d8(param_1,lVar7,0,0);
        FUN_066398d8(param_1,lVar7,uVar8,0);
        return;
      }
    }
    return;
  }
LAB_05739a5c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


