/*
FUNCTION_NAME: FUN_0582c670
ENTRY_POINT: 0582c670
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8 FUN_0582c670(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if ((DAT_06bc0f13 & 1) == 0) {
                    /* try { // try from 0582c694 to 0592c7f7 has its CatchHandler @ 0582bd6c */
    FUN_02f08768(
                System_Func<ValueTuple<NavigationMoveEvent_Direction,_EventModifiers,_DefaultEventSystem_LegacyInputProcessor_IInput>,_EventBase>_TypeInfo
                );
    FUN_02f08768(Method_UnityEngine_UIElements_EventBase<ChangingEvent<Rect>>_GetPooled__);
    FUN_02f08768(Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0_TypeInfo);
    DAT_06bc0f13 = 1;
  }
  if (param_1 != (long *)0x0) {
    uVar3 = (**(code **)(*param_1 + 0x3b8))(param_1,*(undefined8 *)(*param_1 + 0x3c0));
    puVar1 = PTR_DAT_067c9338;
    if ((uVar3 & 1) != 0) {
      uVar7 = *(undefined8 *)
               System_Func<ValueTuple<NavigationMoveEvent_Direction,_EventModifiers,_DefaultEventSystem_LegacyInputProcessor_IInput>,_EventBase>_TypeInfo
      ;
      if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      plVar4 = (long *)FUN_050e4454(uVar7,0);
      uVar7 = (**(code **)(*param_1 + 0x438))(param_1,*(undefined8 *)(*param_1 + 0x440));
      if (plVar4 == (long *)0x0) goto LAB_0582c854;
      uVar3 = (**(code **)(*plVar4 + 0x298))(plVar4,uVar7,*(undefined8 *)(*plVar4 + 0x2a0));
      if ((uVar3 & 1) != 0) {
        lVar5 = (**(code **)(*param_1 + 0x458))(param_1,*(undefined8 *)(*param_1 + 0x460));
        uVar7 = FUN_050ef718(param_1,*(undefined8 *)
                                      Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0_TypeInfo
                             ,lVar5,0);
        uVar3 = FUN_05016eec(uVar7,0,0);
        if ((uVar3 & 1) != 0) {
          if (lVar5 != 0) {
            if (*(int *)(lVar5 + 0x18) != 0) {
              return *(undefined8 *)(lVar5 + 0x20);
            }
LAB_0582c850:
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          goto LAB_0582c854;
        }
      }
    }
    lVar5 = (**(code **)(*param_1 + 0x8a8))(param_1,*(undefined8 *)(*param_1 + 0x8b0));
    puVar2 = Method_UnityEngine_UIElements_EventBase<ChangingEvent<Rect>>_GetPooled__;
    if (lVar5 != 0) {
      if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
        uVar3 = 0;
        uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
        do {
          if (uVar6 <= uVar3) goto LAB_0582c850;
          uVar7 = *(undefined8 *)(lVar5 + 0x20 + uVar3 * 8);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar7 = FUN_0582c670(uVar7);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c(*(long *)(puVar1 + 0xe0));
          }
          uVar6 = FUN_050edfb8(uVar7,0,0);
          if ((uVar6 & 1) != 0) {
            return uVar7;
          }
          uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)(int)*(uint *)(lVar5 + 0x18));
      }
      return 0;
    }
  }
LAB_0582c854:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


