/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_system_stats_t_ar_source_queue_limit_get
ENTRY_POINT: 07901c30
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_system_stats_t_ar_source_queue_limit_get
               (void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar10;
  long *unaff_x25;
  undefined8 in_stack_00000028;
  
  plVar10 = *(long **)(unaff_x20 + 0x38);
  if (plVar10 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
                    /* try { // try from 07901c38 to 07a01c57 has its CatchHandler @ 07901c7c */
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)System_Collections_Generic_List<ISessionInfo>_TypeInfo) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07901cb8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
                    /* try { // try from 07901c6c to 07a01c6f has its CatchHandler @ 07901c88 */
      } while (uVar8 != 0);
    }
                    /* try { // try from 07901c70 to 07a01c73 has its CatchHandler @ 07901c90 */
                    /* try { // try from 07901c74 to 07a01c77 has its CatchHandler @ 07901c94 */
                    /* catch() { ... } // from try @ 07901c24 with catch @ 07901c78
                       try { // try from 07901c78 to 07a01cab has its CatchHandler @ 07901a1c */
    puVar3 = (undefined8 *)
             FUN_03ac43c4(plVar10,*(long *)System_Collections_Generic_List<ISessionInfo>_TypeInfo,0)
    ;
                    /* catch() { ... } // from try @ 07901c38 with catch @ 07901c7c */
LAB_07901cb8:
    uVar4 = (*(code *)*puVar3)(plVar10,puVar3[1]);
  }
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)Unity_Properties_TypeConverter<ulong,_float>_TypeInfo);
  FUN_079167e0(uVar5,uVar4,0);
  plVar10 = *(long **)(unaff_x20 + 0x10);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar6 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08496420) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_07901d4c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)PTR_DAT_08496420,0);
LAB_07901d4c:
  plVar10 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
  uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)Unity_Properties_TypeConverter<ulong,_sbyte>_TypeInfo);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar6 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)Unity_Properties_TypeConverter<float,_long>_TypeInfo) {
        lVar6 = lVar6 + (long)(*piVar9 + 10) * 0x10 + 0x138;
        goto LAB_07901dcc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  lVar6 = FUN_03ac43c4(plVar10,*(long *)Unity_Properties_TypeConverter<float,_long>_TypeInfo,10);
LAB_07901dcc:
  FUN_0496d698(uVar4,plVar10,*(undefined8 *)(lVar6 + 8),0);
  lVar6 = FUN_0481a690();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000028 =
       FUN_058b71ec(lVar6,*(undefined8 *)
                           UnityEngine_InputSystem_Utilities_SavedStructState_TypedRestore<InputActionState_GlobalState>_TypeInfo
                   );
  uVar8 = FUN_0587c6c4(&stack0x00000028,
                       *(undefined8 *)
                        Unity_Properties_TypeConverter<VectorImage,_StyleBackground>_TypeInfo);
  if ((uVar8 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
    thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ff5f48(unaff_x19 + 2,&stack0x00000028);
  }
  else {
    lVar6 = FUN_0587c704(&stack0x00000028,
                         *(undefined8 *)Unity_Properties_TypeConverter<ulong,_uint>_TypeInfo);
    puVar2 = Unity_Properties_TypeConverter<ulong,_object>_TypeInfo;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar7 = *unaff_x25;
    uVar4 = *(undefined8 *)(lVar6 + 0x20);
    iVar1 = *(int *)(lVar7 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4(lVar7);
    }
    FUN_05338ae8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar2);
  }
  return;
}


