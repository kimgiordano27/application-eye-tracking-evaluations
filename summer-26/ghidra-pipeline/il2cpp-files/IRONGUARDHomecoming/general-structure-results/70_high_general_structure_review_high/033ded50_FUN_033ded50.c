/*
FUNCTION_NAME: FUN_033ded50
ENTRY_POINT: 033ded50
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;pose_vector;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


long * FUN_033ded50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  puVar2 = Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__;
  puVar1 = Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__;
  if ((DAT_04832554 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Gameplay_MeleeWeaponModule_<Start>b__21_0__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Reflection_Module_GetObjectData__);
    DAT_04832554 = 1;
  }
  plVar3 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_0353e574(plVar3,0);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar7 = System_Threading_OSSpecificSynchronizationContext__Post(uVar7,param_2,0);
  uVar4 = FUN_033df1f0(uVar7,uVar7,0);
  if (((((uVar4 & 1) != 0) &&
       (lVar5 = FUN_034d18b8(uVar7,*(undefined8 *)Method_System_Reflection_Module_GetObjectData__,0)
       , lVar5 != 0)) && (uVar4 = *(ulong *)(lVar5 + 0x18), uVar4 != 0)) && (0 < (int)uVar4)) {
    uVar8 = 0;
    lVar6 = lVar5;
    do {
      if ((uVar4 & 0xffffffff) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      uVar7 = FUN_033df188(lVar6,*(undefined8 *)(lVar5 + 0x20 + uVar8 * 8));
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c(uVar7,uVar7);
      }
      lVar6 = (**(code **)(*plVar3 + 0x308))(plVar3,uVar7,*(undefined8 *)(*plVar3 + 0x310));
      uVar4 = (ulong)*(uint *)(lVar5 + 0x18);
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)(int)*(uint *)(lVar5 + 0x18));
  }
  return plVar3;
}


