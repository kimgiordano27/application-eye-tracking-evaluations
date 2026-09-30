/*
FUNCTION_NAME: Meta.XR.Movement.NativeUtilityPlugin$$DeserializeSkeletonAndFace
ENTRY_POINT: 06dace88
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dad300) */

long * Meta_XR_Movement_NativeUtilityPlugin__DeserializeSkeletonAndFace(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long in_x9;
  long unaff_x21;
  uint unaff_w22;
  long lVar8;
  long *unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000048;
  
  do {
    if (((in_x9 == 0) && (*(long *)(param_1 + 0x20) == 0)) &&
       (plVar5 = (long *)FUN_06dae0c8(unaff_w22,0), plVar5 != (long *)0x0)) {
      lVar7 = *(long *)(in_stack_00000048 + 0x50);
      plVar5[4] = in_stack_00000048;
      plVar5[2] = lVar7;
      thunk_FUN_03d233cc();
      uVar1 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
      if (0 < (int)uVar1) {
        *(uint *)(plVar5 + 3) = uVar1;
        lVar7 = *(long *)(in_stack_00000048 + 0x50) + (ulong)uVar1;
        *(long *)(in_stack_00000048 + 0x50) = lVar7;
        if (*(long *)(in_stack_00000048 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_06dadf04(*(long *)(in_stack_00000048 + 0x80),lVar7,0);
        *(long *)(in_stack_00000048 + 0x20) = (long)plVar5;
        thunk_FUN_03d233cc((long *)(in_stack_00000048 + 0x20),plVar5);
        goto LAB_06dad068;
      }
    }
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    plVar5 = (long *)FUN_06dabcb4(unaff_w22);
    if (plVar5 != (long *)0x0) {
      lVar7 = *(long *)(in_stack_00000048 + 0x50);
      plVar5[4] = in_stack_00000048;
      plVar5[2] = lVar7;
      thunk_FUN_03d233cc();
      iVar2 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
      lVar7 = in_stack_00000038;
      if (0 < iVar2) {
        *(int *)(plVar5 + 3) = iVar2;
        if (in_stack_00000038 == 0) {
LAB_06dad0b0:
          if (*(char *)(in_stack_00000048 + 0x68) == '\0') {
            FUN_06d9c700(plVar5);
            if (*(long *)(in_stack_00000048 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            FUN_06dadf04(*(long *)(in_stack_00000048 + 0x80),
                         *(long *)(in_stack_00000048 + 0x50) + (long)(int)plVar5[3],0);
            iVar2 = (int)plVar5[3];
          }
          lVar7 = in_stack_00000048;
          lVar8 = *(long *)(in_stack_00000048 + 0x30);
          *(long *)(in_stack_00000048 + 0x50) = *(long *)(in_stack_00000048 + 0x50) + (long)iVar2;
          if (lVar8 == 0) {
            if (*(long *)(in_stack_00000048 + 0x28) == 0) {
              lVar7 = FUN_06dac2d8(plVar5);
              *(long *)(in_stack_00000048 + 0x28) = lVar7;
              thunk_FUN_03d233cc((long *)(in_stack_00000048 + 0x28),lVar7);
              if (lVar7 != 0) {
                plVar5 = (long *)FUN_06dacd0c(in_stack_00000048);
                goto LAB_06dad068;
              }
            }
            *(undefined4 *)(plVar5 + 7) = 0;
            *(long *)(in_stack_00000048 + 0x40) = (long)plVar5;
            thunk_FUN_03d233cc((long *)(in_stack_00000048 + 0x40),plVar5);
            *(long *)(in_stack_00000048 + 0x30) = (long)plVar5;
            thunk_FUN_03d233cc((long *)(in_stack_00000048 + 0x30),plVar5);
          }
          else {
            iVar2 = FUN_06dac99c(plVar5);
            iVar3 = FUN_06dac99c(lVar8);
            if (iVar2 != iVar3) {
              *(undefined1 *)(lVar7 + 0x6a) = 1;
            }
            lVar7 = *(long *)(lVar7 + 0x40);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            uVar6 = FUN_06dac99c(lVar7);
            plVar5[10] = *(long *)(lVar7 + 0x50) + (uVar6 & 0xffffffff);
            *(int *)(plVar5 + 7) = *(int *)(lVar7 + 0x38) + 1;
            *(long *)(lVar7 + 0x30) = (long)plVar5;
            thunk_FUN_03d233cc((long *)(lVar7 + 0x30),plVar5);
            *(long *)(in_stack_00000048 + 0x40) = (long)plVar5;
            thunk_FUN_03d233cc((long *)(in_stack_00000048 + 0x40),plVar5);
          }
          if ((*(byte *)((long)plVar5 + 0x3d) & 0xf0) == 0) {
            *(long *)(in_stack_00000048 + 0x48) = (long)plVar5;
            thunk_FUN_03d233cc((long *)(in_stack_00000048 + 0x48),plVar5);
          }
          goto LAB_06dad068;
        }
        uVar1 = *(uint *)((long)plVar5 + 0x3c);
        if ((((-(*(uint *)(in_stack_00000038 + 0x3c) >> 0x11) ^ -(uVar1 >> 0x11)) & 3) == 0) &&
           (*(int *)(unaff_x27 + ((ulong)(uVar1 >> 0x13) & 3) * 4) ==
            *(int *)(unaff_x27 + ((ulong)(*(uint *)(in_stack_00000038 + 0x3c) >> 0x13) & 3) * 4))) {
          iVar3 = FUN_06dac09c(plVar5);
          iVar4 = FUN_06dac09c(lVar7);
          if (((uVar1 & 0xf000) == 0) && (iVar3 == iVar4)) goto LAB_06dad0b0;
        }
      }
    }
    if ((*(long *)(in_stack_00000048 + 0x40) != 0) &&
       (plVar5 = (long *)FUN_06d9dfb0(unaff_w22), plVar5 != (long *)0x0)) {
      lVar7 = *(long *)(in_stack_00000048 + 0x50);
      plVar5[4] = in_stack_00000048;
      plVar5[2] = lVar7;
      thunk_FUN_03d233cc();
      iVar2 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
      if (0 < iVar2) {
        *(int *)(plVar5 + 3) = iVar2;
        if (*(char *)(in_stack_00000048 + 0x68) == '\0') {
          FUN_06d9c700(plVar5);
        }
        if (*(uint *)(plVar5 + 6) < 2) {
          *(long *)(in_stack_00000048 + 0x18) = (long)plVar5;
          thunk_FUN_03d233cc((long *)(in_stack_00000048 + 0x18),plVar5);
        }
        else if (*(long *)(in_stack_00000048 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar7 = *(long *)(in_stack_00000048 + 0x50) + (long)(int)plVar5[3];
        *(long *)(in_stack_00000048 + 0x50) = lVar7;
        if (*(long *)(in_stack_00000048 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_06dadf04(*(long *)(in_stack_00000048 + 0x80),lVar7,0);
        goto LAB_06dad068;
      }
    }
    lVar7 = *(long *)(in_stack_00000048 + 0x50) + 1;
    *(long *)(in_stack_00000048 + 0x50) = lVar7;
    if ((*(long *)(in_stack_00000048 + 0x30) == 0) || (*(char *)(in_stack_00000048 + 0x68) == '\0'))
    {
      if (*(long *)(in_stack_00000048 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_06dadf04(*(long *)(in_stack_00000048 + 0x80),lVar7,0);
    }
    FUN_0712ec00();
    iVar2 = FUN_06d9c54c(in_stack_00000048,*(long *)(in_stack_00000048 + 0x50) + 3);
    if (iVar2 != 1) {
      plVar5 = (long *)0x0;
      in_stack_00000030 = in_stack_00000030 + 4;
      *(undefined1 *)(in_stack_00000048 + 0x69) = 1;
      goto LAB_06dad068;
    }
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    if (uVar1 == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    if (uVar1 < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    if (uVar1 == 3) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    in_stack_00000030 = *(long *)(in_stack_00000048 + 0x50);
    unaff_w22 = (uint)*(byte *)(unaff_x21 + 0x20) << 0x18 |
                (uint)*(byte *)(unaff_x21 + 0x21) << 0x10 | (uint)*(byte *)(unaff_x21 + 0x22) << 8 |
                (uint)*(byte *)(unaff_x21 + 0x23);
    if ((*(long *)(in_stack_00000048 + 0x10) == 0) &&
       (plVar5 = (long *)FUN_06d9dfb0(unaff_w22), plVar5 != (long *)0x0)) {
      lVar7 = *(long *)(in_stack_00000048 + 0x50);
      plVar5[4] = in_stack_00000048;
      plVar5[2] = lVar7;
      thunk_FUN_03d233cc();
      iVar2 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
      if (0 < iVar2) {
        *(int *)(plVar5 + 3) = iVar2;
        if (*(char *)(in_stack_00000048 + 0x68) == '\0') {
          FUN_06d9c700(plVar5);
          iVar2 = (int)plVar5[3];
        }
        lVar7 = *(long *)(in_stack_00000048 + 0x50) + (long)iVar2;
        *(long *)(in_stack_00000048 + 0x50) = lVar7;
        if (*(long *)(in_stack_00000048 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_06dadf04(*(long *)(in_stack_00000048 + 0x80),lVar7,0);
        *(long *)(in_stack_00000048 + 0x10) = (long)plVar5;
        thunk_FUN_03d233cc((long *)(in_stack_00000048 + 0x10),plVar5);
LAB_06dad068:
        FUN_03bbe424(&stack0x00000008);
        if (in_stack_00000028._4_1_ != '\0') {
          thunk_FUN_03cdf404();
        }
        return plVar5;
      }
    }
    in_x9 = *(long *)(in_stack_00000048 + 0x30);
    param_1 = in_stack_00000048;
  } while( true );
}


