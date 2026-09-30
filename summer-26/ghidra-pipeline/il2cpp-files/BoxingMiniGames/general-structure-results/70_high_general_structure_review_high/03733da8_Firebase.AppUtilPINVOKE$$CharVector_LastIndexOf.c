/*
FUNCTION_NAME: Firebase.AppUtilPINVOKE$$CharVector_LastIndexOf
ENTRY_POINT: 03733da8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_3;telemetry_or_network_hits_5;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 Firebase_AppUtilPINVOKE__CharVector_LastIndexOf(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar4;
  undefined8 uVar5;
  void *unaff_x19;
  undefined1 *unaff_x21;
  long unaff_x22;
  int *piVar6;
  int *unaff_x24;
  long unaff_x25;
  int iVar7;
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
    if ((bool)in_CY && !(bool)in_ZR) {
      return 0xffffe672;
    }
    uVar5 = FUN_03734d28();
    puVar3 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
    iVar7 = (int)unaff_x26;
    piVar6 = unaff_x24;
    if (iVar7 < 0x1f) {
      if (iVar7 == 0x1d) {
        *in_stack_00000018 = uVar5;
      }
      else if (iVar7 == 0x1e) {
        *in_stack_00000008 = uVar5;
      }
      else {
LAB_03733e58:
        if (0x1c < unaff_x26) {
          fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                  "libunwind: %s - %s\n","setRegister","unsupported arm64 register");
          fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *unaff_x27 = uVar5;
      }
    }
    else if (iVar7 == 0x1f) {
      *in_stack_00000020 = uVar5;
    }
    else if (iVar7 == 0x22) {
      *in_stack_00000048 = uVar5;
    }
    else {
      if (iVar7 != 0x20) goto LAB_03733e58;
      *in_stack_00000010 = uVar5;
    }
LAB_03733c98:
    puVar3 = Method_Oculus_Platform_Request<DestinationList>__ctor__;
    unaff_x26 = unaff_x26 + 1;
    unaff_x24 = piVar6 + 4;
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
    iVar7 = *unaff_x24;
    if (iVar7 == 0) {
      bVar1 = *(byte *)(unaff_x29 + -0x56);
      piVar6 = unaff_x24;
      if (unaff_x26 == bVar1) {
        if (bVar1 < 0x1f) {
          if ((bVar1 == 0x1d) || (bVar1 == 0x1e)) goto LAB_03733c98;
        }
        else if ((bVar1 == 0x22) || ((bVar1 == 0x20 || (bVar1 == 0x1f)))) goto LAB_03733c98;
        if (0x1c < bVar1) {
          fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                  "libunwind: %s - %s\n","getRegister","unsupported arm64 register");
          fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      goto LAB_03733c98;
    }
    if (((uint)unaff_x26 & 0x60) == 0x40) {
      if (iVar7 < 5) {
        uVar5 = 0;
        if (iVar7 != 1) {
          if (iVar7 != 2) {
LAB_03733f10:
            fprintf((FILE *)(Method_Oculus_Platform_Request<DestinationList>__ctor__ + 0x130),
                    "libunwind: %s - %s\n","getSavedFloatRegister",
                    "unsupported restore location for float register");
            fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar5 = *(undefined8 *)(*(long *)(piVar6 + 6) + unaff_x22);
        }
      }
      else if (iVar7 == 5) {
        uVar5 = *(undefined8 *)
                 ((long)unaff_x19 +
                 ((*(long *)(piVar6 + 6) << 0x20) + -0x4000000000 >> 0x1d) + 0x110);
      }
      else {
        if (iVar7 != 6) goto LAB_03733f10;
        puVar4 = (undefined8 *)FUN_0373548c(*(undefined8 *)(piVar6 + 6));
        uVar5 = *puVar4;
      }
      *(undefined8 *)(unaff_x25 + unaff_x26 * 8 + -0xf0) = uVar5;
      piVar6 = unaff_x24;
      goto LAB_03733c98;
    }
    if (unaff_x26 == *(byte *)(unaff_x29 + -0x56)) {
      FUN_03734d28();
      piVar6 = unaff_x24;
      goto LAB_03733c98;
    }
    if (unaff_x26 == 0x22) {
      uVar5 = FUN_03734d28();
      *in_stack_00000048 = uVar5;
      piVar6 = unaff_x24;
      goto LAB_03733c98;
    }
    uVar2 = (uint)unaff_x26 - 0x40;
    in_CY = 0xffffffdf < uVar2;
    in_ZR = uVar2 == 0xffffffe0;
  } while( true );
}


