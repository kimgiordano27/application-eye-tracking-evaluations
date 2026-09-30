/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.TweakEnum$$set_Value
ENTRY_POINT: 04dab1f0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  int in_w10;
  long unaff_x19;
  long *unaff_x20;
  int iVar3;
  long unaff_x21;
  int unaff_w23;
  
  while( true ) {
    *(int *)(unaff_x21 + 0x1c) = in_w10 + 1;
    if (param_1 == 0) break;
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      *(long **)(param_1 + (long)(int)uVar1 * 8 + 0x20) = param_2;
    }
    else {
      FUN_03abf904();
    }
    lVar2 = unaff_x20[5];
    if ((lVar2 == 0) ||
       (FUN_03ac0f78(lVar2,*(int *)(lVar2 + 0x18) + -1,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0)),
       param_2 == (long *)0x0)) break;
    lVar2 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
    if (lVar2 == 0) break;
    FUN_06247d8c(lVar2,0);
    unaff_w23 = unaff_w23 + -1;
    if (unaff_w23 == 0) {
LAB_04dab288:
      if (unaff_x20[5] != 0) {
        FUN_03ac07bc(unaff_x20[5],0);
        lVar2 = unaff_x20[0xf];
        if (lVar2 != 0) {
          iVar3 = *(int *)(lVar2 + 0x18);
          *(undefined4 *)(lVar2 + 0x18) = 0;
          *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
          if (0 < iVar3) {
            Newtonsoft_Json_Linq_JObject__LoadAsync(*(undefined8 *)(lVar2 + 0x10),0,iVar3,0);
          }
          lVar2 = unaff_x20[5];
          if (lVar2 != 0) {
            iVar3 = 0;
            goto LAB_04dab494;
          }
        }
      }
      break;
    }
    lVar2 = unaff_x20[5];
    if (lVar2 == 0) break;
    if (*(int *)(lVar2 + 0x18) < 1) goto LAB_04dab288;
    param_2 = (long *)FUN_03abf644(lVar2,*(int *)(lVar2 + 0x18) + -1,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90));
    if (unaff_x21 == 0) break;
    in_w10 = *(int *)(unaff_x21 + 0x1c);
    param_1 = *(long *)(unaff_x21 + 0x10);
  }
  goto LAB_04dab4fc;
  while( true ) {
    FUN_03abf644(unaff_x20[5],iVar3,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90));
    FUN_04656298();
    lVar2 = unaff_x20[5];
    iVar3 = iVar3 + 1;
    if (lVar2 == 0) break;
LAB_04dab494:
    if (*(int *)(lVar2 + 0x18) <= iVar3) {
      *(undefined1 *)(unaff_x20 + 0x12) = 0;
      return;
    }
    (**(code **)(*unaff_x20 + 0x178))();
    if (unaff_x20[5] == 0) break;
  }
LAB_04dab4fc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


