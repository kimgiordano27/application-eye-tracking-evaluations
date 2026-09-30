/*
FUNCTION_NAME: Best.HTTP.SecureProtocol.Org.BouncyCastle.Crypto.EC.CustomNamedCurves.SecP160K1Holder$$CreateParameters
ENTRY_POINT: 02f5ec9c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_10;strong_file_logging_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Best_HTTP_SecureProtocol_Org_BouncyCastle_Crypto_EC_CustomNamedCurves_SecP160K1Holder__CreateParameters
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,void *param_5
          ,undefined1 *param_6,ulong param_7)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  uint uVar9;
  undefined8 *puVar10;
  long unaff_x29;
  undefined8 uVar11;
  undefined8 in_stack_000006a8;
  undefined8 in_stack_000006b0;
  
  lVar4 = FUN_02f5e0a0(param_2,param_1,unaff_x29 + -0x50,unaff_x29 + -0x88,0);
  if (lVar4 == 0) {
    memset(&stack0x00000470,0,0x618);
    uVar5 = FUN_02f5f0fc(param_2,unaff_x29 + -0x50,unaff_x29 + -0x88,param_3,4,&stack0x00000470);
    if ((uVar5 & 1) != 0) {
      uVar5 = FUN_02f5fd44(param_2,&stack0x00000470,param_5);
      if (((param_7 & 1) != 0) && (*(char *)(unaff_x29 + -0x54) != '\0')) {
        for (uVar7 = *(ulong *)((long)param_5 + 0xf8) & 0xfffffffffffffff0; uVar7 < uVar5;
            uVar7 = uVar7 + 0x10) {
        }
      }
      memcpy(&stack0x00000260,param_5,0x210);
      uVar7 = 0;
      piVar8 = (int *)&stack0x00000488;
      puVar10 = (undefined8 *)&stack0x00000260;
      do {
        puVar3 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
        iVar1 = *piVar8;
        if (iVar1 == 0) {
          bVar2 = *(byte *)(unaff_x29 + -0x56);
          if (uVar7 == bVar2) {
            if (bVar2 < 0x1f) {
              if ((bVar2 != 0x1d) && (bVar2 != 0x1e)) goto LAB_02f5ef54;
            }
            else if ((bVar2 != 0x22) && ((bVar2 != 0x20 && (bVar2 != 0x1f)))) {
LAB_02f5ef54:
              if (0x1c < bVar2) {
                fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
                        "libunwind: %s - %s\n","getRegister","unsupported arm64 register");
                fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                abort();
              }
            }
          }
        }
        else {
          uVar9 = (uint)uVar7;
                    /* catch() { ... } // from try @ 02f5ee50 with catch @ 02f5ee0c */
          if ((uVar9 & 0x60) == 0x40) {
            if (iVar1 < 5) {
              uVar11 = 0;
              if (iVar1 != 1) {
                if (iVar1 != 2) {
LAB_02f5f060:
                  fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
                          "libunwind: %s - %s\n","getSavedFloatRegister",
                          "unsupported restore location for float register");
                  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                uVar11 = *(undefined8 *)(*(long *)(piVar8 + 2) + uVar5);
              }
            }
            else if (iVar1 == 5) {
              uVar11 = *(undefined8 *)
                        ((long)param_5 +
                        ((*(long *)(piVar8 + 2) << 0x20) + -0x4000000000 >> 0x1d) + 0x110);
            }
            else {
              if (iVar1 != 6) goto LAB_02f5f060;
              puVar6 = (undefined8 *)FUN_02f605dc(*(undefined8 *)(piVar8 + 2),param_2,param_5,uVar5)
              ;
              uVar11 = *puVar6;
            }
            *(undefined8 *)(&stack0x00000170 + uVar7 * 8) = uVar11;
          }
          else if (uVar7 == *(byte *)(unaff_x29 + -0x56)) {
            FUN_02f5fe78(param_2,param_5,uVar5,piVar8);
          }
          else if (uVar7 == 0x22) {
            FUN_02f5fe78(param_2,param_5,uVar5,piVar8);
          }
          else {
            if (0xffffffe0 < uVar9 - 0x40) {
              return 0xffffe672;
            }
            uVar11 = FUN_02f5fe78(param_2,param_5,uVar5,piVar8);
            puVar3 = Method_UnityEngine_Rendering_DynamicArray<char>__ctor__;
            if ((int)uVar9 < 0x1f) {
              if ((uVar9 != 0x1d) && (uVar9 != 0x1e)) goto LAB_02f5efa8;
            }
            else if ((uVar9 != 0x1f) && ((uVar9 != 0x22 && (uVar9 != 0x20)))) {
LAB_02f5efa8:
              if (0x1c < uVar7) {
                fprintf((FILE *)(Method_UnityEngine_Rendering_DynamicArray<char>__ctor__ + 0x130),
                        "libunwind: %s - %s\n","setRegister","unsupported arm64 register");
                fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *puVar10 = uVar11;
            }
          }
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
        puVar10 = puVar10 + 1;
        if (uVar7 == 0x60) {
          *param_6 = *(undefined1 *)(unaff_x29 + -0x58);
          memcpy(&stack0x00000050,param_5,0x210);
          *(undefined8 *)(unaff_x29 + -0x18) = in_stack_000006b0;
          *(undefined8 *)(unaff_x29 + -0x20) = in_stack_000006a8;
          if (*(int *)(unaff_x29 + -0x20) != 0) {
            FUN_02f5fe78(param_2,&stack0x00000050,uVar5,unaff_x29 + -0x20);
          }
          memcpy(param_5,&stack0x00000260,0x210);
          return 1;
        }
      } while( true );
    }
  }
  return 0xffffe66e;
}


