/*
FUNCTION_NAME: FUN_058c9dec
ENTRY_POINT: 058c9dec
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_058c9dec(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  
  lVar8 = param_1;
  if ((DAT_06bc13da & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cafa0);
    FUN_02f08768(Method_System_Collections_Generic_List<WeakReference<VisualElement>>_Clear__);
    FUN_02f08768(PTR_DAT_067d71a8);
    FUN_02f08768(
                Method_System_Collections_Generic_List<WeakReference<VisualElement>>_GetEnumerator__
                );
    FUN_02f08768(PTR_DAT_067ca128);
    FUN_02f08768(PTR_DAT_067ca3e8);
    FUN_02f08768(Method_System_Collections_Generic_List<List<InputBinding>>__ctor__);
    FUN_02f08768(Method_System_Collections_Generic_List<OVRTask<OVRPlugin_Result>>_Add__);
    lVar8 = FUN_02f08768(
                        Method_System_Collections_Generic_List<WeakReference<VisualElement>>_RemoveAll__
                        );
    DAT_06bc13da = 1;
  }
  iVar6 = *(int *)(param_1 + 0x30);
  if (iVar6 - 2U < 2) {
    uVar10 = FUN_058ca0c8(lVar8,*(undefined8 *)(param_1 + 0x18));
    return uVar10;
  }
  puVar12 = (undefined8 *)Method_System_Collections_Generic_List<List<InputBinding>>__ctor__;
  if (iVar6 != 4) {
    if (iVar6 != 1) {
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar9 = FUN_04f6dc3c(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),
                             *(undefined8 *)PTR_DAT_067d71a8,0);
        if ((uVar9 & 1) == 0) {
          if (*(long *)(param_1 + 0x28) != 0) {
            iVar6 = FUN_058bc3b8(*(long *)(param_1 + 0x28),0);
            puVar12 = (undefined8 *)
                      Method_System_Collections_Generic_List<List<InputBinding>>__ctor__;
            if (iVar6 == 0) goto LAB_058ca07c;
            plVar11 = (long *)thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067cafa0);
            FUN_04f77e78(plVar11,0);
            puVar5 = 
            Method_System_Collections_Generic_List<WeakReference<VisualElement>>_RemoveAll__;
            puVar4 = 
            Method_System_Collections_Generic_List<WeakReference<VisualElement>>_GetEnumerator__;
            puVar3 = Method_System_Collections_Generic_List<WeakReference<VisualElement>>_Clear__;
            puVar2 = PTR_DAT_067ca3e8;
            puVar1 = PTR_DAT_067ca128;
            lVar8 = *(long *)(param_1 + 0x28);
            if (lVar8 != 0) {
              iVar6 = 0;
              while (iVar7 = FUN_058bc3b8(lVar8,0), iVar6 < iVar7) {
                if ((*(long *)(param_1 + 0x28) == 0) ||
                   (lVar8 = FUN_058bc360(*(long *)(param_1 + 0x28),iVar6,0), lVar8 == 0))
                goto LAB_058ca070;
                uVar9 = thunk_FUN_04f6d944(*(undefined8 *)(lVar8 + 0x10),*(undefined8 *)puVar5,0);
                puVar12 = (undefined8 *)puVar3;
                if ((uVar9 & 1) != 0) {
                  puVar12 = (undefined8 *)puVar4;
                }
                if (plVar11 == (long *)0x0) goto LAB_058ca070;
                FUN_04f79730(plVar11,*puVar12,0);
                FUN_04f79730(plVar11,*(undefined8 *)(lVar8 + 0x10),0);
                FUN_04f79730(plVar11,*(undefined8 *)puVar2,0);
                if ((param_2 & 1) == 0) {
                  if (*(long *)(param_1 + 0x28) == 0) goto LAB_058ca070;
                  iVar7 = FUN_058bc3b8(*(long *)(param_1 + 0x28),0);
                  if (iVar6 != iVar7 + -1) {
                    uVar10 = *(undefined8 *)puVar1;
                    goto LAB_058ca058;
                  }
                }
                else {
                  uVar10 = FUN_0511a510(0);
LAB_058ca058:
                  FUN_04f79730(plVar11,uVar10,0);
                }
                lVar8 = *(long *)(param_1 + 0x28);
                iVar6 = iVar6 + 1;
                if (lVar8 == 0) goto LAB_058ca070;
              }
              if (plVar11 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x058ca0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar10 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
                return uVar10;
              }
            }
          }
        }
        else if (*(long *)(param_1 + 0x10) != 0) {
          uVar10 = FUN_04f65e2c(*(undefined8 *)
                                 Method_System_Collections_Generic_List<OVRTask<OVRPlugin_Result>>_Add__
                                ,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),0);
          return uVar10;
        }
      }
LAB_058ca070:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    puVar12 = *(undefined8 **)(*(long *)(PTR_DAT_067c9338 + 0x90) + 0xb8);
  }
LAB_058ca07c:
  return *puVar12;
}


