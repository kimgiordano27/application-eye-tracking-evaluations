/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_Values
ENTRY_POINT: 052dd05c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_Values(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0759bc20;
  if ((DAT_07a42832 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_0759bc20);
    FUN_031f20f4(PTR_DAT_0759b720);
    FUN_031f20f4(PTR_DAT_0759ef30);
    FUN_031f20f4(PTR_DAT_0759d278);
    DAT_07a42832 = 1;
  }
  lVar2 = FUN_031f21dc(*(undefined8 *)puVar1,5);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR_DAT_0759ef30;
      thunk_FUN_0329bf60();
      lVar3 = *(long *)(param_2 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0322bef4();
      }
      uVar4 = FUN_05de8e1c(param_1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 200));
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = uVar4;
        thunk_FUN_0329bf60((undefined8 *)(lVar2 + 0x28),uVar4);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)PTR_DAT_0759b720;
          thunk_FUN_0329bf60();
          lVar3 = *(long *)(param_2 + 0x20);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0322bef4();
          }
          uVar4 = FUN_05dfee30(param_1 + 8,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0xd0));
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = uVar4;
            thunk_FUN_0329bf60((undefined8 *)(lVar2 + 0x38),uVar4);
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)PTR_DAT_0759d278;
              thunk_FUN_0329bf60();
              FUN_05c89314(lVar2,0);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


