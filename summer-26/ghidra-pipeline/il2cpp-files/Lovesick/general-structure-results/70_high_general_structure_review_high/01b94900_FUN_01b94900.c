/*
FUNCTION_NAME: FUN_01b94900
ENTRY_POINT: 01b94900
PROGRAM: Lovesick-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_6
*/


void FUN_01b94900(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  
  puVar1 = PTR_DAT_033f3868;
  if ((DAT_0377e63b & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<XRTextureDescriptor>_get_IsCreated__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Type,_ISubsystem>_Clear__);
    thunk_FUN_00d48444(PTR_DAT_033f3868);
    thunk_FUN_00d48444(System_Func<LocalizationDataCollection,_bool>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_ARFoundation_SubsystemLifecycleManager<XRSessionSubsystem,_XRSessionSubsystemDescriptor,_XRSessionSubsystem_Provider>_OnDisable__
                      );
    DAT_0377e63b = 1;
  }
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = 
  Method_UnityEngine_XR_ARFoundation_SubsystemLifecycleManager<XRSessionSubsystem,_XRSessionSubsystemDescriptor,_XRSessionSubsystem_Provider>_OnDisable__
  ;
  if (lVar2 != 0) {
    FUN_0268b098(lVar2,0);
    *(long *)(param_1 + 0x18) = lVar2;
    FUN_0268b75c(lVar2,*(undefined8 *)puVar1,0);
    puVar1 = System_Func<LocalizationDataCollection,_bool>_TypeInfo;
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar2 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (*(long *)(param_1 + 0x18),0);
      lVar3 = FUN_0268b22c(*(undefined8 *)puVar1,0);
      if ((lVar3 != 0) &&
         (uVar4 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                            (lVar3,0), lVar2 != 0)) {
        FUN_0269fea8(lVar2,uVar4,0);
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (lVar2 = FUN_010e5800(*(long *)(param_1 + 0x18),
                                 *(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<Type,_ISubsystem>_Clear__
                                ), lVar2 != 0)) {
          FUN_026a1bd8(0x42c80000,0x42c80000,lVar2,0);
          FUN_0269fd98(DAT_028aa290,DAT_028aa290,DAT_028aa290,lVar2,0);
          FUN_0269f750(DAT_028aa028,DAT_029400e0,DAT_0295004c,lVar2,0);
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
                    /* try { // try from 01b94a80 to 01c94a87 has its CatchHandler @ 01b94d98 */
          puVar5 = *(undefined4 **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8);
                    /* try { // try from 01b94a98 to 01c94aa3 has its CatchHandler @ 01b94d94 */
          FUN_0269f968(*puVar5,puVar5[1],puVar5[2],lVar2,0);
                    /* try { // try from 01b94aa4 to 01c94aff has its CatchHandler @ 01b948f4 */
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (lVar2 = FUN_010e5800(*(long *)(param_1 + 0x18),
                                   *(undefined8 *)
                                    Method_Unity_Collections_NativeArray<XRTextureDescriptor>_get_IsCreated__
                                  ), lVar2 != 0)) {
            FUN_028597d4(lVar2,2,0);
            FUN_02859abc(lVar2,0,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


