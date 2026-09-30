/*
FUNCTION_NAME: Best.HTTP.SecureProtocol.Org.BouncyCastle.Crypto.EC.CustomNamedCurves.SecP160R1Holder$$.ctor
ENTRY_POINT: 02f5ee10
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_12;strong_file_logging_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_EC_CustomNamedCurves_SecP160R1Holder___ctor(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  int in_w8;
  void *unaff_x19;
  undefined1 *unaff_x21;
  long unaff_x22;
  int *unaff_x24;
  long unaff_x25;
  uint uVar4;
  ulong unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined8 uVar5;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_000006a8;
  undefined8 in_stack_000006b0;
  
  do {
    puVar2 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
    if (in_w8 < 5) {
      uVar5 = 0;
      if (in_w8 != 1) {
        if (in_w8 != 2) {
LAB_02f5f060:
          fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
                  "libunwind: %s - %s\n","getSavedFloatRegister",
                  "unsupported restore location for float register");
          fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar5 = *(undefined8 *)(*(long *)(unaff_x24 + 2) + unaff_x22);
      }
    }
    else if (in_w8 == 5) {
      uVar5 = *(undefined8 *)
               ((long)unaff_x19 +
               ((*(long *)(unaff_x24 + 2) << 0x20) + -0x4000000000 >> 0x1d) + 0x110);
    }
    else {
      if (in_w8 != 6) goto LAB_02f5f060;
      puVar3 = (undefined8 *)FUN_02f605dc(*(undefined8 *)(unaff_x24 + 2));
      uVar5 = *puVar3;
    }
    *(undefined8 *)(unaff_x25 + unaff_x26 * 8 + -0xf0) = uVar5;
LAB_02f5ede8:
    puVar2 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
    unaff_x26 = unaff_x26 + 1;
    unaff_x24 = unaff_x24 + 4;
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
      if (unaff_x26 == bVar1) {
        if (bVar1 < 0x1f) {
          if ((bVar1 == 0x1d) || (bVar1 == 0x1e)) goto LAB_02f5ede8;
        }
        else if ((bVar1 == 0x22) || ((bVar1 == 0x20 || (bVar1 == 0x1f)))) goto LAB_02f5ede8;
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
    uVar4 = (uint)unaff_x26;
    if ((uVar4 & 0x60) != 0x40) {
      if (unaff_x26 == *(byte *)(unaff_x29 + -0x56)) {
        FUN_02f5fe78();
        goto LAB_02f5ede8;
      }
      if (unaff_x26 != 0x22) {
        if (0xffffffe0 < uVar4 - 0x40) {
          return 0xffffe672;
        }
        uVar5 = FUN_02f5fe78();
        puVar2 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
        if ((int)uVar4 < 0x1f) {
          if (uVar4 == 0x1d) {
            *in_stack_00000018 = uVar5;
            goto LAB_02f5ede8;
          }
          if (uVar4 == 0x1e) {
            *in_stack_00000008 = uVar5;
            goto LAB_02f5ede8;
          }
        }
        else {
          if (uVar4 == 0x1f) {
            *in_stack_00000020 = uVar5;
            goto LAB_02f5ede8;
          }
          if (uVar4 == 0x22) {
            *in_stack_00000048 = uVar5;
            goto LAB_02f5ede8;
          }
          if (uVar4 == 0x20) {
            *in_stack_00000010 = uVar5;
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
        *unaff_x27 = uVar5;
        goto LAB_02f5ede8;
      }
      uVar5 = FUN_02f5fe78();
      *in_stack_00000048 = uVar5;
      goto LAB_02f5ede8;
    }
  } while( true );
}


