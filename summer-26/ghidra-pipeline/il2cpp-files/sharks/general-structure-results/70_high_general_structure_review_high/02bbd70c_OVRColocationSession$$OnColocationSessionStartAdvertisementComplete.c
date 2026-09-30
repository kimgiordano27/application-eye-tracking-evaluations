/*
FUNCTION_NAME: OVRColocationSession$$OnColocationSessionStartAdvertisementComplete
ENTRY_POINT: 02bbd70c
PROGRAM: sharks-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


undefined8 OVRColocationSession__OnColocationSessionStartAdvertisementComplete(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *unaff_x19;
  long unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  long *unaff_x26;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  int in_stack_00000018;
  
  iVar3 = FUN_02bc5e88();
  if (unaff_w25 < iVar3 + -1) {
    if (*(int *)(*(long *)PTR_DAT_038071f8 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar6 = FUN_02bbd3b8();
    if ((uVar6 & 1) == 0) {
      return 0;
    }
  }
                    /* try { // try from 02bbd74c to 02cbd75b has its CatchHandler @ 02bbd770 */
  *(undefined4 *)(unaff_x19 + 1) = uStack000000000000000c;
                    /* try { // try from 02bbd75c to 02cbd787 has its CatchHandler @ 02bbd6c4 */
  if (in_stack_00000018 == 2) {
    if (*(int *)(unaff_x23 + 0x10) != -1) {
LAB_02bbdf7c:
      FUN_02bc7d70();
      return 0;
    }
    *(undefined4 *)(unaff_x23 + 0x10) = uStack000000000000000c;
                    /* catch(type#1 @ 0361ba68) { ... } // from try @ 02bbd74c with catch @ 02bbd770
                        */
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
                    /* try { // try from 02bbd788 to 02cbd78b has its CatchHandler @ 02bbd7b8 */
                    /* try { // try from 02bbd78c to 02cbd7bb has its CatchHandler @ 02bbd6c4 */
    uVar4 = FUN_02bc6534();
    puVar2 = PTR_DAT_038071f8;
    if ((int)uVar4 < 0x701) {
      if ((int)uVar4 < 0x401) {
        if (uVar4 == 0x200) {
          uVar5 = 0xe;
          goto LAB_02bbe180;
        }
        if (uVar4 == 0x300) {
          uVar5 = 0xc;
          goto LAB_02bbe180;
        }
        if (uVar4 != 0x400) goto LAB_02bbdf7c;
      }
      else if (uVar4 != 0x500) {
        if ((uVar4 != 0x600) && ((uVar4 != 0x700 || (*(char *)(unaff_x23 + 0x28) == '\0'))))
        goto LAB_02bbdf7c;
LAB_02bbdfb8:
        uVar5 = 0xd;
        goto LAB_02bbe180;
      }
      if (*(int *)(unaff_x23 + 0x1c) == -1) {
        uVar5 = 0xc;
        *(uint *)(unaff_x23 + 0x1c) = (uint)(uVar4 != 0x400);
LAB_02bbe180:
        *(undefined4 *)unaff_x19 = uVar5;
        return 1;
      }
      goto LAB_02bbe16c;
    }
    if ((int)uVar4 < 0xa01) {
      if (((uVar4 != 0x800) && (uVar4 != 0x900)) && (uVar4 != 0xa00)) goto LAB_02bbdf7c;
      goto LAB_02bbe13c;
    }
    if ((int)uVar4 < 0xc01) {
      if ((uVar4 != 0xb00) && (uVar4 != 0xc00)) goto LAB_02bbdf7c;
    }
    else {
                    /* catch() { ... } // from try @ 02bbd788 with catch @ 02bbd7b8 */
      if (uVar4 != 0xd00) {
        if (uVar4 != 0xf00) goto LAB_02bbdf7c;
        lVar7 = *(long *)PTR_DAT_038071f8;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          lVar7 = *(long *)puVar2;
        }
        lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
        if (lVar9 == 0) goto LAB_02bbe280;
        if (*(uint *)(lVar9 + 0x18) <= unaff_w22) goto LAB_02bbe27c;
        lVar10 = *(long *)(lVar9 + (long)(int)unaff_w22 * 8 + 0x20);
        if (lVar10 == 0) goto LAB_02bbe280;
        if (*(uint *)(lVar10 + 0x18) < 0xe) goto LAB_02bbe27c;
        if (*(int *)(lVar10 + 0x54) == 0x14) {
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
            lVar9 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
            if (lVar9 == 0) goto LAB_02bbe280;
          }
          if (*(uint *)(lVar9 + 0x18) <= unaff_w22) goto LAB_02bbe27c;
          lVar7 = *(long *)(lVar9 + (long)(int)unaff_w22 * 8 + 0x20);
          if (lVar7 == 0) goto LAB_02bbe280;
          if (*(uint *)(lVar7 + 0x18) < 0xd) goto LAB_02bbe27c;
          if (0x14 < *(int *)(lVar7 + 0x50)) {
            *(undefined4 *)(unaff_x21 + 0x10) = uStack0000000000000008;
            *(undefined2 *)(unaff_x21 + 0x14) = in_stack_00000000._4_2_;
            *(undefined4 *)unaff_x19 = 0xc;
            return 1;
          }
        }
        goto LAB_02bbdfb8;
      }
    }
  }
  else {
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    uVar4 = FUN_02bc6534();
    puVar2 = PTR_DAT_038071f8;
    if ((int)uVar4 < 0x801) {
      if (0x400 < (int)uVar4) {
        if ((int)uVar4 < 0x601) {
          if (uVar4 == 0x500) goto LAB_02bbe07c;
          if (uVar4 != 0x600) goto LAB_02bbdf7c;
        }
        else {
          if (uVar4 != 0x700) {
            if (uVar4 == 0x800) {
              if (*unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02bbe284 to 02cbe28f has its CatchHandler @ 02bbe2d8 */
                FUN_017fc5a8();
              }
              plVar8 = *(long **)(*unaff_x24 + 0x78);
              if (plVar8 != (long *)0x0) {
                uVar5 = (**(code **)(*plVar8 + 0x318))
                                  (plVar8,uStack000000000000000c,*(undefined8 *)(*plVar8 + 800));
                uVar1 = DAT_009a5fa0;
                *(undefined4 *)(unaff_x19 + 1) = uVar5;
                *unaff_x19 = uVar1;
                return 1;
              }
                    /* WARNING: Subroutine does not return */
              FUN_017fc5a8();
            }
            goto LAB_02bbdf7c;
          }
          if ((4 < unaff_w22 - 0xb) || (*(char *)(unaff_x23 + 0x28) == '\0')) {
            uVar5 = 5;
            goto LAB_02bbe218;
          }
        }
        uVar5 = 4;
LAB_02bbe218:
        *(undefined4 *)unaff_x19 = uVar5;
        OVR_OpenVR_IVRApplications__CancelApplicationLaunch__Invoke();
        return 1;
      }
      if (uVar4 == 0x200) {
        uVar5 = 1;
        goto LAB_02bbe218;
      }
      if (uVar4 == 0x300) {
        uVar5 = 3;
        goto LAB_02bbe218;
      }
      if (uVar4 != 0x400) goto LAB_02bbdf7c;
LAB_02bbe07c:
      if (*(int *)(unaff_x23 + 0x1c) == -1) {
        *(uint *)(unaff_x23 + 0x1c) = (uint)(uVar4 != 0x400);
        *(undefined4 *)unaff_x19 = 2;
        if (unaff_w22 == 4) {
          if (*(int *)(*(long *)PTR_DAT_038071f8 + 0xe0) == 0) {
            thunk_FUN_01843fdc();
          }
          uVar6 = FUN_02bbe304(0x15);
          if ((uVar6 & 1) == 0) {
            return 0;
          }
        }
        OVR_OpenVR_IVRApplications__CancelApplicationLaunch__Invoke();
        if ((unaff_w22 & 0xfffffffe) != 0x12) {
          return 1;
        }
        if (*(int *)(*(long *)PTR_DAT_038071f8 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
        }
        uVar6 = FUN_02bbd3b8();
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        return 1;
      }
LAB_02bbe16c:
      FUN_02bc7d70();
      return 1;
    }
    if ((int)uVar4 < 0xb01) {
      if ((uVar4 == 0x900) || (uVar4 == 0xa00)) {
LAB_02bbe13c:
        uVar5 = 9;
        goto LAB_02bbe140;
      }
      if (uVar4 != 0xb00) goto LAB_02bbdf7c;
    }
    else {
      if (0xd00 < (int)uVar4) {
        if (uVar4 == 0xe00) {
          uVar5 = 0x13;
          goto LAB_02bbe218;
        }
        if (uVar4 != 0xf00) goto LAB_02bbdf7c;
        lVar7 = *(long *)PTR_DAT_038071f8;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01843fdc();
          lVar7 = *(long *)puVar2;
        }
        lVar9 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
        if (lVar9 != 0) {
          if (unaff_w22 < *(uint *)(lVar9 + 0x18)) {
            lVar10 = *(long *)(lVar9 + (long)(int)unaff_w22 * 8 + 0x20);
            if (lVar10 == 0) goto LAB_02bbe280;
            if (4 < *(uint *)(lVar10 + 0x18)) {
              if (*(int *)(lVar10 + 0x30) == 0x14) {
                if (*(int *)(lVar7 + 0xe0) == 0) {
                  thunk_FUN_01843fdc();
                  lVar9 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
                  if (lVar9 == 0) goto LAB_02bbe280;
                }
                if (*(uint *)(lVar9 + 0x18) <= unaff_w22) goto LAB_02bbe27c;
                lVar7 = *(long *)(lVar9 + (long)(int)unaff_w22 * 8 + 0x20);
                if (lVar7 == 0) goto LAB_02bbe280;
                if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_02bbe27c;
                if (0x14 < *(int *)(lVar7 + 0x2c)) {
                  *(undefined4 *)(unaff_x21 + 0x10) = uStack0000000000000008;
                  *(undefined2 *)(unaff_x21 + 0x14) = in_stack_00000000._4_2_;
                  uVar5 = 3;
                  goto LAB_02bbe218;
                }
              }
              uVar5 = 4;
              goto LAB_02bbe218;
            }
          }
LAB_02bbe27c:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
LAB_02bbe280:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5a8();
      }
      if ((uVar4 | 0x100) != 0xd00) goto LAB_02bbdf7c;
    }
  }
  uVar5 = 10;
LAB_02bbe140:
  *(undefined4 *)unaff_x19 = uVar5;
  *(uint *)((long)unaff_x19 + 4) = uVar4;
  return 1;
}


