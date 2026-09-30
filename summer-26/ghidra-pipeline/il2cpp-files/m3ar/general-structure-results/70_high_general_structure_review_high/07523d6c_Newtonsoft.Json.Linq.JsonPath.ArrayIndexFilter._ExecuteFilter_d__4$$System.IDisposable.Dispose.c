/*
FUNCTION_NAME: Newtonsoft.Json.Linq.JsonPath.ArrayIndexFilter.<ExecuteFilter>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 07523d6c
PROGRAM: m3ar-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


undefined8
Newtonsoft_Json_Linq_JsonPath_ArrayIndexFilter_<ExecuteFilter>d__4__System_IDisposable_Dispose(void)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long unaff_x19;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  long *plVar14;
  ulong unaff_x24;
  uint unaff_w25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  long *in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  long *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  
  while( true ) {
    lVar3 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f9be48);
    FUN_057d4c24(lVar3,*(undefined4 *)(unaff_x19 + 0x18),*(undefined8 *)PTR_DAT_08fa47f0);
    if (lVar3 == 0) break;
    lVar9 = *(long *)(lVar3 + 0x10);
    lVar11 = *(long *)PTR_DAT_08f9be30;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar9 == 0) break;
    uVar2 = *(uint *)(lVar3 + 0x18);
    if (uVar2 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar2 + 1;
      *(long **)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = unaff_x23;
    }
    else {
      FUN_057d53ac(lVar3,unaff_x23,
                   *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
    do {
      lVar9 = *(long *)(lVar3 + 0x10);
      lVar11 = *(long *)PTR_DAT_08f9be30;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar9 == 0) goto LAB_0752466c;
      uVar2 = *(uint *)(lVar3 + 0x18);
      plVar4 = unaff_x23;
      if (uVar2 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar2 + 1;
        *(long **)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = unaff_x26;
      }
      else {
        FUN_057d53ac(lVar3,unaff_x26,
                     *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
      do {
        unaff_x23 = plVar4;
        unaff_x24 = unaff_x24 + 1;
        if ((long)(int)*(uint *)(unaff_x19 + 0x18) <= (long)unaff_x24) {
          if (lVar3 == 0) {
            plVar4 = (long *)0x0;
          }
          else {
            plVar4 = (long *)FUN_040316d0(*(undefined8 *)PTR_DAT_08f9d820,
                                          *(undefined4 *)(lVar3 + 0x18));
            FUN_057d586c(lVar3,plVar4,*(undefined8 *)PTR_DAT_08fa47e8);
          }
          uVar5 = FUN_07417c7c(unaff_x23,0,0);
          if ((uVar5 & 1) == 0) {
            in_stack_00000010._4_4_ = 0;
          }
          if (in_stack_00000010._4_4_ == 0 && (unaff_w25 >> 0xd & 1) == 0) goto LAB_075241cc;
          uVar6 = (**(code **)(*in_stack_00000048 + 0x748))
                            (in_stack_00000048,in_stack_00000038,0x10,unaff_w25,
                             *(undefined8 *)(*in_stack_00000048 + 0x750));
          lVar3 = thunk_FUN_0406ddbc(uVar6,*(undefined8 *)PTR_DAT_08f92800);
          if (lVar3 == 0) goto LAB_0752466c;
          if ((int)*(ulong *)(lVar3 + 0x18) < 1) goto LAB_075241cc;
          lVar9 = 0;
          uVar5 = 0;
          uVar10 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
          plVar14 = unaff_x23;
          goto LAB_07523f80;
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_x24) goto LAB_07524670;
        unaff_x26 = *(long **)(unaff_x22 + unaff_x24 * 8);
        uVar6 = FUN_040316d0(*unaff_x27,in_stack_00000058._4_4_);
        if (*(int *)(*unaff_x28 + 0xe4) == 0) {
          thunk_FUN_0408f364(*unaff_x28);
        }
        if (unaff_x26 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_08f9bd20 + 0x130);
          if ((*(byte *)(*unaff_x26 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*unaff_x26 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_08f9bd20)) {
                    /* WARNING: Subroutine does not return */
            FUN_04031c0c(unaff_x26);
          }
        }
        uVar5 = FUN_0751e5c0(unaff_x26,unaff_w25,3,uVar6);
        plVar4 = unaff_x23;
      } while (((uVar5 & 1) == 0) ||
              (uVar5 = FUN_07417c7c(unaff_x23,0,0), plVar4 = unaff_x26, (uVar5 & 1) != 0));
    } while (lVar3 != 0);
  }
  goto LAB_0752466c;
LAB_07523f80:
  do {
    if (unaff_w21 == 0) {
      if (uVar10 <= uVar5) goto LAB_07524670;
      plVar7 = *(long **)(lVar3 + 0x20 + uVar5 * 8);
      if (plVar7 == (long *)0x0) goto LAB_0752466c;
      pcVar12 = *(code **)(*plVar7 + 0x2d8);
      uVar6 = *(undefined8 *)(*plVar7 + 0x2e0);
    }
    else {
      if (uVar10 <= uVar5) goto LAB_07524670;
      plVar7 = *(long **)(lVar3 + 0x20 + uVar5 * 8);
      if (plVar7 == (long *)0x0) goto LAB_0752466c;
      pcVar12 = *(code **)(*plVar7 + 0x308);
      uVar6 = *(undefined8 *)(*plVar7 + 0x310);
    }
    plVar7 = (long *)(*pcVar12)(plVar7,1,uVar6);
    uVar10 = FUN_07417c7c(plVar7,0,0);
    unaff_x23 = plVar14;
    if ((uVar10 & 1) == 0) {
      uVar6 = FUN_040316d0(*(undefined8 *)PTR_DAT_08f78f10,in_stack_00000058._4_4_);
      if (*(int *)(*(long *)PTR_DAT_08f8aa50 + 0xe4) == 0) {
        thunk_FUN_0408f364(*(long *)PTR_DAT_08f8aa50);
      }
      if (plVar7 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_08f9bd20 + 0x130);
        if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08f9bd20
           )) {
                    /* WARNING: Subroutine does not return */
          FUN_04031c0c(plVar7);
        }
      }
      uVar10 = FUN_0751e5c0(plVar7,unaff_w25,3,uVar6);
      if (((uVar10 & 1) != 0) &&
         (uVar10 = FUN_07417c7c(plVar14,0,0), unaff_x23 = plVar7, (uVar10 & 1) == 0)) {
        if (lVar9 == 0) {
          lVar9 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f9be48);
          FUN_057d4c24(lVar9,*(undefined4 *)(lVar3 + 0x18),*(undefined8 *)PTR_DAT_08fa47f0);
          if (lVar9 == 0) goto LAB_0752466c;
          lVar11 = *(long *)(lVar9 + 0x10);
          lVar13 = *(long *)PTR_DAT_08f9be30;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar11 == 0) goto LAB_0752466c;
          uVar2 = *(uint *)(lVar9 + 0x18);
          if (uVar2 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar2 + 1;
            *(long **)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = plVar14;
          }
          else {
            FUN_057d53ac(lVar9,plVar14,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
        }
        lVar11 = *(long *)(lVar9 + 0x10);
        lVar13 = *(long *)PTR_DAT_08f9be30;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar11 == 0) goto LAB_0752466c;
        uVar2 = *(uint *)(lVar9 + 0x18);
        if (uVar2 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar2 + 1;
          *(long **)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = plVar7;
          unaff_x23 = plVar14;
        }
        else {
          FUN_057d53ac(lVar9,plVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          unaff_x23 = plVar14;
        }
      }
    }
    uVar10 = (ulong)*(uint *)(lVar3 + 0x18);
    uVar5 = uVar5 + 1;
    plVar14 = unaff_x23;
  } while ((long)uVar5 < (long)(int)*(uint *)(lVar3 + 0x18));
  if (lVar9 != 0) {
    plVar4 = (long *)FUN_040316d0(*(undefined8 *)PTR_DAT_08f9d820,*(undefined4 *)(lVar9 + 0x18));
    FUN_057d586c(lVar9,plVar4,*(undefined8 *)PTR_DAT_08fa47e8);
  }
LAB_075241cc:
  uVar5 = FUN_07419bd0(unaff_x23,0,0);
  if ((uVar5 & 1) == 0) goto LAB_075244e4;
  if ((plVar4 == (long *)0x0) && (in_stack_00000058._4_4_ == 0)) {
    if ((unaff_x23 == (long *)0x0) ||
       (lVar3 = (**(code **)(*unaff_x23 + 0x3c8))(unaff_x23,*(undefined8 *)(*unaff_x23 + 0x3d0)),
       lVar3 == 0)) goto LAB_0752466c;
    if ((*(long *)(lVar3 + 0x18) == 0) && ((unaff_w25 >> 0x12 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x07524254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)(*unaff_x23 + 0x358))
                        (unaff_x23,in_stack_00000020,unaff_w25,in_stack_00000028,in_stack_00000030,
                         in_stack_00000018,*(undefined8 *)(*unaff_x23 + 0x360));
      return uVar6;
    }
LAB_0752425c:
    plVar4 = (long *)FUN_040316d0(*(undefined8 *)PTR_DAT_08f9d820,1);
    if (plVar4 == (long *)0x0) goto LAB_0752466c;
    if ((unaff_x23 != (long *)0x0) &&
       (lVar3 = thunk_FUN_0406ddbc(unaff_x23,*(undefined8 *)(*plVar4 + 0x40)), lVar3 == 0)) {
      uVar6 = thunk_FUN_0407b7a8();
                    /* WARNING: Subroutine does not return */
      FUN_04031750(uVar6,0);
    }
    if ((int)plVar4[3] == 0) {
LAB_07524670:
                    /* WARNING: Subroutine does not return */
      FUN_04031894();
    }
    plVar4[4] = (long)unaff_x23;
  }
  else if (plVar4 == (long *)0x0) goto LAB_0752425c;
  if (in_stack_00000030 == 0) {
    lVar9 = *(long *)PTR_DAT_08f6d6b0;
    lVar3 = *(long *)(lVar9 + 0x38);
    if (lVar3 == 0) {
      FUN_0406ab48(lVar9);
      lVar3 = *(long *)(lVar9 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec();
    }
    in_stack_00000078 = **(undefined8 **)(lVar3 + 0xb8);
  }
  in_stack_00000070 = 0;
  if (in_stack_00000028 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  plVar4 = (long *)(**(code **)(*in_stack_00000028 + 0x188))
                             (in_stack_00000028,unaff_w25,plVar4,&stack0x00000078,in_stack_00000040,
                              in_stack_00000018,in_stack_00000050,&stack0x00000070);
  uVar5 = FUN_074197d0(plVar4,0,0);
  if ((uVar5 & 1) != 0) {
LAB_075244e4:
    uVar6 = (**(code **)(*in_stack_00000048 + 0x2f8))
                      (in_stack_00000048,*(undefined8 *)(*in_stack_00000048 + 0x300));
    thunk_FUN_04097b88(PTR_DAT_08f8aa60);
    uVar8 = thunk_FUN_0406deb8();
    FUN_074e7124(uVar8,uVar6,in_stack_00000038,0);
    uVar6 = thunk_FUN_04097b88(PTR_DAT_08fa4858);
                    /* WARNING: Subroutine does not return */
    FUN_04031750(uVar8,uVar6);
  }
  if (plVar4 != (long *)0x0) {
    lVar3 = *plVar4;
    bVar1 = *(byte *)(*(long *)PTR_DAT_08f8bb78 + 0x130);
    if ((*(byte *)(lVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08f8bb78)) {
                    /* WARNING: Subroutine does not return */
      FUN_04031c0c(plVar4);
    }
    uVar6 = (**(code **)(lVar3 + 0x358))
                      (plVar4,in_stack_00000020,unaff_w25,in_stack_00000028,in_stack_00000078,
                       in_stack_00000018,*(undefined8 *)(lVar3 + 0x360));
    if (in_stack_00000070 != 0) {
      if (in_stack_00000028 == (long *)0x0) goto LAB_0752466c;
      (**(code **)(*in_stack_00000028 + 0x1a8))
                (in_stack_00000028,&stack0x00000078,in_stack_00000070,
                 *(undefined8 *)(*in_stack_00000028 + 0x1b0));
    }
    return uVar6;
  }
LAB_0752466c:
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


