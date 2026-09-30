/*
FUNCTION_NAME: OVRPlugin.BodyJointLocation$$get_OrientationTracked
ENTRY_POINT: 063a92d0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_BodyJointLocation__get_OrientationTracked
               (long *param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  uint uVar12;
  long unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x22;
  uint unaff_w23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  long *in_stack_00000068;
  
code_r0x063a92d0:
  FUN_049ceef4(param_1,param_2,param_3);
  param_1 = unaff_x29;
LAB_063a92d4:
  FUN_05b0f6ec(unaff_x20,in_stack_00000030,param_1,*(undefined8 *)PTR_DAT_07db0418);
  do {
    lVar7 = param_1[2];
    lVar9 = *unaff_x27;
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_063a972c;
    uVar12 = *(uint *)(param_1 + 3);
    if (uVar12 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(param_1 + 3) = uVar12 + 1;
      *(undefined8 *)(lVar7 + (long)(int)uVar12 * 8 + 0x20) = in_stack_00000038;
      thunk_FUN_037aeb94();
    }
    else {
      FUN_049ceef4(param_1,in_stack_00000038,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
LAB_063a9038:
    unaff_w23 = unaff_w23 + 1;
    lVar7 = *in_stack_00000020;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x22) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_063a9088;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(in_stack_00000020,*unaff_x22,2);
LAB_063a9088:
    lVar7 = (*(code *)*puVar5)(in_stack_00000020,puVar5[1]);
    if (lVar7 == 0) goto LAB_063a972c;
    if (*(int *)(lVar7 + 0x18) <= (int)unaff_w23) {
      if (unaff_x20 != 0) {
        FUN_05b0fb30(&stack0x00000040,unaff_x20,*(undefined8 *)PTR_DAT_07d91a58);
        puVar3 = PTR_DAT_07d91a68;
        break;
      }
      lVar7 = *in_stack_00000020;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_063a9608;
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      goto LAB_063a95f0;
    }
    lVar7 = *in_stack_00000020;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x22) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_063a90f4;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(in_stack_00000020,*unaff_x22,2);
LAB_063a90f4:
    lVar7 = (*(code *)*puVar5)(in_stack_00000020,puVar5[1]);
    if (lVar7 == 0) goto LAB_063a972c;
    in_stack_00000038 = FUN_049cec24(lVar7,unaff_w23,*unaff_x24);
    in_stack_00000030 = FUN_063a8640(in_stack_00000038,in_stack_00000038,unaff_x21);
    if (unaff_x20 == 0) {
      if (unaff_x19 == 0) {
        unaff_x20 = 0;
        unaff_x19 = in_stack_00000030;
      }
      else {
        uVar8 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                          (in_stack_00000030,unaff_x19,0);
        if ((uVar8 & 1) == 0) {
          unaff_x20 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d91980);
          FUN_05b0e950(unaff_x20,*(undefined8 *)PTR_DAT_07d91978);
          if (unaff_w23 < 2) {
            lVar7 = *in_stack_00000020;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x22) {
                  puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                  goto LAB_063a9488;
                }
                uVar8 = uVar8 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar8 != 0);
            }
            puVar5 = (undefined8 *)FUN_0377596c(in_stack_00000020,*unaff_x22,2);
LAB_063a9488:
            lVar7 = (*(code *)*puVar5)(in_stack_00000020,puVar5[1]);
            if ((lVar7 == 0) || (lVar7 = FUN_049cec24(lVar7,0,*unaff_x24), unaff_x20 == 0))
            goto LAB_063a972c;
            uVar6 = *unaff_x26;
          }
          else {
            lVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db6bd8);
            FUN_049ce730(lVar7,unaff_w23,*(undefined8 *)PTR_DAT_07db6bd0);
            uVar12 = 0;
            do {
              lVar9 = *in_stack_00000020;
              uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar8 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x22) {
                    puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                    goto LAB_063a93d8;
                  }
                  uVar8 = uVar8 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar8 != 0);
              }
              puVar5 = (undefined8 *)FUN_0377596c(in_stack_00000020,*unaff_x22,2);
LAB_063a93d8:
              lVar9 = (*(code *)*puVar5)(in_stack_00000020,puVar5[1]);
              if ((lVar9 == 0) || (uVar6 = FUN_049cec24(lVar9,uVar12,*unaff_x24), lVar7 == 0))
              goto LAB_063a972c;
              lVar9 = *(long *)(lVar7 + 0x10);
              lVar10 = *unaff_x27;
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar9 == 0) goto LAB_063a972c;
              uVar2 = *(uint *)(lVar7 + 0x18);
              if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar2 + 1;
                *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar6;
                thunk_FUN_037aeb94();
              }
              else {
                FUN_049ceef4(lVar7,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 != unaff_w23);
            if (unaff_x20 == 0) goto LAB_063a972c;
            uVar6 = *unaff_x26;
          }
          FUN_05b0f700(unaff_x20,unaff_x19,lVar7,uVar6);
          uVar6 = *unaff_x26;
          goto LAB_063a94c8;
        }
        unaff_x20 = 0;
      }
      goto LAB_063a9038;
    }
    uVar8 = System_Collections_Generic_Dictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>___ctor
                      (unaff_x20,in_stack_00000030,&stack0x00000068,*unaff_x28);
    if ((uVar8 & 1) == 0) {
      uVar6 = *unaff_x26;
LAB_063a94c8:
      FUN_05b0f700(unaff_x20,in_stack_00000030,in_stack_00000038,uVar6);
      goto LAB_063a9038;
    }
    if (in_stack_00000068 == (long *)0x0) goto LAB_063a9180;
    bVar1 = *(byte *)(*(long *)PTR_DAT_07db6bd8 + 0x130);
    if ((*(byte *)(*in_stack_00000068 + 0x130) < bVar1) ||
       (param_1 = in_stack_00000068,
       *(long *)(*(long *)(*in_stack_00000068 + 200) + (ulong)bVar1 * 8 + -8) !=
       *(long *)PTR_DAT_07db6bd8)) goto LAB_063a9180;
  } while( true );
LAB_063a9508:
  uVar8 = FUN_05e3d424(&stack0x00000040,*(undefined8 *)puVar3);
  plVar4 = in_stack_00000058;
  uVar6 = in_stack_00000050;
  if ((uVar8 & 1) == 0) {
    FUN_05e3d544(&stack0x00000040,*(undefined8 *)PTR_DAT_07d91a60);
    return;
  }
  if (in_stack_00000058 == (long *)0x0) {
    lVar7 = 0;
  }
  else {
    bVar1 = *(byte *)(*(long *)PTR_DAT_07db6bd8 + 0x130);
    if ((bVar1 <= *(byte *)(*in_stack_00000058 + 0x130)) &&
       (*(long *)(*(long *)(*in_stack_00000058 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)PTR_DAT_07db6bd8)) {
      FUN_063a97c8(in_stack_00000000,in_stack_00000010,unaff_x21,in_stack_00000008._4_4_ & 1,
                   in_stack_00000058,in_stack_00000050);
      goto LAB_063a9508;
    }
    lVar9 = *unaff_x22;
    lVar7 = thunk_FUN_037787d0(in_stack_00000058,lVar9);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar4,lVar9);
    }
  }
  FUN_063a993c(in_stack_00000000,in_stack_00000010,unaff_x21,in_stack_00000008._4_4_ & 1,lVar7,uVar6
              );
  goto LAB_063a9508;
LAB_063a92c0:
  param_3 = *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70);
  unaff_x29 = param_1;
  goto code_r0x063a92d0;
LAB_063a9180:
  param_1 = (long *)thunk_FUN_037788cc();
  FUN_049ce6c0(param_1,*(undefined8 *)PTR_DAT_07db6c38);
  plVar4 = in_stack_00000068;
  if (param_1 != (long *)0x0) {
    if (in_stack_00000068 == (long *)0x0) {
      param_2 = 0;
    }
    else {
      lVar7 = *unaff_x22;
      param_2 = thunk_FUN_037787d0(in_stack_00000068,lVar7);
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373bb54(plVar4,lVar7);
      }
    }
    lVar7 = param_1[2];
    lVar9 = *unaff_x27;
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
    if (lVar7 != 0) {
      uVar12 = *(uint *)(param_1 + 3);
      unaff_x21 = in_stack_00000028;
      if (*(uint *)(lVar7 + 0x18) <= uVar12) goto LAB_063a92c0;
      *(uint *)(param_1 + 3) = uVar12 + 1;
      *(long *)(lVar7 + (long)(int)uVar12 * 8 + 0x20) = param_2;
      thunk_FUN_037aeb94();
      goto LAB_063a92d4;
    }
  }
LAB_063a972c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar11 = piVar11 + 4;
    if (uVar8 == 0) break;
LAB_063a95f0:
    if (*(long *)(piVar11 + -2) == *unaff_x22) {
      puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
      goto LAB_063a96e4;
    }
  }
LAB_063a9608:
  puVar5 = (undefined8 *)FUN_0377596c(in_stack_00000020,*unaff_x22,2);
LAB_063a96e4:
  uVar6 = (*(code *)*puVar5)(in_stack_00000020,puVar5[1]);
  FUN_063a97c8(in_stack_00000000,in_stack_00000010,unaff_x21,in_stack_00000008._4_4_ & 1,uVar6,
               unaff_x19);
  return;
}


