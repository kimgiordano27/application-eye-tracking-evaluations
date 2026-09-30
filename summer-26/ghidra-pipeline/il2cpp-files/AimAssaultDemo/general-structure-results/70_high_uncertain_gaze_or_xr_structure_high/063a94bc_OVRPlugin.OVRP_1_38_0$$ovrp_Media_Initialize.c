/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_Initialize
ENTRY_POINT: 063a94bc
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


void OVRPlugin_OVRP_1_38_0__ovrp_Media_Initialize(void)

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
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  long *in_stack_00000068;
  
code_r0x063a94bc:
  uVar7 = *unaff_x26;
  do {
    FUN_05b0f700(unaff_x20,in_stack_00000030,in_stack_00000038,uVar7);
LAB_063a9038:
    unaff_w25 = unaff_w25 + 1;
    lVar8 = *unaff_x23;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x22) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_063a9088;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(unaff_x23,*unaff_x22,2);
LAB_063a9088:
    lVar8 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
    if (lVar8 == 0) goto LAB_063a972c;
    if (*(int *)(lVar8 + 0x18) <= (int)unaff_w25) {
      if (unaff_x20 != 0) {
                    /* try { // try from 063a94e0 to 064a94e3 has its CatchHandler @ 063a97d0 */
                    /* try { // try from 063a94ec to 064a94f7 has its CatchHandler @ 063a97cc */
        FUN_05b0fb30(&stack0x00000040,unaff_x20,*(undefined8 *)PTR_DAT_07d91a58);
        puVar3 = PTR_DAT_07d91a68;
                    /* try { // try from 063a9500 to 064a9503 has its CatchHandler @ 063a95ac */
        break;
      }
      lVar8 = *unaff_x23;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_063a9608;
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      goto LAB_063a95f0;
    }
    lVar8 = *unaff_x23;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x22) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_063a90f4;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(unaff_x23,*unaff_x22,2);
LAB_063a90f4:
    lVar8 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
    if (lVar8 == 0) goto LAB_063a972c;
    in_stack_00000038 = FUN_049cec24(lVar8,unaff_w25,*unaff_x24);
    in_stack_00000030 = FUN_063a8640(in_stack_00000038,in_stack_00000038,unaff_x21);
    if (unaff_x20 == 0) {
      if (unaff_x19 == 0) {
        unaff_x20 = 0;
        unaff_x19 = in_stack_00000030;
      }
      else {
        uVar9 = System_Globalization_GregorianCalendar__set_TwoDigitYearMax
                          (in_stack_00000030,unaff_x19,0);
        if ((uVar9 & 1) == 0) {
          unaff_x20 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07d91980);
          FUN_05b0e950(unaff_x20,*(undefined8 *)PTR_DAT_07d91978);
          if (1 < unaff_w25) {
            lVar8 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db6bd8);
            FUN_049ce730(lVar8,unaff_w25,*(undefined8 *)PTR_DAT_07db6bd0);
            uVar12 = 0;
            goto OVRPlugin_FaceExpressionStatusInternal__ToFaceExpressionStatus;
          }
          lVar8 = *unaff_x23;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 == 0) goto LAB_063a9264;
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_063a924c;
        }
        unaff_x20 = 0;
      }
      goto LAB_063a9038;
    }
    uVar9 = System_Collections_Generic_Dictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>___ctor
                      (unaff_x20,in_stack_00000030,&stack0x00000068,*unaff_x28);
    if ((uVar9 & 1) != 0) {
      if (in_stack_00000068 == (long *)0x0) {
LAB_063a9180:
        plVar6 = (long *)thunk_FUN_037788cc();
        FUN_049ce6c0(plVar6,*(undefined8 *)PTR_DAT_07db6c38);
        plVar4 = in_stack_00000068;
        if (plVar6 == (long *)0x0) goto LAB_063a972c;
        if (in_stack_00000068 == (long *)0x0) {
          lVar8 = 0;
        }
        else {
          lVar13 = *unaff_x22;
          lVar8 = thunk_FUN_037787d0(in_stack_00000068,lVar13);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(plVar4,lVar13);
          }
        }
        lVar13 = plVar6[2];
        lVar10 = *unaff_x27;
        *(int *)((long)plVar6 + 0x1c) = *(int *)((long)plVar6 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_063a972c;
        uVar12 = *(uint *)(plVar6 + 3);
        if (uVar12 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(plVar6 + 3) = uVar12 + 1;
          *(long *)(lVar13 + (long)(int)uVar12 * 8 + 0x20) = lVar8;
          thunk_FUN_037aeb94();
        }
        else {
          FUN_049ceef4(plVar6,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        FUN_05b0f6ec(unaff_x20,in_stack_00000030,plVar6,*(undefined8 *)PTR_DAT_07db0418);
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
      lVar8 = plVar6[2];
      lVar13 = *unaff_x27;
      *(int *)((long)plVar6 + 0x1c) = *(int *)((long)plVar6 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_063a972c;
      uVar12 = *(uint *)(plVar6 + 3);
      if (uVar12 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(plVar6 + 3) = uVar12 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar12 * 8 + 0x20) = in_stack_00000038;
        thunk_FUN_037aeb94();
      }
      else {
        FUN_049ceef4(plVar6,in_stack_00000038,
                     *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
      goto LAB_063a9038;
    }
    uVar7 = *unaff_x26;
  } while( true );
LAB_063a9508:
  uVar9 = FUN_05e3d424(&stack0x00000040,*(undefined8 *)puVar3);
  plVar6 = in_stack_00000058;
  uVar7 = in_stack_00000050;
  if ((uVar9 & 1) == 0) {
    FUN_05e3d544(&stack0x00000040,*(undefined8 *)PTR_DAT_07d91a60);
    return;
  }
                    /* try { // try from 063a951c to 064a9523 has its CatchHandler @ 063a95a8 */
  if (in_stack_00000058 == (long *)0x0) {
    lVar8 = 0;
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
    lVar13 = *unaff_x22;
    lVar8 = thunk_FUN_037787d0(in_stack_00000058,lVar13);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar6,lVar13);
    }
  }
  FUN_063a993c(in_stack_00000000,in_stack_00000010,unaff_x21,in_stack_00000008._4_4_ & 1,lVar8,uVar7
              );
  goto LAB_063a9508;
  while( true ) {
    lVar13 = *(long *)(lVar8 + 0x10);
    lVar10 = *unaff_x27;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar13 == 0) goto LAB_063a972c;
    uVar2 = *(uint *)(lVar8 + 0x18);
    if (uVar2 < *(uint *)(lVar13 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar13 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
      thunk_FUN_037aeb94();
    }
    else {
      FUN_049ceef4(lVar8,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    uVar12 = uVar12 + 1;
    if (uVar12 == unaff_w25) break;
OVRPlugin_FaceExpressionStatusInternal__ToFaceExpressionStatus:
    lVar13 = *unaff_x23;
    uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x22) {
          puVar5 = (undefined8 *)(lVar13 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_063a93d8;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(unaff_x23,*unaff_x22,2);
LAB_063a93d8:
    lVar13 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
    if ((lVar13 == 0) || (uVar7 = FUN_049cec24(lVar13,uVar12,*unaff_x24), lVar8 == 0))
    goto LAB_063a972c;
  }
  if (unaff_x20 == 0) {
LAB_063a972c:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  uVar7 = *unaff_x26;
LAB_063a94b8:
  FUN_05b0f700(unaff_x20,unaff_x19,lVar8,uVar7);
  goto code_r0x063a94bc;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar11 = piVar11 + 4;
    if (uVar9 == 0) break;
LAB_063a924c:
    if (*(long *)(piVar11 + -2) == *unaff_x22) {
      puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
      goto LAB_063a9488;
    }
  }
LAB_063a9264:
  puVar5 = (undefined8 *)FUN_0377596c(unaff_x23,*unaff_x22,2);
LAB_063a9488:
  lVar8 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
  if ((lVar8 == 0) || (lVar8 = FUN_049cec24(lVar8,0,*unaff_x24), unaff_x20 == 0)) goto LAB_063a972c;
  uVar7 = *unaff_x26;
  goto LAB_063a94b8;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar11 = piVar11 + 4;
    if (uVar9 == 0) break;
LAB_063a95f0:
    if (*(long *)(piVar11 + -2) == *unaff_x22) {
      puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
      goto LAB_063a96e4;
    }
  }
LAB_063a9608:
  puVar5 = (undefined8 *)FUN_0377596c(unaff_x23,*unaff_x22,2);
LAB_063a96e4:
  uVar7 = (*(code *)*puVar5)(unaff_x23,puVar5[1]);
  FUN_063a97c8(in_stack_00000000,in_stack_00000010,unaff_x21,in_stack_00000008._4_4_ & 1,uVar7,
               unaff_x19);
  return;
}


