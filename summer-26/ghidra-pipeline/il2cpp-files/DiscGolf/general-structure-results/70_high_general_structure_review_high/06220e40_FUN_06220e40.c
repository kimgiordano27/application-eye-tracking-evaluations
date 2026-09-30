/*
FUNCTION_NAME: FUN_06220e40
ENTRY_POINT: 06220e40
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4
*/


void FUN_06220e40(long param_1,uint param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  
                    /* try { // try from 06220e6c to 06320e73 has its CatchHandler @ 06220ed8 */
  if ((DAT_06dc7153 & 1) == 0) {
    FUN_02d965b8(System_Data_ConstraintTable_TypeInfo);
                    /* try { // try from 06220e80 to 06320e9f has its CatchHandler @ 06220edc */
    FUN_02d965b8(System_Runtime_Remoting_Messaging_ConstructionCall_TypeInfo);
    FUN_02d965b8(System_Runtime_Remoting_Messaging_ConstructionCallDictionary_TypeInfo);
    FUN_02d965b8(System_Runtime_Remoting_Activation_ConstructionLevelActivator_TypeInfo);
    FUN_02d965b8(System_Runtime_Remoting_Messaging_ConstructionResponse_TypeInfo);
    FUN_02d965b8(System_Reflection_ConstructorInfo_TypeInfo);
    FUN_02d965b8(System_Net_ContentDecodeStream_TypeInfo);
    FUN_02d965b8(System_Net_Http_Headers_ContentDispositionHeaderValue_TypeInfo);
    FUN_02d965b8(Method_System_Collections_Generic_List<ScoreScreenCell>_Add__);
    FUN_02d965b8(PTR_DAT_06a01128);
    FUN_02d965b8(PTR_DAT_069fb990);
    DAT_06dc7153 = 1;
  }
  cVar3 = DAT_06db4c79;
  if (param_3 != 0) {
    uVar7 = *(undefined8 *)(param_3 + 0x50);
    if ((param_2 & 1) != 0) {
      *(undefined1 *)(param_3 + 0xf8) = 1;
      if (cVar3 == '\0') {
        FUN_02d965b8(PTR_DAT_069fbf00);
        DAT_06db4c79 = '\x01';
      }
      uVar11 = **(undefined8 **)(*(long *)PTR_DAT_069fbf00 + 0xb8);
      *(undefined1 *)(param_3 + 0x145) = 0;
      *(undefined8 *)(param_3 + 0x114) = *(undefined8 *)(param_3 + 0x104);
      *(undefined8 *)(param_3 + 0x10c) = uVar11;
      memcpy((void *)(param_3 + 0xa0),(undefined8 *)(param_3 + 0x50),0x50);
      LeanTween__value(param_3 + 0xa0,0);
      puVar2 = PTR_DAT_06a01128;
      *(undefined1 *)(param_3 + 0x144) = 1;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar11 = Unity_Netcode_NetworkVariableSerializationTypedInitializers__InitializeSerializer_UnmanagedByMemcpy<Vector3>
                         (uVar7,*(undefined8 *)
                                 Method_System_Collections_Generic_List<ScoreScreenCell>_Add__);
      puVar1 = PTR_DAT_069fb990;
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_062215a4;
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x40);
      if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar4 = FUN_0634eb94(uVar9,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(param_1 + 0x38) == 0) goto LAB_062215a4;
        uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x40);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar4 = FUN_0634eb94(uVar11,uVar9,0);
        if ((uVar4 & 1) != 0) {
          if (*(long *)(param_1 + 0x38) == 0) goto LAB_062215a4;
          FUN_06633a94(*(long *)(param_1 + 0x38),0,param_3,0);
        }
      }
      lVar6 = *(long *)(param_1 + 0xb8);
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 0x18))
                  (*(undefined8 *)(lVar6 + 0x40),uVar7,param_3,*(undefined8 *)(lVar6 + 0x28));
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (DAT_06dbee18 == '\0') {
        FUN_02d965b8(PTR_DAT_06a01128);
        DAT_06dbee18 = '\x01';
      }
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar6 = *(long *)puVar2;
      }
      uVar11 = FUN_0362ed24(uVar7,param_3,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x18),
                            *(undefined8 *)
                             System_Runtime_Remoting_Messaging_ConstructionCall_TypeInfo);
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
      uVar9 = *(undefined8 *)(param_3 + 0x30);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar4 = FUN_06350670(uVar11,uVar9,0);
      if (((uVar4 & 1) == 0) || (*(float *)(param_1 + 0x58) <= fVar10 - *(float *)(param_3 + 0x134))
         ) {
        iVar5 = 1;
      }
      else {
        iVar5 = *(int *)(param_3 + 0x138) + 1;
      }
      *(int *)(param_3 + 0x138) = iVar5;
      *(float *)(param_3 + 0x134) = fVar10;
      FUN_0663421c(param_3,uVar11,0);
      *(undefined8 *)(param_3 + 0x38) = uVar7;
      LeanTween__value((undefined8 *)(param_3 + 0x38),uVar7);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar11 = Unity_Netcode_NetworkVariableSerializationTypedInitializers__InitializeSerializer_UnmanagedByMemcpy<Vector3>
                         (uVar7,*(undefined8 *)System_Net_ContentDecodeStream_TypeInfo);
      *(undefined8 *)(param_3 + 0x40) = uVar11;
      LeanTween__value((undefined8 *)(param_3 + 0x40),uVar11);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar4 = FUN_0634eb94(uVar11,0,0);
      if ((uVar4 & 1) != 0) {
        lVar6 = *(long *)(param_1 + 0xd8);
        if (lVar6 != 0) {
          (**(code **)(lVar6 + 0x18))
                    (*(undefined8 *)(lVar6 + 0x40),uVar11,param_3,*(undefined8 *)(lVar6 + 0x28));
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (DAT_06dbee19 == '\0') {
          FUN_02d965b8(PTR_DAT_06a01128);
          DAT_06dbee19 = '\x01';
        }
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar6 = *(long *)puVar2;
        }
        FUN_0362e420(uVar11,param_3,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x30),
                     *(undefined8 *)
                      System_Runtime_Remoting_Activation_ConstructionLevelActivator_TypeInfo);
      }
    }
    if ((param_2 >> 1 & 1) == 0) {
      return;
    }
    lVar6 = *(long *)(param_1 + 0xc0);
    uVar11 = *(undefined8 *)(param_3 + 0x28);
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x18))
                (*(undefined8 *)(lVar6 + 0x40),uVar11,param_3,*(undefined8 *)(lVar6 + 0x28));
    }
    puVar2 = PTR_DAT_06a01128;
    if (*(int *)(*(long *)PTR_DAT_06a01128 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (DAT_06dbee1a == '\0') {
      FUN_02d965b8(PTR_DAT_06a01128);
      DAT_06dbee1a = '\x01';
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar6 = *(long *)puVar2;
    }
    FUN_0362e420(uVar11,param_3,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x20),
                 *(undefined8 *)System_Reflection_ConstructorInfo_TypeInfo);
    uVar9 = Unity_Netcode_NetworkVariableSerializationTypedInitializers__InitializeSerializer_UnmanagedByMemcpy<Vector3>
                      (uVar7,*(undefined8 *)
                              System_Net_Http_Headers_ContentDispositionHeaderValue_TypeInfo);
    puVar1 = PTR_DAT_069fb990;
    uVar8 = *(undefined8 *)(param_3 + 0x40);
    if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)PTR_DAT_069fb990);
    }
    uVar4 = FUN_06350670(uVar11,uVar9,0);
    if (((uVar4 & 1) == 0) || (*(char *)(param_3 + 0xf8) == '\0')) {
      if (*(char *)(param_3 + 0x145) != '\0') {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar4 = FUN_0634eb94(uVar8,0,0);
        if ((uVar4 & 1) != 0) {
          lVar6 = *(long *)(param_1 + 0xf8);
          if (lVar6 != 0) {
            (**(code **)(lVar6 + 0x18))
                      (*(undefined8 *)(lVar6 + 0x40),uVar7,param_3,*(undefined8 *)(lVar6 + 0x28));
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (DAT_06dbee1c == '\0') {
            FUN_02d965b8(PTR_DAT_06a01128);
            DAT_06dbee1c = '\x01';
          }
          lVar6 = *(long *)puVar2;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar6 = *(long *)puVar2;
          }
          FUN_0362ed24(uVar7,param_3,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x50),
                       *(undefined8 *)System_Data_ConstraintTable_TypeInfo);
        }
      }
    }
    else {
      lVar6 = *(long *)(param_1 + 200);
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 0x18))
                  (*(undefined8 *)(lVar6 + 0x40),uVar11,param_3,*(undefined8 *)(lVar6 + 0x28));
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (DAT_06dbee1b == '\0') {
        FUN_02d965b8(PTR_DAT_06a01128);
        DAT_06dbee1b = '\x01';
      }
      lVar6 = *(long *)puVar2;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar6 = *(long *)puVar2;
      }
      FUN_0362e420(uVar11,param_3,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x28),
                   *(undefined8 *)System_Runtime_Remoting_Messaging_ConstructionResponse_TypeInfo);
    }
    *(undefined1 *)(param_3 + 0xf8) = 0;
    FUN_0663421c(param_3,0,0);
    *(undefined8 *)(param_3 + 0x38) = 0;
    LeanTween__value((undefined8 *)(param_3 + 0x38),0);
    if (*(char *)(param_3 + 0x145) != '\0') {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar4 = FUN_0634eb94(uVar8,0,0);
      if ((uVar4 & 1) != 0) {
        lVar6 = *(long *)(param_1 + 0xf0);
        if (lVar6 != 0) {
          (**(code **)(lVar6 + 0x18))
                    (*(undefined8 *)(lVar6 + 0x40),uVar8,param_3,*(undefined8 *)(lVar6 + 0x28));
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        if (DAT_06dbee1d == '\0') {
          FUN_02d965b8(PTR_DAT_06a01128);
          DAT_06dbee1d = '\x01';
        }
        lVar6 = *(long *)puVar2;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar6 = *(long *)puVar2;
        }
        FUN_0362e420(uVar8,param_3,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x48),
                     *(undefined8 *)
                      System_Runtime_Remoting_Messaging_ConstructionCallDictionary_TypeInfo);
      }
    }
    *(undefined1 *)(param_3 + 0x145) = 0;
    *(undefined8 *)(param_3 + 0x40) = 0;
    LeanTween__value((undefined8 *)(param_3 + 0x40),0);
    return;
  }
LAB_062215a4:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


