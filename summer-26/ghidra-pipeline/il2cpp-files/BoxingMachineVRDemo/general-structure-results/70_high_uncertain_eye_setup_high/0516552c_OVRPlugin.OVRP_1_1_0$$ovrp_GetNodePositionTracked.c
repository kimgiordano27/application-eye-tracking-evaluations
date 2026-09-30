/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetNodePositionTracked
ENTRY_POINT: 0516552c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetNodePositionTracked(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong in_x9;
  ulong uVar11;
  long lVar12;
  int *in_x10;
  int *piVar13;
  long unaff_x19;
  uint uVar14;
  long unaff_x20;
  undefined8 unaff_x21;
  long lVar15;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  uint unaff_w25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  long *in_stack_00000068;
  
  do {
    do {
                    /* try { // try from 05165530 to 05265577 has its CatchHandler @ 05165530
                       catch() { ... } // from try @ 05165530 with catch @ 05165530
                       catch() { ... } // from try @ 05165588 with catch @ 05165530
                       catch() { ... } // from try @ 0516561c with catch @ 05165530
                       catch() { ... } // from try @ 0516569c with catch @ 05165530 */
      if (*(long *)(in_x10 + -2) == param_3) {
        puVar5 = (undefined8 *)(param_1 + (long)(*in_x10 + 2) * 0x10 + 0x138);
        lVar9 = unaff_x19;
        goto LAB_05165564;
      }
      in_x9 = in_x9 - 1;
      in_x10 = in_x10 + 4;
    } while (in_x9 != 0);
    do {
      puVar5 = (undefined8 *)FUN_02d9a5d4(unaff_x23,param_3,2);
      lVar9 = unaff_x19;
LAB_05165564:
      lVar6 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
      if (lVar6 == 0) goto LAB_05165c08;
                    /* try { // try from 05165578 to 0526557b has its CatchHandler @ 051655e8 */
                    /* try { // try from 0516557c to 05265587 has its CatchHandler @ 051655ec */
      if (*(int *)(lVar6 + 0x18) <= (int)unaff_w25) {
        if (unaff_x20 != 0) {
          System_Collections_Generic_ArraySortHelper<SerializableDictionary_Item<object,_bool>>__Heapsort
                    (&stack0x00000040,unaff_x20,*(undefined8 *)PTR_DAT_06782608);
          puVar3 = PTR_DAT_06782620;
          goto LAB_051659e4;
        }
        lVar6 = *unaff_x23;
        uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar11 == 0) goto LAB_05165ae4;
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_05165acc;
      }
      lVar6 = *unaff_x23;
                    /* try { // try from 05165588 to 05265603 has its CatchHandler @ 05165530 */
      uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *unaff_x22) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_051655d0;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(unaff_x23,*unaff_x22,2);
LAB_051655d0:
      lVar6 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
      if (lVar6 == 0) goto LAB_05165c08;
      uVar7 = FUN_03aac1c4(lVar6,unaff_w25,*unaff_x24);
      unaff_x19 = FUN_05164b1c(uVar7,uVar7,unaff_x21);
      if (unaff_x20 == 0) {
        if (lVar9 == 0) {
          unaff_x20 = 0;
        }
        else {
          uVar11 = thunk_FUN_04e8bd3c(unaff_x19,lVar9,0);
          if ((uVar11 & 1) == 0) {
            unaff_x20 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06763f10);
            FUN_04894d4c(unaff_x20,*(undefined8 *)PTR_DAT_06763f18);
            if (unaff_w25 < 2) {
              lVar6 = *unaff_x23;
              uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar11 != 0) {
                piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *unaff_x22) {
                    puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                    goto LAB_05165964;
                  }
                  uVar11 = uVar11 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar11 != 0);
              }
              puVar5 = (undefined8 *)FUN_02d9a5d4(unaff_x23,*unaff_x22,2);
LAB_05165964:
              lVar6 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
              if ((lVar6 == 0) || (lVar6 = FUN_03aac1c4(lVar6,0,*unaff_x24), unaff_x20 == 0))
              goto LAB_05165c08;
              uVar10 = *unaff_x26;
            }
            else {
              lVar6 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067823c8);
              FUN_03aabcd0(lVar6,unaff_w25,*(undefined8 *)PTR_DAT_067823c0);
              uVar14 = 0;
              do {
                lVar15 = *unaff_x23;
                uVar11 = (ulong)*(ushort *)(lVar15 + 0x12e);
                if (uVar11 != 0) {
                  piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *unaff_x22) {
                      puVar5 = (undefined8 *)(lVar15 + (long)(*piVar13 + 2) * 0x10 + 0x138);
                      goto LAB_051658b4;
                    }
                    uVar11 = uVar11 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar11 != 0);
                }
                puVar5 = (undefined8 *)FUN_02d9a5d4(unaff_x23,*unaff_x22,2);
LAB_051658b4:
                lVar15 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
                if ((lVar15 == 0) || (uVar10 = FUN_03aac1c4(lVar15,uVar14,*unaff_x24), lVar6 == 0))
                goto LAB_05165c08;
                lVar15 = *(long *)(lVar6 + 0x10);
                lVar12 = *unaff_x27;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar15 == 0) goto LAB_05165c08;
                uVar2 = *(uint *)(lVar6 + 0x18);
                if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                  *(undefined8 *)(lVar15 + (long)(int)uVar2 * 8 + 0x20) = uVar10;
                  thunk_FUN_02dd37b4();
                }
                else {
                  FUN_03aac494(lVar6,uVar10,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                }
                uVar14 = uVar14 + 1;
              } while (uVar14 != unaff_w25);
              if (unaff_x20 == 0) goto LAB_05165c08;
              uVar10 = *unaff_x26;
            }
            FUN_048956f0(unaff_x20,lVar9,lVar6,uVar10);
            uVar10 = *unaff_x26;
            goto OVRPlugin_OVRP_1_1_0__ovrp_GetSystemVolume;
          }
          unaff_x20 = 0;
          unaff_x19 = lVar9;
        }
      }
      else {
        uVar11 = FUN_0489720c(unaff_x20,unaff_x19,&stack0x00000068,*unaff_x28);
        if ((uVar11 & 1) == 0) {
          uVar10 = *unaff_x26;
OVRPlugin_OVRP_1_1_0__ovrp_GetSystemVolume:
          FUN_048956f0(unaff_x20,unaff_x19,uVar7,uVar10);
          unaff_x19 = lVar9;
        }
        else {
          if (in_stack_00000068 == (long *)0x0) {
LAB_0516565c:
            plVar8 = (long *)thunk_FUN_02d9d534();
            FUN_03aabc60(plVar8,*(undefined8 *)PTR_DAT_06782428);
            plVar4 = in_stack_00000068;
            if (plVar8 == (long *)0x0) goto LAB_05165c08;
            if (in_stack_00000068 == (long *)0x0) {
              lVar6 = 0;
            }
            else {
              lVar15 = *unaff_x22;
              lVar6 = thunk_FUN_02d9d438(in_stack_00000068,lVar15);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60e88(plVar4,lVar15);
              }
            }
            lVar15 = plVar8[2];
            lVar12 = *unaff_x27;
            *(int *)((long)plVar8 + 0x1c) = *(int *)((long)plVar8 + 0x1c) + 1;
            if (lVar15 == 0) goto LAB_05165c08;
            uVar14 = *(uint *)(plVar8 + 3);
            if (uVar14 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(plVar8 + 3) = uVar14 + 1;
              *(long *)(lVar15 + (long)(int)uVar14 * 8 + 0x20) = lVar6;
              thunk_FUN_02dd37b4();
            }
            else {
              FUN_03aac494(plVar8,lVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            }
            FUN_048956dc(unaff_x20,unaff_x19,plVar8,*(undefined8 *)PTR_DAT_06763f20);
            unaff_x21 = in_stack_00000028;
            unaff_x23 = in_stack_00000020;
          }
          else {
            bVar1 = *(byte *)(*(long *)PTR_DAT_067823c8 + 0x130);
            if ((*(byte *)(*in_stack_00000068 + 0x130) < bVar1) ||
               (plVar8 = in_stack_00000068,
               *(long *)(*(long *)(*in_stack_00000068 + 200) + (ulong)bVar1 * 8 + -8) !=
               *(long *)PTR_DAT_067823c8)) goto LAB_0516565c;
          }
          lVar6 = plVar8[2];
          lVar15 = *unaff_x27;
          *(int *)((long)plVar8 + 0x1c) = *(int *)((long)plVar8 + 0x1c) + 1;
          if (lVar6 == 0) {
LAB_05165c08:
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          uVar14 = *(uint *)(plVar8 + 3);
          if (uVar14 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(plVar8 + 3) = uVar14 + 1;
            *(undefined8 *)(lVar6 + (long)(int)uVar14 * 8 + 0x20) = uVar7;
            thunk_FUN_02dd37b4();
            unaff_x19 = lVar9;
          }
          else {
            FUN_03aac494(plVar8,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            unaff_x19 = lVar9;
          }
        }
      }
      unaff_w25 = unaff_w25 + 1;
      param_1 = *unaff_x23;
      param_3 = *unaff_x22;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    } while (in_x9 == 0);
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  } while( true );
LAB_051659e4:
  uVar11 = FUN_04b3a824(&stack0x00000040,*(undefined8 *)puVar3);
  plVar8 = in_stack_00000058;
  uVar7 = in_stack_00000050;
  if ((uVar11 & 1) == 0) {
    FUN_04b3a944(&stack0x00000040,*(undefined8 *)PTR_DAT_06782618);
    return;
  }
  if (in_stack_00000058 == (long *)0x0) {
    lVar9 = 0;
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_067823c8 + 0x130);
    if ((bVar1 <= *(byte *)(*in_stack_00000058 + 0x130)) &&
       (*(long *)(*(long *)(*in_stack_00000058 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)PTR_DAT_067823c8)) {
      FUN_05165ca4(in_stack_00000000,in_stack_00000010,unaff_x21,in_stack_00000008._4_4_ & 1,
                   in_stack_00000058,in_stack_00000050);
      goto LAB_051659e4;
    }
    lVar6 = *unaff_x22;
    lVar9 = thunk_FUN_02d9d438(in_stack_00000058,lVar6);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(plVar8,lVar6);
    }
  }
  FUN_05165e18(in_stack_00000000,in_stack_00000010,unaff_x21,in_stack_00000008._4_4_ & 1,lVar9,uVar7
              );
  goto LAB_051659e4;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar13 = piVar13 + 4;
    if (uVar11 == 0) break;
LAB_05165acc:
    if (*(long *)(piVar13 + -2) == *unaff_x22) {
      puVar5 = (undefined8 *)(lVar6 + (long)(*piVar13 + 2) * 0x10 + 0x138);
      goto LAB_05165bc0;
    }
  }
LAB_05165ae4:
  puVar5 = (undefined8 *)FUN_02d9a5d4(unaff_x23,*unaff_x22,2);
LAB_05165bc0:
  uVar7 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
  FUN_05165ca4(in_stack_00000000,in_stack_00000010,unaff_x21,in_stack_00000008._4_4_ & 1,uVar7,lVar9
              );
  return;
}


