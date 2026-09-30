/*
FUNCTION_NAME: FUN_022f39dc
ENTRY_POINT: 022f39dc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_022f39dc(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 local_28;
  
  puVar1 = PTR_DAT_033ea8a0;
  if ((DAT_03781af4 & 1) == 0) {
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__);
    thunk_FUN_00d48444(Obi_ObiBoneBlueprint_<CreateSkinConstraints>d__19_TypeInfo);
    thunk_FUN_00d48444(System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo);
    DAT_03781af4 = 1;
  }
  local_28 = 0;
  plVar2 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1,5);
  puVar1 = Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((*(long *)Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__ != 0) &&
     (lVar3 = thunk_FUN_00d6225c(*(long *)Method_System_Array_Resize<OVRPlugin_SpaceComponentType>__
                                 ,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
LAB_022f3b88:
    uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar5,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = *(long *)puVar1;
    local_28 = *(undefined8 *)(param_1 + 0x10);
    lVar3 = FUN_0269109c(&local_28,0);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
    goto LAB_022f3b88;
    puVar1 = Obi_ObiBoneBlueprint_<CreateSkinConstraints>d__19_TypeInfo;
    uVar6 = *(uint *)(plVar2 + 3);
    if (1 < uVar6) {
      plVar2[5] = lVar3;
      lVar3 = *(long *)puVar1;
      if (lVar3 != 0) {
        lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40));
        if (lVar3 == 0) goto LAB_022f3b88;
        uVar6 = *(uint *)(plVar2 + 3);
      }
      if (2 < uVar6) {
        plVar2[6] = *(long *)puVar1;
        local_28 = *(undefined8 *)(param_1 + 0x18);
        lVar3 = FUN_0269109c(&local_28,0);
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0))
        goto LAB_022f3b88;
        puVar1 = System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo;
        uVar6 = *(uint *)(plVar2 + 3);
        if (3 < uVar6) {
          plVar2[7] = lVar3;
          lVar3 = *(long *)puVar1;
          if (lVar3 != 0) {
            lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar2 + 0x40));
            if (lVar3 == 0) goto LAB_022f3b88;
            uVar6 = *(uint *)(plVar2 + 3);
          }
          if (4 < uVar6) {
            plVar2[8] = *(long *)puVar1;
            FUN_01600844(plVar2,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


