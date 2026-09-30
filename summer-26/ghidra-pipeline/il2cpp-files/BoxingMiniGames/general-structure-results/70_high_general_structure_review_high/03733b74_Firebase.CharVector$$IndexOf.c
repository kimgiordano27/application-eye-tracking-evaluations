/*
FUNCTION_NAME: Firebase.CharVector$$IndexOf
ENTRY_POINT: 03733b74
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_13;strong_file_logging_hits_3;telemetry_or_network_hits_5;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Firebase_CharVector__IndexOf(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  void *unaff_x19;
  undefined1 *unaff_x21;
  ulong unaff_x23;
  int *piVar7;
  uint uVar8;
  undefined8 *puVar9;
  long unaff_x29;
  undefined8 uVar10;
  undefined8 in_stack_000006a8;
  undefined8 in_stack_000006b0;
  
  if (param_1 == 0) {
    memset(&stack0x00000470,0,0x618);
    uVar4 = FUN_03733fac();
    if ((uVar4 & 1) != 0) {
      uVar4 = FUN_03734bf4();
      if (((unaff_x23 & 1) != 0) && (*(char *)(unaff_x29 + -0x54) != '\0')) {
        for (uVar6 = *(ulong *)((long)unaff_x19 + 0xf8) & 0xfffffffffffffff0; uVar6 < uVar4;
            uVar6 = uVar6 + 0x10) {
        }
      }
      memcpy(&stack0x00000260,unaff_x19,0x210);
      uVar6 = 0;
      piVar7 = (int *)&stack0x00000488;
      puVar9 = (undefined8 *)&stack0x00000260;
      do {
        puVar3 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
        iVar1 = *piVar7;
        if (iVar1 == 0) {
          bVar2 = *(byte *)(unaff_x29 + -0x56);
          if (uVar6 == bVar2) {
            if (bVar2 < 0x1f) {
              if ((bVar2 != 0x1d) && (bVar2 != 0x1e)) goto LAB_03733e04;
            }
            else if ((bVar2 != 0x22) && ((bVar2 != 0x20 && (bVar2 != 0x1f)))) {
LAB_03733e04:
              if (0x1c < bVar2) {
                fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                        "libunwind: %s - %s\n","getRegister","unsupported arm64 register");
                fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                abort();
              }
            }
          }
        }
        else {
          uVar8 = (uint)uVar6;
          if ((uVar8 & 0x60) == 0x40) {
            if (iVar1 < 5) {
              uVar10 = 0;
              if (iVar1 != 1) {
                if (iVar1 != 2) {
LAB_03733f10:
                  fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                          "libunwind: %s - %s\n","getSavedFloatRegister",
                          "unsupported restore location for float register");
                  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                uVar10 = *(undefined8 *)(*(long *)(piVar7 + 2) + uVar4);
              }
            }
            else if (iVar1 == 5) {
              uVar10 = *(undefined8 *)
                        ((long)unaff_x19 +
                        ((*(long *)(piVar7 + 2) << 0x20) + -0x4000000000 >> 0x1d) + 0x110);
            }
            else {
              if (iVar1 != 6) goto LAB_03733f10;
              puVar5 = (undefined8 *)FUN_0373548c(*(undefined8 *)(piVar7 + 2));
              uVar10 = *puVar5;
            }
            *(undefined8 *)(&stack0x00000170 + uVar6 * 8) = uVar10;
          }
          else if (uVar6 == *(byte *)(unaff_x29 + -0x56)) {
            FUN_03734d28();
          }
          else if (uVar6 == 0x22) {
            FUN_03734d28();
          }
          else {
            if (0xffffffe0 < uVar8 - 0x40) {
              return 0xffffe672;
            }
            uVar10 = FUN_03734d28();
            puVar3 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
            if ((int)uVar8 < 0x1f) {
              if ((uVar8 != 0x1d) && (uVar8 != 0x1e)) goto LAB_03733e58;
            }
            else if ((uVar8 != 0x1f) && ((uVar8 != 0x22 && (uVar8 != 0x20)))) {
LAB_03733e58:
              if (0x1c < uVar6) {
                fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                        "libunwind: %s - %s\n","setRegister","unsupported arm64 register");
                fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *puVar9 = uVar10;
            }
          }
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
        puVar9 = puVar9 + 1;
        if (uVar6 == 0x60) {
          *unaff_x21 = *(undefined1 *)(unaff_x29 + -0x58);
          memcpy(&stack0x00000050,unaff_x19,0x210);
          *(undefined8 *)(unaff_x29 + -0x18) = in_stack_000006b0;
          *(undefined8 *)(unaff_x29 + -0x20) = in_stack_000006a8;
          if (*(int *)(unaff_x29 + -0x20) != 0) {
            FUN_03734d28();
          }
          memcpy(unaff_x19,&stack0x00000260,0x210);
          return 1;
        }
      } while( true );
    }
  }
  return 0xffffe66e;
}


