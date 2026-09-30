/*
FUNCTION_NAME: FUN_05e7029c
ENTRY_POINT: 05e7029c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05e7029c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_06dc3ba6 & 1) == 0) {
    FUN_02d965b8(
                Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
                );
    FUN_02d965b8(PTR_DAT_06a00438);
    FUN_02d965b8(
                Method_System_Collections_Generic_List<TunnelingVignetteController_ProviderRecord>_GetEnumerator__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_List<TunnelingVignetteController_ProviderRecord>_get_Count__
                );
    FUN_02d965b8(Method_System_Collections_Generic_List<UIRenderDevice_AllocToFree>__ctor__);
    FUN_02d965b8(Method_System_Collections_Generic_List<UIRenderDevice_AllocToFree>_Add__);
    FUN_02d965b8(Method_System_Collections_Generic_LowLevelList<object>_Insert__);
    DAT_06dc3ba6 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uVar4 = FUN_05e6f350(param_1);
  if ((uVar4 & 1) == 0) {
    return;
  }
  uStack_58 = *(undefined8 *)(param_1 + 0x88);
  local_60 = *(undefined8 *)(param_1 + 0x80);
  uStack_48 = 0;
  local_40 = 0;
  local_50 = 0;
  local_38 = CONCAT62((uint6)(ushort)*(undefined4 *)(param_1 + 0x58),1);
  local_38 = CONCAT44(0x200,(undefined4)local_38);
  lVar5 = FUN_05e6f288(param_1);
  if (lVar5 != 0) {
    uVar4 = FUN_05e62820(lVar5,0);
    if ((uVar4 & 1) == 0) {
      uVar3 = FUN_03601464(*(undefined8 *)(param_1 + 0xd0),
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_get_Count__
                          );
      uStack_48 = CONCAT44(uStack_48._4_4_,uVar3);
      local_40 = FUN_0361482c(*(undefined8 *)(param_1 + 0xd0),*(undefined8 *)PTR_DAT_06a00438);
      LeanTween__value(&local_40,local_40);
      lVar5 = FUN_05e6f288(param_1);
      if ((lVar5 != 0) && (*(long *)(lVar5 + 0x128) != 0)) {
        FUN_036f2ed4(*(long *)(lVar5 + 0x128),&local_60,2,0,
                     *(undefined8 *)Method_System_Collections_Generic_LowLevelList<object>_Insert__)
        ;
        return;
      }
    }
    else if (*(long *)(param_1 + 0xd0) != 0) {
      FUN_03c5f11c(&local_98,*(long *)(param_1 + 0xd0),
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<UIRenderDevice_AllocToFree>_Add__);
      puVar2 = Method_System_Collections_Generic_LowLevelList<object>_Insert__;
      puVar1 = 
      Method_System_Collections_Generic_List<TunnelingVignetteController_ProviderRecord>_get_Count__
      ;
      uStack_78 = puStack_90;
      local_80 = local_98;
      local_70 = local_88;
      local_98 = 0;
      puStack_90 = &local_80;
      while( true ) {
        do {
          uVar4 = FUN_05170384(&local_80,*(undefined8 *)puVar1);
          lVar5 = local_70;
          if ((uVar4 & 1) == 0) {
            FUN_05170380(&local_80,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<TunnelingVignetteController_ProviderRecord>_GetEnumerator__
                        );
            return;
          }
          lVar6 = FUN_05e6f288(param_1);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar6 = FUN_05e5e724(lVar6,0);
        } while (lVar5 == lVar6);
        lVar6 = FUN_05e6f288(param_1);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(long *)(lVar6 + 0x128) == 0) break;
        FUN_036f2ed4(*(long *)(lVar6 + 0x128),&local_60,2,lVar5,*(undefined8 *)puVar2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


