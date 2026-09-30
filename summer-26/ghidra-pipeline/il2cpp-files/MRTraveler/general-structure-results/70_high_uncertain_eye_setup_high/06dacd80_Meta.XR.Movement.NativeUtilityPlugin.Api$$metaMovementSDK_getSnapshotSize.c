/*
FUNCTION_NAME: Meta.XR.Movement.NativeUtilityPlugin.Api$$metaMovementSDK_getSnapshotSize
ENTRY_POINT: 06dacd80
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06dad300) */

long * Meta_XR_Movement_NativeUtilityPlugin_Api__metaMovementSDK_getSnapshotSize(void)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000048;
  
  FUN_0716f8f0();
  lVar7 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e68ce0,4);
  in_stack_00000010 = &stack0x00000038;
  in_stack_00000018 = &stack0x00000030;
  in_stack_00000008 = 0;
  in_stack_00000020 = &stack0x00000048;
  iVar3 = FUN_06d9c54c(in_stack_00000048,*(undefined8 *)(in_stack_00000048 + 0x50),lVar7,0,4);
  puVar2 = PTR_DAT_08e8fac8;
  if (iVar3 == 4) {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    do {
      uVar1 = *(uint *)(lVar7 + 0x18);
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
      uVar1 = (uint)*(byte *)(lVar7 + 0x20) << 0x18 | (uint)*(byte *)(lVar7 + 0x21) << 0x10 |
              (uint)*(byte *)(lVar7 + 0x22) << 8 | (uint)*(byte *)(lVar7 + 0x23);
      if ((*(long *)(in_stack_00000048 + 0x10) == 0) &&
         (plVar8 = (long *)FUN_06d9dfb0(uVar1), plVar8 != (long *)0x0)) {
        lVar10 = *(long *)(in_stack_00000048 + 0x50);
        plVar8[4] = in_stack_00000048;
        plVar8[2] = lVar10;
        thunk_FUN_03d233cc();
        iVar3 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
        if (0 < iVar3) {
          *(int *)(plVar8 + 3) = iVar3;
          if (*(char *)(in_stack_00000048 + 0x68) == '\0') {
            FUN_06d9c700(plVar8);
            iVar3 = (int)plVar8[3];
          }
          lVar7 = *(long *)(in_stack_00000048 + 0x50) + (long)iVar3;
          *(long *)(in_stack_00000048 + 0x50) = lVar7;
          if (*(long *)(in_stack_00000048 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          FUN_06dadf04(*(long *)(in_stack_00000048 + 0x80),lVar7,0);
          *(long *)(in_stack_00000048 + 0x10) = (long)plVar8;
          thunk_FUN_03d233cc((long *)(in_stack_00000048 + 0x10),plVar8);
          goto LAB_06dad068;
        }
      }
      if (((*(long *)(in_stack_00000048 + 0x30) == 0) && (*(long *)(in_stack_00000048 + 0x20) == 0))
         && (plVar8 = (long *)FUN_06dae0c8(uVar1,0), plVar8 != (long *)0x0)) {
        lVar10 = *(long *)(in_stack_00000048 + 0x50);
        plVar8[4] = in_stack_00000048;
        plVar8[2] = lVar10;
        thunk_FUN_03d233cc();
        uVar4 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
        if (0 < (int)uVar4) {
          *(uint *)(plVar8 + 3) = uVar4;
          lVar7 = *(long *)(in_stack_00000048 + 0x50) + (ulong)uVar4;
          *(long *)(in_stack_00000048 + 0x50) = lVar7;
          if (*(long *)(in_stack_00000048 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          FUN_06dadf04(*(long *)(in_stack_00000048 + 0x80),lVar7,0);
          *(long *)(in_stack_00000048 + 0x20) = (long)plVar8;
          thunk_FUN_03d233cc((long *)(in_stack_00000048 + 0x20),plVar8);
          goto LAB_06dad068;
        }
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
      }
      plVar8 = (long *)FUN_06dabcb4(uVar1);
      if (plVar8 != (long *)0x0) {
        lVar10 = *(long *)(in_stack_00000048 + 0x50);
        plVar8[4] = in_stack_00000048;
        plVar8[2] = lVar10;
        thunk_FUN_03d233cc();
        iVar3 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
        lVar10 = in_stack_00000038;
        if (0 < iVar3) {
          *(int *)(plVar8 + 3) = iVar3;
          if (in_stack_00000038 == 0) {
LAB_06dad0b0:
            if (*(char *)(in_stack_00000048 + 0x68) == '\0') {
              FUN_06d9c700(plVar8);
              if (*(long *)(in_stack_00000048 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              FUN_06dadf04(*(long *)(in_stack_00000048 + 0x80),
                           *(long *)(in_stack_00000048 + 0x50) + (long)(int)plVar8[3],0);
              iVar3 = (int)plVar8[3];
            }
            lVar7 = in_stack_00000048;
            lVar10 = *(long *)(in_stack_00000048 + 0x30);
            *(long *)(in_stack_00000048 + 0x50) = *(long *)(in_stack_00000048 + 0x50) + (long)iVar3;
            if (lVar10 == 0) {
              if (*(long *)(in_stack_00000048 + 0x28) == 0) {
                lVar7 = FUN_06dac2d8(plVar8);
                *(long *)(in_stack_00000048 + 0x28) = lVar7;
                thunk_FUN_03d233cc((long *)(in_stack_00000048 + 0x28),lVar7);
                if (lVar7 != 0) {
                  plVar8 = (long *)FUN_06dacd0c(in_stack_00000048);
                  goto LAB_06dad068;
                }
              }
              *(undefined4 *)(plVar8 + 7) = 0;
              *(long *)(in_stack_00000048 + 0x40) = (long)plVar8;
              thunk_FUN_03d233cc((long *)(in_stack_00000048 + 0x40),plVar8);
              *(long *)(in_stack_00000048 + 0x30) = (long)plVar8;
              thunk_FUN_03d233cc((long *)(in_stack_00000048 + 0x30),plVar8);
            }
            else {
              iVar3 = FUN_06dac99c(plVar8);
              iVar5 = FUN_06dac99c(lVar10);
              if (iVar3 != iVar5) {
                *(undefined1 *)(lVar7 + 0x6a) = 1;
              }
              lVar7 = *(long *)(lVar7 + 0x40);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03c8fb30();
              }
              uVar9 = FUN_06dac99c(lVar7);
              plVar8[10] = *(long *)(lVar7 + 0x50) + (uVar9 & 0xffffffff);
              *(int *)(plVar8 + 7) = *(int *)(lVar7 + 0x38) + 1;
              *(long *)(lVar7 + 0x30) = (long)plVar8;
              thunk_FUN_03d233cc((long *)(lVar7 + 0x30),plVar8);
              *(long *)(in_stack_00000048 + 0x40) = (long)plVar8;
              thunk_FUN_03d233cc((long *)(in_stack_00000048 + 0x40),plVar8);
            }
            if ((*(byte *)((long)plVar8 + 0x3d) & 0xf0) == 0) {
              *(long *)(in_stack_00000048 + 0x48) = (long)plVar8;
              thunk_FUN_03d233cc((long *)(in_stack_00000048 + 0x48),plVar8);
            }
            goto LAB_06dad068;
          }
          uVar4 = *(uint *)((long)plVar8 + 0x3c);
          if ((((-(*(uint *)(in_stack_00000038 + 0x3c) >> 0x11) ^ -(uVar4 >> 0x11)) & 3) == 0) &&
             (*(int *)(&DAT_018b2c40 + ((ulong)(uVar4 >> 0x13) & 3) * 4) ==
              *(int *)(&DAT_018b2c40 +
                      ((ulong)(*(uint *)(in_stack_00000038 + 0x3c) >> 0x13) & 3) * 4))) {
            iVar5 = FUN_06dac09c(plVar8);
            iVar6 = FUN_06dac09c(lVar10);
            if (((uVar4 & 0xf000) == 0) && (iVar5 == iVar6)) goto LAB_06dad0b0;
          }
        }
      }
      if ((*(long *)(in_stack_00000048 + 0x40) != 0) &&
         (plVar8 = (long *)FUN_06d9dfb0(uVar1), plVar8 != (long *)0x0)) {
        lVar10 = *(long *)(in_stack_00000048 + 0x50);
        plVar8[4] = in_stack_00000048;
        plVar8[2] = lVar10;
        thunk_FUN_03d233cc();
        iVar3 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
        if (0 < iVar3) {
          *(int *)(plVar8 + 3) = iVar3;
          if (*(char *)(in_stack_00000048 + 0x68) == '\0') {
            FUN_06d9c700(plVar8);
          }
          if (*(uint *)(plVar8 + 6) < 2) {
            *(long *)(in_stack_00000048 + 0x18) = (long)plVar8;
            thunk_FUN_03d233cc((long *)(in_stack_00000048 + 0x18),plVar8);
          }
          else if (*(long *)(in_stack_00000048 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          lVar7 = *(long *)(in_stack_00000048 + 0x50) + (long)(int)plVar8[3];
          *(long *)(in_stack_00000048 + 0x50) = lVar7;
          if (*(long *)(in_stack_00000048 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
          FUN_06dadf04(*(long *)(in_stack_00000048 + 0x80),lVar7,0);
          goto LAB_06dad068;
        }
      }
      lVar10 = *(long *)(in_stack_00000048 + 0x50) + 1;
      *(long *)(in_stack_00000048 + 0x50) = lVar10;
      if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
         (*(char *)(in_stack_00000048 + 0x68) == '\0')) {
        if (*(long *)(in_stack_00000048 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        FUN_06dadf04(*(long *)(in_stack_00000048 + 0x80),lVar10,0);
      }
      FUN_0712ec00(lVar7,1,lVar7,0,3,0);
      iVar3 = FUN_06d9c54c(in_stack_00000048,*(long *)(in_stack_00000048 + 0x50) + 3,lVar7,3,1);
    } while (iVar3 == 1);
  }
  plVar8 = (long *)0x0;
  in_stack_00000030 = in_stack_00000030 + 4;
  *(undefined1 *)(in_stack_00000048 + 0x69) = 1;
LAB_06dad068:
  FUN_03bbe424(&stack0x00000008);
  if (in_stack_00000028._4_1_ != '\0') {
    thunk_FUN_03cdf404();
  }
  return plVar8;
}


