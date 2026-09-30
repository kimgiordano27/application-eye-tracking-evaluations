/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$set_ToDisplayStringsDelegate
ENTRY_POINT: 01ac1f60
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


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__set_ToDisplayStringsDelegate(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  
  FUN_020891c4();
  if (unaff_x19 != 0) {
    FUN_021a8d30();
    *(undefined1 *)(unaff_x19 + 0x20) = 1;
    *(undefined4 *)(unaff_x19 + 0x24) = 0;
    FUN_0216b778();
    FUN_0216b764();
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    puVar1 = PTR_DAT_0234c298;
    if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8) + 0x135) & 1) == 0)
    {
      FUN_0103c244();
    }
    FUN_021af390();
    lVar3 = thunk_FUN_010400dc(*(undefined8 *)puVar1);
    FUN_02124360(lVar3,0);
    if (lVar3 != 0) {
      *(undefined1 *)(lVar3 + 0x20) = 1;
      *(undefined4 *)(lVar3 + 0x24) = 0xffffffff;
      *(long *)(unaff_x19 + 0x410) = lVar3;
      thunk_FUN_0106e12c(unaff_x19 + 0x410,lVar3);
      lVar4 = *(long *)(unaff_x19 + 0x410);
      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0103c244();
      }
      puVar2 = PTR_DAT_0234d5b8;
      puVar1 = PTR_DAT_0234d5b0;
      if (lVar4 != 0) {
        FUN_021af390(lVar4,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8),0);
        if (unaff_x21 == 0) {
          lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
          if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_0103c244();
          }
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          if ((*(byte *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8) + 0x135) & 1)
              == 0) {
            FUN_0103c244();
          }
          FUN_021af390();
        }
        else {
          FUN_01ac1ba0();
        }
        thunk_FUN_010400dc(*(undefined8 *)puVar1);
        FUN_016065a0();
        FUN_0118a564();
        thunk_FUN_010400dc(*(undefined8 *)puVar2);
        FUN_016065a0();
        FUN_0118a564();
        *(undefined8 *)(unaff_x19 + 1000) = 0;
        thunk_FUN_0106e12c(unaff_x19 + 1000,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


