/*
FUNCTION_NAME: Amazon.Runtime.Credentials.Internal.SsoTokenUtils$$ToJson
ENTRY_POINT: 04a6a5e4
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_14;strong_file_logging_hits_3;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Amazon_Runtime_Credentials_Internal_SsoTokenUtils__ToJson(ulong param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  void *unaff_x19;
  undefined1 *unaff_x21;
  long unaff_x22;
  int *piVar5;
  int *unaff_x24;
  long unaff_x25;
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
    puVar2 = PTR___sF_0acf9558;
    uVar4 = (uint)param_1;
    piVar5 = unaff_x24;
    if ((int)uVar4 < 0x1f) {
      if ((uVar4 != 0x1d) && (uVar4 != 0x1e)) goto LAB_04a6a6f4;
    }
    else if ((uVar4 != 0x22) && ((uVar4 != 0x20 && (uVar4 != 0x1f)))) {
LAB_04a6a6f4:
      if (0x1c < uVar4) {
        fprintf((FILE *)(PTR___sF_0acf9558 + 0x130),"libunwind: %s - %s\n","getRegister",
                "unsupported arm64 register");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
LAB_04a6a588:
    do {
      puVar2 = PTR___sF_0acf9558;
      unaff_x26 = unaff_x26 + 1;
      unaff_x24 = piVar5 + 4;
      unaff_x27 = unaff_x27 + 1;
      if (unaff_x26 == 0x60) {
        *unaff_x21 = *(undefined1 *)(unaff_x29 + -0x58);
        memcpy(&stack0x00000050,unaff_x19,0x210);
        *(undefined8 *)(unaff_x29 + -0x18) = in_stack_000006b0;
        *(undefined8 *)(unaff_x29 + -0x20) = in_stack_000006a8;
        if (*(int *)(unaff_x29 + -0x20) != 0) {
          FUN_04a6b618();
        }
        memcpy(unaff_x19,&stack0x00000260,0x210);
        return 1;
      }
      iVar1 = *unaff_x24;
      if (iVar1 != 0) {
        uVar4 = (uint)unaff_x26;
        if ((uVar4 & 0x60) == 0x40) {
          if (iVar1 < 5) {
            uVar6 = 0;
            if (iVar1 != 1) {
              if (iVar1 != 2) {
LAB_04a6a800:
                fprintf((FILE *)(PTR___sF_0acf9558 + 0x130),"libunwind: %s - %s\n",
                        "getSavedFloatRegister","unsupported restore location for float register");
                fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
                abort();
              }
              uVar6 = *(undefined8 *)(*(long *)(piVar5 + 6) + unaff_x22);
            }
          }
          else if (iVar1 == 5) {
            uVar6 = *(undefined8 *)
                     ((long)unaff_x19 +
                     ((*(long *)(piVar5 + 6) << 0x20) + -0x4000000000 >> 0x1d) + 0x110);
          }
          else {
            if (iVar1 != 6) goto LAB_04a6a800;
            puVar3 = (undefined8 *)FUN_04a6bd7c(*(undefined8 *)(piVar5 + 6));
            uVar6 = *puVar3;
          }
          *(undefined8 *)(unaff_x25 + unaff_x26 * 8 + -0xf0) = uVar6;
          piVar5 = unaff_x24;
          goto LAB_04a6a588;
        }
        if (unaff_x26 == *(byte *)(unaff_x29 + -0x56)) {
          FUN_04a6b618();
          piVar5 = unaff_x24;
          goto LAB_04a6a588;
        }
        if (unaff_x26 != 0x22) {
          if (0xffffffe0 < uVar4 - 0x40) {
            return 0xffffe672;
          }
          uVar6 = FUN_04a6b618();
          puVar2 = PTR___sF_0acf9558;
          if ((int)uVar4 < 0x1f) {
            if (uVar4 == 0x1d) {
              *in_stack_00000018 = uVar6;
              piVar5 = unaff_x24;
              goto LAB_04a6a588;
            }
            if (uVar4 == 0x1e) {
              *in_stack_00000008 = uVar6;
              piVar5 = unaff_x24;
              goto LAB_04a6a588;
            }
          }
          else {
            if (uVar4 == 0x1f) {
              *in_stack_00000020 = uVar6;
              piVar5 = unaff_x24;
              goto LAB_04a6a588;
            }
            if (uVar4 == 0x22) {
              *in_stack_00000048 = uVar6;
              piVar5 = unaff_x24;
              goto LAB_04a6a588;
            }
            if (uVar4 == 0x20) {
              *in_stack_00000010 = uVar6;
              piVar5 = unaff_x24;
              goto LAB_04a6a588;
            }
          }
          if (0x1c < unaff_x26) {
            fprintf((FILE *)(PTR___sF_0acf9558 + 0x130),"libunwind: %s - %s\n","setRegister",
                    "unsupported arm64 register");
            fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *unaff_x27 = uVar6;
          piVar5 = unaff_x24;
          goto LAB_04a6a588;
        }
        uVar6 = FUN_04a6b618();
        *in_stack_00000048 = uVar6;
        piVar5 = unaff_x24;
        goto LAB_04a6a588;
      }
      param_1 = (ulong)*(byte *)(unaff_x29 + -0x56);
      piVar5 = unaff_x24;
    } while (unaff_x26 != param_1);
  } while( true );
}


