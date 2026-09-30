/*
FUNCTION_NAME: Meta.XR.Movement.NativeUtilityPlugin.Api$$metaMovementSDK_serializeSnapshot
ENTRY_POINT: 06dace04
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

long * Meta_XR_Movement_NativeUtilityPlugin_Api__metaMovementSDK_serializeSnapshot(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  uint in_w8;
  long lVar8;
  long unaff_x21;
  long lVar9;
  long *unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000048;
  
  do {
    if (in_w8 == 3) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    in_stack_00000030 = *(long *)(in_stack_00000048 + 0x50);
    uVar1 = (uint)*(byte *)(unaff_x21 + 0x20) << 0x18 | (uint)*(byte *)(unaff_x21 + 0x21) << 0x10 |
            (uint)*(byte *)(unaff_x21 + 0x22) << 8 | (uint)*(byte *)(unaff_x21 + 0x23);
    if ((*(long *)(in_stack_00000048 + 0x10) == 0) &&
       (plVar6 = (long *)FUN_06d9dfb0(uVar1), plVar6 != (long *)0x0)) {
      lVar8 = *(long *)(in_stack_00000048 + 0x50);
      plVar6[4] = in_stack_00000048;
      plVar6[2] = lVar8;
      thunk_FUN_03d233cc();
      iVar2 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
      if (0 < iVar2) {
        *(int *)(plVar6 + 3) = iVar2;
        if (*(char *)(in_stack_00000048 + 0x68) == '\0') {
          FUN_06d9c700(plVar6);
          iVar2 = (int)plVar6[3];
        }
        lVar8 = *(long *)(in_stack_00000048 + 0x50) + (long)iVar2;
        *(long *)(in_stack_00000048 + 0x50) = lVar8;
        if (*(long *)(in_stack_00000048 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_06dadf04(*(long *)(in_stack_00000048 + 0x80),lVar8,0);
        *(long *)(in_stack_00000048 + 0x10) = (long)plVar6;
        thunk_FUN_03d233cc((long *)(in_stack_00000048 + 0x10),plVar6);
        goto LAB_06dad068;
      }
    }
    if (((*(long *)(in_stack_00000048 + 0x30) == 0) && (*(long *)(in_stack_00000048 + 0x20) == 0))
       && (plVar6 = (long *)FUN_06dae0c8(uVar1,0), plVar6 != (long *)0x0)) {
      lVar8 = *(long *)(in_stack_00000048 + 0x50);
      plVar6[4] = in_stack_00000048;
      plVar6[2] = lVar8;
      thunk_FUN_03d233cc();
      uVar3 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
      if (0 < (int)uVar3) {
        *(uint *)(plVar6 + 3) = uVar3;
        lVar8 = *(long *)(in_stack_00000048 + 0x50) + (ulong)uVar3;
        *(long *)(in_stack_00000048 + 0x50) = lVar8;
        if (*(long *)(in_stack_00000048 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_06dadf04(*(long *)(in_stack_00000048 + 0x80),lVar8,0);
        *(long *)(in_stack_00000048 + 0x20) = (long)plVar6;
        thunk_FUN_03d233cc((long *)(in_stack_00000048 + 0x20),plVar6);
        goto LAB_06dad068;
      }
    }
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    plVar6 = (long *)FUN_06dabcb4(uVar1);
    if (plVar6 != (long *)0x0) {
      lVar8 = *(long *)(in_stack_00000048 + 0x50);
      plVar6[4] = in_stack_00000048;
      plVar6[2] = lVar8;
      thunk_FUN_03d233cc();
      iVar2 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
      lVar8 = in_stack_00000038;
      if (0 < iVar2) {
        *(int *)(plVar6 + 3) = iVar2;
        if (in_stack_00000038 == 0) {
LAB_06dad0b0:
          if (*(char *)(in_stack_00000048 + 0x68) == '\0') {
            FUN_06d9c700(plVar6);
            if (*(long *)(in_stack_00000048 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            FUN_06dadf04(*(long *)(in_stack_00000048 + 0x80),
                         *(long *)(in_stack_00000048 + 0x50) + (long)(int)plVar6[3],0);
            iVar2 = (int)plVar6[3];
          }
          lVar8 = in_stack_00000048;
          lVar9 = *(long *)(in_stack_00000048 + 0x30);
          *(long *)(in_stack_00000048 + 0x50) = *(long *)(in_stack_00000048 + 0x50) + (long)iVar2;
          if (lVar9 == 0) {
            if (*(long *)(in_stack_00000048 + 0x28) == 0) {
              lVar8 = FUN_06dac2d8(plVar6);
              *(long *)(in_stack_00000048 + 0x28) = lVar8;
              thunk_FUN_03d233cc((long *)(in_stack_00000048 + 0x28),lVar8);
              if (lVar8 != 0) {
                plVar6 = (long *)FUN_06dacd0c(in_stack_00000048);
                goto LAB_06dad068;
              }
            }
            *(undefined4 *)(plVar6 + 7) = 0;
            *(long *)(in_stack_00000048 + 0x40) = (long)plVar6;
            thunk_FUN_03d233cc((long *)(in_stack_00000048 + 0x40),plVar6);
            *(long *)(in_stack_00000048 + 0x30) = (long)plVar6;
            thunk_FUN_03d233cc((long *)(in_stack_00000048 + 0x30),plVar6);
          }
          else {
            iVar2 = FUN_06dac99c(plVar6);
            iVar4 = FUN_06dac99c(lVar9);
            if (iVar2 != iVar4) {
              *(undefined1 *)(lVar8 + 0x6a) = 1;
            }
            lVar8 = *(long *)(lVar8 + 0x40);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03c8fb30();
            }
            uVar7 = FUN_06dac99c(lVar8);
            plVar6[10] = *(long *)(lVar8 + 0x50) + (uVar7 & 0xffffffff);
            *(int *)(plVar6 + 7) = *(int *)(lVar8 + 0x38) + 1;
            *(long *)(lVar8 + 0x30) = (long)plVar6;
            thunk_FUN_03d233cc((long *)(lVar8 + 0x30),plVar6);
            *(long *)(in_stack_00000048 + 0x40) = (long)plVar6;
            thunk_FUN_03d233cc((long *)(in_stack_00000048 + 0x40),plVar6);
          }
          if ((*(byte *)((long)plVar6 + 0x3d) & 0xf0) == 0) {
            *(long *)(in_stack_00000048 + 0x48) = (long)plVar6;
            thunk_FUN_03d233cc((long *)(in_stack_00000048 + 0x48),plVar6);
          }
          goto LAB_06dad068;
        }
        uVar3 = *(uint *)((long)plVar6 + 0x3c);
        if ((((-(*(uint *)(in_stack_00000038 + 0x3c) >> 0x11) ^ -(uVar3 >> 0x11)) & 3) == 0) &&
           (*(int *)(unaff_x27 + ((ulong)(uVar3 >> 0x13) & 3) * 4) ==
            *(int *)(unaff_x27 + ((ulong)(*(uint *)(in_stack_00000038 + 0x3c) >> 0x13) & 3) * 4))) {
          iVar4 = FUN_06dac09c(plVar6);
          iVar5 = FUN_06dac09c(lVar8);
          if (((uVar3 & 0xf000) == 0) && (iVar4 == iVar5)) goto LAB_06dad0b0;
        }
      }
    }
    if ((*(long *)(in_stack_00000048 + 0x40) != 0) &&
       (plVar6 = (long *)FUN_06d9dfb0(uVar1), plVar6 != (long *)0x0)) {
      lVar8 = *(long *)(in_stack_00000048 + 0x50);
      plVar6[4] = in_stack_00000048;
      plVar6[2] = lVar8;
      thunk_FUN_03d233cc();
      iVar2 = (**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
      if (0 < iVar2) {
        *(int *)(plVar6 + 3) = iVar2;
        if (*(char *)(in_stack_00000048 + 0x68) == '\0') {
          FUN_06d9c700(plVar6);
        }
        if (*(uint *)(plVar6 + 6) < 2) {
          *(long *)(in_stack_00000048 + 0x18) = (long)plVar6;
          thunk_FUN_03d233cc((long *)(in_stack_00000048 + 0x18),plVar6);
        }
        else if (*(long *)(in_stack_00000048 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        lVar8 = *(long *)(in_stack_00000048 + 0x50) + (long)(int)plVar6[3];
        *(long *)(in_stack_00000048 + 0x50) = lVar8;
        if (*(long *)(in_stack_00000048 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_06dadf04(*(long *)(in_stack_00000048 + 0x80),lVar8,0);
        goto LAB_06dad068;
      }
    }
    lVar8 = *(long *)(in_stack_00000048 + 0x50) + 1;
    *(long *)(in_stack_00000048 + 0x50) = lVar8;
    if ((*(long *)(in_stack_00000048 + 0x30) == 0) || (*(char *)(in_stack_00000048 + 0x68) == '\0'))
    {
      if (*(long *)(in_stack_00000048 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      FUN_06dadf04(*(long *)(in_stack_00000048 + 0x80),lVar8,0);
    }
    FUN_0712ec00();
    iVar2 = FUN_06d9c54c(in_stack_00000048,*(long *)(in_stack_00000048 + 0x50) + 3);
    if (iVar2 != 1) {
      plVar6 = (long *)0x0;
      in_stack_00000030 = in_stack_00000030 + 4;
      *(undefined1 *)(in_stack_00000048 + 0x69) = 1;
LAB_06dad068:
      FUN_03bbe424(&stack0x00000008);
      if (in_stack_00000028._4_1_ != '\0') {
        thunk_FUN_03cdf404();
      }
      return plVar6;
    }
    in_w8 = *(uint *)(unaff_x21 + 0x18);
    if (in_w8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    if (in_w8 == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    if (in_w8 < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
  } while( true );
}


