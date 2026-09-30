/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Meta.MetaOpenXRSessionSubsystem.MetaOpenXRProvider$$TryRequestSceneCapture
ENTRY_POINT: 085c9e40
PROGRAM: cac-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_6;telemetry_or_network_hits_4
*/


void UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_MetaOpenXRProvider__TryRequestSceneCapture
               (void)

{
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined1 unaff_w25;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  ulong uVar9;
  ulong uVar11;
  float unaff_s8;
  undefined8 unaff_d9;
  float fVar12;
  float unaff_s10;
  undefined8 unaff_d11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  undefined8 unaff_d15;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined8 uStack000000000000002c;
  undefined4 uStack0000000000000034;
  long in_stack_00000058;
  
  do {
    FUN_03f13384();
    *(undefined1 *)(unaff_x23 + 0x7b5) = unaff_w25;
    do {
      fVar2 = (float)((ulong)unaff_d15 >> 0x20);
      uVar4 = **(undefined8 **)(*unaff_x20 + 0xb8);
      fVar1 = ((float)unaff_d15 + (float)unaff_d15) - (float)uVar4;
      fVar2 = (fVar2 + fVar2) - (float)((ulong)uVar4 >> 0x20);
      fVar3 = (unaff_s14 + unaff_s14) - *(float *)(*(undefined8 **)(*unaff_x20 + 0xb8) + 1);
      if (unaff_s13 <= fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) {
        FUN_087a31a8(&stack0x00000020,unaff_x21,0);
        fVar3 = (float)uStack0000000000000028 - (float)uStack0000000000000034;
        fVar2 = (float)uStack0000000000000028 + (float)uStack0000000000000034;
        fVar15 = (float)in_stack_00000020 - (float)uStack000000000000002c;
        fVar7 = (float)((ulong)in_stack_00000020 >> 0x20);
        fVar16 = fVar7 - SUB84(uStack000000000000002c,4);
        fVar6 = (float)in_stack_00000020 + (float)uStack000000000000002c;
        fVar7 = fVar7 + SUB84(uStack000000000000002c,4);
        uVar5 = CONCAT44(fVar7,fVar6);
        fVar8 = (float)in_stack_00000010 - (float)unaff_d9;
        fVar14 = (float)((ulong)unaff_d9 >> 0x20);
        fVar1 = (float)((ulong)in_stack_00000010 >> 0x20);
        fVar10 = fVar1 - fVar14;
        uVar9 = CONCAT44(fVar10,fVar8);
        fVar13 = (float)unaff_d9 + (float)in_stack_00000010;
        fVar14 = fVar14 + fVar1;
        fVar1 = unaff_s8 - unaff_s10;
        if (fVar3 <= unaff_s8 - unaff_s10) {
          fVar1 = fVar3;
        }
        fVar12 = unaff_s10 + unaff_s8;
        if (unaff_s10 + unaff_s8 <= fVar3) {
          fVar12 = fVar3;
        }
        uVar9 = uVar9 ^ (uVar9 ^ CONCAT44(fVar16,fVar15)) &
                        ~CONCAT44(-(uint)(fVar10 < fVar16),-(uint)(fVar8 < fVar15));
        uVar11 = CONCAT44(fVar16,fVar15) ^
                 (CONCAT44(fVar16,fVar15) ^ CONCAT44(fVar14,fVar13)) &
                 CONCAT44(-(uint)(fVar16 < fVar14),-(uint)(fVar15 < fVar13));
        fVar14 = (float)uVar9;
        fVar15 = (float)(uVar9 >> 0x20);
        fVar8 = (fVar12 - fVar1) * unaff_s12;
        fVar13 = ((float)uVar11 - fVar14) * (float)unaff_d11;
        fVar12 = (float)((ulong)unaff_d11 >> 0x20);
        fVar16 = ((float)(uVar11 >> 0x20) - fVar15) * fVar12;
        fVar14 = fVar14 + fVar13;
        fVar15 = fVar15 + fVar16;
        fVar3 = (fVar1 + fVar8) - fVar8;
        fVar8 = fVar8 + fVar1 + fVar8;
        fVar1 = fVar14 - fVar13;
        fVar10 = fVar15 - fVar16;
        fVar13 = fVar13 + fVar14;
        fVar16 = fVar16 + fVar15;
        if (fVar2 <= fVar3) {
          fVar3 = fVar2;
        }
        if (fVar8 <= fVar2) {
          fVar8 = fVar2;
        }
        uVar9 = uVar5 ^ (uVar5 ^ CONCAT44(fVar10,fVar1)) &
                        CONCAT44(-(uint)(fVar10 < fVar7),-(uint)(fVar1 < fVar6));
        uVar5 = uVar5 ^ (uVar5 ^ CONCAT44(fVar16,fVar13)) &
                        CONCAT44(-(uint)(fVar7 < fVar16),-(uint)(fVar6 < fVar13));
        fVar1 = (float)uVar9;
        fVar2 = (float)(uVar9 >> 0x20);
        unaff_s10 = (fVar8 - fVar3) * unaff_s12;
        fVar6 = ((float)uVar5 - fVar1) * (float)unaff_d11;
        fVar12 = ((float)(uVar5 >> 0x20) - fVar2) * fVar12;
        unaff_d9 = CONCAT44(fVar12,fVar6);
        unaff_s8 = fVar3 + unaff_s10;
        in_stack_00000010 = CONCAT44(fVar2 + fVar12,fVar1 + fVar6);
      }
      uVar5 = FUN_072070ec(&stack0x00000048,*unaff_x24);
      unaff_x21 = in_stack_00000058;
      if ((uVar5 & 1) == 0) {
        FUN_072070e8(&stack0x00000048,*unaff_x22);
        *(float *)(unaff_x19 + 1) = unaff_s8;
        *(undefined8 *)((long)unaff_x19 + 0xc) = unaff_d9;
        *unaff_x19 = in_stack_00000010;
        *(float *)((long)unaff_x19 + 0x14) = unaff_s10;
        return;
      }
      if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f1362c();
      }
      FUN_087a31a8(&stack0x00000020,in_stack_00000058,0);
      unaff_d15 = uStack000000000000002c;
      unaff_s14 = (float)uStack0000000000000034;
    } while (*(char *)(unaff_x23 + 0x7b5) != '\0');
  } while( true );
}


