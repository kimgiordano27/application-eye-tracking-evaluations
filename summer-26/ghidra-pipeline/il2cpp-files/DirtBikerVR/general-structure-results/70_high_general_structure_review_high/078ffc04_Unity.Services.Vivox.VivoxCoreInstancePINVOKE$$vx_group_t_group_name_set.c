/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_group_t_group_name_set
ENTRY_POINT: 078ffc04
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_group_t_group_name_set(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  int *unaff_x19;
  long unaff_x20;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_00000018;
  
  FUN_03a8a718(PTR_DAT_08496420);
  FUN_03a8a718(System_Collections_Generic_List<ISessionInfo>_TypeInfo);
  FUN_03a8a718(Unity_Properties_TypeConverter<float,_uint>_TypeInfo);
  FUN_03a8a718(Unity_Properties_TypeConverter<float,_ulong>_TypeInfo);
  FUN_03a8a718(Unity_Properties_TypeConverter<Sprite,_StyleBackground>_TypeInfo);
  FUN_03a8a718(Unity_Properties_TypeConverter<string,_bool>_TypeInfo);
  FUN_03a8a718(Unity_Properties_TypeConverter<ushort,_int>_TypeInfo);
  FUN_03a8a718(Unity_Properties_TypeConverter<ushort,_long>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xbca) = 1;
  puVar2 = PTR_DAT_0849d0a8;
  lVar11 = *(long *)(unaff_x19 + 10);
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
  }
  else {
    uVar4 = FUN_065cd284(*(undefined8 *)(unaff_x19 + 8),0);
    if ((uVar4 & 1) != 0) {
      thunk_FUN_03af1434(PTR_DAT_08491298);
      uVar6 = thunk_FUN_03ac74bc();
      uVar13 = thunk_FUN_03af1434(Unity_Properties_TypeConverter<object,_char>_TypeInfo);
      uVar14 = thunk_FUN_03af1434(Oculus_Platform_Request<LeaderboardEntryList>_TypeInfo);
      FUN_066b7574(uVar6,uVar13,uVar14,0);
      uVar13 = thunk_FUN_03af1434(Unity_Properties_TypeConverter<ushort,_object>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar6,uVar13);
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
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
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_078ffd10;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(plVar12,*(long *)PTR_DAT_08496420,0);
LAB_078ffd10:
    plVar12 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
    uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Unity_Properties_TypeConverter<ushort,_double>_TypeInfo);
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
          lVar9 = lVar9 + (long)(*piVar10 + 6) * 0x10 + 0x138;
          goto LAB_078ffd90;
        }
        uVar4 = uVar4 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar4 != 0);
    }
    lVar9 = FUN_03ac43c4(plVar12,*(long *)Unity_Properties_TypeConverter<float,_long>_TypeInfo,6);
LAB_078ffd90:
    FUN_0496d698(uVar6,plVar12,*(undefined8 *)(lVar9 + 8),0);
    plVar12 = *(long **)(lVar11 + 0x38);
    uVar14 = *(undefined8 *)(unaff_x19 + 8);
    uVar13 = *(undefined8 *)Unity_Properties_TypeConverter<ushort,_long>_TypeInfo;
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
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_078ffe18;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_03ac43c4(plVar12,*(long *)System_Collections_Generic_List<ISessionInfo>_TypeInfo,
                            0);
LAB_078ffe18:
      uVar7 = (*(code *)*puVar5)(plVar12,puVar5[1]);
    }
    uVar8 = thunk_FUN_03ac74bc(*(undefined8 *)Unity_Properties_TypeConverter<ushort,_short>_TypeInfo
                              );
    FUN_079145fc(uVar8,uVar14,uVar7,0,0,0);
    lVar9 = FUN_0481a690(lVar11,uVar13,uVar6,uVar8,
                         *(undefined8 *)Unity_Properties_TypeConverter<ushort,_int>_TypeInfo);
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
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
      thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03ff5620(unaff_x19 + 2,&stack0x00000018);
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
    FUN_078fd284(lVar11,*(undefined8 *)(lVar9 + 0x20));
    puVar3 = PTR_DAT_0849d120;
    uVar6 = *(undefined8 *)(lVar9 + 0x20);
    iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
    *unaff_x19 = -2;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar6,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


