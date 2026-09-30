/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_req_aux_diagnostic_state_dump_t
ENTRY_POINT: 078cec60
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_aux_diagnostic_state_dump_t(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  int *unaff_x19;
  long *plVar9;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
                    /* try { // try from 078cec60 to 079cec87 has its CatchHandler @ 078cedf8 */
  puVar2 = System_Runtime_CompilerServices_ConditionalWeakTable<object,_SerializationInfo>_TypeInfo;
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  if (*unaff_x19 == 0) {
    uStack0000000000000018 = *(undefined8 *)(unaff_x19 + 10);
                    /* try { // try from 078cecd4 to 079cece3 has its CatchHandler @ 078cede0 */
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (*(long *)(unaff_x19 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar9 = *(long **)(*(long *)(unaff_x19 + 8) + 0x40);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* try { // try from 078cec98 to 079ceca7 has its CatchHandler @ 078cedc8 */
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* try { // try from 078ceca8 to 079cecb3 has its CatchHandler @ 078cedf0 */
        if (*(long *)(piVar8 + -2) ==
            *(long *)UnityEngine_UIElements_ObjectListPool<IBindingRequest>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_078cecf4;
        }
        uVar7 = uVar7 - 1;
                    /* try { // try from 078cecb8 to 079cecc3 has its CatchHandler @ 078cedd8 */
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
                    /* try { // try from 078cecc8 to 079cecd3 has its CatchHandler @ 078cedec */
    puVar4 = (undefined8 *)
             FUN_03ac43c4(plVar9,*(long *)
                                  UnityEngine_UIElements_ObjectListPool<IBindingRequest>_TypeInfo,0)
    ;
LAB_078cecf4:
    plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             System_Collections_Generic_List<DataBindingManager_HierarchyDataSourceTracker_SourceInfo>_TypeInfo
           ) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x25) * 0x10 + 0x138);
          goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_web_call_t_base__get;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_03ac43c4(plVar9,*(long *)
                                  System_Collections_Generic_List<DataBindingManager_HierarchyDataSourceTracker_SourceInfo>_TypeInfo
                          ,0x25);
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_account_web_call_t_base__get:
    lVar6 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uStack0000000000000018 =
         FUN_058b71ec(lVar6,*(undefined8 *)Unity_Properties_ContainerPropertyBag<TimeValue>_TypeInfo
                     );
    uVar7 = FUN_0587c6c4(&stack0x00000018,
                         *(undefined8 *)Unity_Properties_ContainerPropertyBag<TextShadow>_TypeInfo);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 10) = uStack0000000000000018;
      thunk_FUN_03afed3c(unaff_x19 + 10,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_03ff1198(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  uVar5 = FUN_0587c704(&stack0x00000018,
                       *(undefined8 *)Unity_Properties_ContainerPropertyBag<TextAutoSize>_TypeInfo);
  puVar3 = Unity_Properties_ContainerPropertyBag<StylePropertyName>_TypeInfo;
  iVar1 = *(int *)(*(long *)puVar2 + 0xe4);
  *unaff_x19 = -2;
  if (iVar1 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_05338ae8(unaff_x19 + 2,uVar5,*(undefined8 *)puVar3);
  return;
}


