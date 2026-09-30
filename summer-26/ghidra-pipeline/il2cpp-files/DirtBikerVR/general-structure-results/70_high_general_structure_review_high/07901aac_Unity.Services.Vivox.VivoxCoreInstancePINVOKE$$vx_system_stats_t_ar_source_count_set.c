/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_system_stats_t_ar_source_count_set
ENTRY_POINT: 07901aac
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_system_stats_t_ar_source_count_set
               (int *param_1)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  if ((DAT_08987bd2 & 1) == 0) {
    FUN_03a8a718(Unity_Properties_TypeConverter<ulong,_long>_TypeInfo);
    FUN_03a8a718(Unity_Properties_TypeConverter<ulong,_object>_TypeInfo);
                    /* try { // try from 07901ae0 to 07a01aff has its CatchHandler @ 07901c90 */
    FUN_03a8a718(Unity_Properties_TypeConverter<long,_float>_TypeInfo);
    FUN_03a8a718(Unity_Properties_TypeConverter<ulong,_sbyte>_TypeInfo);
    FUN_03a8a718(Unity_Properties_TypeConverter<float,_long>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08496420);
    FUN_03a8a718(System_Collections_Generic_List<ISessionInfo>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08491c30);
    FUN_03a8a718(Unity_Properties_TypeConverter<ulong,_float>_TypeInfo);
    FUN_03a8a718(Unity_Properties_TypeConverter<ulong,_string>_TypeInfo);
    FUN_03a8a718(Unity_Properties_TypeConverter<ulong,_ushort>_TypeInfo);
    FUN_03a8a718(Unity_Properties_TypeConverter<ulong,_uint>_TypeInfo);
    FUN_03a8a718(Unity_Properties_TypeConverter<VectorImage,_StyleBackground>_TypeInfo);
    FUN_03a8a718(
                UnityEngine_InputSystem_Utilities_SavedStructState_TypedRestore<InputActionState_GlobalState>_TypeInfo
                );
    FUN_03a8a718(
                UnityEngine_InputSystem_Utilities_SavedStructState_TypedRestore<InputUser_GlobalState>_TypeInfo
                );
    FUN_03a8a718(
                UnityEngine_InputSystem_Utilities_SavedStructState_TypedRestore<Touch_GlobalState>_TypeInfo
                );
    DAT_08987bd2 = 1;
  }
  puVar3 = Unity_Properties_TypeConverter<long,_float>_TypeInfo;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  if (*param_1 == 0) {
    in_stack_00000028 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    lVar9 = *(long *)(param_1 + 10);
    if (*(long *)(param_1 + 8) == 0) {
      uVar5 = 0;
    }
    else {
      in_stack_00000008 = 0;
      FUN_0529a878(&stack0x00000008,*(undefined4 *)(*(long *)(param_1 + 8) + 0x10),
                   *(undefined8 *)PTR_DAT_08491c30);
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      FUN_0529a878();
      lVar10 = *(long *)(param_1 + 8);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar7 = *(undefined8 *)(lVar10 + 0x20);
      uVar8 = *(undefined8 *)(lVar10 + 0x28);
      cVar2 = *(char *)(lVar10 + 0x18);
      uVar14 = *(undefined8 *)(lVar10 + 0x30);
      uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                                  Unity_Properties_TypeConverter<ulong,_string>_TypeInfo);
      FUN_0790200c(uVar5,in_stack_00000008,0,cVar2 != '\0',uVar7,uVar8,uVar14);
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar13 = *(long **)(lVar9 + 0x38);
    if (plVar13 == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      lVar10 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)System_Collections_Generic_List<ISessionInfo>_TypeInfo) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_07901cb8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_03ac43c4(plVar13,*(long *)System_Collections_Generic_List<ISessionInfo>_TypeInfo,
                            0);
LAB_07901cb8:
      uVar7 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    }
    uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)Unity_Properties_TypeConverter<ulong,_float>_TypeInfo)
    ;
    FUN_079167e0(uVar8,uVar7,0,uVar5,0);
    plVar13 = *(long **)(lVar9 + 0x10);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08496420) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_07901d4c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)PTR_DAT_08496420,0);
LAB_07901d4c:
    plVar13 = (long *)(*(code *)*puVar6)(plVar13,puVar6[1]);
    uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)Unity_Properties_TypeConverter<ulong,_sbyte>_TypeInfo)
    ;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)Unity_Properties_TypeConverter<float,_long>_TypeInfo
           ) {
          lVar10 = lVar10 + (long)(*piVar12 + 10) * 0x10 + 0x138;
          goto LAB_07901dcc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    lVar10 = FUN_03ac43c4(plVar13,*(long *)Unity_Properties_TypeConverter<float,_long>_TypeInfo,10);
LAB_07901dcc:
    FUN_0496d698(uVar5,plVar13,*(undefined8 *)(lVar10 + 8),0);
    lVar9 = FUN_0481a690(lVar9,*(undefined8 *)
                                UnityEngine_InputSystem_Utilities_SavedStructState_TypedRestore<Touch_GlobalState>_TypeInfo
                         ,uVar5,uVar8,
                         *(undefined8 *)
                          UnityEngine_InputSystem_Utilities_SavedStructState_TypedRestore<InputUser_GlobalState>_TypeInfo
                        );
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000028 =
         FUN_058b71ec(lVar9,*(undefined8 *)
                             UnityEngine_InputSystem_Utilities_SavedStructState_TypedRestore<InputActionState_GlobalState>_TypeInfo
                     );
    uVar11 = FUN_0587c6c4(&stack0x00000028,
                          *(undefined8 *)
                           Unity_Properties_TypeConverter<VectorImage,_StyleBackground>_TypeInfo);
    if ((uVar11 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = in_stack_00000028;
      thunk_FUN_03afed3c(param_1 + 0xc,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03ff5f48(param_1 + 2,&stack0x00000028,param_1,
                   *(undefined8 *)Unity_Properties_TypeConverter<ulong,_long>_TypeInfo);
      return;
    }
  }
  lVar9 = FUN_0587c704(&stack0x00000028,
                       *(undefined8 *)Unity_Properties_TypeConverter<ulong,_uint>_TypeInfo);
  puVar4 = Unity_Properties_TypeConverter<ulong,_object>_TypeInfo;
  if (lVar9 != 0) {
    lVar10 = *(long *)puVar3;
    uVar5 = *(undefined8 *)(lVar9 + 0x20);
    iVar1 = *(int *)(lVar10 + 0xe4);
    *param_1 = -2;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4(lVar10);
    }
    FUN_05338ae8(param_1 + 2,uVar5,*(undefined8 *)puVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


