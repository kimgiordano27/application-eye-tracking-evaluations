/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_account_t_firstname_get
ENTRY_POINT: 078fe594
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_account_t_firstname_get(void)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int in_w8;
  long lVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar10;
  long *unaff_x26;
  undefined4 uStack0000000000000008;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = 0;
  uStack0000000000000008 = 0;
  if (in_w8 == 0) {
    uStack0000000000000018 = *(undefined8 *)(unaff_x19 + 0x10);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    *unaff_x19 = 0xffffffff;
  }
  else {
    uVar3 = FUN_065cd284(*(undefined8 *)(unaff_x19 + 8),0);
    if ((uVar3 & 1) != 0) {
      thunk_FUN_03af1434(PTR_DAT_08491298);
      uVar4 = thunk_FUN_03ac74bc();
      uVar6 = thunk_FUN_03af1434(PTR_DAT_0849d0f0);
      uVar7 = thunk_FUN_03af1434(Oculus_Platform_Request<LeaderboardEntryList>_TypeInfo);
      FUN_066b7574(uVar4,uVar6,uVar7,0);
      uVar6 = thunk_FUN_03af1434(Unity_Properties_TypeConverter<string,_double>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar4,uVar6);
    }
    if ((int)unaff_x19[10] < 1) {
      thunk_FUN_03af1434(PTR_DAT_08486870);
      uVar4 = thunk_FUN_03ac74bc();
      uVar6 = thunk_FUN_03af1434(Unity_Properties_TypeConverter<string,_Guid>_TypeInfo);
      FUN_06750b44(uVar4,uVar6,0);
      uVar6 = thunk_FUN_03af1434(Unity_Properties_TypeConverter<string,_double>_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar4,uVar6);
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar4 = FUN_078fdd84(uVar3,*(undefined8 *)(unaff_x19 + 8),unaff_x19[10],
                         *(undefined8 *)(unaff_x19 + 0xe));
    plVar10 = *(long **)(unaff_x20 + 0x10);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar8 = *plVar10;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08496420) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_078fe644;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)PTR_DAT_08496420,0);
LAB_078fe644:
    plVar10 = (long *)(*(code *)*puVar5)(plVar10,puVar5[1]);
    uVar6 = thunk_FUN_03ac74bc(*(undefined8 *)Unity_Properties_TypeConverter<float,_ushort>_TypeInfo
                              );
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar8 = *plVar10;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)Unity_Properties_TypeConverter<float,_long>_TypeInfo)
        {
          lVar8 = lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138;
          goto LAB_078fe6c4;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    lVar8 = FUN_03ac43c4(plVar10,*(long *)Unity_Properties_TypeConverter<float,_long>_TypeInfo,1);
LAB_078fe6c4:
    FUN_0496d698(uVar6,plVar10,*(undefined8 *)(lVar8 + 8),0);
    plVar10 = *(long **)(unaff_x20 + 0x38);
    if (plVar10 == (long *)0x0) {
      uVar6 = 0;
    }
    else {
      lVar8 = *plVar10;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)System_Collections_Generic_List<ISessionInfo>_TypeInfo) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_078fe748;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_03ac43c4(plVar10,*(long *)System_Collections_Generic_List<ISessionInfo>_TypeInfo,
                            0);
LAB_078fe748:
      uVar6 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    }
    uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)
                                Unity_Properties_TypeConverter<float,_StyleLength>_TypeInfo);
    FUN_07911cbc(uVar7,uVar6,0,uVar4,0);
    lVar8 = FUN_0481a690();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uStack0000000000000018 =
         FUN_058b71ec(lVar8,*(undefined8 *)Unity_Properties_TypeConverter<string,_bool>_TypeInfo);
    uVar3 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)
                          Unity_Properties_TypeConverter<Sprite,_StyleBackground>_TypeInfo);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = uStack0000000000000018;
      thunk_FUN_03afed3c(unaff_x19 + 0x10,0);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03ff4f48(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  lVar8 = FUN_0587c704(&stack0x00000018,
                       *(undefined8 *)Unity_Properties_TypeConverter<float,_ulong>_TypeInfo);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (unaff_x20 != 0) {
    uVar4 = *(undefined8 *)(lVar8 + 0x20);
    FUN_078fd284();
    puVar2 = PTR_DAT_0849d120;
    iVar1 = *(int *)(*unaff_x26 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


