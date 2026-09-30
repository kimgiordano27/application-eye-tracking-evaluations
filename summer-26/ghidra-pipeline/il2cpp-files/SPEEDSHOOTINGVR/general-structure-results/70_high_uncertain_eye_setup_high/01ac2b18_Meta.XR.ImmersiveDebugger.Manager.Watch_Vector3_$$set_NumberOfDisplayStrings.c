/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector3>$$set_NumberOfDisplayStrings
ENTRY_POINT: 01ac2b18
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector3>__set_NumberOfDisplayStrings
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  long *unaff_x24;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  puVar1 = (undefined8 *)FUN_0103c348(param_1,param_2,0);
  uVar2 = (*(code *)*puVar1)();
                    /* try { // try from 01ac2b44 to 01bc2e57 has its CatchHandler @ 01ac2b44
                       catch() { ... } // from try @ 01ac2b44 with catch @ 01ac2b44
                       catch() { ... } // from try @ 01ac2f50 with catch @ 01ac2b44
                       catch() { ... } // from try @ 01ac2f9c with catch @ 01ac2b44
                       catch() { ... } // from try @ 01ac2fd8 with catch @ 01ac2b44 */
  if ((uVar2 & 1) != 0) {
    *(undefined4 *)(unaff_x20 + 0x3e0) = uStack000000000000000c;
  }
  plVar3 = (long *)FUN_0216a4d8();
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244(lVar4);
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01022c14(lVar4);
  }
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0103c244();
  }
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  lVar5 = *plVar3;
  uVar7 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x68);
  uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar2 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x24) {
        puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_01ac2c00;
      }
      uVar2 = uVar2 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar2 != 0);
  }
  puVar1 = (undefined8 *)FUN_0103c348(plVar3,*unaff_x24,0);
LAB_01ac2c00:
  uVar2 = (*(code *)*puVar1)(plVar3,uVar7,&stack0x00000008,puVar1[1]);
  if ((uVar2 & 1) != 0) {
    *(undefined4 *)(unaff_x20 + 0x3e4) = uStack0000000000000008;
  }
  FUN_01ac2c60();
  return;
}


