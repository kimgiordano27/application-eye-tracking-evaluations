/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_Update2
ENTRY_POINT: 0369cbf8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_Update2(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  if ((DAT_04833f37 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_IO_FileSystem_LinkOrCopyFile__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                      );
    thunk_FUN_01efb3a4(Method_System_IO_FileSystem_RemoveDirectory__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_20__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_21__);
    DAT_04833f37 = 1;
  }
  puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_21__;
  if (*(char *)(param_1 + 0x61) == '\0') {
    return;
  }
  plVar9 = *(long **)(param_1 + 0x28);
  uVar4 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_IO_FileSystem_LinkOrCopyFile__);
  FUN_02ab0374(uVar4,param_1,*(undefined8 *)puVar1,0);
  puVar3 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_20__;
  puVar2 = Method_System_IO_FileSystem_RemoveDirectory__;
  puVar1 = 
  Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
  ;
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)Method_System_IO_FileSystem_RemoveDirectory__) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 7) * 0x10 + 0x138);
          goto LAB_0369ccfc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar9,*(long *)Method_System_IO_FileSystem_RemoveDirectory__,7);
LAB_0369ccfc:
    (*(code *)*puVar5)(plVar9,uVar4,puVar5[1]);
    plVar9 = *(long **)(param_1 + 0x28);
    uVar4 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
    FUN_034f6024(uVar4,param_1,*(undefined8 *)puVar3,0);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xd) * 0x10 + 0x138);
            goto LAB_0369cd80;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar9,*(long *)puVar2,0xd);
LAB_0369cd80:
      (*(code *)*puVar5)(plVar9,uVar4,puVar5[1]);
      *(undefined1 *)(param_1 + 0x60) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


