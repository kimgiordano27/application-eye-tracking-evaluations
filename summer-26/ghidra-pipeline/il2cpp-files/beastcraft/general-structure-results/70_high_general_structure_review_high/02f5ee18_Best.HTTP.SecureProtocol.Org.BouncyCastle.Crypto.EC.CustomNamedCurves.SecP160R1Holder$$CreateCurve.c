/*
FUNCTION_NAME: Best.HTTP.SecureProtocol.Org.BouncyCastle.Crypto.EC.CustomNamedCurves.SecP160R1Holder$$CreateCurve
ENTRY_POINT: 02f5ee18
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_12;strong_file_logging_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_EC_CustomNamedCurves_SecP160R1Holder__CreateCurve
          (void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  int in_w8;
  void *unaff_x19;
  undefined1 *unaff_x21;
  long unaff_x22;
  int *piVar4;
  int *unaff_x24;
  long unaff_x25;
  uint uVar5;
  ulong unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined8 uVar6;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_000006a8;
  undefined8 in_stack_000006b0;
  
  do {
    uVar6 = 0;
    if (in_w8 != 1) {
      if (in_w8 != 2) {
LAB_02f5f060:
        puVar2 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
        fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
                "libunwind: %s - %s\n","getSavedFloatRegister",
                "unsupported restore location for float register");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar6 = *(undefined8 *)(*(long *)(unaff_x24 + 2) + unaff_x22);
    }
LAB_02f5ede0:
    *(undefined8 *)(unaff_x25 + unaff_x26 * 8 + -0xf0) = uVar6;
    piVar4 = unaff_x24;
LAB_02f5ede8:
    puVar2 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
    unaff_x26 = unaff_x26 + 1;
    unaff_x24 = piVar4 + 4;
    unaff_x27 = unaff_x27 + 1;
    if (unaff_x26 == 0x60) {
      *unaff_x21 = *(undefined1 *)(unaff_x29 + -0x58);
      memcpy(&stack0x00000050,unaff_x19,0x210);
      *(undefined8 *)(unaff_x29 + -0x18) = in_stack_000006b0;
      *(undefined8 *)(unaff_x29 + -0x20) = in_stack_000006a8;
      if (*(int *)(unaff_x29 + -0x20) != 0) {
        FUN_02f5fe78();
      }
      memcpy(unaff_x19,&stack0x00000260,0x210);
      return 1;
    }
    in_w8 = *unaff_x24;
    if (in_w8 == 0) {
      bVar1 = *(byte *)(unaff_x29 + -0x56);
      piVar4 = unaff_x24;
      if (unaff_x26 == bVar1) {
                    /* try { // try from 02f5ee44 to 0305ee4f has its CatchHandler @ 02f5eef4 */
        if (bVar1 < 0x1f) {
          if ((bVar1 == 0x1d) || (bVar1 == 0x1e)) goto LAB_02f5ede8;
        }
        else {
                    /* try { // try from 02f5ee50 to 0305ef13 has its CatchHandler @ 02f5ee0c */
          if ((bVar1 == 0x22) || ((bVar1 == 0x20 || (bVar1 == 0x1f)))) goto LAB_02f5ede8;
        }
        if (0x1c < bVar1) {
          fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
                  "libunwind: %s - %s\n","getRegister","unsupported arm64 register");
          fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      goto LAB_02f5ede8;
    }
    uVar5 = (uint)unaff_x26;
    if ((uVar5 & 0x60) != 0x40) {
      if (unaff_x26 == *(byte *)(unaff_x29 + -0x56)) {
        FUN_02f5fe78();
        piVar4 = unaff_x24;
        goto LAB_02f5ede8;
      }
      if (unaff_x26 != 0x22) {
        if (0xffffffe0 < uVar5 - 0x40) {
          return 0xffffe672;
        }
        uVar6 = FUN_02f5fe78();
        puVar2 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
        if ((int)uVar5 < 0x1f) {
          if (uVar5 == 0x1d) {
            *in_stack_00000018 = uVar6;
            piVar4 = unaff_x24;
            goto LAB_02f5ede8;
          }
          if (uVar5 == 0x1e) {
            *in_stack_00000008 = uVar6;
            piVar4 = unaff_x24;
            goto LAB_02f5ede8;
          }
        }
        else {
          if (uVar5 == 0x1f) {
            *in_stack_00000020 = uVar6;
            piVar4 = unaff_x24;
            goto LAB_02f5ede8;
          }
          if (uVar5 == 0x22) {
            *in_stack_00000048 = uVar6;
            piVar4 = unaff_x24;
            goto LAB_02f5ede8;
          }
          if (uVar5 == 0x20) {
            *in_stack_00000010 = uVar6;
            piVar4 = unaff_x24;
            goto LAB_02f5ede8;
          }
        }
        if (0x1c < unaff_x26) {
          fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
                  "libunwind: %s - %s\n","setRegister","unsupported arm64 register");
          fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *unaff_x27 = uVar6;
        piVar4 = unaff_x24;
        goto LAB_02f5ede8;
      }
      uVar6 = FUN_02f5fe78();
      *in_stack_00000048 = uVar6;
      piVar4 = unaff_x24;
      goto LAB_02f5ede8;
    }
  } while (in_w8 < 5);
  if (in_w8 == 5) {
    uVar6 = *(undefined8 *)
             ((long)unaff_x19 + ((*(long *)(piVar4 + 6) << 0x20) + -0x4000000000 >> 0x1d) + 0x110);
  }
  else {
    if (in_w8 != 6) goto LAB_02f5f060;
    puVar3 = (undefined8 *)FUN_02f605dc(*(undefined8 *)(piVar4 + 6));
    uVar6 = *puVar3;
  }
  goto LAB_02f5ede0;
}


