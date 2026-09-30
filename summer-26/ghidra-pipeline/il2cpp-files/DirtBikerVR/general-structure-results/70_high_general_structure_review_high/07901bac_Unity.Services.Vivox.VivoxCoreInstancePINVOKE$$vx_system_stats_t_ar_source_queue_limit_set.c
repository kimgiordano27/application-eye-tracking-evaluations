/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_system_stats_t_ar_source_queue_limit_set
ENTRY_POINT: 07901bac
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_system_stats_t_ar_source_queue_limit_set
               (long param_1)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar12;
  undefined8 uVar13;
  long *unaff_x25;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000028;
  
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
                    /* try { // try from 07901bbc to 07a01bc3 has its CatchHandler @ 07901c80 */
    in_stack_00000008 = 0;
    FUN_0529a878(&stack0x00000008,*(undefined4 *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_08491c30);
    if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
                    /* try { // try from 07901bd4 to 07a01bdb has its CatchHandler @ 07901c8c */
                    /* try { // try from 07901bdc to 07a01c23 has its CatchHandler @ 07901a1c */
    FUN_0529a878();
    lVar8 = *(long *)(unaff_x19 + 8);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar6 = *(undefined8 *)(lVar8 + 0x20);
    uVar7 = *(undefined8 *)(lVar8 + 0x28);
    cVar2 = *(char *)(lVar8 + 0x18);
    uVar13 = *(undefined8 *)(lVar8 + 0x30);
    uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)Unity_Properties_TypeConverter<ulong,_string>_TypeInfo
                              );
                    /* try { // try from 07901c24 to 07a01c2b has its CatchHandler @ 07901c78 */
    FUN_0790200c(uVar4,in_stack_00000008,0,cVar2 != '\0',uVar6,uVar7,uVar13);
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  plVar12 = *(long **)(unaff_x20 + 0x38);
  if (plVar12 == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)System_Collections_Generic_List<ISessionInfo>_TypeInfo) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_07901cb8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_03ac43c4(plVar12,*(long *)System_Collections_Generic_List<ISessionInfo>_TypeInfo,0)
    ;
LAB_07901cb8:
    uVar6 = (*(code *)*puVar5)(plVar12,puVar5[1]);
  }
  uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)Unity_Properties_TypeConverter<ulong,_float>_TypeInfo);
  FUN_079167e0(uVar7,uVar6,0,uVar4,0);
  plVar12 = *(long **)(unaff_x20 + 0x10);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar8 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08496420) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_07901d4c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_03ac43c4(plVar12,*(long *)PTR_DAT_08496420,0);
LAB_07901d4c:
  plVar12 = (long *)(*(code *)*puVar5)(plVar12,puVar5[1]);
  uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)Unity_Properties_TypeConverter<ulong,_sbyte>_TypeInfo);
  if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar8 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)Unity_Properties_TypeConverter<float,_long>_TypeInfo)
      {
        lVar8 = lVar8 + (long)(*piVar11 + 10) * 0x10 + 0x138;
        goto LAB_07901dcc;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  lVar8 = FUN_03ac43c4(plVar12,*(long *)Unity_Properties_TypeConverter<float,_long>_TypeInfo,10);
LAB_07901dcc:
  FUN_0496d698(uVar4,plVar12,*(undefined8 *)(lVar8 + 8),0);
  lVar8 = FUN_0481a690();
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000028 =
       FUN_058b71ec(lVar8,*(undefined8 *)
                           UnityEngine_InputSystem_Utilities_SavedStructState_TypedRestore<InputActionState_GlobalState>_TypeInfo
                   );
  uVar10 = FUN_0587c6c4(&stack0x00000028,
                        *(undefined8 *)
                         Unity_Properties_TypeConverter<VectorImage,_StyleBackground>_TypeInfo);
  if ((uVar10 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
    thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ff5f48(unaff_x19 + 2,&stack0x00000028);
  }
  else {
    lVar8 = FUN_0587c704(&stack0x00000028,
                         *(undefined8 *)Unity_Properties_TypeConverter<ulong,_uint>_TypeInfo);
    puVar3 = Unity_Properties_TypeConverter<ulong,_object>_TypeInfo;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar9 = *unaff_x25;
    uVar4 = *(undefined8 *)(lVar8 + 0x20);
    iVar1 = *(int *)(lVar9 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4(lVar9);
    }
    FUN_05338ae8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar3);
  }
  return;
}


