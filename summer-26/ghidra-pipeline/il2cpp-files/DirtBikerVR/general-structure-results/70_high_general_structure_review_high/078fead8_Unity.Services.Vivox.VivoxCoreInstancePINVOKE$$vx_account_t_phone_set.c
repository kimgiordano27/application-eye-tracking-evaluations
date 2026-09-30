/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_account_t_phone_set
ENTRY_POINT: 078fead8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_account_t_phone_set(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000018;
  
  if ((DAT_08987bc4 & 1) == 0) {
    FUN_03a8a718(Unity_Properties_TypeConverter<string,_short>_TypeInfo);
    FUN_03a8a718(PTR_DAT_0849d120);
                    /* try { // try from 078feb14 to 079feb4b has its CatchHandler @ 078feb68 */
    FUN_03a8a718(PTR_DAT_0849d0a8);
    FUN_03a8a718(Unity_Properties_TypeConverter<string,_int>_TypeInfo);
    FUN_03a8a718(Unity_Properties_TypeConverter<string,_long>_TypeInfo);
    FUN_03a8a718(Unity_Properties_TypeConverter<float,_long>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08496420);
    FUN_03a8a718(System_Collections_Generic_List<ISessionInfo>_TypeInfo);
    FUN_03a8a718(Unity_Properties_TypeConverter<float,_uint>_TypeInfo);
                    /* catch() { ... } // from try @ 078feb14 with catch @ 078feb68 */
    FUN_03a8a718(Unity_Properties_TypeConverter<float,_ulong>_TypeInfo);
    FUN_03a8a718(Unity_Properties_TypeConverter<Sprite,_StyleBackground>_TypeInfo);
    FUN_03a8a718(Unity_Properties_TypeConverter<string,_bool>_TypeInfo);
    FUN_03a8a718(Unity_Properties_TypeConverter<string,_sbyte>_TypeInfo);
    FUN_03a8a718(Unity_Properties_TypeConverter<string,_float>_TypeInfo);
    DAT_08987bc4 = 1;
  }
  puVar2 = PTR_DAT_0849d0a8;
  lVar11 = *(long *)(param_1 + 0xe);
  in_stack_00000018 = 0;
  if (*param_1 == 0) {
    in_stack_00000018 = *(undefined8 *)(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    uVar4 = FUN_065cd284(*(undefined8 *)(param_1 + 8),0);
    if ((uVar4 & 1) != 0) {
      thunk_FUN_03af1434(PTR_DAT_08491298);
      uVar5 = thunk_FUN_03ac74bc();
      uVar13 = thunk_FUN_03af1434(Unity_Properties_TypeConverter<object,_char>_TypeInfo);
      uVar7 = thunk_FUN_03af1434(Oculus_Platform_Request<LeaderboardEntryList>_TypeInfo);
      FUN_066b7574(uVar5,uVar13,uVar7,0);
      uVar13 = thunk_FUN_03af1434(Unity_Properties_TypeConverter<string,_ushort>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar5,uVar13);
    }
    uVar4 = FUN_065cd284(*(undefined8 *)(param_1 + 10),0);
    if ((uVar4 & 1) != 0) {
      thunk_FUN_03af1434(PTR_DAT_08491298);
      uVar5 = thunk_FUN_03ac74bc();
      uVar13 = thunk_FUN_03af1434(PTR_DAT_0849d0f0);
      uVar7 = thunk_FUN_03af1434(Oculus_Platform_Request<LeaderboardEntryList>_TypeInfo);
      FUN_066b7574(uVar5,uVar13,uVar7,0);
      uVar13 = thunk_FUN_03af1434(Unity_Properties_TypeConverter<string,_ushort>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar5,uVar13);
    }
    if (param_1[0xc] < 1) {
      thunk_FUN_03af1434(PTR_DAT_08486870);
      uVar5 = thunk_FUN_03ac74bc();
      uVar13 = thunk_FUN_03af1434(Unity_Properties_TypeConverter<string,_Guid>_TypeInfo);
      FUN_06750b44(uVar5,uVar13,0);
      uVar13 = thunk_FUN_03af1434(Unity_Properties_TypeConverter<string,_ushort>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar5,uVar13);
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar5 = FUN_078fdd84(uVar4,*(undefined8 *)(param_1 + 10),param_1[0xc],
                         *(undefined8 *)(param_1 + 0x10));
    plVar12 = *(long **)(lVar11 + 0x38);
    uVar13 = *(undefined8 *)(param_1 + 8);
    if (plVar12 == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      lVar9 = *plVar12;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)System_Collections_Generic_List<ISessionInfo>_TypeInfo) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_078fec8c;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_03ac43c4(plVar12,*(long *)System_Collections_Generic_List<ISessionInfo>_TypeInfo,
                            0);
LAB_078fec8c:
      uVar7 = (*(code *)*puVar6)(plVar12,puVar6[1]);
    }
    uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)Unity_Properties_TypeConverter<string,_int>_TypeInfo);
    FUN_07912510(uVar8,uVar13,uVar7,0,uVar5,0);
    plVar12 = *(long **)(lVar11 + 0x10);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar9 = *plVar12;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08496420) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_078fed28;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(plVar12,*(long *)PTR_DAT_08496420,0);
LAB_078fed28:
    plVar12 = (long *)(*(code *)*puVar6)(plVar12,puVar6[1]);
    uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)Unity_Properties_TypeConverter<string,_long>_TypeInfo)
    ;
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar9 = *plVar12;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)Unity_Properties_TypeConverter<float,_long>_TypeInfo
           ) {
          lVar9 = lVar9 + (long)(*piVar10 + 2) * 0x10 + 0x138;
          goto LAB_078feda8;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    lVar9 = FUN_03ac43c4(plVar12,*(long *)Unity_Properties_TypeConverter<float,_long>_TypeInfo,2);
LAB_078feda8:
    FUN_0496d698(uVar5,plVar12,*(undefined8 *)(lVar9 + 8),0);
    lVar9 = FUN_0481a690(lVar11,*(undefined8 *)
                                 Unity_Properties_TypeConverter<string,_float>_TypeInfo,uVar5,uVar8,
                         *(undefined8 *)Unity_Properties_TypeConverter<string,_sbyte>_TypeInfo);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    in_stack_00000018 =
         FUN_058b71ec(lVar9,*(undefined8 *)Unity_Properties_TypeConverter<string,_bool>_TypeInfo);
    uVar4 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)
                          Unity_Properties_TypeConverter<Sprite,_StyleBackground>_TypeInfo);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x12) = in_stack_00000018;
      thunk_FUN_03afed3c(param_1 + 0x12,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03ff5190(param_1 + 2,&stack0x00000018,param_1,
                   *(undefined8 *)Unity_Properties_TypeConverter<string,_short>_TypeInfo);
      return;
    }
  }
  lVar9 = FUN_0587c704(&stack0x00000018,
                       *(undefined8 *)Unity_Properties_TypeConverter<float,_ulong>_TypeInfo);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (lVar11 != 0) {
    uVar5 = *(undefined8 *)(lVar9 + 0x20);
    FUN_078fd284(lVar11,uVar5);
    puVar3 = PTR_DAT_0849d120;
    iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
    *param_1 = -2;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(param_1 + 2,uVar5,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


