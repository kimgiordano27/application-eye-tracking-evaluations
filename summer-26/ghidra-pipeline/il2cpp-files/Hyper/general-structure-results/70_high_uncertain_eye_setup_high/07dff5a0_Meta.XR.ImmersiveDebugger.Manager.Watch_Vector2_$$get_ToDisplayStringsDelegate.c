/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_ToDisplayStringsDelegate
ENTRY_POINT: 07dff5a0
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined2
Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_ToDisplayStringsDelegate(undefined8 param_1)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  long in_x9;
  int in_w10;
  long unaff_x19;
  undefined8 uVar7;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  uVar7 = *(undefined8 *)(in_x9 + 0x18);
  if (in_w10 == 0) {
    thunk_FUN_049a583c(param_1);
  }
  uVar7 = FUN_08d895f0(uVar7,0);
  uVar2 = FUN_08d895f0(*(long *)(unaff_x21 + 0x40) + 0x20,0);
  uVar3 = FUN_08d93fbc(uVar7,uVar2,0);
  if ((uVar3 & 1) == 0) {
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_04980b34();
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
    if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
    }
    uVar7 = FUN_08d895f0(uVar7,0);
    uVar2 = FUN_08d895f0(*(long *)(unaff_x21 + 0x38) + 0x20,0);
    uVar3 = FUN_08d93fbc(uVar7,uVar2,0);
    if ((uVar3 & 1) != 0) {
      uVar7 = *(undefined8 *)(unaff_x21 + 0x38);
      goto LAB_07dff654;
    }
    lVar6 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_04980b34();
    }
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
    if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
    }
    uVar7 = FUN_08d895f0(uVar7,0);
    uVar2 = FUN_08d895f0(*(long *)(unaff_x21 + 0x50) + 0x20,0);
    uVar3 = FUN_08d93fbc(uVar7,uVar2,0);
    if ((uVar3 & 1) == 0) {
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04980b34();
      }
      uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
      if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
      }
      uVar7 = FUN_08d895f0(uVar7,0);
      uVar2 = FUN_08d895f0(*(long *)(unaff_x21 + 0x48) + 0x20,0);
      uVar3 = FUN_08d93fbc(uVar7,uVar2,0);
      if ((uVar3 & 1) == 0) {
        lVar6 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_04980b34();
        }
        uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
        if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
        }
        uVar7 = FUN_08d895f0(uVar7,0);
        uVar2 = FUN_08d895f0(*(long *)(unaff_x21 + 0x70) + 0x20,0);
        uVar3 = FUN_08d93fbc(uVar7,uVar2,0);
        if ((uVar3 & 1) == 0) {
          lVar6 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_04980b34();
          }
          uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
          if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
          }
          uVar7 = FUN_08d895f0(uVar7,0);
          uVar2 = FUN_08d895f0(*(long *)(unaff_x21 + 0x68) + 0x20,0);
          uVar3 = FUN_08d93fbc(uVar7,uVar2,0);
          if ((uVar3 & 1) == 0) {
            lVar6 = *(long *)(unaff_x19 + 0x20);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_04980b34();
            }
            uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
            if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
            }
            uVar7 = FUN_08d895f0(uVar7,0);
            uVar2 = FUN_08d895f0(*(long *)(unaff_x21 + 0x78) + 0x20,0);
            uVar3 = FUN_08d93fbc(uVar7,uVar2,0);
            if ((uVar3 & 1) != 0) {
              uVar7 = *(undefined8 *)(unaff_x21 + 0x78);
              uVar5 = 0x3f800000;
              goto LAB_07dff78c;
            }
            lVar6 = *(long *)(unaff_x19 + 0x20);
            if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
              lVar6 = FUN_04980b34();
            }
            uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18);
            if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
            }
            uVar7 = FUN_08d895f0(uVar7,0);
            uVar2 = FUN_08d895f0(*(long *)(unaff_x21 + 0x80) + 0x20,0);
            uVar3 = FUN_08d93fbc(uVar7,uVar2,0);
            if ((uVar3 & 1) == 0) {
              thunk_FUN_049ae08c(&DAT_0ae9e180);
              FUN_0433a0d0();
              uVar7 = FUN_092f292c(0);
              thunk_FUN_049ae08c(&DAT_0ae9ae40);
              uVar2 = thunk_FUN_04983f60();
              FUN_08d74c44(uVar2,uVar7,0);
                    /* WARNING: Subroutine does not return */
              FUN_04948050(uVar2);
            }
            uVar7 = *(undefined8 *)(unaff_x21 + 0x80);
            in_stack_00000008 = 0x3ff0000000000000;
            goto LAB_07dff870;
          }
          uVar7 = *(undefined8 *)(unaff_x21 + 0x68);
        }
        else {
          uVar7 = *(undefined8 *)(unaff_x21 + 0x70);
        }
        in_stack_00000008 = 1;
      }
      else {
        uVar7 = *(undefined8 *)(unaff_x21 + 0x48);
        uVar5 = 1;
LAB_07dff78c:
        in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,uVar5);
      }
LAB_07dff870:
      uVar7 = thunk_FUN_04983b98(uVar7,&stack0x00000008);
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04980b34(lVar6);
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_04980b34(lVar6);
      }
      puVar1 = (undefined2 *)FUN_0434463c(uVar7,lVar6);
      goto LAB_07dff4f8;
    }
    uVar7 = *(undefined8 *)(unaff_x21 + 0x50);
    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,1);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x21 + 0x40);
LAB_07dff654:
    in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,1);
  }
  plVar4 = (long *)thunk_FUN_04983b98(uVar7,&stack0x00000008);
  lVar6 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_04980b34(lVar6);
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_04980b34(lVar6);
  }
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if (*(long *)(*plVar4 + 0x40) != *(long *)(lVar6 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_0494850c(plVar4);
  }
  puVar1 = (undefined2 *)thunk_FUN_049840a8();
LAB_07dff4f8:
  return *puVar1;
}


