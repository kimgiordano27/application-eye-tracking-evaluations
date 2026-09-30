/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_NumberOfValues
ENTRY_POINT: 07dff7ec
PROGRAM: Hyper-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined2
Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_NumberOfValues
          (undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  uVar1 = FUN_08d93fbc(param_1,param_2,0);
  if ((uVar1 & 1) == 0) {
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34();
    }
    uVar2 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
    if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
    }
    uVar2 = FUN_08d895f0(uVar2,0);
    uVar3 = FUN_08d895f0(*(long *)(unaff_x21 + 0x68) + 0x20,0);
    uVar1 = FUN_08d93fbc(uVar2,uVar3,0);
    if ((uVar1 & 1) == 0) {
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04980b34();
      }
      uVar2 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
      if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
      }
      uVar2 = FUN_08d895f0(uVar2,0);
      uVar3 = FUN_08d895f0(*(long *)(unaff_x21 + 0x78) + 0x20,0);
      uVar1 = FUN_08d93fbc(uVar2,uVar3,0);
      if ((uVar1 & 1) == 0) {
        lVar5 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_04980b34();
        }
        uVar2 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
        if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
        }
        uVar2 = FUN_08d895f0(uVar2,0);
        uVar3 = FUN_08d895f0(*(long *)(unaff_x21 + 0x80) + 0x20,0);
        uVar1 = FUN_08d93fbc(uVar2,uVar3,0);
        if ((uVar1 & 1) == 0) {
          thunk_FUN_049ae08c(&DAT_0ae9e180);
          FUN_0433a0d0();
          uVar2 = FUN_092f292c(0);
          thunk_FUN_049ae08c(&DAT_0ae9ae40);
          uVar3 = thunk_FUN_04983f60();
          FUN_08d74c44(uVar3,uVar2,0);
                    /* WARNING: Subroutine does not return */
          FUN_04948050(uVar3);
        }
        uVar2 = *(undefined8 *)(unaff_x21 + 0x80);
        in_stack_00000008 = 0x3ff0000000000000;
      }
      else {
        uVar2 = *(undefined8 *)(unaff_x21 + 0x78);
        in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,0x3f800000);
      }
      goto LAB_07dff870;
    }
    uVar2 = *(undefined8 *)(unaff_x21 + 0x68);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x21 + 0x70);
  }
  in_stack_00000008 = 1;
LAB_07dff870:
  uVar2 = thunk_FUN_04983b98(uVar2,&stack0x00000008);
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_04980b34(lVar5);
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_04980b34(lVar5);
  }
  puVar4 = (undefined2 *)FUN_0434463c(uVar2,lVar5);
  return *puVar4;
}


