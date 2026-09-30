/*
FUNCTION_NAME: Firebase.CharVector$$LastIndexOf
ENTRY_POINT: 03733cd0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_15;strong_file_logging_hits_3;telemetry_or_network_hits_6;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Firebase_CharVector__LastIndexOf(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 uVar4;
  int in_w8;
  void *unaff_x19;
  undefined1 *unaff_x21;
  long unaff_x22;
  int *piVar5;
  int *unaff_x24;
  long unaff_x25;
  uint uVar6;
  ulong unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_000006a8;
  undefined8 in_stack_000006b0;
  
  do {
    if (!(bool)in_ZR) {
      if (in_w8 != 2) {
LAB_03733f10:
        puVar2 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
        fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                "libunwind: %s - %s\n","getSavedFloatRegister",
                "unsupported restore location for float register");
        fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      param_1 = *(undefined8 *)(*(long *)(unaff_x24 + 2) + unaff_x22);
    }
LAB_03733c90:
    *(undefined8 *)(unaff_x25 + unaff_x26 * 8 + -0xf0) = param_1;
    piVar5 = unaff_x24;
LAB_03733c98:
    puVar2 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
    unaff_x26 = unaff_x26 + 1;
    unaff_x24 = piVar5 + 4;
    unaff_x27 = unaff_x27 + 1;
    if (unaff_x26 == 0x60) {
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
    in_w8 = *unaff_x24;
    if (in_w8 == 0) {
      bVar1 = *(byte *)(unaff_x29 + -0x56);
      piVar5 = unaff_x24;
      if (unaff_x26 == bVar1) {
        if (bVar1 < 0x1f) {
          if ((bVar1 == 0x1d) || (bVar1 == 0x1e)) goto LAB_03733c98;
        }
        else if ((bVar1 == 0x22) || ((bVar1 == 0x20 || (bVar1 == 0x1f)))) goto LAB_03733c98;
        if (0x1c < bVar1) {
          fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                  "libunwind: %s - %s\n","getRegister","unsupported arm64 register");
          fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      goto LAB_03733c98;
    }
    uVar6 = (uint)unaff_x26;
    if ((uVar6 & 0x60) != 0x40) {
      if (unaff_x26 == *(byte *)(unaff_x29 + -0x56)) {
        FUN_03734d28();
        piVar5 = unaff_x24;
        goto LAB_03733c98;
      }
      if (unaff_x26 != 0x22) {
        if (0xffffffe0 < uVar6 - 0x40) {
          return 0xffffe672;
        }
        uVar4 = FUN_03734d28();
        puVar2 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
        if ((int)uVar6 < 0x1f) {
          if (uVar6 == 0x1d) {
            *in_stack_00000018 = uVar4;
            piVar5 = unaff_x24;
            goto LAB_03733c98;
          }
          if (uVar6 == 0x1e) {
            *in_stack_00000008 = uVar4;
            piVar5 = unaff_x24;
            goto LAB_03733c98;
          }
        }
        else {
          if (uVar6 == 0x1f) {
            *in_stack_00000020 = uVar4;
            piVar5 = unaff_x24;
            goto LAB_03733c98;
          }
          if (uVar6 == 0x22) {
            *in_stack_00000048 = uVar4;
            piVar5 = unaff_x24;
            goto LAB_03733c98;
          }
          if (uVar6 == 0x20) {
            *in_stack_00000010 = uVar4;
            piVar5 = unaff_x24;
            goto LAB_03733c98;
          }
        }
        if (0x1c < unaff_x26) {
          fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                  "libunwind: %s - %s\n","setRegister","unsupported arm64 register");
          fflush((FILE *)(puVar2 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *unaff_x27 = uVar4;
        piVar5 = unaff_x24;
        goto LAB_03733c98;
      }
      uVar4 = FUN_03734d28();
      *in_stack_00000048 = uVar4;
      piVar5 = unaff_x24;
      goto LAB_03733c98;
    }
    if (4 < in_w8) {
      if (in_w8 == 5) {
        param_1 = *(undefined8 *)
                   ((long)unaff_x19 +
                   ((*(long *)(piVar5 + 6) << 0x20) + -0x4000000000 >> 0x1d) + 0x110);
      }
      else {
        if (in_w8 != 6) goto LAB_03733f10;
        puVar3 = (undefined8 *)FUN_0373548c(*(undefined8 *)(piVar5 + 6));
        param_1 = *puVar3;
      }
      goto LAB_03733c90;
    }
    param_1 = 0;
    in_ZR = in_w8 == 1;
  } while( true );
}


