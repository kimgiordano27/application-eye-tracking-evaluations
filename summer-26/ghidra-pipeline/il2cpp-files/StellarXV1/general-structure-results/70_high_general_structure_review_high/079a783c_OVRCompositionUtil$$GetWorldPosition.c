/*
FUNCTION_NAME: OVRCompositionUtil$$GetWorldPosition
ENTRY_POINT: 079a783c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1
*/


void OVRCompositionUtil__GetWorldPosition(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x23;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 unaff_s11;
  float fVar18;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined8 uStack0000000000000024;
  undefined8 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 uStack0000000000000098;
  undefined4 uStack000000000000009c;
  undefined4 uStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 uStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  undefined4 uStack0000000000000100;
  undefined4 uStack0000000000000104;
  undefined4 uStack0000000000000108;
  float fStack000000000000010c;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined4 in_stack_00000138;
  undefined4 uStack0000000000000140;
  undefined8 uStack0000000000000144;
  
  puVar2 = (undefined8 *)FUN_040b1e00();
  lVar3 = (*(code *)*puVar2)();
  if (lVar3 != 0) {
    FUN_05c41e94(&stack0x000000f0,lVar3,1,*unaff_x23);
    uVar16 = uStack00000000000000f8;
    uVar15 = uStack00000000000000f4;
    uVar17 = uStack00000000000000f0;
    FUN_079a6fbc();
    FUN_079a7454(&stack0x000000f0,unaff_s11,unaff_s12,unaff_s13,uVar17,uVar15,uVar16);
    fVar14 = fStack000000000000010c;
    in_stack_00000130 = CONCAT44(uStack00000000000000f4,uStack00000000000000f0);
    uStack0000000000000144 = CONCAT44(uStack0000000000000108,uStack0000000000000104);
    in_stack_00000138 = uStack00000000000000f8;
    uStack0000000000000140 = uStack0000000000000100;
    if (unaff_x20 != 0) {
      uVar17 = *(undefined4 *)(unaff_x19 + 100);
      FUN_089dc87c(&stack0x000000f0);
      in_stack_000000b8 = CONCAT44(uStack00000000000000fc,uStack00000000000000f8);
      in_stack_000000b0 = CONCAT44(uStack00000000000000f4,uStack00000000000000f0);
      in_stack_000000c8 = CONCAT44(fStack000000000000010c,uStack0000000000000108);
      in_stack_000000c0 = CONCAT44(uStack0000000000000104,uStack0000000000000100);
      in_stack_000000d8 = in_stack_00000118;
      in_stack_000000d0 = in_stack_00000110;
      in_stack_000000e8 = in_stack_00000128;
      in_stack_000000e0 = in_stack_00000120;
      fVar8 = (float)FUN_079e4a18(uVar17,&stack0x000000b0,0);
      fVar14 = fVar14 / fVar8;
      fVar12 = 1.0;
      fVar18 = 1.0;
      if (fVar8 != 0.0) {
        fVar18 = fVar14;
      }
      fVar8 = (float)FUN_089dc350();
      puVar1 = PTR_DAT_09285bb0;
      lVar3 = *(long *)(unaff_x19 + 0x38);
      if ((lVar3 != 0) && (lVar7 = *(long *)(lVar3 + 0x18), lVar7 != 0)) {
        fVar18 = fVar18 * fVar8;
        fVar8 = fVar18;
        if ((*(char *)(lVar7 + 0x10) != '\0') &&
           (fVar8 = *(float *)(lVar7 + 0x14), *(float *)(lVar7 + 0x14) <= fVar18)) {
          fVar8 = fVar18;
        }
        lVar3 = *(long *)(lVar3 + 0x10);
        if (lVar3 != 0) {
          fVar18 = fVar8;
          if ((*(char *)(lVar3 + 0x10) != '\0') &&
             (fVar18 = *(float *)(lVar3 + 0x14), fVar8 <= *(float *)(lVar3 + 0x14))) {
            fVar18 = fVar8;
          }
          fVar8 = (float)FUN_089dc350();
          fVar9 = (float)FUN_089dc350();
          fVar18 = fVar18 / fVar8;
          FUN_089dc428(fVar9 * fVar18,fVar12 * fVar18,fVar14 * fVar18);
          FUN_089dc87c(&stack0x000000f0);
          in_stack_00000030 = *(undefined8 *)(unaff_x19 + 0x48);
          uStack0000000000000044 = *(undefined8 *)(unaff_x19 + 0x5c);
          uStack0000000000000038 = (undefined4)*(undefined8 *)(unaff_x19 + 0x50);
          uStack000000000000003c = (undefined4)*(undefined8 *)(unaff_x19 + 0x54);
          uStack0000000000000040 = (undefined4)((ulong)*(undefined8 *)(unaff_x19 + 0x54) >> 0x20);
          in_stack_00000018 = in_stack_00000138;
          in_stack_00000010 = in_stack_00000130;
          uStack0000000000000024 = uStack0000000000000144;
          uStack0000000000000020 = uStack0000000000000140;
          in_stack_00000058 = CONCAT44(uStack00000000000000fc,uStack00000000000000f8);
          in_stack_00000050 = CONCAT44(uStack00000000000000f4,uStack00000000000000f0);
          in_stack_00000068 = CONCAT44(fStack000000000000010c,uStack0000000000000108);
          in_stack_00000060 = CONCAT44(uStack0000000000000104,uStack0000000000000100);
          in_stack_00000078 = in_stack_00000118;
          in_stack_00000070 = in_stack_00000110;
          in_stack_00000088 = in_stack_00000128;
          in_stack_00000080 = in_stack_00000120;
          FUN_079e46c0((long)&stack0x00000090 + 4,&stack0x00000050,&stack0x00000030,&stack0x00000010
                       ,0);
          uVar15 = uStack00000000000000a8;
          uVar17 = uStack00000000000000a0;
          FUN_089dbabc(in_stack_00000090._4_4_,uStack0000000000000098,uStack000000000000009c);
          uVar13 = uStack00000000000000a4;
          FUN_089dbe24(uVar17,uStack00000000000000a4,uVar15,uStack00000000000000ac);
          uVar10 = FUN_089db960();
          uVar17 = uVar13;
          uVar16 = uVar15;
          uVar4 = thunk_FUN_089dc5b4();
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_040d65a8(*(long *)puVar1);
          }
          uVar5 = FUN_089ca704(uVar4,0,0);
          if ((uVar5 & 1) == 0) {
            if (DAT_098854f1 == '\0') {
              FUN_04077588(PTR_DAT_09285d60);
              DAT_098854f1 = '\x01';
            }
            puVar6 = *(undefined4 **)(*(long *)PTR_DAT_09285d60 + 0xb8);
            uVar11 = *puVar6;
            uVar17 = puVar6[1];
            uVar16 = puVar6[2];
          }
          else {
            lVar3 = thunk_FUN_089dc5b4();
            if (lVar3 == 0) goto LAB_079a7b44;
            uVar11 = FUN_089db960(lVar3,0);
          }
          lVar3 = *(long *)(unaff_x19 + 0x38);
          if (lVar3 != 0) {
            OVR_OpenVR_IVRSystem__DriverDebugRequest___ctor
                      (uVar10,uVar13,uVar15,uVar11,uVar17,uVar16,*(undefined8 *)(lVar3 + 0x28),
                       *(undefined8 *)(lVar3 + 0x20),0);
            FUN_089dbabc();
            return;
          }
        }
      }
    }
  }
LAB_079a7b44:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


