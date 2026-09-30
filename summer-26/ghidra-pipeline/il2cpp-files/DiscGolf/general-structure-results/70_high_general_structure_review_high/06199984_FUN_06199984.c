/*
FUNCTION_NAME: FUN_06199984
ENTRY_POINT: 06199984
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


undefined8 FUN_06199984(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  int iVar11;
  
  puVar1 = PTR_DAT_069fb990;
                    /* try { // try from 061999ac to 06299a9f has its CatchHandler @ 061999ac
                       catch() { ... } // from try @ 061999ac with catch @ 061999ac
                       catch() { ... } // from try @ 06199ce8 with catch @ 061999ac
                       catch() { ... } // from try @ 06199df0 with catch @ 061999ac
                       catch() { ... } // from try @ 06199e5c with catch @ 061999ac
                       catch() { ... } // from try @ 06199ee8 with catch @ 061999ac */
  if ((DAT_06dc6930 & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputManager_GetDevice__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputManager_GetUnsupportedDevices__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputManager_OnBeforeUpdate__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputManager_OnFocusChanged__);
    FUN_02d965b8(PTR_DAT_069fb990);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputManager_OnNativeDeviceDiscovered__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputManager_OnUpdate__);
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputManager_PerformLayoutPostRegistration__);
    DAT_06dc6930 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar4 = FUN_06350670(param_2,0,0);
  puVar1 = Method_UnityEngine_InputSystem_InputManager_PerformLayoutPostRegistration__;
  uVar10 = 0;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_InputSystem_InputManager_PerformLayoutPostRegistration__ + 0xe4
                ) == 0) {
      thunk_FUN_02df485c();
    }
    lVar5 = FUN_047de4e8(*(undefined8 *)
                          Method_UnityEngine_InputSystem_InputManager_OnNativeDeviceDiscovered__);
    if ((param_1 == 0) ||
       (FUN_035aba5c(param_1,lVar5,
                     *(undefined8 *)Method_UnityEngine_InputSystem_InputManager_GetDevice__),
       puVar3 = Method_UnityEngine_InputSystem_InputManager_OnFocusChanged__,
       puVar2 = Method_UnityEngine_InputSystem_InputManager_GetUnsupportedDevices__, lVar5 == 0)) {
LAB_06199b7c:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (0 < *(int *)(lVar5 + 0x18)) {
      iVar11 = 0;
      do {
        plVar6 = (long *)FUN_0400ff1c(lVar5,iVar11,*(undefined8 *)puVar3);
        if (plVar6 == (long *)0x0) goto LAB_06199b7c;
        lVar8 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar4 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_06199b14;
            }
            uVar4 = uVar4 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_02dd004c(plVar6,*(long *)puVar2,0);
LAB_06199b14:
        param_2 = (*(code *)*puVar7)(plVar6,param_2,puVar7[1]);
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(lVar5 + 0x18));
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_047de594(lVar5,*(undefined8 *)Method_UnityEngine_InputSystem_InputManager_OnUpdate__);
    uVar10 = param_2;
  }
  return uVar10;
}


