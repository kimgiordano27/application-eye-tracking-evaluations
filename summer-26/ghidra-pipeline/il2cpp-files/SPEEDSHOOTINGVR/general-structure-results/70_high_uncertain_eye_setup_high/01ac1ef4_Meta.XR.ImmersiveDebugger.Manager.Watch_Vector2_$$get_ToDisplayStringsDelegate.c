/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_ToDisplayStringsDelegate
ENTRY_POINT: 01ac1ef4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_ToDisplayStringsDelegate
               (long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_0247c567 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234d5a0);
    FUN_00fdc2e4(PTR_DAT_0234d5a8);
    FUN_00fdc2e4(PTR_DAT_0234d5b0);
    FUN_00fdc2e4(PTR_DAT_0234d5b8);
    FUN_00fdc2e4(PTR_DAT_0234c298);
    DAT_0247c567 = 1;
  }
  FUN_020891c4(param_1,0);
  if (param_1 != 0) {
    FUN_021a8d30(param_1,1,0);
    *(undefined1 *)(param_1 + 0x20) = 1;
    *(undefined4 *)(param_1 + 0x24) = 0;
    FUN_0216b778(param_1,1,0);
    FUN_0216b764(param_1,1,0);
    lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0103c244();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    puVar1 = PTR_DAT_0234c298;
    lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_0103c244();
    }
    FUN_021af390(param_1,**(undefined8 **)(lVar5 + 0xb8),0);
    lVar5 = thunk_FUN_010400dc(*(undefined8 *)puVar1);
    FUN_02124360(lVar5,0);
    if (lVar5 != 0) {
      *(undefined1 *)(lVar5 + 0x20) = 1;
      *(undefined4 *)(lVar5 + 0x24) = 0xffffffff;
      *(long *)(param_1 + 0x410) = lVar5;
      thunk_FUN_0106e12c(param_1 + 0x410,lVar5);
      lVar7 = *(long *)(param_1 + 0x410);
      lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0103c244();
      }
      puVar4 = PTR_DAT_0234d5b8;
      puVar3 = PTR_DAT_0234d5b0;
      puVar2 = PTR_DAT_0234d5a8;
      puVar1 = PTR_DAT_0234d5a0;
      if (lVar7 != 0) {
        FUN_021af390(lVar7,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8),0);
        lVar5 = *(long *)(*(long *)(param_3 + 0x20) + 0xc0);
        if (param_2 == 0) {
          lVar5 = *(long *)(lVar5 + 8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0103c244();
          }
          if (*(int *)(lVar5 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_0103c244();
          }
          FUN_021af390(param_1,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x18),0);
        }
        else {
          FUN_01ac1ba0(param_1,param_2,*(undefined8 *)(lVar5 + 0x88));
        }
        uVar6 = thunk_FUN_010400dc(*(undefined8 *)puVar3);
        FUN_016065a0(uVar6,param_1,
                     *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x90),0);
        FUN_0118a564(param_1,uVar6,0,*(undefined8 *)puVar1);
        uVar6 = thunk_FUN_010400dc(*(undefined8 *)puVar4);
        FUN_016065a0(uVar6,param_1,
                     *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x98),0);
        FUN_0118a564(param_1,uVar6,0,*(undefined8 *)puVar2);
        *(undefined8 *)(param_1 + 1000) = 0;
        thunk_FUN_0106e12c(param_1 + 1000,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


