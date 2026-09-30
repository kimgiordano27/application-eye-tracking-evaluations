/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_system_stats_t_strss_count_get
ENTRY_POINT: 07902a30
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_system_stats_t_strss_count_get(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x22;
  long *plVar9;
  long *unaff_x24;
  undefined8 unaff_x25;
  undefined8 in_stack_00000018;
  
  if (unaff_x21 == (long *)0x0) {
                    /* try { // try from 07902a94 to 07a02a97 has its CatchHandler @ 07902c34 */
    uVar4 = 0;
  }
  else {
    lVar6 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* try { // try from 07902a54 to 07a02a63 has its CatchHandler @ 07902c44 */
        if (*(long *)(piVar8 + -2) ==
            *(long *)System_Collections_Generic_List<ISessionInfo>_TypeInfo) {
                    /* try { // try from 07902aa4 to 07a02aa7 has its CatchHandler @ 07902c30 */
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07902aa8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
                    /* try { // try from 07902a74 to 07a02a77 has its CatchHandler @ 07902c40 */
    puVar3 = (undefined8 *)FUN_03ac43c4();
LAB_07902aa8:
    uVar4 = (*(code *)*puVar3)();
    unaff_x22 = unaff_x25;
  }
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)
                              UnityEngine_Events_UnityAction<HVRPhysicsButton>_TypeInfo);
  FUN_07917880(uVar5,unaff_x22,uVar4,0,0,0);
  plVar9 = *(long **)(unaff_x20 + 0x10);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_08496420) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_07902b44;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_03ac43c4(plVar9,*(long *)PTR_DAT_08496420,0);
LAB_07902b44:
  plVar9 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
  uVar4 = thunk_FUN_03ac74bc(*(undefined8 *)UnityEngine_Events_UnityAction<HVRGrabbable>_TypeInfo);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)Unity_Properties_TypeConverter<float,_long>_TypeInfo) {
        lVar6 = lVar6 + (long)(*piVar8 + 0xc) * 0x10 + 0x138;
        goto LAB_07902bc4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  lVar6 = FUN_03ac43c4(plVar9,*(long *)Unity_Properties_TypeConverter<float,_long>_TypeInfo,0xc);
LAB_07902bc4:
  FUN_0496d698(uVar4,plVar9,*(undefined8 *)(lVar6 + 8),0);
  lVar6 = FUN_0481a690();
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  in_stack_00000018 =
       FUN_058b71ec(lVar6,*(undefined8 *)Unity_Properties_TypeConverter<string,_bool>_TypeInfo);
  uVar7 = FUN_0587c6c4(&stack0x00000018,
                       *(undefined8 *)
                        Unity_Properties_TypeConverter<Sprite,_StyleBackground>_TypeInfo);
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
    thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_03ff63e0(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    lVar6 = FUN_0587c704(&stack0x00000018,
                         *(undefined8 *)Unity_Properties_TypeConverter<float,_ulong>_TypeInfo);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_078fd284();
    puVar2 = PTR_DAT_0849d120;
    uVar4 = *(undefined8 *)(lVar6 + 0x20);
    iVar1 = *(int *)(*unaff_x24 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_05338ae8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar2);
  }
  return;
}


