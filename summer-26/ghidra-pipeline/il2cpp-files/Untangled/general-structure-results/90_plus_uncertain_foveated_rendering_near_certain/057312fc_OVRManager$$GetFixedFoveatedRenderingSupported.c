/*
FUNCTION_NAME: OVRManager$$GetFixedFoveatedRenderingSupported
ENTRY_POINT: 057312fc
PROGRAM: Untangled-libil2cpp.so
SCORE: 103
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


long * OVRManager__GetFixedFoveatedRenderingSupported(ulong param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long *plVar6;
  undefined8 *unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d3aee0);
    FUN_02f07e70(PTR_DAT_06d37b78);
    *(undefined1 *)(unaff_x20 + 0x8cb) = 1;
  }
  lVar2 = thunk_FUN_02ef1808(*unaff_x21);
  FUN_05fbba98(lVar2,0);
  (**(code **)(*param_2 + 0x608))(param_2,lVar2,*(undefined8 *)(*param_2 + 0x610));
  if (lVar2 != 0) {
    plVar6 = *(long **)(lVar2 + 0x10);
    if (plVar6 == (long *)0x0) {
      thunk_FUN_02f239f0(PTR_DAT_06d06338);
      FUN_02a55ad4();
      uVar3 = FUN_055b5920(0);
      uVar4 = thunk_FUN_02ebbee0(param_2,0);
      uVar5 = thunk_FUN_02f239f0(PTR_DAT_06d58990);
    }
    else {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06d37b78 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar6 + 0x130)) &&
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06d37b78))
      {
        (**(code **)(*param_2 + 0x6e8))(param_2,plVar6,*(undefined8 *)(*param_2 + 0x6f0));
        return plVar6;
      }
      thunk_FUN_02f239f0(PTR_DAT_06d06338);
      FUN_02a55ad4();
      uVar3 = FUN_055b5920(0);
      uVar4 = thunk_FUN_02f239f0(PTR_DAT_06d57380);
      thunk_FUN_02f239f0(PTR_DAT_06d01eb0);
      FUN_02a55ad4();
      uVar4 = FUN_056109c0(uVar4,0);
      uVar5 = thunk_FUN_02f239f0(PTR_DAT_06d58988);
    }
    uVar3 = FUN_056f1630(uVar5,uVar3,uVar4,0);
    thunk_FUN_02f239f0(PTR_DAT_06d55148);
    uVar4 = thunk_FUN_02ef1808();
    FUN_05693110(uVar4,uVar3,0);
    uVar3 = thunk_FUN_02f239f0(PTR_DAT_06d58998);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar4,uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


