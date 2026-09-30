/*
FUNCTION_NAME: OVRPlugin.InsightPassthroughStyle2$$CopyTo
ENTRY_POINT: 063a93d0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_possible_biometrics_hits_4
*/


void OVRPlugin_InsightPassthroughStyle2__CopyTo(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  int in_w9;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  uint unaff_w20;
  undefined8 unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  uint unaff_w25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  long *in_stack_00000068;
  
code_r0x063a93d0:
  puVar5 = (undefined8 *)(param_1 + (long)in_w9 * 0x10 + 0x138);
  while ((lVar7 = (*(code *)*puVar5)(unaff_x23,puVar5[1]), lVar7 != 0 &&
         (uVar8 = FUN_049cec24(lVar7,unaff_w20,*unaff_x24), unaff_x29 != 0))) {
    lVar7 = *(long *)(unaff_x29 + 0x10);
    lVar11 = *unaff_x27;
    *(int *)(unaff_x29 + 0x1c) = *(int *)(unaff_x29 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar2 = *(uint *)(unaff_x29 + 0x18);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(unaff_x29 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
      thunk_FUN_037aeb94();
    }
    else {
      FUN_049ceef4(unaff_x29,uVar8,
                   *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
    unaff_w20 = unaff_w20 + 1;
    if (unaff_w20 == unaff_w25) {
      if (in_stack_00000018 != 0) {
        uVar8 = *unaff_x26;
LAB_063a94b8:
        FUN_05b0f700(in_stack_00000018,unaff_x19,unaff_x29,uVar8);
        uVar8 = *unaff_x26;
        do {
          FUN_05b0f700(in_stack_00000018,in_stack_00000030,in_stack_00000038,uVar8);
LAB_063a9038:
          unaff_w25 = unaff_w25 + 1;
          lVar7 = *unaff_x23;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *unaff_x22) {
                puVar5 = (undefined8 *)(lVar7 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                goto LAB_063a9088;
              }
              uVar9 = uVar9 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_0377596c(unaff_x23,*unaff_x22,2);
LAB_063a9088:
          lVar7 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
          if (lVar7 == 0) break;
          if (*(int *)(lVar7 + 0x18) <= (int)unaff_w25) {
            if (in_stack_00000018 != 0) {
              FUN_05b0fb30(&stack0x00000040,in_stack_00000018,*(undefined8 *)PTR_DAT_07d91a58);
              puVar3 = PTR_DAT_07d91a68;
              goto LAB_063a9508;
            }
            lVar7 = *unaff_x23;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 == 0) goto LAB_063a9608;
            piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_063a95f0;
          }
          lVar7 = *unaff_x23;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *unaff_x22) {
                puVar5 = (undefined8 *)(lVar7 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                goto LAB_063a90f4;
              }
              uVar9 = uVar9 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar9 != 0);
          }
          puVar5 = (undefined8 *)FUN_0377596c(unaff_x23,*unaff_x22,2);
LAB_063a90f4:
          lVar7 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
          if (lVar7 == 0) break;
          in_stack_00000038 = FUN_049cec24(lVar7,unaff_w25,*unaff_x24);
          in_stack_00000030 = FUN_063a8640(in_stack_00000038,in_stack_00000038,unaff_x21);
          if (in_stack_00000018 == 0) {
            if (unaff_x19 == 0) {
              in_stack_00000018 = 0;
              unaff_x19 = in_stack_00000030;
            }
            else {
              uVar9 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                                (in_stack_00000030,unaff_x19,0);
              if ((uVar9 & 1) == 0) {
                in_stack_00000018 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d91980);
                FUN_05b0e950(in_stack_00000018,*(undefined8 *)PTR_DAT_07d91978);
                if (1 < unaff_w25) {
                  unaff_x29 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db6bd8);
                  FUN_049ce730(unaff_x29,unaff_w25,*(undefined8 *)PTR_DAT_07db6bd0);
                  unaff_w20 = 0;
                  goto OVRPlugin_FaceExpressionStatusInternal__ToFaceExpressionStatus;
                }
                lVar7 = *unaff_x23;
                uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar9 == 0) goto LAB_063a9264;
                piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                goto LAB_063a924c;
              }
              in_stack_00000018 = 0;
            }
            goto LAB_063a9038;
          }
          uVar9 = System_Collections_Generic_Dictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>___ctor
                            (in_stack_00000018,in_stack_00000030,&stack0x00000068,*unaff_x28);
          if ((uVar9 & 1) != 0) {
            if (in_stack_00000068 == (long *)0x0) {
LAB_063a9180:
              plVar6 = (long *)thunk_FUN_037788cc();
              FUN_049ce6c0(plVar6,*(undefined8 *)PTR_DAT_07db6c38);
              plVar4 = in_stack_00000068;
              if (plVar6 == (long *)0x0) break;
              if (in_stack_00000068 == (long *)0x0) {
                lVar7 = 0;
              }
              else {
                lVar11 = *unaff_x22;
                lVar7 = thunk_FUN_037787d0(in_stack_00000068,lVar11);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0373bb54(plVar4,lVar11);
                }
              }
              lVar11 = plVar6[2];
              lVar10 = *unaff_x27;
              *(int *)((long)plVar6 + 0x1c) = *(int *)((long)plVar6 + 0x1c) + 1;
              if (lVar11 == 0) break;
              uVar2 = *(uint *)(plVar6 + 3);
              if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(plVar6 + 3) = uVar2 + 1;
                *(long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20) = lVar7;
                thunk_FUN_037aeb94();
              }
              else {
                FUN_049ceef4(plVar6,lVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              FUN_05b0f6ec(in_stack_00000018,in_stack_00000030,plVar6,
                           *(undefined8 *)PTR_DAT_07db0418);
              unaff_x21 = in_stack_00000028;
              unaff_x23 = in_stack_00000020;
            }
            else {
              bVar1 = *(byte *)(*(long *)PTR_DAT_07db6bd8 + 0x130);
              if ((*(byte *)(*in_stack_00000068 + 0x130) < bVar1) ||
                 (plVar6 = in_stack_00000068,
                 *(long *)(*(long *)(*in_stack_00000068 + 200) + (ulong)bVar1 * 8 + -8) !=
                 *(long *)PTR_DAT_07db6bd8)) goto LAB_063a9180;
            }
            lVar7 = plVar6[2];
            lVar11 = *unaff_x27;
            *(int *)((long)plVar6 + 0x1c) = *(int *)((long)plVar6 + 0x1c) + 1;
            if (lVar7 == 0) break;
            uVar2 = *(uint *)(plVar6 + 3);
            if (uVar2 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(plVar6 + 3) = uVar2 + 1;
              *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = in_stack_00000038;
              thunk_FUN_037aeb94();
            }
            else {
              FUN_049ceef4(plVar6,in_stack_00000038,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_063a9038;
          }
          uVar8 = *unaff_x26;
        } while( true );
      }
      break;
    }
OVRPlugin_FaceExpressionStatusInternal__ToFaceExpressionStatus:
    param_1 = *unaff_x23;
    uVar9 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar9 != 0) {
      piVar12 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x22) {
          in_w9 = *piVar12 + 2;
          goto code_r0x063a93d0;
        }
        uVar9 = uVar9 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(unaff_x23,*unaff_x22,2);
  }
LAB_063a972c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
LAB_063a9508:
  uVar9 = FUN_05e3d424(&stack0x00000040,*(undefined8 *)puVar3);
  plVar6 = in_stack_00000058;
  uVar8 = in_stack_00000050;
  if ((uVar9 & 1) == 0) {
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
    lVar11 = *unaff_x22;
    lVar7 = thunk_FUN_037787d0(in_stack_00000058,lVar11);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar6,lVar11);
    }
  }
  FUN_063a993c(in_stack_00000000,in_stack_00000010,unaff_x21,in_stack_00000008._4_4_ & 1,lVar7,uVar8
              );
  goto LAB_063a9508;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar12 = piVar12 + 4;
    if (uVar9 == 0) break;
LAB_063a924c:
    if (*(long *)(piVar12 + -2) == *unaff_x22) {
      puVar5 = (undefined8 *)(lVar7 + (long)(*piVar12 + 2) * 0x10 + 0x138);
      goto LAB_063a9488;
    }
  }
LAB_063a9264:
  puVar5 = (undefined8 *)FUN_0377596c(unaff_x23,*unaff_x22,2);
LAB_063a9488:
  lVar7 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
  if ((lVar7 == 0) || (unaff_x29 = FUN_049cec24(lVar7,0,*unaff_x24), in_stack_00000018 == 0))
  goto LAB_063a972c;
  uVar8 = *unaff_x26;
  goto LAB_063a94b8;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar12 = piVar12 + 4;
    if (uVar9 == 0) break;
LAB_063a95f0:
    if (*(long *)(piVar12 + -2) == *unaff_x22) {
      puVar5 = (undefined8 *)(lVar7 + (long)(*piVar12 + 2) * 0x10 + 0x138);
      goto LAB_063a96e4;
    }
  }
LAB_063a9608:
  puVar5 = (undefined8 *)FUN_0377596c(unaff_x23,*unaff_x22,2);
LAB_063a96e4:
  uVar8 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
  FUN_063a97c8(in_stack_00000000,in_stack_00000010,unaff_x21,in_stack_00000008._4_4_ & 1,uVar8,
               unaff_x19);
  return;
}


