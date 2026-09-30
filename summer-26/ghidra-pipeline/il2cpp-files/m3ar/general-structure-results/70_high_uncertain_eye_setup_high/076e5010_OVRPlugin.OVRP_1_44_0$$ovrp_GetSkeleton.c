/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetSkeleton
ENTRY_POINT: 076e5010
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetSkeleton(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  float *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uStack0000000000000010;
  float fStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  
  puVar3 = PTR_DAT_08fae348;
  puVar2 = PTR_DAT_08f65598;
  puVar1 = PTR_DAT_08f65580;
  plVar12 = (long *)unaff_x21[0x27];
  uStack0000000000000030 = 0;
  _fStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000020 = 0;
  if (plVar12 != (long *)0x0) {
    fVar24 = 0.0;
                    /* try { // try from 076e5048 to 077e5057 has its CatchHandler @ 076e52d4 */
    iVar11 = 1;
    fVar26 = unaff_x19[1];
    fVar27 = unaff_x19[2];
    fVar25 = *unaff_x19;
    do {
      lVar8 = *plVar12;
      lVar7 = *(long *)puVar3;
                    /* try { // try from 076e5068 to 077e506f has its CatchHandler @ 076e52d0 */
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
                    /* try { // try from 076e50a0 to 077e50a7 has its CatchHandler @ 076e52d8 */
                    /* try { // try from 076e50a8 to 077e5173 has its CatchHandler @ 076e4e90 */
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            fVar20 = param_3;
            goto LAB_076e50ac;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
                    /* try { // try from 076e508c to 077e5093 has its CatchHandler @ 076e52c8 */
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_0406ae20(plVar12,lVar7,0);
      fVar20 = param_3;
LAB_076e50ac:
      iVar5 = (*(code *)*puVar6)(plVar12,puVar6[1]);
      if (iVar5 <= iVar11) {
        return;
      }
      if (unaff_x19[7] < fVar24) {
        return;
      }
      plVar12 = (long *)unaff_x21[0x27];
      if (plVar12 == (long *)0x0) break;
      lVar8 = *plVar12;
      lVar7 = *(long *)puVar3;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar7) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_076e5124;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_0406ae20(plVar12,lVar7,1);
LAB_076e5124:
      fVar14 = (float)(*(code *)*puVar6)(plVar12,iVar11,puVar6[1]);
      if (unaff_x20 == 0) break;
      fVar21 = fVar27;
      fVar23 = fVar26;
      uVar9 = FUN_076e3724(fVar25,fVar26,fVar27,fVar14,param_2,fVar20);
      if ((uVar9 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_08fae310 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        fVar15 = (float)FUN_076e2da4(&stack0x00000010);
        if (DAT_09539e19 == '\0') {
          FUN_0403162c(puVar1);
          DAT_09539e19 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        fVar21 = fVar27 - fVar21;
        fVar18 = *(float *)(unaff_x21 + 0x28);
        fVar23 = fVar24 + SQRT(fVar21 * fVar21 +
                               (fVar25 - fVar15) * (fVar25 - fVar15) +
                               (fVar26 - fVar23) * (fVar26 - fVar23));
        if (fVar18 <= ABS(unaff_x19[7] - fVar23)) {
          uVar13 = *(undefined8 *)(unaff_x19 + 10);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0408f364();
          }
          uVar9 = FUN_0858816c(uVar13,0,0);
          if ((uVar9 & 1) != 0) {
            if (*(long *)(unaff_x19 + 10) == 0) break;
            if ((*(char *)(*(long *)(unaff_x19 + 10) + 0xb0) == '\0') &&
               (*(char *)(unaff_x20 + 0xb0) != '\0')) {
              if (*(int *)(*(long *)PTR_DAT_08fae310 + 0xe4) == 0) {
                thunk_FUN_0408f364();
              }
              fVar15 = fStack0000000000000018;
              fVar16 = (float)FUN_076e2da4(unaff_x19 + 0xc);
              fVar22 = fVar21;
              fVar19 = fVar18;
              fVar17 = (float)FUN_076e2da4(&stack0x00000010);
              bVar4 = (fVar21 - fVar22) * (fVar21 - fVar22) +
                      (fVar16 - fVar17) * (fVar16 - fVar17) + (fVar18 - fVar19) * (fVar18 - fVar19)
                      < fVar15 * fVar15;
              goto LAB_076e5248;
            }
          }
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
LAB_076e5248:
        uVar13 = *(undefined8 *)(unaff_x19 + 10);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        uVar9 = FUN_08589e5c(uVar13,0,0);
        if ((uVar9 & 1) != 0) {
LAB_076e5390:
          unaff_x19[7] = fVar23;
          *(undefined8 *)(unaff_x19 + 0x14) = uStack0000000000000030;
          *(undefined8 *)(unaff_x19 + 0xe) = _fStack0000000000000018;
          *(undefined8 *)(unaff_x19 + 0xc) = uStack0000000000000010;
          *(undefined8 *)(unaff_x19 + 0x12) = uStack0000000000000028;
          *(undefined8 *)(unaff_x19 + 0x10) = uStack0000000000000020;
          *(long *)(unaff_x19 + 10) = unaff_x20;
          return;
        }
        if (bVar4) {
          iVar5 = (**(code **)(*unaff_x21 + 0x548))();
          if (0 < iVar5) goto LAB_076e5390;
        }
        else if (fVar23 < unaff_x19[7]) goto LAB_076e5390;
      }
      if (DAT_09539e19 == '\0') {
        FUN_0403162c(puVar1);
        DAT_09539e19 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      plVar12 = (long *)unaff_x21[0x27];
      param_3 = fVar27 - fVar20;
      iVar11 = iVar11 + 1;
      fVar24 = fVar24 + SQRT(param_3 * param_3 +
                             (fVar25 - fVar14) * (fVar25 - fVar14) +
                             (fVar26 - param_2) * (fVar26 - param_2));
      fVar26 = param_2;
      fVar27 = fVar20;
      fVar25 = fVar14;
      param_2 = param_3 * param_3;
    } while (plVar12 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


