/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_NumberOfDisplayStrings
ENTRY_POINT: 07dff6e0
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
Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_NumberOfDisplayStrings(undefined8 param_1)

{
  undefined2 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  uVar3 = FUN_08d895f0(param_1,0);
  uVar4 = FUN_08d895f0(*(long *)(unaff_x21 + 0x50) + 0x20,0);
  uVar5 = FUN_08d93fbc(uVar3,uVar4,0);
  if ((uVar5 & 1) != 0) {
    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,1);
    plVar2 = (long *)thunk_FUN_04983b98(*(undefined8 *)(unaff_x21 + 0x50),&stack0x00000008);
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_04980b34(lVar7);
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_04980b34(lVar7);
    }
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(long *)(*plVar2 + 0x40) != *(long *)(lVar7 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_0494850c(plVar2);
    }
    puVar1 = (undefined2 *)thunk_FUN_049840a8();
    goto LAB_07dff4f8;
  }
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_04980b34();
  }
  uVar3 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
  if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
  }
  uVar3 = FUN_08d895f0(uVar3,0);
  uVar4 = FUN_08d895f0(*(long *)(unaff_x21 + 0x48) + 0x20,0);
  uVar5 = FUN_08d93fbc(uVar3,uVar4,0);
  if ((uVar5 & 1) == 0) {
    lVar7 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_04980b34();
    }
    uVar3 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
    if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
    }
    uVar3 = FUN_08d895f0(uVar3,0);
    uVar4 = FUN_08d895f0(*(long *)(unaff_x21 + 0x70) + 0x20,0);
    uVar5 = FUN_08d93fbc(uVar3,uVar4,0);
    if ((uVar5 & 1) == 0) {
      lVar7 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_04980b34();
      }
      uVar3 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
      if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
      }
      uVar3 = FUN_08d895f0(uVar3,0);
      uVar4 = FUN_08d895f0(*(long *)(unaff_x21 + 0x68) + 0x20,0);
      uVar5 = FUN_08d93fbc(uVar3,uVar4,0);
      if ((uVar5 & 1) == 0) {
        lVar7 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_04980b34();
        }
        uVar3 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
        if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
        }
        uVar3 = FUN_08d895f0(uVar3,0);
        uVar4 = FUN_08d895f0(*(long *)(unaff_x21 + 0x78) + 0x20,0);
        uVar5 = FUN_08d93fbc(uVar3,uVar4,0);
        if ((uVar5 & 1) != 0) {
          uVar3 = *(undefined8 *)(unaff_x21 + 0x78);
          uVar6 = 0x3f800000;
          goto LAB_07dff78c;
        }
        lVar7 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_04980b34();
        }
        uVar3 = *(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18);
        if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
        }
        uVar3 = FUN_08d895f0(uVar3,0);
        uVar4 = FUN_08d895f0(*(long *)(unaff_x21 + 0x80) + 0x20,0);
        uVar5 = FUN_08d93fbc(uVar3,uVar4,0);
        if ((uVar5 & 1) == 0) {
          thunk_FUN_049ae08c(&DAT_0ae9e180);
          FUN_0433a0d0();
          uVar3 = FUN_092f292c(0);
          thunk_FUN_049ae08c(&DAT_0ae9ae40);
          uVar4 = thunk_FUN_04983f60();
          FUN_08d74c44(uVar4,uVar3,0);
                    /* WARNING: Subroutine does not return */
          FUN_04948050(uVar4);
        }
        uVar3 = *(undefined8 *)(unaff_x21 + 0x80);
        in_stack_00000008 = 0x3ff0000000000000;
        goto LAB_07dff870;
      }
      uVar3 = *(undefined8 *)(unaff_x21 + 0x68);
    }
    else {
      uVar3 = *(undefined8 *)(unaff_x21 + 0x70);
    }
    in_stack_00000008 = 1;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x21 + 0x48);
    uVar6 = 1;
LAB_07dff78c:
    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar6);
  }
LAB_07dff870:
  uVar3 = thunk_FUN_04983b98(uVar3,&stack0x00000008);
  lVar7 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_04980b34(lVar7);
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_04980b34(lVar7);
  }
  puVar1 = (undefined2 *)FUN_0434463c(uVar3,lVar7);
LAB_07dff4f8:
  return *puVar1;
}


