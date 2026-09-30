/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemVolume
ENTRY_POINT: 051659a4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemVolume
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  uint uVar12;
  long unaff_x20;
  long lVar13;
  undefined8 unaff_x21;
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
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  long *in_stack_00000068;
  
code_r0x051659a4:
  do {
    FUN_048956f0(param_1,param_2,in_stack_00000038,param_4);
    param_1 = unaff_x20;
LAB_05165514:
    unaff_w25 = unaff_w25 + 1;
    lVar8 = *unaff_x23;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x22) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_05165564;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(unaff_x23,*unaff_x22,2);
LAB_05165564:
    lVar8 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
    if (lVar8 == 0) goto LAB_05165c08;
    if (*(int *)(lVar8 + 0x18) <= (int)unaff_w25) {
      if (param_1 != 0) {
        System_Collections_Generic_ArraySortHelper<SerializableDictionary_Item<object,_bool>>__Heapsort
                  (&stack0x00000040,param_1,*(undefined8 *)PTR_DAT_06782608);
        puVar3 = PTR_DAT_06782620;
        break;
      }
      lVar8 = *unaff_x23;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_05165ae4;
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      goto LAB_05165acc;
    }
    lVar8 = *unaff_x23;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x22) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_051655d0;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(unaff_x23,*unaff_x22,2);
LAB_051655d0:
    lVar8 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
    if (lVar8 == 0) goto LAB_05165c08;
    in_stack_00000038 = FUN_03aac1c4(lVar8,unaff_w25,*unaff_x24);
    param_2 = FUN_05164b1c(in_stack_00000038,in_stack_00000038,unaff_x21);
    if (param_1 != 0) {
      uVar9 = FUN_0489720c(param_1,param_2,&stack0x00000068,*unaff_x28);
      if ((uVar9 & 1) == 0) {
        param_4 = *unaff_x26;
        unaff_x20 = param_1;
        goto code_r0x051659a4;
      }
      if (in_stack_00000068 == (long *)0x0) {
LAB_0516565c:
        plVar6 = (long *)thunk_FUN_02d9d534();
        FUN_03aabc60(plVar6,*(undefined8 *)PTR_DAT_06782428);
        plVar4 = in_stack_00000068;
        if (plVar6 == (long *)0x0) goto LAB_05165c08;
        if (in_stack_00000068 == (long *)0x0) {
          lVar8 = 0;
        }
        else {
          lVar13 = *unaff_x22;
          lVar8 = thunk_FUN_02d9d438(in_stack_00000068,lVar13);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60e88(plVar4,lVar13);
          }
        }
        lVar13 = plVar6[2];
        lVar10 = *unaff_x27;
        *(int *)((long)plVar6 + 0x1c) = *(int *)((long)plVar6 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_05165c08;
        uVar12 = *(uint *)(plVar6 + 3);
        if (uVar12 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(plVar6 + 3) = uVar12 + 1;
          *(long *)(lVar13 + (long)(int)uVar12 * 8 + 0x20) = lVar8;
          thunk_FUN_02dd37b4();
        }
        else {
          FUN_03aac494(plVar6,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        FUN_048956dc(param_1,param_2,plVar6,*(undefined8 *)PTR_DAT_06763f20);
        unaff_x21 = in_stack_00000028;
        unaff_x23 = in_stack_00000020;
      }
      else {
        bVar1 = *(byte *)(*(long *)PTR_DAT_067823c8 + 0x130);
        if ((*(byte *)(*in_stack_00000068 + 0x130) < bVar1) ||
           (plVar6 = in_stack_00000068,
           *(long *)(*(long *)(*in_stack_00000068 + 200) + (ulong)bVar1 * 8 + -8) !=
           *(long *)PTR_DAT_067823c8)) goto LAB_0516565c;
      }
      lVar8 = plVar6[2];
      lVar13 = *unaff_x27;
      *(int *)((long)plVar6 + 0x1c) = *(int *)((long)plVar6 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_05165c08;
      uVar12 = *(uint *)(plVar6 + 3);
      if (uVar12 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(plVar6 + 3) = uVar12 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar12 * 8 + 0x20) = in_stack_00000038;
        thunk_FUN_02dd37b4();
      }
      else {
        FUN_03aac494(plVar6,in_stack_00000038,
                     *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
      goto LAB_05165514;
    }
    if (unaff_x19 == 0) {
      param_1 = 0;
      unaff_x19 = param_2;
      goto LAB_05165514;
    }
    uVar9 = thunk_FUN_04e8bd3c(param_2,unaff_x19,0);
    if ((uVar9 & 1) != 0) {
      param_1 = 0;
      goto LAB_05165514;
    }
    param_1 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06763f10);
    FUN_04894d4c(param_1,*(undefined8 *)PTR_DAT_06763f18);
    if (unaff_w25 < 2) {
      lVar8 = *unaff_x23;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x22) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
            goto LAB_05165964;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(unaff_x23,*unaff_x22,2);
LAB_05165964:
      lVar8 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
      if ((lVar8 == 0) || (lVar8 = FUN_03aac1c4(lVar8,0,*unaff_x24), param_1 == 0))
      goto LAB_05165c08;
      uVar7 = *unaff_x26;
    }
    else {
      lVar8 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_067823c8);
      FUN_03aabcd0(lVar8,unaff_w25,*(undefined8 *)PTR_DAT_067823c0);
      uVar12 = 0;
      do {
        lVar13 = *unaff_x23;
        uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x22) {
              puVar5 = (undefined8 *)(lVar13 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto LAB_051658b4;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_02d9a5d4(unaff_x23,*unaff_x22,2);
LAB_051658b4:
        lVar13 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
        if ((lVar13 == 0) || (uVar7 = FUN_03aac1c4(lVar13,uVar12,*unaff_x24), lVar8 == 0))
        goto LAB_05165c08;
        lVar13 = *(long *)(lVar8 + 0x10);
        lVar10 = *unaff_x27;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_05165c08;
        uVar2 = *(uint *)(lVar8 + 0x18);
        if (uVar2 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
          thunk_FUN_02dd37b4();
        }
        else {
          FUN_03aac494(lVar8,uVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != unaff_w25);
      if (param_1 == 0) {
LAB_05165c08:
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar7 = *unaff_x26;
    }
    FUN_048956f0(param_1,unaff_x19,lVar8,uVar7);
    param_4 = *unaff_x26;
    unaff_x20 = param_1;
  } while( true );
LAB_051659e4:
  uVar9 = FUN_04b3a824(&stack0x00000040,*(undefined8 *)puVar3);
  plVar6 = in_stack_00000058;
  uVar7 = in_stack_00000050;
  if ((uVar9 & 1) == 0) {
    FUN_04b3a944(&stack0x00000040,*(undefined8 *)PTR_DAT_06782618);
    return;
  }
  if (in_stack_00000058 == (long *)0x0) {
    lVar8 = 0;
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
    lVar13 = *unaff_x22;
    lVar8 = thunk_FUN_02d9d438(in_stack_00000058,lVar13);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(plVar6,lVar13);
    }
  }
  FUN_05165e18(in_stack_00000000,in_stack_00000010,unaff_x21,in_stack_00000008._4_4_ & 1,lVar8,uVar7
              );
  goto LAB_051659e4;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar11 = piVar11 + 4;
    if (uVar9 == 0) break;
LAB_05165acc:
    if (*(long *)(piVar11 + -2) == *unaff_x22) {
      puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
      goto LAB_05165bc0;
    }
  }
LAB_05165ae4:
  puVar5 = (undefined8 *)FUN_02d9a5d4(unaff_x23,*unaff_x22,2);
LAB_05165bc0:
  uVar7 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
  FUN_05165ca4(in_stack_00000000,in_stack_00000010,unaff_x21,in_stack_00000008._4_4_ & 1,uVar7,
               unaff_x19);
  return;
}


