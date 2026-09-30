/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$Cleanup
ENTRY_POINT: 06464d0c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__Cleanup
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iStack_29c;
  undefined8 uStack_298;
  undefined1 auStack_290 [216];
  undefined1 auStack_1b8 [216];
  undefined1 auStack_e0 [216];
  long lStack_8;
  
  lVar2 = tpidr_el0;
  lStack_8 = *(long *)(lVar2 + 0x28);
  uStack_298 = param_2;
  if ((DAT_0897a138 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08491d60);
    DAT_0897a138 = 1;
  }
  iStack_29c = 0;
  memset(auStack_290,0,0xd8);
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
LAB_06464e8c:
    if (*(long *)(lVar2 + 0x28) == lStack_8) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  else {
    uVar3 = *(undefined8 *)PTR_DAT_08491d60;
    *(undefined4 *)(lVar4 + 0x18) = 0;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    FUN_0453d1c8(&uStack_298,&iStack_29c,uVar3);
    if (0 < iStack_29c) {
      iVar7 = 0;
      do {
        FUN_0453d9a4(&uStack_298,auStack_290,
                     *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x60));
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 == 0) goto LAB_06464e8c;
        memcpy(auStack_1b8,auStack_290,0xd8);
        lVar5 = *(long *)(lVar4 + 0x10);
        lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x68);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_06464e8c;
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          memcpy((void *)(lVar5 + (long)(int)uVar1 * 0xd8 + 0x20),auStack_1b8,0xd8);
        }
        else {
          uVar3 = *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70);
          memcpy(auStack_e0,auStack_1b8,0xd8);
          FUN_04e3e040(lVar4,auStack_e0,uVar3);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iStack_29c);
    }
    if (*(long *)(lVar2 + 0x28) == lStack_8) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


