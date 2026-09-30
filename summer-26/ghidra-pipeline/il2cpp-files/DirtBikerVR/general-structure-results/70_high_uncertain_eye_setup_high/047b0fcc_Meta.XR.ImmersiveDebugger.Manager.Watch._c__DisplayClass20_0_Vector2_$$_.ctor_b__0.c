/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.<>c__DisplayClass20_0<Vector2>$$<.ctor>b__0
ENTRY_POINT: 047b0fcc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_Manager_Watch_<>c__DisplayClass20_0<Vector2>__<_ctor>b__0
          (undefined8 *param_1)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  undefined8 uVar7;
  undefined4 uStack000000000000000c;
  
  uVar7 = *param_1;
  uStack000000000000000c = 0;
  if (*(int *)(*(long *)(PTR_DAT_08486760 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  plVar2 = (long *)FUN_0675ff58(uVar7,0);
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 047b1014 to 048b1023 has its CatchHandler @ 047b1088 */
    bVar1 = *(byte *)(*(long *)PTR_DAT_08492e00 + 0x130);
                    /* try { // try from 047b1024 to 048b10a3 has its CatchHandler @ 047b0e08 */
    if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_08492e00)) {
      uVar3 = FUN_06769e84(plVar2,0);
      if ((uVar3 & 1) != 0) {
        uVar7 = thunk_FUN_03af1434(PTR_DAT_08492e08);
        uVar7 = FUN_06793434(uVar7,0);
        thunk_FUN_03af1434(PTR_DAT_08492548);
        uVar5 = thunk_FUN_03ac74bc();
        FUN_067530c4(uVar5,uVar7,0);
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar5);
      }
      uStack000000000000000c = 1;
      plVar2 = (long *)FUN_0677ba00(plVar2,1,1,1,1,&stack0x0000000c,0);
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03ac4090(lVar6);
      }
      if (plVar2 != (long *)0x0) {
        if (*(long *)(*plVar2 + 0x40) == *(long *)(lVar6 + 0x40)) {
          puVar4 = (undefined8 *)thunk_FUN_03ac7604();
          return *puVar4;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03a8ad40(plVar2);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


