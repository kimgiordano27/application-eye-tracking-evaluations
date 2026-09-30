/*
FUNCTION_NAME: FUN_07ee69d8
ENTRY_POINT: 07ee69d8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;data_collection
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;strong_file_logging_hits_4
*/


void FUN_07ee69d8(long param_1,long param_2)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  int *piVar14;
  uint uVar15;
  
  if ((DAT_0899ae16 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08491998);
    FUN_03a8a718(Method_System_Runtime_Serialization_DataNode<bool>__ctor__);
    FUN_03a8a718(Method_UnityEngine_UIElements_BaseSlider<float>_GetClosestPowerOfTen__);
    FUN_03a8a718(Method_System_Runtime_Serialization_DataNode<bool>_GetValue__);
    FUN_03a8a718(PTR_DAT_08493da0);
    FUN_03a8a718(Method_System_Runtime_Serialization_DataNode<byte>__ctor__);
    FUN_03a8a718(PTR_DAT_08494fe0);
    FUN_03a8a718(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<GetKeysResponse>>_get_Task__
                );
    DAT_0899ae16 = 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_07ee7060;
  uVar8 = FUN_07e3cae8(*(long *)(param_1 + 0x10),0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (param_2 == 0) goto LAB_07ee7060;
  FUN_07f34264(param_2,*(undefined8 *)(param_1 + 0x20),0);
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_07ee7060;
  uVar7 = FUN_07d098f4(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),0);
  if ((uVar7 & 1) == 0) {
    uVar3 = *(ushort *)(param_2 + 0x68);
    uVar8 = FUN_04be21b4(param_2,*(undefined8 *)
                                  Method_System_Runtime_Serialization_DataNode<bool>__ctor__);
    uVar15 = (uint)uVar3;
    if ((uVar8 & 1) != 0) {
      uVar8 = FUN_04be219c(param_2,*(undefined8 *)
                                    Method_UnityEngine_UIElements_BaseSlider<float>_GetClosestPowerOfTen__
                          );
      if ((uVar8 & 1) == 0) {
        return;
      }
      if (uVar15 == 0) {
        return;
      }
    }
    puVar5 = Method_UnityEngine_UIElements_BaseSlider<float>_GetClosestPowerOfTen__;
    uVar1 = *(uint *)(param_2 + 0x6c);
    if (0x119 < (int)uVar1) {
      if (uVar1 < 0x129) {
        return;
      }
      if (0xfffffff6 < uVar1 - 0x2a7) {
        return;
      }
    }
    uVar8 = FUN_04be219c(param_2,*(undefined8 *)
                                  Method_UnityEngine_UIElements_BaseSlider<float>_GetClosestPowerOfTen__
                        );
    if (((uVar8 & 1) != 0) && (uVar15 == 0)) {
      return;
    }
    if ((uVar15 == 9) && (*(int *)(param_2 + 0x6c) == 0)) {
      if (*(int *)(param_2 + 100) == 0) {
        return;
      }
    }
    else if (*(int *)(param_2 + 0x6c) == 9) {
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar13 = FUN_07e377f8(*(long *)(param_1 + 0x10),0), lVar13 == 0)) goto LAB_07ee7060;
      uVar8 = FUN_0351a5ac(0,*(undefined8 *)PTR_DAT_08491998,lVar13);
      if (((uVar8 & 1) == 0) ||
         (uVar8 = FUN_04be2178(param_2,*(undefined8 *)PTR_DAT_08494fe0), (uVar8 & 1) != 0)) {
        uVar8 = FUN_07f34b10(param_2,0);
        if ((uVar8 & 1) == 0) {
          return;
        }
        plVar9 = *(long **)(param_1 + 0x10);
        if (plVar9 != (long *)0x0) {
          lVar13 = (**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230));
          uVar10 = *(undefined8 *)(param_1 + 0x10);
          uVar8 = FUN_04be2178(param_2,*(undefined8 *)PTR_DAT_08494fe0);
          if ((uVar8 & 1) == 0) {
            if (*(int *)(*(long *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<GetKeysResponse>>_get_Task__
                        + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar12 = FUN_07efb688(0);
          }
          else {
            if (*(int *)(*(long *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response<GetKeysResponse>>_get_Task__
                        + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            uVar12 = FUN_07efb6d8(0);
          }
          if (lVar13 != 0) {
            FUN_07f426c4(lVar13,uVar10,uVar12,0);
            FUN_07f2f068(param_2,0);
            return;
          }
        }
        goto LAB_07ee7060;
      }
      uVar8 = FUN_07f34b10(param_2,0);
      if ((uVar8 & 1) == 0) {
        return;
      }
    }
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar13 = FUN_07e377f8(*(long *)(param_1 + 0x10),0), puVar4 = PTR_DAT_08491998, lVar13 == 0))
    goto LAB_07ee7060;
    uVar8 = FUN_0351a5ac(0,*(undefined8 *)PTR_DAT_08491998,lVar13);
    if (((uVar8 & 1) == 0) &&
       ((*(int *)(param_2 + 0x6c) == 0x10f || (*(int *)(param_2 + 0x6c) == 0xd)))) {
      *(undefined1 *)(param_1 + 0x29) = 1;
    }
    FUN_07f2f068(param_2,0);
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar13 = FUN_07e377f8(*(long *)(param_1 + 0x10),0), lVar13 == 0)) goto LAB_07ee7060;
    uVar8 = FUN_0351a5ac(0,*(undefined8 *)puVar4,lVar13);
    if ((uVar8 & 1) == 0) {
      if (((uVar15 != 10) && (uVar15 != 0xd)) ||
         (uVar8 = FUN_04be219c(param_2,*(undefined8 *)puVar5), (uVar8 & 1) != 0)) goto LAB_07ee6de0;
    }
    else if ((uVar15 != 10) ||
            (uVar8 = FUN_04be2178(param_2,*(undefined8 *)PTR_DAT_08494fe0), (uVar8 & 1) == 0)) {
LAB_07ee6de0:
      if (*(int *)(param_2 + 0x6c) == 0x1b) {
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (lVar13 = FUN_07e377f8(*(long *)(param_1 + 0x10),0), lVar13 == 0)) goto LAB_07ee7060;
        FUN_0351a5ac(0xb,*(undefined8 *)puVar4,lVar13);
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (lVar13 = FUN_07e377f8(*(long *)(param_1 + 0x10),0), lVar13 == 0)) goto LAB_07ee7060;
        lVar13 = FUN_0351a5ac(0x10,*(undefined8 *)puVar4,lVar13);
        if (lVar13 != 0) {
          (**(code **)(lVar13 + 0x18))
                    (*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
        }
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (lVar13 = FUN_07e377f8(*(long *)(param_1 + 0x10),0), lVar13 == 0)) goto LAB_07ee7060;
        lVar13 = FUN_0351a5ac(0x14,*(undefined8 *)puVar4,lVar13);
        if (lVar13 != 0) {
          (**(code **)(lVar13 + 0x18))
                    (*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
        }
      }
      uVar1 = *(uint *)(param_2 + 0x6c);
      if (*(uint *)(param_2 + 0x6c) != 9) {
        uVar1 = uVar15;
      }
      if (((*(long *)(param_1 + 0x10) == 0) ||
          (lVar13 = FUN_07e377f8(*(long *)(param_1 + 0x10),0), lVar13 == 0)) ||
         (lVar13 = FUN_0351a5ac(0xc,*(undefined8 *)puVar4,lVar13), lVar13 == 0)) goto LAB_07ee7060;
      uVar8 = (**(code **)(lVar13 + 0x18))
                        (*(undefined8 *)(lVar13 + 0x40),uVar1,*(undefined8 *)(lVar13 + 0x28));
      if ((uVar8 & 1) == 0) {
        FUN_07ee7930(param_1);
        return;
      }
      if (((uVar1 & 0xffff) < 0x20) && (*(int *)(param_2 + 0x6c) != 9)) {
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (lVar13 = FUN_07e377f8(*(long *)(param_1 + 0x10),0), lVar13 == 0)) goto LAB_07ee7060;
        uVar8 = FUN_0351a5ac(0,*(undefined8 *)puVar4,lVar13);
        if ((((uVar8 & 1) == 0) ||
            (uVar8 = FUN_04be219c(param_2,*(undefined8 *)puVar5), (uVar8 & 1) != 0)) ||
           (((uVar1 & 0xffff) != 0xd && ((uVar1 & 0xffff) != 10)))) {
          lVar13 = *(long *)(param_1 + 0x18);
          if (lVar13 == 0) goto LAB_07ee7060;
          cVar2 = *(char *)(lVar13 + 0x24);
          uVar8 = FUN_07d094a8(lVar13,0);
          if ((uVar8 & 1) == 0) {
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_07ee7060;
            if (cVar2 == *(char *)(*(long *)(param_1 + 0x18) + 0x24)) goto LAB_07ee6af0;
          }
          uVar7 = 1;
          *(undefined1 *)(param_1 + 0x28) = 1;
          goto LAB_07ee6b04;
        }
      }
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_07ee7060;
      bVar6 = FUN_07d0c108(*(long *)(param_1 + 0x18),uVar1,0);
      uVar7 = 0;
      *(byte *)(param_1 + 0x28) = bVar6 & 1;
      if ((bVar6 & 1) == 0) goto LAB_07ee6afc;
      goto LAB_07ee6b04;
    }
    FUN_07ee7930(param_1);
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar13 = FUN_07e377f8(*(long *)(param_1 + 0x10),0), lVar13 != 0)) {
      lVar13 = FUN_0351a5ac(0x14,*(undefined8 *)puVar4,lVar13);
      if (lVar13 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x07ee6f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar13 + 0x18))(*(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x28));
      return;
    }
    goto LAB_07ee7060;
  }
  plVar9 = *(long **)(param_1 + 0x10);
  if (plVar9 == (long *)0x0) goto LAB_07ee7060;
  uVar10 = (**(code **)(*plVar9 + 0xd98))(plVar9,*(undefined8 *)(*plVar9 + 0xda0));
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_07ee7060;
  uVar8 = FUN_065cc2f0(uVar10,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x38),0);
  if ((uVar8 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  FUN_07f2f068(param_2,0);
LAB_07ee6af0:
  uVar7 = uVar7 ^ 1;
  if (*(char *)(param_1 + 0x28) == '\0') {
LAB_07ee6afc:
    if (*(char *)(param_1 + 0x29) != '\0') goto LAB_07ee6b04;
  }
  else {
LAB_07ee6b04:
    FUN_07ee7670(param_1,uVar7 & 1);
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (plVar9 = (long *)FUN_07e377f8(*(long *)(param_1 + 0x10),0), plVar9 != (long *)0x0)) {
    lVar13 = *plVar9;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_08491998) {
          puVar11 = (undefined8 *)(lVar13 + (long)(*piVar14 + 0xe) * 0x10 + 0x138);
          goto LAB_07ee6c10;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar11 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)PTR_DAT_08491998,0xe);
LAB_07ee6c10:
    lVar13 = (*(code *)*puVar11)(plVar9,puVar11[1]);
    if (lVar13 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x07ee6c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar13 + 0x18))
              (*(undefined8 *)(lVar13 + 0x40),*(int *)(param_2 + 0x6c) == 8,
               *(undefined8 *)(lVar13 + 0x28));
    return;
  }
LAB_07ee7060:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


