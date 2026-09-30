/*
FUNCTION_NAME: OVRPlugin$$get_version
ENTRY_POINT: 05667dd4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_version(void *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 auStack_538 [636];
  undefined1 auStack_2bc [644];
  undefined4 local_38;
  
  puVar1 = PTR_DAT_06a0e868;
  if ((DAT_06dbc60d & 1) == 0) {
    FUN_02d965b8(System_Collections_Generic_List<DebugInspector>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_List<DebugPanel>_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0e868);
    DAT_06dbc60d = 1;
  }
  local_38 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar2 = FUN_0376ebec(param_2,*(undefined8 *)System_Collections_Generic_List<DebugPanel>_TypeInfo);
  if ((lVar2 != 0) && (plVar7 = *(long **)(lVar2 + 0x48), plVar7 != (long *)0x0)) {
    lVar4 = *plVar7;
    uVar8 = *(undefined8 *)(lVar2 + 0x88);
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)System_Collections_Generic_List<DebugInspector>_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_05667ebc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_02dd004c(plVar7,*(long *)System_Collections_Generic_List<DebugInspector>_TypeInfo,0
                         );
LAB_05667ebc:
    uVar5 = (*(code *)*puVar3)(plVar7,uVar8,puVar3[1]);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(lVar2 + 0x88) != 0) {
        FUN_05695388(auStack_538,*(long *)(lVar2 + 0x88),0);
        memcpy(auStack_2bc,auStack_538,0x27c);
        memcpy(param_1,auStack_2bc,0x27c);
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  memset(param_1,0,0x27c);
  return 0;
}


