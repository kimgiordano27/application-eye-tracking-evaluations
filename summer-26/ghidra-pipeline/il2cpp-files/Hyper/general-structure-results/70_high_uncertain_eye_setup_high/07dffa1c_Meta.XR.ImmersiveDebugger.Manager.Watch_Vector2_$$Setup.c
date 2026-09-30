/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$Setup
ENTRY_POINT: 07dffa1c
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


undefined2 Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__Setup(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  undefined2 *puVar4;
  long lVar5;
  long unaff_x19;
  undefined8 uVar6;
  long unaff_x21;
  undefined8 in_stack_00000008;
  
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x18);
  if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
  }
  uVar6 = FUN_08d895f0(uVar6,0);
  uVar1 = FUN_08d895f0(*(long *)(unaff_x21 + 0x18) + 0x20,0);
  uVar2 = FUN_08d93fbc(uVar6,uVar1,0);
  if ((uVar2 & 1) == 0) {
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34();
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
    if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
    }
    uVar6 = FUN_08d895f0(uVar6,0);
    uVar1 = FUN_08d895f0(*(long *)(unaff_x21 + 0x30) + 0x20,0);
    uVar2 = FUN_08d93fbc(uVar6,uVar1,0);
    if ((uVar2 & 1) == 0) {
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_04980b34();
      }
      uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
      if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
      }
      uVar6 = FUN_08d895f0(uVar6,0);
      uVar1 = FUN_08d895f0(*(long *)(unaff_x21 + 0x40) + 0x20,0);
      uVar2 = FUN_08d93fbc(uVar6,uVar1,0);
      if ((uVar2 & 1) == 0) {
        lVar5 = *(long *)(unaff_x19 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_04980b34();
        }
        uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
        if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
        }
        uVar6 = FUN_08d895f0(uVar6,0);
        uVar1 = FUN_08d895f0(*(long *)(unaff_x21 + 0x38) + 0x20,0);
        uVar2 = FUN_08d93fbc(uVar6,uVar1,0);
        if ((uVar2 & 1) == 0) {
          lVar5 = *(long *)(unaff_x19 + 0x20);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_04980b34();
          }
          uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
          if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
          }
          uVar6 = FUN_08d895f0(uVar6,0);
          uVar1 = FUN_08d895f0(*(long *)(unaff_x21 + 0x50) + 0x20,0);
          uVar2 = FUN_08d93fbc(uVar6,uVar1,0);
          if ((uVar2 & 1) == 0) {
            lVar5 = *(long *)(unaff_x19 + 0x20);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_04980b34();
            }
            uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
            if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
            }
            uVar6 = FUN_08d895f0(uVar6,0);
            uVar1 = FUN_08d895f0(*(long *)(unaff_x21 + 0x48) + 0x20,0);
            uVar2 = FUN_08d93fbc(uVar6,uVar1,0);
            if ((uVar2 & 1) == 0) {
              lVar5 = *(long *)(unaff_x19 + 0x20);
              if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                lVar5 = FUN_04980b34();
              }
              uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
              if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
                thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
              }
              uVar6 = FUN_08d895f0(uVar6,0);
              uVar1 = FUN_08d895f0(*(long *)(unaff_x21 + 0x70) + 0x20,0);
              uVar2 = FUN_08d93fbc(uVar6,uVar1,0);
              if ((uVar2 & 1) == 0) {
                lVar5 = *(long *)(unaff_x19 + 0x20);
                if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                  lVar5 = FUN_04980b34();
                }
                uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
                if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
                  thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
                }
                uVar6 = FUN_08d895f0(uVar6,0);
                uVar1 = FUN_08d895f0(*(long *)(unaff_x21 + 0x68) + 0x20,0);
                uVar2 = FUN_08d93fbc(uVar6,uVar1,0);
                if ((uVar2 & 1) == 0) {
                  lVar5 = *(long *)(unaff_x19 + 0x20);
                  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                    lVar5 = FUN_04980b34();
                  }
                  uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
                  if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
                  }
                  uVar6 = FUN_08d895f0(uVar6,0);
                  uVar1 = FUN_08d895f0(*(long *)(unaff_x21 + 0x78) + 0x20,0);
                  uVar2 = FUN_08d93fbc(uVar6,uVar1,0);
                  if ((uVar2 & 1) != 0) {
                    uVar6 = *(undefined8 *)(unaff_x21 + 0x78);
                    goto LAB_07dffd70;
                  }
                  lVar5 = *(long *)(unaff_x19 + 0x20);
                  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                    lVar5 = FUN_04980b34();
                  }
                  uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18);
                  if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_049a583c(*(long *)(unaff_x21 + 0xe0));
                  }
                  uVar6 = FUN_08d895f0(uVar6,0);
                  uVar1 = FUN_08d895f0(*(long *)(unaff_x21 + 0x80) + 0x20,0);
                  uVar2 = FUN_08d93fbc(uVar6,uVar1,0);
                  if ((uVar2 & 1) == 0) {
                    thunk_FUN_049ae08c(&DAT_0ae9e180);
                    FUN_0433a0d0();
                    uVar6 = FUN_092f292c(0);
                    thunk_FUN_049ae08c(&DAT_0ae9ae40);
                    uVar1 = thunk_FUN_04983f60();
                    FUN_08d74c44(uVar1,uVar6,0);
                    /* WARNING: Subroutine does not return */
                    FUN_04948050(uVar1);
                  }
                  uVar6 = *(undefined8 *)(unaff_x21 + 0x80);
                }
                else {
                  uVar6 = *(undefined8 *)(unaff_x21 + 0x68);
                }
              }
              else {
                uVar6 = *(undefined8 *)(unaff_x21 + 0x70);
              }
              in_stack_00000008 = 0xffffffffffffffff;
            }
            else {
              uVar6 = *(undefined8 *)(unaff_x21 + 0x48);
LAB_07dffd70:
              in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,0xffffffff);
            }
            uVar6 = thunk_FUN_04983b98(uVar6,&stack0x00000008);
            lVar5 = *(long *)(unaff_x19 + 0x20);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_04980b34(lVar5);
            }
            lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
            if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
              lVar5 = FUN_04980b34(lVar5);
            }
            puVar4 = (undefined2 *)FUN_0434463c(uVar6,lVar5);
            goto LAB_07dffae0;
          }
          uVar6 = *(undefined8 *)(unaff_x21 + 0x50);
          in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,0xffffffff);
          goto LAB_07dffc44;
        }
        uVar6 = *(undefined8 *)(unaff_x21 + 0x38);
      }
      else {
        uVar6 = *(undefined8 *)(unaff_x21 + 0x40);
      }
      in_stack_00000008 = CONCAT62(in_stack_00000008._2_6_,0xffff);
    }
    else {
      uVar6 = *(undefined8 *)(unaff_x21 + 0x30);
      in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,0xff);
    }
LAB_07dffc44:
    plVar3 = (long *)thunk_FUN_04983b98(uVar6,&stack0x00000008);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34(lVar5);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34(lVar5);
    }
  }
  else {
    in_stack_00000008 = CONCAT71(in_stack_00000008._1_7_,0xff);
    plVar3 = (long *)thunk_FUN_04983b98(*(undefined8 *)(unaff_x21 + 0x18),&stack0x00000008);
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34(lVar5);
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_04980b34(lVar5);
    }
  }
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if (*(long *)(*plVar3 + 0x40) != *(long *)(lVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_0494850c(plVar3);
  }
  puVar4 = (undefined2 *)thunk_FUN_049840a8();
LAB_07dffae0:
  return *puVar4;
}


