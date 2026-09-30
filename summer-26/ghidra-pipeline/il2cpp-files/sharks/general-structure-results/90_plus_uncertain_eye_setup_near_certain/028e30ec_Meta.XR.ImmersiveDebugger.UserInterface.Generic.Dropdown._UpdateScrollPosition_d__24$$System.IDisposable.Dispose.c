/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown.<UpdateScrollPosition>d__24$$System.IDisposable.Dispose
ENTRY_POINT: 028e30ec
PROGRAM: sharks-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown_<UpdateScrollPosition>d__24__System_IDisposable_Dispose
               (undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  if ((DAT_03a245f8 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037fb640);
    DAT_03a245f8 = 1;
  }
  in_stack_00000038 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  lVar1 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
  }
  lVar1 = *(long *)(param_3 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0185daa4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x10);
  if (lVar1 != 0) {
    uVar2 = FUN_02171fa4(lVar1,*param_2,param_2[1],&stack0x00000038,*(undefined8 *)PTR_DAT_037fb640)
    ;
    if ((uVar2 & 1) == 0) {
      lVar1 = *(long *)(param_3 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar1 = *(long *)(param_3 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0185daa4();
      }
      uVar2 = FUN_028e3358(param_2,&stack0x00000018,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x1d0)
                          );
      if ((uVar2 & 1) != 0) {
        param_1[2] = in_stack_00000028;
        param_1[1] = in_stack_00000020;
        *param_1 = in_stack_00000018;
        return;
      }
      thunk_FUN_01851c08(PTR_DAT_037f9268);
      uVar3 = thunk_FUN_018617ec();
      uVar4 = thunk_FUN_01851c08(PTR_DAT_037fb658);
      uVar3 = FUN_02a473b8(uVar4,uVar3,0);
      thunk_FUN_01851c08(PTR_DAT_037f8d50);
      uVar4 = thunk_FUN_01861bbc();
      FUN_02bcf690(uVar4,uVar3,0);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar4,param_3);
    }
    lVar1 = FUN_02afcf34(in_stack_00000038,0);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02afcff4(lVar1,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


