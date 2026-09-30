/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<bool>$$.cctor
ENTRY_POINT: 04e1f310
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<bool>___cctor(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined4 unaff_w24;
  undefined4 unaff_w26;
  undefined8 unaff_x27;
  undefined4 uVar7;
  undefined4 unaff_w28;
  undefined8 unaff_x29;
  undefined4 uVar8;
  undefined8 in_stack_00000000;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  
  puVar1 = PTR_DAT_070f5310;
  uVar7 = (undefined4)((ulong)unaff_x27 >> 0x20);
  uVar8 = (undefined4)((ulong)unaff_x29 >> 0x20);
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_070f5310) {
                    /* try { // try from 04e1f36c to 04f1f36f has its CatchHandler @ 04e1f370 */
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_04e1f370;
      }
      uVar5 = uVar5 - 1;
                    /* try { // try from 04e1f344 to 04f1f347 has its CatchHandler @ 04e1f374 */
      piVar6 = piVar6 + 4;
                    /* try { // try from 04e1f348 to 04f1f35b has its CatchHandler @ 04e1f37c */
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_031c0d08();
LAB_04e1f370:
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 04e1f36c with catch @ 04e1f370
                       try { // try from 04e1f370 to 04f1f393 has its CatchHandler @ 04e1f100 */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 04e1f344 with catch @ 04e1f374
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 04e1f2d8 with catch @ 04e1f378
                        */
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 04e1f348 with catch @ 04e1f37c
                        */
  iVar2 = (*(code *)*puVar3)();
  if (iVar2 == 0) {
    lVar4 = *(long *)(unaff_x19 + 0x20);
                    /* try { // try from 04e1f394 to 04f1f3ab has its CatchHandler @ 04e1f3fc */
    in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,*(undefined4 *)(unaff_x21 + 8));
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_031c09d4();
    }
                    /* try { // try from 04e1f3ac to 04f1f3eb has its CatchHandler @ 04e1f100 */
    thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18),&stack0x00000010);
    lVar4 = *(long *)(unaff_x19 + 0x20);
    in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,unaff_w24);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_031c09d4();
    }
    thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18),&stack0x00000008);
    lVar4 = *unaff_x20;
                    /* try { // try from 04e1f3ec to 04f1f3fb has its CatchHandler @ 04e1f3fc */
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 04e1f394 with catch @ 04e1f3fc
                       catch() { ... } // from try @ 04e1f3ec with catch @ 04e1f3fc */
                    /* try { // try from 04e1f400 to 04f1f403 has its CatchHandler @ 04e1f40c */
                    /* try { // try from 04e1f404 to 04f1f40f has its CatchHandler @ 04e1f100 */
        if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04e1f430;
        }
        uVar5 = uVar5 - 1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04e1f400 with catch @ 04e1f40c
                        */
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_031c0d08();
LAB_04e1f430:
    iVar2 = (*(code *)*puVar3)();
    if (iVar2 == 0) {
      lVar4 = *(long *)(unaff_x19 + 0x20);
      in_stack_00000010 = *(undefined8 *)(unaff_x21 + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_031c09d4();
      }
      thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x20),&stack0x00000010);
      lVar4 = *(long *)(unaff_x19 + 0x20);
      in_stack_00000008._4_4_ = uVar8;
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_031c09d4();
      }
      thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x20),&stack0x00000008);
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04e1f4f0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_031c0d08();
LAB_04e1f4f0:
      iVar2 = (*(code *)*puVar3)();
      if (iVar2 == 0) {
        lVar4 = *(long *)(unaff_x19 + 0x20);
        in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,*(undefined4 *)(unaff_x21 + 0x18));
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_031c09d4();
        }
        thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28),&stack0x00000010);
        lVar4 = *(long *)(unaff_x19 + 0x20);
        in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,unaff_w28);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_031c09d4();
        }
        thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x28),&stack0x00000008);
        lVar4 = *unaff_x20;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_04e1f5b0;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_031c0d08();
LAB_04e1f5b0:
        iVar2 = (*(code *)*puVar3)();
        if (iVar2 == 0) {
          lVar4 = *(long *)(unaff_x19 + 0x20);
          in_stack_00000010 = *(undefined8 *)(unaff_x21 + 0x20);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_031c09d4();
          }
          thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x30),&stack0x00000010);
          lVar4 = *(long *)(unaff_x19 + 0x20);
          in_stack_00000008._4_4_ = uVar7;
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_031c09d4();
          }
          thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x30),&stack0x00000008);
          lVar4 = *unaff_x20;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_04e1f670;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined8 *)FUN_031c0d08();
LAB_04e1f670:
          iVar2 = (*(code *)*puVar3)();
          if (iVar2 == 0) {
            lVar4 = *(long *)(unaff_x19 + 0x20);
            in_stack_00000010 = CONCAT44(in_stack_00000010._4_4_,*(undefined4 *)(unaff_x21 + 0x28));
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_031c09d4();
            }
            thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38),&stack0x00000010);
            lVar4 = *(long *)(unaff_x19 + 0x20);
            in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,unaff_w26);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_031c09d4();
            }
            thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38),&stack0x00000008);
            iVar2 = FUN_02d355c4(0,*(undefined8 *)puVar1);
            if (iVar2 == 0) {
              lVar4 = *(long *)(unaff_x19 + 0x20);
              in_stack_00000010 =
                   CONCAT71(in_stack_00000010._1_7_,*(undefined1 *)(unaff_x21 + 0x2c));
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_031c09d4();
              }
              thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x40),&stack0x00000010);
              lVar4 = *(long *)(unaff_x19 + 0x20);
              in_stack_00000008 =
                   CONCAT71(in_stack_00000008._1_7_,(char)((ulong)in_stack_00000000 >> 0x20)) &
                   0xffffffffffffff01;
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_031c09d4();
              }
              thunk_FUN_031c39fc(*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x40),&stack0x00000008);
              iVar2 = FUN_02d355c4(0,*(undefined8 *)puVar1);
              if (iVar2 == 0) {
                lVar4 = *(long *)(unaff_x19 + 0x20);
                in_stack_00000010 =
                     CONCAT71(in_stack_00000010._1_7_,*(undefined1 *)(unaff_x21 + 0x2d));
                if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                  lVar4 = FUN_031c09d4();
                }
                thunk_FUN_031c39fc(**(undefined8 **)(lVar4 + 0xc0),&stack0x00000010);
                lVar4 = *(long *)(unaff_x19 + 0x20);
                in_stack_00000008 =
                     CONCAT71(in_stack_00000008._1_7_,(char)((ulong)in_stack_00000000 >> 0x28));
                if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                  lVar4 = FUN_031c09d4();
                }
                thunk_FUN_031c39fc(**(undefined8 **)(lVar4 + 0xc0),&stack0x00000008);
                FUN_02d355c4(0,*(undefined8 *)puVar1);
              }
            }
          }
        }
      }
    }
  }
  return;
}


