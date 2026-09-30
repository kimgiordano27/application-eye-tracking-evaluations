/*
FUNCTION_NAME: FUN_00f192d0
ENTRY_POINT: 00f192d0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_00f192d0(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  long local_38;
  
                    /* try { // try from 00f192e0 to 010192f7 has its CatchHandler @ 00f19354 */
  if ((DAT_03775503 & 1) == 0) {
                    /* try { // try from 00f192f8 to 0101930b has its CatchHandler @ 00f1938c */
    thunk_FUN_00d48444(Method_System_Data_SqlTypes_SqlDecimal_ToDecimal__);
    thunk_FUN_00d48444(System_Collections_Generic_List<XRBaseInteractor>_TypeInfo);
                    /* try { // try from 00f1930c to 01019317 has its CatchHandler @ 00f191c8 */
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__);
                    /* try { // try from 00f19318 to 0101931f has its CatchHandler @ 00f19350 */
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<DoublePoint>_set_Capacity__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<string,_List<IUxmlFactory>>__ctor__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_InputBindingCompositeContext_ReadValue<int>__)
    ;
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<Light2D>_get_Current__);
    thunk_FUN_00d48444(
                      Method_Meta_WitAi_ThreadUtility_<CoroutineAwait>d__18_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(OVRColocationSession_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<ObiParticleGroup>__ctor__);
    DAT_03775503 = 1;
  }
  puVar2 = 
  Method_Meta_WitAi_ThreadUtility_<CoroutineAwait>d__18_System_Collections_IEnumerator_Reset__;
  if (*(long *)(param_1 + 0x50) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x50) + 0x80) != '\0') {
      return;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    lVar4 = *(long *)
             Method_Meta_WitAi_ThreadUtility_<CoroutineAwait>d__18_System_Collections_IEnumerator_Reset__
    ;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar4 = *(long *)puVar2;
    }
    puVar1 = System_Collections_Generic_List<XRBaseInteractor>_TypeInfo;
    lVar8 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x10);
    if (lVar8 == 0) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar4 = *(long *)puVar2;
      }
      uVar10 = **(undefined8 **)(lVar4 + 0xb8);
      lVar8 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar8 == 0) goto LAB_00f19678;
      FUN_012d239c(lVar8,uVar10,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List_Enumerator<Light2D>_get_Current__,0);
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10) = lVar8;
    }
    puVar2 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    FUN_010dafe8(uVar6,lVar8,&local_38,
                 *(undefined8 *)Method_System_Data_SqlTypes_SqlDecimal_ToDecimal__);
    lVar4 = local_38;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = FUN_0268b4e0(lVar4,0,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
    if (lVar4 != 0) {
      uVar6 = *(undefined8 *)(lVar4 + 0x18);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar5 = FUN_0268b4e0(uVar6,0,0);
      if ((uVar5 & 1) != 0) {
        return;
      }
      if (*(long *)(lVar4 + 0x18) != 0) {
        if (*(int *)(*(long *)(lVar4 + 0x18) + 0x18) == param_2) {
          lVar8 = *(long *)(param_1 + 0x30);
          if (lVar8 == 0) goto LAB_00f19678;
          uVar6 = FUN_00f17638(*(undefined4 *)(lVar4 + 0x34),*(undefined4 *)(lVar4 + 0x38),
                               *(undefined4 *)(lVar4 + 0x3c),*(undefined4 *)(lVar4 + 0x40),
                               *(undefined4 *)(param_1 + 0x2c),lVar8);
          FUN_0268ee74(lVar8,uVar6,0);
          lVar8 = CDRackPuzzle_<FillNeonCoroutine>d__19__System_IDisposable_Dispose(param_1);
          if (lVar8 == 0) goto LAB_00f19678;
          fVar11 = (float)FUN_02659b70(lVar8,0);
          if (fVar11 <= *(float *)(param_1 + 0x60)) {
            uVar6 = CDRackPuzzle_<FillNeonCoroutine>d__19__System_IDisposable_Dispose(param_1);
            FUN_00f49518(*(undefined4 *)(param_1 + 0x60),DAT_028aa040,uVar6,0);
          }
          uVar6 = 0;
          puVar7 = (undefined8 *)OVRColocationSession_TypeInfo;
        }
        else {
          lVar8 = CDRackPuzzle_<FillNeonCoroutine>d__19__System_IDisposable_Dispose(param_1);
          if (lVar8 == 0) goto LAB_00f19678;
          fVar11 = (float)FUN_02659b70(lVar8,0);
          if (fVar11 != *(float *)(param_1 + 0x5c)) {
            uVar6 = CDRackPuzzle_<FillNeonCoroutine>d__19__System_IDisposable_Dispose(param_1);
            FUN_00f49518(*(undefined4 *)(param_1 + 0x5c),DAT_028aa040,uVar6,0);
          }
          puVar2 = Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__;
          if (*(long *)(param_1 + 0x68) == 0) goto LAB_00f19678;
          if (0 < *(int *)(*(long *)(param_1 + 0x68) + 0x18)) {
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__ + 0xe0
                        ) == 0) {
              thunk_FUN_00d32864();
            }
            if (DAT_03774e19 == '\0') {
              thunk_FUN_00d48444(Method_UnityEngine_UIElements_EventBase<PointerLeaveEvent>_TypeId__
                                );
              DAT_03774e19 = '\x01';
            }
            lVar8 = *(long *)puVar2;
            if (*(int *)(lVar8 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar8 = *(long *)puVar2;
            }
            puVar2 = Method_UnityEngine_InputSystem_InputBindingCompositeContext_ReadValue<int>__;
            if ((**(long **)(lVar8 + 0xb8) == 0) || (lVar9 = *(long *)(param_1 + 0x68), lVar9 == 0))
            goto LAB_00f19678;
            lVar8 = *(long *)(**(long **)(lVar8 + 0xb8) + 0xd8);
            uVar3 = FUN_02682b20(0,*(undefined4 *)(lVar9 + 0x18),0);
            FUN_0132138c(lVar9,uVar3,&local_38,*(undefined8 *)puVar2);
            if ((local_38 == 0) || (lVar8 == 0)) goto LAB_00f19678;
            FUN_00fbcd7c(lVar8,*(undefined8 *)(local_38 + 0x18),0,0);
          }
          if (*(long *)(param_1 + 0x78) == 0) goto LAB_00f19678;
          FUN_026ea898(*(long *)(param_1 + 0x78),0);
          uVar6 = 1;
          puVar7 = (undefined8 *)Method_System_Collections_Generic_List<ObiParticleGroup>__ctor__;
        }
        FUN_00fb9984(lVar4,uVar6,0);
        FUN_00fdf628(*puVar7,0);
        if (*(long *)(param_1 + 0x20) != 0) {
          FUN_0132448c(*(long *)(param_1 + 0x20),lVar4,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<DoublePoint>_set_Capacity__);
          return;
        }
      }
    }
  }
LAB_00f19678:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


