/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vsha1su0q_u32
ENTRY_POINT: 01ffe40c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_9;functionality_possible_biometrics_hits_4
*/


long * Unity_Burst_Intrinsics_Arm_Neon__vsha1su0q_u32(long param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  int *piVar14;
  
  if ((DAT_03780851 & 1) == 0) {
    thunk_FUN_00d48444(System_Data_SqlTypes_SqlByte___TypeInfo);
    thunk_FUN_00d48444(System_IndexOutOfRangeException_TypeInfo);
    thunk_FUN_00d48444(System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Module>__ctor__);
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    DAT_03780851 = 1;
  }
  puVar4 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  puVar3 = Method_System_Collections_Generic_List<Module>__ctor__;
  puVar2 = System_Data_SqlTypes_SqlByte___TypeInfo;
  if (param_1 == 0) {
    plVar6 = (long *)thunk_FUN_00d62348(*(undefined8 *)System_Data_SqlTypes_SqlByte___TypeInfo);
    if (plVar6 == (long *)0x0) goto LAB_01ffe8d8;
    uVar12 = 0;
    goto LAB_01ffe8b4;
  }
  if (*(int *)(*(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar6 = (long *)Unity_Burst_Intrinsics_Arm_Neon__vrbit_u8(param_1,param_3 & 1);
  lVar7 = thunk_FUN_00d6225c(param_1,*(undefined8 *)puVar3);
  if (lVar7 == 0) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar12 = FUN_01ff1698(param_1);
    if (plVar6 == (long *)0x0) goto LAB_01ffe8d8;
    lVar7 = *plVar6;
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar14 + 8) * 0x10 + 0x138);
          goto LAB_01ffe63c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,8);
LAB_01ffe63c:
    uVar10 = (*(code *)*puVar8)(plVar6,param_2,puVar8[1]);
    uVar10 = FUN_01ffdb78(2,uVar10,uVar12);
    plVar6 = (long *)FUN_01ffb09c(param_1);
    if (plVar6 != (long *)0x0) {
      lVar7 = *plVar6;
      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar7 + (long)(*piVar14 + 8) * 0x10 + 0x138);
            goto LAB_01ffe6c0;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,8);
LAB_01ffe6c0:
      uVar11 = (*(code *)*puVar8)(plVar6,param_2,puVar8[1]);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar4);
      }
      uVar10 = FUN_01ffb158(2,uVar10,uVar11);
    }
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar12 = FUN_01ffc29c(2,uVar10,param_1,uVar12);
LAB_01ffe734:
    plVar6 = (long *)FUN_01ffe8dc(2,uVar12,param_2);
  }
  else {
    if (plVar6 == (long *)0x0) goto LAB_01ffe8d8;
    lVar7 = *plVar6;
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar14 + 8) * 0x10 + 0x138);
          goto LAB_01ffe584;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar3,8);
LAB_01ffe584:
    plVar6 = (long *)(*(code *)*puVar8)(plVar6,param_2,puVar8[1]);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar4);
    }
    if ((param_3 & 1) == 0) {
      uVar12 = FUN_01ffc29c(2,plVar6,param_1,0);
      goto LAB_01ffe734;
    }
    plVar9 = (long *)FUN_01ffb09c(param_1);
    if (plVar9 != (long *)0x0) {
      lVar7 = *plVar9;
      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar13 != 0) {
        piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar7 + (long)(*piVar14 + 8) * 0x10 + 0x138);
            goto Unity_Burst_Intrinsics_Arm_Neon____crc32cd;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar3,8);
Unity_Burst_Intrinsics_Arm_Neon____crc32cd:
      uVar12 = (*(code *)*puVar8)(plVar9,param_2,puVar8[1]);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar4);
      }
      plVar6 = (long *)FUN_01ffb158(2,plVar6,uVar12);
    }
  }
  puVar4 = System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo;
  puVar3 = System_IndexOutOfRangeException_TypeInfo;
  if (plVar6 != (long *)0x0) {
    lVar7 = *(long *)puVar2;
    bVar1 = *(byte *)(lVar7 + 300);
    if ((bVar1 <= *(byte *)(*plVar6 + 300)) &&
       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) == lVar7)) {
      return plVar6;
    }
    lVar7 = *plVar6;
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo) {
          puVar8 = (undefined8 *)(lVar7 + (long)(*piVar14 + 1) * 0x10 + 0x138);
          goto LAB_01ffe81c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_00d59724(plVar6,*(long *)
                                  System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo,1
                         );
LAB_01ffe81c:
    uVar5 = (*(code *)*puVar8)(plVar6,puVar8[1]);
    uVar12 = FUN_00da4fb8(*(undefined8 *)puVar3,uVar5);
    lVar7 = *plVar6;
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar13 != 0) {
      piVar14 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar7 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_01ffe888;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar4,0);
LAB_01ffe888:
    (*(code *)*puVar8)(plVar6,uVar12,0,puVar8[1]);
    plVar6 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (plVar6 != (long *)0x0) {
LAB_01ffe8b4:
      FUN_01fd8fec(plVar6,uVar12,1,0);
      return plVar6;
    }
  }
LAB_01ffe8d8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


